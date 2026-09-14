// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Order.Assert
// Imports: public import Lean.Meta.Tactic.Grind.Order.OrderM import Init.Grind.Propagator import Init.Grind.Order import Lean.Meta.Tactic.Grind.PropagatorAttr import Lean.Meta.Tactic.Grind.Order.Util import Lean.Meta.Tactic.Grind.Order.Proof
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_get_x27___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_alreadyInternalized___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getCnstr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getDist_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_Weight_compare(lean_object*, lean_object*);
lean_object* l_Ordering_ctorIdx(uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_modifyStruct___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Order_Weight_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_Weight_isNeg(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_ToPropagate_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_Cnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Order_Weight_isZero(lean_object*);
uint8_t l_Lean_Meta_Grind_Order_instDecidableLEWeight(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkUnsatProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkSelfUnsatProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isLinearPreorder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_Meta_Grind_Order_mkLinearOrdRingPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_isRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_hasLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLeLinearPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
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
lean_object* l_Lean_AssocList_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_getNodeId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkLePreorderPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkOrdRingPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateSelfEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Order_mkPropagateSelfEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "order"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "propagate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 118, 119, 155, 86, 132, 17, 202)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 44, 102, 149, 148, 89, 41, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "eq_trans_true"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__3_value),LEAN_SCALAR_PTR_LITERAL(124, 15, 222, 194, 99, 23, 253, 188)}};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Tactic.Grind.Order.Assert"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.Meta.Grind.Order.propagateSelfEqTrue"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "assertion violation: c.u == c.v\n  "};
static const lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "eq_trans_false"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 213, 247, 44, 34, 57, 174, 253)}};
static const lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.Grind.Order.propagateSelfEqFalse"};
static const lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0(lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nat_eq"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 240, 39, 1, 35, 212, 161, 83)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "check_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 118, 119, 155, 86, 132, 17, 202)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 223, 60, 213, 11, 195, 227, 109)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 2, .m_data = "-ε"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "check_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 118, 119, 155, 86, 132, 17, 202)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 206, 15, 111, 12, 66, 29, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableProd___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Order_addEdge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "add_edge"};
static const lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 118, 119, 155, 86, 132, 17, 202)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_addEdge___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 172, 169, 19, 106, 199, 68, 136)}};
static const lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Order_addEdge___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_addEdge___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_addEdge___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "eq_mp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 160, 125, 46, 156, 174, 144, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 139, 28, 5, 248, 187, 127, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__3_value),LEAN_SCALAR_PTR_LITERAL(118, 196, 12, 238, 101, 107, 106, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "int_lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(159, 110, 8, 88, 103, 54, 255, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__14_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_of_not_lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__17_value),LEAN_SCALAR_PTR_LITERAL(68, 55, 231, 12, 192, 19, 143, 220)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_of_not_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__19_value),LEAN_SCALAR_PTR_LITERAL(22, 234, 13, 233, 13, 1, 104, 14)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lt_of_not_le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__21_value),LEAN_SCALAR_PTR_LITERAL(12, 166, 193, 80, 9, 231, 149, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "le_of_not_lt_k"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__23_value),LEAN_SCALAR_PTR_LITERAL(106, 102, 104, 31, 59, 68, 161, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "lt_of_not_le_k"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__25_value),LEAN_SCALAR_PTR_LITERAL(103, 116, 151, 104, 206, 219, 96, 226)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_mp_not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__27_value),LEAN_SCALAR_PTR_LITERAL(251, 101, 191, 216, 104, 179, 193, 169)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 2, .m_data = "¬ "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "eq_trans_false'"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 158, 115, 194, 144, 122, 19, 107)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "eq_trans_true'"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__3_value),LEAN_SCALAR_PTR_LITERAL(38, 24, 59, 247, 190, 28, 198, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "le_of_eq_1"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 70, 170, 29, 105, 211, 134, 38)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "le_of_eq_2"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 146, 15, 83, 168, 123, 84, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_of_eq_1_k"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 93, 209, 5, 159, 56, 200, 98)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_of_eq_2_k"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__6_value),LEAN_SCALAR_PTR_LITERAL(82, 95, 72, 171, 241, 190, 67, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Order_processNewEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Order_processNewEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "of_natCast_eq"};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(169, 229, 71, 248, 88, 192, 235, 207)}};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Order_processNewEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "of_nat_eq"};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 162, 19, 121, 184, 103, 23)}};
static const lean_ctor_object l_Lean_Meta_Grind_Order_processNewEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(190, 179, 250, 96, 74, 22, 134, 180)}};
static const lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Order_processNewEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Order_processNewEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Order_processNewEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(lean_object* v_u_1_, lean_object* v_v_2_, lean_object* v_p_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v_w_16_; lean_object* v_proof_17_; uint8_t v___x_18_; 
v_w_16_ = lean_ctor_get(v_p_3_, 0);
v_proof_17_ = lean_ctor_get(v_p_3_, 2);
v___x_18_ = lean_nat_dec_eq(v_u_1_, v_w_16_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Meta_Grind_Order_getProof(v_u_1_, v_w_16_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_21_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc(v_a_20_);
lean_dec_ref_known(v___x_19_, 1);
v___x_21_ = l_Lean_Meta_Grind_Order_mkTrans(v_a_20_, v_p_3_, v_v_2_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v_a_22_; 
v_a_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc(v_a_22_);
lean_dec_ref_known(v___x_21_, 1);
v_p_3_ = v_a_22_;
goto _start;
}
else
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
v_a_24_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_21_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_21_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_29_; 
if (v_isShared_27_ == 0)
{
v___x_29_ = v___x_26_;
goto v_reusejp_28_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_a_24_);
v___x_29_ = v_reuseFailAlloc_30_;
goto v_reusejp_28_;
}
v_reusejp_28_:
{
return v___x_29_;
}
}
}
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
lean_dec_ref(v_p_3_);
v_a_32_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_19_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_19_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_a_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
else
{
lean_object* v___x_40_; 
lean_inc_ref(v_proof_17_);
lean_dec_ref(v_p_3_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v_proof_17_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go___boxed(lean_object* v_u_41_, lean_object* v_v_42_, lean_object* v_p_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(v_u_41_, v_v_42_, v_p_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
lean_dec(v_a_45_);
lean_dec(v_a_44_);
lean_dec(v_v_42_);
lean_dec(v_u_41_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(lean_object* v_u_57_, lean_object* v_v_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Grind_Order_getProof(v_u_57_, v_v_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_73_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_71_, 1);
v___x_73_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath_go(v_u_57_, v_v_58_, v_a_72_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
return v___x_73_;
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v_a_74_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_71_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_71_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath___boxed(lean_object* v_u_82_, lean_object* v_v_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_82_, v_v_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
lean_dec(v_a_92_);
lean_dec_ref(v_a_91_);
lean_dec(v_a_90_);
lean_dec_ref(v_a_89_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec(v_a_85_);
lean_dec(v_a_84_);
lean_dec(v_v_83_);
lean_dec(v_u_82_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(lean_object* v_u_97_, lean_object* v_v_98_, lean_object* v_kuv_99_, lean_object* v_huv_100_, lean_object* v_kvu_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_98_, v_u_97_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v___x_114_, 1);
v___x_116_ = l_Lean_Meta_Grind_Order_getExpr(v_u_97_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_118_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = l_Lean_Meta_Grind_Order_getExpr(v_v_98_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_120_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_a_119_);
lean_dec_ref_known(v___x_118_, 1);
v___x_120_ = l_Lean_Meta_Grind_Order_mkUnsatProof(v_a_117_, v_a_119_, v_kuv_99_, v_huv_100_, v_kvu_101_, v_a_115_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_122_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref_known(v___x_120_, 1);
v___x_122_ = l_Lean_Meta_Grind_closeGoal(v_a_121_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
return v___x_122_;
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_a_123_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_120_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_120_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
lean_dec(v_a_117_);
lean_dec(v_a_115_);
lean_dec_ref(v_huv_100_);
v_a_131_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_118_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_118_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_a_115_);
lean_dec_ref(v_huv_100_);
v_a_139_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_116_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_116_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec_ref(v_huv_100_);
v_a_147_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_114_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_114_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat___boxed(lean_object** _args){
lean_object* v_u_155_ = _args[0];
lean_object* v_v_156_ = _args[1];
lean_object* v_kuv_157_ = _args[2];
lean_object* v_huv_158_ = _args[3];
lean_object* v_kvu_159_ = _args[4];
lean_object* v_a_160_ = _args[5];
lean_object* v_a_161_ = _args[6];
lean_object* v_a_162_ = _args[7];
lean_object* v_a_163_ = _args[8];
lean_object* v_a_164_ = _args[9];
lean_object* v_a_165_ = _args[10];
lean_object* v_a_166_ = _args[11];
lean_object* v_a_167_ = _args[12];
lean_object* v_a_168_ = _args[13];
lean_object* v_a_169_ = _args[14];
lean_object* v_a_170_ = _args[15];
lean_object* v_a_171_ = _args[16];
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(v_u_155_, v_v_156_, v_kuv_157_, v_huv_158_, v_kvu_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
lean_dec(v_a_168_);
lean_dec_ref(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec(v_a_161_);
lean_dec(v_a_160_);
lean_dec_ref(v_kvu_159_);
lean_dec_ref(v_kuv_157_);
lean_dec(v_v_156_);
lean_dec(v_u_155_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(lean_object* v_a_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
uint8_t v___x_175_; 
v___x_175_ = 0;
return v___x_175_;
}
else
{
lean_object* v_key_176_; lean_object* v_tail_177_; uint8_t v___x_178_; 
v_key_176_ = lean_ctor_get(v_x_174_, 0);
v_tail_177_ = lean_ctor_get(v_x_174_, 2);
v___x_178_ = lean_nat_dec_eq(v_key_176_, v_a_173_);
if (v___x_178_ == 0)
{
v_x_174_ = v_tail_177_;
goto _start;
}
else
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg___boxed(lean_object* v_a_180_, lean_object* v_x_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_a_180_, v_x_181_);
lean_dec(v_x_181_);
lean_dec(v_a_180_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(lean_object* v_a_184_, lean_object* v_b_185_, lean_object* v_x_186_){
_start:
{
if (lean_obj_tag(v_x_186_) == 0)
{
lean_dec(v_b_185_);
lean_dec(v_a_184_);
return v_x_186_;
}
else
{
lean_object* v_key_187_; lean_object* v_value_188_; lean_object* v_tail_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_201_; 
v_key_187_ = lean_ctor_get(v_x_186_, 0);
v_value_188_ = lean_ctor_get(v_x_186_, 1);
v_tail_189_ = lean_ctor_get(v_x_186_, 2);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_186_);
if (v_isSharedCheck_201_ == 0)
{
v___x_191_ = v_x_186_;
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_tail_189_);
lean_inc(v_value_188_);
lean_inc(v_key_187_);
lean_dec(v_x_186_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_eq(v_key_187_, v_a_184_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_194_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_a_184_, v_b_185_, v_tail_189_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 2, v___x_194_);
v___x_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_key_187_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_value_188_);
lean_ctor_set(v_reuseFailAlloc_197_, 2, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec(v_value_188_);
lean_dec(v_key_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v_b_185_);
lean_ctor_set(v___x_191_, 0, v_a_184_);
v___x_199_ = v___x_191_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_184_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_b_185_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_tail_189_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(lean_object* v_m_202_, lean_object* v_k_203_, lean_object* v_v_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_k_203_, v_m_202_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_206_, 0, v_k_203_);
lean_ctor_set(v___x_206_, 1, v_v_204_);
lean_ctor_set(v___x_206_, 2, v_m_202_);
return v___x_206_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_k_203_, v_v_204_, v_m_202_);
return v___x_207_;
}
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_box(0);
v___x_209_ = l_unsafeCast___redArg(v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(lean_object* v_u_210_, lean_object* v_k_211_, lean_object* v_x_212_, size_t v_x_213_, size_t v_x_214_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v_cs_215_; size_t v_j_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_cs_215_ = lean_ctor_get(v_x_212_, 0);
v_j_216_ = lean_usize_shift_right(v_x_213_, v_x_214_);
v___x_217_ = lean_usize_to_nat(v_j_216_);
v___x_218_ = lean_array_get_size(v_cs_215_);
v___x_219_ = lean_nat_dec_lt(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec(v___x_217_);
lean_dec_ref(v_k_211_);
lean_dec(v_u_210_);
return v_x_212_;
}
else
{
lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_237_; 
lean_inc_ref(v_cs_215_);
v_isSharedCheck_237_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v_x_212_, 0);
lean_dec(v_unused_238_);
v___x_221_ = v_x_212_;
v_isShared_222_ = v_isSharedCheck_237_;
goto v_resetjp_220_;
}
else
{
lean_dec(v_x_212_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_237_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v_i_226_; size_t v___x_227_; size_t v_shift_228_; lean_object* v_v_229_; lean_object* v___x_230_; lean_object* v_xs_x27_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_shift_left(v___x_223_, v_x_214_);
v___x_225_ = lean_usize_sub(v___x_224_, v___x_223_);
v_i_226_ = lean_usize_land(v_x_213_, v___x_225_);
v___x_227_ = ((size_t)5ULL);
v_shift_228_ = lean_usize_sub(v_x_214_, v___x_227_);
v_v_229_ = lean_array_fget(v_cs_215_, v___x_217_);
v___x_230_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_231_ = lean_array_fset(v_cs_215_, v___x_217_, v___x_230_);
v___x_232_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_210_, v_k_211_, v_v_229_, v_i_226_, v_shift_228_);
v___x_233_ = lean_array_fset(v_xs_x27_231_, v___x_217_, v___x_232_);
lean_dec(v___x_217_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_233_);
v___x_235_ = v___x_221_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
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
else
{
lean_object* v_vs_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v_vs_239_ = lean_ctor_get(v_x_212_, 0);
v___x_240_ = lean_usize_to_nat(v_x_213_);
v___x_241_ = lean_array_get_size(v_vs_239_);
v___x_242_ = lean_nat_dec_lt(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
lean_dec(v___x_240_);
lean_dec_ref(v_k_211_);
lean_dec(v_u_210_);
return v_x_212_;
}
else
{
lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_254_; 
lean_inc_ref(v_vs_239_);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_212_);
if (v_isSharedCheck_254_ == 0)
{
lean_object* v_unused_255_; 
v_unused_255_ = lean_ctor_get(v_x_212_, 0);
lean_dec(v_unused_255_);
v___x_244_ = v_x_212_;
v_isShared_245_ = v_isSharedCheck_254_;
goto v_resetjp_243_;
}
else
{
lean_dec(v_x_212_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_254_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_v_246_; lean_object* v___x_247_; lean_object* v_xs_x27_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v_v_246_ = lean_array_fget(v_vs_239_, v___x_240_);
v___x_247_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_248_ = lean_array_fset(v_vs_239_, v___x_240_, v___x_247_);
v___x_249_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_246_, v_u_210_, v_k_211_);
v___x_250_ = lean_array_fset(v_xs_x27_248_, v___x_240_, v___x_249_);
lean_dec(v___x_240_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v___x_250_);
v___x_252_ = v___x_244_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___boxed(lean_object* v_u_256_, lean_object* v_k_257_, lean_object* v_x_258_, lean_object* v_x_259_, lean_object* v_x_260_){
_start:
{
size_t v_x_310__boxed_261_; size_t v_x_311__boxed_262_; lean_object* v_res_263_; 
v_x_310__boxed_261_ = lean_unbox_usize(v_x_259_);
lean_dec(v_x_259_);
v_x_311__boxed_262_ = lean_unbox_usize(v_x_260_);
lean_dec(v_x_260_);
v_res_263_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_256_, v_k_257_, v_x_258_, v_x_310__boxed_261_, v_x_311__boxed_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(lean_object* v_u_264_, lean_object* v_k_265_, lean_object* v_t_266_, lean_object* v_i_267_){
_start:
{
lean_object* v_root_268_; lean_object* v_tail_269_; lean_object* v_size_270_; size_t v_shift_271_; lean_object* v_tailOff_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_296_; 
v_root_268_ = lean_ctor_get(v_t_266_, 0);
v_tail_269_ = lean_ctor_get(v_t_266_, 1);
v_size_270_ = lean_ctor_get(v_t_266_, 2);
v_shift_271_ = lean_ctor_get_usize(v_t_266_, 4);
v_tailOff_272_ = lean_ctor_get(v_t_266_, 3);
v_isSharedCheck_296_ = !lean_is_exclusive(v_t_266_);
if (v_isSharedCheck_296_ == 0)
{
v___x_274_ = v_t_266_;
v_isShared_275_ = v_isSharedCheck_296_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_tailOff_272_);
lean_inc(v_size_270_);
lean_inc(v_tail_269_);
lean_inc(v_root_268_);
lean_dec(v_t_266_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_296_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
uint8_t v___x_276_; 
v___x_276_ = lean_nat_dec_le(v_tailOff_272_, v_i_267_);
if (v___x_276_ == 0)
{
size_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_277_ = lean_usize_of_nat(v_i_267_);
v___x_278_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3(v_u_264_, v_k_265_, v_root_268_, v___x_277_, v_shift_271_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_278_);
v___x_280_ = v___x_274_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_tail_269_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_size_270_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_tailOff_272_);
lean_ctor_set_usize(v_reuseFailAlloc_281_, 4, v_shift_271_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_282_ = lean_nat_sub(v_i_267_, v_tailOff_272_);
v___x_283_ = lean_array_get_size(v_tail_269_);
v___x_284_ = lean_nat_dec_lt(v___x_282_, v___x_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_286_; 
lean_dec(v___x_282_);
lean_dec_ref(v_k_265_);
lean_dec(v_u_264_);
if (v_isShared_275_ == 0)
{
v___x_286_ = v___x_274_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_root_268_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_tail_269_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_size_270_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v_tailOff_272_);
lean_ctor_set_usize(v_reuseFailAlloc_287_, 4, v_shift_271_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
else
{
lean_object* v_v_288_; lean_object* v___x_289_; lean_object* v_xs_x27_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v_v_288_ = lean_array_fget(v_tail_269_, v___x_282_);
v___x_289_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_290_ = lean_array_fset(v_tail_269_, v___x_282_, v___x_289_);
v___x_291_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_288_, v_u_264_, v_k_265_);
v___x_292_ = lean_array_fset(v_xs_x27_290_, v___x_282_, v___x_291_);
lean_dec(v___x_282_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_292_);
v___x_294_ = v___x_274_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_root_268_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_295_, 2, v_size_270_);
lean_ctor_set(v_reuseFailAlloc_295_, 3, v_tailOff_272_);
lean_ctor_set_usize(v_reuseFailAlloc_295_, 4, v_shift_271_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1___boxed(lean_object* v_u_297_, lean_object* v_k_298_, lean_object* v_t_299_, lean_object* v_i_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_u_297_, v_k_298_, v_t_299_, v_i_300_);
lean_dec(v_i_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0(lean_object* v_u_302_, lean_object* v_k_303_, lean_object* v_v_304_, lean_object* v_s_305_){
_start:
{
lean_object* v_id_306_; lean_object* v_type_307_; lean_object* v_u_308_; lean_object* v_isPreorderInst_309_; lean_object* v_leInst_310_; lean_object* v_ltInst_x3f_311_; lean_object* v_isPartialInst_x3f_312_; lean_object* v_isLinearPreInst_x3f_313_; lean_object* v_lawfulOrderLTInst_x3f_314_; lean_object* v_ringId_x3f_315_; uint8_t v_isCommRing_316_; lean_object* v_ringInst_x3f_317_; lean_object* v_orderedRingInst_x3f_318_; lean_object* v_leFn_319_; lean_object* v_ltFn_x3f_320_; lean_object* v_nodes_321_; lean_object* v_nodeMap_322_; lean_object* v_cnstrs_323_; lean_object* v_cnstrsOf_324_; lean_object* v_sources_325_; lean_object* v_targets_326_; lean_object* v_proofs_327_; lean_object* v_propagate_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_337_; 
v_id_306_ = lean_ctor_get(v_s_305_, 0);
v_type_307_ = lean_ctor_get(v_s_305_, 1);
v_u_308_ = lean_ctor_get(v_s_305_, 2);
v_isPreorderInst_309_ = lean_ctor_get(v_s_305_, 3);
v_leInst_310_ = lean_ctor_get(v_s_305_, 4);
v_ltInst_x3f_311_ = lean_ctor_get(v_s_305_, 5);
v_isPartialInst_x3f_312_ = lean_ctor_get(v_s_305_, 6);
v_isLinearPreInst_x3f_313_ = lean_ctor_get(v_s_305_, 7);
v_lawfulOrderLTInst_x3f_314_ = lean_ctor_get(v_s_305_, 8);
v_ringId_x3f_315_ = lean_ctor_get(v_s_305_, 9);
v_isCommRing_316_ = lean_ctor_get_uint8(v_s_305_, sizeof(void*)*22);
v_ringInst_x3f_317_ = lean_ctor_get(v_s_305_, 10);
v_orderedRingInst_x3f_318_ = lean_ctor_get(v_s_305_, 11);
v_leFn_319_ = lean_ctor_get(v_s_305_, 12);
v_ltFn_x3f_320_ = lean_ctor_get(v_s_305_, 13);
v_nodes_321_ = lean_ctor_get(v_s_305_, 14);
v_nodeMap_322_ = lean_ctor_get(v_s_305_, 15);
v_cnstrs_323_ = lean_ctor_get(v_s_305_, 16);
v_cnstrsOf_324_ = lean_ctor_get(v_s_305_, 17);
v_sources_325_ = lean_ctor_get(v_s_305_, 18);
v_targets_326_ = lean_ctor_get(v_s_305_, 19);
v_proofs_327_ = lean_ctor_get(v_s_305_, 20);
v_propagate_328_ = lean_ctor_get(v_s_305_, 21);
v_isSharedCheck_337_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_337_ == 0)
{
v___x_330_ = v_s_305_;
v_isShared_331_ = v_isSharedCheck_337_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_propagate_328_);
lean_inc(v_proofs_327_);
lean_inc(v_targets_326_);
lean_inc(v_sources_325_);
lean_inc(v_cnstrsOf_324_);
lean_inc(v_cnstrs_323_);
lean_inc(v_nodeMap_322_);
lean_inc(v_nodes_321_);
lean_inc(v_ltFn_x3f_320_);
lean_inc(v_leFn_319_);
lean_inc(v_orderedRingInst_x3f_318_);
lean_inc(v_ringInst_x3f_317_);
lean_inc(v_ringId_x3f_315_);
lean_inc(v_lawfulOrderLTInst_x3f_314_);
lean_inc(v_isLinearPreInst_x3f_313_);
lean_inc(v_isPartialInst_x3f_312_);
lean_inc(v_ltInst_x3f_311_);
lean_inc(v_leInst_310_);
lean_inc(v_isPreorderInst_309_);
lean_inc(v_u_308_);
lean_inc(v_type_307_);
lean_inc(v_id_306_);
lean_dec(v_s_305_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_337_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
lean_inc_ref(v_k_303_);
lean_inc(v_u_302_);
v___x_332_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_u_302_, v_k_303_, v_sources_325_, v_v_304_);
v___x_333_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1(v_v_304_, v_k_303_, v_targets_326_, v_u_302_);
lean_dec(v_u_302_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 19, v___x_333_);
lean_ctor_set(v___x_330_, 18, v___x_332_);
v___x_335_ = v___x_330_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_id_306_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_type_307_);
lean_ctor_set(v_reuseFailAlloc_336_, 2, v_u_308_);
lean_ctor_set(v_reuseFailAlloc_336_, 3, v_isPreorderInst_309_);
lean_ctor_set(v_reuseFailAlloc_336_, 4, v_leInst_310_);
lean_ctor_set(v_reuseFailAlloc_336_, 5, v_ltInst_x3f_311_);
lean_ctor_set(v_reuseFailAlloc_336_, 6, v_isPartialInst_x3f_312_);
lean_ctor_set(v_reuseFailAlloc_336_, 7, v_isLinearPreInst_x3f_313_);
lean_ctor_set(v_reuseFailAlloc_336_, 8, v_lawfulOrderLTInst_x3f_314_);
lean_ctor_set(v_reuseFailAlloc_336_, 9, v_ringId_x3f_315_);
lean_ctor_set(v_reuseFailAlloc_336_, 10, v_ringInst_x3f_317_);
lean_ctor_set(v_reuseFailAlloc_336_, 11, v_orderedRingInst_x3f_318_);
lean_ctor_set(v_reuseFailAlloc_336_, 12, v_leFn_319_);
lean_ctor_set(v_reuseFailAlloc_336_, 13, v_ltFn_x3f_320_);
lean_ctor_set(v_reuseFailAlloc_336_, 14, v_nodes_321_);
lean_ctor_set(v_reuseFailAlloc_336_, 15, v_nodeMap_322_);
lean_ctor_set(v_reuseFailAlloc_336_, 16, v_cnstrs_323_);
lean_ctor_set(v_reuseFailAlloc_336_, 17, v_cnstrsOf_324_);
lean_ctor_set(v_reuseFailAlloc_336_, 18, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_336_, 19, v___x_333_);
lean_ctor_set(v_reuseFailAlloc_336_, 20, v_proofs_327_);
lean_ctor_set(v_reuseFailAlloc_336_, 21, v_propagate_328_);
lean_ctor_set_uint8(v_reuseFailAlloc_336_, sizeof(void*)*22, v_isCommRing_316_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(lean_object* v_u_338_, lean_object* v_v_339_, lean_object* v_k_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v___f_344_; lean_object* v___x_345_; 
v___f_344_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___lam__0), 4, 3);
lean_closure_set(v___f_344_, 0, v_u_338_);
lean_closure_set(v___f_344_, 1, v_k_340_);
lean_closure_set(v___f_344_, 2, v_v_339_);
v___x_345_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_344_, v_a_341_, v_a_342_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg___boxed(lean_object* v_u_346_, lean_object* v_v_347_, lean_object* v_k_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_346_, v_v_347_, v_k_348_, v_a_349_, v_a_350_);
lean_dec(v_a_350_);
lean_dec(v_a_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(lean_object* v_u_353_, lean_object* v_v_354_, lean_object* v_k_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_353_, v_v_354_, v_k_355_, v_a_356_, v_a_357_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___boxed(lean_object* v_u_369_, lean_object* v_v_370_, lean_object* v_k_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist(v_u_369_, v_v_370_, v_k_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec(v_a_373_);
lean_dec(v_a_372_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0(lean_object* v_00_u03b2_385_, lean_object* v_m_386_, lean_object* v_k_387_, lean_object* v_v_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_m_386_, v_k_387_, v_v_388_);
return v___x_389_;
}
}
LEAN_EXPORT uint8_t l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(lean_object* v_00_u03b2_390_, lean_object* v_a_391_, lean_object* v_x_392_){
_start:
{
uint8_t v___x_393_; 
v___x_393_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___redArg(v_a_391_, v_x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0___boxed(lean_object* v_00_u03b2_394_, lean_object* v_a_395_, lean_object* v_x_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_Lean_AssocList_contains___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__0(v_00_u03b2_394_, v_a_395_, v_x_396_);
lean_dec(v_x_396_);
lean_dec(v_a_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1(lean_object* v_00_u03b2_399_, lean_object* v_a_400_, lean_object* v_b_401_, lean_object* v_x_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_AssocList_replace___at___00Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0_spec__1___redArg(v_a_400_, v_b_401_, v_x_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(lean_object* v_v_404_, lean_object* v_p_405_, lean_object* v_x_406_, size_t v_x_407_, size_t v_x_408_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_object* v_cs_409_; size_t v_j_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v_cs_409_ = lean_ctor_get(v_x_406_, 0);
v_j_410_ = lean_usize_shift_right(v_x_407_, v_x_408_);
v___x_411_ = lean_usize_to_nat(v_j_410_);
v___x_412_ = lean_array_get_size(v_cs_409_);
v___x_413_ = lean_nat_dec_lt(v___x_411_, v___x_412_);
if (v___x_413_ == 0)
{
lean_dec(v___x_411_);
lean_dec_ref(v_p_405_);
lean_dec(v_v_404_);
return v_x_406_;
}
else
{
lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_431_; 
lean_inc_ref(v_cs_409_);
v_isSharedCheck_431_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_432_);
v___x_415_ = v_x_406_;
v_isShared_416_ = v_isSharedCheck_431_;
goto v_resetjp_414_;
}
else
{
lean_dec(v_x_406_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_431_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
size_t v___x_417_; size_t v___x_418_; size_t v___x_419_; size_t v_i_420_; size_t v___x_421_; size_t v_shift_422_; lean_object* v_v_423_; lean_object* v___x_424_; lean_object* v_xs_x27_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_417_ = ((size_t)1ULL);
v___x_418_ = lean_usize_shift_left(v___x_417_, v_x_408_);
v___x_419_ = lean_usize_sub(v___x_418_, v___x_417_);
v_i_420_ = lean_usize_land(v_x_407_, v___x_419_);
v___x_421_ = ((size_t)5ULL);
v_shift_422_ = lean_usize_sub(v_x_408_, v___x_421_);
v_v_423_ = lean_array_fget(v_cs_409_, v___x_411_);
v___x_424_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_425_ = lean_array_fset(v_cs_409_, v___x_411_, v___x_424_);
v___x_426_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_404_, v_p_405_, v_v_423_, v_i_420_, v_shift_422_);
v___x_427_ = lean_array_fset(v_xs_x27_425_, v___x_411_, v___x_426_);
lean_dec(v___x_411_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_427_);
v___x_429_ = v___x_415_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_object* v_vs_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v_vs_433_ = lean_ctor_get(v_x_406_, 0);
v___x_434_ = lean_usize_to_nat(v_x_407_);
v___x_435_ = lean_array_get_size(v_vs_433_);
v___x_436_ = lean_nat_dec_lt(v___x_434_, v___x_435_);
if (v___x_436_ == 0)
{
lean_dec(v___x_434_);
lean_dec_ref(v_p_405_);
lean_dec(v_v_404_);
return v_x_406_;
}
else
{
lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_448_; 
lean_inc_ref(v_vs_433_);
v_isSharedCheck_448_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_449_);
v___x_438_ = v_x_406_;
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
else
{
lean_dec(v_x_406_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_448_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v_v_440_; lean_object* v___x_441_; lean_object* v_xs_x27_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v_v_440_ = lean_array_fget(v_vs_433_, v___x_434_);
v___x_441_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_442_ = lean_array_fset(v_vs_433_, v___x_434_, v___x_441_);
v___x_443_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_440_, v_v_404_, v_p_405_);
v___x_444_ = lean_array_fset(v_xs_x27_442_, v___x_434_, v___x_443_);
lean_dec(v___x_434_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_444_);
v___x_446_ = v___x_438_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0___boxed(lean_object* v_v_450_, lean_object* v_p_451_, lean_object* v_x_452_, lean_object* v_x_453_, lean_object* v_x_454_){
_start:
{
size_t v_x_168__boxed_455_; size_t v_x_169__boxed_456_; lean_object* v_res_457_; 
v_x_168__boxed_455_ = lean_unbox_usize(v_x_453_);
lean_dec(v_x_453_);
v_x_169__boxed_456_ = lean_unbox_usize(v_x_454_);
lean_dec(v_x_454_);
v_res_457_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_450_, v_p_451_, v_x_452_, v_x_168__boxed_455_, v_x_169__boxed_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(lean_object* v_v_458_, lean_object* v_p_459_, lean_object* v_t_460_, lean_object* v_i_461_){
_start:
{
lean_object* v_root_462_; lean_object* v_tail_463_; lean_object* v_size_464_; size_t v_shift_465_; lean_object* v_tailOff_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_490_; 
v_root_462_ = lean_ctor_get(v_t_460_, 0);
v_tail_463_ = lean_ctor_get(v_t_460_, 1);
v_size_464_ = lean_ctor_get(v_t_460_, 2);
v_shift_465_ = lean_ctor_get_usize(v_t_460_, 4);
v_tailOff_466_ = lean_ctor_get(v_t_460_, 3);
v_isSharedCheck_490_ = !lean_is_exclusive(v_t_460_);
if (v_isSharedCheck_490_ == 0)
{
v___x_468_ = v_t_460_;
v_isShared_469_ = v_isSharedCheck_490_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_tailOff_466_);
lean_inc(v_size_464_);
lean_inc(v_tail_463_);
lean_inc(v_root_462_);
lean_dec(v_t_460_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_490_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
uint8_t v___x_470_; 
v___x_470_ = lean_nat_dec_le(v_tailOff_466_, v_i_461_);
if (v___x_470_ == 0)
{
size_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_471_ = lean_usize_of_nat(v_i_461_);
v___x_472_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0_spec__0(v_v_458_, v_p_459_, v_root_462_, v___x_471_, v_shift_465_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_472_);
v___x_474_ = v___x_468_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v_tail_463_);
lean_ctor_set(v_reuseFailAlloc_475_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_475_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_475_, 4, v_shift_465_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
else
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_476_ = lean_nat_sub(v_i_461_, v_tailOff_466_);
v___x_477_ = lean_array_get_size(v_tail_463_);
v___x_478_ = lean_nat_dec_lt(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_480_; 
lean_dec(v___x_476_);
lean_dec_ref(v_p_459_);
lean_dec(v_v_458_);
if (v_isShared_469_ == 0)
{
v___x_480_ = v___x_468_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_root_462_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_tail_463_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_481_, 4, v_shift_465_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v_v_482_; lean_object* v___x_483_; lean_object* v_xs_x27_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v_v_482_ = lean_array_fget(v_tail_463_, v___x_476_);
v___x_483_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__1_spec__3___closed__0);
v_xs_x27_484_ = lean_array_fset(v_tail_463_, v___x_476_, v___x_483_);
v___x_485_ = l_Lean_AssocList_insert___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist_spec__0___redArg(v_v_482_, v_v_458_, v_p_459_);
v___x_486_ = lean_array_fset(v_xs_x27_484_, v___x_476_, v___x_485_);
lean_dec(v___x_476_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 1, v___x_486_);
v___x_488_ = v___x_468_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_root_462_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_489_, 2, v_size_464_);
lean_ctor_set(v_reuseFailAlloc_489_, 3, v_tailOff_466_);
lean_ctor_set_usize(v_reuseFailAlloc_489_, 4, v_shift_465_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0___boxed(lean_object* v_v_491_, lean_object* v_p_492_, lean_object* v_t_493_, lean_object* v_i_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(v_v_491_, v_p_492_, v_t_493_, v_i_494_);
lean_dec(v_i_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(lean_object* v_v_496_, lean_object* v_p_497_, lean_object* v_u_498_, lean_object* v_s_499_){
_start:
{
lean_object* v_id_500_; lean_object* v_type_501_; lean_object* v_u_502_; lean_object* v_isPreorderInst_503_; lean_object* v_leInst_504_; lean_object* v_ltInst_x3f_505_; lean_object* v_isPartialInst_x3f_506_; lean_object* v_isLinearPreInst_x3f_507_; lean_object* v_lawfulOrderLTInst_x3f_508_; lean_object* v_ringId_x3f_509_; uint8_t v_isCommRing_510_; lean_object* v_ringInst_x3f_511_; lean_object* v_orderedRingInst_x3f_512_; lean_object* v_leFn_513_; lean_object* v_ltFn_x3f_514_; lean_object* v_nodes_515_; lean_object* v_nodeMap_516_; lean_object* v_cnstrs_517_; lean_object* v_cnstrsOf_518_; lean_object* v_sources_519_; lean_object* v_targets_520_; lean_object* v_proofs_521_; lean_object* v_propagate_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
v_id_500_ = lean_ctor_get(v_s_499_, 0);
v_type_501_ = lean_ctor_get(v_s_499_, 1);
v_u_502_ = lean_ctor_get(v_s_499_, 2);
v_isPreorderInst_503_ = lean_ctor_get(v_s_499_, 3);
v_leInst_504_ = lean_ctor_get(v_s_499_, 4);
v_ltInst_x3f_505_ = lean_ctor_get(v_s_499_, 5);
v_isPartialInst_x3f_506_ = lean_ctor_get(v_s_499_, 6);
v_isLinearPreInst_x3f_507_ = lean_ctor_get(v_s_499_, 7);
v_lawfulOrderLTInst_x3f_508_ = lean_ctor_get(v_s_499_, 8);
v_ringId_x3f_509_ = lean_ctor_get(v_s_499_, 9);
v_isCommRing_510_ = lean_ctor_get_uint8(v_s_499_, sizeof(void*)*22);
v_ringInst_x3f_511_ = lean_ctor_get(v_s_499_, 10);
v_orderedRingInst_x3f_512_ = lean_ctor_get(v_s_499_, 11);
v_leFn_513_ = lean_ctor_get(v_s_499_, 12);
v_ltFn_x3f_514_ = lean_ctor_get(v_s_499_, 13);
v_nodes_515_ = lean_ctor_get(v_s_499_, 14);
v_nodeMap_516_ = lean_ctor_get(v_s_499_, 15);
v_cnstrs_517_ = lean_ctor_get(v_s_499_, 16);
v_cnstrsOf_518_ = lean_ctor_get(v_s_499_, 17);
v_sources_519_ = lean_ctor_get(v_s_499_, 18);
v_targets_520_ = lean_ctor_get(v_s_499_, 19);
v_proofs_521_ = lean_ctor_get(v_s_499_, 20);
v_propagate_522_ = lean_ctor_get(v_s_499_, 21);
v_isSharedCheck_530_ = !lean_is_exclusive(v_s_499_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v_s_499_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_propagate_522_);
lean_inc(v_proofs_521_);
lean_inc(v_targets_520_);
lean_inc(v_sources_519_);
lean_inc(v_cnstrsOf_518_);
lean_inc(v_cnstrs_517_);
lean_inc(v_nodeMap_516_);
lean_inc(v_nodes_515_);
lean_inc(v_ltFn_x3f_514_);
lean_inc(v_leFn_513_);
lean_inc(v_orderedRingInst_x3f_512_);
lean_inc(v_ringInst_x3f_511_);
lean_inc(v_ringId_x3f_509_);
lean_inc(v_lawfulOrderLTInst_x3f_508_);
lean_inc(v_isLinearPreInst_x3f_507_);
lean_inc(v_isPartialInst_x3f_506_);
lean_inc(v_ltInst_x3f_505_);
lean_inc(v_leInst_504_);
lean_inc(v_isPreorderInst_503_);
lean_inc(v_u_502_);
lean_inc(v_type_501_);
lean_inc(v_id_500_);
lean_dec(v_s_499_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof_spec__0(v_v_496_, v_p_497_, v_proofs_521_, v_u_498_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 20, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_id_500_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_type_501_);
lean_ctor_set(v_reuseFailAlloc_529_, 2, v_u_502_);
lean_ctor_set(v_reuseFailAlloc_529_, 3, v_isPreorderInst_503_);
lean_ctor_set(v_reuseFailAlloc_529_, 4, v_leInst_504_);
lean_ctor_set(v_reuseFailAlloc_529_, 5, v_ltInst_x3f_505_);
lean_ctor_set(v_reuseFailAlloc_529_, 6, v_isPartialInst_x3f_506_);
lean_ctor_set(v_reuseFailAlloc_529_, 7, v_isLinearPreInst_x3f_507_);
lean_ctor_set(v_reuseFailAlloc_529_, 8, v_lawfulOrderLTInst_x3f_508_);
lean_ctor_set(v_reuseFailAlloc_529_, 9, v_ringId_x3f_509_);
lean_ctor_set(v_reuseFailAlloc_529_, 10, v_ringInst_x3f_511_);
lean_ctor_set(v_reuseFailAlloc_529_, 11, v_orderedRingInst_x3f_512_);
lean_ctor_set(v_reuseFailAlloc_529_, 12, v_leFn_513_);
lean_ctor_set(v_reuseFailAlloc_529_, 13, v_ltFn_x3f_514_);
lean_ctor_set(v_reuseFailAlloc_529_, 14, v_nodes_515_);
lean_ctor_set(v_reuseFailAlloc_529_, 15, v_nodeMap_516_);
lean_ctor_set(v_reuseFailAlloc_529_, 16, v_cnstrs_517_);
lean_ctor_set(v_reuseFailAlloc_529_, 17, v_cnstrsOf_518_);
lean_ctor_set(v_reuseFailAlloc_529_, 18, v_sources_519_);
lean_ctor_set(v_reuseFailAlloc_529_, 19, v_targets_520_);
lean_ctor_set(v_reuseFailAlloc_529_, 20, v___x_526_);
lean_ctor_set(v_reuseFailAlloc_529_, 21, v_propagate_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_529_, sizeof(void*)*22, v_isCommRing_510_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed(lean_object* v_v_531_, lean_object* v_p_532_, lean_object* v_u_533_, lean_object* v_s_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0(v_v_531_, v_p_532_, v_u_533_, v_s_534_);
lean_dec(v_u_533_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(lean_object* v_u_536_, lean_object* v_v_537_, lean_object* v_p_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___f_542_; lean_object* v___x_543_; 
v___f_542_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_542_, 0, v_v_537_);
lean_closure_set(v___f_542_, 1, v_p_538_);
lean_closure_set(v___f_542_, 2, v_u_536_);
v___x_543_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_542_, v_a_539_, v_a_540_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg___boxed(lean_object* v_u_544_, lean_object* v_v_545_, lean_object* v_p_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_544_, v_v_545_, v_p_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec(v_a_547_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(lean_object* v_u_551_, lean_object* v_v_552_, lean_object* v_p_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_551_, v_v_552_, v_p_553_, v_a_554_, v_a_555_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___boxed(lean_object* v_u_567_, lean_object* v_v_568_, lean_object* v_p_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof(v_u_567_, v_v_568_, v_p_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec(v_a_571_);
lean_dec(v_a_570_);
return v_res_582_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0(void){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_instMonadEIO___redArg();
return v___x_583_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__0);
v___x_585_ = l_StateRefT_x27_instMonad___redArg(v___x_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(lean_object* v_u_590_, lean_object* v_f_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v___x_604_; lean_object* v_toApplicative_605_; lean_object* v_toFunctor_606_; lean_object* v_toSeq_607_; lean_object* v_toSeqLeft_608_; lean_object* v_toSeqRight_609_; lean_object* v___f_610_; lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v_toApplicative_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_675_; 
v___x_604_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_605_ = lean_ctor_get(v___x_604_, 0);
v_toFunctor_606_ = lean_ctor_get(v_toApplicative_605_, 0);
v_toSeq_607_ = lean_ctor_get(v_toApplicative_605_, 2);
v_toSeqLeft_608_ = lean_ctor_get(v_toApplicative_605_, 3);
v_toSeqRight_609_ = lean_ctor_get(v_toApplicative_605_, 4);
v___f_610_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2));
v___f_611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3));
lean_inc_ref_n(v_toFunctor_606_, 2);
v___f_612_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_612_, 0, v_toFunctor_606_);
v___f_613_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_613_, 0, v_toFunctor_606_);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v___f_612_);
lean_ctor_set(v___x_614_, 1, v___f_613_);
lean_inc(v_toSeqRight_609_);
v___f_615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_615_, 0, v_toSeqRight_609_);
lean_inc(v_toSeqLeft_608_);
v___f_616_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_616_, 0, v_toSeqLeft_608_);
lean_inc(v_toSeq_607_);
v___f_617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_617_, 0, v_toSeq_607_);
v___x_618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_618_, 0, v___x_614_);
lean_ctor_set(v___x_618_, 1, v___f_610_);
lean_ctor_set(v___x_618_, 2, v___f_617_);
lean_ctor_set(v___x_618_, 3, v___f_616_);
lean_ctor_set(v___x_618_, 4, v___f_615_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___f_611_);
v___x_620_ = l_StateRefT_x27_instMonad___redArg(v___x_619_);
v_toApplicative_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v___x_620_, 1);
lean_dec(v_unused_676_);
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_675_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_toApplicative_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_675_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_toFunctor_625_; lean_object* v_toSeq_626_; lean_object* v_toSeqLeft_627_; lean_object* v_toSeqRight_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_673_; 
v_toFunctor_625_ = lean_ctor_get(v_toApplicative_621_, 0);
v_toSeq_626_ = lean_ctor_get(v_toApplicative_621_, 2);
v_toSeqLeft_627_ = lean_ctor_get(v_toApplicative_621_, 3);
v_toSeqRight_628_ = lean_ctor_get(v_toApplicative_621_, 4);
v_isSharedCheck_673_ = !lean_is_exclusive(v_toApplicative_621_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; 
v_unused_674_ = lean_ctor_get(v_toApplicative_621_, 1);
lean_dec(v_unused_674_);
v___x_630_ = v_toApplicative_621_;
v_isShared_631_ = v_isSharedCheck_673_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_toSeqRight_628_);
lean_inc(v_toSeqLeft_627_);
lean_inc(v_toSeq_626_);
lean_inc(v_toFunctor_625_);
lean_dec(v_toApplicative_621_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_673_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___f_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___x_636_; lean_object* v___f_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___x_641_; 
v___f_632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4));
v___f_633_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5));
lean_inc_ref(v_toFunctor_625_);
v___f_634_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_634_, 0, v_toFunctor_625_);
v___f_635_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_635_, 0, v_toFunctor_625_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___f_634_);
lean_ctor_set(v___x_636_, 1, v___f_635_);
v___f_637_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_637_, 0, v_toSeqRight_628_);
v___f_638_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_638_, 0, v_toSeqLeft_627_);
v___f_639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_639_, 0, v_toSeq_626_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 4, v___f_637_);
lean_ctor_set(v___x_630_, 3, v___f_638_);
lean_ctor_set(v___x_630_, 2, v___f_639_);
lean_ctor_set(v___x_630_, 1, v___f_632_);
lean_ctor_set(v___x_630_, 0, v___x_636_);
v___x_641_ = v___x_630_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___f_632_);
lean_ctor_set(v_reuseFailAlloc_672_, 2, v___f_639_);
lean_ctor_set(v_reuseFailAlloc_672_, 3, v___f_638_);
lean_ctor_set(v_reuseFailAlloc_672_, 4, v___f_637_);
v___x_641_ = v_reuseFailAlloc_672_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_643_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 1, v___f_633_);
lean_ctor_set(v___x_623_, 0, v___x_641_);
v___x_643_ = v___x_623_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___f_633_);
v___x_643_ = v_reuseFailAlloc_671_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_644_ = l_StateRefT_x27_instMonad___redArg(v___x_643_);
v___x_645_ = l_ReaderT_instMonad___redArg(v___x_644_);
v___x_646_ = l_StateRefT_x27_instMonad___redArg(v___x_645_);
v___x_647_ = l_ReaderT_instMonad___redArg(v___x_646_);
v___x_648_ = l_ReaderT_instMonad___redArg(v___x_647_);
v___x_649_ = l_StateRefT_x27_instMonad___redArg(v___x_648_);
v___x_650_ = l_ReaderT_instMonad___redArg(v___x_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_Lean_Meta_Grind_Order_getStruct(v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v_sources_654_; lean_object* v_size_655_; uint8_t v___x_656_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_652_, 1);
v_sources_654_ = lean_ctor_get(v_a_653_, 18);
lean_inc_ref(v_sources_654_);
lean_dec(v_a_653_);
v_size_655_ = lean_ctor_get(v_sources_654_, 2);
v___x_656_ = lean_nat_dec_lt(v_u_590_, v_size_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_838__overap_658_; lean_object* v___x_659_; 
lean_dec_ref(v_sources_654_);
v___x_657_ = l_outOfBounds___redArg(v___x_651_);
v___x_838__overap_658_ = l_Lean_AssocList_forM___redArg(v___x_650_, v_f_591_, v___x_657_);
lean_inc(v_a_602_);
lean_inc_ref(v_a_601_);
lean_inc(v_a_600_);
lean_inc_ref(v_a_599_);
lean_inc(v_a_598_);
lean_inc_ref(v_a_597_);
lean_inc(v_a_596_);
lean_inc_ref(v_a_595_);
lean_inc(v_a_594_);
lean_inc(v_a_593_);
lean_inc(v_a_592_);
v___x_659_ = lean_apply_12(v___x_838__overap_658_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, lean_box(0));
return v___x_659_;
}
else
{
lean_object* v___x_660_; lean_object* v___x_841__overap_661_; lean_object* v___x_662_; 
v___x_660_ = l_Lean_PersistentArray_get_x21___redArg(v___x_651_, v_sources_654_, v_u_590_);
lean_dec_ref(v_sources_654_);
v___x_841__overap_661_ = l_Lean_AssocList_forM___redArg(v___x_650_, v_f_591_, v___x_660_);
lean_inc(v_a_602_);
lean_inc_ref(v_a_601_);
lean_inc(v_a_600_);
lean_inc_ref(v_a_599_);
lean_inc(v_a_598_);
lean_inc_ref(v_a_597_);
lean_inc(v_a_596_);
lean_inc_ref(v_a_595_);
lean_inc(v_a_594_);
lean_inc(v_a_593_);
lean_inc(v_a_592_);
v___x_662_ = lean_apply_12(v___x_841__overap_661_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, lean_box(0));
return v___x_662_;
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v___x_650_);
lean_dec_ref(v_f_591_);
v_a_663_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_652_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_652_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___boxed(lean_object* v_u_677_, lean_object* v_f_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf(v_u_677_, v_f_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_);
lean_dec(v_a_689_);
lean_dec_ref(v_a_688_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_a_683_);
lean_dec_ref(v_a_682_);
lean_dec(v_a_681_);
lean_dec(v_a_680_);
lean_dec(v_a_679_);
lean_dec(v_u_677_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(lean_object* v_u_692_, lean_object* v_f_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v___x_706_; lean_object* v_toApplicative_707_; lean_object* v_toFunctor_708_; lean_object* v_toSeq_709_; lean_object* v_toSeqLeft_710_; lean_object* v_toSeqRight_711_; lean_object* v___f_712_; lean_object* v___f_713_; lean_object* v___f_714_; lean_object* v___f_715_; lean_object* v___x_716_; lean_object* v___f_717_; lean_object* v___f_718_; lean_object* v___f_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_toApplicative_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_777_; 
v___x_706_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_707_ = lean_ctor_get(v___x_706_, 0);
v_toFunctor_708_ = lean_ctor_get(v_toApplicative_707_, 0);
v_toSeq_709_ = lean_ctor_get(v_toApplicative_707_, 2);
v_toSeqLeft_710_ = lean_ctor_get(v_toApplicative_707_, 3);
v_toSeqRight_711_ = lean_ctor_get(v_toApplicative_707_, 4);
v___f_712_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2));
v___f_713_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3));
lean_inc_ref_n(v_toFunctor_708_, 2);
v___f_714_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_714_, 0, v_toFunctor_708_);
v___f_715_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_715_, 0, v_toFunctor_708_);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___f_714_);
lean_ctor_set(v___x_716_, 1, v___f_715_);
lean_inc(v_toSeqRight_711_);
v___f_717_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_717_, 0, v_toSeqRight_711_);
lean_inc(v_toSeqLeft_710_);
v___f_718_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_718_, 0, v_toSeqLeft_710_);
lean_inc(v_toSeq_709_);
v___f_719_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_719_, 0, v_toSeq_709_);
v___x_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_720_, 0, v___x_716_);
lean_ctor_set(v___x_720_, 1, v___f_712_);
lean_ctor_set(v___x_720_, 2, v___f_719_);
lean_ctor_set(v___x_720_, 3, v___f_718_);
lean_ctor_set(v___x_720_, 4, v___f_717_);
v___x_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___f_713_);
v___x_722_ = l_StateRefT_x27_instMonad___redArg(v___x_721_);
v_toApplicative_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v___x_722_, 1);
lean_dec(v_unused_778_);
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_777_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_toApplicative_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_777_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_toFunctor_727_; lean_object* v_toSeq_728_; lean_object* v_toSeqLeft_729_; lean_object* v_toSeqRight_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_775_; 
v_toFunctor_727_ = lean_ctor_get(v_toApplicative_723_, 0);
v_toSeq_728_ = lean_ctor_get(v_toApplicative_723_, 2);
v_toSeqLeft_729_ = lean_ctor_get(v_toApplicative_723_, 3);
v_toSeqRight_730_ = lean_ctor_get(v_toApplicative_723_, 4);
v_isSharedCheck_775_ = !lean_is_exclusive(v_toApplicative_723_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; 
v_unused_776_ = lean_ctor_get(v_toApplicative_723_, 1);
lean_dec(v_unused_776_);
v___x_732_ = v_toApplicative_723_;
v_isShared_733_ = v_isSharedCheck_775_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_toSeqRight_730_);
lean_inc(v_toSeqLeft_729_);
lean_inc(v_toSeq_728_);
lean_inc(v_toFunctor_727_);
lean_dec(v_toApplicative_723_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_775_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___f_734_; lean_object* v___f_735_; lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___x_738_; lean_object* v___f_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___x_743_; 
v___f_734_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4));
v___f_735_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5));
lean_inc_ref(v_toFunctor_727_);
v___f_736_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_736_, 0, v_toFunctor_727_);
v___f_737_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_737_, 0, v_toFunctor_727_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v___f_736_);
lean_ctor_set(v___x_738_, 1, v___f_737_);
v___f_739_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_739_, 0, v_toSeqRight_730_);
v___f_740_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_740_, 0, v_toSeqLeft_729_);
v___f_741_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_741_, 0, v_toSeq_728_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 4, v___f_739_);
lean_ctor_set(v___x_732_, 3, v___f_740_);
lean_ctor_set(v___x_732_, 2, v___f_741_);
lean_ctor_set(v___x_732_, 1, v___f_734_);
lean_ctor_set(v___x_732_, 0, v___x_738_);
v___x_743_ = v___x_732_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v___f_734_);
lean_ctor_set(v_reuseFailAlloc_774_, 2, v___f_741_);
lean_ctor_set(v_reuseFailAlloc_774_, 3, v___f_740_);
lean_ctor_set(v_reuseFailAlloc_774_, 4, v___f_739_);
v___x_743_ = v_reuseFailAlloc_774_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 1, v___f_735_);
lean_ctor_set(v___x_725_, 0, v___x_743_);
v___x_745_ = v___x_725_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v___f_735_);
v___x_745_ = v_reuseFailAlloc_773_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_746_ = l_StateRefT_x27_instMonad___redArg(v___x_745_);
v___x_747_ = l_ReaderT_instMonad___redArg(v___x_746_);
v___x_748_ = l_StateRefT_x27_instMonad___redArg(v___x_747_);
v___x_749_ = l_ReaderT_instMonad___redArg(v___x_748_);
v___x_750_ = l_ReaderT_instMonad___redArg(v___x_749_);
v___x_751_ = l_StateRefT_x27_instMonad___redArg(v___x_750_);
v___x_752_ = l_ReaderT_instMonad___redArg(v___x_751_);
v___x_753_ = lean_box(0);
v___x_754_ = l_Lean_Meta_Grind_Order_getStruct(v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v_targets_756_; lean_object* v_size_757_; uint8_t v___x_758_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_754_, 1);
v_targets_756_ = lean_ctor_get(v_a_755_, 19);
lean_inc_ref(v_targets_756_);
lean_dec(v_a_755_);
v_size_757_ = lean_ctor_get(v_targets_756_, 2);
v___x_758_ = lean_nat_dec_lt(v_u_692_, v_size_757_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_838__overap_760_; lean_object* v___x_761_; 
lean_dec_ref(v_targets_756_);
v___x_759_ = l_outOfBounds___redArg(v___x_753_);
v___x_838__overap_760_ = l_Lean_AssocList_forM___redArg(v___x_752_, v_f_693_, v___x_759_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
lean_inc_ref(v_a_697_);
lean_inc(v_a_696_);
lean_inc(v_a_695_);
lean_inc(v_a_694_);
v___x_761_ = lean_apply_12(v___x_838__overap_760_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, lean_box(0));
return v___x_761_;
}
else
{
lean_object* v___x_762_; lean_object* v___x_841__overap_763_; lean_object* v___x_764_; 
v___x_762_ = l_Lean_PersistentArray_get_x21___redArg(v___x_753_, v_targets_756_, v_u_692_);
lean_dec_ref(v_targets_756_);
v___x_841__overap_763_ = l_Lean_AssocList_forM___redArg(v___x_752_, v_f_693_, v___x_762_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
lean_inc_ref(v_a_697_);
lean_inc(v_a_696_);
lean_inc(v_a_695_);
lean_inc(v_a_694_);
v___x_764_ = lean_apply_12(v___x_841__overap_763_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, lean_box(0));
return v___x_764_;
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec_ref(v___x_752_);
lean_dec_ref(v_f_693_);
v_a_765_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_754_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_754_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf___boxed(lean_object* v_u_779_, lean_object* v_f_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachTargetOf(v_u_779_, v_f_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec(v_a_782_);
lean_dec(v_a_781_);
lean_dec(v_u_779_);
return v_res_793_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0(void){
_start:
{
uint8_t v___x_794_; lean_object* v___x_795_; 
v___x_794_ = 0;
v___x_795_ = l_Ordering_ctorIdx(v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(lean_object* v_u_796_, lean_object* v_v_797_, lean_object* v_k_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_u_796_, v_v_797_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_, v_a_809_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_830_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_830_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_830_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_830_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
if (lean_obj_tag(v_a_812_) == 1)
{
lean_object* v_val_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
v_val_816_ = lean_ctor_get(v_a_812_, 0);
lean_inc(v_val_816_);
lean_dec_ref_known(v_a_812_, 1);
v___x_817_ = l_Lean_Meta_Grind_Order_Weight_compare(v_k_798_, v_val_816_);
lean_dec(v_val_816_);
v___x_818_ = l_Ordering_ctorIdx(v___x_817_);
v___x_819_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___closed__0);
v___x_820_ = lean_nat_dec_eq(v___x_818_, v___x_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(v___x_820_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_821_);
v___x_823_ = v___x_814_;
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
else
{
uint8_t v___x_825_; lean_object* v___x_826_; lean_object* v___x_828_; 
lean_dec(v_a_812_);
v___x_825_ = 1;
v___x_826_ = lean_box(v___x_825_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_826_);
v___x_828_ = v___x_814_;
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
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
v_a_831_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_811_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_811_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter___boxed(lean_object* v_u_839_, lean_object* v_v_840_, lean_object* v_k_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_839_, v_v_840_, v_k_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_, v_a_852_);
lean_dec(v_a_852_);
lean_dec_ref(v_a_851_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
lean_dec(v_a_844_);
lean_dec(v_a_843_);
lean_dec(v_a_842_);
lean_dec_ref(v_k_841_);
lean_dec(v_v_840_);
lean_dec(v_u_839_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0(lean_object* v_p_855_, lean_object* v_s_856_){
_start:
{
lean_object* v_id_857_; lean_object* v_type_858_; lean_object* v_u_859_; lean_object* v_isPreorderInst_860_; lean_object* v_leInst_861_; lean_object* v_ltInst_x3f_862_; lean_object* v_isPartialInst_x3f_863_; lean_object* v_isLinearPreInst_x3f_864_; lean_object* v_lawfulOrderLTInst_x3f_865_; lean_object* v_ringId_x3f_866_; uint8_t v_isCommRing_867_; lean_object* v_ringInst_x3f_868_; lean_object* v_orderedRingInst_x3f_869_; lean_object* v_leFn_870_; lean_object* v_ltFn_x3f_871_; lean_object* v_nodes_872_; lean_object* v_nodeMap_873_; lean_object* v_cnstrs_874_; lean_object* v_cnstrsOf_875_; lean_object* v_sources_876_; lean_object* v_targets_877_; lean_object* v_proofs_878_; lean_object* v_propagate_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_887_; 
v_id_857_ = lean_ctor_get(v_s_856_, 0);
v_type_858_ = lean_ctor_get(v_s_856_, 1);
v_u_859_ = lean_ctor_get(v_s_856_, 2);
v_isPreorderInst_860_ = lean_ctor_get(v_s_856_, 3);
v_leInst_861_ = lean_ctor_get(v_s_856_, 4);
v_ltInst_x3f_862_ = lean_ctor_get(v_s_856_, 5);
v_isPartialInst_x3f_863_ = lean_ctor_get(v_s_856_, 6);
v_isLinearPreInst_x3f_864_ = lean_ctor_get(v_s_856_, 7);
v_lawfulOrderLTInst_x3f_865_ = lean_ctor_get(v_s_856_, 8);
v_ringId_x3f_866_ = lean_ctor_get(v_s_856_, 9);
v_isCommRing_867_ = lean_ctor_get_uint8(v_s_856_, sizeof(void*)*22);
v_ringInst_x3f_868_ = lean_ctor_get(v_s_856_, 10);
v_orderedRingInst_x3f_869_ = lean_ctor_get(v_s_856_, 11);
v_leFn_870_ = lean_ctor_get(v_s_856_, 12);
v_ltFn_x3f_871_ = lean_ctor_get(v_s_856_, 13);
v_nodes_872_ = lean_ctor_get(v_s_856_, 14);
v_nodeMap_873_ = lean_ctor_get(v_s_856_, 15);
v_cnstrs_874_ = lean_ctor_get(v_s_856_, 16);
v_cnstrsOf_875_ = lean_ctor_get(v_s_856_, 17);
v_sources_876_ = lean_ctor_get(v_s_856_, 18);
v_targets_877_ = lean_ctor_get(v_s_856_, 19);
v_proofs_878_ = lean_ctor_get(v_s_856_, 20);
v_propagate_879_ = lean_ctor_get(v_s_856_, 21);
v_isSharedCheck_887_ = !lean_is_exclusive(v_s_856_);
if (v_isSharedCheck_887_ == 0)
{
v___x_881_ = v_s_856_;
v_isShared_882_ = v_isSharedCheck_887_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_propagate_879_);
lean_inc(v_proofs_878_);
lean_inc(v_targets_877_);
lean_inc(v_sources_876_);
lean_inc(v_cnstrsOf_875_);
lean_inc(v_cnstrs_874_);
lean_inc(v_nodeMap_873_);
lean_inc(v_nodes_872_);
lean_inc(v_ltFn_x3f_871_);
lean_inc(v_leFn_870_);
lean_inc(v_orderedRingInst_x3f_869_);
lean_inc(v_ringInst_x3f_868_);
lean_inc(v_ringId_x3f_866_);
lean_inc(v_lawfulOrderLTInst_x3f_865_);
lean_inc(v_isLinearPreInst_x3f_864_);
lean_inc(v_isPartialInst_x3f_863_);
lean_inc(v_ltInst_x3f_862_);
lean_inc(v_leInst_861_);
lean_inc(v_isPreorderInst_860_);
lean_inc(v_u_859_);
lean_inc(v_type_858_);
lean_inc(v_id_857_);
lean_dec(v_s_856_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_887_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_883_, 0, v_p_855_);
lean_ctor_set(v___x_883_, 1, v_propagate_879_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 21, v___x_883_);
v___x_885_ = v___x_881_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_id_857_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_type_858_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_u_859_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v_isPreorderInst_860_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v_leInst_861_);
lean_ctor_set(v_reuseFailAlloc_886_, 5, v_ltInst_x3f_862_);
lean_ctor_set(v_reuseFailAlloc_886_, 6, v_isPartialInst_x3f_863_);
lean_ctor_set(v_reuseFailAlloc_886_, 7, v_isLinearPreInst_x3f_864_);
lean_ctor_set(v_reuseFailAlloc_886_, 8, v_lawfulOrderLTInst_x3f_865_);
lean_ctor_set(v_reuseFailAlloc_886_, 9, v_ringId_x3f_866_);
lean_ctor_set(v_reuseFailAlloc_886_, 10, v_ringInst_x3f_868_);
lean_ctor_set(v_reuseFailAlloc_886_, 11, v_orderedRingInst_x3f_869_);
lean_ctor_set(v_reuseFailAlloc_886_, 12, v_leFn_870_);
lean_ctor_set(v_reuseFailAlloc_886_, 13, v_ltFn_x3f_871_);
lean_ctor_set(v_reuseFailAlloc_886_, 14, v_nodes_872_);
lean_ctor_set(v_reuseFailAlloc_886_, 15, v_nodeMap_873_);
lean_ctor_set(v_reuseFailAlloc_886_, 16, v_cnstrs_874_);
lean_ctor_set(v_reuseFailAlloc_886_, 17, v_cnstrsOf_875_);
lean_ctor_set(v_reuseFailAlloc_886_, 18, v_sources_876_);
lean_ctor_set(v_reuseFailAlloc_886_, 19, v_targets_877_);
lean_ctor_set(v_reuseFailAlloc_886_, 20, v_proofs_878_);
lean_ctor_set(v_reuseFailAlloc_886_, 21, v___x_883_);
lean_ctor_set_uint8(v_reuseFailAlloc_886_, sizeof(void*)*22, v_isCommRing_867_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(lean_object* v_msgData_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; lean_object* v_env_895_; lean_object* v___x_896_; lean_object* v_toCold_897_; lean_object* v_mctx_898_; lean_object* v_lctx_899_; lean_object* v_options_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_894_ = lean_st_ref_get(v___y_892_);
v_env_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc_ref(v_env_895_);
lean_dec(v___x_894_);
v___x_896_ = lean_st_ref_get(v___y_890_);
v_toCold_897_ = lean_ctor_get(v___y_891_, 0);
v_mctx_898_ = lean_ctor_get(v___x_896_, 0);
lean_inc_ref(v_mctx_898_);
lean_dec(v___x_896_);
v_lctx_899_ = lean_ctor_get(v___y_889_, 2);
v_options_900_ = lean_ctor_get(v_toCold_897_, 2);
lean_inc_ref(v_options_900_);
lean_inc_ref(v_lctx_899_);
v___x_901_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_901_, 0, v_env_895_);
lean_ctor_set(v___x_901_, 1, v_mctx_898_);
lean_ctor_set(v___x_901_, 2, v_lctx_899_);
lean_ctor_set(v___x_901_, 3, v_options_900_);
v___x_902_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v_msgData_888_);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0___boxed(lean_object* v_msgData_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(v_msgData_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
return v_res_910_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_911_; double v___x_912_; 
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_float_of_nat(v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(lean_object* v_cls_916_, lean_object* v_msg_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_ref_923_; lean_object* v___x_924_; lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_969_; 
v_ref_923_ = lean_ctor_get(v___y_920_, 2);
v___x_924_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0_spec__0(v_msg_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
v_a_925_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_969_ == 0)
{
v___x_927_ = v___x_924_;
v_isShared_928_ = v_isSharedCheck_969_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_924_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_969_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v_traceState_930_; lean_object* v_env_931_; lean_object* v_nextMacroScope_932_; lean_object* v_ngen_933_; lean_object* v_auxDeclNGen_934_; lean_object* v_cache_935_; lean_object* v_messages_936_; lean_object* v_infoState_937_; lean_object* v_snapshotTasks_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_968_; 
v___x_929_ = lean_st_ref_take(v___y_921_);
v_traceState_930_ = lean_ctor_get(v___x_929_, 4);
v_env_931_ = lean_ctor_get(v___x_929_, 0);
v_nextMacroScope_932_ = lean_ctor_get(v___x_929_, 1);
v_ngen_933_ = lean_ctor_get(v___x_929_, 2);
v_auxDeclNGen_934_ = lean_ctor_get(v___x_929_, 3);
v_cache_935_ = lean_ctor_get(v___x_929_, 5);
v_messages_936_ = lean_ctor_get(v___x_929_, 6);
v_infoState_937_ = lean_ctor_get(v___x_929_, 7);
v_snapshotTasks_938_ = lean_ctor_get(v___x_929_, 8);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_968_ == 0)
{
v___x_940_ = v___x_929_;
v_isShared_941_ = v_isSharedCheck_968_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_snapshotTasks_938_);
lean_inc(v_infoState_937_);
lean_inc(v_messages_936_);
lean_inc(v_cache_935_);
lean_inc(v_traceState_930_);
lean_inc(v_auxDeclNGen_934_);
lean_inc(v_ngen_933_);
lean_inc(v_nextMacroScope_932_);
lean_inc(v_env_931_);
lean_dec(v___x_929_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_968_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
uint64_t v_tid_942_; lean_object* v_traces_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_967_; 
v_tid_942_ = lean_ctor_get_uint64(v_traceState_930_, sizeof(void*)*1);
v_traces_943_ = lean_ctor_get(v_traceState_930_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v_traceState_930_);
if (v_isSharedCheck_967_ == 0)
{
v___x_945_ = v_traceState_930_;
v_isShared_946_ = v_isSharedCheck_967_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_traces_943_);
lean_dec(v_traceState_930_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_967_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; double v___x_949_; uint8_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_947_ = lean_box(0);
v___x_948_ = lean_box(0);
v___x_949_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__0);
v___x_950_ = 0;
v___x_951_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__1));
v___x_952_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_952_, 0, v_cls_916_);
lean_ctor_set(v___x_952_, 1, v___x_948_);
lean_ctor_set(v___x_952_, 2, v___x_951_);
lean_ctor_set_float(v___x_952_, sizeof(void*)*3, v___x_949_);
lean_ctor_set_float(v___x_952_, sizeof(void*)*3 + 8, v___x_949_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*3 + 16, v___x_950_);
v___x_953_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___closed__2));
v___x_954_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v_a_925_);
lean_ctor_set(v___x_954_, 2, v___x_953_);
lean_inc(v_ref_923_);
v___x_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_955_, 0, v_ref_923_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = l_Lean_PersistentArray_push___redArg(v_traces_943_, v___x_955_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_956_);
v___x_958_ = v___x_945_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_956_);
lean_ctor_set_uint64(v_reuseFailAlloc_966_, sizeof(void*)*1, v_tid_942_);
v___x_958_ = v_reuseFailAlloc_966_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 4, v___x_958_);
v___x_960_ = v___x_940_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_env_931_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_nextMacroScope_932_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v_ngen_933_);
lean_ctor_set(v_reuseFailAlloc_965_, 3, v_auxDeclNGen_934_);
lean_ctor_set(v_reuseFailAlloc_965_, 4, v___x_958_);
lean_ctor_set(v_reuseFailAlloc_965_, 5, v_cache_935_);
lean_ctor_set(v_reuseFailAlloc_965_, 6, v_messages_936_);
lean_ctor_set(v_reuseFailAlloc_965_, 7, v_infoState_937_);
lean_ctor_set(v_reuseFailAlloc_965_, 8, v_snapshotTasks_938_);
v___x_960_ = v_reuseFailAlloc_965_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_961_ = lean_st_ref_put(v___y_921_, v___x_960_);
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v___x_947_);
v___x_963_ = v___x_927_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_947_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg___boxed(lean_object* v_cls_970_, lean_object* v_msg_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_970_, v_msg_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
return v_res_977_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7(void){
_start:
{
lean_object* v_cls_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v_cls_990_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4));
v___x_991_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6));
v___x_992_ = l_Lean_Name_append(v___x_991_, v_cls_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(lean_object* v_p_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_toCold_1006_; lean_object* v_options_1007_; lean_object* v_inheritedTraceOptions_1008_; uint8_t v_hasTrace_1009_; lean_object* v___f_1010_; 
v_toCold_1006_ = lean_ctor_get(v_a_1003_, 0);
v_options_1007_ = lean_ctor_get(v_toCold_1006_, 2);
v_inheritedTraceOptions_1008_ = lean_ctor_get(v_toCold_1006_, 11);
v_hasTrace_1009_ = lean_ctor_get_uint8(v_options_1007_, sizeof(void*)*1);
lean_inc_ref(v_p_993_);
v___f_1010_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___lam__0), 2, 1);
lean_closure_set(v___f_1010_, 0, v_p_993_);
if (v_hasTrace_1009_ == 0)
{
lean_object* v___x_1011_; 
lean_dec_ref(v_p_993_);
v___x_1011_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1010_, v_a_994_, v_a_995_);
return v___x_1011_;
}
else
{
lean_object* v_cls_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v_cls_1012_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__4));
v___x_1013_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__7);
v___x_1014_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1008_, v_options_1007_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; 
lean_dec_ref(v_p_993_);
v___x_1015_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1010_, v_a_994_, v_a_995_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_Meta_Grind_Order_ToPropagate_pp(v_p_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_1012_, v_a_1017_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v___x_1019_; 
lean_dec_ref_known(v___x_1018_, 1);
v___x_1019_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_1010_, v_a_994_, v_a_995_);
return v___x_1019_;
}
else
{
lean_dec_ref(v___f_1010_);
return v___x_1018_;
}
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v___f_1010_);
v_a_1020_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1016_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1016_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___boxed(lean_object* v_p_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v_p_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
lean_dec(v_a_1039_);
lean_dec_ref(v_a_1038_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec(v_a_1029_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(lean_object* v_cls_1042_, lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_1042_, v_msg_1043_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___boxed(lean_object* v_cls_1057_, lean_object* v_msg_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0(v_cls_1057_, v_msg_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec(v___y_1059_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1072_, lean_object* v_vals_1073_, lean_object* v_i_1074_, lean_object* v_k_1075_){
_start:
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = lean_array_get_size(v_keys_1072_);
v___x_1077_ = lean_nat_dec_lt(v_i_1074_, v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
lean_dec(v_i_1074_);
v___x_1078_ = lean_box(0);
return v___x_1078_;
}
else
{
lean_object* v_k_x27_1079_; size_t v___x_1080_; size_t v___x_1081_; uint8_t v___x_1082_; 
v_k_x27_1079_ = lean_array_fget_borrowed(v_keys_1072_, v_i_1074_);
v___x_1080_ = lean_ptr_addr(v_k_1075_);
v___x_1081_ = lean_ptr_addr(v_k_x27_1079_);
v___x_1082_ = lean_usize_dec_eq(v___x_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_add(v_i_1074_, v___x_1083_);
lean_dec(v_i_1074_);
v_i_1074_ = v___x_1084_;
goto _start;
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_array_fget_borrowed(v_vals_1073_, v_i_1074_);
lean_dec(v_i_1074_);
lean_inc(v___x_1086_);
v___x_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1088_, lean_object* v_vals_1089_, lean_object* v_i_1090_, lean_object* v_k_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_keys_1088_, v_vals_1089_, v_i_1090_, v_k_1091_);
lean_dec_ref(v_k_1091_);
lean_dec_ref(v_vals_1089_);
lean_dec_ref(v_keys_1088_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(lean_object* v_x_1093_, size_t v_x_1094_, lean_object* v_x_1095_){
_start:
{
if (lean_obj_tag(v_x_1093_) == 0)
{
lean_object* v_es_1096_; lean_object* v___x_1097_; size_t v___x_1098_; size_t v___x_1099_; lean_object* v_j_1100_; lean_object* v___x_1101_; 
v_es_1096_ = lean_ctor_get(v_x_1093_, 0);
v___x_1097_ = lean_box(2);
v___x_1098_ = ((size_t)31ULL);
v___x_1099_ = lean_usize_land(v_x_1094_, v___x_1098_);
v_j_1100_ = lean_usize_to_nat(v___x_1099_);
v___x_1101_ = lean_array_get_borrowed(v___x_1097_, v_es_1096_, v_j_1100_);
lean_dec(v_j_1100_);
switch(lean_obj_tag(v___x_1101_))
{
case 0:
{
lean_object* v_key_1102_; lean_object* v_val_1103_; size_t v___x_1104_; size_t v___x_1105_; uint8_t v___x_1106_; 
v_key_1102_ = lean_ctor_get(v___x_1101_, 0);
v_val_1103_ = lean_ctor_get(v___x_1101_, 1);
v___x_1104_ = lean_ptr_addr(v_x_1095_);
v___x_1105_ = lean_ptr_addr(v_key_1102_);
v___x_1106_ = lean_usize_dec_eq(v___x_1104_, v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_box(0);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; 
lean_inc(v_val_1103_);
v___x_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1108_, 0, v_val_1103_);
return v___x_1108_;
}
}
case 1:
{
lean_object* v_node_1109_; size_t v___x_1110_; size_t v___x_1111_; 
v_node_1109_ = lean_ctor_get(v___x_1101_, 0);
v___x_1110_ = ((size_t)5ULL);
v___x_1111_ = lean_usize_shift_right(v_x_1094_, v___x_1110_);
v_x_1093_ = v_node_1109_;
v_x_1094_ = v___x_1111_;
goto _start;
}
default: 
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_box(0);
return v___x_1113_;
}
}
}
else
{
lean_object* v_ks_1114_; lean_object* v_vs_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_ks_1114_ = lean_ctor_get(v_x_1093_, 0);
v_vs_1115_ = lean_ctor_get(v_x_1093_, 1);
v___x_1116_ = lean_unsigned_to_nat(0u);
v___x_1117_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_ks_1114_, v_vs_1115_, v___x_1116_, v_x_1095_);
return v___x_1117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg___boxed(lean_object* v_x_1118_, lean_object* v_x_1119_, lean_object* v_x_1120_){
_start:
{
size_t v_x_9899__boxed_1121_; lean_object* v_res_1122_; 
v_x_9899__boxed_1121_ = lean_unbox_usize(v_x_1119_);
lean_dec(v_x_1119_);
v_res_1122_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1118_, v_x_9899__boxed_1121_, v_x_1120_);
lean_dec_ref(v_x_1120_);
lean_dec_ref(v_x_1118_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
size_t v___x_1125_; size_t v___x_1126_; size_t v___x_1127_; uint64_t v___x_1128_; size_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1125_ = lean_ptr_addr(v_x_1124_);
v___x_1126_ = ((size_t)3ULL);
v___x_1127_ = lean_usize_shift_right(v___x_1125_, v___x_1126_);
v___x_1128_ = lean_usize_to_uint64(v___x_1127_);
v___x_1129_ = lean_uint64_to_usize(v___x_1128_);
v___x_1130_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1123_, v___x_1129_, v_x_1124_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg___boxed(lean_object* v_x_1131_, lean_object* v_x_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_x_1131_, v_x_1132_);
lean_dec_ref(v_x_1132_);
lean_dec_ref(v_x_1131_);
return v_res_1133_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = lean_box(0);
v___x_1144_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateEqTrue___closed__4));
v___x_1145_ = l_Lean_mkConst(v___x_1144_, v___x_1143_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue(lean_object* v_c_1146_, lean_object* v_e_1147_, lean_object* v_u_1148_, lean_object* v_v_1149_, lean_object* v_k_1150_, lean_object* v_k_x27_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_h_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___x_1192_; 
v___x_1192_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1148_, v_v_1149_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1194_; 
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v___x_1192_, 1);
v___x_1194_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1148_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1196_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
v___x_1196_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1149_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = l_Lean_Meta_Grind_Order_mkPropagateEqTrueProof(v_a_1195_, v_a_1197_, v_k_1150_, v_a_1193_, v_k_x27_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_h_x3f_1199_; 
v_h_x3f_1199_ = lean_ctor_get(v_c_1146_, 4);
lean_inc(v_h_x3f_1199_);
if (lean_obj_tag(v_h_x3f_1199_) == 1)
{
lean_object* v_a_1200_; lean_object* v_e_1201_; lean_object* v_val_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v_a_1200_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1198_, 1);
v_e_1201_ = lean_ctor_get(v_c_1146_, 3);
lean_inc_ref(v_e_1201_);
lean_dec_ref(v_c_1146_);
v_val_1202_ = lean_ctor_get(v_h_x3f_1199_, 0);
lean_inc(v_val_1202_);
lean_dec_ref_known(v_h_x3f_1199_, 1);
v___x_1203_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
lean_inc_ref(v_e_1147_);
v___x_1204_ = l_Lean_mkApp4(v___x_1203_, v_e_1147_, v_e_1201_, v_val_1202_, v_a_1200_);
v_h_1165_ = v___x_1204_;
v___y_1166_ = v_a_1153_;
v___y_1167_ = v_a_1155_;
v___y_1168_ = v_a_1157_;
v___y_1169_ = v_a_1159_;
v___y_1170_ = v_a_1160_;
v___y_1171_ = v_a_1161_;
v___y_1172_ = v_a_1162_;
goto v___jp_1164_;
}
else
{
lean_object* v_a_1205_; 
lean_dec(v_h_x3f_1199_);
lean_dec_ref(v_c_1146_);
v_a_1205_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1198_, 1);
v_h_1165_ = v_a_1205_;
v___y_1166_ = v_a_1153_;
v___y_1167_ = v_a_1155_;
v___y_1168_ = v_a_1157_;
v___y_1169_ = v_a_1159_;
v___y_1170_ = v_a_1160_;
v___y_1171_ = v_a_1161_;
v___y_1172_ = v_a_1162_;
goto v___jp_1164_;
}
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_c_1146_);
v_a_1206_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___x_1198_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1198_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_a_1195_);
lean_dec(v_a_1193_);
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_c_1146_);
v_a_1214_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1196_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1196_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec(v_a_1193_);
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_c_1146_);
v_a_1222_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1194_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1194_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
lean_dec_ref(v_e_1147_);
lean_dec_ref(v_c_1146_);
v_a_1230_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1192_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1192_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
v___jp_1164_:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1166_, v___y_1171_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v_termMapInv_1175_; lean_object* v___x_1176_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
v_termMapInv_1175_ = lean_ctor_get(v_a_1174_, 4);
lean_inc_ref(v_termMapInv_1175_);
lean_dec(v_a_1174_);
v___x_1176_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1175_, v_e_1147_);
lean_dec_ref(v_termMapInv_1175_);
if (lean_obj_tag(v___x_1176_) == 1)
{
lean_object* v_val_1177_; lean_object* v_fst_1178_; lean_object* v_snd_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v_val_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_val_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v_fst_1178_ = lean_ctor_get(v_val_1177_, 0);
lean_inc_n(v_fst_1178_, 2);
v_snd_1179_ = lean_ctor_get(v_val_1177_, 1);
lean_inc(v_snd_1179_);
lean_dec(v_val_1177_);
v___x_1180_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
v___x_1181_ = l_Lean_mkApp4(v___x_1180_, v_fst_1178_, v_e_1147_, v_snd_1179_, v_h_1165_);
v___x_1182_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_fst_1178_, v___x_1181_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
return v___x_1182_;
}
else
{
lean_object* v___x_1183_; 
lean_dec(v___x_1176_);
v___x_1183_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_1147_, v_h_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
return v___x_1183_;
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec_ref(v_h_1165_);
lean_dec_ref(v_e_1147_);
v_a_1184_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1173_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1173_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqTrue___boxed(lean_object** _args){
lean_object* v_c_1238_ = _args[0];
lean_object* v_e_1239_ = _args[1];
lean_object* v_u_1240_ = _args[2];
lean_object* v_v_1241_ = _args[3];
lean_object* v_k_1242_ = _args[4];
lean_object* v_k_x27_1243_ = _args[5];
lean_object* v_a_1244_ = _args[6];
lean_object* v_a_1245_ = _args[7];
lean_object* v_a_1246_ = _args[8];
lean_object* v_a_1247_ = _args[9];
lean_object* v_a_1248_ = _args[10];
lean_object* v_a_1249_ = _args[11];
lean_object* v_a_1250_ = _args[12];
lean_object* v_a_1251_ = _args[13];
lean_object* v_a_1252_ = _args[14];
lean_object* v_a_1253_ = _args[15];
lean_object* v_a_1254_ = _args[16];
lean_object* v_a_1255_ = _args[17];
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_Meta_Grind_Order_propagateEqTrue(v_c_1238_, v_e_1239_, v_u_1240_, v_v_1241_, v_k_1242_, v_k_x27_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
lean_dec(v_a_1246_);
lean_dec(v_a_1245_);
lean_dec(v_a_1244_);
lean_dec_ref(v_k_x27_1243_);
lean_dec_ref(v_k_1242_);
lean_dec(v_v_1241_);
lean_dec(v_u_1240_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(lean_object* v_00_u03b2_1257_, lean_object* v_x_1258_, lean_object* v_x_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_x_1258_, v_x_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___boxed(lean_object* v_00_u03b2_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0(v_00_u03b2_1261_, v_x_1262_, v_x_1263_);
lean_dec_ref(v_x_1263_);
lean_dec_ref(v_x_1262_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(lean_object* v_00_u03b2_1265_, lean_object* v_x_1266_, size_t v_x_1267_, lean_object* v_x_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___redArg(v_x_1266_, v_x_1267_, v_x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1270_, lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
size_t v_x_10167__boxed_1274_; lean_object* v_res_1275_; 
v_x_10167__boxed_1274_ = lean_unbox_usize(v_x_1272_);
lean_dec(v_x_1272_);
v_res_1275_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0(v_00_u03b2_1270_, v_x_1271_, v_x_10167__boxed_1274_, v_x_1273_);
lean_dec_ref(v_x_1273_);
lean_dec_ref(v_x_1271_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1276_, lean_object* v_keys_1277_, lean_object* v_vals_1278_, lean_object* v_heq_1279_, lean_object* v_i_1280_, lean_object* v_k_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___redArg(v_keys_1277_, v_vals_1278_, v_i_1280_, v_k_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1283_, lean_object* v_keys_1284_, lean_object* v_vals_1285_, lean_object* v_heq_1286_, lean_object* v_i_1287_, lean_object* v_k_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0_spec__0_spec__1(v_00_u03b2_1283_, v_keys_1284_, v_vals_1285_, v_heq_1286_, v_i_1287_, v_k_1288_);
lean_dec_ref(v_k_1288_);
lean_dec_ref(v_vals_1285_);
lean_dec_ref(v_keys_1284_);
return v_res_1289_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(lean_object* v_msg_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; lean_object* v___f_1305_; lean_object* v___x_5398__overap_1306_; lean_object* v___x_1307_; 
v___x_1304_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0, &l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___closed__0);
v___f_1305_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1305_, 0, v___x_1304_);
v___x_5398__overap_1306_ = lean_panic_fn_borrowed(v___f_1305_, v_msg_1291_);
lean_dec_ref(v___f_1305_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
lean_inc(v___y_1298_);
lean_inc_ref(v___y_1297_);
lean_inc(v___y_1296_);
lean_inc_ref(v___y_1295_);
lean_inc(v___y_1294_);
lean_inc(v___y_1293_);
lean_inc(v___y_1292_);
v___x_1307_ = lean_apply_12(v___x_5398__overap_1306_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, lean_box(0));
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0___boxed(lean_object* v_msg_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v_msg_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec(v___y_1309_);
return v_res_1321_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1325_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2));
v___x_1326_ = lean_unsigned_to_nat(2u);
v___x_1327_ = lean_unsigned_to_nat(86u);
v___x_1328_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__1));
v___x_1329_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0));
v___x_1330_ = l_mkPanicMessageWithDecl(v___x_1329_, v___x_1328_, v___x_1327_, v___x_1326_, v___x_1325_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue(lean_object* v_c_1331_, lean_object* v_e_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v_h_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v_u_1373_; lean_object* v_v_1374_; lean_object* v_e_1375_; lean_object* v_h_x3f_1376_; lean_object* v___x_1377_; 
v_u_1373_ = lean_ctor_get(v_c_1331_, 0);
v_v_1374_ = lean_ctor_get(v_c_1331_, 1);
v_e_1375_ = lean_ctor_get(v_c_1331_, 3);
lean_inc_ref(v_e_1375_);
v_h_x3f_1376_ = lean_ctor_get(v_c_1331_, 4);
lean_inc(v_h_x3f_1376_);
v___x_1377_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1373_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; uint8_t v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = lean_nat_dec_eq(v_u_1373_, v_v_1374_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_dec(v_a_1378_);
lean_dec(v_h_x3f_1376_);
lean_dec_ref(v_e_1375_);
lean_dec_ref(v_e_1332_);
lean_dec_ref(v_c_1331_);
v___x_1380_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3, &l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__3);
v___x_1381_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v___x_1380_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
return v___x_1381_;
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_1331_);
lean_dec_ref(v_c_1331_);
v___x_1383_ = l_Lean_Meta_Grind_Order_mkPropagateSelfEqTrueProof(v_a_1378_, v___x_1382_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
lean_dec_ref(v___x_1382_);
if (lean_obj_tag(v___x_1383_) == 0)
{
if (lean_obj_tag(v_h_x3f_1376_) == 1)
{
lean_object* v_a_1384_; lean_object* v_val_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v_val_1385_ = lean_ctor_get(v_h_x3f_1376_, 0);
lean_inc(v_val_1385_);
lean_dec_ref_known(v_h_x3f_1376_, 1);
v___x_1386_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
lean_inc_ref(v_e_1332_);
v___x_1387_ = l_Lean_mkApp4(v___x_1386_, v_e_1332_, v_e_1375_, v_val_1385_, v_a_1384_);
v_h_1346_ = v___x_1387_;
v___y_1347_ = v_a_1334_;
v___y_1348_ = v_a_1336_;
v___y_1349_ = v_a_1338_;
v___y_1350_ = v_a_1340_;
v___y_1351_ = v_a_1341_;
v___y_1352_ = v_a_1342_;
v___y_1353_ = v_a_1343_;
goto v___jp_1345_;
}
else
{
lean_object* v_a_1388_; 
lean_dec(v_h_x3f_1376_);
lean_dec_ref(v_e_1375_);
v_a_1388_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1383_, 1);
v_h_1346_ = v_a_1388_;
v___y_1347_ = v_a_1334_;
v___y_1348_ = v_a_1336_;
v___y_1349_ = v_a_1338_;
v___y_1350_ = v_a_1340_;
v___y_1351_ = v_a_1341_;
v___y_1352_ = v_a_1342_;
v___y_1353_ = v_a_1343_;
goto v___jp_1345_;
}
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec(v_h_x3f_1376_);
lean_dec_ref(v_e_1375_);
lean_dec_ref(v_e_1332_);
v_a_1389_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1383_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1383_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_dec(v_h_x3f_1376_);
lean_dec_ref(v_e_1375_);
lean_dec_ref(v_e_1332_);
lean_dec_ref(v_c_1331_);
v_a_1397_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1377_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1377_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
v___jp_1345_:
{
lean_object* v___x_1354_; 
v___x_1354_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1347_, v___y_1352_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v_termMapInv_1356_; lean_object* v___x_1357_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v_termMapInv_1356_ = lean_ctor_get(v_a_1355_, 4);
lean_inc_ref(v_termMapInv_1356_);
lean_dec(v_a_1355_);
v___x_1357_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1356_, v_e_1332_);
lean_dec_ref(v_termMapInv_1356_);
if (lean_obj_tag(v___x_1357_) == 1)
{
lean_object* v_val_1358_; lean_object* v_fst_1359_; lean_object* v_snd_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_val_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_val_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v_fst_1359_ = lean_ctor_get(v_val_1358_, 0);
lean_inc_n(v_fst_1359_, 2);
v_snd_1360_ = lean_ctor_get(v_val_1358_, 1);
lean_inc(v_snd_1360_);
lean_dec(v_val_1358_);
v___x_1361_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5, &l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5_once, _init_l_Lean_Meta_Grind_Order_propagateEqTrue___closed__5);
v___x_1362_ = l_Lean_mkApp4(v___x_1361_, v_fst_1359_, v_e_1332_, v_snd_1360_, v_h_1346_);
v___x_1363_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_fst_1359_, v___x_1362_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
return v___x_1363_;
}
else
{
lean_object* v___x_1364_; 
lean_dec(v___x_1357_);
v___x_1364_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_1332_, v_h_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
return v___x_1364_;
}
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec_ref(v_h_1346_);
lean_dec_ref(v_e_1332_);
v_a_1365_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1354_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1354_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqTrue___boxed(lean_object* v_c_1405_, lean_object* v_e_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l_Lean_Meta_Grind_Order_propagateSelfEqTrue(v_c_1405_, v_e_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
lean_dec(v_a_1411_);
lean_dec_ref(v_a_1410_);
lean_dec(v_a_1409_);
lean_dec(v_a_1408_);
lean_dec(v_a_1407_);
return v_res_1419_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2(void){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = lean_box(0);
v___x_1427_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateEqFalse___closed__1));
v___x_1428_ = l_Lean_mkConst(v___x_1427_, v___x_1426_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse(lean_object* v_c_1429_, lean_object* v_e_1430_, lean_object* v_u_1431_, lean_object* v_v_1432_, lean_object* v_k_1433_, lean_object* v_k_x27_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_h_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___x_1475_; 
v___x_1475_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1431_, v_v_1432_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1431_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1479_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref_known(v___x_1477_, 1);
v___x_1479_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1432_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1481_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc(v_a_1480_);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = l_Lean_Meta_Grind_Order_mkPropagateEqFalseProof(v_a_1478_, v_a_1480_, v_k_1433_, v_a_1476_, v_k_x27_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_h_x3f_1482_; 
v_h_x3f_1482_ = lean_ctor_get(v_c_1429_, 4);
lean_inc(v_h_x3f_1482_);
if (lean_obj_tag(v_h_x3f_1482_) == 1)
{
lean_object* v_a_1483_; lean_object* v_e_1484_; lean_object* v_val_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_a_1483_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1481_, 1);
v_e_1484_ = lean_ctor_get(v_c_1429_, 3);
lean_inc_ref(v_e_1484_);
lean_dec_ref(v_c_1429_);
v_val_1485_ = lean_ctor_get(v_h_x3f_1482_, 0);
lean_inc(v_val_1485_);
lean_dec_ref_known(v_h_x3f_1482_, 1);
v___x_1486_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
lean_inc_ref(v_e_1430_);
v___x_1487_ = l_Lean_mkApp4(v___x_1486_, v_e_1430_, v_e_1484_, v_val_1485_, v_a_1483_);
v_h_1448_ = v___x_1487_;
v___y_1449_ = v_a_1436_;
v___y_1450_ = v_a_1438_;
v___y_1451_ = v_a_1440_;
v___y_1452_ = v_a_1442_;
v___y_1453_ = v_a_1443_;
v___y_1454_ = v_a_1444_;
v___y_1455_ = v_a_1445_;
goto v___jp_1447_;
}
else
{
lean_object* v_a_1488_; 
lean_dec(v_h_x3f_1482_);
lean_dec_ref(v_c_1429_);
v_a_1488_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v___x_1481_, 1);
v_h_1448_ = v_a_1488_;
v___y_1449_ = v_a_1436_;
v___y_1450_ = v_a_1438_;
v___y_1451_ = v_a_1440_;
v___y_1452_ = v_a_1442_;
v___y_1453_ = v_a_1443_;
v___y_1454_ = v_a_1444_;
v___y_1455_ = v_a_1445_;
goto v___jp_1447_;
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec_ref(v_e_1430_);
lean_dec_ref(v_c_1429_);
v_a_1489_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1481_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1481_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_dec(v_a_1478_);
lean_dec(v_a_1476_);
lean_dec_ref(v_e_1430_);
lean_dec_ref(v_c_1429_);
v_a_1497_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1479_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1479_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_a_1476_);
lean_dec_ref(v_e_1430_);
lean_dec_ref(v_c_1429_);
v_a_1505_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1477_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1477_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v_e_1430_);
lean_dec_ref(v_c_1429_);
v_a_1513_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1475_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1475_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
v___jp_1447_:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1449_, v___y_1454_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v_termMapInv_1458_; lean_object* v___x_1459_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v_termMapInv_1458_ = lean_ctor_get(v_a_1457_, 4);
lean_inc_ref(v_termMapInv_1458_);
lean_dec(v_a_1457_);
v___x_1459_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1458_, v_e_1430_);
lean_dec_ref(v_termMapInv_1458_);
if (lean_obj_tag(v___x_1459_) == 1)
{
lean_object* v_val_1460_; lean_object* v_fst_1461_; lean_object* v_snd_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_val_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_val_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v_fst_1461_ = lean_ctor_get(v_val_1460_, 0);
lean_inc_n(v_fst_1461_, 2);
v_snd_1462_ = lean_ctor_get(v_val_1460_, 1);
lean_inc(v_snd_1462_);
lean_dec(v_val_1460_);
v___x_1463_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
v___x_1464_ = l_Lean_mkApp4(v___x_1463_, v_fst_1461_, v_e_1430_, v_snd_1462_, v_h_1448_);
v___x_1465_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_fst_1461_, v___x_1464_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
return v___x_1465_;
}
else
{
lean_object* v___x_1466_; 
lean_dec(v___x_1459_);
v___x_1466_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1430_, v_h_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
return v___x_1466_;
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v_h_1448_);
lean_dec_ref(v_e_1430_);
v_a_1467_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1456_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1456_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateEqFalse___boxed(lean_object** _args){
lean_object* v_c_1521_ = _args[0];
lean_object* v_e_1522_ = _args[1];
lean_object* v_u_1523_ = _args[2];
lean_object* v_v_1524_ = _args[3];
lean_object* v_k_1525_ = _args[4];
lean_object* v_k_x27_1526_ = _args[5];
lean_object* v_a_1527_ = _args[6];
lean_object* v_a_1528_ = _args[7];
lean_object* v_a_1529_ = _args[8];
lean_object* v_a_1530_ = _args[9];
lean_object* v_a_1531_ = _args[10];
lean_object* v_a_1532_ = _args[11];
lean_object* v_a_1533_ = _args[12];
lean_object* v_a_1534_ = _args[13];
lean_object* v_a_1535_ = _args[14];
lean_object* v_a_1536_ = _args[15];
lean_object* v_a_1537_ = _args[16];
lean_object* v_a_1538_ = _args[17];
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Meta_Grind_Order_propagateEqFalse(v_c_1521_, v_e_1522_, v_u_1523_, v_v_1524_, v_k_1525_, v_k_x27_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
lean_dec(v_a_1535_);
lean_dec_ref(v_a_1534_);
lean_dec(v_a_1533_);
lean_dec_ref(v_a_1532_);
lean_dec(v_a_1531_);
lean_dec_ref(v_a_1530_);
lean_dec(v_a_1529_);
lean_dec(v_a_1528_);
lean_dec(v_a_1527_);
lean_dec_ref(v_k_x27_1526_);
lean_dec_ref(v_k_1525_);
lean_dec(v_v_1524_);
lean_dec(v_u_1523_);
return v_res_1539_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1541_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__2));
v___x_1542_ = lean_unsigned_to_nat(2u);
v___x_1543_ = lean_unsigned_to_nat(111u);
v___x_1544_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__0));
v___x_1545_ = ((lean_object*)(l_Lean_Meta_Grind_Order_propagateSelfEqTrue___closed__0));
v___x_1546_ = l_mkPanicMessageWithDecl(v___x_1545_, v___x_1544_, v___x_1543_, v___x_1542_, v___x_1541_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse(lean_object* v_c_1547_, lean_object* v_e_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_h_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v_u_1589_; lean_object* v_v_1590_; lean_object* v_e_1591_; lean_object* v_h_x3f_1592_; lean_object* v___x_1593_; 
v_u_1589_ = lean_ctor_get(v_c_1547_, 0);
v_v_1590_ = lean_ctor_get(v_c_1547_, 1);
v_e_1591_ = lean_ctor_get(v_c_1547_, 3);
lean_inc_ref(v_e_1591_);
v_h_x3f_1592_ = lean_ctor_get(v_c_1547_, 4);
lean_inc(v_h_x3f_1592_);
v___x_1593_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1589_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; uint8_t v___x_1595_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1595_ = lean_nat_dec_eq(v_u_1589_, v_v_1590_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec(v_a_1594_);
lean_dec(v_h_x3f_1592_);
lean_dec_ref(v_e_1591_);
lean_dec_ref(v_e_1548_);
lean_dec_ref(v_c_1547_);
v___x_1596_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1, &l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1_once, _init_l_Lean_Meta_Grind_Order_propagateSelfEqFalse___closed__1);
v___x_1597_ = l_panic___at___00Lean_Meta_Grind_Order_propagateSelfEqTrue_spec__0(v___x_1596_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
return v___x_1597_;
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_1547_);
lean_dec_ref(v_c_1547_);
v___x_1599_ = l_Lean_Meta_Grind_Order_mkPropagateSelfEqFalseProof(v_a_1594_, v___x_1598_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec_ref(v___x_1598_);
if (lean_obj_tag(v___x_1599_) == 0)
{
if (lean_obj_tag(v_h_x3f_1592_) == 1)
{
lean_object* v_a_1600_; lean_object* v_val_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
v_val_1601_ = lean_ctor_get(v_h_x3f_1592_, 0);
lean_inc(v_val_1601_);
lean_dec_ref_known(v_h_x3f_1592_, 1);
v___x_1602_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
lean_inc_ref(v_e_1548_);
v___x_1603_ = l_Lean_mkApp4(v___x_1602_, v_e_1548_, v_e_1591_, v_val_1601_, v_a_1600_);
v_h_1562_ = v___x_1603_;
v___y_1563_ = v_a_1550_;
v___y_1564_ = v_a_1552_;
v___y_1565_ = v_a_1554_;
v___y_1566_ = v_a_1556_;
v___y_1567_ = v_a_1557_;
v___y_1568_ = v_a_1558_;
v___y_1569_ = v_a_1559_;
goto v___jp_1561_;
}
else
{
lean_object* v_a_1604_; 
lean_dec(v_h_x3f_1592_);
lean_dec_ref(v_e_1591_);
v_a_1604_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1599_, 1);
v_h_1562_ = v_a_1604_;
v___y_1563_ = v_a_1550_;
v___y_1564_ = v_a_1552_;
v___y_1565_ = v_a_1554_;
v___y_1566_ = v_a_1556_;
v___y_1567_ = v_a_1557_;
v___y_1568_ = v_a_1558_;
v___y_1569_ = v_a_1559_;
goto v___jp_1561_;
}
}
else
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1612_; 
lean_dec(v_h_x3f_1592_);
lean_dec_ref(v_e_1591_);
lean_dec_ref(v_e_1548_);
v_a_1605_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1607_ = v___x_1599_;
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1599_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1605_);
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
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_dec(v_h_x3f_1592_);
lean_dec_ref(v_e_1591_);
lean_dec_ref(v_e_1548_);
lean_dec_ref(v_c_1547_);
v_a_1613_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1593_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1593_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
v___jp_1561_:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v___y_1563_, v___y_1568_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v_termMapInv_1572_; lean_object* v___x_1573_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1570_, 1);
v_termMapInv_1572_ = lean_ctor_get(v_a_1571_, 4);
lean_inc_ref(v_termMapInv_1572_);
lean_dec(v_a_1571_);
v___x_1573_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1572_, v_e_1548_);
lean_dec_ref(v_termMapInv_1572_);
if (lean_obj_tag(v___x_1573_) == 1)
{
lean_object* v_val_1574_; lean_object* v_fst_1575_; lean_object* v_snd_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_val_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v___x_1573_, 1);
v_fst_1575_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_n(v_fst_1575_, 2);
v_snd_1576_ = lean_ctor_get(v_val_1574_, 1);
lean_inc(v_snd_1576_);
lean_dec(v_val_1574_);
v___x_1577_ = lean_obj_once(&l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2, &l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2_once, _init_l_Lean_Meta_Grind_Order_propagateEqFalse___closed__2);
v___x_1578_ = l_Lean_mkApp4(v___x_1577_, v_fst_1575_, v_e_1548_, v_snd_1576_, v_h_1562_);
v___x_1579_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_fst_1575_, v___x_1578_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; 
lean_dec(v___x_1573_);
v___x_1580_ = l_Lean_Meta_Grind_pushEqFalse___redArg(v_e_1548_, v_h_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
return v___x_1580_;
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_dec_ref(v_h_1562_);
lean_dec_ref(v_e_1548_);
v_a_1581_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1570_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1570_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_propagateSelfEqFalse___boxed(lean_object* v_c_1621_, lean_object* v_e_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_Meta_Grind_Order_propagateSelfEqFalse(v_c_1621_, v_e_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_);
lean_dec(v_a_1633_);
lean_dec_ref(v_a_1632_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
lean_dec(v_a_1624_);
lean_dec(v_a_1623_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(lean_object* v_e_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_1637_, v_a_1638_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1650_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1643_ = v___x_1640_;
v_isShared_1644_ = v_isSharedCheck_1650_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1640_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1650_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v_termMapInv_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v_termMapInv_1645_ = lean_ctor_get(v_a_1641_, 4);
lean_inc_ref(v_termMapInv_1645_);
lean_dec(v_a_1641_);
v___x_1646_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_1645_, v_e_1636_);
lean_dec_ref(v_termMapInv_1645_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v___x_1646_);
v___x_1648_ = v___x_1643_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1640_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1640_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg___boxed(lean_object* v_e_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_e_1659_, v_a_1660_, v_a_1661_);
lean_dec_ref(v_a_1661_);
lean_dec(v_a_1660_);
lean_dec_ref(v_e_1659_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(lean_object* v_e_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_e_1664_, v_a_1665_, v_a_1673_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___boxed(lean_object* v_e_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f(v_e_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
lean_dec(v_a_1681_);
lean_dec_ref(v_a_1680_);
lean_dec(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_e_1677_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___lam__0(lean_object* v_s_1690_){
_start:
{
lean_object* v_id_1691_; lean_object* v_type_1692_; lean_object* v_u_1693_; lean_object* v_isPreorderInst_1694_; lean_object* v_leInst_1695_; lean_object* v_ltInst_x3f_1696_; lean_object* v_isPartialInst_x3f_1697_; lean_object* v_isLinearPreInst_x3f_1698_; lean_object* v_lawfulOrderLTInst_x3f_1699_; lean_object* v_ringId_x3f_1700_; uint8_t v_isCommRing_1701_; lean_object* v_ringInst_x3f_1702_; lean_object* v_orderedRingInst_x3f_1703_; lean_object* v_leFn_1704_; lean_object* v_ltFn_x3f_1705_; lean_object* v_nodes_1706_; lean_object* v_nodeMap_1707_; lean_object* v_cnstrs_1708_; lean_object* v_cnstrsOf_1709_; lean_object* v_sources_1710_; lean_object* v_targets_1711_; lean_object* v_proofs_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1720_; 
v_id_1691_ = lean_ctor_get(v_s_1690_, 0);
v_type_1692_ = lean_ctor_get(v_s_1690_, 1);
v_u_1693_ = lean_ctor_get(v_s_1690_, 2);
v_isPreorderInst_1694_ = lean_ctor_get(v_s_1690_, 3);
v_leInst_1695_ = lean_ctor_get(v_s_1690_, 4);
v_ltInst_x3f_1696_ = lean_ctor_get(v_s_1690_, 5);
v_isPartialInst_x3f_1697_ = lean_ctor_get(v_s_1690_, 6);
v_isLinearPreInst_x3f_1698_ = lean_ctor_get(v_s_1690_, 7);
v_lawfulOrderLTInst_x3f_1699_ = lean_ctor_get(v_s_1690_, 8);
v_ringId_x3f_1700_ = lean_ctor_get(v_s_1690_, 9);
v_isCommRing_1701_ = lean_ctor_get_uint8(v_s_1690_, sizeof(void*)*22);
v_ringInst_x3f_1702_ = lean_ctor_get(v_s_1690_, 10);
v_orderedRingInst_x3f_1703_ = lean_ctor_get(v_s_1690_, 11);
v_leFn_1704_ = lean_ctor_get(v_s_1690_, 12);
v_ltFn_x3f_1705_ = lean_ctor_get(v_s_1690_, 13);
v_nodes_1706_ = lean_ctor_get(v_s_1690_, 14);
v_nodeMap_1707_ = lean_ctor_get(v_s_1690_, 15);
v_cnstrs_1708_ = lean_ctor_get(v_s_1690_, 16);
v_cnstrsOf_1709_ = lean_ctor_get(v_s_1690_, 17);
v_sources_1710_ = lean_ctor_get(v_s_1690_, 18);
v_targets_1711_ = lean_ctor_get(v_s_1690_, 19);
v_proofs_1712_ = lean_ctor_get(v_s_1690_, 20);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_s_1690_);
if (v_isSharedCheck_1720_ == 0)
{
lean_object* v_unused_1721_; 
v_unused_1721_ = lean_ctor_get(v_s_1690_, 21);
lean_dec(v_unused_1721_);
v___x_1714_ = v_s_1690_;
v_isShared_1715_ = v_isSharedCheck_1720_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_proofs_1712_);
lean_inc(v_targets_1711_);
lean_inc(v_sources_1710_);
lean_inc(v_cnstrsOf_1709_);
lean_inc(v_cnstrs_1708_);
lean_inc(v_nodeMap_1707_);
lean_inc(v_nodes_1706_);
lean_inc(v_ltFn_x3f_1705_);
lean_inc(v_leFn_1704_);
lean_inc(v_orderedRingInst_x3f_1703_);
lean_inc(v_ringInst_x3f_1702_);
lean_inc(v_ringId_x3f_1700_);
lean_inc(v_lawfulOrderLTInst_x3f_1699_);
lean_inc(v_isLinearPreInst_x3f_1698_);
lean_inc(v_isPartialInst_x3f_1697_);
lean_inc(v_ltInst_x3f_1696_);
lean_inc(v_leInst_1695_);
lean_inc(v_isPreorderInst_1694_);
lean_inc(v_u_1693_);
lean_inc(v_type_1692_);
lean_inc(v_id_1691_);
lean_dec(v_s_1690_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1720_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1716_ = lean_box(0);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 21, v___x_1716_);
v___x_1718_ = v___x_1714_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 22, 1);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_id_1691_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_type_1692_);
lean_ctor_set(v_reuseFailAlloc_1719_, 2, v_u_1693_);
lean_ctor_set(v_reuseFailAlloc_1719_, 3, v_isPreorderInst_1694_);
lean_ctor_set(v_reuseFailAlloc_1719_, 4, v_leInst_1695_);
lean_ctor_set(v_reuseFailAlloc_1719_, 5, v_ltInst_x3f_1696_);
lean_ctor_set(v_reuseFailAlloc_1719_, 6, v_isPartialInst_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1719_, 7, v_isLinearPreInst_x3f_1698_);
lean_ctor_set(v_reuseFailAlloc_1719_, 8, v_lawfulOrderLTInst_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1719_, 9, v_ringId_x3f_1700_);
lean_ctor_set(v_reuseFailAlloc_1719_, 10, v_ringInst_x3f_1702_);
lean_ctor_set(v_reuseFailAlloc_1719_, 11, v_orderedRingInst_x3f_1703_);
lean_ctor_set(v_reuseFailAlloc_1719_, 12, v_leFn_1704_);
lean_ctor_set(v_reuseFailAlloc_1719_, 13, v_ltFn_x3f_1705_);
lean_ctor_set(v_reuseFailAlloc_1719_, 14, v_nodes_1706_);
lean_ctor_set(v_reuseFailAlloc_1719_, 15, v_nodeMap_1707_);
lean_ctor_set(v_reuseFailAlloc_1719_, 16, v_cnstrs_1708_);
lean_ctor_set(v_reuseFailAlloc_1719_, 17, v_cnstrsOf_1709_);
lean_ctor_set(v_reuseFailAlloc_1719_, 18, v_sources_1710_);
lean_ctor_set(v_reuseFailAlloc_1719_, 19, v_targets_1711_);
lean_ctor_set(v_reuseFailAlloc_1719_, 20, v_proofs_1712_);
lean_ctor_set(v_reuseFailAlloc_1719_, 21, v___x_1716_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*22, v_isCommRing_1701_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1728_ = lean_box(0);
v___x_1729_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__1));
v___x_1730_ = l_Lean_mkConst(v___x_1729_, v___x_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(lean_object* v_as_x27_1731_, lean_object* v_b_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
if (lean_obj_tag(v_as_x27_1731_) == 0)
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_b_1732_);
return v___x_1745_;
}
else
{
lean_object* v_head_1746_; lean_object* v_tail_1747_; lean_object* v___x_1748_; 
v_head_1746_ = lean_ctor_get(v_as_x27_1731_, 0);
v_tail_1747_ = lean_ctor_get(v_as_x27_1731_, 1);
v___x_1748_ = lean_box(0);
switch(lean_obj_tag(v_head_1746_))
{
case 0:
{
lean_object* v_c_1749_; lean_object* v_e_1750_; lean_object* v_u_1751_; lean_object* v_v_1752_; lean_object* v_k_1753_; lean_object* v_k_x27_1754_; lean_object* v___x_1755_; 
v_c_1749_ = lean_ctor_get(v_head_1746_, 0);
v_e_1750_ = lean_ctor_get(v_head_1746_, 1);
v_u_1751_ = lean_ctor_get(v_head_1746_, 2);
v_v_1752_ = lean_ctor_get(v_head_1746_, 3);
v_k_1753_ = lean_ctor_get(v_head_1746_, 4);
v_k_x27_1754_ = lean_ctor_get(v_head_1746_, 5);
lean_inc_ref(v_e_1750_);
lean_inc_ref(v_c_1749_);
v___x_1755_ = l_Lean_Meta_Grind_Order_propagateEqTrue(v_c_1749_, v_e_1750_, v_u_1751_, v_v_1752_, v_k_1753_, v_k_x27_1754_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_dec_ref_known(v___x_1755_, 1);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
else
{
return v___x_1755_;
}
}
case 1:
{
lean_object* v_c_1757_; lean_object* v_e_1758_; lean_object* v_u_1759_; lean_object* v_v_1760_; lean_object* v_k_1761_; lean_object* v_k_x27_1762_; lean_object* v___x_1763_; 
v_c_1757_ = lean_ctor_get(v_head_1746_, 0);
v_e_1758_ = lean_ctor_get(v_head_1746_, 1);
v_u_1759_ = lean_ctor_get(v_head_1746_, 2);
v_v_1760_ = lean_ctor_get(v_head_1746_, 3);
v_k_1761_ = lean_ctor_get(v_head_1746_, 4);
v_k_x27_1762_ = lean_ctor_get(v_head_1746_, 5);
lean_inc_ref(v_e_1758_);
lean_inc_ref(v_c_1757_);
v___x_1763_ = l_Lean_Meta_Grind_Order_propagateEqFalse(v_c_1757_, v_e_1758_, v_u_1759_, v_v_1760_, v_k_1761_, v_k_x27_1762_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_dec_ref_known(v___x_1763_, 1);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
else
{
return v___x_1763_;
}
}
default: 
{
lean_object* v_u_1765_; lean_object* v_v_1766_; lean_object* v___x_1767_; 
v_u_1765_ = lean_ctor_get(v_head_1746_, 0);
v_v_1766_ = lean_ctor_get(v_head_1746_, 1);
v___x_1767_ = l_Lean_Meta_Grind_Order_getExpr(v_u_1765_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1769_ = l_Lean_Meta_Grind_Order_getExpr(v_v_1766_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1778_; lean_object* v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1904_; lean_object* v___x_1958_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1958_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_1768_, v___y_1734_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; uint8_t v___x_1960_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
v___x_1960_ = lean_unbox(v_a_1959_);
lean_dec(v_a_1959_);
if (v___x_1960_ == 0)
{
v___y_1904_ = v___x_1958_;
goto v___jp_1903_;
}
else
{
lean_object* v___x_1961_; 
lean_dec_ref_known(v___x_1958_, 1);
v___x_1961_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_1770_, v___y_1734_);
v___y_1904_ = v___x_1961_;
goto v___jp_1903_;
}
}
else
{
v___y_1904_ = v___x_1958_;
goto v___jp_1903_;
}
v___jp_1771_:
{
if (lean_obj_tag(v___y_1787_) == 0)
{
lean_object* v_a_1788_; uint8_t v___x_1789_; 
v_a_1788_ = lean_ctor_get(v___y_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___y_1787_, 1);
v___x_1789_ = lean_unbox(v_a_1788_);
lean_dec(v_a_1788_);
if (v___x_1789_ == 0)
{
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Meta_Grind_isEqv___redArg(v___y_1778_, v___y_1773_, v___y_1782_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; uint8_t v___x_1793_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1791_, 1);
v___x_1793_ = lean_unbox(v_a_1792_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; 
v___x_1794_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1765_, v_v_1766_, v___y_1784_, v___y_1782_, v___y_1781_, v___y_1783_, v___y_1774_, v___y_1785_, v___y_1775_, v___y_1779_, v___y_1777_, v___y_1772_, v___y_1776_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1796_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1795_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1796_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_1766_, v_u_1765_, v___y_1784_, v___y_1782_, v___y_1781_, v___y_1783_, v___y_1774_, v___y_1785_, v___y_1775_, v___y_1779_, v___y_1777_, v___y_1772_, v___y_1776_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1798_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
lean_inc(v_a_1770_);
lean_inc(v_a_1768_);
v___x_1798_ = l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(v_a_1768_, v_a_1770_, v_a_1795_, v_a_1797_, v___y_1784_, v___y_1782_, v___y_1781_, v___y_1783_, v___y_1774_, v___y_1785_, v___y_1775_, v___y_1779_, v___y_1777_, v___y_1772_, v___y_1776_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1800_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1772_);
lean_inc(v___y_1777_);
lean_inc_ref(v___y_1779_);
lean_inc(v_a_1768_);
v___x_1800_ = lean_infer_type(v_a_1768_, v___y_1779_, v___y_1777_, v___y_1772_, v___y_1776_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref_known(v___x_1800_, 1);
v___x_1802_ = l_Lean_Int_mkType;
v___x_1803_ = lean_expr_eqv(v_a_1801_, v___x_1802_);
lean_dec(v_a_1801_);
if (v___x_1803_ == 0)
{
lean_dec(v_a_1799_);
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; uint8_t v___x_1807_; lean_object* v___x_1808_; 
v___x_1805_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___closed__2);
lean_inc_ref(v___y_1773_);
lean_inc_ref(v___y_1778_);
v___x_1806_ = l_Lean_mkApp7(v___x_1805_, v___y_1778_, v___y_1773_, v_a_1768_, v_a_1770_, v___y_1780_, v___y_1786_, v_a_1799_);
v___x_1807_ = lean_unbox(v_a_1792_);
lean_dec(v_a_1792_);
v___x_1808_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___y_1778_, v___y_1773_, v___x_1806_, v___x_1807_, v___y_1782_, v___y_1783_, v___y_1779_, v___y_1777_, v___y_1772_, v___y_1776_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_dec_ref_known(v___x_1808_, 1);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
else
{
return v___x_1808_;
}
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
lean_dec(v_a_1799_);
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1810_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1812_ = v___x_1800_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1800_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1810_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1818_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1798_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1798_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
lean_dec(v_a_1795_);
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1826_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1796_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1796_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
else
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1834_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1794_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1794_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
}
else
{
lean_dec(v_a_1792_);
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1843_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1791_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1791_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___y_1780_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v___y_1773_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1851_ = lean_ctor_get(v___y_1787_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___y_1787_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___y_1787_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___y_1787_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
v___jp_1859_:
{
lean_object* v___x_1871_; 
v___x_1871_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_a_1768_, v___y_1861_, v___y_1869_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v___x_1871_, 1);
if (lean_obj_tag(v_a_1872_) == 1)
{
lean_object* v_val_1873_; lean_object* v_fst_1874_; lean_object* v_snd_1875_; lean_object* v___x_1876_; 
v_val_1873_ = lean_ctor_get(v_a_1872_, 0);
lean_inc(v_val_1873_);
lean_dec_ref_known(v_a_1872_, 1);
v_fst_1874_ = lean_ctor_get(v_val_1873_, 0);
lean_inc(v_fst_1874_);
v_snd_1875_ = lean_ctor_get(v_val_1873_, 1);
lean_inc(v_snd_1875_);
lean_dec(v_val_1873_);
v___x_1876_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_getOriginal_x3f___redArg(v_a_1770_, v___y_1861_, v___y_1869_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
if (lean_obj_tag(v_a_1877_) == 1)
{
lean_object* v_val_1878_; lean_object* v_fst_1879_; lean_object* v_snd_1880_; lean_object* v___x_1881_; 
v_val_1878_ = lean_ctor_get(v_a_1877_, 0);
lean_inc(v_val_1878_);
lean_dec_ref_known(v_a_1877_, 1);
v_fst_1879_ = lean_ctor_get(v_val_1878_, 0);
lean_inc(v_fst_1879_);
v_snd_1880_ = lean_ctor_get(v_val_1878_, 1);
lean_inc(v_snd_1880_);
lean_dec(v_val_1878_);
v___x_1881_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_1874_, v___y_1861_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; uint8_t v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
v___x_1883_ = lean_unbox(v_a_1882_);
lean_dec(v_a_1882_);
if (v___x_1883_ == 0)
{
v___y_1772_ = v___y_1869_;
v___y_1773_ = v_fst_1879_;
v___y_1774_ = v___y_1864_;
v___y_1775_ = v___y_1866_;
v___y_1776_ = v___y_1870_;
v___y_1777_ = v___y_1868_;
v___y_1778_ = v_fst_1874_;
v___y_1779_ = v___y_1867_;
v___y_1780_ = v_snd_1875_;
v___y_1781_ = v___y_1862_;
v___y_1782_ = v___y_1861_;
v___y_1783_ = v___y_1863_;
v___y_1784_ = v___y_1860_;
v___y_1785_ = v___y_1865_;
v___y_1786_ = v_snd_1880_;
v___y_1787_ = v___x_1881_;
goto v___jp_1771_;
}
else
{
lean_object* v___x_1884_; 
lean_dec_ref_known(v___x_1881_, 1);
v___x_1884_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_1879_, v___y_1861_);
v___y_1772_ = v___y_1869_;
v___y_1773_ = v_fst_1879_;
v___y_1774_ = v___y_1864_;
v___y_1775_ = v___y_1866_;
v___y_1776_ = v___y_1870_;
v___y_1777_ = v___y_1868_;
v___y_1778_ = v_fst_1874_;
v___y_1779_ = v___y_1867_;
v___y_1780_ = v_snd_1875_;
v___y_1781_ = v___y_1862_;
v___y_1782_ = v___y_1861_;
v___y_1783_ = v___y_1863_;
v___y_1784_ = v___y_1860_;
v___y_1785_ = v___y_1865_;
v___y_1786_ = v_snd_1880_;
v___y_1787_ = v___x_1884_;
goto v___jp_1771_;
}
}
else
{
v___y_1772_ = v___y_1869_;
v___y_1773_ = v_fst_1879_;
v___y_1774_ = v___y_1864_;
v___y_1775_ = v___y_1866_;
v___y_1776_ = v___y_1870_;
v___y_1777_ = v___y_1868_;
v___y_1778_ = v_fst_1874_;
v___y_1779_ = v___y_1867_;
v___y_1780_ = v_snd_1875_;
v___y_1781_ = v___y_1862_;
v___y_1782_ = v___y_1861_;
v___y_1783_ = v___y_1863_;
v___y_1784_ = v___y_1860_;
v___y_1785_ = v___y_1865_;
v___y_1786_ = v_snd_1880_;
v___y_1787_ = v___x_1881_;
goto v___jp_1771_;
}
}
else
{
lean_dec(v_a_1877_);
lean_dec(v_snd_1875_);
lean_dec(v_fst_1874_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_snd_1875_);
lean_dec(v_fst_1874_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1886_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1876_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1876_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_dec(v_a_1872_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_as_x27_1731_ = v_tail_1747_;
v_b_1732_ = v___x_1748_;
goto _start;
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1895_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1871_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1871_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
v___jp_1903_:
{
if (lean_obj_tag(v___y_1904_) == 0)
{
lean_object* v_a_1905_; uint8_t v___x_1906_; 
v_a_1905_ = lean_ctor_get(v___y_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___y_1904_, 1);
v___x_1906_ = lean_unbox(v_a_1905_);
lean_dec(v_a_1905_);
if (v___x_1906_ == 0)
{
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
v___y_1866_ = v___y_1739_;
v___y_1867_ = v___y_1740_;
v___y_1868_ = v___y_1741_;
v___y_1869_ = v___y_1742_;
v___y_1870_ = v___y_1743_;
goto v___jp_1859_;
}
else
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_1768_, v_a_1770_, v___y_1734_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; uint8_t v___x_1909_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = lean_unbox(v_a_1908_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; 
v___x_1910_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_u_1765_, v_v_1766_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1912_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v___x_1912_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_mkProofForPath(v_v_1766_, v_u_1765_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
lean_inc(v_a_1770_);
lean_inc(v_a_1768_);
v___x_1914_ = l_Lean_Meta_Grind_Order_mkEqProofOfLeOfLe(v_a_1768_, v_a_1770_, v_a_1911_, v_a_1913_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; uint8_t v___x_1916_; lean_object* v___x_1917_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = lean_unbox(v_a_1908_);
lean_dec(v_a_1908_);
lean_inc(v_a_1770_);
lean_inc(v_a_1768_);
v___x_1917_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_a_1768_, v_a_1770_, v_a_1915_, v___x_1916_, v___y_1734_, v___y_1736_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_dec_ref_known(v___x_1917_, 1);
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
v___y_1866_ = v___y_1739_;
v___y_1867_ = v___y_1740_;
v___y_1868_ = v___y_1741_;
v___y_1869_ = v___y_1742_;
v___y_1870_ = v___y_1743_;
goto v___jp_1859_;
}
else
{
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
return v___x_1917_;
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec(v_a_1908_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1918_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1914_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1914_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1911_);
lean_dec(v_a_1908_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1926_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1912_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1912_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec(v_a_1908_);
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1934_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1910_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1910_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_dec(v_a_1908_);
v___y_1860_ = v___y_1733_;
v___y_1861_ = v___y_1734_;
v___y_1862_ = v___y_1735_;
v___y_1863_ = v___y_1736_;
v___y_1864_ = v___y_1737_;
v___y_1865_ = v___y_1738_;
v___y_1866_ = v___y_1739_;
v___y_1867_ = v___y_1740_;
v___y_1868_ = v___y_1741_;
v___y_1869_ = v___y_1742_;
v___y_1870_ = v___y_1743_;
goto v___jp_1859_;
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1942_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1907_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1907_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec(v_a_1770_);
lean_dec(v_a_1768_);
v_a_1950_ = lean_ctor_get(v___y_1904_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___y_1904_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___y_1904_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___y_1904_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec(v_a_1768_);
v_a_1962_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1769_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1769_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
v_a_1970_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1767_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1767_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg___boxed(lean_object* v_as_x27_1978_, lean_object* v_b_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_as_x27_1978_, v_b_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec(v_as_x27_1978_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v___f_2006_; lean_object* v___x_2007_; 
v___f_2006_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___closed__0));
v___x_2007_ = l_Lean_Meta_Grind_Order_getStruct(v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v_propagate_2009_; lean_object* v___x_2010_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
v_propagate_2009_ = lean_ctor_get(v_a_2008_, 21);
lean_inc(v_propagate_2009_);
lean_dec(v_a_2008_);
v___x_2010_ = l_Lean_Meta_Grind_Order_modifyStruct___redArg(v___f_2006_, v_a_1994_, v_a_1995_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
lean_dec_ref_known(v___x_2010_, 1);
v___x_2011_ = lean_box(0);
v___x_2012_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_propagate_2009_, v___x_2011_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_);
lean_dec(v_propagate_2009_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2019_ == 0)
{
lean_object* v_unused_2020_; 
v_unused_2020_ = lean_ctor_get(v___x_2012_, 0);
lean_dec(v_unused_2020_);
v___x_2014_ = v___x_2012_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_dec(v___x_2012_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 0, v___x_2011_);
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2011_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
else
{
return v___x_2012_;
}
}
else
{
lean_dec(v_propagate_2009_);
return v___x_2010_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
v_a_2021_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2007_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2007_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending___boxed(lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v_a_2038_);
lean_dec(v_a_2037_);
lean_dec_ref(v_a_2036_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
lean_dec(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec(v_a_2029_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(lean_object* v_as_2042_, lean_object* v_as_x27_2043_, lean_object* v_b_2044_, lean_object* v_a_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___redArg(v_as_x27_2043_, v_b_2044_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0___boxed(lean_object* v_as_2059_, lean_object* v_as_x27_2060_, lean_object* v_b_2061_, lean_object* v_a_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending_spec__0(v_as_2059_, v_as_x27_2060_, v_b_2061_, v_a_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v___y_2071_);
lean_dec_ref(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec(v_as_x27_2060_);
lean_dec(v_as_2059_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(lean_object* v_e_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v___x_2084_; 
v___x_2084_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2077_, v_a_2081_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v_termMapInv_2086_; lean_object* v___x_2087_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v_termMapInv_2086_ = lean_ctor_get(v_a_2085_, 4);
lean_inc_ref(v_termMapInv_2086_);
lean_dec(v_a_2085_);
v___x_2087_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2086_, v_e_2076_);
lean_dec_ref(v_termMapInv_2086_);
if (lean_obj_tag(v___x_2087_) == 1)
{
lean_object* v_val_2088_; lean_object* v_fst_2089_; lean_object* v___x_2090_; 
lean_dec_ref(v_e_2076_);
v_val_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_val_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v_fst_2089_ = lean_ctor_get(v_val_2088_, 0);
lean_inc(v_fst_2089_);
lean_dec(v_val_2088_);
v___x_2090_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_2089_, v_a_2077_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; uint8_t v___x_2092_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
v___x_2092_ = lean_unbox(v_a_2091_);
lean_dec(v_a_2091_);
if (v___x_2092_ == 0)
{
lean_dec(v_fst_2089_);
return v___x_2090_;
}
else
{
lean_object* v___x_2093_; 
lean_dec_ref_known(v___x_2090_, 1);
v___x_2093_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_fst_2089_, v_a_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
return v___x_2093_;
}
}
else
{
lean_dec(v_fst_2089_);
return v___x_2090_;
}
}
else
{
lean_object* v___x_2094_; 
lean_dec(v___x_2087_);
v___x_2094_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_e_2076_, v_a_2077_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; uint8_t v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
v___x_2096_ = lean_unbox(v_a_2095_);
lean_dec(v_a_2095_);
if (v___x_2096_ == 0)
{
lean_dec_ref(v_e_2076_);
return v___x_2094_;
}
else
{
lean_object* v___x_2097_; 
lean_dec_ref_known(v___x_2094_, 1);
v___x_2097_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_2076_, v_a_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
return v___x_2097_;
}
}
else
{
lean_dec_ref(v_e_2076_);
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec_ref(v_e_2076_);
v_a_2098_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2084_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2084_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg___boxed(lean_object* v_e_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec_ref(v_a_2109_);
lean_dec_ref(v_a_2108_);
lean_dec(v_a_2107_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(lean_object* v_e_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2115_, v_a_2117_, v_a_2121_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___boxed(lean_object* v_e_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue(v_e_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_);
lean_dec(v_a_2140_);
lean_dec_ref(v_a_2139_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
lean_dec(v_a_2136_);
lean_dec_ref(v_a_2135_);
lean_dec(v_a_2134_);
lean_dec_ref(v_a_2133_);
lean_dec(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec(v_a_2130_);
return v_res_2142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2(void){
_start:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2149_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1));
v___x_2150_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6));
v___x_2151_ = l_Lean_Name_append(v___x_2150_, v___x_2149_);
return v___x_2151_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__3));
v___x_2154_ = l_Lean_stringToMessageData(v___x_2153_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(lean_object* v_u_2156_, lean_object* v_v_2157_, lean_object* v_k_2158_, lean_object* v_c_2159_, lean_object* v_e_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_){
_start:
{
lean_object* v___x_2173_; 
lean_inc_ref(v_e_2160_);
v___x_2173_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyTrue___redArg(v_e_2160_, v_a_2162_, v_a_2166_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2273_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2273_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2273_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
uint8_t v___x_2178_; 
v___x_2178_ = lean_unbox(v_a_2174_);
lean_dec(v_a_2174_);
if (v___x_2178_ == 0)
{
lean_object* v_toCold_2179_; lean_object* v_options_2180_; lean_object* v_inheritedTraceOptions_2181_; uint8_t v_hasTrace_2182_; lean_object* v___x_2183_; lean_object* v___y_2185_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; 
v_toCold_2179_ = lean_ctor_get(v_a_2170_, 0);
v_options_2180_ = lean_ctor_get(v_toCold_2179_, 2);
v_inheritedTraceOptions_2181_ = lean_ctor_get(v_toCold_2179_, 11);
v_hasTrace_2182_ = lean_ctor_get_uint8(v_options_2180_, sizeof(void*)*1);
v___x_2183_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_2159_);
if (v_hasTrace_2182_ == 0)
{
v___y_2185_ = v_a_2161_;
v___y_2186_ = v_a_2162_;
v___y_2187_ = v_a_2163_;
v___y_2188_ = v_a_2164_;
v___y_2189_ = v_a_2165_;
v___y_2190_ = v_a_2166_;
v___y_2191_ = v_a_2167_;
v___y_2192_ = v_a_2168_;
v___y_2193_ = v_a_2169_;
v___y_2194_ = v_a_2170_;
v___y_2195_ = v_a_2171_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__1));
v___x_2204_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__2);
v___x_2205_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2181_, v_options_2180_, v___x_2204_);
if (v___x_2205_ == 0)
{
v___y_2185_ = v_a_2161_;
v___y_2186_ = v_a_2162_;
v___y_2187_ = v_a_2163_;
v___y_2188_ = v_a_2164_;
v___y_2189_ = v_a_2165_;
v___y_2190_ = v_a_2166_;
v___y_2191_ = v_a_2167_;
v___y_2192_ = v_a_2168_;
v___y_2193_ = v_a_2169_;
v___y_2194_ = v_a_2170_;
v___y_2195_ = v_a_2171_;
goto v___jp_2184_;
}
else
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2156_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; lean_object* v___x_2208_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_a_2207_);
lean_dec_ref_known(v___x_2206_, 1);
v___x_2208_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2157_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2210_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2210_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_2159_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v_k_2212_; uint8_t v_strict_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___y_2230_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v_k_2212_ = lean_ctor_get(v_k_2158_, 0);
v_strict_2213_ = lean_ctor_get_uint8(v_k_2158_, sizeof(void*)*1);
v___x_2214_ = l_Lean_MessageData_ofExpr(v_a_2207_);
v___x_2215_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_2225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2214_);
lean_ctor_set(v___x_2225_, 1, v___x_2215_);
v___x_2226_ = l_Lean_MessageData_ofExpr(v_a_2209_);
v___x_2227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2225_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
lean_ctor_set(v___x_2228_, 1, v___x_2215_);
if (v_strict_2213_ == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Int_repr(v_k_2212_);
v___y_2230_ = v___x_2241_;
goto v___jp_2229_;
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2242_ = l_Int_repr(v_k_2212_);
v___x_2243_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5));
v___x_2244_ = lean_string_append(v___x_2242_, v___x_2243_);
v___y_2230_ = v___x_2244_;
goto v___jp_2229_;
}
v___jp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___y_2218_);
v___x_2220_ = l_Lean_MessageData_ofFormat(v___x_2219_);
v___x_2221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2221_, 0, v___y_2217_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
v___x_2222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
lean_ctor_set(v___x_2222_, 1, v___x_2215_);
v___x_2223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
lean_ctor_set(v___x_2223_, 1, v_a_2211_);
v___x_2224_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_2203_, v___x_2223_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_dec_ref_known(v___x_2224_, 1);
v___y_2185_ = v_a_2161_;
v___y_2186_ = v_a_2162_;
v___y_2187_ = v_a_2163_;
v___y_2188_ = v_a_2164_;
v___y_2189_ = v_a_2165_;
v___y_2190_ = v_a_2166_;
v___y_2191_ = v_a_2167_;
v___y_2192_ = v_a_2168_;
v___y_2193_ = v_a_2169_;
v___y_2194_ = v_a_2170_;
v___y_2195_ = v_a_2171_;
goto v___jp_2184_;
}
else
{
lean_dec_ref(v___x_2183_);
lean_del_object(v___x_2176_);
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
return v___x_2224_;
}
}
v___jp_2229_:
{
lean_object* v_k_2231_; uint8_t v_strict_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_k_2231_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_k_2231_);
v_strict_2232_ = lean_ctor_get_uint8(v___x_2183_, sizeof(void*)*1);
v___x_2233_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___y_2230_);
v___x_2234_ = l_Lean_MessageData_ofFormat(v___x_2233_);
v___x_2235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2228_);
lean_ctor_set(v___x_2235_, 1, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
lean_ctor_set(v___x_2236_, 1, v___x_2215_);
if (v_strict_2232_ == 0)
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Int_repr(v_k_2231_);
lean_dec(v_k_2231_);
v___y_2217_ = v___x_2236_;
v___y_2218_ = v___x_2237_;
goto v___jp_2216_;
}
else
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2238_ = l_Int_repr(v_k_2231_);
lean_dec(v_k_2231_);
v___x_2239_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5));
v___x_2240_ = lean_string_append(v___x_2238_, v___x_2239_);
v___y_2217_ = v___x_2236_;
v___y_2218_ = v___x_2240_;
goto v___jp_2216_;
}
}
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_a_2209_);
lean_dec(v_a_2207_);
lean_dec_ref(v___x_2183_);
lean_del_object(v___x_2176_);
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v_a_2245_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2210_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2210_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2260_; 
lean_dec(v_a_2207_);
lean_dec_ref(v___x_2183_);
lean_del_object(v___x_2176_);
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v_a_2253_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2255_ = v___x_2208_;
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2208_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2258_; 
if (v_isShared_2256_ == 0)
{
v___x_2258_ = v___x_2255_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_a_2253_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
else
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
lean_dec_ref(v___x_2183_);
lean_del_object(v___x_2176_);
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v_a_2261_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2206_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2206_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
}
v___jp_2184_:
{
uint8_t v___x_2196_; 
v___x_2196_ = l_Lean_Meta_Grind_Order_instDecidableLEWeight(v_k_2158_, v___x_2183_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2199_; 
lean_dec_ref(v___x_2183_);
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v___x_2197_ = lean_box(0);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2197_);
v___x_2199_ = v___x_2176_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
lean_del_object(v___x_2176_);
v___x_2201_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2201_, 0, v_c_2159_);
lean_ctor_set(v___x_2201_, 1, v_e_2160_);
lean_ctor_set(v___x_2201_, 2, v_u_2156_);
lean_ctor_set(v___x_2201_, 3, v_v_2157_);
lean_ctor_set(v___x_2201_, 4, v_k_2158_);
lean_ctor_set(v___x_2201_, 5, v___x_2183_);
v___x_2202_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2201_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
return v___x_2202_;
}
}
}
else
{
lean_object* v___x_2269_; lean_object* v___x_2271_; 
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v___x_2269_ = lean_box(0);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2269_);
v___x_2271_ = v___x_2176_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
lean_dec_ref(v_e_2160_);
lean_dec_ref(v_c_2159_);
lean_dec_ref(v_k_2158_);
lean_dec(v_v_2157_);
lean_dec(v_u_2156_);
v_a_2274_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2173_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2173_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___boxed(lean_object** _args){
lean_object* v_u_2282_ = _args[0];
lean_object* v_v_2283_ = _args[1];
lean_object* v_k_2284_ = _args[2];
lean_object* v_c_2285_ = _args[3];
lean_object* v_e_2286_ = _args[4];
lean_object* v_a_2287_ = _args[5];
lean_object* v_a_2288_ = _args[6];
lean_object* v_a_2289_ = _args[7];
lean_object* v_a_2290_ = _args[8];
lean_object* v_a_2291_ = _args[9];
lean_object* v_a_2292_ = _args[10];
lean_object* v_a_2293_ = _args[11];
lean_object* v_a_2294_ = _args[12];
lean_object* v_a_2295_ = _args[13];
lean_object* v_a_2296_ = _args[14];
lean_object* v_a_2297_ = _args[15];
lean_object* v_a_2298_ = _args[16];
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(v_u_2282_, v_v_2283_, v_k_2284_, v_c_2285_, v_e_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_);
lean_dec(v_a_2297_);
lean_dec_ref(v_a_2296_);
lean_dec(v_a_2295_);
lean_dec_ref(v_a_2294_);
lean_dec(v_a_2293_);
lean_dec_ref(v_a_2292_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
lean_dec(v_a_2289_);
lean_dec(v_a_2288_);
lean_dec(v_a_2287_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(lean_object* v_e_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2301_, v_a_2305_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v_termMapInv_2310_; lean_object* v___x_2311_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v_termMapInv_2310_ = lean_ctor_get(v_a_2309_, 4);
lean_inc_ref(v_termMapInv_2310_);
lean_dec(v_a_2309_);
v___x_2311_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2310_, v_e_2300_);
lean_dec_ref(v_termMapInv_2310_);
if (lean_obj_tag(v___x_2311_) == 1)
{
lean_object* v_val_2312_; lean_object* v_fst_2313_; lean_object* v___x_2314_; 
lean_dec_ref(v_e_2300_);
v_val_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_val_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v_fst_2313_ = lean_ctor_get(v_val_2312_, 0);
lean_inc(v_fst_2313_);
lean_dec(v_val_2312_);
v___x_2314_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_fst_2313_, v_a_2301_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; uint8_t v___x_2316_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
v___x_2316_ = lean_unbox(v_a_2315_);
lean_dec(v_a_2315_);
if (v___x_2316_ == 0)
{
lean_dec(v_fst_2313_);
return v___x_2314_;
}
else
{
lean_object* v___x_2317_; 
lean_dec_ref_known(v___x_2314_, 1);
v___x_2317_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_fst_2313_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
return v___x_2317_;
}
}
else
{
lean_dec(v_fst_2313_);
return v___x_2314_;
}
}
else
{
lean_object* v___x_2318_; 
lean_dec(v___x_2311_);
v___x_2318_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_e_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; uint8_t v___x_2320_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
v___x_2320_ = lean_unbox(v_a_2319_);
lean_dec(v_a_2319_);
if (v___x_2320_ == 0)
{
lean_dec_ref(v_e_2300_);
return v___x_2318_;
}
else
{
lean_object* v___x_2321_; 
lean_dec_ref_known(v___x_2318_, 1);
v___x_2321_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_2300_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
return v___x_2321_;
}
}
else
{
lean_dec_ref(v_e_2300_);
return v___x_2318_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v_e_2300_);
v_a_2322_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2308_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2308_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg___boxed(lean_object* v_e_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
lean_dec(v_a_2336_);
lean_dec_ref(v_a_2335_);
lean_dec(v_a_2334_);
lean_dec_ref(v_a_2333_);
lean_dec_ref(v_a_2332_);
lean_dec(v_a_2331_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(lean_object* v_e_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2339_, v_a_2341_, v_a_2345_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___boxed(lean_object* v_e_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse(v_e_2353_, v_a_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
lean_dec(v_a_2358_);
lean_dec_ref(v_a_2357_);
lean_dec(v_a_2356_);
lean_dec(v_a_2355_);
lean_dec(v_a_2354_);
return v_res_2366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2373_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1));
v___x_2374_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6));
v___x_2375_ = l_Lean_Name_append(v___x_2374_, v___x_2373_);
return v___x_2375_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4(void){
_start:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2377_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__3));
v___x_2378_ = l_Lean_stringToMessageData(v___x_2377_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(lean_object* v_u_2379_, lean_object* v_v_2380_, lean_object* v_k_2381_, lean_object* v_c_2382_, lean_object* v_e_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v___x_2396_; 
lean_inc_ref(v_e_2383_);
v___x_2396_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isAlreadyFalse___redArg(v_e_2383_, v_a_2385_, v_a_2389_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2498_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2498_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2498_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_unbox(v_a_2397_);
lean_dec(v_a_2397_);
if (v___x_2401_ == 0)
{
lean_object* v_toCold_2402_; lean_object* v_options_2403_; lean_object* v_inheritedTraceOptions_2404_; uint8_t v_hasTrace_2405_; lean_object* v___x_2406_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; 
v_toCold_2402_ = lean_ctor_get(v_a_2393_, 0);
v_options_2403_ = lean_ctor_get(v_toCold_2402_, 2);
v_inheritedTraceOptions_2404_ = lean_ctor_get(v_toCold_2402_, 11);
v_hasTrace_2405_ = lean_ctor_get_uint8(v_options_2403_, sizeof(void*)*1);
v___x_2406_ = l_Lean_Meta_Grind_Order_Cnstr_getWeight___redArg(v_c_2382_);
if (v_hasTrace_2405_ == 0)
{
v___y_2408_ = v_a_2384_;
v___y_2409_ = v_a_2385_;
v___y_2410_ = v_a_2386_;
v___y_2411_ = v_a_2387_;
v___y_2412_ = v_a_2388_;
v___y_2413_ = v_a_2389_;
v___y_2414_ = v_a_2390_;
v___y_2415_ = v_a_2391_;
v___y_2416_ = v_a_2392_;
v___y_2417_ = v_a_2393_;
v___y_2418_ = v_a_2394_;
goto v___jp_2407_;
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; 
v___x_2427_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__1));
v___x_2428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__2);
v___x_2429_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2404_, v_options_2403_, v___x_2428_);
if (v___x_2429_ == 0)
{
v___y_2408_ = v_a_2384_;
v___y_2409_ = v_a_2385_;
v___y_2410_ = v_a_2386_;
v___y_2411_ = v_a_2387_;
v___y_2412_ = v_a_2388_;
v___y_2413_ = v_a_2389_;
v___y_2414_ = v_a_2390_;
v___y_2415_ = v_a_2391_;
v___y_2416_ = v_a_2392_;
v___y_2417_ = v_a_2393_;
v___y_2418_ = v_a_2394_;
goto v___jp_2407_;
}
else
{
lean_object* v___x_2430_; 
v___x_2430_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2379_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2380_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2434_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc(v_a_2433_);
lean_dec_ref_known(v___x_2432_, 1);
v___x_2434_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_2382_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v_k_2446_; uint8_t v_strict_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___y_2455_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2434_, 1);
v_k_2446_ = lean_ctor_get(v_k_2381_, 0);
v_strict_2447_ = lean_ctor_get_uint8(v_k_2381_, sizeof(void*)*1);
v___x_2448_ = l_Lean_MessageData_ofExpr(v_a_2431_);
v___x_2449_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_2450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l_Lean_MessageData_ofExpr(v_a_2433_);
v___x_2452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2450_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
v___x_2453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
lean_ctor_set(v___x_2453_, 1, v___x_2449_);
if (v_strict_2447_ == 0)
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Int_repr(v_k_2446_);
v___y_2455_ = v___x_2466_;
goto v___jp_2454_;
}
else
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2467_ = l_Int_repr(v_k_2446_);
v___x_2468_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5));
v___x_2469_ = lean_string_append(v___x_2467_, v___x_2468_);
v___y_2455_ = v___x_2469_;
goto v___jp_2454_;
}
v___jp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2439_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___y_2438_);
v___x_2440_ = l_Lean_MessageData_ofFormat(v___x_2439_);
v___x_2441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___y_2437_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___closed__4);
v___x_2443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2441_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
lean_ctor_set(v___x_2444_, 1, v_a_2435_);
v___x_2445_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_2427_, v___x_2444_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
if (lean_obj_tag(v___x_2445_) == 0)
{
lean_dec_ref_known(v___x_2445_, 1);
v___y_2408_ = v_a_2384_;
v___y_2409_ = v_a_2385_;
v___y_2410_ = v_a_2386_;
v___y_2411_ = v_a_2387_;
v___y_2412_ = v_a_2388_;
v___y_2413_ = v_a_2389_;
v___y_2414_ = v_a_2390_;
v___y_2415_ = v_a_2391_;
v___y_2416_ = v_a_2392_;
v___y_2417_ = v_a_2393_;
v___y_2418_ = v_a_2394_;
goto v___jp_2407_;
}
else
{
lean_dec_ref(v___x_2406_);
lean_del_object(v___x_2399_);
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
return v___x_2445_;
}
}
v___jp_2454_:
{
lean_object* v_k_2456_; uint8_t v_strict_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_k_2456_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_k_2456_);
v_strict_2457_ = lean_ctor_get_uint8(v___x_2406_, sizeof(void*)*1);
v___x_2458_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___y_2455_);
v___x_2459_ = l_Lean_MessageData_ofFormat(v___x_2458_);
v___x_2460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2453_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
v___x_2461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2460_);
lean_ctor_set(v___x_2461_, 1, v___x_2449_);
if (v_strict_2457_ == 0)
{
lean_object* v___x_2462_; 
v___x_2462_ = l_Int_repr(v_k_2456_);
lean_dec(v_k_2456_);
v___y_2437_ = v___x_2461_;
v___y_2438_ = v___x_2462_;
goto v___jp_2436_;
}
else
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2463_ = l_Int_repr(v_k_2456_);
lean_dec(v_k_2456_);
v___x_2464_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5));
v___x_2465_ = lean_string_append(v___x_2463_, v___x_2464_);
v___y_2437_ = v___x_2461_;
v___y_2438_ = v___x_2465_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec(v_a_2433_);
lean_dec(v_a_2431_);
lean_dec_ref(v___x_2406_);
lean_del_object(v___x_2399_);
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v_a_2470_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2434_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2434_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_a_2431_);
lean_dec_ref(v___x_2406_);
lean_del_object(v___x_2399_);
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v_a_2478_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2432_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2432_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v___x_2406_);
lean_del_object(v___x_2399_);
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v_a_2486_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2430_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2430_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
v___jp_2407_:
{
lean_object* v___x_2419_; uint8_t v___x_2420_; 
lean_inc_ref(v___x_2406_);
v___x_2419_ = l_Lean_Meta_Grind_Order_Weight_add(v_k_2381_, v___x_2406_);
v___x_2420_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v___x_2419_);
lean_dec_ref(v___x_2419_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
lean_dec_ref(v___x_2406_);
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v___x_2421_ = lean_box(0);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2421_);
v___x_2423_ = v___x_2399_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
else
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_del_object(v___x_2399_);
v___x_2425_ = lean_alloc_ctor(1, 6, 0);
lean_ctor_set(v___x_2425_, 0, v_c_2382_);
lean_ctor_set(v___x_2425_, 1, v_e_2383_);
lean_ctor_set(v___x_2425_, 2, v_u_2379_);
lean_ctor_set(v___x_2425_, 3, v_v_2380_);
lean_ctor_set(v___x_2425_, 4, v_k_2381_);
lean_ctor_set(v___x_2425_, 5, v___x_2406_);
v___x_2426_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2425_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_);
return v___x_2426_;
}
}
}
else
{
lean_object* v___x_2494_; lean_object* v___x_2496_; 
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v___x_2494_ = lean_box(0);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2494_);
v___x_2496_ = v___x_2399_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2494_);
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
lean_dec_ref(v_e_2383_);
lean_dec_ref(v_c_2382_);
lean_dec_ref(v_k_2381_);
lean_dec(v_v_2380_);
lean_dec(v_u_2379_);
v_a_2499_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2396_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2396_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse___boxed(lean_object** _args){
lean_object* v_u_2507_ = _args[0];
lean_object* v_v_2508_ = _args[1];
lean_object* v_k_2509_ = _args[2];
lean_object* v_c_2510_ = _args[3];
lean_object* v_e_2511_ = _args[4];
lean_object* v_a_2512_ = _args[5];
lean_object* v_a_2513_ = _args[6];
lean_object* v_a_2514_ = _args[7];
lean_object* v_a_2515_ = _args[8];
lean_object* v_a_2516_ = _args[9];
lean_object* v_a_2517_ = _args[10];
lean_object* v_a_2518_ = _args[11];
lean_object* v_a_2519_ = _args[12];
lean_object* v_a_2520_ = _args[13];
lean_object* v_a_2521_ = _args[14];
lean_object* v_a_2522_ = _args[15];
lean_object* v_a_2523_ = _args[16];
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(v_u_2507_, v_v_2508_, v_k_2509_, v_c_2510_, v_e_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_);
lean_dec(v_a_2522_);
lean_dec_ref(v_a_2521_);
lean_dec(v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec(v_a_2518_);
lean_dec_ref(v_a_2517_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
lean_dec(v_a_2514_);
lean_dec(v_a_2513_);
lean_dec(v_a_2512_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(lean_object* v_f_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v_fst_2539_; lean_object* v_snd_2540_; lean_object* v___x_2541_; 
v_fst_2539_ = lean_ctor_get(v_x_2526_, 0);
lean_inc(v_fst_2539_);
v_snd_2540_ = lean_ctor_get(v_x_2526_, 1);
lean_inc(v_snd_2540_);
lean_dec_ref(v_x_2526_);
lean_inc(v___y_2537_);
lean_inc_ref(v___y_2536_);
lean_inc(v___y_2535_);
lean_inc_ref(v___y_2534_);
lean_inc(v___y_2533_);
lean_inc_ref(v___y_2532_);
lean_inc(v___y_2531_);
lean_inc_ref(v___y_2530_);
lean_inc(v___y_2529_);
lean_inc(v___y_2528_);
lean_inc(v___y_2527_);
v___x_2541_ = lean_apply_14(v_f_2525_, v_fst_2539_, v_snd_2540_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, lean_box(0));
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed(lean_object* v_f_2542_, lean_object* v_x_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0(v_f_2542_, v_x_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec(v___y_2544_);
return v_res_2556_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2(void){
_start:
{
lean_object* v___x_2560_; lean_object* v___f_2561_; 
v___x_2560_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_2561_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2561_, 0, v___x_2560_);
return v___f_2561_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3(void){
_start:
{
lean_object* v___f_2562_; lean_object* v___f_2563_; 
v___f_2562_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__2);
v___f_2563_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2563_, 0, v___f_2562_);
lean_closure_set(v___f_2563_, 1, v___f_2562_);
return v___f_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(lean_object* v_u_2564_, lean_object* v_v_2565_, lean_object* v_f_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v_toApplicative_2580_; lean_object* v_toFunctor_2581_; lean_object* v_toSeq_2582_; lean_object* v_toSeqLeft_2583_; lean_object* v_toSeqRight_2584_; lean_object* v___f_2585_; lean_object* v___f_2586_; lean_object* v___f_2587_; lean_object* v___f_2588_; lean_object* v___x_2589_; lean_object* v___f_2590_; lean_object* v___f_2591_; lean_object* v___f_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v_toApplicative_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2657_; 
v___x_2579_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__1);
v_toApplicative_2580_ = lean_ctor_get(v___x_2579_, 0);
v_toFunctor_2581_ = lean_ctor_get(v_toApplicative_2580_, 0);
v_toSeq_2582_ = lean_ctor_get(v_toApplicative_2580_, 2);
v_toSeqLeft_2583_ = lean_ctor_get(v_toApplicative_2580_, 3);
v_toSeqRight_2584_ = lean_ctor_get(v_toApplicative_2580_, 4);
v___f_2585_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__2));
v___f_2586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__3));
lean_inc_ref_n(v_toFunctor_2581_, 2);
v___f_2587_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2587_, 0, v_toFunctor_2581_);
v___f_2588_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2588_, 0, v_toFunctor_2581_);
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___f_2587_);
lean_ctor_set(v___x_2589_, 1, v___f_2588_);
lean_inc(v_toSeqRight_2584_);
v___f_2590_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2590_, 0, v_toSeqRight_2584_);
lean_inc(v_toSeqLeft_2583_);
v___f_2591_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2591_, 0, v_toSeqLeft_2583_);
lean_inc(v_toSeq_2582_);
v___f_2592_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2592_, 0, v_toSeq_2582_);
v___x_2593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2589_);
lean_ctor_set(v___x_2593_, 1, v___f_2585_);
lean_ctor_set(v___x_2593_, 2, v___f_2592_);
lean_ctor_set(v___x_2593_, 3, v___f_2591_);
lean_ctor_set(v___x_2593_, 4, v___f_2590_);
v___x_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
lean_ctor_set(v___x_2594_, 1, v___f_2586_);
v___x_2595_ = l_StateRefT_x27_instMonad___redArg(v___x_2594_);
v_toApplicative_2596_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2657_ == 0)
{
lean_object* v_unused_2658_; 
v_unused_2658_ = lean_ctor_get(v___x_2595_, 1);
lean_dec(v_unused_2658_);
v___x_2598_ = v___x_2595_;
v_isShared_2599_ = v_isSharedCheck_2657_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_toApplicative_2596_);
lean_dec(v___x_2595_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2657_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v_toFunctor_2600_; lean_object* v_toSeq_2601_; lean_object* v_toSeqLeft_2602_; lean_object* v_toSeqRight_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2655_; 
v_toFunctor_2600_ = lean_ctor_get(v_toApplicative_2596_, 0);
v_toSeq_2601_ = lean_ctor_get(v_toApplicative_2596_, 2);
v_toSeqLeft_2602_ = lean_ctor_get(v_toApplicative_2596_, 3);
v_toSeqRight_2603_ = lean_ctor_get(v_toApplicative_2596_, 4);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_toApplicative_2596_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; 
v_unused_2656_ = lean_ctor_get(v_toApplicative_2596_, 1);
lean_dec(v_unused_2656_);
v___x_2605_ = v_toApplicative_2596_;
v_isShared_2606_ = v_isSharedCheck_2655_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_toSeqRight_2603_);
lean_inc(v_toSeqLeft_2602_);
lean_inc(v_toSeq_2601_);
lean_inc(v_toFunctor_2600_);
lean_dec(v_toApplicative_2596_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2655_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___f_2607_; lean_object* v___f_2608_; lean_object* v___f_2609_; lean_object* v___f_2610_; lean_object* v___f_2611_; lean_object* v___x_2612_; lean_object* v___f_2613_; lean_object* v___f_2614_; lean_object* v___f_2615_; lean_object* v___x_2617_; 
v___f_2607_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___lam__0___boxed), 14, 1);
lean_closure_set(v___f_2607_, 0, v_f_2566_);
v___f_2608_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__4));
v___f_2609_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachSourceOf___closed__5));
lean_inc_ref(v_toFunctor_2600_);
v___f_2610_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2610_, 0, v_toFunctor_2600_);
v___f_2611_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2611_, 0, v_toFunctor_2600_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___f_2610_);
lean_ctor_set(v___x_2612_, 1, v___f_2611_);
v___f_2613_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2613_, 0, v_toSeqRight_2603_);
v___f_2614_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2614_, 0, v_toSeqLeft_2602_);
v___f_2615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2615_, 0, v_toSeq_2601_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 4, v___f_2613_);
lean_ctor_set(v___x_2605_, 3, v___f_2614_);
lean_ctor_set(v___x_2605_, 2, v___f_2615_);
lean_ctor_set(v___x_2605_, 1, v___f_2608_);
lean_ctor_set(v___x_2605_, 0, v___x_2612_);
v___x_2617_ = v___x_2605_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v___f_2608_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v___f_2615_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v___f_2614_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v___f_2613_);
v___x_2617_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
lean_object* v___x_2619_; 
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 1, v___f_2609_);
lean_ctor_set(v___x_2598_, 0, v___x_2617_);
v___x_2619_ = v___x_2598_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2617_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___f_2609_);
v___x_2619_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___f_2627_; lean_object* v___x_2628_; 
v___x_2620_ = l_StateRefT_x27_instMonad___redArg(v___x_2619_);
v___x_2621_ = l_ReaderT_instMonad___redArg(v___x_2620_);
v___x_2622_ = l_StateRefT_x27_instMonad___redArg(v___x_2621_);
v___x_2623_ = l_ReaderT_instMonad___redArg(v___x_2622_);
v___x_2624_ = l_ReaderT_instMonad___redArg(v___x_2623_);
v___x_2625_ = l_StateRefT_x27_instMonad___redArg(v___x_2624_);
v___x_2626_ = l_ReaderT_instMonad___redArg(v___x_2625_);
v___f_2627_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__1));
v___x_2628_ = l_Lean_Meta_Grind_Order_getStruct(v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2644_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2631_ = v___x_2628_;
v_isShared_2632_ = v_isSharedCheck_2644_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2628_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2644_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___f_2633_; lean_object* v_cnstrsOf_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___f_2633_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___closed__3);
v_cnstrsOf_2634_ = lean_ctor_get(v_a_2629_, 17);
lean_inc_ref(v_cnstrsOf_2634_);
lean_dec(v_a_2629_);
v___x_2635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2635_, 0, v_u_2564_);
lean_ctor_set(v___x_2635_, 1, v_v_2565_);
v___x_2636_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2633_, v___f_2627_, v_cnstrsOf_2634_, v___x_2635_);
lean_dec_ref(v_cnstrsOf_2634_);
if (lean_obj_tag(v___x_2636_) == 1)
{
lean_object* v_val_2637_; lean_object* v___x_1499__overap_2638_; lean_object* v___x_2639_; 
lean_del_object(v___x_2631_);
v_val_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_val_2637_);
lean_dec_ref_known(v___x_2636_, 1);
v___x_1499__overap_2638_ = l_List_forM___redArg(v___x_2626_, v_val_2637_, v___f_2607_);
lean_inc(v_a_2577_);
lean_inc_ref(v_a_2576_);
lean_inc(v_a_2575_);
lean_inc_ref(v_a_2574_);
lean_inc(v_a_2573_);
lean_inc_ref(v_a_2572_);
lean_inc(v_a_2571_);
lean_inc_ref(v_a_2570_);
lean_inc(v_a_2569_);
lean_inc(v_a_2568_);
lean_inc(v_a_2567_);
v___x_2639_ = lean_apply_12(v___x_1499__overap_2638_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_, v_a_2577_, lean_box(0));
return v___x_2639_;
}
else
{
lean_object* v___x_2640_; lean_object* v___x_2642_; 
lean_dec(v___x_2636_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___f_2607_);
v___x_2640_ = lean_box(0);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2640_);
v___x_2642_ = v___x_2631_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2640_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec_ref(v___x_2626_);
lean_dec_ref(v___f_2607_);
lean_dec(v_v_2565_);
lean_dec(v_u_2564_);
v_a_2645_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2628_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2628_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf___boxed(lean_object* v_u_2659_, lean_object* v_v_2660_, lean_object* v_f_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_forEachCnstrsOf(v_u_2659_, v_v_2660_, v_f_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2671_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
lean_dec(v_a_2668_);
lean_dec_ref(v_a_2667_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec(v_a_2663_);
lean_dec(v_a_2662_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(lean_object* v_e_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_2676_, v_a_2677_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2702_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2702_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2702_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v_termMapInv_2684_; lean_object* v___x_2685_; 
v_termMapInv_2684_ = lean_ctor_get(v_a_2680_, 4);
lean_inc_ref(v_termMapInv_2684_);
lean_dec(v_a_2680_);
v___x_2685_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMapInv_2684_, v_e_2675_);
lean_dec_ref(v_termMapInv_2684_);
if (lean_obj_tag(v___x_2685_) == 1)
{
lean_object* v_val_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2697_; 
v_val_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2697_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_val_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2697_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v_fst_2690_; lean_object* v___x_2692_; 
v_fst_2690_ = lean_ctor_get(v_val_2686_, 0);
lean_inc(v_fst_2690_);
lean_dec(v_val_2686_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 0, v_fst_2690_);
v___x_2692_ = v___x_2688_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_fst_2690_);
v___x_2692_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2694_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2692_);
v___x_2694_ = v___x_2682_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_object* v___x_2698_; lean_object* v___x_2700_; 
lean_dec(v___x_2685_);
v___x_2698_ = lean_box(0);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2698_);
v___x_2700_ = v___x_2682_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v___x_2698_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg___boxed(lean_object* v_e_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_e_2711_, v_a_2712_, v_a_2713_);
lean_dec_ref(v_a_2713_);
lean_dec(v_a_2712_);
lean_dec_ref(v_e_2711_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(lean_object* v_e_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_e_2716_, v_a_2717_, v_a_2725_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___boxed(lean_object* v_e_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f(v_e_2729_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_);
lean_dec(v_a_2739_);
lean_dec_ref(v_a_2738_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
lean_dec(v_a_2730_);
lean_dec_ref(v_e_2729_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(lean_object* v_u_2742_, lean_object* v_v_2743_, lean_object* v_k_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_){
_start:
{
lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; uint8_t v___x_2800_; 
v___x_2800_ = lean_nat_dec_eq(v_u_2742_, v_v_2743_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; 
v___x_2801_ = l_Lean_Meta_Grind_Order_isPartialOrder(v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2939_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2939_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2939_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
uint8_t v___x_2806_; 
v___x_2806_ = lean_unbox(v_a_2802_);
lean_dec(v_a_2802_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2807_ = lean_box(0);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 0, v___x_2807_);
v___x_2809_ = v___x_2804_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
else
{
uint8_t v___x_2811_; 
v___x_2811_ = l_Lean_Meta_Grind_Order_Weight_isZero(v_k_2744_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2814_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2812_ = lean_box(0);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 0, v___x_2812_);
v___x_2814_ = v___x_2804_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
else
{
lean_object* v___x_2816_; 
lean_del_object(v___x_2804_);
v___x_2816_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_v_2743_, v_u_2742_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2930_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2819_ = v___x_2816_;
v_isShared_2820_ = v_isSharedCheck_2930_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2930_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
if (lean_obj_tag(v_a_2817_) == 1)
{
lean_object* v_val_2821_; uint8_t v___x_2822_; 
v_val_2821_ = lean_ctor_get(v_a_2817_, 0);
lean_inc(v_val_2821_);
lean_dec_ref_known(v_a_2817_, 1);
v___x_2822_ = l_Lean_Meta_Grind_Order_Weight_isZero(v_val_2821_);
lean_dec(v_val_2821_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; lean_object* v___x_2825_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2823_ = lean_box(0);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2823_);
v___x_2825_ = v___x_2819_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v___x_2823_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
else
{
lean_object* v___x_2827_; 
lean_del_object(v___x_2819_);
v___x_2827_ = l_Lean_Meta_Grind_Order_getExpr(v_u_2742_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2829_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
lean_inc(v_a_2828_);
lean_dec_ref_known(v___x_2827_, 1);
v___x_2829_ = l_Lean_Meta_Grind_Order_getExpr(v_v_2743_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___y_2832_; lean_object* v___x_2906_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2829_, 1);
v___x_2906_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_2828_, v_a_2746_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; uint8_t v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
v___x_2908_ = lean_unbox(v_a_2907_);
lean_dec(v_a_2907_);
if (v___x_2908_ == 0)
{
v___y_2832_ = v___x_2906_;
goto v___jp_2831_;
}
else
{
lean_object* v___x_2909_; 
lean_dec_ref_known(v___x_2906_, 1);
v___x_2909_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_a_2830_, v_a_2746_);
v___y_2832_ = v___x_2909_;
goto v___jp_2831_;
}
}
else
{
v___y_2832_ = v___x_2906_;
goto v___jp_2831_;
}
v___jp_2831_:
{
if (lean_obj_tag(v___y_2832_) == 0)
{
lean_object* v_a_2833_; uint8_t v___x_2834_; 
v_a_2833_ = lean_ctor_get(v___y_2832_, 0);
lean_inc(v_a_2833_);
lean_dec_ref_known(v___y_2832_, 1);
v___x_2834_ = lean_unbox(v_a_2833_);
lean_dec(v_a_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; 
v___x_2835_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_a_2828_, v_a_2746_, v_a_2754_);
lean_dec(v_a_2828_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2868_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2868_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2868_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
if (lean_obj_tag(v_a_2836_) == 1)
{
lean_object* v_val_2840_; lean_object* v___x_2841_; 
lean_del_object(v___x_2838_);
v_val_2840_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_val_2840_);
lean_dec_ref_known(v_a_2836_, 1);
v___x_2841_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq_getOriginal_x3f___redArg(v_a_2830_, v_a_2746_, v_a_2754_);
lean_dec(v_a_2830_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2855_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2844_ = v___x_2841_;
v_isShared_2845_ = v_isSharedCheck_2855_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2855_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
if (lean_obj_tag(v_a_2842_) == 1)
{
lean_object* v_val_2846_; lean_object* v___x_2847_; 
lean_del_object(v___x_2844_);
v_val_2846_ = lean_ctor_get(v_a_2842_, 0);
lean_inc(v_val_2846_);
lean_dec_ref_known(v_a_2842_, 1);
v___x_2847_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_val_2840_, v_a_2746_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; uint8_t v___x_2849_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2848_);
v___x_2849_ = lean_unbox(v_a_2848_);
lean_dec(v_a_2848_);
if (v___x_2849_ == 0)
{
v___y_2758_ = v_val_2846_;
v___y_2759_ = v_val_2840_;
v___y_2760_ = v___x_2847_;
goto v___jp_2757_;
}
else
{
lean_object* v___x_2850_; 
lean_dec_ref_known(v___x_2847_, 1);
v___x_2850_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_val_2846_, v_a_2746_);
v___y_2758_ = v_val_2846_;
v___y_2759_ = v_val_2840_;
v___y_2760_ = v___x_2850_;
goto v___jp_2757_;
}
}
else
{
v___y_2758_ = v_val_2846_;
v___y_2759_ = v_val_2840_;
v___y_2760_ = v___x_2847_;
goto v___jp_2757_;
}
}
else
{
lean_object* v___x_2851_; lean_object* v___x_2853_; 
lean_dec(v_a_2842_);
lean_dec(v_val_2840_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2851_ = lean_box(0);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v___x_2851_);
v___x_2853_ = v___x_2844_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v___x_2851_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
lean_dec(v_val_2840_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2856_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2841_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2841_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
else
{
lean_object* v___x_2864_; lean_object* v___x_2866_; 
lean_dec(v_a_2836_);
lean_dec(v_a_2830_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2864_ = lean_box(0);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2864_);
v___x_2866_ = v___x_2838_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2864_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_a_2830_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2869_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2835_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2835_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v___x_2877_; 
v___x_2877_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_2828_, v_a_2830_, v_a_2746_);
lean_dec(v_a_2830_);
lean_dec(v_a_2828_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2889_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2880_ = v___x_2877_;
v_isShared_2881_ = v_isSharedCheck_2889_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2877_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2889_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
uint8_t v___x_2882_; 
v___x_2882_ = lean_unbox(v_a_2878_);
lean_dec(v_a_2878_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_del_object(v___x_2880_);
v___x_2883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2883_, 0, v_u_2742_);
lean_ctor_set(v___x_2883_, 1, v_v_2743_);
v___x_2884_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2883_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
return v___x_2884_;
}
else
{
lean_object* v___x_2885_; lean_object* v___x_2887_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2885_ = lean_box(0);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2885_);
v___x_2887_ = v___x_2880_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2885_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2890_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2877_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2877_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
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
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2905_; 
lean_dec(v_a_2830_);
lean_dec(v_a_2828_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2898_ = lean_ctor_get(v___y_2832_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___y_2832_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2900_ = v___y_2832_;
v_isShared_2901_ = v_isSharedCheck_2905_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___y_2832_);
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
else
{
lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2917_; 
lean_dec(v_a_2828_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2910_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2912_ = v___x_2829_;
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v___x_2829_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2915_; 
if (v_isShared_2913_ == 0)
{
v___x_2915_ = v___x_2912_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2910_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
}
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2918_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2827_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2827_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
}
else
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
lean_dec(v_a_2817_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2926_ = lean_box(0);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2926_);
v___x_2928_ = v___x_2819_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2931_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2816_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2816_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2940_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2801_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2801_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
else
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2948_ = lean_box(0);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
v___jp_2757_:
{
if (lean_obj_tag(v___y_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2791_; 
v_a_2761_ = lean_ctor_get(v___y_2760_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___y_2760_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2763_ = v___y_2760_;
v_isShared_2764_ = v_isSharedCheck_2791_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___y_2760_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2791_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
uint8_t v___x_2765_; 
v___x_2765_ = lean_unbox(v_a_2761_);
lean_dec(v_a_2761_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; lean_object* v___x_2768_; 
lean_dec_ref(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2766_ = lean_box(0);
if (v_isShared_2764_ == 0)
{
lean_ctor_set(v___x_2763_, 0, v___x_2766_);
v___x_2768_ = v___x_2763_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
else
{
lean_object* v___x_2770_; 
lean_del_object(v___x_2763_);
v___x_2770_ = l_Lean_Meta_Grind_isEqv___redArg(v___y_2759_, v___y_2758_, v_a_2746_);
lean_dec_ref(v___y_2758_);
lean_dec_ref(v___y_2759_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2782_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2773_ = v___x_2770_;
v_isShared_2774_ = v_isSharedCheck_2782_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2770_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2782_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
uint8_t v___x_2775_; 
v___x_2775_ = lean_unbox(v_a_2771_);
lean_dec(v_a_2771_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_del_object(v___x_2773_);
v___x_2776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2776_, 0, v_u_2742_);
lean_ctor_set(v___x_2776_, 1, v_v_2743_);
v___x_2777_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate(v___x_2776_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
return v___x_2777_;
}
else
{
lean_object* v___x_2778_; lean_object* v___x_2780_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v___x_2778_ = lean_box(0);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v___x_2778_);
v___x_2780_ = v___x_2773_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2783_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2770_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2770_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec_ref(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v_v_2743_);
lean_dec(v_u_2742_);
v_a_2792_ = lean_ctor_get(v___y_2760_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___y_2760_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___y_2760_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___y_2760_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq___boxed(lean_object* v_u_2950_, lean_object* v_v_2951_, lean_object* v_k_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_2950_, v_v_2951_, v_k_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_, v_a_2963_);
lean_dec(v_a_2963_);
lean_dec_ref(v_a_2962_);
lean_dec(v_a_2961_);
lean_dec_ref(v_a_2960_);
lean_dec(v_a_2959_);
lean_dec_ref(v_a_2958_);
lean_dec(v_a_2957_);
lean_dec_ref(v_a_2956_);
lean_dec(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_k_2952_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2966_, lean_object* v_vals_2967_, lean_object* v_i_2968_, lean_object* v_k_2969_){
_start:
{
lean_object* v___x_2974_; uint8_t v___x_2975_; 
v___x_2974_ = lean_array_get_size(v_keys_2966_);
v___x_2975_ = lean_nat_dec_lt(v_i_2968_, v___x_2974_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
lean_dec(v_i_2968_);
v___x_2976_ = lean_box(0);
return v___x_2976_;
}
else
{
lean_object* v_fst_2977_; lean_object* v_snd_2978_; lean_object* v_k_x27_2979_; lean_object* v_fst_2980_; lean_object* v_snd_2981_; uint8_t v___x_2982_; 
v_fst_2977_ = lean_ctor_get(v_k_2969_, 0);
v_snd_2978_ = lean_ctor_get(v_k_2969_, 1);
v_k_x27_2979_ = lean_array_fget_borrowed(v_keys_2966_, v_i_2968_);
v_fst_2980_ = lean_ctor_get(v_k_x27_2979_, 0);
v_snd_2981_ = lean_ctor_get(v_k_x27_2979_, 1);
v___x_2982_ = lean_nat_dec_eq(v_fst_2977_, v_fst_2980_);
if (v___x_2982_ == 0)
{
goto v___jp_2970_;
}
else
{
uint8_t v___x_2983_; 
v___x_2983_ = lean_nat_dec_eq(v_snd_2978_, v_snd_2981_);
if (v___x_2983_ == 0)
{
goto v___jp_2970_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = lean_array_fget_borrowed(v_vals_2967_, v_i_2968_);
lean_dec(v_i_2968_);
lean_inc(v___x_2984_);
v___x_2985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
return v___x_2985_;
}
}
}
v___jp_2970_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_unsigned_to_nat(1u);
v___x_2972_ = lean_nat_add(v_i_2968_, v___x_2971_);
lean_dec(v_i_2968_);
v_i_2968_ = v___x_2972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2986_, lean_object* v_vals_2987_, lean_object* v_i_2988_, lean_object* v_k_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_keys_2986_, v_vals_2987_, v_i_2988_, v_k_2989_);
lean_dec_ref(v_k_2989_);
lean_dec_ref(v_vals_2987_);
lean_dec_ref(v_keys_2986_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(lean_object* v_x_2991_, size_t v_x_2992_, lean_object* v_x_2993_){
_start:
{
if (lean_obj_tag(v_x_2991_) == 0)
{
lean_object* v_es_2994_; lean_object* v___x_2995_; size_t v___x_2996_; size_t v___x_2997_; lean_object* v_j_2998_; lean_object* v___x_2999_; 
v_es_2994_ = lean_ctor_get(v_x_2991_, 0);
v___x_2995_ = lean_box(2);
v___x_2996_ = ((size_t)31ULL);
v___x_2997_ = lean_usize_land(v_x_2992_, v___x_2996_);
v_j_2998_ = lean_usize_to_nat(v___x_2997_);
v___x_2999_ = lean_array_get_borrowed(v___x_2995_, v_es_2994_, v_j_2998_);
lean_dec(v_j_2998_);
switch(lean_obj_tag(v___x_2999_))
{
case 0:
{
lean_object* v_key_3000_; lean_object* v_val_3001_; lean_object* v_fst_3002_; lean_object* v_snd_3003_; lean_object* v_fst_3004_; lean_object* v_snd_3005_; uint8_t v___x_3006_; 
v_key_3000_ = lean_ctor_get(v___x_2999_, 0);
v_val_3001_ = lean_ctor_get(v___x_2999_, 1);
v_fst_3002_ = lean_ctor_get(v_x_2993_, 0);
v_snd_3003_ = lean_ctor_get(v_x_2993_, 1);
v_fst_3004_ = lean_ctor_get(v_key_3000_, 0);
v_snd_3005_ = lean_ctor_get(v_key_3000_, 1);
v___x_3006_ = lean_nat_dec_eq(v_fst_3002_, v_fst_3004_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; 
v___x_3007_ = lean_box(0);
return v___x_3007_;
}
else
{
uint8_t v___x_3008_; 
v___x_3008_ = lean_nat_dec_eq(v_snd_3003_, v_snd_3005_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_box(0);
return v___x_3009_;
}
else
{
lean_object* v___x_3010_; 
lean_inc(v_val_3001_);
v___x_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3010_, 0, v_val_3001_);
return v___x_3010_;
}
}
}
case 1:
{
lean_object* v_node_3011_; size_t v___x_3012_; size_t v___x_3013_; 
v_node_3011_ = lean_ctor_get(v___x_2999_, 0);
v___x_3012_ = ((size_t)5ULL);
v___x_3013_ = lean_usize_shift_right(v_x_2992_, v___x_3012_);
v_x_2991_ = v_node_3011_;
v_x_2992_ = v___x_3013_;
goto _start;
}
default: 
{
lean_object* v___x_3015_; 
v___x_3015_ = lean_box(0);
return v___x_3015_;
}
}
}
else
{
lean_object* v_ks_3016_; lean_object* v_vs_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_ks_3016_ = lean_ctor_get(v_x_2991_, 0);
v_vs_3017_ = lean_ctor_get(v_x_2991_, 1);
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3019_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_ks_3016_, v_vs_3017_, v___x_3018_, v_x_2993_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg___boxed(lean_object* v_x_3020_, lean_object* v_x_3021_, lean_object* v_x_3022_){
_start:
{
size_t v_x_3987__boxed_3023_; lean_object* v_res_3024_; 
v_x_3987__boxed_3023_ = lean_unbox_usize(v_x_3021_);
lean_dec(v_x_3021_);
v_res_3024_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3020_, v_x_3987__boxed_3023_, v_x_3022_);
lean_dec_ref(v_x_3022_);
lean_dec_ref(v_x_3020_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(lean_object* v_x_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v_fst_3027_; lean_object* v_snd_3028_; uint64_t v___x_3029_; uint64_t v___x_3030_; uint64_t v___x_3031_; size_t v___x_3032_; lean_object* v___x_3033_; 
v_fst_3027_ = lean_ctor_get(v_x_3026_, 0);
v_snd_3028_ = lean_ctor_get(v_x_3026_, 1);
v___x_3029_ = lean_uint64_of_nat(v_fst_3027_);
v___x_3030_ = lean_uint64_of_nat(v_snd_3028_);
v___x_3031_ = lean_uint64_mix_hash(v___x_3029_, v___x_3030_);
v___x_3032_ = lean_uint64_to_usize(v___x_3031_);
v___x_3033_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3025_, v___x_3032_, v_x_3026_);
return v___x_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg___boxed(lean_object* v_x_3034_, lean_object* v_x_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_x_3034_, v_x_3035_);
lean_dec_ref(v_x_3035_);
lean_dec_ref(v_x_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(lean_object* v_u_3037_, lean_object* v_v_3038_, lean_object* v_k_3039_, lean_object* v_as_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
if (lean_obj_tag(v_as_3040_) == 0)
{
lean_object* v___x_3053_; lean_object* v___x_3054_; 
lean_dec_ref(v_k_3039_);
lean_dec(v_v_3038_);
lean_dec(v_u_3037_);
v___x_3053_ = lean_box(0);
v___x_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3053_);
return v___x_3054_;
}
else
{
lean_object* v_head_3055_; lean_object* v_tail_3056_; lean_object* v_fst_3057_; lean_object* v_snd_3058_; lean_object* v___x_3059_; 
v_head_3055_ = lean_ctor_get(v_as_3040_, 0);
lean_inc(v_head_3055_);
v_tail_3056_ = lean_ctor_get(v_as_3040_, 1);
lean_inc(v_tail_3056_);
lean_dec_ref_known(v_as_3040_, 2);
v_fst_3057_ = lean_ctor_get(v_head_3055_, 0);
lean_inc(v_fst_3057_);
v_snd_3058_ = lean_ctor_get(v_head_3055_, 1);
lean_inc(v_snd_3058_);
lean_dec(v_head_3055_);
lean_inc_ref(v_k_3039_);
lean_inc(v_v_3038_);
lean_inc(v_u_3037_);
v___x_3059_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqFalse(v_u_3037_, v_v_3038_, v_k_3039_, v_fst_3057_, v_snd_3058_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_dec_ref_known(v___x_3059_, 1);
v_as_3040_ = v_tail_3056_;
goto _start;
}
else
{
lean_dec(v_tail_3056_);
lean_dec_ref(v_k_3039_);
lean_dec(v_v_3038_);
lean_dec(v_u_3037_);
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1___boxed(lean_object* v_u_3061_, lean_object* v_v_3062_, lean_object* v_k_3063_, lean_object* v_as_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(v_u_3061_, v_v_3062_, v_k_3063_, v_as_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
lean_dec(v___y_3071_);
lean_dec_ref(v___y_3070_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec(v___y_3065_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(lean_object* v_u_3078_, lean_object* v_v_3079_, lean_object* v_k_3080_, lean_object* v_as_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_){
_start:
{
if (lean_obj_tag(v_as_3081_) == 0)
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
lean_dec_ref(v_k_3080_);
lean_dec(v_v_3079_);
lean_dec(v_u_3078_);
v___x_3094_ = lean_box(0);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
else
{
lean_object* v_head_3096_; lean_object* v_tail_3097_; lean_object* v_fst_3098_; lean_object* v_snd_3099_; lean_object* v___x_3100_; 
v_head_3096_ = lean_ctor_get(v_as_3081_, 0);
lean_inc(v_head_3096_);
v_tail_3097_ = lean_ctor_get(v_as_3081_, 1);
lean_inc(v_tail_3097_);
lean_dec_ref_known(v_as_3081_, 2);
v_fst_3098_ = lean_ctor_get(v_head_3096_, 0);
lean_inc(v_fst_3098_);
v_snd_3099_ = lean_ctor_get(v_head_3096_, 1);
lean_inc(v_snd_3099_);
lean_dec(v_head_3096_);
lean_inc_ref(v_k_3080_);
lean_inc(v_v_3079_);
lean_inc(v_u_3078_);
v___x_3100_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue(v_u_3078_, v_v_3079_, v_k_3080_, v_fst_3098_, v_snd_3099_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_dec_ref_known(v___x_3100_, 1);
v_as_3081_ = v_tail_3097_;
goto _start;
}
else
{
lean_dec(v_tail_3097_);
lean_dec_ref(v_k_3080_);
lean_dec(v_v_3079_);
lean_dec(v_u_3078_);
return v___x_3100_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2___boxed(lean_object* v_u_3102_, lean_object* v_v_3103_, lean_object* v_k_3104_, lean_object* v_as_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(v_u_3102_, v_v_3103_, v_k_3104_, v_as_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
lean_dec(v___y_3116_);
lean_dec_ref(v___y_3115_);
lean_dec(v___y_3114_);
lean_dec_ref(v___y_3113_);
lean_dec(v___y_3112_);
lean_dec_ref(v___y_3111_);
lean_dec(v___y_3110_);
lean_dec_ref(v___y_3109_);
lean_dec(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec(v___y_3106_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(lean_object* v_u_3119_, lean_object* v_v_3120_, lean_object* v_k_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v_a_3153_; lean_object* v_cnstrsOf_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3152_, 1);
v_cnstrsOf_3154_ = lean_ctor_get(v_a_3153_, 17);
lean_inc_ref(v_cnstrsOf_3154_);
lean_dec(v_a_3153_);
lean_inc(v_v_3120_);
lean_inc(v_u_3119_);
v___x_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3155_, 0, v_u_3119_);
lean_ctor_set(v___x_3155_, 1, v_v_3120_);
v___x_3156_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_cnstrsOf_3154_, v___x_3155_);
lean_dec_ref_known(v___x_3155_, 2);
lean_dec_ref(v_cnstrsOf_3154_);
if (lean_obj_tag(v___x_3156_) == 1)
{
lean_object* v_val_3157_; lean_object* v___x_3158_; 
v_val_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_val_3157_);
lean_dec_ref_known(v___x_3156_, 1);
lean_inc_ref(v_k_3121_);
lean_inc(v_v_3120_);
lean_inc(v_u_3119_);
v___x_3158_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__2(v_u_3119_, v_v_3120_, v_k_3121_, v_val_3157_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_dec_ref_known(v___x_3158_, 1);
goto v___jp_3134_;
}
else
{
lean_dec_ref(v_k_3121_);
lean_dec(v_v_3120_);
lean_dec(v_u_3119_);
return v___x_3158_;
}
}
else
{
lean_dec(v___x_3156_);
goto v___jp_3134_;
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3166_; 
lean_dec_ref(v_k_3121_);
lean_dec(v_v_3120_);
lean_dec(v_u_3119_);
v_a_3159_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3161_ = v___x_3152_;
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3152_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3164_; 
if (v_isShared_3162_ == 0)
{
v___x_3164_ = v___x_3161_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3159_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
v___jp_3134_:
{
lean_object* v___x_3135_; 
v___x_3135_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v_cnstrsOf_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v_cnstrsOf_3137_ = lean_ctor_get(v_a_3136_, 17);
lean_inc_ref(v_cnstrsOf_3137_);
lean_dec(v_a_3136_);
lean_inc(v_u_3119_);
lean_inc(v_v_3120_);
v___x_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3138_, 0, v_v_3120_);
lean_ctor_set(v___x_3138_, 1, v_u_3119_);
v___x_3139_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_cnstrsOf_3137_, v___x_3138_);
lean_dec_ref_known(v___x_3138_, 2);
lean_dec_ref(v_cnstrsOf_3137_);
if (lean_obj_tag(v___x_3139_) == 1)
{
lean_object* v_val_3140_; lean_object* v___x_3141_; 
v_val_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_val_3140_);
lean_dec_ref_known(v___x_3139_, 1);
lean_inc_ref(v_k_3121_);
lean_inc(v_v_3120_);
lean_inc(v_u_3119_);
v___x_3141_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__1(v_u_3119_, v_v_3120_, v_k_3121_, v_val_3140_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v___x_3142_; 
lean_dec_ref_known(v___x_3141_, 1);
v___x_3142_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_3119_, v_v_3120_, v_k_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
lean_dec_ref(v_k_3121_);
return v___x_3142_;
}
else
{
lean_dec_ref(v_k_3121_);
lean_dec(v_v_3120_);
lean_dec(v_u_3119_);
return v___x_3141_;
}
}
else
{
lean_object* v___x_3143_; 
lean_dec(v___x_3139_);
v___x_3143_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEq(v_u_3119_, v_v_3120_, v_k_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
lean_dec_ref(v_k_3121_);
return v___x_3143_;
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref(v_k_3121_);
lean_dec(v_v_3120_);
lean_dec(v_u_3119_);
v_a_3144_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3135_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3135_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate___boxed(lean_object* v_u_3167_, lean_object* v_v_3168_, lean_object* v_k_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3167_, v_v_3168_, v_k_3169_, v_a_3170_, v_a_3171_, v_a_3172_, v_a_3173_, v_a_3174_, v_a_3175_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
lean_dec(v_a_3180_);
lean_dec_ref(v_a_3179_);
lean_dec(v_a_3178_);
lean_dec_ref(v_a_3177_);
lean_dec(v_a_3176_);
lean_dec_ref(v_a_3175_);
lean_dec(v_a_3174_);
lean_dec_ref(v_a_3173_);
lean_dec(v_a_3172_);
lean_dec(v_a_3171_);
lean_dec(v_a_3170_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(lean_object* v_00_u03b2_3183_, lean_object* v_x_3184_, lean_object* v_x_3185_){
_start:
{
lean_object* v___x_3186_; 
v___x_3186_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___redArg(v_x_3184_, v_x_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0___boxed(lean_object* v_00_u03b2_3187_, lean_object* v_x_3188_, lean_object* v_x_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0(v_00_u03b2_3187_, v_x_3188_, v_x_3189_);
lean_dec_ref(v_x_3189_);
lean_dec_ref(v_x_3188_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(lean_object* v_00_u03b2_3191_, lean_object* v_x_3192_, size_t v_x_3193_, lean_object* v_x_3194_){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___redArg(v_x_3192_, v_x_3193_, v_x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3196_, lean_object* v_x_3197_, lean_object* v_x_3198_, lean_object* v_x_3199_){
_start:
{
size_t v_x_4251__boxed_3200_; lean_object* v_res_3201_; 
v_x_4251__boxed_3200_ = lean_unbox_usize(v_x_3198_);
lean_dec(v_x_3198_);
v_res_3201_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0(v_00_u03b2_3196_, v_x_3197_, v_x_4251__boxed_3200_, v_x_3199_);
lean_dec_ref(v_x_3199_);
lean_dec_ref(v_x_3197_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3202_, lean_object* v_keys_3203_, lean_object* v_vals_3204_, lean_object* v_heq_3205_, lean_object* v_i_3206_, lean_object* v_k_3207_){
_start:
{
lean_object* v___x_3208_; 
v___x_3208_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___redArg(v_keys_3203_, v_vals_3204_, v_i_3206_, v_k_3207_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3209_, lean_object* v_keys_3210_, lean_object* v_vals_3211_, lean_object* v_heq_3212_, lean_object* v_i_3213_, lean_object* v_k_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate_spec__0_spec__0_spec__1(v_00_u03b2_3209_, v_keys_3210_, v_vals_3211_, v_heq_3212_, v_i_3213_, v_k_3214_);
lean_dec_ref(v_k_3214_);
lean_dec_ref(v_vals_3211_);
lean_dec_ref(v_keys_3210_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(lean_object* v_u_3216_, lean_object* v_v_3217_, lean_object* v_k_3218_, lean_object* v_w_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_){
_start:
{
lean_object* v___x_3232_; 
v___x_3232_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_3216_, v_v_3217_, v_k_3218_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3255_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3255_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3255_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
uint8_t v___x_3237_; 
v___x_3237_ = lean_unbox(v_a_3233_);
lean_dec(v_a_3233_);
if (v___x_3237_ == 0)
{
lean_object* v___x_3238_; lean_object* v___x_3240_; 
lean_dec_ref(v_k_3218_);
lean_dec(v_v_3217_);
lean_dec(v_u_3216_);
v___x_3238_ = lean_box(0);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3238_);
v___x_3240_ = v___x_3235_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___x_3238_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
else
{
lean_object* v___x_3242_; 
lean_del_object(v___x_3235_);
lean_inc_ref(v_k_3218_);
lean_inc(v_v_3217_);
lean_inc(v_u_3216_);
v___x_3242_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_3216_, v_v_3217_, v_k_3218_, v_a_3220_, v_a_3221_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v___x_3243_; 
lean_dec_ref_known(v___x_3242_, 1);
v___x_3243_ = l_Lean_Meta_Grind_Order_getProof(v_w_3219_, v_v_3217_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; lean_object* v___x_3245_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
lean_inc(v_v_3217_);
lean_inc(v_u_3216_);
v___x_3245_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_3216_, v_v_3217_, v_a_3244_, v_a_3220_, v_a_3221_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v___x_3246_; 
lean_dec_ref_known(v___x_3245_, 1);
v___x_3246_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3216_, v_v_3217_, v_k_3218_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_);
return v___x_3246_;
}
else
{
lean_dec_ref(v_k_3218_);
lean_dec(v_v_3217_);
lean_dec(v_u_3216_);
return v___x_3245_;
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec_ref(v_k_3218_);
lean_dec(v_v_3217_);
lean_dec(v_u_3216_);
v_a_3247_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3243_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3243_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
else
{
lean_dec_ref(v_k_3218_);
lean_dec(v_v_3217_);
lean_dec(v_u_3216_);
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
lean_dec_ref(v_k_3218_);
lean_dec(v_v_3217_);
lean_dec(v_u_3216_);
v_a_3256_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3232_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3232_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter___boxed(lean_object* v_u_3264_, lean_object* v_v_3265_, lean_object* v_k_3266_, lean_object* v_w_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_u_3264_, v_v_3265_, v_k_3266_, v_w_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_);
lean_dec(v_a_3278_);
lean_dec_ref(v_a_3277_);
lean_dec(v_a_3276_);
lean_dec_ref(v_a_3275_);
lean_dec(v_a_3274_);
lean_dec_ref(v_a_3273_);
lean_dec(v_a_3272_);
lean_dec_ref(v_a_3271_);
lean_dec(v_a_3270_);
lean_dec(v_a_3269_);
lean_dec(v_a_3268_);
lean_dec(v_w_3267_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(lean_object* v___x_3281_, lean_object* v_i_3282_, lean_object* v_v_3283_, lean_object* v_x_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
if (lean_obj_tag(v_x_3284_) == 0)
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
lean_dec(v_i_3282_);
v___x_3297_ = lean_box(0);
v___x_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
return v___x_3298_;
}
else
{
lean_object* v_key_3299_; lean_object* v_value_3300_; lean_object* v_tail_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v_key_3299_ = lean_ctor_get(v_x_3284_, 0);
lean_inc(v_key_3299_);
v_value_3300_ = lean_ctor_get(v_x_3284_, 1);
lean_inc(v_value_3300_);
v_tail_3301_ = lean_ctor_get(v_x_3284_, 2);
lean_inc(v_tail_3301_);
lean_dec_ref_known(v_x_3284_, 3);
v___x_3302_ = l_Lean_Meta_Grind_Order_Weight_add(v___x_3281_, v_value_3300_);
lean_inc(v_i_3282_);
v___x_3303_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_i_3282_, v_key_3299_, v___x_3302_, v_v_3283_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_dec_ref_known(v___x_3303_, 1);
v_x_3284_ = v_tail_3301_;
goto _start;
}
else
{
lean_dec(v_tail_3301_);
lean_dec(v_i_3282_);
return v___x_3303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0___boxed(lean_object* v___x_3305_, lean_object* v_i_3306_, lean_object* v_v_3307_, lean_object* v_x_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3305_, v_i_3306_, v_v_3307_, v_x_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
lean_dec(v___y_3319_);
lean_dec_ref(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec(v___y_3309_);
lean_dec(v_v_3307_);
lean_dec_ref(v___x_3305_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(lean_object* v_k_3322_, lean_object* v_v_3323_, lean_object* v_u_3324_, lean_object* v_x_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
if (lean_obj_tag(v_x_3325_) == 0)
{
lean_object* v___x_3338_; lean_object* v___x_3339_; 
lean_dec(v_v_3323_);
lean_dec_ref(v_k_3322_);
v___x_3338_ = lean_box(0);
v___x_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
return v___x_3339_;
}
else
{
lean_object* v_key_3340_; lean_object* v_value_3341_; lean_object* v_tail_3342_; lean_object* v___y_3344_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v_key_3340_ = lean_ctor_get(v_x_3325_, 0);
lean_inc_n(v_key_3340_, 2);
v_value_3341_ = lean_ctor_get(v_x_3325_, 1);
lean_inc(v_value_3341_);
v_tail_3342_ = lean_ctor_get(v_x_3325_, 2);
lean_inc(v_tail_3342_);
lean_dec_ref_known(v_x_3325_, 3);
lean_inc_ref(v_k_3322_);
v___x_3346_ = l_Lean_Meta_Grind_Order_Weight_add(v_value_3341_, v_k_3322_);
lean_dec(v_value_3341_);
lean_inc_ref(v___x_3346_);
lean_inc(v_v_3323_);
v___x_3347_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_updateIfShorter(v_key_3340_, v_v_3323_, v___x_3346_, v_u_3324_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
lean_dec_ref_known(v___x_3347_, 1);
v___x_3348_ = lean_box(0);
v___x_3349_ = l_Lean_Meta_Grind_Order_getStruct(v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v_targets_3351_; lean_object* v_size_3352_; uint8_t v___x_3353_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc(v_a_3350_);
lean_dec_ref_known(v___x_3349_, 1);
v_targets_3351_ = lean_ctor_get(v_a_3350_, 19);
lean_inc_ref(v_targets_3351_);
lean_dec(v_a_3350_);
v_size_3352_ = lean_ctor_get(v_targets_3351_, 2);
v___x_3353_ = lean_nat_dec_lt(v_v_3323_, v_size_3352_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
lean_dec_ref(v_targets_3351_);
v___x_3354_ = l_outOfBounds___redArg(v___x_3348_);
v___x_3355_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3346_, v_key_3340_, v_v_3323_, v___x_3354_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
lean_dec_ref(v___x_3346_);
v___y_3344_ = v___x_3355_;
goto v___jp_3343_;
}
else
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3348_, v_targets_3351_, v_v_3323_);
lean_dec_ref(v_targets_3351_);
v___x_3357_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v___x_3346_, v_key_3340_, v_v_3323_, v___x_3356_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
lean_dec_ref(v___x_3346_);
v___y_3344_ = v___x_3357_;
goto v___jp_3343_;
}
}
else
{
lean_object* v_a_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3365_; 
lean_dec_ref(v___x_3346_);
lean_dec(v_tail_3342_);
lean_dec(v_key_3340_);
lean_dec(v_v_3323_);
lean_dec_ref(v_k_3322_);
v_a_3358_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3360_ = v___x_3349_;
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_a_3358_);
lean_dec(v___x_3349_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3363_; 
if (v_isShared_3361_ == 0)
{
v___x_3363_ = v___x_3360_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v_a_3358_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
}
else
{
lean_dec_ref(v___x_3346_);
lean_dec(v_key_3340_);
v___y_3344_ = v___x_3347_;
goto v___jp_3343_;
}
v___jp_3343_:
{
if (lean_obj_tag(v___y_3344_) == 0)
{
lean_dec_ref_known(v___y_3344_, 1);
v_x_3325_ = v_tail_3342_;
goto _start;
}
else
{
lean_dec(v_tail_3342_);
lean_dec(v_v_3323_);
lean_dec_ref(v_k_3322_);
return v___y_3344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1___boxed(lean_object* v_k_3366_, lean_object* v_v_3367_, lean_object* v_u_3368_, lean_object* v_x_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3366_, v_v_3367_, v_u_3368_, v_x_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
lean_dec(v___y_3372_);
lean_dec(v___y_3371_);
lean_dec(v___y_3370_);
lean_dec(v_u_3368_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(lean_object* v_u_3383_, lean_object* v_v_3384_, lean_object* v_k_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_){
_start:
{
lean_object* v___y_3399_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_box(0);
v___x_3419_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v_targets_3421_; lean_object* v_size_3422_; uint8_t v___x_3423_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref_known(v___x_3419_, 1);
v_targets_3421_ = lean_ctor_get(v_a_3420_, 19);
lean_inc_ref(v_targets_3421_);
lean_dec(v_a_3420_);
v_size_3422_ = lean_ctor_get(v_targets_3421_, 2);
v___x_3423_ = lean_nat_dec_lt(v_v_3384_, v_size_3422_);
if (v___x_3423_ == 0)
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
lean_dec_ref(v_targets_3421_);
v___x_3424_ = l_outOfBounds___redArg(v___x_3418_);
lean_inc(v_u_3383_);
v___x_3425_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v_k_3385_, v_u_3383_, v_v_3384_, v___x_3424_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
v___y_3399_ = v___x_3425_;
goto v___jp_3398_;
}
else
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3426_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3418_, v_targets_3421_, v_v_3384_);
lean_dec_ref(v_targets_3421_);
lean_inc(v_u_3383_);
v___x_3427_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__0(v_k_3385_, v_u_3383_, v_v_3384_, v___x_3426_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
v___y_3399_ = v___x_3427_;
goto v___jp_3398_;
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec_ref(v_k_3385_);
lean_dec(v_v_3384_);
lean_dec(v_u_3383_);
v_a_3428_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3419_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3419_);
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
v___jp_3398_:
{
if (lean_obj_tag(v___y_3399_) == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
lean_dec_ref_known(v___y_3399_, 1);
v___x_3400_ = lean_box(0);
v___x_3401_ = l_Lean_Meta_Grind_Order_getStruct(v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v_sources_3403_; lean_object* v_size_3404_; uint8_t v___x_3405_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3401_, 1);
v_sources_3403_ = lean_ctor_get(v_a_3402_, 18);
lean_inc_ref(v_sources_3403_);
lean_dec(v_a_3402_);
v_size_3404_ = lean_ctor_get(v_sources_3403_, 2);
v___x_3405_ = lean_nat_dec_lt(v_u_3383_, v_size_3404_);
if (v___x_3405_ == 0)
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
lean_dec_ref(v_sources_3403_);
v___x_3406_ = l_outOfBounds___redArg(v___x_3400_);
v___x_3407_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3385_, v_v_3384_, v_u_3383_, v___x_3406_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
lean_dec(v_u_3383_);
return v___x_3407_;
}
else
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3400_, v_sources_3403_, v_u_3383_);
lean_dec_ref(v_sources_3403_);
v___x_3409_ = l_Lean_AssocList_forM___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update_spec__1(v_k_3385_, v_v_3384_, v_u_3383_, v___x_3408_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
lean_dec(v_u_3383_);
return v___x_3409_;
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec_ref(v_k_3385_);
lean_dec(v_v_3384_);
lean_dec(v_u_3383_);
v_a_3410_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3401_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3401_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
else
{
lean_dec_ref(v_k_3385_);
lean_dec(v_v_3384_);
lean_dec(v_u_3383_);
return v___y_3399_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update___boxed(lean_object* v_u_3436_, lean_object* v_v_3437_, lean_object* v_k_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(v_u_3436_, v_v_3437_, v_k_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_, v_a_3448_, v_a_3449_);
lean_dec(v_a_3449_);
lean_dec_ref(v_a_3448_);
lean_dec(v_a_3447_);
lean_dec_ref(v_a_3446_);
lean_dec(v_a_3445_);
lean_dec_ref(v_a_3444_);
lean_dec(v_a_3443_);
lean_dec_ref(v_a_3442_);
lean_dec(v_a_3441_);
lean_dec(v_a_3440_);
lean_dec(v_a_3439_);
return v_res_3451_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_addEdge___closed__2(void){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3458_ = ((lean_object*)(l_Lean_Meta_Grind_Order_addEdge___closed__1));
v___x_3459_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6));
v___x_3460_ = l_Lean_Name_append(v___x_3459_, v___x_3458_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge(lean_object* v_u_3461_, lean_object* v_v_3462_, lean_object* v_k_3463_, lean_object* v_h_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_){
_start:
{
lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___x_3552_; 
v___x_3552_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_3466_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3630_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3555_ = v___x_3552_;
v_isShared_3556_ = v_isSharedCheck_3630_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3552_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3630_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
uint8_t v___x_3557_; 
v___x_3557_ = lean_unbox(v_a_3553_);
lean_dec(v_a_3553_);
if (v___x_3557_ == 0)
{
uint8_t v___x_3558_; 
lean_del_object(v___x_3555_);
v___x_3558_ = lean_nat_dec_eq(v_u_3461_, v_v_3462_);
if (v___x_3558_ == 0)
{
lean_object* v_toCold_3559_; lean_object* v_options_3560_; uint8_t v_hasTrace_3561_; 
v_toCold_3559_ = lean_ctor_get(v_a_3474_, 0);
v_options_3560_ = lean_ctor_get(v_toCold_3559_, 2);
v_hasTrace_3561_ = lean_ctor_get_uint8(v_options_3560_, sizeof(void*)*1);
if (v_hasTrace_3561_ == 0)
{
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
v___y_3522_ = v_a_3472_;
v___y_3523_ = v_a_3473_;
v___y_3524_ = v_a_3474_;
v___y_3525_ = v_a_3475_;
goto v___jp_3514_;
}
else
{
lean_object* v_inheritedTraceOptions_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; uint8_t v___x_3565_; 
v_inheritedTraceOptions_3562_ = lean_ctor_get(v_toCold_3559_, 11);
v___x_3563_ = ((lean_object*)(l_Lean_Meta_Grind_Order_addEdge___closed__1));
v___x_3564_ = lean_obj_once(&l_Lean_Meta_Grind_Order_addEdge___closed__2, &l_Lean_Meta_Grind_Order_addEdge___closed__2_once, _init_l_Lean_Meta_Grind_Order_addEdge___closed__2);
v___x_3565_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3562_, v_options_3560_, v___x_3564_);
if (v___x_3565_ == 0)
{
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
v___y_3522_ = v_a_3472_;
v___y_3523_ = v_a_3473_;
v___y_3524_ = v_a_3474_;
v___y_3525_ = v_a_3475_;
goto v___jp_3514_;
}
else
{
lean_object* v___x_3566_; 
v___x_3566_ = l_Lean_Meta_Grind_Order_getExpr(v_u_3461_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v___x_3568_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
v___x_3568_ = l_Lean_Meta_Grind_Order_getExpr(v_v_3462_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v_k_3570_; uint8_t v_strict_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___y_3579_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v_k_3570_ = lean_ctor_get(v_k_3463_, 0);
v_strict_3571_ = lean_ctor_get_uint8(v_k_3463_, sizeof(void*)*1);
v___x_3572_ = l_Lean_MessageData_ofExpr(v_a_3567_);
v___x_3573_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__4);
v___x_3574_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3572_);
lean_ctor_set(v___x_3574_, 1, v___x_3573_);
v___x_3575_ = l_Lean_MessageData_ofExpr(v_a_3569_);
v___x_3576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3574_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
v___x_3577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
lean_ctor_set(v___x_3577_, 1, v___x_3573_);
if (v_strict_3571_ == 0)
{
lean_object* v___x_3584_; 
v___x_3584_ = l_Int_repr(v_k_3570_);
v___y_3579_ = v___x_3584_;
goto v___jp_3578_;
}
else
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3585_ = l_Int_repr(v_k_3570_);
v___x_3586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkEqTrue___closed__5));
v___x_3587_ = lean_string_append(v___x_3585_, v___x_3586_);
v___y_3579_ = v___x_3587_;
goto v___jp_3578_;
}
v___jp_3578_:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___y_3579_);
v___x_3581_ = l_Lean_MessageData_ofFormat(v___x_3580_);
v___x_3582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3577_);
lean_ctor_set(v___x_3582_, 1, v___x_3581_);
v___x_3583_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_3563_, v___x_3582_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_dec_ref_known(v___x_3583_, 1);
v___y_3515_ = v_a_3465_;
v___y_3516_ = v_a_3466_;
v___y_3517_ = v_a_3467_;
v___y_3518_ = v_a_3468_;
v___y_3519_ = v_a_3469_;
v___y_3520_ = v_a_3470_;
v___y_3521_ = v_a_3471_;
v___y_3522_ = v_a_3472_;
v___y_3523_ = v_a_3473_;
v___y_3524_ = v_a_3474_;
v___y_3525_ = v_a_3475_;
goto v___jp_3514_;
}
else
{
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
return v___x_3583_;
}
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
lean_dec(v_a_3567_);
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v_a_3588_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3568_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3568_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v_a_3596_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3566_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3566_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
}
}
else
{
uint8_t v___x_3604_; 
lean_dec(v_v_3462_);
v___x_3604_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v_k_3463_);
if (v___x_3604_ == 0)
{
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_u_3461_);
goto v___jp_3549_;
}
else
{
lean_object* v___x_3605_; 
v___x_3605_ = l_Lean_Meta_Grind_Order_getExpr(v_u_3461_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
lean_dec(v_u_3461_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3607_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_a_3606_);
lean_dec_ref_known(v___x_3605_, 1);
v___x_3607_ = l_Lean_Meta_Grind_Order_mkSelfUnsatProof(v_a_3606_, v_k_3463_, v_h_3464_, v_a_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
lean_dec_ref(v_k_3463_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v___x_3609_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v___x_3609_ = l_Lean_Meta_Grind_closeGoal(v_a_3608_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_dec_ref_known(v___x_3609_, 1);
goto v___jp_3549_;
}
else
{
return v___x_3609_;
}
}
else
{
lean_object* v_a_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3617_; 
v_a_3610_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3612_ = v___x_3607_;
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_a_3610_);
lean_dec(v___x_3607_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3615_; 
if (v_isShared_3613_ == 0)
{
v___x_3615_ = v___x_3612_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v_a_3610_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
return v___x_3615_;
}
}
}
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
v_a_3618_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3605_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3605_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
}
}
else
{
lean_object* v___x_3626_; lean_object* v___x_3628_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v___x_3626_ = lean_box(0);
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 0, v___x_3626_);
v___x_3628_ = v___x_3555_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v___x_3626_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
return v___x_3628_;
}
}
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v_a_3631_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3552_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3552_);
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
v___jp_3477_:
{
lean_object* v___x_3489_; 
v___x_3489_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_isShorter(v_u_3461_, v_v_3462_, v_k_3463_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3505_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3492_ = v___x_3489_;
v_isShared_3493_ = v_isSharedCheck_3505_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3489_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3505_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
uint8_t v___x_3494_; 
v___x_3494_ = lean_unbox(v_a_3490_);
lean_dec(v_a_3490_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; lean_object* v___x_3497_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v___x_3495_ = lean_box(0);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v___x_3495_);
v___x_3497_ = v___x_3492_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
else
{
lean_object* v___x_3499_; 
lean_del_object(v___x_3492_);
lean_inc_ref(v_k_3463_);
lean_inc(v_v_3462_);
lean_inc(v_u_3461_);
v___x_3499_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setDist___redArg(v_u_3461_, v_v_3462_, v_k_3463_, v___y_3478_, v___y_3479_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
lean_dec_ref_known(v___x_3499_, 1);
lean_inc_ref(v_k_3463_);
lean_inc_n(v_u_3461_, 2);
v___x_3500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3500_, 0, v_u_3461_);
lean_ctor_set(v___x_3500_, 1, v_k_3463_);
lean_ctor_set(v___x_3500_, 2, v_h_3464_);
lean_inc(v_v_3462_);
v___x_3501_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setProof___redArg(v_u_3461_, v_v_3462_, v___x_3500_, v___y_3478_, v___y_3479_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v___x_3502_; 
lean_dec_ref_known(v___x_3501_, 1);
lean_inc_ref(v_k_3463_);
lean_inc(v_v_3462_);
lean_inc(v_u_3461_);
v___x_3502_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_checkToPropagate(v_u_3461_, v_v_3462_, v_k_3463_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v___x_3503_; 
lean_dec_ref_known(v___x_3502_, 1);
v___x_3503_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_addEdge_update(v_u_3461_, v_v_3462_, v_k_3463_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v___x_3504_; 
lean_dec_ref_known(v___x_3503_, 1);
v___x_3504_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagatePending(v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
return v___x_3504_;
}
else
{
return v___x_3503_;
}
}
else
{
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
return v___x_3502_;
}
}
else
{
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
return v___x_3501_;
}
}
else
{
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
return v___x_3499_;
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v_a_3506_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3489_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3489_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
v___jp_3514_:
{
lean_object* v___x_3526_; 
v___x_3526_ = l_Lean_Meta_Grind_Order_getDist_x3f(v_v_3462_, v_u_3461_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref_known(v___x_3526_, 1);
if (lean_obj_tag(v_a_3527_) == 1)
{
lean_object* v_val_3528_; lean_object* v___x_3529_; uint8_t v___x_3530_; 
v_val_3528_ = lean_ctor_get(v_a_3527_, 0);
lean_inc_n(v_val_3528_, 2);
lean_dec_ref_known(v_a_3527_, 1);
v___x_3529_ = l_Lean_Meta_Grind_Order_Weight_add(v_k_3463_, v_val_3528_);
v___x_3530_ = l_Lean_Meta_Grind_Order_Weight_isNeg(v___x_3529_);
lean_dec_ref(v___x_3529_);
if (v___x_3530_ == 0)
{
lean_dec(v_val_3528_);
v___y_3478_ = v___y_3515_;
v___y_3479_ = v___y_3516_;
v___y_3480_ = v___y_3517_;
v___y_3481_ = v___y_3518_;
v___y_3482_ = v___y_3519_;
v___y_3483_ = v___y_3520_;
v___y_3484_ = v___y_3521_;
v___y_3485_ = v___y_3522_;
v___y_3486_ = v___y_3523_;
v___y_3487_ = v___y_3524_;
v___y_3488_ = v___y_3525_;
goto v___jp_3477_;
}
else
{
lean_object* v___x_3531_; 
v___x_3531_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_setUnsat(v_u_3461_, v_v_3462_, v_k_3463_, v_h_3464_, v_val_3528_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
lean_dec(v_val_3528_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3539_; 
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; 
v_unused_3540_ = lean_ctor_get(v___x_3531_, 0);
lean_dec(v_unused_3540_);
v___x_3533_ = v___x_3531_;
v_isShared_3534_ = v_isSharedCheck_3539_;
goto v_resetjp_3532_;
}
else
{
lean_dec(v___x_3531_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3539_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3535_; lean_object* v___x_3537_; 
v___x_3535_ = lean_box(0);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v___x_3535_);
v___x_3537_ = v___x_3533_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3535_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
else
{
return v___x_3531_;
}
}
}
else
{
lean_dec(v_a_3527_);
v___y_3478_ = v___y_3515_;
v___y_3479_ = v___y_3516_;
v___y_3480_ = v___y_3517_;
v___y_3481_ = v___y_3518_;
v___y_3482_ = v___y_3519_;
v___y_3483_ = v___y_3520_;
v___y_3484_ = v___y_3521_;
v___y_3485_ = v___y_3522_;
v___y_3486_ = v___y_3523_;
v___y_3487_ = v___y_3524_;
v___y_3488_ = v___y_3525_;
goto v___jp_3477_;
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec_ref(v_h_3464_);
lean_dec_ref(v_k_3463_);
lean_dec(v_v_3462_);
lean_dec(v_u_3461_);
v_a_3541_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3526_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3526_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
v___jp_3549_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = lean_box(0);
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_addEdge___boxed(lean_object* v_u_3639_, lean_object* v_v_3640_, lean_object* v_k_3641_, lean_object* v_h_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lean_Meta_Grind_Order_addEdge(v_u_3639_, v_v_3640_, v_k_3641_, v_h_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_);
lean_dec(v_a_3653_);
lean_dec_ref(v_a_3652_);
lean_dec(v_a_3651_);
lean_dec_ref(v_a_3650_);
lean_dec(v_a_3649_);
lean_dec_ref(v_a_3648_);
lean_dec(v_a_3647_);
lean_dec_ref(v_a_3646_);
lean_dec(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec(v_a_3643_);
return v_res_3655_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2(void){
_start:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3662_ = lean_box(0);
v___x_3663_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__1));
v___x_3664_ = l_Lean_mkConst(v___x_3663_, v___x_3662_);
return v___x_3664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5(void){
_start:
{
lean_object* v_cls_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v_cls_3670_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4));
v___x_3671_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate___closed__6));
v___x_3672_ = l_Lean_Name_append(v___x_3671_, v_cls_3670_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(lean_object* v_c_3673_, lean_object* v_e_3674_, lean_object* v_he_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_){
_start:
{
lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; uint8_t v___y_3704_; lean_object* v_h_3708_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3735_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v_toCold_3748_; lean_object* v_options_3749_; uint8_t v_hasTrace_3750_; 
v_toCold_3748_ = lean_ctor_get(v_a_3685_, 0);
v_options_3749_ = lean_ctor_get(v_toCold_3748_, 2);
v_hasTrace_3750_ = lean_ctor_get_uint8(v_options_3749_, sizeof(void*)*1);
if (v_hasTrace_3750_ == 0)
{
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
v___y_3736_ = v_a_3682_;
v___y_3737_ = v_a_3683_;
v___y_3738_ = v_a_3684_;
v___y_3739_ = v_a_3685_;
v___y_3740_ = v_a_3686_;
goto v___jp_3729_;
}
else
{
lean_object* v_inheritedTraceOptions_3751_; lean_object* v_cls_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; 
v_inheritedTraceOptions_3751_ = lean_ctor_get(v_toCold_3748_, 11);
v_cls_3752_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4));
v___x_3753_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_3754_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3751_, v_options_3749_, v___x_3753_);
if (v___x_3754_ == 0)
{
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
v___y_3736_ = v_a_3682_;
v___y_3737_ = v_a_3683_;
v___y_3738_ = v_a_3684_;
v___y_3739_ = v_a_3685_;
v___y_3740_ = v_a_3686_;
goto v___jp_3729_;
}
else
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_3673_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3757_; 
v_a_3756_ = lean_ctor_get(v___x_3755_, 0);
lean_inc(v_a_3756_);
lean_dec_ref_known(v___x_3755_, 1);
v___x_3757_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v_cls_3752_, v_a_3756_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_dec_ref_known(v___x_3757_, 1);
v___y_3730_ = v_a_3676_;
v___y_3731_ = v_a_3677_;
v___y_3732_ = v_a_3678_;
v___y_3733_ = v_a_3679_;
v___y_3734_ = v_a_3680_;
v___y_3735_ = v_a_3681_;
v___y_3736_ = v_a_3682_;
v___y_3737_ = v_a_3683_;
v___y_3738_ = v_a_3684_;
v___y_3739_ = v_a_3685_;
v___y_3740_ = v_a_3686_;
goto v___jp_3729_;
}
else
{
lean_dec_ref(v_he_3675_);
lean_dec_ref(v_e_3674_);
lean_dec_ref(v_c_3673_);
return v___x_3757_;
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec_ref(v_he_3675_);
lean_dec_ref(v_e_3674_);
lean_dec_ref(v_c_3673_);
v_a_3758_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3755_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3755_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
}
v___jp_3688_:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3705_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3705_, 0, v___y_3702_);
lean_ctor_set_uint8(v___x_3705_, sizeof(void*)*1, v___y_3704_);
v___x_3706_ = l_Lean_Meta_Grind_Order_addEdge(v___y_3693_, v___y_3703_, v___x_3705_, v___y_3692_, v___y_3698_, v___y_3694_, v___y_3701_, v___y_3690_, v___y_3699_, v___y_3695_, v___y_3689_, v___y_3697_, v___y_3696_, v___y_3691_, v___y_3700_);
return v___x_3706_;
}
v___jp_3707_:
{
uint8_t v_kind_3720_; 
v_kind_3720_ = lean_ctor_get_uint8(v_c_3673_, sizeof(void*)*5);
if (v_kind_3720_ == 1)
{
lean_object* v_u_3721_; lean_object* v_v_3722_; lean_object* v_k_3723_; uint8_t v___x_3724_; 
v_u_3721_ = lean_ctor_get(v_c_3673_, 0);
lean_inc(v_u_3721_);
v_v_3722_ = lean_ctor_get(v_c_3673_, 1);
lean_inc(v_v_3722_);
v_k_3723_ = lean_ctor_get(v_c_3673_, 2);
lean_inc(v_k_3723_);
lean_dec_ref(v_c_3673_);
v___x_3724_ = 1;
v___y_3689_ = v___y_3715_;
v___y_3690_ = v___y_3712_;
v___y_3691_ = v___y_3718_;
v___y_3692_ = v_h_3708_;
v___y_3693_ = v_u_3721_;
v___y_3694_ = v___y_3710_;
v___y_3695_ = v___y_3714_;
v___y_3696_ = v___y_3717_;
v___y_3697_ = v___y_3716_;
v___y_3698_ = v___y_3709_;
v___y_3699_ = v___y_3713_;
v___y_3700_ = v___y_3719_;
v___y_3701_ = v___y_3711_;
v___y_3702_ = v_k_3723_;
v___y_3703_ = v_v_3722_;
v___y_3704_ = v___x_3724_;
goto v___jp_3688_;
}
else
{
lean_object* v_u_3725_; lean_object* v_v_3726_; lean_object* v_k_3727_; uint8_t v___x_3728_; 
v_u_3725_ = lean_ctor_get(v_c_3673_, 0);
lean_inc(v_u_3725_);
v_v_3726_ = lean_ctor_get(v_c_3673_, 1);
lean_inc(v_v_3726_);
v_k_3727_ = lean_ctor_get(v_c_3673_, 2);
lean_inc(v_k_3727_);
lean_dec_ref(v_c_3673_);
v___x_3728_ = 0;
v___y_3689_ = v___y_3715_;
v___y_3690_ = v___y_3712_;
v___y_3691_ = v___y_3718_;
v___y_3692_ = v_h_3708_;
v___y_3693_ = v_u_3725_;
v___y_3694_ = v___y_3710_;
v___y_3695_ = v___y_3714_;
v___y_3696_ = v___y_3717_;
v___y_3697_ = v___y_3716_;
v___y_3698_ = v___y_3709_;
v___y_3699_ = v___y_3713_;
v___y_3700_ = v___y_3719_;
v___y_3701_ = v___y_3711_;
v___y_3702_ = v_k_3727_;
v___y_3703_ = v_v_3726_;
v___y_3704_ = v___x_3728_;
goto v___jp_3688_;
}
}
v___jp_3729_:
{
lean_object* v_h_x3f_3741_; 
v_h_x3f_3741_ = lean_ctor_get(v_c_3673_, 4);
if (lean_obj_tag(v_h_x3f_3741_) == 1)
{
lean_object* v_e_3742_; lean_object* v_val_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v_e_3742_ = lean_ctor_get(v_c_3673_, 3);
v_val_3743_ = lean_ctor_get(v_h_x3f_3741_, 0);
v___x_3744_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__2);
lean_inc_ref(v_e_3674_);
v___x_3745_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3674_, v_he_3675_);
lean_inc(v_val_3743_);
lean_inc_ref(v_e_3742_);
v___x_3746_ = l_Lean_mkApp4(v___x_3744_, v_e_3674_, v_e_3742_, v_val_3743_, v___x_3745_);
v_h_3708_ = v___x_3746_;
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3731_;
v___y_3711_ = v___y_3732_;
v___y_3712_ = v___y_3733_;
v___y_3713_ = v___y_3734_;
v___y_3714_ = v___y_3735_;
v___y_3715_ = v___y_3736_;
v___y_3716_ = v___y_3737_;
v___y_3717_ = v___y_3738_;
v___y_3718_ = v___y_3739_;
v___y_3719_ = v___y_3740_;
goto v___jp_3707_;
}
else
{
lean_object* v___x_3747_; 
v___x_3747_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3674_, v_he_3675_);
v_h_3708_ = v___x_3747_;
v___y_3709_ = v___y_3730_;
v___y_3710_ = v___y_3731_;
v___y_3711_ = v___y_3732_;
v___y_3712_ = v___y_3733_;
v___y_3713_ = v___y_3734_;
v___y_3714_ = v___y_3735_;
v___y_3715_ = v___y_3736_;
v___y_3716_ = v___y_3737_;
v___y_3717_ = v___y_3738_;
v___y_3718_ = v___y_3739_;
v___y_3719_ = v___y_3740_;
goto v___jp_3707_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___boxed(lean_object* v_c_3766_, lean_object* v_e_3767_, lean_object* v_he_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_c_3766_, v_e_3767_, v_he_3768_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_, v_a_3779_);
lean_dec(v_a_3779_);
lean_dec_ref(v_a_3778_);
lean_dec(v_a_3777_);
lean_dec_ref(v_a_3776_);
lean_dec(v_a_3775_);
lean_dec_ref(v_a_3774_);
lean_dec(v_a_3773_);
lean_dec_ref(v_a_3772_);
lean_dec(v_a_3771_);
lean_dec(v_a_3770_);
lean_dec(v_a_3769_);
return v_res_3781_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2(void){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v___x_3788_ = lean_box(0);
v___x_3789_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__1));
v___x_3790_ = l_Lean_mkConst(v___x_3789_, v___x_3788_);
return v___x_3790_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3(void){
_start:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; 
v___x_3791_ = lean_unsigned_to_nat(1u);
v___x_3792_ = lean_nat_to_int(v___x_3791_);
return v___x_3792_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4(void){
_start:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3793_ = lean_unsigned_to_nat(0u);
v___x_3794_ = lean_nat_to_int(v___x_3793_);
return v___x_3794_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = lean_unsigned_to_nat(0u);
v___x_3801_ = l_Lean_Level_ofNat(v___x_3800_);
return v___x_3801_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9(void){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3802_ = lean_box(0);
v___x_3803_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__8);
v___x_3804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3803_);
lean_ctor_set(v___x_3804_, 1, v___x_3802_);
return v___x_3804_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10(void){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3805_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__9);
v___x_3806_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__7));
v___x_3807_ = l_Lean_Expr_const___override(v___x_3806_, v___x_3805_);
return v___x_3807_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3811_ = lean_box(0);
v___x_3812_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__12));
v___x_3813_ = l_Lean_Expr_const___override(v___x_3812_, v___x_3811_);
return v___x_3813_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16(void){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3818_ = lean_box(0);
v___x_3819_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__15));
v___x_3820_ = l_Lean_Expr_const___override(v___x_3819_, v___x_3818_);
return v___x_3820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3857_ = lean_box(0);
v___x_3858_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__28));
v___x_3859_ = l_Lean_mkConst(v___x_3858_, v___x_3857_);
return v___x_3859_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31(void){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__30));
v___x_3862_ = l_Lean_stringToMessageData(v___x_3861_);
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(lean_object* v_c_3863_, lean_object* v_e_3864_, lean_object* v_he_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_){
_start:
{
lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v_k_x27_3881_; lean_object* v_h_3882_; uint8_t v_strict_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; lean_object* v___y_3886_; lean_object* v___y_3887_; lean_object* v___y_3888_; lean_object* v___y_3889_; lean_object* v___y_3890_; lean_object* v___y_3891_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3894_; lean_object* v___y_3898_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v___y_3901_; lean_object* v___y_3902_; lean_object* v___y_3903_; lean_object* v___y_3904_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; lean_object* v___y_3914_; lean_object* v___y_3915_; lean_object* v___y_3916_; lean_object* v___y_3917_; lean_object* v___y_3918_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___y_3934_; lean_object* v___y_3935_; lean_object* v___y_3936_; lean_object* v___y_3937_; lean_object* v___y_3938_; uint8_t v___y_3939_; lean_object* v___x_3985_; 
v___x_3985_ = l_Lean_Meta_Grind_Order_isLinearPreorder(v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_4308_; 
v_a_3986_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4308_ == 0)
{
v___x_3988_ = v___x_3985_;
v_isShared_3989_ = v_isSharedCheck_4308_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3985_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_4308_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; uint8_t v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; uint8_t v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; uint8_t v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v_h_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; uint8_t v___x_4283_; 
v___x_4283_ = lean_unbox(v_a_3986_);
if (v___x_4283_ == 0)
{
lean_object* v___x_4284_; lean_object* v___x_4286_; 
lean_dec(v_a_3986_);
lean_dec_ref(v_he_3865_);
lean_dec_ref(v_e_3864_);
lean_dec_ref(v_c_3863_);
v___x_4284_ = lean_box(0);
if (v_isShared_3989_ == 0)
{
lean_ctor_set(v___x_3988_, 0, v___x_4284_);
v___x_4286_ = v___x_3988_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4287_; 
v_reuseFailAlloc_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4287_, 0, v___x_4284_);
v___x_4286_ = v_reuseFailAlloc_4287_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
return v___x_4286_;
}
}
else
{
lean_object* v_toCold_4288_; lean_object* v_options_4289_; uint8_t v_hasTrace_4290_; 
lean_del_object(v___x_3988_);
v_toCold_4288_ = lean_ctor_get(v_a_3875_, 0);
v_options_4289_ = lean_ctor_get(v_toCold_4288_, 2);
v_hasTrace_4290_ = lean_ctor_get_uint8(v_options_4289_, sizeof(void*)*1);
if (v_hasTrace_4290_ == 0)
{
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
v___y_4270_ = v_a_3871_;
v___y_4271_ = v_a_3872_;
v___y_4272_ = v_a_3873_;
v___y_4273_ = v_a_3874_;
v___y_4274_ = v_a_3875_;
v___y_4275_ = v_a_3876_;
goto v___jp_4264_;
}
else
{
lean_object* v_inheritedTraceOptions_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; uint8_t v___x_4294_; 
v_inheritedTraceOptions_4291_ = lean_ctor_get(v_toCold_4288_, 11);
v___x_4292_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4));
v___x_4293_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_4294_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4291_, v_options_4289_, v___x_4293_);
if (v___x_4294_ == 0)
{
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
v___y_4270_ = v_a_3871_;
v___y_4271_ = v_a_3872_;
v___y_4272_ = v_a_3873_;
v___y_4273_ = v_a_3874_;
v___y_4274_ = v_a_3875_;
v___y_4275_ = v_a_3876_;
goto v___jp_4264_;
}
else
{
lean_object* v___x_4295_; 
v___x_4295_ = l_Lean_Meta_Grind_Order_Cnstr_pp(v_c_3863_, v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc(v_a_4296_);
lean_dec_ref_known(v___x_4295_, 1);
v___x_4297_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__31);
v___x_4298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4297_);
lean_ctor_set(v___x_4298_, 1, v_a_4296_);
v___x_4299_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_4292_, v___x_4298_, v_a_3873_, v_a_3874_, v_a_3875_, v_a_3876_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_dec_ref_known(v___x_4299_, 1);
v___y_4265_ = v_a_3866_;
v___y_4266_ = v_a_3867_;
v___y_4267_ = v_a_3868_;
v___y_4268_ = v_a_3869_;
v___y_4269_ = v_a_3870_;
v___y_4270_ = v_a_3871_;
v___y_4271_ = v_a_3872_;
v___y_4272_ = v_a_3873_;
v___y_4273_ = v_a_3874_;
v___y_4274_ = v_a_3875_;
v___y_4275_ = v_a_3876_;
goto v___jp_4264_;
}
else
{
lean_dec(v_a_3986_);
lean_dec_ref(v_he_3865_);
lean_dec_ref(v_e_3864_);
lean_dec_ref(v_c_3863_);
return v___x_4299_;
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
lean_dec(v_a_3986_);
lean_dec_ref(v_he_3865_);
lean_dec_ref(v_e_3864_);
lean_dec_ref(v_c_3863_);
v_a_4300_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4295_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4295_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
}
}
}
}
v___jp_3990_:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4012_ = l_Lean_eagerReflBoolTrue;
lean_inc_ref(v___y_4011_);
v___x_4013_ = l_Lean_mkApp6(v___y_4005_, v___y_3996_, v___y_3999_, v___y_3991_, v___y_4011_, v___x_4012_, v___y_3997_);
if (v___y_4009_ == 0)
{
uint8_t v___x_4014_; 
v___x_4014_ = lean_unbox(v_a_3986_);
lean_dec(v_a_3986_);
v___y_3922_ = v___y_3992_;
v___y_3923_ = v___y_3993_;
v___y_3924_ = v___y_3994_;
v___y_3925_ = v___y_3995_;
v___y_3926_ = v___y_3998_;
v___y_3927_ = v___x_4012_;
v___y_3928_ = v___x_4013_;
v___y_3929_ = v___y_4000_;
v___y_3930_ = v___y_4001_;
v___y_3931_ = v___y_4003_;
v___y_3932_ = v___y_4002_;
v___y_3933_ = v___y_4004_;
v___y_3934_ = v___y_4006_;
v___y_3935_ = v___y_4008_;
v___y_3936_ = v___y_4007_;
v___y_3937_ = v___y_4010_;
v___y_3938_ = v___y_4011_;
v___y_3939_ = v___x_4014_;
goto v___jp_3921_;
}
else
{
uint8_t v___x_4015_; 
lean_dec(v_a_3986_);
v___x_4015_ = 0;
v___y_3922_ = v___y_3992_;
v___y_3923_ = v___y_3993_;
v___y_3924_ = v___y_3994_;
v___y_3925_ = v___y_3995_;
v___y_3926_ = v___y_3998_;
v___y_3927_ = v___x_4012_;
v___y_3928_ = v___x_4013_;
v___y_3929_ = v___y_4000_;
v___y_3930_ = v___y_4001_;
v___y_3931_ = v___y_4003_;
v___y_3932_ = v___y_4002_;
v___y_3933_ = v___y_4004_;
v___y_3934_ = v___y_4006_;
v___y_3935_ = v___y_4008_;
v___y_3936_ = v___y_4007_;
v___y_3937_ = v___y_4010_;
v___y_3938_ = v___y_4011_;
v___y_3939_ = v___x_4015_;
goto v___jp_3921_;
}
}
v___jp_4016_:
{
lean_object* v___x_4037_; uint8_t v___x_4038_; 
v___x_4037_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4038_ = lean_int_dec_le(v___x_4037_, v___y_4033_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4039_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_4040_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_4041_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_4042_ = lean_int_neg(v___y_4033_);
v___x_4043_ = l_Int_toNat(v___x_4042_);
lean_dec(v___x_4042_);
v___x_4044_ = l_Lean_instToExprInt_mkNat(v___x_4043_);
v___x_4045_ = l_Lean_mkApp3(v___x_4039_, v___x_4040_, v___x_4041_, v___x_4044_);
v___y_3991_ = v___y_4036_;
v___y_3992_ = v___y_4017_;
v___y_3993_ = v___y_4018_;
v___y_3994_ = v___y_4019_;
v___y_3995_ = v___y_4020_;
v___y_3996_ = v___y_4021_;
v___y_3997_ = v___y_4022_;
v___y_3998_ = v___y_4023_;
v___y_3999_ = v___y_4024_;
v___y_4000_ = v___y_4025_;
v___y_4001_ = v___y_4026_;
v___y_4002_ = v___y_4027_;
v___y_4003_ = v___y_4028_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___y_4030_;
v___y_4006_ = v___y_4031_;
v___y_4007_ = v___y_4033_;
v___y_4008_ = v___y_4032_;
v___y_4009_ = v___y_4034_;
v___y_4010_ = v___y_4035_;
v___y_4011_ = v___x_4045_;
goto v___jp_3990_;
}
else
{
lean_object* v___x_4046_; lean_object* v___x_4047_; 
v___x_4046_ = l_Int_toNat(v___y_4033_);
v___x_4047_ = l_Lean_instToExprInt_mkNat(v___x_4046_);
v___y_3991_ = v___y_4036_;
v___y_3992_ = v___y_4017_;
v___y_3993_ = v___y_4018_;
v___y_3994_ = v___y_4019_;
v___y_3995_ = v___y_4020_;
v___y_3996_ = v___y_4021_;
v___y_3997_ = v___y_4022_;
v___y_3998_ = v___y_4023_;
v___y_3999_ = v___y_4024_;
v___y_4000_ = v___y_4025_;
v___y_4001_ = v___y_4026_;
v___y_4002_ = v___y_4027_;
v___y_4003_ = v___y_4028_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___y_4030_;
v___y_4006_ = v___y_4031_;
v___y_4007_ = v___y_4033_;
v___y_4008_ = v___y_4032_;
v___y_4009_ = v___y_4034_;
v___y_4010_ = v___y_4035_;
v___y_4011_ = v___x_4047_;
goto v___jp_3990_;
}
}
v___jp_4048_:
{
lean_object* v___x_4066_; 
lean_inc(v___y_4065_);
v___x_4066_ = l_Lean_Meta_Grind_Order_mkLinearOrdRingPrefix(v___y_4065_, v___y_4052_, v___y_4063_, v___y_4060_, v___y_4055_, v___y_4054_, v___y_4061_, v___y_4049_, v___y_4051_, v___y_4050_, v___y_4058_, v___y_4059_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4066_, 1);
v___x_4068_ = lean_int_neg(v___y_4064_);
v___x_4069_ = l_Lean_Meta_Grind_Order_getExpr(v___y_4056_, v___y_4052_, v___y_4063_, v___y_4060_, v___y_4055_, v___y_4054_, v___y_4061_, v___y_4049_, v___y_4051_, v___y_4050_, v___y_4058_, v___y_4059_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v___x_4071_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4070_);
lean_dec_ref_known(v___x_4069_, 1);
v___x_4071_ = l_Lean_Meta_Grind_Order_getExpr(v___y_4057_, v___y_4052_, v___y_4063_, v___y_4060_, v___y_4055_, v___y_4054_, v___y_4061_, v___y_4049_, v___y_4051_, v___y_4050_, v___y_4058_, v___y_4059_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v_a_4072_; lean_object* v___x_4073_; uint8_t v___x_4074_; 
v_a_4072_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v___x_4071_, 1);
v___x_4073_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4074_ = lean_int_dec_le(v___x_4073_, v___y_4064_);
if (v___x_4074_ == 0)
{
lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
lean_dec(v___y_4064_);
v___x_4075_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_4076_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_4077_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_4078_ = l_Int_toNat(v___x_4068_);
v___x_4079_ = l_Lean_instToExprInt_mkNat(v___x_4078_);
v___x_4080_ = l_Lean_mkApp3(v___x_4075_, v___x_4076_, v___x_4077_, v___x_4079_);
v___y_4017_ = v___y_4049_;
v___y_4018_ = v___y_4050_;
v___y_4019_ = v___y_4051_;
v___y_4020_ = v___y_4052_;
v___y_4021_ = v_a_4070_;
v___y_4022_ = v___y_4053_;
v___y_4023_ = v___y_4054_;
v___y_4024_ = v_a_4072_;
v___y_4025_ = v___y_4055_;
v___y_4026_ = v___y_4056_;
v___y_4027_ = v___y_4058_;
v___y_4028_ = v___y_4057_;
v___y_4029_ = v___y_4059_;
v___y_4030_ = v_a_4067_;
v___y_4031_ = v___y_4060_;
v___y_4032_ = v___y_4061_;
v___y_4033_ = v___x_4068_;
v___y_4034_ = v___y_4062_;
v___y_4035_ = v___y_4063_;
v___y_4036_ = v___x_4080_;
goto v___jp_4016_;
}
else
{
lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4081_ = l_Int_toNat(v___y_4064_);
lean_dec(v___y_4064_);
v___x_4082_ = l_Lean_instToExprInt_mkNat(v___x_4081_);
v___y_4017_ = v___y_4049_;
v___y_4018_ = v___y_4050_;
v___y_4019_ = v___y_4051_;
v___y_4020_ = v___y_4052_;
v___y_4021_ = v_a_4070_;
v___y_4022_ = v___y_4053_;
v___y_4023_ = v___y_4054_;
v___y_4024_ = v_a_4072_;
v___y_4025_ = v___y_4055_;
v___y_4026_ = v___y_4056_;
v___y_4027_ = v___y_4058_;
v___y_4028_ = v___y_4057_;
v___y_4029_ = v___y_4059_;
v___y_4030_ = v_a_4067_;
v___y_4031_ = v___y_4060_;
v___y_4032_ = v___y_4061_;
v___y_4033_ = v___x_4068_;
v___y_4034_ = v___y_4062_;
v___y_4035_ = v___y_4063_;
v___y_4036_ = v___x_4082_;
goto v___jp_4016_;
}
}
else
{
lean_object* v_a_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4090_; 
lean_dec(v_a_4070_);
lean_dec(v___x_4068_);
lean_dec(v_a_4067_);
lean_dec(v___y_4064_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4053_);
lean_dec(v_a_3986_);
v_a_4083_ = lean_ctor_get(v___x_4071_, 0);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___x_4071_);
if (v_isSharedCheck_4090_ == 0)
{
v___x_4085_ = v___x_4071_;
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_a_4083_);
lean_dec(v___x_4071_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4088_; 
if (v_isShared_4086_ == 0)
{
v___x_4088_ = v___x_4085_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_a_4083_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
}
}
else
{
lean_object* v_a_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4098_; 
lean_dec(v___x_4068_);
lean_dec(v_a_4067_);
lean_dec(v___y_4064_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4053_);
lean_dec(v_a_3986_);
v_a_4091_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4098_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4098_ == 0)
{
v___x_4093_ = v___x_4069_;
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
else
{
lean_inc(v_a_4091_);
lean_dec(v___x_4069_);
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
lean_object* v_a_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4106_; 
lean_dec(v___y_4064_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4053_);
lean_dec(v_a_3986_);
v_a_4099_ = lean_ctor_get(v___x_4066_, 0);
v_isSharedCheck_4106_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4106_ == 0)
{
v___x_4101_ = v___x_4066_;
v_isShared_4102_ = v_isSharedCheck_4106_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_a_4099_);
lean_dec(v___x_4066_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4106_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___x_4104_; 
if (v_isShared_4102_ == 0)
{
v___x_4104_ = v___x_4101_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_a_4099_);
v___x_4104_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
return v___x_4104_;
}
}
}
}
v___jp_4107_:
{
lean_object* v___x_4120_; 
v___x_4120_ = l_Lean_Meta_Grind_Order_isRing(v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; uint8_t v___x_4122_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_a_4121_);
lean_dec_ref_known(v___x_4120_, 1);
v___x_4122_ = lean_unbox(v_a_4121_);
if (v___x_4122_ == 0)
{
uint8_t v_kind_4123_; 
v_kind_4123_ = lean_ctor_get_uint8(v_c_3863_, sizeof(void*)*5);
if (v_kind_4123_ == 1)
{
lean_object* v_u_4124_; lean_object* v_v_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
lean_dec(v_a_3986_);
v_u_4124_ = lean_ctor_get(v_c_3863_, 0);
lean_inc(v_u_4124_);
v_v_4125_ = lean_ctor_get(v_c_3863_, 1);
lean_inc(v_v_4125_);
lean_dec_ref(v_c_3863_);
v___x_4126_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__18));
v___x_4127_ = l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(v___x_4126_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v___x_4129_; 
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4127_, 1);
v___x_4129_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4124_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; lean_object* v___x_4131_; 
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4130_);
lean_dec_ref_known(v___x_4129_, 1);
v___x_4131_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4125_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; uint8_t v___x_4136_; lean_object* v___x_4137_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
v___x_4133_ = l_Lean_mkApp3(v_a_4128_, v_a_4130_, v_a_4132_, v_h_4108_);
v___x_4134_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4135_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4135_, 0, v___x_4134_);
v___x_4136_ = lean_unbox(v_a_4121_);
lean_dec(v_a_4121_);
lean_ctor_set_uint8(v___x_4135_, sizeof(void*)*1, v___x_4136_);
v___x_4137_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4125_, v_u_4124_, v___x_4135_, v___x_4133_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4137_;
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
lean_dec(v_a_4130_);
lean_dec(v_a_4128_);
lean_dec(v_v_4125_);
lean_dec(v_u_4124_);
lean_dec(v_a_4121_);
lean_dec_ref(v_h_4108_);
v_a_4138_ = lean_ctor_get(v___x_4131_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4131_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4131_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
else
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4153_; 
lean_dec(v_a_4128_);
lean_dec(v_v_4125_);
lean_dec(v_u_4124_);
lean_dec(v_a_4121_);
lean_dec_ref(v_h_4108_);
v_a_4146_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4148_ = v___x_4129_;
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___x_4129_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v___x_4151_; 
if (v_isShared_4149_ == 0)
{
v___x_4151_ = v___x_4148_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4146_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
return v___x_4151_;
}
}
}
}
else
{
lean_object* v_a_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4161_; 
lean_dec(v_v_4125_);
lean_dec(v_u_4124_);
lean_dec(v_a_4121_);
lean_dec_ref(v_h_4108_);
v_a_4154_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4156_ = v___x_4127_;
v_isShared_4157_ = v_isSharedCheck_4161_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_a_4154_);
lean_dec(v___x_4127_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4161_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4159_; 
if (v_isShared_4157_ == 0)
{
v___x_4159_ = v___x_4156_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4154_);
v___x_4159_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
return v___x_4159_;
}
}
}
}
else
{
lean_object* v_u_4162_; lean_object* v_v_4163_; lean_object* v___x_4164_; 
lean_dec(v_a_4121_);
v_u_4162_ = lean_ctor_get(v_c_3863_, 0);
lean_inc(v_u_4162_);
v_v_4163_ = lean_ctor_get(v_c_3863_, 1);
lean_inc(v_v_4163_);
lean_dec_ref(v_c_3863_);
v___x_4164_ = l_Lean_Meta_Grind_Order_hasLt(v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; uint8_t v___x_4166_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4164_, 1);
v___x_4166_ = lean_unbox(v_a_4165_);
if (v___x_4166_ == 0)
{
lean_object* v___x_4167_; lean_object* v___x_4168_; 
lean_dec(v_a_3986_);
v___x_4167_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__20));
v___x_4168_ = l_Lean_Meta_Grind_Order_mkLeLinearPrefix(v___x_4167_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4170_; 
v_a_4169_ = lean_ctor_get(v___x_4168_, 0);
lean_inc(v_a_4169_);
lean_dec_ref_known(v___x_4168_, 1);
v___x_4170_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4162_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4172_; 
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
v___x_4172_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4163_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4172_) == 0)
{
lean_object* v_a_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; uint8_t v___x_4177_; lean_object* v___x_4178_; 
v_a_4173_ = lean_ctor_get(v___x_4172_, 0);
lean_inc(v_a_4173_);
lean_dec_ref_known(v___x_4172_, 1);
v___x_4174_ = l_Lean_mkApp3(v_a_4169_, v_a_4171_, v_a_4173_, v_h_4108_);
v___x_4175_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4176_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4176_, 0, v___x_4175_);
v___x_4177_ = lean_unbox(v_a_4165_);
lean_dec(v_a_4165_);
lean_ctor_set_uint8(v___x_4176_, sizeof(void*)*1, v___x_4177_);
v___x_4178_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4163_, v_u_4162_, v___x_4176_, v___x_4174_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4178_;
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4169_);
lean_dec(v_a_4165_);
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
v_a_4179_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4172_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4172_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
lean_dec(v_a_4169_);
lean_dec(v_a_4165_);
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
v_a_4187_ = lean_ctor_get(v___x_4170_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4170_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4170_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4170_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
lean_dec(v_a_4165_);
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
v_a_4195_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4168_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4168_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
}
else
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
lean_dec(v_a_4165_);
v___x_4203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__22));
v___x_4204_ = l_Lean_Meta_Grind_Order_mkLeLtLinearPrefix(v___x_4203_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4206_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4204_, 1);
v___x_4206_ = l_Lean_Meta_Grind_Order_getExpr(v_u_4162_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; lean_object* v___x_4208_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4207_);
lean_dec_ref_known(v___x_4206_, 1);
v___x_4208_ = l_Lean_Meta_Grind_Order_getExpr(v_v_4163_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; uint8_t v___x_4213_; lean_object* v___x_4214_; 
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
v___x_4210_ = l_Lean_mkApp3(v_a_4205_, v_a_4207_, v_a_4209_, v_h_4108_);
v___x_4211_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4212_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4212_, 0, v___x_4211_);
v___x_4213_ = lean_unbox(v_a_3986_);
lean_dec(v_a_3986_);
lean_ctor_set_uint8(v___x_4212_, sizeof(void*)*1, v___x_4213_);
v___x_4214_ = l_Lean_Meta_Grind_Order_addEdge(v_v_4163_, v_u_4162_, v___x_4212_, v___x_4210_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4214_;
}
else
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
lean_dec(v_a_4207_);
lean_dec(v_a_4205_);
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
lean_dec(v_a_3986_);
v_a_4215_ = lean_ctor_get(v___x_4208_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4208_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___x_4208_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4208_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
}
else
{
lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
lean_dec(v_a_4205_);
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
lean_dec(v_a_3986_);
v_a_4223_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4225_ = v___x_4206_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_dec(v___x_4206_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
}
else
{
lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4238_; 
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
lean_dec(v_a_3986_);
v_a_4231_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4233_ = v___x_4204_;
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_dec(v___x_4204_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4238_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v___x_4236_; 
if (v_isShared_4234_ == 0)
{
v___x_4236_ = v___x_4233_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4231_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
lean_dec(v_v_4163_);
lean_dec(v_u_4162_);
lean_dec_ref(v_h_4108_);
lean_dec(v_a_3986_);
v_a_4239_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4164_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4164_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
}
else
{
uint8_t v_kind_4247_; 
lean_dec(v_a_4121_);
v_kind_4247_ = lean_ctor_get_uint8(v_c_3863_, sizeof(void*)*5);
if (v_kind_4247_ == 1)
{
lean_object* v_u_4248_; lean_object* v_v_4249_; lean_object* v_k_4250_; lean_object* v___x_4251_; 
v_u_4248_ = lean_ctor_get(v_c_3863_, 0);
lean_inc(v_u_4248_);
v_v_4249_ = lean_ctor_get(v_c_3863_, 1);
lean_inc(v_v_4249_);
v_k_4250_ = lean_ctor_get(v_c_3863_, 2);
lean_inc(v_k_4250_);
lean_dec_ref(v_c_3863_);
v___x_4251_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__24));
v___y_4049_ = v___y_4115_;
v___y_4050_ = v___y_4117_;
v___y_4051_ = v___y_4116_;
v___y_4052_ = v___y_4109_;
v___y_4053_ = v_h_4108_;
v___y_4054_ = v___y_4113_;
v___y_4055_ = v___y_4112_;
v___y_4056_ = v_u_4248_;
v___y_4057_ = v_v_4249_;
v___y_4058_ = v___y_4118_;
v___y_4059_ = v___y_4119_;
v___y_4060_ = v___y_4111_;
v___y_4061_ = v___y_4114_;
v___y_4062_ = v_kind_4247_;
v___y_4063_ = v___y_4110_;
v___y_4064_ = v_k_4250_;
v___y_4065_ = v___x_4251_;
goto v___jp_4048_;
}
else
{
lean_object* v_u_4252_; lean_object* v_v_4253_; lean_object* v_k_4254_; lean_object* v___x_4255_; 
v_u_4252_ = lean_ctor_get(v_c_3863_, 0);
lean_inc(v_u_4252_);
v_v_4253_ = lean_ctor_get(v_c_3863_, 1);
lean_inc(v_v_4253_);
v_k_4254_ = lean_ctor_get(v_c_3863_, 2);
lean_inc(v_k_4254_);
lean_dec_ref(v_c_3863_);
v___x_4255_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__26));
v___y_4049_ = v___y_4115_;
v___y_4050_ = v___y_4117_;
v___y_4051_ = v___y_4116_;
v___y_4052_ = v___y_4109_;
v___y_4053_ = v_h_4108_;
v___y_4054_ = v___y_4113_;
v___y_4055_ = v___y_4112_;
v___y_4056_ = v_u_4252_;
v___y_4057_ = v_v_4253_;
v___y_4058_ = v___y_4118_;
v___y_4059_ = v___y_4119_;
v___y_4060_ = v___y_4111_;
v___y_4061_ = v___y_4114_;
v___y_4062_ = v_kind_4247_;
v___y_4063_ = v___y_4110_;
v___y_4064_ = v_k_4254_;
v___y_4065_ = v___x_4255_;
goto v___jp_4048_;
}
}
}
else
{
lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
lean_dec_ref(v_h_4108_);
lean_dec(v_a_3986_);
lean_dec_ref(v_c_3863_);
v_a_4256_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___x_4120_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_dec(v___x_4120_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
v___jp_4264_:
{
lean_object* v_h_x3f_4276_; 
v_h_x3f_4276_ = lean_ctor_get(v_c_3863_, 4);
if (lean_obj_tag(v_h_x3f_4276_) == 1)
{
lean_object* v_e_4277_; lean_object* v_val_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v_e_4277_ = lean_ctor_get(v_c_3863_, 3);
v_val_4278_ = lean_ctor_get(v_h_x3f_4276_, 0);
v___x_4279_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__29);
lean_inc_ref(v_e_3864_);
v___x_4280_ = l_Lean_Meta_mkOfEqFalseCore(v_e_3864_, v_he_3865_);
lean_inc(v_val_4278_);
lean_inc_ref(v_e_4277_);
v___x_4281_ = l_Lean_mkApp4(v___x_4279_, v_e_3864_, v_e_4277_, v_val_4278_, v___x_4280_);
v_h_4108_ = v___x_4281_;
v___y_4109_ = v___y_4265_;
v___y_4110_ = v___y_4266_;
v___y_4111_ = v___y_4267_;
v___y_4112_ = v___y_4268_;
v___y_4113_ = v___y_4269_;
v___y_4114_ = v___y_4270_;
v___y_4115_ = v___y_4271_;
v___y_4116_ = v___y_4272_;
v___y_4117_ = v___y_4273_;
v___y_4118_ = v___y_4274_;
v___y_4119_ = v___y_4275_;
goto v___jp_4107_;
}
else
{
lean_object* v___x_4282_; 
v___x_4282_ = l_Lean_Meta_mkOfEqFalseCore(v_e_3864_, v_he_3865_);
v_h_4108_ = v___x_4282_;
v___y_4109_ = v___y_4265_;
v___y_4110_ = v___y_4266_;
v___y_4111_ = v___y_4267_;
v___y_4112_ = v___y_4268_;
v___y_4113_ = v___y_4269_;
v___y_4114_ = v___y_4270_;
v___y_4115_ = v___y_4271_;
v___y_4116_ = v___y_4272_;
v___y_4117_ = v___y_4273_;
v___y_4118_ = v___y_4274_;
v___y_4119_ = v___y_4275_;
goto v___jp_4107_;
}
}
}
}
else
{
lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4316_; 
lean_dec_ref(v_he_3865_);
lean_dec_ref(v_e_3864_);
lean_dec_ref(v_c_3863_);
v_a_4309_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4311_ = v___x_3985_;
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_3985_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4314_; 
if (v_isShared_4312_ == 0)
{
v___x_4314_ = v___x_4311_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_a_4309_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
v___jp_3878_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
v___x_3895_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3895_, 0, v_k_x27_3881_);
lean_ctor_set_uint8(v___x_3895_, sizeof(void*)*1, v_strict_3883_);
v___x_3896_ = l_Lean_Meta_Grind_Order_addEdge(v___y_3879_, v___y_3880_, v___x_3895_, v_h_3882_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_);
return v___x_3896_;
}
v___jp_3897_:
{
lean_object* v___x_3919_; uint8_t v___x_3920_; 
lean_inc_ref(v___y_3913_);
v___x_3919_ = l_Lean_mkApp6(v___y_3913_, v___y_3912_, v___y_3911_, v___y_3917_, v___y_3918_, v___y_3903_, v___y_3904_);
v___x_3920_ = 0;
v___y_3879_ = v___y_3908_;
v___y_3880_ = v___y_3907_;
v_k_x27_3881_ = v___y_3905_;
v_h_3882_ = v___x_3919_;
v_strict_3883_ = v___x_3920_;
v___y_3884_ = v___y_3901_;
v___y_3885_ = v___y_3916_;
v___y_3886_ = v___y_3914_;
v___y_3887_ = v___y_3906_;
v___y_3888_ = v___y_3902_;
v___y_3889_ = v___y_3915_;
v___y_3890_ = v___y_3899_;
v___y_3891_ = v___y_3900_;
v___y_3892_ = v___y_3898_;
v___y_3893_ = v___y_3909_;
v___y_3894_ = v___y_3910_;
goto v___jp_3878_;
}
v___jp_3921_:
{
lean_object* v___x_3940_; 
v___x_3940_ = l_Lean_Meta_Grind_Order_isInt(v___y_3925_, v___y_3937_, v___y_3934_, v___y_3929_, v___y_3926_, v___y_3935_, v___y_3922_, v___y_3924_, v___y_3923_, v___y_3932_, v___y_3933_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; uint8_t v___x_3942_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3940_, 1);
v___x_3942_ = lean_unbox(v_a_3941_);
lean_dec(v_a_3941_);
if (v___x_3942_ == 0)
{
lean_dec_ref(v___y_3938_);
lean_dec_ref(v___y_3927_);
v___y_3879_ = v___y_3931_;
v___y_3880_ = v___y_3930_;
v_k_x27_3881_ = v___y_3936_;
v_h_3882_ = v___y_3928_;
v_strict_3883_ = v___y_3939_;
v___y_3884_ = v___y_3925_;
v___y_3885_ = v___y_3937_;
v___y_3886_ = v___y_3934_;
v___y_3887_ = v___y_3929_;
v___y_3888_ = v___y_3926_;
v___y_3889_ = v___y_3935_;
v___y_3890_ = v___y_3922_;
v___y_3891_ = v___y_3924_;
v___y_3892_ = v___y_3923_;
v___y_3893_ = v___y_3932_;
v___y_3894_ = v___y_3933_;
goto v___jp_3878_;
}
else
{
if (v___y_3939_ == 0)
{
lean_dec_ref(v___y_3938_);
lean_dec_ref(v___y_3927_);
v___y_3879_ = v___y_3931_;
v___y_3880_ = v___y_3930_;
v_k_x27_3881_ = v___y_3936_;
v_h_3882_ = v___y_3928_;
v_strict_3883_ = v___y_3939_;
v___y_3884_ = v___y_3925_;
v___y_3885_ = v___y_3937_;
v___y_3886_ = v___y_3934_;
v___y_3887_ = v___y_3929_;
v___y_3888_ = v___y_3926_;
v___y_3889_ = v___y_3935_;
v___y_3890_ = v___y_3922_;
v___y_3891_ = v___y_3924_;
v___y_3892_ = v___y_3923_;
v___y_3893_ = v___y_3932_;
v___y_3894_ = v___y_3933_;
goto v___jp_3878_;
}
else
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Lean_Meta_Grind_Order_getExpr(v___y_3931_, v___y_3925_, v___y_3937_, v___y_3934_, v___y_3929_, v___y_3926_, v___y_3935_, v___y_3922_, v___y_3924_, v___y_3923_, v___y_3932_, v___y_3933_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; lean_object* v___x_3945_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3943_, 1);
v___x_3945_ = l_Lean_Meta_Grind_Order_getExpr(v___y_3930_, v___y_3925_, v___y_3937_, v___y_3934_, v___y_3929_, v___y_3926_, v___y_3935_, v___y_3922_, v___y_3924_, v___y_3923_, v___y_3932_, v___y_3933_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; uint8_t v___x_3951_; 
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref_known(v___x_3945_, 1);
v___x_3947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__2);
v___x_3948_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__3);
v___x_3949_ = lean_int_sub(v___y_3936_, v___x_3948_);
lean_dec(v___y_3936_);
v___x_3950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_3951_ = lean_int_dec_le(v___x_3950_, v___x_3949_);
if (v___x_3951_ == 0)
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3952_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__10);
v___x_3953_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__13);
v___x_3954_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__16);
v___x_3955_ = lean_int_neg(v___x_3949_);
v___x_3956_ = l_Int_toNat(v___x_3955_);
lean_dec(v___x_3955_);
v___x_3957_ = l_Lean_instToExprInt_mkNat(v___x_3956_);
v___x_3958_ = l_Lean_mkApp3(v___x_3952_, v___x_3953_, v___x_3954_, v___x_3957_);
v___y_3898_ = v___y_3923_;
v___y_3899_ = v___y_3922_;
v___y_3900_ = v___y_3924_;
v___y_3901_ = v___y_3925_;
v___y_3902_ = v___y_3926_;
v___y_3903_ = v___y_3927_;
v___y_3904_ = v___y_3928_;
v___y_3905_ = v___x_3949_;
v___y_3906_ = v___y_3929_;
v___y_3907_ = v___y_3930_;
v___y_3908_ = v___y_3931_;
v___y_3909_ = v___y_3932_;
v___y_3910_ = v___y_3933_;
v___y_3911_ = v_a_3946_;
v___y_3912_ = v_a_3944_;
v___y_3913_ = v___x_3947_;
v___y_3914_ = v___y_3934_;
v___y_3915_ = v___y_3935_;
v___y_3916_ = v___y_3937_;
v___y_3917_ = v___y_3938_;
v___y_3918_ = v___x_3958_;
goto v___jp_3897_;
}
else
{
lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3959_ = l_Int_toNat(v___x_3949_);
v___x_3960_ = l_Lean_instToExprInt_mkNat(v___x_3959_);
v___y_3898_ = v___y_3923_;
v___y_3899_ = v___y_3922_;
v___y_3900_ = v___y_3924_;
v___y_3901_ = v___y_3925_;
v___y_3902_ = v___y_3926_;
v___y_3903_ = v___y_3927_;
v___y_3904_ = v___y_3928_;
v___y_3905_ = v___x_3949_;
v___y_3906_ = v___y_3929_;
v___y_3907_ = v___y_3930_;
v___y_3908_ = v___y_3931_;
v___y_3909_ = v___y_3932_;
v___y_3910_ = v___y_3933_;
v___y_3911_ = v_a_3946_;
v___y_3912_ = v_a_3944_;
v___y_3913_ = v___x_3947_;
v___y_3914_ = v___y_3934_;
v___y_3915_ = v___y_3935_;
v___y_3916_ = v___y_3937_;
v___y_3917_ = v___y_3938_;
v___y_3918_ = v___x_3960_;
goto v___jp_3897_;
}
}
else
{
lean_object* v_a_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3968_; 
lean_dec(v_a_3944_);
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3936_);
lean_dec(v___y_3931_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3927_);
v_a_3961_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3963_ = v___x_3945_;
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_a_3961_);
lean_dec(v___x_3945_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3966_; 
if (v_isShared_3964_ == 0)
{
v___x_3966_ = v___x_3963_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3961_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3936_);
lean_dec(v___y_3931_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3927_);
v_a_3969_ = lean_ctor_get(v___x_3943_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3943_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3943_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3943_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3936_);
lean_dec(v___y_3931_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3928_);
lean_dec_ref(v___y_3927_);
v_a_3977_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3940_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3940_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___boxed(lean_object* v_c_4317_, lean_object* v_e_4318_, lean_object* v_he_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v_a_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_){
_start:
{
lean_object* v_res_4332_; 
v_res_4332_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_c_4317_, v_e_4318_, v_he_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_, v_a_4327_, v_a_4328_, v_a_4329_, v_a_4330_);
lean_dec(v_a_4330_);
lean_dec_ref(v_a_4329_);
lean_dec(v_a_4328_);
lean_dec_ref(v_a_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_a_4325_);
lean_dec(v_a_4324_);
lean_dec_ref(v_a_4323_);
lean_dec(v_a_4322_);
lean_dec(v_a_4321_);
lean_dec(v_a_4320_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(lean_object* v_e_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4334_, v_a_4335_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4347_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4340_ = v___x_4337_;
v_isShared_4341_ = v_isSharedCheck_4347_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4337_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4347_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v_exprToStructId_4342_; lean_object* v___x_4343_; lean_object* v___x_4345_; 
v_exprToStructId_4342_ = lean_ctor_get(v_a_4338_, 2);
lean_inc_ref(v_exprToStructId_4342_);
lean_dec(v_a_4338_);
v___x_4343_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_exprToStructId_4342_, v_e_4333_);
lean_dec_ref(v_exprToStructId_4342_);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v___x_4343_);
v___x_4345_ = v___x_4340_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v___x_4343_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
return v___x_4345_;
}
}
}
else
{
lean_object* v_a_4348_; lean_object* v___x_4350_; uint8_t v_isShared_4351_; uint8_t v_isSharedCheck_4355_; 
v_a_4348_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4350_ = v___x_4337_;
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
else
{
lean_inc(v_a_4348_);
lean_dec(v___x_4337_);
v___x_4350_ = lean_box(0);
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
v_resetjp_4349_:
{
lean_object* v___x_4353_; 
if (v_isShared_4351_ == 0)
{
v___x_4353_ = v___x_4350_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v_a_4348_);
v___x_4353_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
return v___x_4353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg___boxed(lean_object* v_e_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_4356_, v_a_4357_, v_a_4358_);
lean_dec_ref(v_a_4358_);
lean_dec(v_a_4357_);
lean_dec_ref(v_e_4356_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(lean_object* v_e_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_){
_start:
{
lean_object* v___x_4373_; 
v___x_4373_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_4361_, v_a_4362_, v_a_4370_);
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___boxed(lean_object* v_e_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_, lean_object* v_a_4382_, lean_object* v_a_4383_, lean_object* v_a_4384_, lean_object* v_a_4385_){
_start:
{
lean_object* v_res_4386_; 
v_res_4386_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f(v_e_4374_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
lean_dec(v_a_4384_);
lean_dec_ref(v_a_4383_);
lean_dec(v_a_4382_);
lean_dec_ref(v_a_4381_);
lean_dec(v_a_4380_);
lean_dec_ref(v_a_4379_);
lean_dec(v_a_4378_);
lean_dec_ref(v_a_4377_);
lean_dec(v_a_4376_);
lean_dec(v_a_4375_);
lean_dec_ref(v_e_4374_);
return v_res_4386_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2(void){
_start:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; 
v___x_4393_ = lean_box(0);
v___x_4394_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__1));
v___x_4395_ = l_Lean_mkConst(v___x_4394_, v___x_4393_);
return v___x_4395_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5(void){
_start:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4402_ = lean_box(0);
v___x_4403_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__4));
v___x_4404_ = l_Lean_mkConst(v___x_4403_, v___x_4402_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(lean_object* v_e_4405_, lean_object* v_e_x27_4406_, lean_object* v_he_x3f_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_, lean_object* v_a_4413_, lean_object* v_a_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_){
_start:
{
lean_object* v___x_4419_; 
v___x_4419_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_e_x27_4406_, v_a_4408_, v_a_4416_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4510_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4510_ == 0)
{
v___x_4422_ = v___x_4419_;
v_isShared_4423_ = v_isSharedCheck_4510_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v___x_4419_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4510_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
if (lean_obj_tag(v_a_4420_) == 1)
{
lean_object* v_val_4424_; lean_object* v___x_4425_; 
lean_del_object(v___x_4422_);
v_val_4424_ = lean_ctor_get(v_a_4420_, 0);
lean_inc(v_val_4424_);
lean_dec_ref_known(v_a_4420_, 1);
v___x_4425_ = l_Lean_Meta_Grind_Order_getCnstr_x3f(v_e_x27_4406_, v_val_4424_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4497_; 
v_a_4426_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4428_ = v___x_4425_;
v_isShared_4429_ = v_isSharedCheck_4497_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4425_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4497_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
if (lean_obj_tag(v_a_4426_) == 1)
{
lean_object* v_val_4430_; lean_object* v___x_4431_; 
lean_del_object(v___x_4428_);
v_val_4430_ = lean_ctor_get(v_a_4426_, 0);
lean_inc(v_val_4430_);
lean_dec_ref_known(v_a_4426_, 1);
lean_inc_ref(v_e_4405_);
v___x_4431_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_4405_, v_a_4408_, v_a_4412_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; uint8_t v___x_4433_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_a_4432_);
lean_dec_ref_known(v___x_4431_, 1);
v___x_4433_ = lean_unbox(v_a_4432_);
lean_dec(v_a_4432_);
if (v___x_4433_ == 0)
{
lean_object* v___x_4434_; 
lean_inc_ref(v_e_4405_);
v___x_4434_ = l_Lean_Meta_Grind_isEqFalse___redArg(v_e_4405_, v_a_4408_, v_a_4412_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4460_; 
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4437_ = v___x_4434_;
v_isShared_4438_ = v_isSharedCheck_4460_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4434_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4460_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
uint8_t v___x_4439_; 
v___x_4439_ = lean_unbox(v_a_4435_);
lean_dec(v_a_4435_);
if (v___x_4439_ == 0)
{
lean_object* v___x_4440_; lean_object* v___x_4442_; 
lean_dec(v_val_4430_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v___x_4440_ = lean_box(0);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 0, v___x_4440_);
v___x_4442_ = v___x_4437_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v___x_4440_);
v___x_4442_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
return v___x_4442_;
}
}
else
{
lean_object* v___x_4444_; 
lean_del_object(v___x_4437_);
lean_inc_ref(v_e_4405_);
v___x_4444_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_4405_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
if (lean_obj_tag(v___x_4444_) == 0)
{
if (lean_obj_tag(v_he_x3f_4407_) == 1)
{
lean_object* v_a_4445_; lean_object* v_val_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4445_);
lean_dec_ref_known(v___x_4444_, 1);
v_val_4446_ = lean_ctor_get(v_he_x3f_4407_, 0);
lean_inc(v_val_4446_);
lean_dec_ref_known(v_he_x3f_4407_, 1);
v___x_4447_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__2);
lean_inc_ref(v_e_x27_4406_);
v___x_4448_ = l_Lean_mkApp4(v___x_4447_, v_e_4405_, v_e_x27_4406_, v_val_4446_, v_a_4445_);
v___x_4449_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_val_4430_, v_e_x27_4406_, v___x_4448_, v_val_4424_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
lean_dec(v_val_4424_);
return v___x_4449_;
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4451_; 
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_4405_);
v_a_4450_ = lean_ctor_get(v___x_4444_, 0);
lean_inc(v_a_4450_);
lean_dec_ref_known(v___x_4444_, 1);
v___x_4451_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse(v_val_4430_, v_e_x27_4406_, v_a_4450_, v_val_4424_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
lean_dec(v_val_4424_);
return v___x_4451_;
}
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_dec(v_val_4430_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4452_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4444_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4444_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
lean_dec(v_val_4430_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4461_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v___x_4434_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___x_4434_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_a_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
else
{
lean_object* v___x_4469_; 
lean_inc_ref(v_e_4405_);
v___x_4469_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_4405_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
if (lean_obj_tag(v___x_4469_) == 0)
{
if (lean_obj_tag(v_he_x3f_4407_) == 1)
{
lean_object* v_a_4470_; lean_object* v_val_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v___x_4469_, 1);
v_val_4471_ = lean_ctor_get(v_he_x3f_4407_, 0);
lean_inc(v_val_4471_);
lean_dec_ref_known(v_he_x3f_4407_, 1);
v___x_4472_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___closed__5);
lean_inc_ref(v_e_x27_4406_);
v___x_4473_ = l_Lean_mkApp4(v___x_4472_, v_e_4405_, v_e_x27_4406_, v_val_4471_, v_a_4470_);
v___x_4474_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_val_4430_, v_e_x27_4406_, v___x_4473_, v_val_4424_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
lean_dec(v_val_4424_);
return v___x_4474_;
}
else
{
lean_object* v_a_4475_; lean_object* v___x_4476_; 
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_4405_);
v_a_4475_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4475_);
lean_dec_ref_known(v___x_4469_, 1);
v___x_4476_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue(v_val_4430_, v_e_x27_4406_, v_a_4475_, v_val_4424_, v_a_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_, v_a_4417_);
lean_dec(v_val_4424_);
return v___x_4476_;
}
}
else
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4484_; 
lean_dec(v_val_4430_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4477_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4479_ = v___x_4469_;
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4469_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
}
}
}
else
{
lean_object* v_a_4485_; lean_object* v___x_4487_; uint8_t v_isShared_4488_; uint8_t v_isSharedCheck_4492_; 
lean_dec(v_val_4430_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4485_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4487_ = v___x_4431_;
v_isShared_4488_ = v_isSharedCheck_4492_;
goto v_resetjp_4486_;
}
else
{
lean_inc(v_a_4485_);
lean_dec(v___x_4431_);
v___x_4487_ = lean_box(0);
v_isShared_4488_ = v_isSharedCheck_4492_;
goto v_resetjp_4486_;
}
v_resetjp_4486_:
{
lean_object* v___x_4490_; 
if (v_isShared_4488_ == 0)
{
v___x_4490_ = v___x_4487_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v_a_4485_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
}
else
{
lean_object* v___x_4493_; lean_object* v___x_4495_; 
lean_dec(v_a_4426_);
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v___x_4493_ = lean_box(0);
if (v_isShared_4429_ == 0)
{
lean_ctor_set(v___x_4428_, 0, v___x_4493_);
v___x_4495_ = v___x_4428_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v___x_4493_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
}
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
lean_dec(v_val_4424_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4498_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4425_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4425_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v___x_4506_; lean_object* v___x_4508_; 
lean_dec(v_a_4420_);
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v___x_4506_ = lean_box(0);
if (v_isShared_4423_ == 0)
{
lean_ctor_set(v___x_4422_, 0, v___x_4506_);
v___x_4508_ = v___x_4422_;
goto v_reusejp_4507_;
}
else
{
lean_object* v_reuseFailAlloc_4509_; 
v_reuseFailAlloc_4509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4509_, 0, v___x_4506_);
v___x_4508_ = v_reuseFailAlloc_4509_;
goto v_reusejp_4507_;
}
v_reusejp_4507_:
{
return v___x_4508_;
}
}
}
}
else
{
lean_object* v_a_4511_; lean_object* v___x_4513_; uint8_t v_isShared_4514_; uint8_t v_isSharedCheck_4518_; 
lean_dec(v_he_x3f_4407_);
lean_dec_ref(v_e_x27_4406_);
lean_dec_ref(v_e_4405_);
v_a_4511_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4518_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4518_ == 0)
{
v___x_4513_ = v___x_4419_;
v_isShared_4514_ = v_isSharedCheck_4518_;
goto v_resetjp_4512_;
}
else
{
lean_inc(v_a_4511_);
lean_dec(v___x_4419_);
v___x_4513_ = lean_box(0);
v_isShared_4514_ = v_isSharedCheck_4518_;
goto v_resetjp_4512_;
}
v_resetjp_4512_:
{
lean_object* v___x_4516_; 
if (v_isShared_4514_ == 0)
{
v___x_4516_ = v___x_4513_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v_a_4511_);
v___x_4516_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
return v___x_4516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go___boxed(lean_object* v_e_4519_, lean_object* v_e_x27_4520_, lean_object* v_he_x3f_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4519_, v_e_x27_4520_, v_he_x3f_4521_, v_a_4522_, v_a_4523_, v_a_4524_, v_a_4525_, v_a_4526_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_);
lean_dec(v_a_4531_);
lean_dec_ref(v_a_4530_);
lean_dec(v_a_4529_);
lean_dec_ref(v_a_4528_);
lean_dec(v_a_4527_);
lean_dec_ref(v_a_4526_);
lean_dec(v_a_4525_);
lean_dec_ref(v_a_4524_);
lean_dec(v_a_4523_);
lean_dec(v_a_4522_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(lean_object* v_e_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_){
_start:
{
lean_object* v___x_4546_; 
v___x_4546_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4535_, v_a_4543_);
if (lean_obj_tag(v___x_4546_) == 0)
{
lean_object* v_a_4547_; lean_object* v_termMap_4548_; lean_object* v___x_4549_; 
v_a_4547_ = lean_ctor_get(v___x_4546_, 0);
lean_inc(v_a_4547_);
lean_dec_ref_known(v___x_4546_, 1);
v_termMap_4548_ = lean_ctor_get(v_a_4547_, 3);
lean_inc_ref(v_termMap_4548_);
lean_dec(v_a_4547_);
v___x_4549_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMap_4548_, v_e_4534_);
lean_dec_ref(v_termMap_4548_);
if (lean_obj_tag(v___x_4549_) == 1)
{
lean_object* v_val_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4560_; 
v_val_4550_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4552_ = v___x_4549_;
v_isShared_4553_ = v_isSharedCheck_4560_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_val_4550_);
lean_dec(v___x_4549_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4560_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v_e_4554_; lean_object* v_h_4555_; lean_object* v___x_4557_; 
v_e_4554_ = lean_ctor_get(v_val_4550_, 0);
lean_inc_ref(v_e_4554_);
v_h_4555_ = lean_ctor_get(v_val_4550_, 1);
lean_inc_ref(v_h_4555_);
lean_dec(v_val_4550_);
if (v_isShared_4553_ == 0)
{
lean_ctor_set(v___x_4552_, 0, v_h_4555_);
v___x_4557_ = v___x_4552_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_h_4555_);
v___x_4557_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
lean_object* v___x_4558_; 
v___x_4558_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4534_, v_e_4554_, v___x_4557_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_, v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
return v___x_4558_;
}
}
}
else
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
lean_dec(v___x_4549_);
v___x_4561_ = lean_box(0);
lean_inc_ref(v_e_4534_);
v___x_4562_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq_go(v_e_4534_, v_e_4534_, v___x_4561_, v_a_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_, v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
return v___x_4562_;
}
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
lean_dec_ref(v_e_4534_);
v_a_4563_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___x_4546_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4546_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq___boxed(lean_object* v_e_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_){
_start:
{
lean_object* v_res_4583_; 
v_res_4583_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4571_, v_a_4572_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_);
lean_dec(v_a_4581_);
lean_dec_ref(v_a_4580_);
lean_dec(v_a_4579_);
lean_dec_ref(v_a_4578_);
lean_dec(v_a_4577_);
lean_dec_ref(v_a_4576_);
lean_dec(v_a_4575_);
lean_dec_ref(v_a_4574_);
lean_dec(v_a_4573_);
lean_dec(v_a_4572_);
return v_res_4583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(lean_object* v_e_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_){
_start:
{
lean_object* v___x_4596_; 
v___x_4596_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_, v_a_4590_, v_a_4591_, v_a_4592_, v_a_4593_, v_a_4594_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___boxed(lean_object* v_e_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_){
_start:
{
lean_object* v_res_4609_; 
v_res_4609_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE(v_e_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_, v_a_4607_);
lean_dec(v_a_4607_);
lean_dec_ref(v_a_4606_);
lean_dec(v_a_4605_);
lean_dec_ref(v_a_4604_);
lean_dec(v_a_4603_);
lean_dec_ref(v_a_4602_);
lean_dec(v_a_4601_);
lean_dec_ref(v_a_4600_);
lean_dec(v_a_4599_);
lean_dec(v_a_4598_);
return v_res_4609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_(){
_start:
{
lean_object* v___f_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___f_4617_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_));
v___x_4618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__3_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_));
v___x_4619_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4618_, v___f_4617_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9____boxed(lean_object* v_a_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_();
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(lean_object* v_e_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_){
_start:
{
lean_object* v___x_4634_; 
v___x_4634_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateIneq(v_e_4622_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_, v_a_4630_, v_a_4631_, v_a_4632_);
return v___x_4634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___boxed(lean_object* v_e_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT(v_e_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
lean_dec(v_a_4645_);
lean_dec_ref(v_a_4644_);
lean_dec(v_a_4643_);
lean_dec_ref(v_a_4642_);
lean_dec(v_a_4641_);
lean_dec_ref(v_a_4640_);
lean_dec(v_a_4639_);
lean_dec_ref(v_a_4638_);
lean_dec(v_a_4637_);
lean_dec(v_a_4636_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_(){
_start:
{
lean_object* v___f_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___f_4654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_));
v___x_4655_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1___closed__2_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_));
v___x_4656_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_4655_, v___f_4654_);
return v___x_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9____boxed(lean_object* v_a_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_();
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(lean_object* v_e_4659_, lean_object* v_a_4660_, lean_object* v_a_4661_){
_start:
{
lean_object* v___x_4663_; 
v___x_4663_ = l_Lean_Meta_Grind_Order_get_x27___redArg(v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4663_) == 0)
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4673_; 
v_a_4664_ = lean_ctor_get(v___x_4663_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4663_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4666_ = v___x_4663_;
v_isShared_4667_ = v_isSharedCheck_4673_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4663_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4673_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v_termMap_4668_; lean_object* v___x_4669_; lean_object* v___x_4671_; 
v_termMap_4668_ = lean_ctor_get(v_a_4664_, 3);
lean_inc_ref(v_termMap_4668_);
lean_dec(v_a_4664_);
v___x_4669_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Order_propagateEqTrue_spec__0___redArg(v_termMap_4668_, v_e_4659_);
lean_dec_ref(v_termMap_4668_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4669_);
v___x_4671_ = v___x_4666_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4672_; 
v_reuseFailAlloc_4672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4672_, 0, v___x_4669_);
v___x_4671_ = v_reuseFailAlloc_4672_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
return v___x_4671_;
}
}
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
v_a_4674_ = lean_ctor_get(v___x_4663_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4663_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4663_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4663_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg___boxed(lean_object* v_e_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_e_4682_, v_a_4683_, v_a_4684_);
lean_dec_ref(v_a_4684_);
lean_dec(v_a_4683_);
lean_dec_ref(v_e_4682_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(lean_object* v_e_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_){
_start:
{
lean_object* v___x_4699_; 
v___x_4699_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_e_4687_, v_a_4688_, v_a_4696_);
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___boxed(lean_object* v_e_4700_, lean_object* v_a_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_){
_start:
{
lean_object* v_res_4712_; 
v_res_4712_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f(v_e_4700_, v_a_4701_, v_a_4702_, v_a_4703_, v_a_4704_, v_a_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_);
lean_dec(v_a_4710_);
lean_dec_ref(v_a_4709_);
lean_dec(v_a_4708_);
lean_dec_ref(v_a_4707_);
lean_dec(v_a_4706_);
lean_dec_ref(v_a_4705_);
lean_dec(v_a_4704_);
lean_dec_ref(v_a_4703_);
lean_dec(v_a_4702_);
lean_dec(v_a_4701_);
lean_dec_ref(v_e_4700_);
return v_res_4712_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8(void){
_start:
{
uint8_t v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4737_ = 0;
v___x_4738_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4739_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4739_, 0, v___x_4738_);
lean_ctor_set_uint8(v___x_4739_, sizeof(void*)*1, v___x_4737_);
return v___x_4739_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10(void){
_start:
{
lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__9));
v___x_4742_ = l_Lean_stringToMessageData(v___x_4741_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(lean_object* v_a_4743_, lean_object* v_b_4744_, lean_object* v_h_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_){
_start:
{
lean_object* v___y_4758_; lean_object* v___y_4759_; lean_object* v___y_4760_; lean_object* v___y_4761_; lean_object* v___y_4762_; lean_object* v___y_4763_; lean_object* v___y_4764_; lean_object* v___y_4765_; lean_object* v___y_4766_; lean_object* v___y_4767_; lean_object* v___y_4768_; lean_object* v___x_4856_; 
v___x_4856_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_a_4743_, v_a_4746_, v_a_4754_);
if (lean_obj_tag(v___x_4856_) == 0)
{
lean_object* v_a_4857_; lean_object* v___x_4859_; uint8_t v_isShared_4860_; uint8_t v_isSharedCheck_4903_; 
v_a_4857_ = lean_ctor_get(v___x_4856_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4859_ = v___x_4856_;
v_isShared_4860_ = v_isSharedCheck_4903_;
goto v_resetjp_4858_;
}
else
{
lean_inc(v_a_4857_);
lean_dec(v___x_4856_);
v___x_4859_ = lean_box(0);
v_isShared_4860_ = v_isSharedCheck_4903_;
goto v_resetjp_4858_;
}
v_resetjp_4858_:
{
if (lean_obj_tag(v_a_4857_) == 1)
{
lean_object* v_val_4861_; lean_object* v___x_4862_; 
lean_del_object(v___x_4859_);
v_val_4861_ = lean_ctor_get(v_a_4857_, 0);
lean_inc(v_val_4861_);
lean_dec_ref_known(v_a_4857_, 1);
v___x_4862_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_getStructIdOf_x3f___redArg(v_b_4744_, v_a_4746_, v_a_4754_);
if (lean_obj_tag(v___x_4862_) == 0)
{
lean_object* v_a_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4890_; 
v_a_4863_ = lean_ctor_get(v___x_4862_, 0);
v_isSharedCheck_4890_ = !lean_is_exclusive(v___x_4862_);
if (v_isSharedCheck_4890_ == 0)
{
v___x_4865_ = v___x_4862_;
v_isShared_4866_ = v_isSharedCheck_4890_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_a_4863_);
lean_dec(v___x_4862_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4890_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
if (lean_obj_tag(v_a_4863_) == 1)
{
lean_object* v_val_4867_; uint8_t v___x_4868_; 
v_val_4867_ = lean_ctor_get(v_a_4863_, 0);
lean_inc(v_val_4867_);
lean_dec_ref_known(v_a_4863_, 1);
v___x_4868_ = lean_nat_dec_eq(v_val_4861_, v_val_4867_);
lean_dec(v_val_4867_);
if (v___x_4868_ == 0)
{
lean_object* v___x_4869_; lean_object* v___x_4871_; 
lean_dec(v_val_4861_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v___x_4869_ = lean_box(0);
if (v_isShared_4866_ == 0)
{
lean_ctor_set(v___x_4865_, 0, v___x_4869_);
v___x_4871_ = v___x_4865_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v___x_4869_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
else
{
lean_object* v_toCold_4873_; lean_object* v_options_4874_; uint8_t v_hasTrace_4875_; 
lean_del_object(v___x_4865_);
v_toCold_4873_ = lean_ctor_get(v_a_4754_, 0);
v_options_4874_ = lean_ctor_get(v_toCold_4873_, 2);
v_hasTrace_4875_ = lean_ctor_get_uint8(v_options_4874_, sizeof(void*)*1);
if (v_hasTrace_4875_ == 0)
{
v___y_4758_ = v_val_4861_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
v___y_4766_ = v_a_4753_;
v___y_4767_ = v_a_4754_;
v___y_4768_ = v_a_4755_;
goto v___jp_4757_;
}
else
{
lean_object* v_inheritedTraceOptions_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; uint8_t v___x_4879_; 
v_inheritedTraceOptions_4876_ = lean_ctor_get(v_toCold_4873_, 11);
v___x_4877_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__4));
v___x_4878_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqTrue___closed__5);
v___x_4879_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4876_, v_options_4874_, v___x_4878_);
if (v___x_4879_ == 0)
{
v___y_4758_ = v_val_4861_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
v___y_4766_ = v_a_4753_;
v___y_4767_ = v_a_4754_;
v___y_4768_ = v_a_4755_;
goto v___jp_4757_;
}
else
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; 
lean_inc_ref(v_a_4743_);
v___x_4880_ = l_Lean_MessageData_ofExpr(v_a_4743_);
v___x_4881_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__10);
v___x_4882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4880_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
lean_inc_ref(v_b_4744_);
v___x_4883_ = l_Lean_MessageData_ofExpr(v_b_4744_);
v___x_4884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4884_, 0, v___x_4882_);
lean_ctor_set(v___x_4884_, 1, v___x_4883_);
v___x_4885_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_pushToPropagate_spec__0___redArg(v___x_4877_, v___x_4884_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_);
if (lean_obj_tag(v___x_4885_) == 0)
{
lean_dec_ref_known(v___x_4885_, 1);
v___y_4758_ = v_val_4861_;
v___y_4759_ = v_a_4746_;
v___y_4760_ = v_a_4747_;
v___y_4761_ = v_a_4748_;
v___y_4762_ = v_a_4749_;
v___y_4763_ = v_a_4750_;
v___y_4764_ = v_a_4751_;
v___y_4765_ = v_a_4752_;
v___y_4766_ = v_a_4753_;
v___y_4767_ = v_a_4754_;
v___y_4768_ = v_a_4755_;
goto v___jp_4757_;
}
else
{
lean_dec(v_val_4861_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
return v___x_4885_;
}
}
}
}
}
else
{
lean_object* v___x_4886_; lean_object* v___x_4888_; 
lean_dec(v_a_4863_);
lean_dec(v_val_4861_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v___x_4886_ = lean_box(0);
if (v_isShared_4866_ == 0)
{
lean_ctor_set(v___x_4865_, 0, v___x_4886_);
v___x_4888_ = v___x_4865_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4889_; 
v_reuseFailAlloc_4889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4889_, 0, v___x_4886_);
v___x_4888_ = v_reuseFailAlloc_4889_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
return v___x_4888_;
}
}
}
}
else
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4898_; 
lean_dec(v_val_4861_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4891_ = lean_ctor_get(v___x_4862_, 0);
v_isSharedCheck_4898_ = !lean_is_exclusive(v___x_4862_);
if (v_isSharedCheck_4898_ == 0)
{
v___x_4893_ = v___x_4862_;
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v___x_4862_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4898_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
return v___x_4896_;
}
}
}
}
else
{
lean_object* v___x_4899_; lean_object* v___x_4901_; 
lean_dec(v_a_4857_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v___x_4899_ = lean_box(0);
if (v_isShared_4860_ == 0)
{
lean_ctor_set(v___x_4859_, 0, v___x_4899_);
v___x_4901_ = v___x_4859_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v___x_4899_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
else
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4911_; 
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4904_ = lean_ctor_get(v___x_4856_, 0);
v_isSharedCheck_4911_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4911_ == 0)
{
v___x_4906_ = v___x_4856_;
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4856_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4909_; 
if (v_isShared_4907_ == 0)
{
v___x_4909_ = v___x_4906_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v_a_4904_);
v___x_4909_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4908_;
}
v_reusejp_4908_:
{
return v___x_4909_;
}
}
}
v___jp_4757_:
{
lean_object* v___x_4769_; 
lean_inc_ref(v_a_4743_);
v___x_4769_ = l_Lean_Meta_Grind_Order_getNodeId(v_a_4743_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4769_) == 0)
{
lean_object* v_a_4770_; lean_object* v___x_4771_; 
v_a_4770_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_a_4770_);
lean_dec_ref_known(v___x_4769_, 1);
lean_inc_ref(v_b_4744_);
v___x_4771_ = l_Lean_Meta_Grind_Order_getNodeId(v_b_4744_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v_a_4772_; lean_object* v___x_4773_; 
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref_known(v___x_4771_, 1);
v___x_4773_ = l_Lean_Meta_Grind_Order_isRing(v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; uint8_t v___x_4775_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
v___x_4775_ = lean_unbox(v_a_4774_);
if (v___x_4775_ == 0)
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4776_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__1));
v___x_4777_ = l_Lean_Meta_Grind_Order_mkLePreorderPrefix(v___x_4776_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
lean_inc(v_a_4778_);
lean_dec_ref_known(v___x_4777_, 1);
lean_inc_ref(v_h_4745_);
lean_inc_ref(v_b_4744_);
lean_inc_ref(v_a_4743_);
v___x_4779_ = l_Lean_mkApp3(v_a_4778_, v_a_4743_, v_b_4744_, v_h_4745_);
v___x_4780_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__3));
v___x_4781_ = l_Lean_Meta_Grind_Order_mkLePreorderPrefix(v___x_4780_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; uint8_t v___x_4786_; lean_object* v___x_4787_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___x_4783_ = l_Lean_mkApp3(v_a_4782_, v_a_4743_, v_b_4744_, v_h_4745_);
v___x_4784_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_assertIneqFalse___closed__4);
v___x_4785_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4785_, 0, v___x_4784_);
v___x_4786_ = lean_unbox(v_a_4774_);
lean_dec(v_a_4774_);
lean_ctor_set_uint8(v___x_4785_, sizeof(void*)*1, v___x_4786_);
lean_inc_ref(v___x_4785_);
lean_inc(v_a_4772_);
lean_inc(v_a_4770_);
v___x_4787_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4770_, v_a_4772_, v___x_4785_, v___x_4779_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4787_) == 0)
{
lean_object* v___x_4788_; 
lean_dec_ref_known(v___x_4787_, 1);
v___x_4788_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4772_, v_a_4770_, v___x_4785_, v___x_4783_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
lean_dec(v___y_4758_);
return v___x_4788_;
}
else
{
lean_dec_ref_known(v___x_4785_, 1);
lean_dec_ref(v___x_4783_);
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
return v___x_4787_;
}
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4796_; 
lean_dec_ref(v___x_4779_);
lean_dec(v_a_4774_);
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4789_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4796_ == 0)
{
v___x_4791_ = v___x_4781_;
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v___x_4781_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4794_; 
if (v_isShared_4792_ == 0)
{
v___x_4794_ = v___x_4791_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4795_; 
v_reuseFailAlloc_4795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4795_, 0, v_a_4789_);
v___x_4794_ = v_reuseFailAlloc_4795_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
return v___x_4794_;
}
}
}
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec(v_a_4774_);
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4797_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4777_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4777_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
else
{
lean_object* v___x_4805_; lean_object* v___x_4806_; 
lean_dec(v_a_4774_);
v___x_4805_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__5));
v___x_4806_ = l_Lean_Meta_Grind_Order_mkOrdRingPrefix(v___x_4805_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4807_);
lean_dec_ref_known(v___x_4806_, 1);
lean_inc_ref(v_h_4745_);
lean_inc_ref(v_b_4744_);
lean_inc_ref(v_a_4743_);
v___x_4808_ = l_Lean_mkApp3(v_a_4807_, v_a_4743_, v_b_4744_, v_h_4745_);
v___x_4809_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__7));
v___x_4810_ = l_Lean_Meta_Grind_Order_mkOrdRingPrefix(v___x_4809_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4810_) == 0)
{
lean_object* v_a_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; 
v_a_4811_ = lean_ctor_get(v___x_4810_, 0);
lean_inc(v_a_4811_);
lean_dec_ref_known(v___x_4810_, 1);
v___x_4812_ = l_Lean_mkApp3(v_a_4811_, v_a_4743_, v_b_4744_, v_h_4745_);
v___x_4813_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8, &l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___closed__8);
lean_inc(v_a_4772_);
lean_inc(v_a_4770_);
v___x_4814_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4770_, v_a_4772_, v___x_4813_, v___x_4808_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
if (lean_obj_tag(v___x_4814_) == 0)
{
lean_object* v___x_4815_; 
lean_dec_ref_known(v___x_4814_, 1);
v___x_4815_ = l_Lean_Meta_Grind_Order_addEdge(v_a_4772_, v_a_4770_, v___x_4813_, v___x_4812_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_, v___y_4767_, v___y_4768_);
lean_dec(v___y_4758_);
return v___x_4815_;
}
else
{
lean_dec_ref(v___x_4812_);
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
return v___x_4814_;
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v___x_4808_);
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4816_ = lean_ctor_get(v___x_4810_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4810_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4810_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4810_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4821_; 
if (v_isShared_4819_ == 0)
{
v___x_4821_ = v___x_4818_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_a_4816_);
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
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4824_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4826_ = v___x_4806_;
v_isShared_4827_ = v_isSharedCheck_4831_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4806_);
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
}
else
{
lean_object* v_a_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4839_; 
lean_dec(v_a_4772_);
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4832_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4834_ = v___x_4773_;
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_a_4832_);
lean_dec(v___x_4773_);
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
else
{
lean_object* v_a_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4847_; 
lean_dec(v_a_4770_);
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4840_ = lean_ctor_get(v___x_4771_, 0);
v_isSharedCheck_4847_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4847_ == 0)
{
v___x_4842_ = v___x_4771_;
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_a_4840_);
lean_dec(v___x_4771_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4847_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v___x_4845_; 
if (v_isShared_4843_ == 0)
{
v___x_4845_ = v___x_4842_;
goto v_reusejp_4844_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v_a_4840_);
v___x_4845_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4844_;
}
v_reusejp_4844_:
{
return v___x_4845_;
}
}
}
}
else
{
lean_object* v_a_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4855_; 
lean_dec(v___y_4758_);
lean_dec_ref(v_h_4745_);
lean_dec_ref(v_b_4744_);
lean_dec_ref(v_a_4743_);
v_a_4848_ = lean_ctor_get(v___x_4769_, 0);
v_isSharedCheck_4855_ = !lean_is_exclusive(v___x_4769_);
if (v_isSharedCheck_4855_ == 0)
{
v___x_4850_ = v___x_4769_;
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_a_4848_);
lean_dec(v___x_4769_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4855_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v___x_4853_; 
if (v_isShared_4851_ == 0)
{
v___x_4853_ = v___x_4850_;
goto v_reusejp_4852_;
}
else
{
lean_object* v_reuseFailAlloc_4854_; 
v_reuseFailAlloc_4854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4854_, 0, v_a_4848_);
v___x_4853_ = v_reuseFailAlloc_4854_;
goto v_reusejp_4852_;
}
v_reusejp_4852_:
{
return v___x_4853_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go___boxed(lean_object* v_a_4912_, lean_object* v_b_4913_, lean_object* v_h_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_, lean_object* v_a_4920_, lean_object* v_a_4921_, lean_object* v_a_4922_, lean_object* v_a_4923_, lean_object* v_a_4924_, lean_object* v_a_4925_){
_start:
{
lean_object* v_res_4926_; 
v_res_4926_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_a_4912_, v_b_4913_, v_h_4914_, v_a_4915_, v_a_4916_, v_a_4917_, v_a_4918_, v_a_4919_, v_a_4920_, v_a_4921_, v_a_4922_, v_a_4923_, v_a_4924_);
lean_dec(v_a_4924_);
lean_dec_ref(v_a_4923_);
lean_dec(v_a_4922_);
lean_dec_ref(v_a_4921_);
lean_dec(v_a_4920_);
lean_dec_ref(v_a_4919_);
lean_dec(v_a_4918_);
lean_dec_ref(v_a_4917_);
lean_dec(v_a_4916_);
lean_dec(v_a_4915_);
return v_res_4926_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Order_processNewEq___closed__6(void){
_start:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; 
v___x_4942_ = lean_box(0);
v___x_4943_ = ((lean_object*)(l_Lean_Meta_Grind_Order_processNewEq___closed__5));
v___x_4944_ = l_Lean_mkConst(v___x_4943_, v___x_4942_);
return v___x_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq(lean_object* v_a_4945_, lean_object* v_b_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_){
_start:
{
size_t v___x_4958_; size_t v___x_4959_; uint8_t v___x_4960_; 
v___x_4958_ = lean_ptr_addr(v_a_4945_);
v___x_4959_ = lean_ptr_addr(v_b_4946_);
v___x_4960_ = lean_usize_dec_eq(v___x_4958_, v___x_4959_);
if (v___x_4960_ == 0)
{
lean_object* v___x_4961_; 
lean_inc(v_a_4956_);
lean_inc_ref(v_a_4955_);
lean_inc(v_a_4954_);
lean_inc_ref(v_a_4953_);
lean_inc(v_a_4952_);
lean_inc_ref(v_a_4951_);
lean_inc(v_a_4950_);
lean_inc_ref(v_a_4949_);
lean_inc(v_a_4948_);
lean_inc(v_a_4947_);
lean_inc_ref(v_b_4946_);
lean_inc_ref(v_a_4945_);
v___x_4961_ = lean_grind_mk_eq_proof(v_a_4945_, v_b_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_object* v_a_4962_; lean_object* v___x_4963_; 
v_a_4962_ = lean_ctor_get(v___x_4961_, 0);
lean_inc(v_a_4962_);
lean_dec_ref_known(v___x_4961_, 1);
v___x_4963_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_a_4945_, v_a_4947_, v_a_4955_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
lean_inc(v_a_4964_);
lean_dec_ref_known(v___x_4963_, 1);
if (lean_obj_tag(v_a_4964_) == 1)
{
lean_object* v_val_4965_; lean_object* v_e_4966_; lean_object* v_h_4967_; lean_object* v_00_u03b1_4968_; lean_object* v___x_4969_; 
v_val_4965_ = lean_ctor_get(v_a_4964_, 0);
lean_inc(v_val_4965_);
lean_dec_ref_known(v_a_4964_, 1);
v_e_4966_ = lean_ctor_get(v_val_4965_, 0);
lean_inc_ref(v_e_4966_);
v_h_4967_ = lean_ctor_get(v_val_4965_, 1);
lean_inc_ref(v_h_4967_);
v_00_u03b1_4968_ = lean_ctor_get(v_val_4965_, 2);
lean_inc_ref(v_00_u03b1_4968_);
lean_dec(v_val_4965_);
v___x_4969_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_getAuxTerm_x3f___redArg(v_b_4946_, v_a_4947_, v_a_4955_);
if (lean_obj_tag(v___x_4969_) == 0)
{
lean_object* v_a_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_5015_; 
v_a_4970_ = lean_ctor_get(v___x_4969_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4969_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_4972_ = v___x_4969_;
v_isShared_4973_ = v_isSharedCheck_5015_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_a_4970_);
lean_dec(v___x_4969_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_5015_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
if (lean_obj_tag(v_a_4970_) == 1)
{
lean_object* v_val_4974_; lean_object* v_e_4975_; lean_object* v_h_4976_; lean_object* v___x_4977_; uint8_t v___x_4978_; 
lean_del_object(v___x_4972_);
v_val_4974_ = lean_ctor_get(v_a_4970_, 0);
lean_inc(v_val_4974_);
lean_dec_ref_known(v_a_4970_, 1);
v_e_4975_ = lean_ctor_get(v_val_4974_, 0);
lean_inc_ref(v_e_4975_);
v_h_4976_ = lean_ctor_get(v_val_4974_, 1);
lean_inc_ref(v_h_4976_);
lean_dec(v_val_4974_);
v___x_4977_ = l_Lean_Int_mkType;
v___x_4978_ = lean_expr_eqv(v_00_u03b1_4968_, v___x_4977_);
if (v___x_4978_ == 0)
{
lean_object* v___x_4979_; 
lean_inc_ref(v_00_u03b1_4968_);
v___x_4979_ = l_Lean_Meta_getDecLevel(v_00_u03b1_4968_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
lean_inc(v_a_4980_);
lean_dec_ref_known(v___x_4979_, 1);
v___x_4981_ = ((lean_object*)(l_Lean_Meta_Grind_Order_processNewEq___closed__1));
v___x_4982_ = lean_box(0);
v___x_4983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4983_, 0, v_a_4980_);
lean_ctor_set(v___x_4983_, 1, v___x_4982_);
lean_inc_ref(v___x_4983_);
v___x_4984_ = l_Lean_mkConst(v___x_4981_, v___x_4983_);
lean_inc_ref(v_00_u03b1_4968_);
v___x_4985_ = l_Lean_Expr_app___override(v___x_4984_, v_00_u03b1_4968_);
v___x_4986_ = l_Lean_Meta_Sym_synthInstance(v___x_4985_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
if (lean_obj_tag(v___x_4986_) == 0)
{
lean_object* v_a_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; 
v_a_4987_ = lean_ctor_get(v___x_4986_, 0);
lean_inc(v_a_4987_);
lean_dec_ref_known(v___x_4986_, 1);
v___x_4988_ = ((lean_object*)(l_Lean_Meta_Grind_Order_processNewEq___closed__3));
v___x_4989_ = l_Lean_mkConst(v___x_4988_, v___x_4983_);
lean_inc_ref(v_e_4975_);
lean_inc_ref(v_e_4966_);
v___x_4990_ = l_Lean_mkApp9(v___x_4989_, v_00_u03b1_4968_, v_a_4987_, v_a_4945_, v_b_4946_, v_e_4966_, v_e_4975_, v_h_4967_, v_h_4976_, v_a_4962_);
v___x_4991_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_e_4966_, v_e_4975_, v___x_4990_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
return v___x_4991_;
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec_ref_known(v___x_4983_, 2);
lean_dec_ref(v_h_4976_);
lean_dec_ref(v_e_4975_);
lean_dec_ref(v_00_u03b1_4968_);
lean_dec_ref(v_h_4967_);
lean_dec_ref(v_e_4966_);
lean_dec(v_a_4962_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v_a_4992_ = lean_ctor_get(v___x_4986_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4986_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4986_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4986_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
}
else
{
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5007_; 
lean_dec_ref(v_h_4976_);
lean_dec_ref(v_e_4975_);
lean_dec_ref(v_00_u03b1_4968_);
lean_dec_ref(v_h_4967_);
lean_dec_ref(v_e_4966_);
lean_dec(v_a_4962_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v_a_5000_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_5002_ = v___x_4979_;
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v___x_4979_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_a_5000_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
return v___x_5005_;
}
}
}
}
else
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; 
lean_dec_ref(v_00_u03b1_4968_);
v___x_5008_ = lean_obj_once(&l_Lean_Meta_Grind_Order_processNewEq___closed__6, &l_Lean_Meta_Grind_Order_processNewEq___closed__6_once, _init_l_Lean_Meta_Grind_Order_processNewEq___closed__6);
lean_inc_ref(v_e_4975_);
lean_inc_ref(v_e_4966_);
v___x_5009_ = l_Lean_mkApp7(v___x_5008_, v_a_4945_, v_b_4946_, v_e_4966_, v_e_4975_, v_h_4967_, v_h_4976_, v_a_4962_);
v___x_5010_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_e_4966_, v_e_4975_, v___x_5009_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
return v___x_5010_;
}
}
else
{
lean_object* v___x_5011_; lean_object* v___x_5013_; 
lean_dec(v_a_4970_);
lean_dec_ref(v_00_u03b1_4968_);
lean_dec_ref(v_h_4967_);
lean_dec_ref(v_e_4966_);
lean_dec(v_a_4962_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v___x_5011_ = lean_box(0);
if (v_isShared_4973_ == 0)
{
lean_ctor_set(v___x_4972_, 0, v___x_5011_);
v___x_5013_ = v___x_4972_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v___x_5011_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
}
else
{
lean_object* v_a_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5023_; 
lean_dec_ref(v_00_u03b1_4968_);
lean_dec_ref(v_h_4967_);
lean_dec_ref(v_e_4966_);
lean_dec(v_a_4962_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v_a_5016_ = lean_ctor_get(v___x_4969_, 0);
v_isSharedCheck_5023_ = !lean_is_exclusive(v___x_4969_);
if (v_isSharedCheck_5023_ == 0)
{
v___x_5018_ = v___x_4969_;
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_a_5016_);
lean_dec(v___x_4969_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5021_; 
if (v_isShared_5019_ == 0)
{
v___x_5021_ = v___x_5018_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v_a_5016_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
}
}
else
{
lean_object* v___x_5024_; 
lean_dec(v_a_4964_);
v___x_5024_ = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_processNewEq_go(v_a_4945_, v_b_4946_, v_a_4962_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
return v___x_5024_;
}
}
else
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
lean_dec(v_a_4962_);
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v_a_5025_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v___x_4963_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_4963_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
else
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v_a_5033_ = lean_ctor_get(v___x_4961_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_4961_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_4961_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_4961_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
}
}
else
{
lean_object* v___x_5041_; lean_object* v___x_5042_; 
lean_dec_ref(v_b_4946_);
lean_dec_ref(v_a_4945_);
v___x_5041_ = lean_box(0);
v___x_5042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5041_);
return v___x_5042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Order_processNewEq___boxed(lean_object* v_a_5043_, lean_object* v_b_5044_, lean_object* v_a_5045_, lean_object* v_a_5046_, lean_object* v_a_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l_Lean_Meta_Grind_Order_processNewEq(v_a_5043_, v_b_5044_, v_a_5045_, v_a_5046_, v_a_5047_, v_a_5048_, v_a_5049_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_);
lean_dec(v_a_5054_);
lean_dec_ref(v_a_5053_);
lean_dec(v_a_5052_);
lean_dec_ref(v_a_5051_);
lean_dec(v_a_5050_);
lean_dec_ref(v_a_5049_);
lean_dec(v_a_5048_);
lean_dec_ref(v_a_5047_);
lean_dec(v_a_5046_);
lean_dec(v_a_5045_);
return v_res_5056_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_OrderM(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Order(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Proof(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_OrderM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLE_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_4281489886____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT___regBuiltin___private_Lean_Meta_Tactic_Grind_Order_Assert_0__Lean_Meta_Grind_Order_propagateLT_declare__1_00___x40_Lean_Meta_Tactic_Grind_Order_Assert_1204040634____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_OrderM(uint8_t builtin);
lean_object* initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* initialize_Init_Grind_Order(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Proof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Order_Assert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Order_OrderM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Order_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Order_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Order_Assert(builtin);
}
#ifdef __cplusplus
}
#endif

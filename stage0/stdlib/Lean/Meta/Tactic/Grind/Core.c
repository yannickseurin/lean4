// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Core
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Inv import Lean.Meta.Tactic.Grind.PP import Lean.Meta.Tactic.Grind.Ctor import Lean.Meta.Tactic.Grind.Beta import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Internalize import Init.Omega
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
lean_object* l_Lean_Meta_Grind_getParents___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_setENode___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_checkInvariants(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_ppState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
extern lean_object* l_Lean_eagerReflBoolFalse;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Grind_PendingSolverPropagations_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_DelayedTheoremInstance_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateBetaEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_resetParentsOf___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_copyParentsTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addCongrTable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isCongrRoot(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_Grind_ppENodeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getFnRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getEqcLambdas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markAsInconsistent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "parent"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 81, 119, 21, 241, 124, 41, 97)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "remove: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reinsert: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eq_false_of_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 157, 112, 124, 91, 52, 64, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 64, 101, 181, 200, 140, 42, 219)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "curr: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parent: "};
static const lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fn: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", parents: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_propagateBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fns: "};
static const lean_object* l_Lean_Meta_Grind_propagateBeta___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBeta___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__1;
static const lean_string_object l_Lean_Meta_Grind_propagateBeta___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", lams: "};
static const lean_object* l_Lean_Meta_Grind_propagateBeta___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBeta___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 152, 115, 107, 166, 56, 116, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " new root "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "adding "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ↦ "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "after addEqStep, "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eqc"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 235, 244, 178, 10, 61, 92, 220)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = " are already in the same equivalence class"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(157, 181, 250, 47, 64, 71, 92, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object* v_e_1_, uint8_t v_flippedNew_2_, lean_object* v_targetNew_x3f_3_, lean_object* v_proofNew_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_st_ref_get(v_a_5_);
lean_inc_ref(v_e_1_);
v___x_12_ = l_Lean_Meta_Grind_Goal_getENode(v___x_11_, v_e_1_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
lean_dec(v___x_11_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v_self_14_; lean_object* v_next_15_; lean_object* v_root_16_; lean_object* v_congr_17_; lean_object* v_target_x3f_18_; lean_object* v_proof_x3f_19_; uint8_t v_flipped_20_; lean_object* v_size_21_; uint8_t v_interpreted_22_; uint8_t v_ctor_23_; uint8_t v_hasLambdas_24_; uint8_t v_heqProofs_25_; lean_object* v_idx_26_; lean_object* v_generation_27_; lean_object* v_mt_28_; lean_object* v_sTerms_29_; uint8_t v_funCC_30_; lean_object* v_ematchDiagSource_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_54_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
lean_dec_ref_known(v___x_12_, 1);
v_self_14_ = lean_ctor_get(v_a_13_, 0);
v_next_15_ = lean_ctor_get(v_a_13_, 1);
v_root_16_ = lean_ctor_get(v_a_13_, 2);
v_congr_17_ = lean_ctor_get(v_a_13_, 3);
v_target_x3f_18_ = lean_ctor_get(v_a_13_, 4);
v_proof_x3f_19_ = lean_ctor_get(v_a_13_, 5);
v_flipped_20_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12);
v_size_21_ = lean_ctor_get(v_a_13_, 6);
v_interpreted_22_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 1);
v_ctor_23_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 2);
v_hasLambdas_24_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 3);
v_heqProofs_25_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 4);
v_idx_26_ = lean_ctor_get(v_a_13_, 7);
v_generation_27_ = lean_ctor_get(v_a_13_, 8);
v_mt_28_ = lean_ctor_get(v_a_13_, 9);
v_sTerms_29_ = lean_ctor_get(v_a_13_, 10);
v_funCC_30_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 5);
v_ematchDiagSource_31_ = lean_ctor_get(v_a_13_, 11);
v_isSharedCheck_54_ = !lean_is_exclusive(v_a_13_);
if (v_isSharedCheck_54_ == 0)
{
v___x_33_ = v_a_13_;
v_isShared_34_ = v_isSharedCheck_54_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_ematchDiagSource_31_);
lean_inc(v_sTerms_29_);
lean_inc(v_mt_28_);
lean_inc(v_generation_27_);
lean_inc(v_idx_26_);
lean_inc(v_size_21_);
lean_inc(v_proof_x3f_19_);
lean_inc(v_target_x3f_18_);
lean_inc(v_congr_17_);
lean_inc(v_root_16_);
lean_inc(v_next_15_);
lean_inc(v_self_14_);
lean_dec(v_a_13_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_54_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___y_36_; 
if (lean_obj_tag(v_target_x3f_18_) == 1)
{
lean_object* v_val_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_53_; 
v_val_41_ = lean_ctor_get(v_target_x3f_18_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_target_x3f_18_);
if (v_isSharedCheck_53_ == 0)
{
v___x_43_ = v_target_x3f_18_;
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_val_41_);
lean_dec(v_target_x3f_18_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint8_t v___y_46_; 
if (v_flipped_20_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
v___y_46_ = v___x_51_;
goto v___jp_45_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
v___y_46_ = v___x_52_;
goto v___jp_45_;
}
v___jp_45_:
{
lean_object* v___x_48_; 
lean_inc_ref(v_e_1_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v_e_1_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_e_1_);
v___x_48_ = v_reuseFailAlloc_50_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; 
v___x_49_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_val_41_, v___y_46_, v___x_48_, v_proof_x3f_19_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_dec_ref_known(v___x_49_, 1);
v___y_36_ = v_a_5_;
goto v___jp_35_;
}
else
{
lean_del_object(v___x_33_);
lean_dec(v_ematchDiagSource_31_);
lean_dec(v_sTerms_29_);
lean_dec(v_mt_28_);
lean_dec(v_generation_27_);
lean_dec(v_idx_26_);
lean_dec(v_size_21_);
lean_dec_ref(v_congr_17_);
lean_dec_ref(v_root_16_);
lean_dec_ref(v_next_15_);
lean_dec_ref(v_self_14_);
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
return v___x_49_;
}
}
}
}
}
else
{
lean_dec(v_proof_x3f_19_);
lean_dec(v_target_x3f_18_);
v___y_36_ = v_a_5_;
goto v___jp_35_;
}
v___jp_35_:
{
lean_object* v___x_38_; 
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v___x_33_, 4, v_targetNew_x3f_3_);
v___x_38_ = v___x_33_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_self_14_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v_next_15_);
lean_ctor_set(v_reuseFailAlloc_40_, 2, v_root_16_);
lean_ctor_set(v_reuseFailAlloc_40_, 3, v_congr_17_);
lean_ctor_set(v_reuseFailAlloc_40_, 4, v_targetNew_x3f_3_);
lean_ctor_set(v_reuseFailAlloc_40_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v_reuseFailAlloc_40_, 6, v_size_21_);
lean_ctor_set(v_reuseFailAlloc_40_, 7, v_idx_26_);
lean_ctor_set(v_reuseFailAlloc_40_, 8, v_generation_27_);
lean_ctor_set(v_reuseFailAlloc_40_, 9, v_mt_28_);
lean_ctor_set(v_reuseFailAlloc_40_, 10, v_sTerms_29_);
lean_ctor_set(v_reuseFailAlloc_40_, 11, v_ematchDiagSource_31_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 1, v_interpreted_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 2, v_ctor_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 3, v_hasLambdas_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 4, v_heqProofs_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 5, v_funCC_30_);
v___x_38_ = v_reuseFailAlloc_40_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; 
lean_ctor_set_uint8(v___x_38_, sizeof(void*)*12, v_flippedNew_2_);
v___x_39_ = l_Lean_Meta_Grind_setENode___redArg(v_e_1_, v___x_38_, v___y_36_);
return v___x_39_;
}
}
}
}
else
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
v_a_55_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_12_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_12_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object* v_e_63_, lean_object* v_flippedNew_64_, lean_object* v_targetNew_x3f_65_, lean_object* v_proofNew_x3f_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
uint8_t v_flippedNew_boxed_73_; lean_object* v_res_74_; 
v_flippedNew_boxed_73_ = lean_unbox(v_flippedNew_64_);
v_res_74_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_63_, v_flippedNew_boxed_73_, v_targetNew_x3f_65_, v_proofNew_x3f_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
lean_dec(v_a_71_);
lean_dec_ref(v_a_70_);
lean_dec(v_a_69_);
lean_dec_ref(v_a_68_);
lean_dec(v_a_67_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object* v_e_75_, uint8_t v_flippedNew_76_, lean_object* v_targetNew_x3f_77_, lean_object* v_proofNew_x3f_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_75_, v_flippedNew_76_, v_targetNew_x3f_77_, v_proofNew_x3f_78_, v_a_79_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object* v_e_91_, lean_object* v_flippedNew_92_, lean_object* v_targetNew_x3f_93_, lean_object* v_proofNew_x3f_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
uint8_t v_flippedNew_boxed_106_; lean_object* v_res_107_; 
v_flippedNew_boxed_106_ = lean_unbox(v_flippedNew_92_);
v_res_107_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(v_e_91_, v_flippedNew_boxed_106_, v_targetNew_x3f_93_, v_proofNew_x3f_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec(v_a_95_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object* v_e_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = 0;
v___x_116_ = lean_box(0);
v___x_117_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_108_, v___x_115_, v___x_116_, v___x_116_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object* v_e_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
lean_dec(v_a_119_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object* v_e_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_126_, v_a_127_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object* v_e_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(v_e_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec(v_a_140_);
return v_res_151_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object* v_parent_152_){
_start:
{
uint8_t v___x_153_; 
v___x_153_ = l_Lean_Expr_isApp(v_parent_152_);
if (v___x_153_ == 0)
{
uint8_t v___x_154_; 
v___x_154_ = l_Lean_Expr_isArrow(v_parent_152_);
return v___x_154_;
}
else
{
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object* v_parent_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_parent_155_);
lean_dec_ref(v_parent_155_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object* v_msgData_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; lean_object* v_env_165_; lean_object* v___x_166_; lean_object* v_toCold_167_; lean_object* v_mctx_168_; lean_object* v_lctx_169_; lean_object* v_options_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_164_ = lean_st_ref_get(v___y_162_);
v_env_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc_ref(v_env_165_);
lean_dec(v___x_164_);
v___x_166_ = lean_st_ref_get(v___y_160_);
v_toCold_167_ = lean_ctor_get(v___y_161_, 0);
v_mctx_168_ = lean_ctor_get(v___x_166_, 0);
lean_inc_ref(v_mctx_168_);
lean_dec(v___x_166_);
v_lctx_169_ = lean_ctor_get(v___y_159_, 2);
v_options_170_ = lean_ctor_get(v_toCold_167_, 2);
lean_inc_ref(v_options_170_);
lean_inc_ref(v_lctx_169_);
v___x_171_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_171_, 0, v_env_165_);
lean_ctor_set(v___x_171_, 1, v_mctx_168_);
lean_ctor_set(v___x_171_, 2, v_lctx_169_);
lean_ctor_set(v___x_171_, 3, v_options_170_);
v___x_172_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v_msgData_158_);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object* v_msgData_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msgData_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_181_; double v___x_182_; 
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_float_of_nat(v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object* v_cls_186_, lean_object* v_msg_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_ref_193_; lean_object* v___x_194_; lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_239_; 
v_ref_193_ = lean_ctor_get(v___y_190_, 2);
v___x_194_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msg_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_239_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_239_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_239_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v_traceState_200_; lean_object* v_env_201_; lean_object* v_nextMacroScope_202_; lean_object* v_ngen_203_; lean_object* v_auxDeclNGen_204_; lean_object* v_cache_205_; lean_object* v_messages_206_; lean_object* v_infoState_207_; lean_object* v_snapshotTasks_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_238_; 
v___x_199_ = lean_st_ref_take(v___y_191_);
v_traceState_200_ = lean_ctor_get(v___x_199_, 4);
v_env_201_ = lean_ctor_get(v___x_199_, 0);
v_nextMacroScope_202_ = lean_ctor_get(v___x_199_, 1);
v_ngen_203_ = lean_ctor_get(v___x_199_, 2);
v_auxDeclNGen_204_ = lean_ctor_get(v___x_199_, 3);
v_cache_205_ = lean_ctor_get(v___x_199_, 5);
v_messages_206_ = lean_ctor_get(v___x_199_, 6);
v_infoState_207_ = lean_ctor_get(v___x_199_, 7);
v_snapshotTasks_208_ = lean_ctor_get(v___x_199_, 8);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_238_ == 0)
{
v___x_210_ = v___x_199_;
v_isShared_211_ = v_isSharedCheck_238_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_snapshotTasks_208_);
lean_inc(v_infoState_207_);
lean_inc(v_messages_206_);
lean_inc(v_cache_205_);
lean_inc(v_traceState_200_);
lean_inc(v_auxDeclNGen_204_);
lean_inc(v_ngen_203_);
lean_inc(v_nextMacroScope_202_);
lean_inc(v_env_201_);
lean_dec(v___x_199_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_238_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
uint64_t v_tid_212_; lean_object* v_traces_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_237_; 
v_tid_212_ = lean_ctor_get_uint64(v_traceState_200_, sizeof(void*)*1);
v_traces_213_ = lean_ctor_get(v_traceState_200_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_traceState_200_);
if (v_isSharedCheck_237_ == 0)
{
v___x_215_ = v_traceState_200_;
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_traces_213_);
lean_dec(v_traceState_200_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_218_; double v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_box(0);
v___x_219_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0);
v___x_220_ = 0;
v___x_221_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1));
v___x_222_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_222_, 0, v_cls_186_);
lean_ctor_set(v___x_222_, 1, v___x_218_);
lean_ctor_set(v___x_222_, 2, v___x_221_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3, v___x_219_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3 + 8, v___x_219_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*3 + 16, v___x_220_);
v___x_223_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2));
v___x_224_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v_a_195_);
lean_ctor_set(v___x_224_, 2, v___x_223_);
lean_inc(v_ref_193_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_ref_193_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = l_Lean_PersistentArray_push___redArg(v_traces_213_, v___x_225_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_226_);
v___x_228_ = v___x_215_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_226_);
lean_ctor_set_uint64(v_reuseFailAlloc_236_, sizeof(void*)*1, v_tid_212_);
v___x_228_ = v_reuseFailAlloc_236_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_230_; 
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 4, v___x_228_);
v___x_230_ = v___x_210_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_env_201_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_nextMacroScope_202_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_ngen_203_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_auxDeclNGen_204_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_235_, 5, v_cache_205_);
lean_ctor_set(v_reuseFailAlloc_235_, 6, v_messages_206_);
lean_ctor_set(v_reuseFailAlloc_235_, 7, v_infoState_207_);
lean_ctor_set(v_reuseFailAlloc_235_, 8, v_snapshotTasks_208_);
v___x_230_ = v_reuseFailAlloc_235_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_231_ = lean_st_ref_put(v___y_191_, v___x_230_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v___x_217_);
v___x_233_ = v___x_197_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_217_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object* v_cls_240_, lean_object* v_msg_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_240_, v_msg_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object* v___x_248_, lean_object* v_xs_249_, lean_object* v_v_250_, lean_object* v_i_251_){
_start:
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = lean_array_get_size(v_xs_249_);
v___x_253_ = lean_nat_dec_lt(v_i_251_, v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
lean_dec(v_i_251_);
lean_dec_ref(v_v_250_);
v___x_254_ = lean_box(0);
return v___x_254_;
}
else
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = lean_array_fget_borrowed(v_xs_249_, v_i_251_);
lean_inc_ref(v_v_250_);
lean_inc(v___x_255_);
v___x_256_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_248_, v___x_255_, v_v_250_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_nat_add(v_i_251_, v___x_257_);
lean_dec(v_i_251_);
v_i_251_ = v___x_258_;
goto _start;
}
else
{
lean_object* v___x_260_; 
lean_dec_ref(v_v_250_);
v___x_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_260_, 0, v_i_251_);
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v___x_261_, lean_object* v_xs_262_, lean_object* v_v_263_, lean_object* v_i_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_261_, v_xs_262_, v_v_263_, v_i_264_);
lean_dec_ref(v_xs_262_);
lean_dec_ref(v___x_261_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object* v___x_266_, lean_object* v_xs_267_, lean_object* v_v_268_){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_266_, v_xs_267_, v_v_268_, v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object* v___x_271_, lean_object* v_xs_272_, lean_object* v_v_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_271_, v_xs_272_, v_v_273_);
lean_dec_ref(v_xs_272_);
lean_dec_ref(v___x_271_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object* v___x_275_, lean_object* v_x_276_, size_t v_x_277_, lean_object* v_x_278_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_object* v_es_279_; lean_object* v___x_280_; size_t v___x_281_; size_t v___x_282_; lean_object* v_j_283_; lean_object* v_entry_284_; 
v_es_279_ = lean_ctor_get(v_x_276_, 0);
v___x_280_ = lean_box(2);
v___x_281_ = ((size_t)31ULL);
v___x_282_ = lean_usize_land(v_x_277_, v___x_281_);
v_j_283_ = lean_usize_to_nat(v___x_282_);
v_entry_284_ = lean_array_get(v___x_280_, v_es_279_, v_j_283_);
switch(lean_obj_tag(v_entry_284_))
{
case 0:
{
lean_object* v_key_285_; uint8_t v___x_286_; 
v_key_285_ = lean_ctor_get(v_entry_284_, 0);
lean_inc(v_key_285_);
lean_dec_ref_known(v_entry_284_, 2);
v___x_286_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_275_, v_x_278_, v_key_285_);
if (v___x_286_ == 0)
{
lean_dec(v_j_283_);
return v_x_276_;
}
else
{
lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_294_; 
lean_inc_ref(v_es_279_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v_x_276_, 0);
lean_dec(v_unused_295_);
v___x_288_ = v_x_276_;
v_isShared_289_ = v_isSharedCheck_294_;
goto v_resetjp_287_;
}
else
{
lean_dec(v_x_276_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_294_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_290_ = lean_array_set(v_es_279_, v_j_283_, v___x_280_);
lean_dec(v_j_283_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_290_);
v___x_292_ = v___x_288_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
case 1:
{
lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_330_; 
lean_inc_ref(v_es_279_);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_x_276_, 0);
lean_dec(v_unused_331_);
v___x_297_ = v_x_276_;
v_isShared_298_ = v_isSharedCheck_330_;
goto v_resetjp_296_;
}
else
{
lean_dec(v_x_276_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_330_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v_node_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_329_; 
v_node_299_ = lean_ctor_get(v_entry_284_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v_entry_284_);
if (v_isSharedCheck_329_ == 0)
{
v___x_301_ = v_entry_284_;
v_isShared_302_ = v_isSharedCheck_329_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_node_299_);
lean_dec(v_entry_284_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_329_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
size_t v___x_303_; lean_object* v_entries_304_; size_t v___x_305_; lean_object* v_newNode_306_; lean_object* v___x_307_; 
v___x_303_ = ((size_t)5ULL);
v_entries_304_ = lean_array_set(v_es_279_, v_j_283_, v___x_280_);
v___x_305_ = lean_usize_shift_right(v_x_277_, v___x_303_);
v_newNode_306_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_275_, v_node_299_, v___x_305_, v_x_278_);
lean_inc_ref(v_newNode_306_);
v___x_307_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_306_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v___x_309_; 
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v_newNode_306_);
v___x_309_ = v___x_301_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_newNode_306_);
v___x_309_ = v_reuseFailAlloc_314_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = lean_array_set(v_entries_304_, v_j_283_, v___x_309_);
lean_dec(v_j_283_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_310_);
v___x_312_ = v___x_297_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
else
{
lean_object* v_val_315_; lean_object* v_fst_316_; lean_object* v_snd_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_328_; 
lean_dec_ref(v_newNode_306_);
lean_del_object(v___x_301_);
v_val_315_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_val_315_);
lean_dec_ref_known(v___x_307_, 1);
v_fst_316_ = lean_ctor_get(v_val_315_, 0);
v_snd_317_ = lean_ctor_get(v_val_315_, 1);
v_isSharedCheck_328_ = !lean_is_exclusive(v_val_315_);
if (v_isSharedCheck_328_ == 0)
{
v___x_319_ = v_val_315_;
v_isShared_320_ = v_isSharedCheck_328_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_snd_317_);
lean_inc(v_fst_316_);
lean_dec(v_val_315_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_328_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_fst_316_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_snd_317_);
v___x_322_ = v_reuseFailAlloc_327_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_323_ = lean_array_set(v_entries_304_, v_j_283_, v___x_322_);
lean_dec(v_j_283_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_323_);
v___x_325_ = v___x_297_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_283_);
lean_dec_ref(v_x_278_);
return v_x_276_;
}
}
}
else
{
lean_object* v_ks_332_; lean_object* v_vs_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_347_; 
v_ks_332_ = lean_ctor_get(v_x_276_, 0);
v_vs_333_ = lean_ctor_get(v_x_276_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_347_ == 0)
{
v___x_335_ = v_x_276_;
v_isShared_336_ = v_isSharedCheck_347_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_vs_333_);
lean_inc(v_ks_332_);
lean_dec(v_x_276_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_347_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; 
v___x_337_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_275_, v_ks_332_, v_x_278_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v___x_339_; 
if (v_isShared_336_ == 0)
{
v___x_339_ = v___x_335_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_ks_332_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_vs_333_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v_val_341_; lean_object* v_keys_x27_342_; lean_object* v_vals_x27_343_; lean_object* v___x_345_; 
v_val_341_ = lean_ctor_get(v___x_337_, 0);
lean_inc_n(v_val_341_, 2);
lean_dec_ref_known(v___x_337_, 1);
v_keys_x27_342_ = l_Array_eraseIdx___redArg(v_ks_332_, v_val_341_);
v_vals_x27_343_ = l_Array_eraseIdx___redArg(v_vs_333_, v_val_341_);
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 1, v_vals_x27_343_);
lean_ctor_set(v___x_335_, 0, v_keys_x27_342_);
v___x_345_ = v___x_335_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_keys_x27_342_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_vals_x27_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object* v___x_348_, lean_object* v_x_349_, lean_object* v_x_350_, lean_object* v_x_351_){
_start:
{
size_t v_x_22521__boxed_352_; lean_object* v_res_353_; 
v_x_22521__boxed_352_ = lean_unbox_usize(v_x_350_);
lean_dec(v_x_350_);
v_res_353_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_348_, v_x_349_, v_x_22521__boxed_352_, v_x_351_);
lean_dec_ref(v___x_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object* v___x_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
uint64_t v___x_357_; size_t v_h_358_; lean_object* v___x_359_; 
lean_inc_ref(v_x_356_);
v___x_357_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_354_, v_x_356_);
v_h_358_ = lean_uint64_to_usize(v___x_357_);
v___x_359_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_354_, v_x_355_, v_h_358_, v_x_356_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object* v___x_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_360_, v_x_361_, v_x_362_);
lean_dec_ref(v___x_360_);
return v_res_363_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_375_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_376_ = l_Lean_Name_append(v___x_375_, v___x_374_);
return v___x_376_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7));
v___x_379_ = l_Lean_stringToMessageData(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object* v_as_x27_380_, lean_object* v_b_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
if (lean_obj_tag(v_as_x27_380_) == 0)
{
lean_object* v___x_393_; 
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v_b_381_);
return v___x_393_;
}
else
{
lean_object* v_head_394_; lean_object* v_tail_395_; lean_object* v___x_396_; lean_object* v___y_398_; uint8_t v_a_438_; uint8_t v___x_452_; 
v_head_394_ = lean_ctor_get(v_as_x27_380_, 0);
v_tail_395_ = lean_ctor_get(v_as_x27_380_, 1);
v___x_396_ = lean_box(0);
v___x_452_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_394_);
if (v___x_452_ == 0)
{
v_a_438_ = v___x_452_;
goto v___jp_437_;
}
else
{
lean_object* v___x_453_; 
lean_inc(v_head_394_);
v___x_453_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_394_, v___y_382_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; uint8_t v___x_455_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___x_453_, 1);
v___x_455_ = lean_unbox(v_a_454_);
lean_dec(v_a_454_);
v_a_438_ = v___x_455_;
goto v___jp_437_;
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_453_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_453_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
v___jp_397_:
{
lean_object* v___x_399_; lean_object* v_toGoalState_400_; lean_object* v_mvarId_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_436_; 
v___x_399_ = lean_st_ref_take(v___y_398_);
v_toGoalState_400_ = lean_ctor_get(v___x_399_, 0);
v_mvarId_401_ = lean_ctor_get(v___x_399_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_436_ == 0)
{
v___x_403_ = v___x_399_;
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_mvarId_401_);
lean_inc(v_toGoalState_400_);
lean_dec(v___x_399_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_nextDeclIdx_405_; lean_object* v_enodeMap_406_; lean_object* v_exprs_407_; lean_object* v_parents_408_; lean_object* v_congrTable_409_; lean_object* v_appMap_410_; lean_object* v_indicesFound_411_; lean_object* v_newFacts_412_; uint8_t v_inconsistent_413_; lean_object* v_nextIdx_414_; lean_object* v_newRawFacts_415_; lean_object* v_facts_416_; lean_object* v_extThms_417_; lean_object* v_ematch_418_; lean_object* v_inj_419_; lean_object* v_split_420_; lean_object* v_clean_421_; lean_object* v_sstates_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_435_; 
v_nextDeclIdx_405_ = lean_ctor_get(v_toGoalState_400_, 0);
v_enodeMap_406_ = lean_ctor_get(v_toGoalState_400_, 1);
v_exprs_407_ = lean_ctor_get(v_toGoalState_400_, 2);
v_parents_408_ = lean_ctor_get(v_toGoalState_400_, 3);
v_congrTable_409_ = lean_ctor_get(v_toGoalState_400_, 4);
v_appMap_410_ = lean_ctor_get(v_toGoalState_400_, 5);
v_indicesFound_411_ = lean_ctor_get(v_toGoalState_400_, 6);
v_newFacts_412_ = lean_ctor_get(v_toGoalState_400_, 7);
v_inconsistent_413_ = lean_ctor_get_uint8(v_toGoalState_400_, sizeof(void*)*17);
v_nextIdx_414_ = lean_ctor_get(v_toGoalState_400_, 8);
v_newRawFacts_415_ = lean_ctor_get(v_toGoalState_400_, 9);
v_facts_416_ = lean_ctor_get(v_toGoalState_400_, 10);
v_extThms_417_ = lean_ctor_get(v_toGoalState_400_, 11);
v_ematch_418_ = lean_ctor_get(v_toGoalState_400_, 12);
v_inj_419_ = lean_ctor_get(v_toGoalState_400_, 13);
v_split_420_ = lean_ctor_get(v_toGoalState_400_, 14);
v_clean_421_ = lean_ctor_get(v_toGoalState_400_, 15);
v_sstates_422_ = lean_ctor_get(v_toGoalState_400_, 16);
v_isSharedCheck_435_ = !lean_is_exclusive(v_toGoalState_400_);
if (v_isSharedCheck_435_ == 0)
{
v___x_424_ = v_toGoalState_400_;
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_sstates_422_);
lean_inc(v_clean_421_);
lean_inc(v_split_420_);
lean_inc(v_inj_419_);
lean_inc(v_ematch_418_);
lean_inc(v_extThms_417_);
lean_inc(v_facts_416_);
lean_inc(v_newRawFacts_415_);
lean_inc(v_nextIdx_414_);
lean_inc(v_newFacts_412_);
lean_inc(v_indicesFound_411_);
lean_inc(v_appMap_410_);
lean_inc(v_congrTable_409_);
lean_inc(v_parents_408_);
lean_inc(v_exprs_407_);
lean_inc(v_enodeMap_406_);
lean_inc(v_nextDeclIdx_405_);
lean_dec(v_toGoalState_400_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_428_; 
lean_inc(v_head_394_);
v___x_426_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v_enodeMap_406_, v_congrTable_409_, v_head_394_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 4, v___x_426_);
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_nextDeclIdx_405_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_enodeMap_406_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_exprs_407_);
lean_ctor_set(v_reuseFailAlloc_434_, 3, v_parents_408_);
lean_ctor_set(v_reuseFailAlloc_434_, 4, v___x_426_);
lean_ctor_set(v_reuseFailAlloc_434_, 5, v_appMap_410_);
lean_ctor_set(v_reuseFailAlloc_434_, 6, v_indicesFound_411_);
lean_ctor_set(v_reuseFailAlloc_434_, 7, v_newFacts_412_);
lean_ctor_set(v_reuseFailAlloc_434_, 8, v_nextIdx_414_);
lean_ctor_set(v_reuseFailAlloc_434_, 9, v_newRawFacts_415_);
lean_ctor_set(v_reuseFailAlloc_434_, 10, v_facts_416_);
lean_ctor_set(v_reuseFailAlloc_434_, 11, v_extThms_417_);
lean_ctor_set(v_reuseFailAlloc_434_, 12, v_ematch_418_);
lean_ctor_set(v_reuseFailAlloc_434_, 13, v_inj_419_);
lean_ctor_set(v_reuseFailAlloc_434_, 14, v_split_420_);
lean_ctor_set(v_reuseFailAlloc_434_, 15, v_clean_421_);
lean_ctor_set(v_reuseFailAlloc_434_, 16, v_sstates_422_);
lean_ctor_set_uint8(v_reuseFailAlloc_434_, sizeof(void*)*17, v_inconsistent_413_);
v___x_428_ = v_reuseFailAlloc_434_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_430_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_428_);
v___x_430_ = v___x_403_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_mvarId_401_);
v___x_430_ = v_reuseFailAlloc_433_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; 
v___x_431_ = lean_st_ref_put(v___y_398_, v___x_430_);
v_as_x27_380_ = v_tail_395_;
v_b_381_ = v___x_396_;
goto _start;
}
}
}
}
}
v___jp_437_:
{
if (v_a_438_ == 0)
{
v_as_x27_380_ = v_tail_395_;
v_b_381_ = v___x_396_;
goto _start;
}
else
{
lean_object* v_toCold_440_; lean_object* v_options_441_; uint8_t v_hasTrace_442_; 
v_toCold_440_ = lean_ctor_get(v___y_390_, 0);
v_options_441_ = lean_ctor_get(v_toCold_440_, 2);
v_hasTrace_442_ = lean_ctor_get_uint8(v_options_441_, sizeof(void*)*1);
if (v_hasTrace_442_ == 0)
{
v___y_398_ = v___y_382_;
goto v___jp_397_;
}
else
{
lean_object* v_inheritedTraceOptions_443_; lean_object* v___x_444_; lean_object* v___x_445_; uint8_t v___x_446_; 
v_inheritedTraceOptions_443_ = lean_ctor_get(v_toCold_440_, 11);
v___x_444_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_445_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_446_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_443_, v_options_441_, v___x_445_);
if (v___x_446_ == 0)
{
v___y_398_ = v___y_382_;
goto v___jp_397_;
}
else
{
lean_object* v___x_447_; 
v___x_447_ = l_Lean_Meta_Grind_updateLastTag(v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec_ref_known(v___x_447_, 1);
v___x_448_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8);
lean_inc(v_head_394_);
v___x_449_ = l_Lean_MessageData_ofExpr(v_head_394_);
v___x_450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_444_, v___x_450_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_dec_ref_known(v___x_451_, 1);
v___y_398_ = v___y_382_;
goto v___jp_397_;
}
else
{
return v___x_451_;
}
}
else
{
return v___x_447_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object* v_as_x27_464_, lean_object* v_b_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_464_, v_b_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec(v___y_466_);
lean_dec(v_as_x27_464_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object* v_root_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Lean_Meta_Grind_getParents___redArg(v_root_478_, v_a_479_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
v___x_492_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_491_);
v___x_493_ = lean_box(0);
v___x_494_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v___x_492_, v___x_493_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v___x_492_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; 
v_unused_502_ = lean_ctor_get(v___x_494_, 0);
lean_dec(v_unused_502_);
v___x_496_ = v___x_494_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_dec(v___x_494_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 0, v_a_491_);
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_491_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_a_491_);
v_a_503_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_494_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_494_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object* v_root_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_root_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_a_515_);
lean_dec_ref(v_a_514_);
lean_dec(v_a_513_);
lean_dec(v_a_512_);
lean_dec_ref(v_root_511_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object* v___x_524_, lean_object* v_00_u03b2_525_, lean_object* v_x_526_, lean_object* v_x_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_524_, v_x_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object* v___x_529_, lean_object* v_00_u03b2_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(v___x_529_, v_00_u03b2_530_, v_x_531_, v_x_532_);
lean_dec_ref(v___x_529_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object* v_cls_534_, lean_object* v_msg_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_534_, v_msg_535_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object* v_cls_548_, lean_object* v_msg_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(v_cls_548_, v_msg_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec(v___y_550_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object* v_as_562_, lean_object* v_as_x27_563_, lean_object* v_b_564_, lean_object* v_a_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_563_, v_b_564_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object* v_as_578_, lean_object* v_as_x27_579_, lean_object* v_b_580_, lean_object* v_a_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(v_as_578_, v_as_x27_579_, v_b_580_, v_a_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec(v___y_582_);
lean_dec(v_as_x27_579_);
lean_dec(v_as_578_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object* v___x_594_, lean_object* v_00_u03b2_595_, lean_object* v_x_596_, size_t v_x_597_, lean_object* v_x_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_594_, v_x_596_, v_x_597_, v_x_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object* v___x_600_, lean_object* v_00_u03b2_601_, lean_object* v_x_602_, lean_object* v_x_603_, lean_object* v_x_604_){
_start:
{
size_t v_x_22983__boxed_605_; lean_object* v_res_606_; 
v_x_22983__boxed_605_ = lean_unbox_usize(v_x_603_);
lean_dec(v_x_603_);
v_res_606_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(v___x_600_, v_00_u03b2_601_, v_x_602_, v_x_22983__boxed_605_, v_x_604_);
lean_dec_ref(v___x_600_);
return v_res_606_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0));
v___x_609_ = l_Lean_stringToMessageData(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object* v_as_x27_610_, lean_object* v_b_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
if (lean_obj_tag(v_as_x27_610_) == 0)
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v_b_611_);
return v___x_623_;
}
else
{
lean_object* v_head_624_; lean_object* v_tail_625_; lean_object* v___x_626_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; uint8_t v_a_641_; uint8_t v___x_655_; 
v_head_624_ = lean_ctor_get(v_as_x27_610_, 0);
v_tail_625_ = lean_ctor_get(v_as_x27_610_, 1);
v___x_626_ = lean_box(0);
v___x_655_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_624_);
if (v___x_655_ == 0)
{
v_a_641_ = v___x_655_;
goto v___jp_640_;
}
else
{
lean_object* v___x_656_; 
lean_inc(v_head_624_);
v___x_656_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_624_, v___y_612_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; uint8_t v___x_658_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_656_, 1);
v___x_658_ = lean_unbox(v_a_657_);
lean_dec(v_a_657_);
v_a_641_ = v___x_658_;
goto v___jp_640_;
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
v_a_659_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_656_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_656_);
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
}
v___jp_627_:
{
lean_object* v___x_638_; 
lean_inc(v_head_624_);
v___x_638_ = l_Lean_Meta_Grind_addCongrTable(v_head_624_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_dec_ref_known(v___x_638_, 1);
v_as_x27_610_ = v_tail_625_;
v_b_611_ = v___x_626_;
goto _start;
}
else
{
return v___x_638_;
}
}
v___jp_640_:
{
if (v_a_641_ == 0)
{
v_as_x27_610_ = v_tail_625_;
v_b_611_ = v___x_626_;
goto _start;
}
else
{
lean_object* v_toCold_643_; lean_object* v_options_644_; uint8_t v_hasTrace_645_; 
v_toCold_643_ = lean_ctor_get(v___y_620_, 0);
v_options_644_ = lean_ctor_get(v_toCold_643_, 2);
v_hasTrace_645_ = lean_ctor_get_uint8(v_options_644_, sizeof(void*)*1);
if (v_hasTrace_645_ == 0)
{
v___y_628_ = v___y_612_;
v___y_629_ = v___y_613_;
v___y_630_ = v___y_614_;
v___y_631_ = v___y_615_;
v___y_632_ = v___y_616_;
v___y_633_ = v___y_617_;
v___y_634_ = v___y_618_;
v___y_635_ = v___y_619_;
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
goto v___jp_627_;
}
else
{
lean_object* v_inheritedTraceOptions_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v_inheritedTraceOptions_646_ = lean_ctor_get(v_toCold_643_, 11);
v___x_647_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_648_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_649_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_646_, v_options_644_, v___x_648_);
if (v___x_649_ == 0)
{
v___y_628_ = v___y_612_;
v___y_629_ = v___y_613_;
v___y_630_ = v___y_614_;
v___y_631_ = v___y_615_;
v___y_632_ = v___y_616_;
v___y_633_ = v___y_617_;
v___y_634_ = v___y_618_;
v___y_635_ = v___y_619_;
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
goto v___jp_627_;
}
else
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_Meta_Grind_updateLastTag(v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
lean_dec_ref_known(v___x_650_, 1);
v___x_651_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1);
lean_inc(v_head_624_);
v___x_652_ = l_Lean_MessageData_ofExpr(v_head_624_);
v___x_653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_647_, v___x_653_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_dec_ref_known(v___x_654_, 1);
v___y_628_ = v___y_612_;
v___y_629_ = v___y_613_;
v___y_630_ = v___y_614_;
v___y_631_ = v___y_615_;
v___y_632_ = v___y_616_;
v___y_633_ = v___y_617_;
v___y_634_ = v___y_618_;
v___y_635_ = v___y_619_;
v___y_636_ = v___y_620_;
v___y_637_ = v___y_621_;
goto v___jp_627_;
}
else
{
return v___x_654_;
}
}
else
{
return v___x_650_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object* v_as_x27_667_, lean_object* v_b_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_667_, v_b_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec(v___y_669_);
lean_dec(v_as_x27_667_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object* v_parents_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = l_Lean_Meta_Grind_ParentSet_elems(v_parents_681_);
v___x_694_ = lean_box(0);
v___x_695_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v___x_693_, v___x_694_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_);
lean_dec(v___x_693_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_702_ == 0)
{
lean_object* v_unused_703_; 
v_unused_703_ = lean_ctor_get(v___x_695_, 0);
lean_dec(v_unused_703_);
v___x_697_ = v___x_695_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_dec(v___x_695_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_694_);
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_694_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
else
{
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object* v_parents_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v_parents_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
lean_dec(v_a_708_);
lean_dec_ref(v_a_707_);
lean_dec(v_a_706_);
lean_dec(v_a_705_);
lean_dec(v_parents_704_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object* v_as_717_, lean_object* v_as_x27_718_, lean_object* v_b_719_, lean_object* v_a_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_718_, v_b_719_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object* v_as_733_, lean_object* v_as_x27_734_, lean_object* v_b_735_, lean_object* v_a_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(v_as_733_, v_as_x27_734_, v_b_735_, v_a_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec(v___y_737_);
lean_dec(v_as_x27_734_);
lean_dec(v_as_733_);
return v_res_748_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_749_, lean_object* v_i_750_, lean_object* v_k_751_){
_start:
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = lean_array_get_size(v_keys_749_);
v___x_753_ = lean_nat_dec_lt(v_i_750_, v___x_752_);
if (v___x_753_ == 0)
{
lean_dec(v_i_750_);
return v___x_753_;
}
else
{
lean_object* v_k_x27_754_; uint8_t v___x_755_; 
v_k_x27_754_ = lean_array_fget_borrowed(v_keys_749_, v_i_750_);
v___x_755_ = l_Lean_instBEqMVarId_beq(v_k_751_, v_k_x27_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lean_unsigned_to_nat(1u);
v___x_757_ = lean_nat_add(v_i_750_, v___x_756_);
lean_dec(v_i_750_);
v_i_750_ = v___x_757_;
goto _start;
}
else
{
lean_dec(v_i_750_);
return v___x_753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_759_, lean_object* v_i_760_, lean_object* v_k_761_){
_start:
{
uint8_t v_res_762_; lean_object* v_r_763_; 
v_res_762_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_759_, v_i_760_, v_k_761_);
lean_dec(v_k_761_);
lean_dec_ref(v_keys_759_);
v_r_763_ = lean_box(v_res_762_);
return v_r_763_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object* v_x_764_, size_t v_x_765_, lean_object* v_x_766_){
_start:
{
if (lean_obj_tag(v_x_764_) == 0)
{
lean_object* v_es_767_; lean_object* v___x_768_; size_t v___x_769_; size_t v___x_770_; lean_object* v_j_771_; lean_object* v___x_772_; 
v_es_767_ = lean_ctor_get(v_x_764_, 0);
v___x_768_ = lean_box(2);
v___x_769_ = ((size_t)31ULL);
v___x_770_ = lean_usize_land(v_x_765_, v___x_769_);
v_j_771_ = lean_usize_to_nat(v___x_770_);
v___x_772_ = lean_array_get_borrowed(v___x_768_, v_es_767_, v_j_771_);
lean_dec(v_j_771_);
switch(lean_obj_tag(v___x_772_))
{
case 0:
{
lean_object* v_key_773_; uint8_t v___x_774_; 
v_key_773_ = lean_ctor_get(v___x_772_, 0);
v___x_774_ = l_Lean_instBEqMVarId_beq(v_x_766_, v_key_773_);
return v___x_774_;
}
case 1:
{
lean_object* v_node_775_; size_t v___x_776_; size_t v___x_777_; 
v_node_775_ = lean_ctor_get(v___x_772_, 0);
v___x_776_ = ((size_t)5ULL);
v___x_777_ = lean_usize_shift_right(v_x_765_, v___x_776_);
v_x_764_ = v_node_775_;
v_x_765_ = v___x_777_;
goto _start;
}
default: 
{
uint8_t v___x_779_; 
v___x_779_ = 0;
return v___x_779_;
}
}
}
else
{
lean_object* v_ks_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v_ks_780_ = lean_ctor_get(v_x_764_, 0);
v___x_781_ = lean_unsigned_to_nat(0u);
v___x_782_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_780_, v___x_781_, v_x_766_);
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
size_t v_x_9682__boxed_786_; uint8_t v_res_787_; lean_object* v_r_788_; 
v_x_9682__boxed_786_ = lean_unbox_usize(v_x_784_);
lean_dec(v_x_784_);
v_res_787_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_783_, v_x_9682__boxed_786_, v_x_785_);
lean_dec(v_x_785_);
lean_dec_ref(v_x_783_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object* v_x_789_, lean_object* v_x_790_){
_start:
{
uint64_t v___x_791_; size_t v___x_792_; uint8_t v___x_793_; 
v___x_791_ = l_Lean_instHashableMVarId_hash(v_x_790_);
v___x_792_ = lean_uint64_to_usize(v___x_791_);
v___x_793_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_789_, v___x_792_, v_x_790_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object* v_x_794_, lean_object* v_x_795_){
_start:
{
uint8_t v_res_796_; lean_object* v_r_797_; 
v_res_796_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_794_, v_x_795_);
lean_dec(v_x_795_);
lean_dec_ref(v_x_794_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object* v_mvarId_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; lean_object* v_mctx_802_; lean_object* v_eAssignment_803_; uint8_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_801_ = lean_st_ref_get(v___y_799_);
v_mctx_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc_ref(v_mctx_802_);
lean_dec(v___x_801_);
v_eAssignment_803_ = lean_ctor_get(v_mctx_802_, 8);
lean_inc_ref(v_eAssignment_803_);
lean_dec_ref(v_mctx_802_);
v___x_804_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_eAssignment_803_, v_mvarId_798_);
lean_dec_ref(v_eAssignment_803_);
v___x_805_ = lean_box(v___x_804_);
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object* v_mvarId_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec(v_mvarId_807_);
return v_res_810_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_box(0);
v___x_817_ = l_unsafeCast___redArg(v___x_816_);
return v___x_817_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = lean_box(0);
v___x_819_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3);
v___x_820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
lean_ctor_set(v___x_820_, 1, v___x_818_);
return v___x_820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_821_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4);
v___x_822_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2));
v___x_823_ = l_Lean_mkConst(v___x_822_, v___x_821_);
return v___x_823_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_box(0);
v___x_830_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8));
v___x_831_ = l_Lean_mkConst(v___x_830_, v___x_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v___x_843_; lean_object* v_mvarId_844_; lean_object* v___x_845_; lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_899_; 
v___x_843_ = lean_st_ref_get(v_a_832_);
v_mvarId_844_ = lean_ctor_get(v___x_843_, 1);
lean_inc(v_mvarId_844_);
lean_dec(v___x_843_);
v___x_845_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_844_, v_a_839_);
lean_dec(v_mvarId_844_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_899_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_899_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_899_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
uint8_t v___x_850_; 
v___x_850_ = lean_unbox(v_a_846_);
lean_dec(v_a_846_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
lean_del_object(v___x_848_);
v___x_851_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_836_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_852_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_855_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v___x_855_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_836_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_857_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_836_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5);
v___x_860_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__9);
v___x_861_ = l_Lean_mkApp4(v___x_859_, v_a_856_, v_a_858_, v_a_854_, v___x_860_);
v___x_862_ = l_Lean_Meta_Grind_closeGoal(v___x_861_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_);
return v___x_862_;
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_a_856_);
lean_dec(v_a_854_);
v_a_863_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_857_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_857_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v_a_854_);
v_a_871_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_855_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_855_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v_a_879_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_853_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_853_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
v_a_887_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_851_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_851_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
else
{
lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_895_ = lean_box(0);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_895_);
v___x_897_ = v___x_848_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_a_901_);
lean_dec(v_a_900_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object* v_mvarId_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_912_, v___y_920_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object* v_mvarId_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(v_mvarId_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec(v___y_926_);
lean_dec(v_mvarId_925_);
return v_res_937_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object* v_00_u03b2_938_, lean_object* v_x_939_, lean_object* v_x_940_){
_start:
{
uint8_t v___x_941_; 
v___x_941_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_939_, v_x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_942_, lean_object* v_x_943_, lean_object* v_x_944_){
_start:
{
uint8_t v_res_945_; lean_object* v_r_946_; 
v_res_945_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(v_00_u03b2_942_, v_x_943_, v_x_944_);
lean_dec(v_x_944_);
lean_dec_ref(v_x_943_);
v_r_946_ = lean_box(v_res_945_);
return v_r_946_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_947_, lean_object* v_x_948_, size_t v_x_949_, lean_object* v_x_950_){
_start:
{
uint8_t v___x_951_; 
v___x_951_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_948_, v_x_949_, v_x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_952_, lean_object* v_x_953_, lean_object* v_x_954_, lean_object* v_x_955_){
_start:
{
size_t v_x_9971__boxed_956_; uint8_t v_res_957_; lean_object* v_r_958_; 
v_x_9971__boxed_956_ = lean_unbox_usize(v_x_954_);
lean_dec(v_x_954_);
v_res_957_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(v_00_u03b2_952_, v_x_953_, v_x_9971__boxed_956_, v_x_955_);
lean_dec(v_x_955_);
lean_dec_ref(v_x_953_);
v_r_958_ = lean_box(v_res_957_);
return v_r_958_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_959_, lean_object* v_keys_960_, lean_object* v_vals_961_, lean_object* v_heq_962_, lean_object* v_i_963_, lean_object* v_k_964_){
_start:
{
uint8_t v___x_965_; 
v___x_965_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_960_, v_i_963_, v_k_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_966_, lean_object* v_keys_967_, lean_object* v_vals_968_, lean_object* v_heq_969_, lean_object* v_i_970_, lean_object* v_k_971_){
_start:
{
uint8_t v_res_972_; lean_object* v_r_973_; 
v_res_972_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_966_, v_keys_967_, v_vals_968_, v_heq_969_, v_i_970_, v_k_971_);
lean_dec(v_k_971_);
lean_dec_ref(v_vals_968_);
lean_dec_ref(v_keys_967_);
v_r_973_ = lean_box(v_res_972_);
return v_r_973_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_box(0);
v___x_978_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1));
v___x_979_ = l_Lean_mkConst(v___x_978_, v___x_977_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object* v_lhs_980_, lean_object* v_rhs_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_993_; 
lean_inc_ref(v_rhs_981_);
lean_inc_ref(v_lhs_980_);
v___x_993_ = l_Lean_Meta_mkEq(v_lhs_980_, v_rhs_981_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_995_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
lean_inc(v_a_991_);
lean_inc_ref(v_a_990_);
lean_inc(v_a_989_);
lean_inc_ref(v_a_988_);
lean_inc(v_a_987_);
lean_inc_ref(v_a_986_);
lean_inc(v_a_985_);
lean_inc_ref(v_a_984_);
lean_inc(v_a_983_);
lean_inc(v_a_982_);
v___x_995_ = lean_grind_mk_eq_proof(v_lhs_980_, v_rhs_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
lean_inc(v_a_994_);
v___x_997_ = l_Lean_Meta_mkDecide(v_a_994_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2);
v___x_1000_ = l_Lean_Expr_appArg_x21(v_a_998_);
lean_dec(v_a_998_);
v___x_1001_ = l_Lean_eagerReflBoolFalse;
lean_inc(v_a_994_);
v___x_1002_ = l_Lean_mkApp3(v___x_999_, v_a_994_, v___x_1000_, v___x_1001_);
v___x_1003_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_986_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v___x_1003_, 1);
v___x_1005_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5);
v___x_1006_ = l_Lean_mkApp4(v___x_1005_, v_a_994_, v_a_1004_, v___x_1002_, v_a_996_);
v___x_1007_ = l_Lean_Meta_Grind_closeGoal(v___x_1006_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
return v___x_1007_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_dec_ref(v___x_1002_);
lean_dec(v_a_996_);
lean_dec(v_a_994_);
v_a_1008_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1003_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1003_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_a_996_);
lean_dec(v_a_994_);
v_a_1016_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_997_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_997_);
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
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v_a_994_);
v_a_1024_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_995_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_995_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec_ref(v_rhs_981_);
lean_dec_ref(v_lhs_980_);
v_a_1032_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_993_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_993_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object* v_lhs_1040_, lean_object* v_rhs_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_lhs_1040_, v_rhs_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
lean_dec(v_a_1051_);
lean_dec_ref(v_a_1050_);
lean_dec(v_a_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_a_1047_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec(v_a_1042_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object* v___x_1054_, lean_object* v_as_x27_1055_, lean_object* v_b_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
if (lean_obj_tag(v_as_x27_1055_) == 0)
{
lean_object* v___x_1068_; 
lean_dec(v___x_1054_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_b_1056_);
return v___x_1068_;
}
else
{
lean_object* v_head_1069_; lean_object* v_tail_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_head_1069_ = lean_ctor_get(v_as_x27_1055_, 0);
v_tail_1070_ = lean_ctor_get(v_as_x27_1055_, 1);
v___x_1071_ = lean_box(0);
v___x_1072_ = lean_st_ref_get(v___y_1057_);
lean_inc(v_head_1069_);
v___x_1073_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1072_, v_head_1069_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___x_1072_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v_self_1075_; lean_object* v_next_1076_; lean_object* v_root_1077_; lean_object* v_congr_1078_; lean_object* v_target_x3f_1079_; lean_object* v_proof_x3f_1080_; uint8_t v_flipped_1081_; lean_object* v_size_1082_; uint8_t v_interpreted_1083_; uint8_t v_ctor_1084_; uint8_t v_hasLambdas_1085_; uint8_t v_heqProofs_1086_; lean_object* v_idx_1087_; lean_object* v_generation_1088_; lean_object* v_mt_1089_; lean_object* v_sTerms_1090_; uint8_t v_funCC_1091_; lean_object* v_ematchDiagSource_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1104_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v_self_1075_ = lean_ctor_get(v_a_1074_, 0);
v_next_1076_ = lean_ctor_get(v_a_1074_, 1);
v_root_1077_ = lean_ctor_get(v_a_1074_, 2);
v_congr_1078_ = lean_ctor_get(v_a_1074_, 3);
v_target_x3f_1079_ = lean_ctor_get(v_a_1074_, 4);
v_proof_x3f_1080_ = lean_ctor_get(v_a_1074_, 5);
v_flipped_1081_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12);
v_size_1082_ = lean_ctor_get(v_a_1074_, 6);
v_interpreted_1083_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12 + 1);
v_ctor_1084_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12 + 2);
v_hasLambdas_1085_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12 + 3);
v_heqProofs_1086_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12 + 4);
v_idx_1087_ = lean_ctor_get(v_a_1074_, 7);
v_generation_1088_ = lean_ctor_get(v_a_1074_, 8);
v_mt_1089_ = lean_ctor_get(v_a_1074_, 9);
v_sTerms_1090_ = lean_ctor_get(v_a_1074_, 10);
v_funCC_1091_ = lean_ctor_get_uint8(v_a_1074_, sizeof(void*)*12 + 5);
v_ematchDiagSource_1092_ = lean_ctor_get(v_a_1074_, 11);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_a_1074_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1094_ = v_a_1074_;
v_isShared_1095_ = v_isSharedCheck_1104_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_ematchDiagSource_1092_);
lean_inc(v_sTerms_1090_);
lean_inc(v_mt_1089_);
lean_inc(v_generation_1088_);
lean_inc(v_idx_1087_);
lean_inc(v_size_1082_);
lean_inc(v_proof_x3f_1080_);
lean_inc(v_target_x3f_1079_);
lean_inc(v_congr_1078_);
lean_inc(v_root_1077_);
lean_inc(v_next_1076_);
lean_inc(v_self_1075_);
lean_dec(v_a_1074_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1104_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
uint8_t v___x_1096_; 
v___x_1096_ = lean_nat_dec_lt(v_mt_1089_, v___x_1054_);
lean_dec(v_mt_1089_);
if (v___x_1096_ == 0)
{
lean_del_object(v___x_1094_);
lean_dec(v_ematchDiagSource_1092_);
lean_dec(v_sTerms_1090_);
lean_dec(v_generation_1088_);
lean_dec(v_idx_1087_);
lean_dec(v_size_1082_);
lean_dec(v_proof_x3f_1080_);
lean_dec(v_target_x3f_1079_);
lean_dec_ref(v_congr_1078_);
lean_dec_ref(v_root_1077_);
lean_dec_ref(v_next_1076_);
lean_dec_ref(v_self_1075_);
v_as_x27_1055_ = v_tail_1070_;
v_b_1056_ = v___x_1071_;
goto _start;
}
else
{
lean_object* v___x_1099_; 
lean_inc(v___x_1054_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 9, v___x_1054_);
v___x_1099_ = v___x_1094_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_self_1075_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_next_1076_);
lean_ctor_set(v_reuseFailAlloc_1103_, 2, v_root_1077_);
lean_ctor_set(v_reuseFailAlloc_1103_, 3, v_congr_1078_);
lean_ctor_set(v_reuseFailAlloc_1103_, 4, v_target_x3f_1079_);
lean_ctor_set(v_reuseFailAlloc_1103_, 5, v_proof_x3f_1080_);
lean_ctor_set(v_reuseFailAlloc_1103_, 6, v_size_1082_);
lean_ctor_set(v_reuseFailAlloc_1103_, 7, v_idx_1087_);
lean_ctor_set(v_reuseFailAlloc_1103_, 8, v_generation_1088_);
lean_ctor_set(v_reuseFailAlloc_1103_, 9, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1103_, 10, v_sTerms_1090_);
lean_ctor_set(v_reuseFailAlloc_1103_, 11, v_ematchDiagSource_1092_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12, v_flipped_1081_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12 + 1, v_interpreted_1083_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12 + 2, v_ctor_1084_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12 + 3, v_hasLambdas_1085_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12 + 4, v_heqProofs_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1103_, sizeof(void*)*12 + 5, v_funCC_1091_);
v___x_1099_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_1100_; 
lean_inc(v_head_1069_);
v___x_1100_ = l_Lean_Meta_Grind_setENode___redArg(v_head_1069_, v___x_1099_, v___y_1057_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v___x_1101_; 
lean_dec_ref_known(v___x_1100_, 1);
v___x_1101_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_head_1069_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_dec_ref_known(v___x_1101_, 1);
v_as_x27_1055_ = v_tail_1070_;
v_b_1056_ = v___x_1071_;
goto _start;
}
else
{
lean_dec(v___x_1054_);
return v___x_1101_;
}
}
else
{
lean_dec(v___x_1054_);
return v___x_1100_;
}
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v___x_1054_);
v_a_1105_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1073_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1073_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object* v_root_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v___x_1125_; lean_object* v_toGoalState_1126_; lean_object* v_ematch_1127_; lean_object* v_gmt_1128_; lean_object* v___x_1129_; 
v___x_1125_ = lean_st_ref_get(v_a_1114_);
v_toGoalState_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc_ref(v_toGoalState_1126_);
lean_dec(v___x_1125_);
v_ematch_1127_ = lean_ctor_get(v_toGoalState_1126_, 12);
lean_inc_ref(v_ematch_1127_);
lean_dec_ref(v_toGoalState_1126_);
v_gmt_1128_ = lean_ctor_get(v_ematch_1127_, 1);
lean_inc(v_gmt_1128_);
lean_dec_ref(v_ematch_1127_);
v___x_1129_ = l_Lean_Meta_Grind_getParents___redArg(v_root_1113_, v_a_1114_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1130_);
lean_dec_ref_known(v___x_1129_, 1);
v___x_1131_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1130_);
lean_dec(v_a_1130_);
v___x_1132_ = lean_box(0);
v___x_1133_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v_gmt_1128_, v___x_1131_, v___x_1132_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v___x_1131_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; 
v_unused_1141_ = lean_ctor_get(v___x_1133_, 0);
lean_dec(v_unused_1141_);
v___x_1135_ = v___x_1133_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_dec(v___x_1133_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1132_);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1132_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
else
{
return v___x_1133_;
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_gmt_1128_);
v_a_1142_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1129_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1129_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object* v_root_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_root_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
lean_dec(v_a_1156_);
lean_dec_ref(v_a_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_a_1153_);
lean_dec(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_root_1150_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object* v___x_1163_, lean_object* v_as_x27_1164_, lean_object* v_b_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1163_, v_as_x27_1164_, v_b_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec(v_as_x27_1164_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object* v___x_1178_, lean_object* v_as_1179_, lean_object* v_as_x27_1180_, lean_object* v_b_1181_, lean_object* v_a_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1178_, v_as_x27_1180_, v_b_1181_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object* v___x_1195_, lean_object* v_as_1196_, lean_object* v_as_x27_1197_, lean_object* v_b_1198_, lean_object* v_a_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(v___x_1195_, v_as_1196_, v_as_x27_1197_, v_b_1198_, v_a_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec(v_as_x27_1197_);
lean_dec(v_as_1196_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
if (lean_obj_tag(v_a_1212_) == 0)
{
lean_object* v___x_1214_; 
v___x_1214_ = l_List_reverse___redArg(v_a_1213_);
return v___x_1214_;
}
else
{
lean_object* v_head_1215_; lean_object* v_tail_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1225_; 
v_head_1215_ = lean_ctor_get(v_a_1212_, 0);
v_tail_1216_ = lean_ctor_get(v_a_1212_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_a_1212_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1218_ = v_a_1212_;
v_isShared_1219_ = v_isSharedCheck_1225_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_tail_1216_);
lean_inc(v_head_1215_);
lean_dec(v_a_1212_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1225_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1220_ = l_Lean_MessageData_ofExpr(v_head_1215_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v_a_1213_);
lean_ctor_set(v___x_1218_, 0, v___x_1220_);
v___x_1222_ = v___x_1218_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_a_1213_);
v___x_1222_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v_a_1212_ = v_tail_1216_;
v_a_1213_ = v___x_1222_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(lean_object* v_snd_1226_, lean_object* v_a_1227_, lean_object* v_fst_1228_, lean_object* v_a_1229_, lean_object* v_lams_1230_, lean_object* v_____r_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lean_Meta_Grind_isEqv___redArg(v_snd_1226_, v_a_1229_, v___y_1232_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; uint8_t v___x_1282_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v___x_1282_ = lean_unbox(v_a_1281_);
lean_dec(v_a_1281_);
if (v___x_1282_ == 0)
{
goto v___jp_1243_;
}
else
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_inc(v_fst_1228_);
v___x_1283_ = l_Array_reverse___redArg(v_fst_1228_);
lean_inc(v_snd_1226_);
v___x_1284_ = l_Lean_Meta_Grind_propagateBetaEqs(v_lams_1230_, v_snd_1226_, v___x_1283_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_dec_ref_known(v___x_1284_, 1);
goto v___jp_1243_;
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_fst_1228_);
lean_dec(v_snd_1226_);
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1284_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_fst_1228_);
lean_dec(v_snd_1226_);
v_a_1293_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1280_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1280_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
v___jp_1243_:
{
if (lean_obj_tag(v_snd_1226_) == 5)
{
lean_object* v_fn_1244_; lean_object* v_arg_1245_; lean_object* v___x_1246_; 
v_fn_1244_ = lean_ctor_get(v_snd_1226_, 0);
lean_inc_ref(v_fn_1244_);
v_arg_1245_ = lean_ctor_get(v_snd_1226_, 1);
lean_inc_ref(v_arg_1245_);
v___x_1246_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_1227_, v___y_1232_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1248_ = lean_box(0);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
lean_inc(v___y_1239_);
lean_inc_ref(v___y_1238_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc(v___y_1232_);
v___x_1249_ = lean_grind_internalize(v_snd_1226_, v_a_1247_, v___x_1248_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1259_; 
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1259_ == 0)
{
lean_object* v_unused_1260_; 
v_unused_1260_ = lean_ctor_get(v___x_1249_, 0);
lean_dec(v_unused_1260_);
v___x_1251_ = v___x_1249_;
v_isShared_1252_ = v_isSharedCheck_1259_;
goto v_resetjp_1250_;
}
else
{
lean_dec(v___x_1249_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1259_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1257_; 
v___x_1253_ = lean_array_push(v_fst_1228_, v_arg_1245_);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v_fn_1244_);
v___x_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v___x_1255_);
v___x_1257_ = v___x_1251_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1255_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v_arg_1245_);
lean_dec_ref(v_fn_1244_);
lean_dec(v_fst_1228_);
v_a_1261_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1249_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1249_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec_ref(v_arg_1245_);
lean_dec_ref_known(v_snd_1226_, 2);
lean_dec_ref(v_fn_1244_);
lean_dec(v_fst_1228_);
v_a_1269_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1246_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1246_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
else
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1277_, 0, v_fst_1228_);
lean_ctor_set(v___x_1277_, 1, v_snd_1226_);
v___x_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_snd_1301_ = _args[0];
lean_object* v_a_1302_ = _args[1];
lean_object* v_fst_1303_ = _args[2];
lean_object* v_a_1304_ = _args[3];
lean_object* v_lams_1305_ = _args[4];
lean_object* v_____r_1306_ = _args[5];
lean_object* v___y_1307_ = _args[6];
lean_object* v___y_1308_ = _args[7];
lean_object* v___y_1309_ = _args[8];
lean_object* v___y_1310_ = _args[9];
lean_object* v___y_1311_ = _args[10];
lean_object* v___y_1312_ = _args[11];
lean_object* v___y_1313_ = _args[12];
lean_object* v___y_1314_ = _args[13];
lean_object* v___y_1315_ = _args[14];
lean_object* v___y_1316_ = _args[15];
lean_object* v___y_1317_ = _args[16];
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1301_, v_a_1302_, v_fst_1303_, v_a_1304_, v_lams_1305_, v_____r_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v_lams_1305_);
lean_dec_ref(v_a_1304_);
lean_dec_ref(v_a_1302_);
return v_res_1318_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1325_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_1326_ = l_Lean_Name_append(v___x_1325_, v___x_1324_);
return v___x_1326_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3));
v___x_1329_ = l_Lean_stringToMessageData(v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_lams_1332_, lean_object* v_a_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v___y_1346_; lean_object* v_toCold_1366_; lean_object* v_options_1367_; lean_object* v_fst_1368_; lean_object* v_snd_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1406_; 
v_toCold_1366_ = lean_ctor_get(v___y_1342_, 0);
v_options_1367_ = lean_ctor_get(v_toCold_1366_, 2);
v_fst_1368_ = lean_ctor_get(v_a_1333_, 0);
v_snd_1369_ = lean_ctor_get(v_a_1333_, 1);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_a_1333_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1371_ = v_a_1333_;
v_isShared_1372_ = v_isSharedCheck_1406_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_snd_1369_);
lean_inc(v_fst_1368_);
lean_dec(v_a_1333_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1406_;
goto v_resetjp_1370_;
}
v___jp_1345_:
{
if (lean_obj_tag(v___y_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1357_; 
v_a_1347_ = lean_ctor_get(v___y_1346_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___y_1346_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1349_ = v___y_1346_;
v_isShared_1350_ = v_isSharedCheck_1357_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___y_1346_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1357_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
if (lean_obj_tag(v_a_1347_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v_a_1347_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v_a_1347_, 1);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 0, v_a_1351_);
v___x_1353_ = v___x_1349_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
else
{
lean_object* v_a_1355_; 
lean_del_object(v___x_1349_);
v_a_1355_ = lean_ctor_get(v_a_1347_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v_a_1347_, 1);
v_a_1333_ = v_a_1355_;
goto _start;
}
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
v_a_1358_ = lean_ctor_get(v___y_1346_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___y_1346_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___y_1346_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___y_1346_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
v_resetjp_1370_:
{
lean_object* v_inheritedTraceOptions_1373_; uint8_t v_hasTrace_1374_; 
v_inheritedTraceOptions_1373_ = lean_ctor_get(v_toCold_1366_, 11);
v_hasTrace_1374_ = lean_ctor_get_uint8(v_options_1367_, sizeof(void*)*1);
if (v_hasTrace_1374_ == 0)
{
lean_del_object(v___x_1371_);
goto v___jp_1375_;
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1378_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1379_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1380_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1373_, v_options_1367_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_del_object(v___x_1371_);
goto v___jp_1375_;
}
else
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lean_Meta_Grind_updateLastTag(v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1385_; 
lean_dec_ref_known(v___x_1381_, 1);
v___x_1382_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4);
lean_inc(v_snd_1369_);
v___x_1383_ = l_Lean_MessageData_ofExpr(v_snd_1369_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set_tag(v___x_1371_, 7);
lean_ctor_set(v___x_1371_, 1, v___x_1383_);
lean_ctor_set(v___x_1371_, 0, v___x_1382_);
v___x_1385_ = v___x_1371_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1378_, v___x_1385_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1388_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref_known(v___x_1386_, 1);
v___x_1388_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1369_, v_a_1330_, v_fst_1368_, v_a_1331_, v_lams_1332_, v_a_1387_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
v___y_1346_ = v___x_1388_;
goto v___jp_1345_;
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
v_a_1389_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1386_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1386_);
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
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_del_object(v___x_1371_);
lean_dec(v_snd_1369_);
lean_dec(v_fst_1368_);
v_a_1398_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1381_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1381_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
v___jp_1375_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_box(0);
v___x_1377_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1369_, v_a_1330_, v_fst_1368_, v_a_1331_, v_lams_1332_, v___x_1376_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
v___y_1346_ = v___x_1377_;
goto v___jp_1345_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___boxed(lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_lams_1409_, lean_object* v_a_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_a_1407_, v_a_1408_, v_lams_1409_, v_a_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v_lams_1409_);
lean_dec_ref(v_a_1408_);
lean_dec_ref(v_a_1407_);
return v_res_1422_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1));
v___x_1427_ = l_Lean_stringToMessageData(v___x_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object* v_a_1428_, lean_object* v_lams_1429_, lean_object* v_as_x27_1430_, lean_object* v_b_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
if (lean_obj_tag(v_as_x27_1430_) == 0)
{
lean_object* v___x_1443_; 
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v_b_1431_);
return v___x_1443_;
}
else
{
lean_object* v_toCold_1444_; lean_object* v_options_1445_; lean_object* v_head_1446_; lean_object* v_tail_1447_; lean_object* v_inheritedTraceOptions_1448_; uint8_t v_hasTrace_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; 
v_toCold_1444_ = lean_ctor_get(v___y_1440_, 0);
v_options_1445_ = lean_ctor_get(v_toCold_1444_, 2);
v_head_1446_ = lean_ctor_get(v_as_x27_1430_, 0);
v_tail_1447_ = lean_ctor_get(v_as_x27_1430_, 1);
v_inheritedTraceOptions_1448_ = lean_ctor_get(v_toCold_1444_, 11);
v_hasTrace_1449_ = lean_ctor_get_uint8(v_options_1445_, sizeof(void*)*1);
v___x_1450_ = lean_box(0);
v___x_1451_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
if (v_hasTrace_1449_ == 0)
{
v___y_1453_ = v___y_1432_;
v___y_1454_ = v___y_1433_;
v___y_1455_ = v___y_1434_;
v___y_1456_ = v___y_1435_;
v___y_1457_ = v___y_1436_;
v___y_1458_ = v___y_1437_;
v___y_1459_ = v___y_1438_;
v___y_1460_ = v___y_1439_;
v___y_1461_ = v___y_1440_;
v___y_1462_ = v___y_1441_;
goto v___jp_1452_;
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v___x_1474_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1475_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1476_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1448_, v_options_1445_, v___x_1475_);
if (v___x_1476_ == 0)
{
v___y_1453_ = v___y_1432_;
v___y_1454_ = v___y_1433_;
v___y_1455_ = v___y_1434_;
v___y_1456_ = v___y_1435_;
v___y_1457_ = v___y_1436_;
v___y_1458_ = v___y_1437_;
v___y_1459_ = v___y_1438_;
v___y_1460_ = v___y_1439_;
v___y_1461_ = v___y_1440_;
v___y_1462_ = v___y_1441_;
goto v___jp_1452_;
}
else
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Lean_Meta_Grind_updateLastTag(v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec_ref_known(v___x_1477_, 1);
v___x_1478_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1446_);
v___x_1479_ = l_Lean_MessageData_ofExpr(v_head_1446_);
v___x_1480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1478_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1474_, v___x_1480_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_dec_ref_known(v___x_1481_, 1);
v___y_1453_ = v___y_1432_;
v___y_1454_ = v___y_1433_;
v___y_1455_ = v___y_1434_;
v___y_1456_ = v___y_1435_;
v___y_1457_ = v___y_1436_;
v___y_1458_ = v___y_1437_;
v___y_1459_ = v___y_1438_;
v___y_1460_ = v___y_1439_;
v___y_1461_ = v___y_1440_;
v___y_1462_ = v___y_1441_;
goto v___jp_1452_;
}
else
{
return v___x_1481_;
}
}
else
{
return v___x_1477_;
}
}
}
v___jp_1452_:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_inc(v_head_1446_);
v___x_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1451_);
lean_ctor_set(v___x_1463_, 1, v_head_1446_);
v___x_1464_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_head_1446_, v_a_1428_, v_lams_1429_, v___x_1463_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_dec_ref_known(v___x_1464_, 1);
v_as_x27_1430_ = v_tail_1447_;
v_b_1431_ = v___x_1450_;
goto _start;
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
v_a_1466_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1464_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1464_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object* v_a_1482_, lean_object* v_lams_1483_, lean_object* v_as_x27_1484_, lean_object* v_b_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1482_, v_lams_1483_, v_as_x27_1484_, v_b_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec(v_as_x27_1484_);
lean_dec_ref(v_lams_1483_);
lean_dec_ref(v_a_1482_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object* v_a_1498_, lean_object* v_lams_1499_, lean_object* v_as_1500_, lean_object* v_as_x27_1501_, lean_object* v_b_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
if (lean_obj_tag(v_as_x27_1501_) == 0)
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1514_, 0, v_b_1502_);
return v___x_1514_;
}
else
{
lean_object* v_toCold_1515_; lean_object* v_options_1516_; lean_object* v_head_1517_; lean_object* v_tail_1518_; lean_object* v_inheritedTraceOptions_1519_; uint8_t v_hasTrace_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; 
v_toCold_1515_ = lean_ctor_get(v___y_1511_, 0);
v_options_1516_ = lean_ctor_get(v_toCold_1515_, 2);
v_head_1517_ = lean_ctor_get(v_as_x27_1501_, 0);
v_tail_1518_ = lean_ctor_get(v_as_x27_1501_, 1);
v_inheritedTraceOptions_1519_ = lean_ctor_get(v_toCold_1515_, 11);
v_hasTrace_1520_ = lean_ctor_get_uint8(v_options_1516_, sizeof(void*)*1);
v___x_1521_ = lean_box(0);
v___x_1522_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
if (v_hasTrace_1520_ == 0)
{
v___y_1524_ = v___y_1503_;
v___y_1525_ = v___y_1504_;
v___y_1526_ = v___y_1505_;
v___y_1527_ = v___y_1506_;
v___y_1528_ = v___y_1507_;
v___y_1529_ = v___y_1508_;
v___y_1530_ = v___y_1509_;
v___y_1531_ = v___y_1510_;
v___y_1532_ = v___y_1511_;
v___y_1533_ = v___y_1512_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v___x_1545_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1546_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1547_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1519_, v_options_1516_, v___x_1546_);
if (v___x_1547_ == 0)
{
v___y_1524_ = v___y_1503_;
v___y_1525_ = v___y_1504_;
v___y_1526_ = v___y_1505_;
v___y_1527_ = v___y_1506_;
v___y_1528_ = v___y_1507_;
v___y_1529_ = v___y_1508_;
v___y_1530_ = v___y_1509_;
v___y_1531_ = v___y_1510_;
v___y_1532_ = v___y_1511_;
v___y_1533_ = v___y_1512_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lean_Meta_Grind_updateLastTag(v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec_ref_known(v___x_1548_, 1);
v___x_1549_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1517_);
v___x_1550_ = l_Lean_MessageData_ofExpr(v_head_1517_);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1545_, v___x_1551_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_dec_ref_known(v___x_1552_, 1);
v___y_1524_ = v___y_1503_;
v___y_1525_ = v___y_1504_;
v___y_1526_ = v___y_1505_;
v___y_1527_ = v___y_1506_;
v___y_1528_ = v___y_1507_;
v___y_1529_ = v___y_1508_;
v___y_1530_ = v___y_1509_;
v___y_1531_ = v___y_1510_;
v___y_1532_ = v___y_1511_;
v___y_1533_ = v___y_1512_;
goto v___jp_1523_;
}
else
{
return v___x_1552_;
}
}
else
{
return v___x_1548_;
}
}
}
v___jp_1523_:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_inc(v_head_1517_);
v___x_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1522_);
lean_ctor_set(v___x_1534_, 1, v_head_1517_);
v___x_1535_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_head_1517_, v_a_1498_, v_lams_1499_, v___x_1534_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v___x_1536_; 
lean_dec_ref_known(v___x_1535_, 1);
v___x_1536_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1498_, v_lams_1499_, v_tail_1518_, v___x_1521_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1536_;
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
v_a_1537_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1535_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1535_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
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
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object* v_a_1553_, lean_object* v_lams_1554_, lean_object* v_as_1555_, lean_object* v_as_x27_1556_, lean_object* v_b_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1553_, v_lams_1554_, v_as_1555_, v_as_x27_1556_, v_b_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec(v_as_x27_1556_);
lean_dec(v_as_1555_);
lean_dec_ref(v_lams_1554_);
lean_dec_ref(v_a_1553_);
return v_res_1569_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0));
v___x_1572_ = l_Lean_stringToMessageData(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object* v_a_1576_, lean_object* v_lams_1577_, lean_object* v_as_1578_, size_t v_sz_1579_, size_t v_i_1580_, lean_object* v_b_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
uint8_t v___x_1593_; 
v___x_1593_ = lean_usize_dec_lt(v_i_1580_, v_sz_1579_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_b_1581_);
return v___x_1594_;
}
else
{
lean_object* v_toCold_1595_; lean_object* v_options_1596_; lean_object* v_inheritedTraceOptions_1597_; uint8_t v_hasTrace_1598_; lean_object* v___x_1599_; lean_object* v_a_1600_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; 
v_toCold_1595_ = lean_ctor_get(v___y_1590_, 0);
v_options_1596_ = lean_ctor_get(v_toCold_1595_, 2);
v_inheritedTraceOptions_1597_ = lean_ctor_get(v_toCold_1595_, 11);
v_hasTrace_1598_ = lean_ctor_get_uint8(v_options_1596_, sizeof(void*)*1);
v___x_1599_ = lean_box(0);
v_a_1600_ = lean_array_uget_borrowed(v_as_1578_, v_i_1580_);
if (v_hasTrace_1598_ == 0)
{
v___y_1602_ = v___y_1582_;
v___y_1603_ = v___y_1583_;
v___y_1604_ = v___y_1584_;
v___y_1605_ = v___y_1585_;
v___y_1606_ = v___y_1586_;
v___y_1607_ = v___y_1587_;
v___y_1608_ = v___y_1588_;
v___y_1609_ = v___y_1589_;
v___y_1610_ = v___y_1590_;
v___y_1611_ = v___y_1591_;
goto v___jp_1601_;
}
else
{
lean_object* v___x_1627_; lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1627_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1628_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1629_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1597_, v_options_1596_, v___x_1628_);
if (v___x_1629_ == 0)
{
v___y_1602_ = v___y_1582_;
v___y_1603_ = v___y_1583_;
v___y_1604_ = v___y_1584_;
v___y_1605_ = v___y_1585_;
v___y_1606_ = v___y_1586_;
v___y_1607_ = v___y_1587_;
v___y_1608_ = v___y_1588_;
v___y_1609_ = v___y_1589_;
v___y_1610_ = v___y_1590_;
v___y_1611_ = v___y_1591_;
goto v___jp_1601_;
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_Meta_Grind_updateLastTag(v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v___x_1631_; 
lean_dec_ref_known(v___x_1630_, 1);
v___x_1631_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1600_, v___y_1582_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v___x_1633_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1600_);
v___x_1634_ = l_Lean_MessageData_ofExpr(v_a_1600_);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1632_);
lean_dec(v_a_1632_);
v___x_1639_ = lean_box(0);
v___x_1640_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1638_, v___x_1639_);
v___x_1641_ = l_Lean_MessageData_ofList(v___x_1640_);
v___x_1642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1637_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1627_, v___x_1642_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_dec_ref_known(v___x_1643_, 1);
v___y_1602_ = v___y_1582_;
v___y_1603_ = v___y_1583_;
v___y_1604_ = v___y_1584_;
v___y_1605_ = v___y_1585_;
v___y_1606_ = v___y_1586_;
v___y_1607_ = v___y_1587_;
v___y_1608_ = v___y_1588_;
v___y_1609_ = v___y_1589_;
v___y_1610_ = v___y_1590_;
v___y_1611_ = v___y_1591_;
goto v___jp_1601_;
}
else
{
return v___x_1643_;
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
v_a_1644_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1631_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1631_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
else
{
return v___x_1630_;
}
}
}
v___jp_1601_:
{
lean_object* v___x_1612_; 
v___x_1612_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1600_, v___y_1602_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
lean_dec_ref_known(v___x_1612_, 1);
v___x_1614_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1613_);
lean_dec(v_a_1613_);
v___x_1615_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1576_, v_lams_1577_, v___x_1614_, v___x_1614_, v___x_1599_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___x_1614_);
if (lean_obj_tag(v___x_1615_) == 0)
{
size_t v___x_1616_; size_t v___x_1617_; 
lean_dec_ref_known(v___x_1615_, 1);
v___x_1616_ = ((size_t)1ULL);
v___x_1617_ = lean_usize_add(v_i_1580_, v___x_1616_);
v_i_1580_ = v___x_1617_;
v_b_1581_ = v___x_1599_;
goto _start;
}
else
{
return v___x_1615_;
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
v_a_1619_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1612_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1612_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object** _args){
lean_object* v_a_1652_ = _args[0];
lean_object* v_lams_1653_ = _args[1];
lean_object* v_as_1654_ = _args[2];
lean_object* v_sz_1655_ = _args[3];
lean_object* v_i_1656_ = _args[4];
lean_object* v_b_1657_ = _args[5];
lean_object* v___y_1658_ = _args[6];
lean_object* v___y_1659_ = _args[7];
lean_object* v___y_1660_ = _args[8];
lean_object* v___y_1661_ = _args[9];
lean_object* v___y_1662_ = _args[10];
lean_object* v___y_1663_ = _args[11];
lean_object* v___y_1664_ = _args[12];
lean_object* v___y_1665_ = _args[13];
lean_object* v___y_1666_ = _args[14];
lean_object* v___y_1667_ = _args[15];
lean_object* v___y_1668_ = _args[16];
_start:
{
size_t v_sz_boxed_1669_; size_t v_i_boxed_1670_; lean_object* v_res_1671_; 
v_sz_boxed_1669_ = lean_unbox_usize(v_sz_1655_);
lean_dec(v_sz_1655_);
v_i_boxed_1670_ = lean_unbox_usize(v_i_1656_);
lean_dec(v_i_1656_);
v_res_1671_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1652_, v_lams_1653_, v_as_1654_, v_sz_boxed_1669_, v_i_boxed_1670_, v_b_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v_as_1654_);
lean_dec_ref(v_lams_1653_);
lean_dec_ref(v_a_1652_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object* v_a_1672_, lean_object* v_lams_1673_, lean_object* v_as_1674_, size_t v_sz_1675_, size_t v_i_1676_, lean_object* v_b_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
uint8_t v___x_1689_; 
v___x_1689_ = lean_usize_dec_lt(v_i_1676_, v_sz_1675_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v_b_1677_);
return v___x_1690_;
}
else
{
lean_object* v_toCold_1691_; lean_object* v_options_1692_; lean_object* v_inheritedTraceOptions_1693_; uint8_t v_hasTrace_1694_; lean_object* v___x_1695_; lean_object* v_a_1696_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; 
v_toCold_1691_ = lean_ctor_get(v___y_1686_, 0);
v_options_1692_ = lean_ctor_get(v_toCold_1691_, 2);
v_inheritedTraceOptions_1693_ = lean_ctor_get(v_toCold_1691_, 11);
v_hasTrace_1694_ = lean_ctor_get_uint8(v_options_1692_, sizeof(void*)*1);
v___x_1695_ = lean_box(0);
v_a_1696_ = lean_array_uget_borrowed(v_as_1674_, v_i_1676_);
if (v_hasTrace_1694_ == 0)
{
v___y_1698_ = v___y_1678_;
v___y_1699_ = v___y_1679_;
v___y_1700_ = v___y_1680_;
v___y_1701_ = v___y_1681_;
v___y_1702_ = v___y_1682_;
v___y_1703_ = v___y_1683_;
v___y_1704_ = v___y_1684_;
v___y_1705_ = v___y_1685_;
v___y_1706_ = v___y_1686_;
v___y_1707_ = v___y_1687_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1723_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1724_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1725_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1693_, v_options_1692_, v___x_1724_);
if (v___x_1725_ == 0)
{
v___y_1698_ = v___y_1678_;
v___y_1699_ = v___y_1679_;
v___y_1700_ = v___y_1680_;
v___y_1701_ = v___y_1681_;
v___y_1702_ = v___y_1682_;
v___y_1703_ = v___y_1683_;
v___y_1704_ = v___y_1684_;
v___y_1705_ = v___y_1685_;
v___y_1706_ = v___y_1686_;
v___y_1707_ = v___y_1687_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_Meta_Grind_updateLastTag(v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v___x_1727_; 
lean_dec_ref_known(v___x_1726_, 1);
v___x_1727_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1696_, v___y_1678_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_a_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1696_);
v___x_1730_ = l_Lean_MessageData_ofExpr(v_a_1696_);
v___x_1731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1729_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
v___x_1732_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1731_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1728_);
lean_dec(v_a_1728_);
v___x_1735_ = lean_box(0);
v___x_1736_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1734_, v___x_1735_);
v___x_1737_ = l_Lean_MessageData_ofList(v___x_1736_);
v___x_1738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1733_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1723_, v___x_1738_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_dec_ref_known(v___x_1739_, 1);
v___y_1698_ = v___y_1678_;
v___y_1699_ = v___y_1679_;
v___y_1700_ = v___y_1680_;
v___y_1701_ = v___y_1681_;
v___y_1702_ = v___y_1682_;
v___y_1703_ = v___y_1683_;
v___y_1704_ = v___y_1684_;
v___y_1705_ = v___y_1685_;
v___y_1706_ = v___y_1686_;
v___y_1707_ = v___y_1687_;
goto v___jp_1697_;
}
else
{
return v___x_1739_;
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1727_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1727_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1727_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
else
{
return v___x_1726_;
}
}
}
v___jp_1697_:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1696_, v___y_1698_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1710_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1709_);
lean_dec(v_a_1709_);
v___x_1711_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1672_, v_lams_1673_, v___x_1710_, v___x_1710_, v___x_1695_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_);
lean_dec(v___x_1710_);
if (lean_obj_tag(v___x_1711_) == 0)
{
size_t v___x_1712_; size_t v___x_1713_; lean_object* v___x_1714_; 
lean_dec_ref_known(v___x_1711_, 1);
v___x_1712_ = ((size_t)1ULL);
v___x_1713_ = lean_usize_add(v_i_1676_, v___x_1712_);
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1672_, v_lams_1673_, v_as_1674_, v_sz_1675_, v___x_1713_, v___x_1695_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_);
return v___x_1714_;
}
else
{
return v___x_1711_;
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
v_a_1715_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v___x_1708_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1708_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1715_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object** _args){
lean_object* v_a_1748_ = _args[0];
lean_object* v_lams_1749_ = _args[1];
lean_object* v_as_1750_ = _args[2];
lean_object* v_sz_1751_ = _args[3];
lean_object* v_i_1752_ = _args[4];
lean_object* v_b_1753_ = _args[5];
lean_object* v___y_1754_ = _args[6];
lean_object* v___y_1755_ = _args[7];
lean_object* v___y_1756_ = _args[8];
lean_object* v___y_1757_ = _args[9];
lean_object* v___y_1758_ = _args[10];
lean_object* v___y_1759_ = _args[11];
lean_object* v___y_1760_ = _args[12];
lean_object* v___y_1761_ = _args[13];
lean_object* v___y_1762_ = _args[14];
lean_object* v___y_1763_ = _args[15];
lean_object* v___y_1764_ = _args[16];
_start:
{
size_t v_sz_boxed_1765_; size_t v_i_boxed_1766_; lean_object* v_res_1767_; 
v_sz_boxed_1765_ = lean_unbox_usize(v_sz_1751_);
lean_dec(v_sz_1751_);
v_i_boxed_1766_ = lean_unbox_usize(v_i_1752_);
lean_dec(v_i_1752_);
v_res_1767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1748_, v_lams_1749_, v_as_1750_, v_sz_boxed_1765_, v_i_boxed_1766_, v_b_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v_as_1750_);
lean_dec_ref(v_lams_1749_);
lean_dec_ref(v_a_1748_);
return v_res_1767_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__1(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBeta___closed__0));
v___x_1770_ = l_Lean_stringToMessageData(v___x_1769_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__3(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBeta___closed__2));
v___x_1773_ = l_Lean_stringToMessageData(v___x_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object* v_lams_1774_, lean_object* v_fns_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1787_ = lean_array_get_size(v_lams_1774_);
v___x_1788_ = lean_unsigned_to_nat(0u);
v___x_1789_ = lean_nat_dec_eq(v___x_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1790_ = l_Lean_instInhabitedExpr;
v___x_1791_ = lean_unsigned_to_nat(1u);
v___x_1792_ = lean_nat_sub(v___x_1787_, v___x_1791_);
v___x_1793_ = lean_array_get_borrowed(v___x_1790_, v_lams_1774_, v___x_1792_);
lean_dec(v___x_1792_);
v___x_1794_ = lean_st_ref_get(v_a_1776_);
lean_inc(v___x_1793_);
v___x_1795_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_1794_, v___x_1793_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
lean_dec(v___x_1794_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v_toCold_1820_; lean_object* v_options_1821_; uint8_t v_hasTrace_1822_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1795_, 1);
v_toCold_1820_ = lean_ctor_get(v_a_1784_, 0);
v_options_1821_ = lean_ctor_get(v_toCold_1820_, 2);
v_hasTrace_1822_ = lean_ctor_get_uint8(v_options_1821_, sizeof(void*)*1);
if (v_hasTrace_1822_ == 0)
{
v___y_1798_ = v_a_1776_;
v___y_1799_ = v_a_1777_;
v___y_1800_ = v_a_1778_;
v___y_1801_ = v_a_1779_;
v___y_1802_ = v_a_1780_;
v___y_1803_ = v_a_1781_;
v___y_1804_ = v_a_1782_;
v___y_1805_ = v_a_1783_;
v___y_1806_ = v_a_1784_;
v___y_1807_ = v_a_1785_;
goto v___jp_1797_;
}
else
{
lean_object* v_inheritedTraceOptions_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v_inheritedTraceOptions_1823_ = lean_ctor_get(v_toCold_1820_, 11);
v___x_1824_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1825_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1826_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1823_, v_options_1821_, v___x_1825_);
if (v___x_1826_ == 0)
{
v___y_1798_ = v_a_1776_;
v___y_1799_ = v_a_1777_;
v___y_1800_ = v_a_1778_;
v___y_1801_ = v_a_1779_;
v___y_1802_ = v_a_1780_;
v___y_1803_ = v_a_1781_;
v___y_1804_ = v_a_1782_;
v___y_1805_ = v_a_1783_;
v___y_1806_ = v_a_1784_;
v___y_1807_ = v_a_1785_;
goto v___jp_1797_;
}
else
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lean_Meta_Grind_updateLastTag(v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
lean_dec_ref_known(v___x_1827_, 1);
v___x_1828_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__1, &l_Lean_Meta_Grind_propagateBeta___closed__1_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__1);
lean_inc_ref(v_fns_1775_);
v___x_1829_ = lean_array_to_list(v_fns_1775_);
v___x_1830_ = lean_box(0);
v___x_1831_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1829_, v___x_1830_);
v___x_1832_ = l_Lean_MessageData_ofList(v___x_1831_);
v___x_1833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1828_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__3, &l_Lean_Meta_Grind_propagateBeta___closed__3_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__3);
v___x_1835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1833_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
lean_inc_ref(v_lams_1774_);
v___x_1836_ = lean_array_to_list(v_lams_1774_);
v___x_1837_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1836_, v___x_1830_);
v___x_1838_ = l_Lean_MessageData_ofList(v___x_1837_);
v___x_1839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1835_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
v___x_1840_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1824_, v___x_1839_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_dec_ref_known(v___x_1840_, 1);
v___y_1798_ = v_a_1776_;
v___y_1799_ = v_a_1777_;
v___y_1800_ = v_a_1778_;
v___y_1801_ = v_a_1779_;
v___y_1802_ = v_a_1780_;
v___y_1803_ = v_a_1781_;
v___y_1804_ = v_a_1782_;
v___y_1805_ = v_a_1783_;
v___y_1806_ = v_a_1784_;
v___y_1807_ = v_a_1785_;
goto v___jp_1797_;
}
else
{
lean_dec(v_a_1796_);
lean_dec_ref(v_fns_1775_);
lean_dec_ref(v_lams_1774_);
return v___x_1840_;
}
}
else
{
lean_dec(v_a_1796_);
lean_dec_ref(v_fns_1775_);
lean_dec_ref(v_lams_1774_);
return v___x_1827_;
}
}
}
v___jp_1797_:
{
lean_object* v___x_1808_; size_t v_sz_1809_; size_t v___x_1810_; lean_object* v___x_1811_; 
v___x_1808_ = lean_box(0);
v_sz_1809_ = lean_array_size(v_fns_1775_);
v___x_1810_ = ((size_t)0ULL);
v___x_1811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1796_, v_lams_1774_, v_fns_1775_, v_sz_1809_, v___x_1810_, v___x_1808_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec_ref(v_fns_1775_);
lean_dec_ref(v_lams_1774_);
lean_dec(v_a_1796_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1818_ == 0)
{
lean_object* v_unused_1819_; 
v_unused_1819_ = lean_ctor_get(v___x_1811_, 0);
lean_dec(v_unused_1819_);
v___x_1813_ = v___x_1811_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_dec(v___x_1811_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1808_);
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1808_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
else
{
return v___x_1811_;
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v_fns_1775_);
lean_dec_ref(v_lams_1774_);
v_a_1841_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1795_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1795_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_dec_ref(v_fns_1775_);
lean_dec_ref(v_lams_1774_);
v___x_1849_ = lean_box(0);
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
return v___x_1850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object* v_lams_1851_, lean_object* v_fns_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_Meta_Grind_propagateBeta(v_lams_1851_, v_fns_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
lean_dec(v_a_1860_);
lean_dec_ref(v_a_1859_);
lean_dec(v_a_1858_);
lean_dec_ref(v_a_1857_);
lean_dec(v_a_1856_);
lean_dec_ref(v_a_1855_);
lean_dec(v_a_1854_);
lean_dec(v_a_1853_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_lams_1867_, lean_object* v_inst_1868_, lean_object* v_a_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_a_1865_, v_a_1866_, v_lams_1867_, v_a_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_lams_1884_, lean_object* v_inst_1885_, lean_object* v_a_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(v_a_1882_, v_a_1883_, v_lams_1884_, v_inst_1885_, v_a_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v_lams_1884_);
lean_dec_ref(v_a_1883_);
lean_dec_ref(v_a_1882_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object* v_a_1899_, lean_object* v_lams_1900_, lean_object* v_as_1901_, lean_object* v_as_x27_1902_, lean_object* v_b_1903_, lean_object* v_a_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1899_, v_lams_1900_, v_as_1901_, v_as_x27_1902_, v_b_1903_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object** _args){
lean_object* v_a_1917_ = _args[0];
lean_object* v_lams_1918_ = _args[1];
lean_object* v_as_1919_ = _args[2];
lean_object* v_as_x27_1920_ = _args[3];
lean_object* v_b_1921_ = _args[4];
lean_object* v_a_1922_ = _args[5];
lean_object* v___y_1923_ = _args[6];
lean_object* v___y_1924_ = _args[7];
lean_object* v___y_1925_ = _args[8];
lean_object* v___y_1926_ = _args[9];
lean_object* v___y_1927_ = _args[10];
lean_object* v___y_1928_ = _args[11];
lean_object* v___y_1929_ = _args[12];
lean_object* v___y_1930_ = _args[13];
lean_object* v___y_1931_ = _args[14];
lean_object* v___y_1932_ = _args[15];
lean_object* v___y_1933_ = _args[16];
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(v_a_1917_, v_lams_1918_, v_as_1919_, v_as_x27_1920_, v_b_1921_, v_a_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec(v_as_x27_1920_);
lean_dec(v_as_1919_);
lean_dec_ref(v_lams_1918_);
lean_dec_ref(v_a_1917_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object* v_a_1935_, lean_object* v_lams_1936_, lean_object* v_as_1937_, lean_object* v_as_x27_1938_, lean_object* v_b_1939_, lean_object* v_a_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1935_, v_lams_1936_, v_as_x27_1938_, v_b_1939_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object** _args){
lean_object* v_a_1953_ = _args[0];
lean_object* v_lams_1954_ = _args[1];
lean_object* v_as_1955_ = _args[2];
lean_object* v_as_x27_1956_ = _args[3];
lean_object* v_b_1957_ = _args[4];
lean_object* v_a_1958_ = _args[5];
lean_object* v___y_1959_ = _args[6];
lean_object* v___y_1960_ = _args[7];
lean_object* v___y_1961_ = _args[8];
lean_object* v___y_1962_ = _args[9];
lean_object* v___y_1963_ = _args[10];
lean_object* v___y_1964_ = _args[11];
lean_object* v___y_1965_ = _args[12];
lean_object* v___y_1966_ = _args[13];
lean_object* v___y_1967_ = _args[14];
lean_object* v___y_1968_ = _args[15];
lean_object* v___y_1969_ = _args[16];
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(v_a_1953_, v_lams_1954_, v_as_1955_, v_as_x27_1956_, v_b_1957_, v_a_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec_ref(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec(v_as_x27_1956_);
lean_dec(v_as_1955_);
lean_dec_ref(v_lams_1954_);
lean_dec_ref(v_a_1953_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object* v_d_1974_, lean_object* v_as_1975_, size_t v_sz_1976_, size_t v_i_1977_, lean_object* v_b_1978_){
_start:
{
lean_object* v_a_1980_; uint8_t v___x_1984_; 
v___x_1984_ = lean_usize_dec_lt(v_i_1977_, v_sz_1976_);
if (v___x_1984_ == 0)
{
lean_inc_ref(v_b_1978_);
return v_b_1978_;
}
else
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v_a_1987_; 
v___x_1985_ = lean_box(0);
v___x_1986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0));
v_a_1987_ = lean_array_uget_borrowed(v_as_1975_, v_i_1977_);
if (lean_obj_tag(v_a_1987_) == 6)
{
lean_object* v_binderType_1988_; size_t v___x_1989_; size_t v___x_1990_; uint8_t v___x_1991_; 
v_binderType_1988_ = lean_ctor_get(v_a_1987_, 1);
v___x_1989_ = lean_ptr_addr(v_d_1974_);
v___x_1990_ = lean_ptr_addr(v_binderType_1988_);
v___x_1991_ = lean_usize_dec_eq(v___x_1989_, v___x_1990_);
if (v___x_1991_ == 0)
{
v_a_1980_ = v___x_1986_;
goto v___jp_1979_;
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
lean_inc_ref(v_a_1987_);
v___x_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1992_, 0, v_a_1987_);
v___x_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1992_);
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
lean_ctor_set(v___x_1994_, 1, v___x_1985_);
return v___x_1994_;
}
}
else
{
v_a_1980_ = v___x_1986_;
goto v___jp_1979_;
}
}
v___jp_1979_:
{
size_t v___x_1981_; size_t v___x_1982_; 
v___x_1981_ = ((size_t)1ULL);
v___x_1982_ = lean_usize_add(v_i_1977_, v___x_1981_);
v_i_1977_ = v___x_1982_;
v_b_1978_ = v_a_1980_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object* v_d_1995_, lean_object* v_as_1996_, lean_object* v_sz_1997_, lean_object* v_i_1998_, lean_object* v_b_1999_){
_start:
{
size_t v_sz_boxed_2000_; size_t v_i_boxed_2001_; lean_object* v_res_2002_; 
v_sz_boxed_2000_ = lean_unbox_usize(v_sz_1997_);
lean_dec(v_sz_1997_);
v_i_boxed_2001_ = lean_unbox_usize(v_i_1998_);
lean_dec(v_i_1998_);
v_res_2002_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_1995_, v_as_1996_, v_sz_boxed_2000_, v_i_boxed_2001_, v_b_1999_);
lean_dec_ref(v_b_1999_);
lean_dec_ref(v_as_1996_);
lean_dec_ref(v_d_1995_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object* v_lams_2003_, lean_object* v_d_2004_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; size_t v_sz_2007_; size_t v___x_2008_; lean_object* v___x_2009_; lean_object* v_fst_2010_; 
v___x_2005_ = lean_box(0);
v___x_2006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0));
v_sz_2007_ = lean_array_size(v_lams_2003_);
v___x_2008_ = ((size_t)0ULL);
v___x_2009_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_2004_, v_lams_2003_, v_sz_2007_, v___x_2008_, v___x_2006_);
v_fst_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_fst_2010_);
lean_dec_ref(v___x_2009_);
if (lean_obj_tag(v_fst_2010_) == 0)
{
return v___x_2005_;
}
else
{
lean_object* v_val_2011_; 
v_val_2011_ = lean_ctor_get(v_fst_2010_, 0);
lean_inc(v_val_2011_);
lean_dec_ref_known(v_fst_2010_, 1);
return v_val_2011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object* v_lams_2012_, lean_object* v_d_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_2012_, v_d_2013_);
lean_dec_ref(v_d_2013_);
lean_dec_ref(v_lams_2012_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object* v_lams_u2082_2025_, lean_object* v_lams_u2081_2026_, lean_object* v_as_2027_, size_t v_sz_2028_, size_t v_i_2029_, lean_object* v_b_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v_a_2043_; uint8_t v___x_2047_; 
v___x_2047_ = lean_usize_dec_lt(v_i_2029_, v_sz_2028_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_b_2030_);
return v___x_2048_;
}
else
{
lean_object* v___x_2049_; lean_object* v_a_2050_; 
v___x_2049_ = lean_box(0);
v_a_2050_ = lean_array_uget_borrowed(v_as_2027_, v_i_2029_);
if (lean_obj_tag(v_a_2050_) == 6)
{
lean_object* v_binderType_2051_; lean_object* v_body_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v_binderType_2051_ = lean_ctor_get(v_a_2050_, 1);
v_body_2052_ = lean_ctor_get(v_a_2050_, 2);
v___x_2053_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_binderType_2051_);
v___x_2054_ = l_Lean_Meta_getLevel(v_binderType_2051_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
v___x_2056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1));
v___x_2057_ = lean_box(0);
v___x_2058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2058_, 0, v_a_2055_);
lean_ctor_set(v___x_2058_, 1, v___x_2057_);
lean_inc_ref(v___x_2058_);
v___x_2059_ = l_Lean_mkConst(v___x_2056_, v___x_2058_);
lean_inc_ref(v_binderType_2051_);
v___x_2060_ = l_Lean_Expr_app___override(v___x_2059_, v_binderType_2051_);
v___x_2061_ = lean_box(0);
v___x_2062_ = l_Lean_Meta_synthInstance_x3f(v___x_2060_, v___x_2061_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
if (lean_obj_tag(v_a_2063_) == 1)
{
lean_object* v_val_2064_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2073_; lean_object* v___y_2074_; lean_object* v___y_2075_; uint8_t v___x_2129_; 
v_val_2064_ = lean_ctor_get(v_a_2063_, 0);
lean_inc(v_val_2064_);
lean_dec_ref_known(v_a_2063_, 1);
v___x_2129_ = l_Lean_Expr_hasLooseBVars(v_body_2052_);
if (v___x_2129_ == 0)
{
v___y_2066_ = v___y_2031_;
v___y_2067_ = v___y_2032_;
v___y_2068_ = v___y_2033_;
v___y_2069_ = v___y_2034_;
v___y_2070_ = v___y_2035_;
v___y_2071_ = v___y_2036_;
v___y_2072_ = v___y_2037_;
v___y_2073_ = v___y_2038_;
v___y_2074_ = v___y_2039_;
v___y_2075_ = v___y_2040_;
goto v___jp_2065_;
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5));
lean_inc_ref(v___x_2058_);
v___x_2131_ = l_Lean_mkConst(v___x_2130_, v___x_2058_);
lean_inc_ref(v_binderType_2051_);
v___x_2132_ = l_Lean_Expr_app___override(v___x_2131_, v_binderType_2051_);
v___x_2133_ = l_Lean_Meta_synthInstance_x3f(v___x_2132_, v___x_2061_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
if (lean_obj_tag(v_a_2134_) == 0)
{
lean_dec(v_val_2064_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
else
{
lean_dec_ref_known(v_a_2134_, 1);
if (v___x_2129_ == 0)
{
lean_dec(v_val_2064_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
else
{
v___y_2066_ = v___y_2031_;
v___y_2067_ = v___y_2032_;
v___y_2068_ = v___y_2033_;
v___y_2069_ = v___y_2034_;
v___y_2070_ = v___y_2035_;
v___y_2071_ = v___y_2036_;
v___y_2072_ = v___y_2037_;
v___y_2073_ = v___y_2038_;
v___y_2074_ = v___y_2039_;
v___y_2075_ = v___y_2040_;
goto v___jp_2065_;
}
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
lean_dec(v_val_2064_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2135_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2133_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2133_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
v___jp_2065_:
{
lean_object* v___x_2076_; 
v___x_2076_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_u2082_2025_, v_binderType_2051_);
if (lean_obj_tag(v___x_2076_) == 1)
{
lean_object* v_val_2077_; 
v_val_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v___x_2076_, 1);
if (lean_obj_tag(v_val_2077_) == 6)
{
lean_object* v_binderType_2078_; lean_object* v_body_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_binderType_2078_ = lean_ctor_get(v_val_2077_, 1);
lean_inc_ref(v_binderType_2078_);
v_body_2079_ = lean_ctor_get(v_val_2077_, 2);
lean_inc_ref(v_body_2079_);
lean_dec_ref_known(v_val_2077_, 3);
v___x_2080_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3));
v___x_2081_ = l_Lean_mkConst(v___x_2080_, v___x_2058_);
v___x_2082_ = l_Lean_mkAppB(v___x_2081_, v_binderType_2078_, v_val_2064_);
v___x_2083_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_2082_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2084_);
lean_dec_ref_known(v___x_2083_, 1);
v___x_2085_ = lean_expr_instantiate1(v_body_2052_, v_a_2084_);
v___x_2086_ = lean_expr_instantiate1(v_body_2079_, v_a_2084_);
lean_dec_ref(v_body_2079_);
v___x_2087_ = lean_array_fget_borrowed(v_lams_u2081_2026_, v___x_2053_);
v___x_2088_ = lean_array_fget_borrowed(v_lams_u2082_2025_, v___x_2053_);
lean_inc(v___y_2075_);
lean_inc_ref(v___y_2074_);
lean_inc(v___y_2073_);
lean_inc_ref(v___y_2072_);
lean_inc(v___y_2071_);
lean_inc_ref(v___y_2070_);
lean_inc(v___y_2069_);
lean_inc_ref(v___y_2068_);
lean_inc(v___y_2067_);
lean_inc(v___y_2066_);
lean_inc(v___x_2088_);
lean_inc(v___x_2087_);
v___x_2089_ = lean_grind_mk_eq_proof(v___x_2087_, v___x_2088_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
v___x_2091_ = l_Lean_Meta_mkCongrFun(v_a_2090_, v_a_2084_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2093_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2093_ = l_Lean_Meta_mkEq(v___x_2085_, v___x_2086_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = l_Lean_Meta_mkExpectedPropHint(v_a_2092_, v_a_2094_);
v___x_2096_ = l_Lean_Meta_Grind_pushNewFact(v___x_2095_, v___x_2053_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_dec_ref_known(v___x_2096_, 1);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
else
{
return v___x_2096_;
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec(v_a_2092_);
v_a_2097_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2093_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2093_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v___x_2086_);
lean_dec_ref(v___x_2085_);
v_a_2105_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2091_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2091_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec_ref(v___x_2086_);
lean_dec_ref(v___x_2085_);
lean_dec(v_a_2084_);
v_a_2113_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2089_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2089_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v_body_2079_);
v_a_2121_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2083_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2083_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_dec(v_val_2077_);
lean_dec(v_val_2064_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
}
else
{
lean_dec(v___x_2076_);
lean_dec(v_val_2064_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
}
}
else
{
lean_dec(v_a_2063_);
lean_dec_ref_known(v___x_2058_, 2);
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec_ref_known(v___x_2058_, 2);
v_a_2143_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2062_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2062_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
v_a_2151_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2054_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2054_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
v_a_2043_ = v___x_2049_;
goto v___jp_2042_;
}
}
v___jp_2042_:
{
size_t v___x_2044_; size_t v___x_2045_; 
v___x_2044_ = ((size_t)1ULL);
v___x_2045_ = lean_usize_add(v_i_2029_, v___x_2044_);
v_i_2029_ = v___x_2045_;
v_b_2030_ = v_a_2043_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object** _args){
lean_object* v_lams_u2082_2159_ = _args[0];
lean_object* v_lams_u2081_2160_ = _args[1];
lean_object* v_as_2161_ = _args[2];
lean_object* v_sz_2162_ = _args[3];
lean_object* v_i_2163_ = _args[4];
lean_object* v_b_2164_ = _args[5];
lean_object* v___y_2165_ = _args[6];
lean_object* v___y_2166_ = _args[7];
lean_object* v___y_2167_ = _args[8];
lean_object* v___y_2168_ = _args[9];
lean_object* v___y_2169_ = _args[10];
lean_object* v___y_2170_ = _args[11];
lean_object* v___y_2171_ = _args[12];
lean_object* v___y_2172_ = _args[13];
lean_object* v___y_2173_ = _args[14];
lean_object* v___y_2174_ = _args[15];
lean_object* v___y_2175_ = _args[16];
_start:
{
size_t v_sz_boxed_2176_; size_t v_i_boxed_2177_; lean_object* v_res_2178_; 
v_sz_boxed_2176_ = lean_unbox_usize(v_sz_2162_);
lean_dec(v_sz_2162_);
v_i_boxed_2177_ = lean_unbox_usize(v_i_2163_);
lean_dec(v_i_2163_);
v_res_2178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2159_, v_lams_u2081_2160_, v_as_2161_, v_sz_boxed_2176_, v_i_boxed_2177_, v_b_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v_as_2161_);
lean_dec_ref(v_lams_u2081_2160_);
lean_dec_ref(v_lams_u2082_2159_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object* v_lams_u2081_2179_, lean_object* v_lams_u2082_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2192_ = lean_array_get_size(v_lams_u2081_2179_);
v___x_2193_ = lean_unsigned_to_nat(0u);
v___x_2194_ = lean_nat_dec_eq(v___x_2192_, v___x_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = lean_array_get_size(v_lams_u2082_2180_);
v___x_2196_ = lean_nat_dec_eq(v___x_2195_, v___x_2193_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_2200_; 
v___x_2197_ = lean_box(0);
v_sz_2198_ = lean_array_size(v_lams_u2081_2179_);
v___x_2199_ = ((size_t)0ULL);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2180_, v_lams_u2081_2179_, v_lams_u2081_2179_, v_sz_2198_, v___x_2199_, v___x_2197_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v___x_2200_, 0);
lean_dec(v_unused_2208_);
v___x_2202_ = v___x_2200_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_dec(v___x_2200_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2197_);
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2197_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
return v___x_2200_;
}
}
else
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = lean_box(0);
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
return v___x_2210_;
}
}
else
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2211_ = lean_box(0);
v___x_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
return v___x_2212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object* v_lams_u2081_2213_, lean_object* v_lams_u2082_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v_lams_u2081_2213_, v_lams_u2082_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_);
lean_dec(v_a_2224_);
lean_dec_ref(v_a_2223_);
lean_dec(v_a_2222_);
lean_dec_ref(v_a_2221_);
lean_dec(v_a_2220_);
lean_dec_ref(v_a_2219_);
lean_dec(v_a_2218_);
lean_dec_ref(v_a_2217_);
lean_dec(v_a_2216_);
lean_dec(v_a_2215_);
lean_dec_ref(v_lams_u2082_2214_);
lean_dec_ref(v_lams_u2081_2213_);
return v_res_2226_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object* v_x_2227_){
_start:
{
uint8_t v___x_2228_; 
v___x_2228_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object* v_x_2229_){
_start:
{
uint8_t v_res_2230_; lean_object* v_r_2231_; 
v_res_2230_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(v_x_2229_);
lean_dec_ref(v_x_2229_);
v_r_2231_ = lean_box(v_res_2230_);
return v_r_2231_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object* v_00_u03b2_2232_, lean_object* v_x_2233_){
_start:
{
uint8_t v___x_2234_; 
v___x_2234_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object* v_00_u03b2_2235_, lean_object* v_x_2236_){
_start:
{
uint8_t v_res_2237_; lean_object* v_r_2238_; 
v_res_2237_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(v_00_u03b2_2235_, v_x_2236_);
lean_dec_ref(v_x_2236_);
v_r_2238_ = lean_box(v_res_2237_);
return v_r_2238_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object* v_xs_2239_, lean_object* v_v_2240_, lean_object* v_i_2241_){
_start:
{
lean_object* v___x_2242_; uint8_t v___x_2243_; 
v___x_2242_ = lean_array_get_size(v_xs_2239_);
v___x_2243_ = lean_nat_dec_lt(v_i_2241_, v___x_2242_);
if (v___x_2243_ == 0)
{
lean_object* v___x_2244_; 
lean_dec(v_i_2241_);
v___x_2244_ = lean_box(0);
return v___x_2244_;
}
else
{
lean_object* v___x_2245_; size_t v___x_2246_; size_t v___x_2247_; uint8_t v___x_2248_; 
v___x_2245_ = lean_array_fget_borrowed(v_xs_2239_, v_i_2241_);
v___x_2246_ = lean_ptr_addr(v___x_2245_);
v___x_2247_ = lean_ptr_addr(v_v_2240_);
v___x_2248_ = lean_usize_dec_eq(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_unsigned_to_nat(1u);
v___x_2250_ = lean_nat_add(v_i_2241_, v___x_2249_);
lean_dec(v_i_2241_);
v_i_2241_ = v___x_2250_;
goto _start;
}
else
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2252_, 0, v_i_2241_);
return v___x_2252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_xs_2253_, lean_object* v_v_2254_, lean_object* v_i_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2253_, v_v_2254_, v_i_2255_);
lean_dec_ref(v_v_2254_);
lean_dec_ref(v_xs_2253_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object* v_xs_2257_, lean_object* v_v_2258_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2257_, v_v_2258_, v___x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object* v_xs_2261_, lean_object* v_v_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_xs_2261_, v_v_2262_);
lean_dec_ref(v_v_2262_);
lean_dec_ref(v_xs_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object* v_x_2264_, size_t v_x_2265_, lean_object* v_x_2266_){
_start:
{
if (lean_obj_tag(v_x_2264_) == 0)
{
lean_object* v_es_2267_; lean_object* v___x_2268_; size_t v___x_2269_; size_t v___x_2270_; lean_object* v_j_2271_; lean_object* v_entry_2272_; 
v_es_2267_ = lean_ctor_get(v_x_2264_, 0);
v___x_2268_ = lean_box(2);
v___x_2269_ = ((size_t)31ULL);
v___x_2270_ = lean_usize_land(v_x_2265_, v___x_2269_);
v_j_2271_ = lean_usize_to_nat(v___x_2270_);
v_entry_2272_ = lean_array_get(v___x_2268_, v_es_2267_, v_j_2271_);
switch(lean_obj_tag(v_entry_2272_))
{
case 0:
{
lean_object* v_key_2273_; size_t v___x_2274_; size_t v___x_2275_; uint8_t v___x_2276_; 
v_key_2273_ = lean_ctor_get(v_entry_2272_, 0);
lean_inc(v_key_2273_);
lean_dec_ref_known(v_entry_2272_, 2);
v___x_2274_ = lean_ptr_addr(v_x_2266_);
v___x_2275_ = lean_ptr_addr(v_key_2273_);
lean_dec(v_key_2273_);
v___x_2276_ = lean_usize_dec_eq(v___x_2274_, v___x_2275_);
if (v___x_2276_ == 0)
{
lean_dec(v_j_2271_);
return v_x_2264_;
}
else
{
lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2284_; 
lean_inc_ref(v_es_2267_);
v_isSharedCheck_2284_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2284_ == 0)
{
lean_object* v_unused_2285_; 
v_unused_2285_ = lean_ctor_get(v_x_2264_, 0);
lean_dec(v_unused_2285_);
v___x_2278_ = v_x_2264_;
v_isShared_2279_ = v_isSharedCheck_2284_;
goto v_resetjp_2277_;
}
else
{
lean_dec(v_x_2264_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2284_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2280_ = lean_array_set(v_es_2267_, v_j_2271_, v___x_2268_);
lean_dec(v_j_2271_);
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 0, v___x_2280_);
v___x_2282_ = v___x_2278_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
case 1:
{
lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2320_; 
lean_inc_ref(v_es_2267_);
v_isSharedCheck_2320_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2320_ == 0)
{
lean_object* v_unused_2321_; 
v_unused_2321_ = lean_ctor_get(v_x_2264_, 0);
lean_dec(v_unused_2321_);
v___x_2287_ = v_x_2264_;
v_isShared_2288_ = v_isSharedCheck_2320_;
goto v_resetjp_2286_;
}
else
{
lean_dec(v_x_2264_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2320_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v_node_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2319_; 
v_node_2289_ = lean_ctor_get(v_entry_2272_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v_entry_2272_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2291_ = v_entry_2272_;
v_isShared_2292_ = v_isSharedCheck_2319_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_node_2289_);
lean_dec(v_entry_2272_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2319_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
size_t v___x_2293_; lean_object* v_entries_2294_; size_t v___x_2295_; lean_object* v_newNode_2296_; lean_object* v___x_2297_; 
v___x_2293_ = ((size_t)5ULL);
v_entries_2294_ = lean_array_set(v_es_2267_, v_j_2271_, v___x_2268_);
v___x_2295_ = lean_usize_shift_right(v_x_2265_, v___x_2293_);
v_newNode_2296_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_node_2289_, v___x_2295_, v_x_2266_);
lean_inc_ref(v_newNode_2296_);
v___x_2297_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2296_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v___x_2299_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 0, v_newNode_2296_);
v___x_2299_ = v___x_2291_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_newNode_2296_);
v___x_2299_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2300_ = lean_array_set(v_entries_2294_, v_j_2271_, v___x_2299_);
lean_dec(v_j_2271_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2300_);
v___x_2302_ = v___x_2287_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
else
{
lean_object* v_val_2305_; lean_object* v_fst_2306_; lean_object* v_snd_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2318_; 
lean_dec_ref(v_newNode_2296_);
lean_del_object(v___x_2291_);
v_val_2305_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_val_2305_);
lean_dec_ref_known(v___x_2297_, 1);
v_fst_2306_ = lean_ctor_get(v_val_2305_, 0);
v_snd_2307_ = lean_ctor_get(v_val_2305_, 1);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_val_2305_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2309_ = v_val_2305_;
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_snd_2307_);
lean_inc(v_fst_2306_);
lean_dec(v_val_2305_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2318_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_fst_2306_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v_snd_2307_);
v___x_2312_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2313_ = lean_array_set(v_entries_2294_, v_j_2271_, v___x_2312_);
lean_dec(v_j_2271_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2313_);
v___x_2315_ = v___x_2287_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2271_);
return v_x_2264_;
}
}
}
else
{
lean_object* v_ks_2322_; lean_object* v_vs_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2337_; 
v_ks_2322_ = lean_ctor_get(v_x_2264_, 0);
v_vs_2323_ = lean_ctor_get(v_x_2264_, 1);
v_isSharedCheck_2337_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2325_ = v_x_2264_;
v_isShared_2326_ = v_isSharedCheck_2337_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_vs_2323_);
lean_inc(v_ks_2322_);
lean_dec(v_x_2264_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2337_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2327_; 
v___x_2327_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_ks_2322_, v_x_2266_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v___x_2329_; 
if (v_isShared_2326_ == 0)
{
v___x_2329_ = v___x_2325_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_ks_2322_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v_vs_2323_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
else
{
lean_object* v_val_2331_; lean_object* v_keys_x27_2332_; lean_object* v_vals_x27_2333_; lean_object* v___x_2335_; 
v_val_2331_ = lean_ctor_get(v___x_2327_, 0);
lean_inc_n(v_val_2331_, 2);
lean_dec_ref_known(v___x_2327_, 1);
v_keys_x27_2332_ = l_Array_eraseIdx___redArg(v_ks_2322_, v_val_2331_);
v_vals_x27_2333_ = l_Array_eraseIdx___redArg(v_vs_2323_, v_val_2331_);
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 1, v_vals_x27_2333_);
lean_ctor_set(v___x_2325_, 0, v_keys_x27_2332_);
v___x_2335_ = v___x_2325_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_keys_x27_2332_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_vals_x27_2333_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object* v_x_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_){
_start:
{
size_t v_x_19389__boxed_2341_; lean_object* v_res_2342_; 
v_x_19389__boxed_2341_ = lean_unbox_usize(v_x_2339_);
lean_dec(v_x_2339_);
v_res_2342_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2338_, v_x_19389__boxed_2341_, v_x_2340_);
lean_dec_ref(v_x_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object* v_x_2343_, lean_object* v_x_2344_){
_start:
{
size_t v___x_2345_; size_t v___x_2346_; size_t v___x_2347_; uint64_t v___x_2348_; size_t v_h_2349_; lean_object* v___x_2350_; 
v___x_2345_ = lean_ptr_addr(v_x_2344_);
v___x_2346_ = ((size_t)3ULL);
v___x_2347_ = lean_usize_shift_right(v___x_2345_, v___x_2346_);
v___x_2348_ = lean_usize_to_uint64(v___x_2347_);
v_h_2349_ = lean_uint64_to_usize(v___x_2348_);
v___x_2350_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2343_, v_h_2349_, v_x_2344_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object* v_x_2351_, lean_object* v_x_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2351_, v_x_2352_);
lean_dec_ref(v_x_2352_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object* v_as_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
if (lean_obj_tag(v_as_2354_) == 0)
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_box(0);
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
return v___x_2367_;
}
else
{
lean_object* v_head_2368_; lean_object* v_tail_2369_; lean_object* v___x_2370_; 
v_head_2368_ = lean_ctor_get(v_as_2354_, 0);
lean_inc(v_head_2368_);
v_tail_2369_ = lean_ctor_get(v_as_2354_, 1);
lean_inc(v_tail_2369_);
lean_dec_ref_known(v_as_2354_, 2);
v___x_2370_ = l_Lean_Meta_Grind_DelayedTheoremInstance_check(v_head_2368_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_dec_ref_known(v___x_2370_, 1);
v_as_2354_ = v_tail_2369_;
goto _start;
}
else
{
lean_dec(v_tail_2369_);
return v___x_2370_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object* v_as_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_as_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec(v___y_2374_);
lean_dec(v___y_2373_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object* v_keys_2385_, lean_object* v_vals_2386_, lean_object* v_i_2387_, lean_object* v_k_2388_){
_start:
{
lean_object* v___x_2389_; uint8_t v___x_2390_; 
v___x_2389_ = lean_array_get_size(v_keys_2385_);
v___x_2390_ = lean_nat_dec_lt(v_i_2387_, v___x_2389_);
if (v___x_2390_ == 0)
{
lean_object* v___x_2391_; 
lean_dec(v_i_2387_);
v___x_2391_ = lean_box(0);
return v___x_2391_;
}
else
{
lean_object* v_k_x27_2392_; size_t v___x_2393_; size_t v___x_2394_; uint8_t v___x_2395_; 
v_k_x27_2392_ = lean_array_fget_borrowed(v_keys_2385_, v_i_2387_);
v___x_2393_ = lean_ptr_addr(v_k_2388_);
v___x_2394_ = lean_ptr_addr(v_k_x27_2392_);
v___x_2395_ = lean_usize_dec_eq(v___x_2393_, v___x_2394_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2396_ = lean_unsigned_to_nat(1u);
v___x_2397_ = lean_nat_add(v_i_2387_, v___x_2396_);
lean_dec(v_i_2387_);
v_i_2387_ = v___x_2397_;
goto _start;
}
else
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = lean_array_fget_borrowed(v_vals_2386_, v_i_2387_);
lean_dec(v_i_2387_);
lean_inc(v___x_2399_);
v___x_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2399_);
return v___x_2400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_keys_2401_, lean_object* v_vals_2402_, lean_object* v_i_2403_, lean_object* v_k_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2401_, v_vals_2402_, v_i_2403_, v_k_2404_);
lean_dec_ref(v_k_2404_);
lean_dec_ref(v_vals_2402_);
lean_dec_ref(v_keys_2401_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object* v_x_2406_, size_t v_x_2407_, lean_object* v_x_2408_){
_start:
{
if (lean_obj_tag(v_x_2406_) == 0)
{
lean_object* v_es_2409_; lean_object* v___x_2410_; size_t v___x_2411_; size_t v___x_2412_; lean_object* v_j_2413_; lean_object* v___x_2414_; 
v_es_2409_ = lean_ctor_get(v_x_2406_, 0);
v___x_2410_ = lean_box(2);
v___x_2411_ = ((size_t)31ULL);
v___x_2412_ = lean_usize_land(v_x_2407_, v___x_2411_);
v_j_2413_ = lean_usize_to_nat(v___x_2412_);
v___x_2414_ = lean_array_get_borrowed(v___x_2410_, v_es_2409_, v_j_2413_);
lean_dec(v_j_2413_);
switch(lean_obj_tag(v___x_2414_))
{
case 0:
{
lean_object* v_key_2415_; lean_object* v_val_2416_; size_t v___x_2417_; size_t v___x_2418_; uint8_t v___x_2419_; 
v_key_2415_ = lean_ctor_get(v___x_2414_, 0);
v_val_2416_ = lean_ctor_get(v___x_2414_, 1);
v___x_2417_ = lean_ptr_addr(v_x_2408_);
v___x_2418_ = lean_ptr_addr(v_key_2415_);
v___x_2419_ = lean_usize_dec_eq(v___x_2417_, v___x_2418_);
if (v___x_2419_ == 0)
{
lean_object* v___x_2420_; 
v___x_2420_ = lean_box(0);
return v___x_2420_;
}
else
{
lean_object* v___x_2421_; 
lean_inc(v_val_2416_);
v___x_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2421_, 0, v_val_2416_);
return v___x_2421_;
}
}
case 1:
{
lean_object* v_node_2422_; size_t v___x_2423_; size_t v___x_2424_; 
v_node_2422_ = lean_ctor_get(v___x_2414_, 0);
v___x_2423_ = ((size_t)5ULL);
v___x_2424_ = lean_usize_shift_right(v_x_2407_, v___x_2423_);
v_x_2406_ = v_node_2422_;
v_x_2407_ = v___x_2424_;
goto _start;
}
default: 
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_box(0);
return v___x_2426_;
}
}
}
else
{
lean_object* v_ks_2427_; lean_object* v_vs_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v_ks_2427_ = lean_ctor_get(v_x_2406_, 0);
v_vs_2428_ = lean_ctor_get(v_x_2406_, 1);
v___x_2429_ = lean_unsigned_to_nat(0u);
v___x_2430_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_ks_2427_, v_vs_2428_, v___x_2429_, v_x_2408_);
return v___x_2430_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object* v_x_2431_, lean_object* v_x_2432_, lean_object* v_x_2433_){
_start:
{
size_t v_x_19614__boxed_2434_; lean_object* v_res_2435_; 
v_x_19614__boxed_2434_ = lean_unbox_usize(v_x_2432_);
lean_dec(v_x_2432_);
v_res_2435_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2431_, v_x_19614__boxed_2434_, v_x_2433_);
lean_dec_ref(v_x_2433_);
lean_dec_ref(v_x_2431_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object* v_x_2436_, lean_object* v_x_2437_){
_start:
{
size_t v___x_2438_; size_t v___x_2439_; size_t v___x_2440_; uint64_t v___x_2441_; size_t v___x_2442_; lean_object* v___x_2443_; 
v___x_2438_ = lean_ptr_addr(v_x_2437_);
v___x_2439_ = ((size_t)3ULL);
v___x_2440_ = lean_usize_shift_right(v___x_2438_, v___x_2439_);
v___x_2441_ = lean_usize_to_uint64(v___x_2440_);
v___x_2442_ = lean_uint64_to_usize(v___x_2441_);
v___x_2443_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2436_, v___x_2442_, v_x_2437_);
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object* v_x_2444_, lean_object* v_x_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2444_, v_x_2445_);
lean_dec_ref(v_x_2445_);
lean_dec_ref(v_x_2444_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object* v_as_x27_2447_, lean_object* v_b_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
if (lean_obj_tag(v_as_x27_2447_) == 0)
{
lean_object* v___x_2460_; 
v___x_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2460_, 0, v_b_2448_);
return v___x_2460_;
}
else
{
lean_object* v_head_2461_; lean_object* v_tail_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v_toGoalState_2465_; lean_object* v_ematch_2466_; lean_object* v_delayedThmInsts_2467_; lean_object* v___x_2468_; 
v_head_2461_ = lean_ctor_get(v_as_x27_2447_, 0);
v_tail_2462_ = lean_ctor_get(v_as_x27_2447_, 1);
v___x_2463_ = lean_box(0);
v___x_2464_ = lean_st_ref_get(v___y_2449_);
v_toGoalState_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc_ref(v_toGoalState_2465_);
lean_dec(v___x_2464_);
v_ematch_2466_ = lean_ctor_get(v_toGoalState_2465_, 12);
lean_inc_ref(v_ematch_2466_);
lean_dec_ref(v_toGoalState_2465_);
v_delayedThmInsts_2467_ = lean_ctor_get(v_ematch_2466_, 10);
lean_inc_ref(v_delayedThmInsts_2467_);
lean_dec_ref(v_ematch_2466_);
v___x_2468_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_delayedThmInsts_2467_, v_head_2461_);
lean_dec_ref(v_delayedThmInsts_2467_);
if (lean_obj_tag(v___x_2468_) == 1)
{
lean_object* v_val_2469_; lean_object* v___x_2470_; lean_object* v_toGoalState_2471_; lean_object* v_ematch_2472_; lean_object* v_mvarId_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2527_; 
v_val_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_val_2469_);
lean_dec_ref_known(v___x_2468_, 1);
v___x_2470_ = lean_st_ref_take(v___y_2449_);
v_toGoalState_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc_ref(v_toGoalState_2471_);
v_ematch_2472_ = lean_ctor_get(v_toGoalState_2471_, 12);
lean_inc_ref(v_ematch_2472_);
v_mvarId_2473_ = lean_ctor_get(v___x_2470_, 1);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2527_ == 0)
{
lean_object* v_unused_2528_; 
v_unused_2528_ = lean_ctor_get(v___x_2470_, 0);
lean_dec(v_unused_2528_);
v___x_2475_ = v___x_2470_;
v_isShared_2476_ = v_isSharedCheck_2527_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_mvarId_2473_);
lean_dec(v___x_2470_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2527_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v_nextDeclIdx_2477_; lean_object* v_enodeMap_2478_; lean_object* v_exprs_2479_; lean_object* v_parents_2480_; lean_object* v_congrTable_2481_; lean_object* v_appMap_2482_; lean_object* v_indicesFound_2483_; lean_object* v_newFacts_2484_; uint8_t v_inconsistent_2485_; lean_object* v_nextIdx_2486_; lean_object* v_newRawFacts_2487_; lean_object* v_facts_2488_; lean_object* v_extThms_2489_; lean_object* v_inj_2490_; lean_object* v_split_2491_; lean_object* v_clean_2492_; lean_object* v_sstates_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2525_; 
v_nextDeclIdx_2477_ = lean_ctor_get(v_toGoalState_2471_, 0);
v_enodeMap_2478_ = lean_ctor_get(v_toGoalState_2471_, 1);
v_exprs_2479_ = lean_ctor_get(v_toGoalState_2471_, 2);
v_parents_2480_ = lean_ctor_get(v_toGoalState_2471_, 3);
v_congrTable_2481_ = lean_ctor_get(v_toGoalState_2471_, 4);
v_appMap_2482_ = lean_ctor_get(v_toGoalState_2471_, 5);
v_indicesFound_2483_ = lean_ctor_get(v_toGoalState_2471_, 6);
v_newFacts_2484_ = lean_ctor_get(v_toGoalState_2471_, 7);
v_inconsistent_2485_ = lean_ctor_get_uint8(v_toGoalState_2471_, sizeof(void*)*17);
v_nextIdx_2486_ = lean_ctor_get(v_toGoalState_2471_, 8);
v_newRawFacts_2487_ = lean_ctor_get(v_toGoalState_2471_, 9);
v_facts_2488_ = lean_ctor_get(v_toGoalState_2471_, 10);
v_extThms_2489_ = lean_ctor_get(v_toGoalState_2471_, 11);
v_inj_2490_ = lean_ctor_get(v_toGoalState_2471_, 13);
v_split_2491_ = lean_ctor_get(v_toGoalState_2471_, 14);
v_clean_2492_ = lean_ctor_get(v_toGoalState_2471_, 15);
v_sstates_2493_ = lean_ctor_get(v_toGoalState_2471_, 16);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_toGoalState_2471_);
if (v_isSharedCheck_2525_ == 0)
{
lean_object* v_unused_2526_; 
v_unused_2526_ = lean_ctor_get(v_toGoalState_2471_, 12);
lean_dec(v_unused_2526_);
v___x_2495_ = v_toGoalState_2471_;
v_isShared_2496_ = v_isSharedCheck_2525_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_sstates_2493_);
lean_inc(v_clean_2492_);
lean_inc(v_split_2491_);
lean_inc(v_inj_2490_);
lean_inc(v_extThms_2489_);
lean_inc(v_facts_2488_);
lean_inc(v_newRawFacts_2487_);
lean_inc(v_nextIdx_2486_);
lean_inc(v_newFacts_2484_);
lean_inc(v_indicesFound_2483_);
lean_inc(v_appMap_2482_);
lean_inc(v_congrTable_2481_);
lean_inc(v_parents_2480_);
lean_inc(v_exprs_2479_);
lean_inc(v_enodeMap_2478_);
lean_inc(v_nextDeclIdx_2477_);
lean_dec(v_toGoalState_2471_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2525_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v_thmMap_2497_; lean_object* v_gmt_2498_; lean_object* v_thms_2499_; lean_object* v_newThms_2500_; lean_object* v_numInstances_2501_; lean_object* v_numDelayedInstances_2502_; lean_object* v_num_2503_; lean_object* v_preInstances_2504_; lean_object* v_nextThmIdx_2505_; lean_object* v_matchEqNames_2506_; lean_object* v_delayedThmInsts_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2524_; 
v_thmMap_2497_ = lean_ctor_get(v_ematch_2472_, 0);
v_gmt_2498_ = lean_ctor_get(v_ematch_2472_, 1);
v_thms_2499_ = lean_ctor_get(v_ematch_2472_, 2);
v_newThms_2500_ = lean_ctor_get(v_ematch_2472_, 3);
v_numInstances_2501_ = lean_ctor_get(v_ematch_2472_, 4);
v_numDelayedInstances_2502_ = lean_ctor_get(v_ematch_2472_, 5);
v_num_2503_ = lean_ctor_get(v_ematch_2472_, 6);
v_preInstances_2504_ = lean_ctor_get(v_ematch_2472_, 7);
v_nextThmIdx_2505_ = lean_ctor_get(v_ematch_2472_, 8);
v_matchEqNames_2506_ = lean_ctor_get(v_ematch_2472_, 9);
v_delayedThmInsts_2507_ = lean_ctor_get(v_ematch_2472_, 10);
v_isSharedCheck_2524_ = !lean_is_exclusive(v_ematch_2472_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2509_ = v_ematch_2472_;
v_isShared_2510_ = v_isSharedCheck_2524_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_delayedThmInsts_2507_);
lean_inc(v_matchEqNames_2506_);
lean_inc(v_nextThmIdx_2505_);
lean_inc(v_preInstances_2504_);
lean_inc(v_num_2503_);
lean_inc(v_numDelayedInstances_2502_);
lean_inc(v_numInstances_2501_);
lean_inc(v_newThms_2500_);
lean_inc(v_thms_2499_);
lean_inc(v_gmt_2498_);
lean_inc(v_thmMap_2497_);
lean_dec(v_ematch_2472_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2524_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2511_; lean_object* v___x_2513_; 
v___x_2511_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_delayedThmInsts_2507_, v_head_2461_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 10, v___x_2511_);
v___x_2513_ = v___x_2509_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_thmMap_2497_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_gmt_2498_);
lean_ctor_set(v_reuseFailAlloc_2523_, 2, v_thms_2499_);
lean_ctor_set(v_reuseFailAlloc_2523_, 3, v_newThms_2500_);
lean_ctor_set(v_reuseFailAlloc_2523_, 4, v_numInstances_2501_);
lean_ctor_set(v_reuseFailAlloc_2523_, 5, v_numDelayedInstances_2502_);
lean_ctor_set(v_reuseFailAlloc_2523_, 6, v_num_2503_);
lean_ctor_set(v_reuseFailAlloc_2523_, 7, v_preInstances_2504_);
lean_ctor_set(v_reuseFailAlloc_2523_, 8, v_nextThmIdx_2505_);
lean_ctor_set(v_reuseFailAlloc_2523_, 9, v_matchEqNames_2506_);
lean_ctor_set(v_reuseFailAlloc_2523_, 10, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
lean_object* v___x_2515_; 
if (v_isShared_2496_ == 0)
{
lean_ctor_set(v___x_2495_, 12, v___x_2513_);
v___x_2515_ = v___x_2495_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_nextDeclIdx_2477_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v_enodeMap_2478_);
lean_ctor_set(v_reuseFailAlloc_2522_, 2, v_exprs_2479_);
lean_ctor_set(v_reuseFailAlloc_2522_, 3, v_parents_2480_);
lean_ctor_set(v_reuseFailAlloc_2522_, 4, v_congrTable_2481_);
lean_ctor_set(v_reuseFailAlloc_2522_, 5, v_appMap_2482_);
lean_ctor_set(v_reuseFailAlloc_2522_, 6, v_indicesFound_2483_);
lean_ctor_set(v_reuseFailAlloc_2522_, 7, v_newFacts_2484_);
lean_ctor_set(v_reuseFailAlloc_2522_, 8, v_nextIdx_2486_);
lean_ctor_set(v_reuseFailAlloc_2522_, 9, v_newRawFacts_2487_);
lean_ctor_set(v_reuseFailAlloc_2522_, 10, v_facts_2488_);
lean_ctor_set(v_reuseFailAlloc_2522_, 11, v_extThms_2489_);
lean_ctor_set(v_reuseFailAlloc_2522_, 12, v___x_2513_);
lean_ctor_set(v_reuseFailAlloc_2522_, 13, v_inj_2490_);
lean_ctor_set(v_reuseFailAlloc_2522_, 14, v_split_2491_);
lean_ctor_set(v_reuseFailAlloc_2522_, 15, v_clean_2492_);
lean_ctor_set(v_reuseFailAlloc_2522_, 16, v_sstates_2493_);
lean_ctor_set_uint8(v_reuseFailAlloc_2522_, sizeof(void*)*17, v_inconsistent_2485_);
v___x_2515_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2517_; 
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2515_);
v___x_2517_ = v___x_2475_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2515_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v_mvarId_2473_);
v___x_2517_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = lean_st_ref_put(v___y_2449_, v___x_2517_);
v___x_2519_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_val_2469_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_dec_ref_known(v___x_2519_, 1);
v_as_x27_2447_ = v_tail_2462_;
v_b_2448_ = v___x_2463_;
goto _start;
}
else
{
return v___x_2519_;
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
lean_dec(v___x_2468_);
v_as_x27_2447_ = v_tail_2462_;
v_b_2448_ = v___x_2463_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object* v_as_x27_2530_, lean_object* v_b_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2530_, v_b_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec(v_as_x27_2530_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object* v_toPropagateDown_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_2545_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2585_; 
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2585_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2585_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
uint8_t v___x_2561_; 
v___x_2561_ = lean_unbox(v_a_2557_);
lean_dec(v_a_2557_);
if (v___x_2561_ == 0)
{
lean_object* v___x_2562_; lean_object* v_toGoalState_2563_; lean_object* v_ematch_2564_; lean_object* v_delayedThmInsts_2565_; uint8_t v___x_2566_; 
v___x_2562_ = lean_st_ref_get(v_a_2545_);
v_toGoalState_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc_ref(v_toGoalState_2563_);
lean_dec(v___x_2562_);
v_ematch_2564_ = lean_ctor_get(v_toGoalState_2563_, 12);
lean_inc_ref(v_ematch_2564_);
lean_dec_ref(v_toGoalState_2563_);
v_delayedThmInsts_2565_ = lean_ctor_get(v_ematch_2564_, 10);
lean_inc_ref(v_delayedThmInsts_2565_);
lean_dec_ref(v_ematch_2564_);
v___x_2566_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_delayedThmInsts_2565_);
lean_dec_ref(v_delayedThmInsts_2565_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_del_object(v___x_2559_);
v___x_2567_ = lean_box(0);
v___x_2568_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_toPropagateDown_2544_, v___x_2567_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; 
v_unused_2576_ = lean_ctor_get(v___x_2568_, 0);
lean_dec(v_unused_2576_);
v___x_2570_ = v___x_2568_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_dec(v___x_2568_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2567_);
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2567_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
else
{
return v___x_2568_;
}
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2579_; 
v___x_2577_ = lean_box(0);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v___x_2577_);
v___x_2579_ = v___x_2559_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
else
{
lean_object* v___x_2581_; lean_object* v___x_2583_; 
v___x_2581_ = lean_box(0);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v___x_2581_);
v___x_2583_ = v___x_2559_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
}
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
v_a_2586_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2556_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2556_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object* v_toPropagateDown_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v_toPropagateDown_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
lean_dec(v_a_2604_);
lean_dec_ref(v_a_2603_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
lean_dec(v_a_2596_);
lean_dec(v_a_2595_);
lean_dec(v_toPropagateDown_2594_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object* v_00_u03b2_2607_, lean_object* v_x_2608_, lean_object* v_x_2609_){
_start:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2608_, v_x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object* v_00_u03b2_2611_, lean_object* v_x_2612_, lean_object* v_x_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(v_00_u03b2_2611_, v_x_2612_, v_x_2613_);
lean_dec_ref(v_x_2613_);
lean_dec_ref(v_x_2612_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object* v_00_u03b2_2615_, lean_object* v_x_2616_, lean_object* v_x_2617_){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2616_, v_x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object* v_00_u03b2_2619_, lean_object* v_x_2620_, lean_object* v_x_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(v_00_u03b2_2619_, v_x_2620_, v_x_2621_);
lean_dec_ref(v_x_2621_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object* v_as_2623_, lean_object* v_as_x27_2624_, lean_object* v_b_2625_, lean_object* v_a_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2624_, v_b_2625_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object* v_as_2639_, lean_object* v_as_x27_2640_, lean_object* v_b_2641_, lean_object* v_a_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(v_as_2639_, v_as_x27_2640_, v_b_2641_, v_a_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec(v_as_x27_2640_);
lean_dec(v_as_2639_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object* v_00_u03b2_2655_, lean_object* v_x_2656_, size_t v_x_2657_, lean_object* v_x_2658_){
_start:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2656_, v_x_2657_, v_x_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2660_, lean_object* v_x_2661_, lean_object* v_x_2662_, lean_object* v_x_2663_){
_start:
{
size_t v_x_19919__boxed_2664_; lean_object* v_res_2665_; 
v_x_19919__boxed_2664_ = lean_unbox_usize(v_x_2662_);
lean_dec(v_x_2662_);
v_res_2665_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(v_00_u03b2_2660_, v_x_2661_, v_x_19919__boxed_2664_, v_x_2663_);
lean_dec_ref(v_x_2663_);
lean_dec_ref(v_x_2661_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object* v_00_u03b2_2666_, lean_object* v_x_2667_, size_t v_x_2668_, lean_object* v_x_2669_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2667_, v_x_2668_, v_x_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2671_, lean_object* v_x_2672_, lean_object* v_x_2673_, lean_object* v_x_2674_){
_start:
{
size_t v_x_19930__boxed_2675_; lean_object* v_res_2676_; 
v_x_19930__boxed_2675_ = lean_unbox_usize(v_x_2673_);
lean_dec(v_x_2673_);
v_res_2676_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(v_00_u03b2_2671_, v_x_2672_, v_x_19930__boxed_2675_, v_x_2674_);
lean_dec_ref(v_x_2674_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_2677_, lean_object* v_keys_2678_, lean_object* v_vals_2679_, lean_object* v_heq_2680_, lean_object* v_i_2681_, lean_object* v_k_2682_){
_start:
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2678_, v_vals_2679_, v_i_2681_, v_k_2682_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2684_, lean_object* v_keys_2685_, lean_object* v_vals_2686_, lean_object* v_heq_2687_, lean_object* v_i_2688_, lean_object* v_k_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(v_00_u03b2_2684_, v_keys_2685_, v_vals_2686_, v_heq_2687_, v_i_2688_, v_k_2689_);
lean_dec_ref(v_k_2689_);
lean_dec_ref(v_vals_2686_);
lean_dec_ref(v_keys_2685_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object* v___x_2691_, lean_object* v_keys_2692_, lean_object* v_vals_2693_, lean_object* v_i_2694_, lean_object* v_k_2695_){
_start:
{
lean_object* v___x_2696_; uint8_t v___x_2697_; 
v___x_2696_ = lean_array_get_size(v_keys_2692_);
v___x_2697_ = lean_nat_dec_lt(v_i_2694_, v___x_2696_);
if (v___x_2697_ == 0)
{
lean_object* v___x_2698_; 
lean_dec_ref(v_k_2695_);
lean_dec(v_i_2694_);
v___x_2698_ = lean_box(0);
return v___x_2698_;
}
else
{
lean_object* v_k_x27_2699_; uint8_t v___x_2700_; 
v_k_x27_2699_ = lean_array_fget_borrowed(v_keys_2692_, v_i_2694_);
lean_inc(v_k_x27_2699_);
lean_inc_ref(v_k_2695_);
v___x_2700_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2691_, v_k_2695_, v_k_x27_2699_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2701_ = lean_unsigned_to_nat(1u);
v___x_2702_ = lean_nat_add(v_i_2694_, v___x_2701_);
lean_dec(v_i_2694_);
v_i_2694_ = v___x_2702_;
goto _start;
}
else
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_dec_ref(v_k_2695_);
v___x_2704_ = lean_array_fget_borrowed(v_vals_2693_, v_i_2694_);
lean_dec(v_i_2694_);
lean_inc(v___x_2704_);
lean_inc(v_k_x27_2699_);
v___x_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2705_, 0, v_k_x27_2699_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
return v___x_2706_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_2707_, lean_object* v_keys_2708_, lean_object* v_vals_2709_, lean_object* v_i_2710_, lean_object* v_k_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2707_, v_keys_2708_, v_vals_2709_, v_i_2710_, v_k_2711_);
lean_dec_ref(v_vals_2709_);
lean_dec_ref(v_keys_2708_);
lean_dec_ref(v___x_2707_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object* v___x_2713_, lean_object* v_x_2714_, size_t v_x_2715_, lean_object* v_x_2716_){
_start:
{
if (lean_obj_tag(v_x_2714_) == 0)
{
lean_object* v_es_2717_; lean_object* v___x_2718_; size_t v___x_2719_; size_t v___x_2720_; lean_object* v_j_2721_; lean_object* v___x_2722_; 
v_es_2717_ = lean_ctor_get(v_x_2714_, 0);
lean_inc_ref(v_es_2717_);
lean_dec_ref_known(v_x_2714_, 1);
v___x_2718_ = lean_box(2);
v___x_2719_ = ((size_t)31ULL);
v___x_2720_ = lean_usize_land(v_x_2715_, v___x_2719_);
v_j_2721_ = lean_usize_to_nat(v___x_2720_);
v___x_2722_ = lean_array_get(v___x_2718_, v_es_2717_, v_j_2721_);
lean_dec(v_j_2721_);
lean_dec_ref(v_es_2717_);
switch(lean_obj_tag(v___x_2722_))
{
case 0:
{
lean_object* v_key_2723_; lean_object* v_val_2724_; uint8_t v___x_2725_; 
v_key_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc_n(v_key_2723_, 2);
v_val_2724_ = lean_ctor_get(v___x_2722_, 1);
lean_inc(v_val_2724_);
lean_dec_ref_known(v___x_2722_, 2);
v___x_2725_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2713_, v_x_2716_, v_key_2723_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; 
lean_dec(v_val_2724_);
lean_dec(v_key_2723_);
v___x_2726_ = lean_box(0);
return v___x_2726_;
}
else
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2727_, 0, v_key_2723_);
lean_ctor_set(v___x_2727_, 1, v_val_2724_);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
case 1:
{
lean_object* v_node_2729_; size_t v___x_2730_; size_t v___x_2731_; 
v_node_2729_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_node_2729_);
lean_dec_ref_known(v___x_2722_, 1);
v___x_2730_ = ((size_t)5ULL);
v___x_2731_ = lean_usize_shift_right(v_x_2715_, v___x_2730_);
v_x_2714_ = v_node_2729_;
v_x_2715_ = v___x_2731_;
goto _start;
}
default: 
{
lean_object* v___x_2733_; 
lean_dec_ref(v_x_2716_);
v___x_2733_ = lean_box(0);
return v___x_2733_;
}
}
}
else
{
lean_object* v_ks_2734_; lean_object* v_vs_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v_ks_2734_ = lean_ctor_get(v_x_2714_, 0);
lean_inc_ref(v_ks_2734_);
v_vs_2735_ = lean_ctor_get(v_x_2714_, 1);
lean_inc_ref(v_vs_2735_);
lean_dec_ref_known(v_x_2714_, 2);
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2713_, v_ks_2734_, v_vs_2735_, v___x_2736_, v_x_2716_);
lean_dec_ref(v_vs_2735_);
lean_dec_ref(v_ks_2734_);
return v___x_2737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object* v___x_2738_, lean_object* v_x_2739_, lean_object* v_x_2740_, lean_object* v_x_2741_){
_start:
{
size_t v_x_25954__boxed_2742_; lean_object* v_res_2743_; 
v_x_25954__boxed_2742_ = lean_unbox_usize(v_x_2740_);
lean_dec(v_x_2740_);
v_res_2743_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2738_, v_x_2739_, v_x_25954__boxed_2742_, v_x_2741_);
lean_dec_ref(v___x_2738_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object* v___x_2744_, lean_object* v_x_2745_, lean_object* v_x_2746_){
_start:
{
uint64_t v___x_2747_; size_t v___x_2748_; lean_object* v___x_2749_; 
lean_inc_ref(v_x_2746_);
v___x_2747_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2744_, v_x_2746_);
v___x_2748_ = lean_uint64_to_usize(v___x_2747_);
lean_inc_ref(v_x_2745_);
v___x_2749_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2744_, v_x_2745_, v___x_2748_, v_x_2746_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object* v___x_2750_, lean_object* v_x_2751_, lean_object* v_x_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_2750_, v_x_2751_, v_x_2752_);
lean_dec_ref(v_x_2751_);
lean_dec_ref(v___x_2750_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v___x_2754_, lean_object* v_x_2755_, lean_object* v_x_2756_, lean_object* v_x_2757_, lean_object* v_x_2758_){
_start:
{
lean_object* v_ks_2759_; lean_object* v_vs_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2784_; 
v_ks_2759_ = lean_ctor_get(v_x_2755_, 0);
v_vs_2760_ = lean_ctor_get(v_x_2755_, 1);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_x_2755_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2762_ = v_x_2755_;
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_vs_2760_);
lean_inc(v_ks_2759_);
lean_dec(v_x_2755_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2764_; uint8_t v___x_2765_; 
v___x_2764_ = lean_array_get_size(v_ks_2759_);
v___x_2765_ = lean_nat_dec_lt(v_x_2756_, v___x_2764_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2769_; 
lean_dec(v_x_2756_);
v___x_2766_ = lean_array_push(v_ks_2759_, v_x_2757_);
v___x_2767_ = lean_array_push(v_vs_2760_, v_x_2758_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 1, v___x_2767_);
lean_ctor_set(v___x_2762_, 0, v___x_2766_);
v___x_2769_ = v___x_2762_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v___x_2766_);
lean_ctor_set(v_reuseFailAlloc_2770_, 1, v___x_2767_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
else
{
lean_object* v_k_x27_2771_; uint8_t v___x_2772_; 
v_k_x27_2771_ = lean_array_fget_borrowed(v_ks_2759_, v_x_2756_);
lean_inc(v_k_x27_2771_);
lean_inc_ref(v_x_2757_);
v___x_2772_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2754_, v_x_2757_, v_k_x27_2771_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2774_; 
if (v_isShared_2763_ == 0)
{
v___x_2774_ = v___x_2762_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_ks_2759_);
lean_ctor_set(v_reuseFailAlloc_2778_, 1, v_vs_2760_);
v___x_2774_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2775_ = lean_unsigned_to_nat(1u);
v___x_2776_ = lean_nat_add(v_x_2756_, v___x_2775_);
lean_dec(v_x_2756_);
v_x_2755_ = v___x_2774_;
v_x_2756_ = v___x_2776_;
goto _start;
}
}
else
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
v___x_2779_ = lean_array_fset(v_ks_2759_, v_x_2756_, v_x_2757_);
v___x_2780_ = lean_array_fset(v_vs_2760_, v_x_2756_, v_x_2758_);
lean_dec(v_x_2756_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 1, v___x_2780_);
lean_ctor_set(v___x_2762_, 0, v___x_2779_);
v___x_2782_ = v___x_2762_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2779_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___x_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v___x_2785_, lean_object* v_x_2786_, lean_object* v_x_2787_, lean_object* v_x_2788_, lean_object* v_x_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2785_, v_x_2786_, v_x_2787_, v_x_2788_, v_x_2789_);
lean_dec_ref(v___x_2785_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object* v___x_2791_, lean_object* v_n_2792_, lean_object* v_k_2793_, lean_object* v_v_2794_){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_unsigned_to_nat(0u);
v___x_2796_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2791_, v_n_2792_, v___x_2795_, v_k_2793_, v_v_2794_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v___x_2797_, lean_object* v_n_2798_, lean_object* v_k_2799_, lean_object* v_v_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2797_, v_n_2798_, v_k_2799_, v_v_2800_);
lean_dec_ref(v___x_2797_);
return v_res_2801_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = lean_box(0);
v___x_2803_ = l_unsafeCast___redArg(v___x_2802_);
return v___x_2803_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object* v___x_2805_, lean_object* v_x_2806_, size_t v_x_2807_, size_t v_x_2808_, lean_object* v_x_2809_, lean_object* v_x_2810_){
_start:
{
if (lean_obj_tag(v_x_2806_) == 0)
{
lean_object* v_es_2811_; size_t v___x_2812_; size_t v___x_2813_; lean_object* v_j_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v_es_2811_ = lean_ctor_get(v_x_2806_, 0);
v___x_2812_ = ((size_t)31ULL);
v___x_2813_ = lean_usize_land(v_x_2807_, v___x_2812_);
v_j_2814_ = lean_usize_to_nat(v___x_2813_);
v___x_2815_ = lean_array_get_size(v_es_2811_);
v___x_2816_ = lean_nat_dec_lt(v_j_2814_, v___x_2815_);
if (v___x_2816_ == 0)
{
lean_dec(v_j_2814_);
lean_dec(v_x_2810_);
lean_dec_ref(v_x_2809_);
return v_x_2806_;
}
else
{
lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2855_; 
lean_inc_ref(v_es_2811_);
v_isSharedCheck_2855_ = !lean_is_exclusive(v_x_2806_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; 
v_unused_2856_ = lean_ctor_get(v_x_2806_, 0);
lean_dec(v_unused_2856_);
v___x_2818_ = v_x_2806_;
v_isShared_2819_ = v_isSharedCheck_2855_;
goto v_resetjp_2817_;
}
else
{
lean_dec(v_x_2806_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2855_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v_v_2820_; lean_object* v___x_2821_; lean_object* v_xs_x27_2822_; lean_object* v___y_2824_; 
v_v_2820_ = lean_array_fget(v_es_2811_, v_j_2814_);
v___x_2821_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0);
v_xs_x27_2822_ = lean_array_fset(v_es_2811_, v_j_2814_, v___x_2821_);
switch(lean_obj_tag(v_v_2820_))
{
case 0:
{
lean_object* v_key_2829_; lean_object* v_val_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2840_; 
v_key_2829_ = lean_ctor_get(v_v_2820_, 0);
v_val_2830_ = lean_ctor_get(v_v_2820_, 1);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_v_2820_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2832_ = v_v_2820_;
v_isShared_2833_ = v_isSharedCheck_2840_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_val_2830_);
lean_inc(v_key_2829_);
lean_dec(v_v_2820_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2840_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
uint8_t v___x_2834_; 
lean_inc(v_key_2829_);
lean_inc_ref(v_x_2809_);
v___x_2834_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2805_, v_x_2809_, v_key_2829_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
lean_del_object(v___x_2832_);
v___x_2835_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2829_, v_val_2830_, v_x_2809_, v_x_2810_);
v___x_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
v___y_2824_ = v___x_2836_;
goto v___jp_2823_;
}
else
{
lean_object* v___x_2838_; 
lean_dec(v_val_2830_);
lean_dec(v_key_2829_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 1, v_x_2810_);
lean_ctor_set(v___x_2832_, 0, v_x_2809_);
v___x_2838_ = v___x_2832_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_x_2809_);
lean_ctor_set(v_reuseFailAlloc_2839_, 1, v_x_2810_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
v___y_2824_ = v___x_2838_;
goto v___jp_2823_;
}
}
}
}
case 1:
{
lean_object* v_node_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2853_; 
v_node_2841_ = lean_ctor_get(v_v_2820_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_v_2820_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2843_ = v_v_2820_;
v_isShared_2844_ = v_isSharedCheck_2853_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_node_2841_);
lean_dec(v_v_2820_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2853_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
size_t v___x_2845_; size_t v___x_2846_; size_t v___x_2847_; size_t v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
v___x_2845_ = ((size_t)5ULL);
v___x_2846_ = lean_usize_shift_right(v_x_2807_, v___x_2845_);
v___x_2847_ = ((size_t)1ULL);
v___x_2848_ = lean_usize_add(v_x_2808_, v___x_2847_);
v___x_2849_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2805_, v_node_2841_, v___x_2846_, v___x_2848_, v_x_2809_, v_x_2810_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 0, v___x_2849_);
v___x_2851_ = v___x_2843_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2849_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
v___y_2824_ = v___x_2851_;
goto v___jp_2823_;
}
}
}
default: 
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v_x_2809_);
lean_ctor_set(v___x_2854_, 1, v_x_2810_);
v___y_2824_ = v___x_2854_;
goto v___jp_2823_;
}
}
v___jp_2823_:
{
lean_object* v___x_2825_; lean_object* v___x_2827_; 
v___x_2825_ = lean_array_fset(v_xs_x27_2822_, v_j_2814_, v___y_2824_);
lean_dec(v_j_2814_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2825_);
v___x_2827_ = v___x_2818_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
else
{
lean_object* v_ks_2857_; lean_object* v_vs_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2876_; 
v_ks_2857_ = lean_ctor_get(v_x_2806_, 0);
v_vs_2858_ = lean_ctor_get(v_x_2806_, 1);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_x_2806_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2860_ = v_x_2806_;
v_isShared_2861_ = v_isSharedCheck_2876_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_vs_2858_);
lean_inc(v_ks_2857_);
lean_dec(v_x_2806_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2876_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_ks_2857_);
lean_ctor_set(v_reuseFailAlloc_2875_, 1, v_vs_2858_);
v___x_2863_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v_newNode_2864_; size_t v___x_2865_; uint8_t v___x_2866_; 
v_newNode_2864_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2805_, v___x_2863_, v_x_2809_, v_x_2810_);
v___x_2865_ = ((size_t)7ULL);
v___x_2866_ = lean_usize_dec_le(v___x_2865_, v_x_2808_);
if (v___x_2866_ == 0)
{
lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; 
v___x_2867_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2864_);
v___x_2868_ = lean_unsigned_to_nat(4u);
v___x_2869_ = lean_nat_dec_lt(v___x_2867_, v___x_2868_);
lean_dec(v___x_2867_);
if (v___x_2869_ == 0)
{
lean_object* v_ks_2870_; lean_object* v_vs_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v_ks_2870_ = lean_ctor_get(v_newNode_2864_, 0);
lean_inc_ref(v_ks_2870_);
v_vs_2871_ = lean_ctor_get(v_newNode_2864_, 1);
lean_inc_ref(v_vs_2871_);
lean_dec_ref(v_newNode_2864_);
v___x_2872_ = lean_unsigned_to_nat(0u);
v___x_2873_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__1);
v___x_2874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2805_, v_x_2808_, v_ks_2870_, v_vs_2871_, v___x_2872_, v___x_2873_);
lean_dec_ref(v_vs_2871_);
lean_dec_ref(v_ks_2870_);
return v___x_2874_;
}
else
{
return v_newNode_2864_;
}
}
else
{
return v_newNode_2864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object* v___x_2877_, size_t v_depth_2878_, lean_object* v_keys_2879_, lean_object* v_vals_2880_, lean_object* v_i_2881_, lean_object* v_entries_2882_){
_start:
{
lean_object* v___x_2883_; uint8_t v___x_2884_; 
v___x_2883_ = lean_array_get_size(v_keys_2879_);
v___x_2884_ = lean_nat_dec_lt(v_i_2881_, v___x_2883_);
if (v___x_2884_ == 0)
{
lean_dec(v_i_2881_);
return v_entries_2882_;
}
else
{
lean_object* v_k_2885_; lean_object* v_v_2886_; uint64_t v___x_2887_; size_t v_h_2888_; size_t v___x_2889_; lean_object* v___x_2890_; size_t v___x_2891_; size_t v___x_2892_; size_t v___x_2893_; size_t v_h_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_k_2885_ = lean_array_fget_borrowed(v_keys_2879_, v_i_2881_);
v_v_2886_ = lean_array_fget_borrowed(v_vals_2880_, v_i_2881_);
lean_inc_n(v_k_2885_, 2);
v___x_2887_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2877_, v_k_2885_);
v_h_2888_ = lean_uint64_to_usize(v___x_2887_);
v___x_2889_ = ((size_t)5ULL);
v___x_2890_ = lean_unsigned_to_nat(1u);
v___x_2891_ = ((size_t)1ULL);
v___x_2892_ = lean_usize_sub(v_depth_2878_, v___x_2891_);
v___x_2893_ = lean_usize_mul(v___x_2889_, v___x_2892_);
v_h_2894_ = lean_usize_shift_right(v_h_2888_, v___x_2893_);
v___x_2895_ = lean_nat_add(v_i_2881_, v___x_2890_);
lean_dec(v_i_2881_);
lean_inc(v_v_2886_);
v___x_2896_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2877_, v_entries_2882_, v_h_2894_, v_depth_2878_, v_k_2885_, v_v_2886_);
v_i_2881_ = v___x_2895_;
v_entries_2882_ = v___x_2896_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v___x_2898_, lean_object* v_depth_2899_, lean_object* v_keys_2900_, lean_object* v_vals_2901_, lean_object* v_i_2902_, lean_object* v_entries_2903_){
_start:
{
size_t v_depth_boxed_2904_; lean_object* v_res_2905_; 
v_depth_boxed_2904_ = lean_unbox_usize(v_depth_2899_);
lean_dec(v_depth_2899_);
v_res_2905_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2898_, v_depth_boxed_2904_, v_keys_2900_, v_vals_2901_, v_i_2902_, v_entries_2903_);
lean_dec_ref(v_vals_2901_);
lean_dec_ref(v_keys_2900_);
lean_dec_ref(v___x_2898_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object* v___x_2906_, lean_object* v_x_2907_, lean_object* v_x_2908_, lean_object* v_x_2909_, lean_object* v_x_2910_, lean_object* v_x_2911_){
_start:
{
size_t v_x_26112__boxed_2912_; size_t v_x_26113__boxed_2913_; lean_object* v_res_2914_; 
v_x_26112__boxed_2912_ = lean_unbox_usize(v_x_2908_);
lean_dec(v_x_2908_);
v_x_26113__boxed_2913_ = lean_unbox_usize(v_x_2909_);
lean_dec(v_x_2909_);
v_res_2914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2906_, v_x_2907_, v_x_26112__boxed_2912_, v_x_26113__boxed_2913_, v_x_2910_, v_x_2911_);
lean_dec_ref(v___x_2906_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object* v___x_2915_, lean_object* v_x_2916_, lean_object* v_x_2917_, lean_object* v_x_2918_){
_start:
{
uint64_t v___x_2919_; size_t v___x_2920_; size_t v___x_2921_; lean_object* v___x_2922_; 
lean_inc_ref(v_x_2917_);
v___x_2919_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2915_, v_x_2917_);
v___x_2920_ = lean_uint64_to_usize(v___x_2919_);
v___x_2921_ = ((size_t)1ULL);
v___x_2922_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2915_, v_x_2916_, v___x_2920_, v___x_2921_, v_x_2917_, v_x_2918_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object* v___x_2923_, lean_object* v_x_2924_, lean_object* v_x_2925_, lean_object* v_x_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_2923_, v_x_2924_, v_x_2925_, v_x_2926_);
lean_dec_ref(v___x_2923_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object* v_lhs_2932_, lean_object* v_rootNew_2933_, uint8_t v_a_2934_, lean_object* v_a_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_snd_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_3113_; 
v_snd_2943_ = lean_ctor_get(v_a_2935_, 1);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_a_2935_);
if (v_isSharedCheck_3113_ == 0)
{
lean_object* v_unused_3114_; 
v_unused_3114_ = lean_ctor_get(v_a_2935_, 0);
lean_dec(v_unused_3114_);
v___x_2945_ = v_a_2935_;
v_isShared_2946_ = v_isSharedCheck_3113_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_snd_2943_);
lean_dec(v_a_2935_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_3113_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2947_ = lean_box(0);
v___x_2948_ = lean_st_ref_get(v___y_2936_);
lean_inc(v_snd_2943_);
v___x_2949_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2948_, v_snd_2943_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___x_2948_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_3104_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_2952_ = v___x_2949_;
v_isShared_2953_ = v_isSharedCheck_3104_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2949_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_3104_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v_self_2954_; lean_object* v_next_2955_; lean_object* v_congr_2956_; lean_object* v_target_x3f_2957_; lean_object* v_proof_x3f_2958_; uint8_t v_flipped_2959_; lean_object* v_size_2960_; uint8_t v_interpreted_2961_; uint8_t v_ctor_2962_; uint8_t v_hasLambdas_2963_; uint8_t v_heqProofs_2964_; lean_object* v_idx_2965_; lean_object* v_generation_2966_; lean_object* v_mt_2967_; lean_object* v_sTerms_2968_; uint8_t v_funCC_2969_; lean_object* v_ematchDiagSource_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_3102_; 
v_self_2954_ = lean_ctor_get(v_a_2950_, 0);
v_next_2955_ = lean_ctor_get(v_a_2950_, 1);
v_congr_2956_ = lean_ctor_get(v_a_2950_, 3);
v_target_x3f_2957_ = lean_ctor_get(v_a_2950_, 4);
v_proof_x3f_2958_ = lean_ctor_get(v_a_2950_, 5);
v_flipped_2959_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12);
v_size_2960_ = lean_ctor_get(v_a_2950_, 6);
v_interpreted_2961_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12 + 1);
v_ctor_2962_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12 + 2);
v_hasLambdas_2963_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12 + 3);
v_heqProofs_2964_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12 + 4);
v_idx_2965_ = lean_ctor_get(v_a_2950_, 7);
v_generation_2966_ = lean_ctor_get(v_a_2950_, 8);
v_mt_2967_ = lean_ctor_get(v_a_2950_, 9);
v_sTerms_2968_ = lean_ctor_get(v_a_2950_, 10);
v_funCC_2969_ = lean_ctor_get_uint8(v_a_2950_, sizeof(void*)*12 + 5);
v_ematchDiagSource_2970_ = lean_ctor_get(v_a_2950_, 11);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_a_2950_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; 
v_unused_3103_ = lean_ctor_get(v_a_2950_, 2);
lean_dec(v_unused_3103_);
v___x_2972_ = v_a_2950_;
v_isShared_2973_ = v_isSharedCheck_3102_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_ematchDiagSource_2970_);
lean_inc(v_sTerms_2968_);
lean_inc(v_mt_2967_);
lean_inc(v_generation_2966_);
lean_inc(v_idx_2965_);
lean_inc(v_size_2960_);
lean_inc(v_proof_x3f_2958_);
lean_inc(v_target_x3f_2957_);
lean_inc(v_congr_2956_);
lean_inc(v_next_2955_);
lean_inc(v_self_2954_);
lean_dec(v_a_2950_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_3102_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___y_2990_; lean_object* v___x_3000_; 
lean_inc(v_ematchDiagSource_2970_);
lean_inc(v_sTerms_2968_);
lean_inc(v_mt_2967_);
lean_inc(v_generation_2966_);
lean_inc(v_idx_2965_);
lean_inc(v_size_2960_);
lean_inc(v_proof_x3f_2958_);
lean_inc(v_target_x3f_2957_);
lean_inc_ref(v_rootNew_2933_);
lean_inc_ref(v_next_2955_);
lean_inc_ref(v_self_2954_);
if (v_isShared_2973_ == 0)
{
lean_ctor_set(v___x_2972_, 2, v_rootNew_2933_);
v___x_3000_ = v___x_2972_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_self_2954_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v_next_2955_);
lean_ctor_set(v_reuseFailAlloc_3101_, 2, v_rootNew_2933_);
lean_ctor_set(v_reuseFailAlloc_3101_, 3, v_congr_2956_);
lean_ctor_set(v_reuseFailAlloc_3101_, 4, v_target_x3f_2957_);
lean_ctor_set(v_reuseFailAlloc_3101_, 5, v_proof_x3f_2958_);
lean_ctor_set(v_reuseFailAlloc_3101_, 6, v_size_2960_);
lean_ctor_set(v_reuseFailAlloc_3101_, 7, v_idx_2965_);
lean_ctor_set(v_reuseFailAlloc_3101_, 8, v_generation_2966_);
lean_ctor_set(v_reuseFailAlloc_3101_, 9, v_mt_2967_);
lean_ctor_set(v_reuseFailAlloc_3101_, 10, v_sTerms_2968_);
lean_ctor_set(v_reuseFailAlloc_3101_, 11, v_ematchDiagSource_2970_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12, v_flipped_2959_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12 + 1, v_interpreted_2961_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12 + 2, v_ctor_2962_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12 + 3, v_hasLambdas_2963_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12 + 4, v_heqProofs_2964_);
lean_ctor_set_uint8(v_reuseFailAlloc_3101_, sizeof(void*)*12 + 5, v_funCC_2969_);
v___x_3000_ = v_reuseFailAlloc_3101_;
goto v_reusejp_2999_;
}
v___jp_2974_:
{
size_t v___x_2975_; size_t v___x_2976_; uint8_t v___x_2977_; 
v___x_2975_ = lean_ptr_addr(v_next_2955_);
v___x_2976_ = lean_ptr_addr(v_lhs_2932_);
v___x_2977_ = lean_usize_dec_eq(v___x_2975_, v___x_2976_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2979_; 
lean_del_object(v___x_2952_);
lean_dec(v_snd_2943_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v_next_2955_);
lean_ctor_set(v___x_2945_, 0, v___x_2947_);
v___x_2979_ = v___x_2945_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2947_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v_next_2955_);
v___x_2979_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
v_a_2935_ = v___x_2979_;
goto _start;
}
}
else
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
lean_dec_ref(v_next_2955_);
lean_dec_ref(v_rootNew_2933_);
v___x_2982_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0));
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v___x_2982_);
v___x_2984_ = v___x_2945_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2982_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v_snd_2943_);
v___x_2984_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2986_; 
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2984_);
v___x_2986_ = v___x_2952_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
v___jp_2989_:
{
if (lean_obj_tag(v___y_2990_) == 0)
{
lean_dec_ref_known(v___y_2990_, 1);
goto v___jp_2974_;
}
else
{
lean_object* v_a_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_2998_; 
lean_dec_ref(v_next_2955_);
lean_del_object(v___x_2952_);
lean_del_object(v___x_2945_);
lean_dec(v_snd_2943_);
lean_dec_ref(v_rootNew_2933_);
v_a_2991_ = lean_ctor_get(v___y_2990_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___y_2990_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2993_ = v___y_2990_;
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_a_2991_);
lean_dec(v___y_2990_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_2998_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
if (v_isShared_2994_ == 0)
{
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2991_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
}
}
v_reusejp_2999_:
{
lean_object* v___x_3001_; 
lean_inc_ref(v___x_3000_);
lean_inc_ref(v_self_2954_);
v___x_3001_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2954_, v___x_3000_, v___y_2936_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_dec_ref_known(v___x_3001_, 1);
if (v_a_2934_ == 0)
{
lean_dec_ref(v___x_3000_);
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
goto v___jp_2974_;
}
else
{
lean_object* v___x_3002_; lean_object* v___x_3003_; uint8_t v___x_3004_; 
v___x_3002_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1));
v___x_3003_ = lean_unsigned_to_nat(3u);
v___x_3004_ = l_Lean_Expr_isAppOfArity(v_self_2954_, v___x_3002_, v___x_3003_);
if (v___x_3004_ == 0)
{
lean_dec_ref(v___x_3000_);
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
goto v___jp_2974_;
}
else
{
uint8_t v___x_3005_; 
v___x_3005_ = l_Lean_Meta_Grind_ENode_isCongrRoot(v___x_3000_);
lean_dec_ref(v___x_3000_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3006_; lean_object* v_toGoalState_3007_; lean_object* v_enodeMap_3008_; lean_object* v_congrTable_3009_; lean_object* v___x_3010_; 
v___x_3006_ = lean_st_ref_get(v___y_2936_);
v_toGoalState_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc_ref(v_toGoalState_3007_);
lean_dec(v___x_3006_);
v_enodeMap_3008_ = lean_ctor_get(v_toGoalState_3007_, 1);
lean_inc_ref(v_enodeMap_3008_);
v_congrTable_3009_ = lean_ctor_get(v_toGoalState_3007_, 4);
lean_inc_ref(v_congrTable_3009_);
lean_dec_ref(v_toGoalState_3007_);
lean_inc_ref(v_self_2954_);
v___x_3010_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v_enodeMap_3008_, v_congrTable_3009_, v_self_2954_);
lean_dec_ref(v_congrTable_3009_);
lean_dec_ref(v_enodeMap_3008_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
goto v___jp_2974_;
}
else
{
lean_object* v_val_3011_; lean_object* v_fst_3012_; lean_object* v___x_3013_; 
v_val_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_val_3011_);
lean_dec_ref_known(v___x_3010_, 1);
v_fst_3012_ = lean_ctor_get(v_val_3011_, 0);
lean_inc(v_fst_3012_);
lean_dec(v_val_3011_);
v___x_3013_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_fst_3012_, v___y_2937_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; uint8_t v___x_3015_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v___x_3013_, 1);
v___x_3015_ = lean_unbox(v_a_3014_);
lean_dec(v_a_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v_toGoalState_3017_; lean_object* v_mvarId_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3092_; 
v___x_3016_ = lean_st_ref_take(v___y_2936_);
v_toGoalState_3017_ = lean_ctor_get(v___x_3016_, 0);
v_mvarId_3018_ = lean_ctor_get(v___x_3016_, 1);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3020_ = v___x_3016_;
v_isShared_3021_ = v_isSharedCheck_3092_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_mvarId_3018_);
lean_inc(v_toGoalState_3017_);
lean_dec(v___x_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3092_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v_nextDeclIdx_3022_; lean_object* v_enodeMap_3023_; lean_object* v_exprs_3024_; lean_object* v_parents_3025_; lean_object* v_congrTable_3026_; lean_object* v_appMap_3027_; lean_object* v_indicesFound_3028_; lean_object* v_newFacts_3029_; uint8_t v_inconsistent_3030_; lean_object* v_nextIdx_3031_; lean_object* v_newRawFacts_3032_; lean_object* v_facts_3033_; lean_object* v_extThms_3034_; lean_object* v_ematch_3035_; lean_object* v_inj_3036_; lean_object* v_split_3037_; lean_object* v_clean_3038_; lean_object* v_sstates_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3091_; 
v_nextDeclIdx_3022_ = lean_ctor_get(v_toGoalState_3017_, 0);
v_enodeMap_3023_ = lean_ctor_get(v_toGoalState_3017_, 1);
v_exprs_3024_ = lean_ctor_get(v_toGoalState_3017_, 2);
v_parents_3025_ = lean_ctor_get(v_toGoalState_3017_, 3);
v_congrTable_3026_ = lean_ctor_get(v_toGoalState_3017_, 4);
v_appMap_3027_ = lean_ctor_get(v_toGoalState_3017_, 5);
v_indicesFound_3028_ = lean_ctor_get(v_toGoalState_3017_, 6);
v_newFacts_3029_ = lean_ctor_get(v_toGoalState_3017_, 7);
v_inconsistent_3030_ = lean_ctor_get_uint8(v_toGoalState_3017_, sizeof(void*)*17);
v_nextIdx_3031_ = lean_ctor_get(v_toGoalState_3017_, 8);
v_newRawFacts_3032_ = lean_ctor_get(v_toGoalState_3017_, 9);
v_facts_3033_ = lean_ctor_get(v_toGoalState_3017_, 10);
v_extThms_3034_ = lean_ctor_get(v_toGoalState_3017_, 11);
v_ematch_3035_ = lean_ctor_get(v_toGoalState_3017_, 12);
v_inj_3036_ = lean_ctor_get(v_toGoalState_3017_, 13);
v_split_3037_ = lean_ctor_get(v_toGoalState_3017_, 14);
v_clean_3038_ = lean_ctor_get(v_toGoalState_3017_, 15);
v_sstates_3039_ = lean_ctor_get(v_toGoalState_3017_, 16);
v_isSharedCheck_3091_ = !lean_is_exclusive(v_toGoalState_3017_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3041_ = v_toGoalState_3017_;
v_isShared_3042_ = v_isSharedCheck_3091_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_sstates_3039_);
lean_inc(v_clean_3038_);
lean_inc(v_split_3037_);
lean_inc(v_inj_3036_);
lean_inc(v_ematch_3035_);
lean_inc(v_extThms_3034_);
lean_inc(v_facts_3033_);
lean_inc(v_newRawFacts_3032_);
lean_inc(v_nextIdx_3031_);
lean_inc(v_newFacts_3029_);
lean_inc(v_indicesFound_3028_);
lean_inc(v_appMap_3027_);
lean_inc(v_congrTable_3026_);
lean_inc(v_parents_3025_);
lean_inc(v_exprs_3024_);
lean_inc(v_enodeMap_3023_);
lean_inc(v_nextDeclIdx_3022_);
lean_dec(v_toGoalState_3017_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3091_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3046_; 
v___x_3043_ = lean_box(0);
lean_inc_ref(v_self_2954_);
v___x_3044_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v_enodeMap_3023_, v_congrTable_3026_, v_self_2954_, v___x_3043_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 4, v___x_3044_);
v___x_3046_ = v___x_3041_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_nextDeclIdx_3022_);
lean_ctor_set(v_reuseFailAlloc_3090_, 1, v_enodeMap_3023_);
lean_ctor_set(v_reuseFailAlloc_3090_, 2, v_exprs_3024_);
lean_ctor_set(v_reuseFailAlloc_3090_, 3, v_parents_3025_);
lean_ctor_set(v_reuseFailAlloc_3090_, 4, v___x_3044_);
lean_ctor_set(v_reuseFailAlloc_3090_, 5, v_appMap_3027_);
lean_ctor_set(v_reuseFailAlloc_3090_, 6, v_indicesFound_3028_);
lean_ctor_set(v_reuseFailAlloc_3090_, 7, v_newFacts_3029_);
lean_ctor_set(v_reuseFailAlloc_3090_, 8, v_nextIdx_3031_);
lean_ctor_set(v_reuseFailAlloc_3090_, 9, v_newRawFacts_3032_);
lean_ctor_set(v_reuseFailAlloc_3090_, 10, v_facts_3033_);
lean_ctor_set(v_reuseFailAlloc_3090_, 11, v_extThms_3034_);
lean_ctor_set(v_reuseFailAlloc_3090_, 12, v_ematch_3035_);
lean_ctor_set(v_reuseFailAlloc_3090_, 13, v_inj_3036_);
lean_ctor_set(v_reuseFailAlloc_3090_, 14, v_split_3037_);
lean_ctor_set(v_reuseFailAlloc_3090_, 15, v_clean_3038_);
lean_ctor_set(v_reuseFailAlloc_3090_, 16, v_sstates_3039_);
lean_ctor_set_uint8(v_reuseFailAlloc_3090_, sizeof(void*)*17, v_inconsistent_3030_);
v___x_3046_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
lean_object* v___x_3048_; 
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 0, v___x_3046_);
v___x_3048_ = v___x_3020_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v___x_3046_);
lean_ctor_set(v_reuseFailAlloc_3089_, 1, v_mvarId_3018_);
v___x_3048_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3049_ = lean_st_ref_put(v___y_2936_, v___x_3048_);
lean_inc_ref(v_rootNew_2933_);
lean_inc_ref(v_next_2955_);
lean_inc_ref_n(v_self_2954_, 3);
v___x_3050_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v___x_3050_, 0, v_self_2954_);
lean_ctor_set(v___x_3050_, 1, v_next_2955_);
lean_ctor_set(v___x_3050_, 2, v_rootNew_2933_);
lean_ctor_set(v___x_3050_, 3, v_self_2954_);
lean_ctor_set(v___x_3050_, 4, v_target_x3f_2957_);
lean_ctor_set(v___x_3050_, 5, v_proof_x3f_2958_);
lean_ctor_set(v___x_3050_, 6, v_size_2960_);
lean_ctor_set(v___x_3050_, 7, v_idx_2965_);
lean_ctor_set(v___x_3050_, 8, v_generation_2966_);
lean_ctor_set(v___x_3050_, 9, v_mt_2967_);
lean_ctor_set(v___x_3050_, 10, v_sTerms_2968_);
lean_ctor_set(v___x_3050_, 11, v_ematchDiagSource_2970_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12, v_flipped_2959_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12 + 1, v_interpreted_2961_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12 + 2, v_ctor_2962_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12 + 3, v_hasLambdas_2963_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12 + 4, v_heqProofs_2964_);
lean_ctor_set_uint8(v___x_3050_, sizeof(void*)*12 + 5, v_funCC_2969_);
v___x_3051_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2954_, v___x_3050_, v___y_2936_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v___x_3052_; lean_object* v___x_3053_; 
lean_dec_ref_known(v___x_3051_, 1);
v___x_3052_ = lean_st_ref_get(v___y_2936_);
lean_inc(v_fst_3012_);
v___x_3053_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3052_, v_fst_3012_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___x_3052_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v_self_3055_; lean_object* v_next_3056_; lean_object* v_root_3057_; lean_object* v_target_x3f_3058_; lean_object* v_proof_x3f_3059_; uint8_t v_flipped_3060_; lean_object* v_size_3061_; uint8_t v_interpreted_3062_; uint8_t v_ctor_3063_; uint8_t v_hasLambdas_3064_; uint8_t v_heqProofs_3065_; lean_object* v_idx_3066_; lean_object* v_generation_3067_; lean_object* v_mt_3068_; lean_object* v_sTerms_3069_; uint8_t v_funCC_3070_; lean_object* v_ematchDiagSource_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3079_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref_known(v___x_3053_, 1);
v_self_3055_ = lean_ctor_get(v_a_3054_, 0);
v_next_3056_ = lean_ctor_get(v_a_3054_, 1);
v_root_3057_ = lean_ctor_get(v_a_3054_, 2);
v_target_x3f_3058_ = lean_ctor_get(v_a_3054_, 4);
v_proof_x3f_3059_ = lean_ctor_get(v_a_3054_, 5);
v_flipped_3060_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12);
v_size_3061_ = lean_ctor_get(v_a_3054_, 6);
v_interpreted_3062_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12 + 1);
v_ctor_3063_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12 + 2);
v_hasLambdas_3064_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12 + 3);
v_heqProofs_3065_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12 + 4);
v_idx_3066_ = lean_ctor_get(v_a_3054_, 7);
v_generation_3067_ = lean_ctor_get(v_a_3054_, 8);
v_mt_3068_ = lean_ctor_get(v_a_3054_, 9);
v_sTerms_3069_ = lean_ctor_get(v_a_3054_, 10);
v_funCC_3070_ = lean_ctor_get_uint8(v_a_3054_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3071_ = lean_ctor_get(v_a_3054_, 11);
v_isSharedCheck_3079_ = !lean_is_exclusive(v_a_3054_);
if (v_isSharedCheck_3079_ == 0)
{
lean_object* v_unused_3080_; 
v_unused_3080_ = lean_ctor_get(v_a_3054_, 3);
lean_dec(v_unused_3080_);
v___x_3073_ = v_a_3054_;
v_isShared_3074_ = v_isSharedCheck_3079_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_ematchDiagSource_3071_);
lean_inc(v_sTerms_3069_);
lean_inc(v_mt_3068_);
lean_inc(v_generation_3067_);
lean_inc(v_idx_3066_);
lean_inc(v_size_3061_);
lean_inc(v_proof_x3f_3059_);
lean_inc(v_target_x3f_3058_);
lean_inc(v_root_3057_);
lean_inc(v_next_3056_);
lean_inc(v_self_3055_);
lean_dec(v_a_3054_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3079_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
lean_ctor_set(v___x_3073_, 3, v_self_2954_);
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_self_3055_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v_next_3056_);
lean_ctor_set(v_reuseFailAlloc_3078_, 2, v_root_3057_);
lean_ctor_set(v_reuseFailAlloc_3078_, 3, v_self_2954_);
lean_ctor_set(v_reuseFailAlloc_3078_, 4, v_target_x3f_3058_);
lean_ctor_set(v_reuseFailAlloc_3078_, 5, v_proof_x3f_3059_);
lean_ctor_set(v_reuseFailAlloc_3078_, 6, v_size_3061_);
lean_ctor_set(v_reuseFailAlloc_3078_, 7, v_idx_3066_);
lean_ctor_set(v_reuseFailAlloc_3078_, 8, v_generation_3067_);
lean_ctor_set(v_reuseFailAlloc_3078_, 9, v_mt_3068_);
lean_ctor_set(v_reuseFailAlloc_3078_, 10, v_sTerms_3069_);
lean_ctor_set(v_reuseFailAlloc_3078_, 11, v_ematchDiagSource_3071_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12, v_flipped_3060_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12 + 1, v_interpreted_3062_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12 + 2, v_ctor_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12 + 3, v_hasLambdas_3064_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12 + 4, v_heqProofs_3065_);
lean_ctor_set_uint8(v_reuseFailAlloc_3078_, sizeof(void*)*12 + 5, v_funCC_3070_);
v___x_3076_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
lean_object* v___x_3077_; 
v___x_3077_ = l_Lean_Meta_Grind_setENode___redArg(v_fst_3012_, v___x_3076_, v___y_2936_);
v___y_2990_ = v___x_3077_;
goto v___jp_2989_;
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec(v_fst_3012_);
lean_dec_ref(v_next_2955_);
lean_dec_ref(v_self_2954_);
lean_del_object(v___x_2952_);
lean_del_object(v___x_2945_);
lean_dec(v_snd_2943_);
lean_dec_ref(v_rootNew_2933_);
v_a_3081_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3053_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3053_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_dec(v_fst_3012_);
lean_dec_ref(v_self_2954_);
v___y_2990_ = v___x_3051_;
goto v___jp_2989_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_3012_);
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
goto v___jp_2974_;
}
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec(v_fst_3012_);
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_next_2955_);
lean_dec_ref(v_self_2954_);
lean_del_object(v___x_2952_);
lean_del_object(v___x_2945_);
lean_dec(v_snd_2943_);
lean_dec_ref(v_rootNew_2933_);
v_a_3093_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3013_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3013_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
}
else
{
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
goto v___jp_2974_;
}
}
}
}
else
{
lean_dec_ref(v___x_3000_);
lean_dec(v_ematchDiagSource_2970_);
lean_dec(v_sTerms_2968_);
lean_dec(v_mt_2967_);
lean_dec(v_generation_2966_);
lean_dec(v_idx_2965_);
lean_dec(v_size_2960_);
lean_dec(v_proof_x3f_2958_);
lean_dec(v_target_x3f_2957_);
lean_dec_ref(v_self_2954_);
v___y_2990_ = v___x_3001_;
goto v___jp_2989_;
}
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_del_object(v___x_2945_);
lean_dec(v_snd_2943_);
lean_dec_ref(v_rootNew_2933_);
v_a_3105_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_2949_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_2949_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object* v_lhs_3115_, lean_object* v_rootNew_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
uint8_t v_a_26298__boxed_3126_; lean_object* v_res_3127_; 
v_a_26298__boxed_3126_ = lean_unbox(v_a_3117_);
v_res_3127_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3115_, v_rootNew_3116_, v_a_26298__boxed_3126_, v_a_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec(v___y_3119_);
lean_dec_ref(v_lhs_3115_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object* v_lhs_3128_, lean_object* v_rootNew_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_rootNew_3129_, v_a_3134_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v___x_3143_ = lean_box(0);
lean_inc_ref(v_lhs_3128_);
v___x_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v_lhs_3128_);
v___x_3145_ = lean_unbox(v_a_3142_);
lean_dec(v_a_3142_);
v___x_3146_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3128_, v_rootNew_3129_, v___x_3145_, v___x_3144_, v_a_3130_, v_a_3134_, v_a_3136_, v_a_3137_, v_a_3138_, v_a_3139_);
lean_dec_ref(v_lhs_3128_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3160_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3149_ = v___x_3146_;
v_isShared_3150_ = v_isSharedCheck_3160_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3146_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3160_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v_fst_3151_; 
v_fst_3151_ = lean_ctor_get(v_a_3147_, 0);
lean_inc(v_fst_3151_);
lean_dec(v_a_3147_);
if (lean_obj_tag(v_fst_3151_) == 0)
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
v___x_3152_ = lean_box(0);
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 0, v___x_3152_);
v___x_3154_ = v___x_3149_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
else
{
lean_object* v_val_3156_; lean_object* v___x_3158_; 
v_val_3156_ = lean_ctor_get(v_fst_3151_, 0);
lean_inc(v_val_3156_);
lean_dec_ref_known(v_fst_3151_, 1);
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 0, v_val_3156_);
v___x_3158_ = v___x_3149_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_val_3156_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
v_a_3161_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3146_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3146_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec_ref(v_rootNew_3129_);
lean_dec_ref(v_lhs_3128_);
v_a_3169_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3141_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3141_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object* v_lhs_3177_, lean_object* v_rootNew_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3177_, v_rootNew_3178_, v_a_3179_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_);
lean_dec(v_a_3188_);
lean_dec_ref(v_a_3187_);
lean_dec(v_a_3186_);
lean_dec_ref(v_a_3185_);
lean_dec(v_a_3184_);
lean_dec_ref(v_a_3183_);
lean_dec(v_a_3182_);
lean_dec_ref(v_a_3181_);
lean_dec(v_a_3180_);
lean_dec(v_a_3179_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object* v___x_3191_, lean_object* v_00_u03b2_3192_, lean_object* v_x_3193_, lean_object* v_x_3194_){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_3191_, v_x_3193_, v_x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object* v___x_3196_, lean_object* v_00_u03b2_3197_, lean_object* v_x_3198_, lean_object* v_x_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(v___x_3196_, v_00_u03b2_3197_, v_x_3198_, v_x_3199_);
lean_dec_ref(v_x_3198_);
lean_dec_ref(v___x_3196_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object* v___x_3201_, lean_object* v_00_u03b2_3202_, lean_object* v_x_3203_, lean_object* v_x_3204_, lean_object* v_x_3205_){
_start:
{
lean_object* v___x_3206_; 
v___x_3206_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_3201_, v_x_3203_, v_x_3204_, v_x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object* v___x_3207_, lean_object* v_00_u03b2_3208_, lean_object* v_x_3209_, lean_object* v_x_3210_, lean_object* v_x_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(v___x_3207_, v_00_u03b2_3208_, v_x_3209_, v_x_3210_, v_x_3211_);
lean_dec_ref(v___x_3207_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object* v_lhs_3213_, lean_object* v_rootNew_3214_, uint8_t v_a_3215_, lean_object* v_inst_3216_, lean_object* v_a_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3213_, v_rootNew_3214_, v_a_3215_, v_a_3217_, v___y_3218_, v___y_3222_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
return v___x_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object* v_lhs_3230_, lean_object* v_rootNew_3231_, lean_object* v_a_3232_, lean_object* v_inst_3233_, lean_object* v_a_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
uint8_t v_a_26657__boxed_3246_; lean_object* v_res_3247_; 
v_a_26657__boxed_3246_ = lean_unbox(v_a_3232_);
v_res_3247_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(v_lhs_3230_, v_rootNew_3231_, v_a_26657__boxed_3246_, v_inst_3233_, v_a_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
lean_dec(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec(v___y_3235_);
lean_dec_ref(v_lhs_3230_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object* v___x_3248_, lean_object* v_00_u03b2_3249_, lean_object* v_x_3250_, size_t v_x_3251_, lean_object* v_x_3252_){
_start:
{
lean_object* v___x_3253_; 
lean_inc_ref(v_x_3250_);
v___x_3253_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_3248_, v_x_3250_, v_x_3251_, v_x_3252_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object* v___x_3254_, lean_object* v_00_u03b2_3255_, lean_object* v_x_3256_, lean_object* v_x_3257_, lean_object* v_x_3258_){
_start:
{
size_t v_x_26700__boxed_3259_; lean_object* v_res_3260_; 
v_x_26700__boxed_3259_ = lean_unbox_usize(v_x_3257_);
lean_dec(v_x_3257_);
v_res_3260_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(v___x_3254_, v_00_u03b2_3255_, v_x_3256_, v_x_26700__boxed_3259_, v_x_3258_);
lean_dec_ref(v_x_3256_);
lean_dec_ref(v___x_3254_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object* v___x_3261_, lean_object* v_00_u03b2_3262_, lean_object* v_x_3263_, size_t v_x_3264_, size_t v_x_3265_, lean_object* v_x_3266_, lean_object* v_x_3267_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_3261_, v_x_3263_, v_x_3264_, v_x_3265_, v_x_3266_, v_x_3267_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object* v___x_3269_, lean_object* v_00_u03b2_3270_, lean_object* v_x_3271_, lean_object* v_x_3272_, lean_object* v_x_3273_, lean_object* v_x_3274_, lean_object* v_x_3275_){
_start:
{
size_t v_x_26714__boxed_3276_; size_t v_x_26715__boxed_3277_; lean_object* v_res_3278_; 
v_x_26714__boxed_3276_ = lean_unbox_usize(v_x_3272_);
lean_dec(v_x_3272_);
v_x_26715__boxed_3277_ = lean_unbox_usize(v_x_3273_);
lean_dec(v_x_3273_);
v_res_3278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(v___x_3269_, v_00_u03b2_3270_, v_x_3271_, v_x_26714__boxed_3276_, v_x_26715__boxed_3277_, v_x_3274_, v_x_3275_);
lean_dec_ref(v___x_3269_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object* v___x_3279_, lean_object* v_00_u03b2_3280_, lean_object* v_keys_3281_, lean_object* v_vals_3282_, lean_object* v_heq_3283_, lean_object* v_i_3284_, lean_object* v_k_3285_){
_start:
{
lean_object* v___x_3286_; 
v___x_3286_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_3279_, v_keys_3281_, v_vals_3282_, v_i_3284_, v_k_3285_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3287_, lean_object* v_00_u03b2_3288_, lean_object* v_keys_3289_, lean_object* v_vals_3290_, lean_object* v_heq_3291_, lean_object* v_i_3292_, lean_object* v_k_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(v___x_3287_, v_00_u03b2_3288_, v_keys_3289_, v_vals_3290_, v_heq_3291_, v_i_3292_, v_k_3293_);
lean_dec_ref(v_vals_3290_);
lean_dec_ref(v_keys_3289_);
lean_dec_ref(v___x_3287_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object* v___x_3295_, lean_object* v_00_u03b2_3296_, lean_object* v_n_3297_, lean_object* v_k_3298_, lean_object* v_v_3299_){
_start:
{
lean_object* v___x_3300_; 
v___x_3300_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_3295_, v_n_3297_, v_k_3298_, v_v_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object* v___x_3301_, lean_object* v_00_u03b2_3302_, lean_object* v_n_3303_, lean_object* v_k_3304_, lean_object* v_v_3305_){
_start:
{
lean_object* v_res_3306_; 
v_res_3306_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(v___x_3301_, v_00_u03b2_3302_, v_n_3303_, v_k_3304_, v_v_3305_);
lean_dec_ref(v___x_3301_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object* v___x_3307_, lean_object* v_00_u03b2_3308_, size_t v_depth_3309_, lean_object* v_keys_3310_, lean_object* v_vals_3311_, lean_object* v_heq_3312_, lean_object* v_i_3313_, lean_object* v_entries_3314_){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_3307_, v_depth_3309_, v_keys_3310_, v_vals_3311_, v_i_3313_, v_entries_3314_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object* v___x_3316_, lean_object* v_00_u03b2_3317_, lean_object* v_depth_3318_, lean_object* v_keys_3319_, lean_object* v_vals_3320_, lean_object* v_heq_3321_, lean_object* v_i_3322_, lean_object* v_entries_3323_){
_start:
{
size_t v_depth_boxed_3324_; lean_object* v_res_3325_; 
v_depth_boxed_3324_ = lean_unbox_usize(v_depth_3318_);
lean_dec(v_depth_3318_);
v_res_3325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(v___x_3316_, v_00_u03b2_3317_, v_depth_boxed_3324_, v_keys_3319_, v_vals_3320_, v_heq_3321_, v_i_3322_, v_entries_3323_);
lean_dec_ref(v_vals_3320_);
lean_dec_ref(v_keys_3319_);
lean_dec_ref(v___x_3316_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object* v___x_3326_, lean_object* v_00_u03b2_3327_, lean_object* v_x_3328_, lean_object* v_x_3329_, lean_object* v_x_3330_, lean_object* v_x_3331_){
_start:
{
lean_object* v___x_3332_; 
v___x_3332_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_3326_, v_x_3328_, v_x_3329_, v_x_3330_, v_x_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v___x_3333_, lean_object* v_00_u03b2_3334_, lean_object* v_x_3335_, lean_object* v_x_3336_, lean_object* v_x_3337_, lean_object* v_x_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(v___x_3333_, v_00_u03b2_3334_, v_x_3335_, v_x_3336_, v_x_3337_, v_x_3338_);
lean_dec_ref(v___x_3333_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object* v_as_x27_3340_, lean_object* v_b_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
if (lean_obj_tag(v_as_x27_3340_) == 0)
{
lean_object* v___x_3353_; 
v___x_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3353_, 0, v_b_3341_);
return v___x_3353_;
}
else
{
lean_object* v_head_3354_; lean_object* v_tail_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v_head_3354_ = lean_ctor_get(v_as_x27_3340_, 0);
v_tail_3355_ = lean_ctor_get(v_as_x27_3340_, 1);
v___x_3356_ = lean_box(0);
lean_inc(v_head_3354_);
v___x_3357_ = l_Lean_Meta_Grind_propagateUp(v_head_3354_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_dec_ref_known(v___x_3357_, 1);
v_as_x27_3340_ = v_tail_3355_;
v_b_3341_ = v___x_3356_;
goto _start;
}
else
{
return v___x_3357_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object* v_as_x27_3359_, lean_object* v_b_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3359_, v_b_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
lean_dec(v___y_3370_);
lean_dec_ref(v___y_3369_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec(v_as_x27_3359_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object* v_as_x27_3373_, lean_object* v_b_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
if (lean_obj_tag(v_as_x27_3373_) == 0)
{
lean_object* v___x_3386_; 
v___x_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3386_, 0, v_b_3374_);
return v___x_3386_;
}
else
{
lean_object* v_head_3387_; lean_object* v_tail_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; 
v_head_3387_ = lean_ctor_get(v_as_x27_3373_, 0);
v_tail_3388_ = lean_ctor_get(v_as_x27_3373_, 1);
v___x_3389_ = lean_box(0);
lean_inc(v_head_3387_);
v___x_3390_ = l_Lean_Meta_Grind_propagateDown(v_head_3387_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_dec_ref_known(v___x_3390_, 1);
v_as_x27_3373_ = v_tail_3388_;
v_b_3374_ = v___x_3389_;
goto _start;
}
else
{
return v___x_3390_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object* v_as_x27_3392_, lean_object* v_b_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_3392_, v_b_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec(v_as_x27_3392_);
return v_res_3405_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1(void){
_start:
{
lean_object* v_cls_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v_cls_3409_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_3410_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_3411_ = l_Lean_Name_append(v___x_3410_, v_cls_3409_);
return v___x_3411_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3(void){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2));
v___x_3414_ = l_Lean_stringToMessageData(v___x_3413_);
return v___x_3414_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5(void){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4));
v___x_3417_ = l_Lean_stringToMessageData(v___x_3416_);
return v___x_3417_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6));
v___x_3420_ = l_Lean_stringToMessageData(v___x_3419_);
return v___x_3420_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3422_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8));
v___x_3423_ = l_Lean_stringToMessageData(v___x_3422_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object* v_proof_3424_, uint8_t v_isHEq_3425_, lean_object* v_lhs_3426_, lean_object* v_rhs_3427_, lean_object* v_lhsNode_3428_, lean_object* v_rhsNode_3429_, lean_object* v_lhsRoot_3430_, lean_object* v_rhsRoot_3431_, uint8_t v_flipped_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_){
_start:
{
lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v___y_3460_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; uint8_t v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; uint8_t v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; uint8_t v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; uint8_t v___y_3530_; uint8_t v___y_3531_; uint8_t v___y_3532_; lean_object* v___y_3562_; lean_object* v___y_3563_; lean_object* v___y_3564_; lean_object* v___y_3565_; uint8_t v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; uint8_t v___y_3571_; lean_object* v___y_3572_; lean_object* v___y_3573_; uint8_t v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; uint8_t v___y_3593_; uint8_t v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; uint8_t v___y_3597_; uint8_t v___y_3598_; uint8_t v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; uint8_t v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v_toCold_3682_; lean_object* v_options_3683_; lean_object* v_inheritedTraceOptions_3684_; uint8_t v_hasTrace_3685_; lean_object* v_cls_3686_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v_fns_u2082_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v_fns_u2081_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; 
v_toCold_3682_ = lean_ctor_get(v_a_3441_, 0);
v_options_3683_ = lean_ctor_get(v_toCold_3682_, 2);
v_inheritedTraceOptions_3684_ = lean_ctor_get(v_toCold_3682_, 11);
v_hasTrace_3685_ = lean_ctor_get_uint8(v_options_3683_, sizeof(void*)*1);
v_cls_3686_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
if (v_hasTrace_3685_ == 0)
{
v___y_3806_ = v_a_3433_;
v___y_3807_ = v_a_3434_;
v___y_3808_ = v_a_3435_;
v___y_3809_ = v_a_3436_;
v___y_3810_ = v_a_3437_;
v___y_3811_ = v_a_3438_;
v___y_3812_ = v_a_3439_;
v___y_3813_ = v_a_3440_;
v___y_3814_ = v_a_3441_;
v___y_3815_ = v_a_3442_;
goto v___jp_3805_;
}
else
{
lean_object* v___x_3886_; uint8_t v___x_3887_; 
v___x_3886_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3887_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3684_, v_options_3683_, v___x_3886_);
if (v___x_3887_ == 0)
{
v___y_3806_ = v_a_3433_;
v___y_3807_ = v_a_3434_;
v___y_3808_ = v_a_3435_;
v___y_3809_ = v_a_3436_;
v___y_3810_ = v_a_3437_;
v___y_3811_ = v_a_3438_;
v___y_3812_ = v_a_3439_;
v___y_3813_ = v_a_3440_;
v___y_3814_ = v_a_3441_;
v___y_3815_ = v_a_3442_;
goto v___jp_3805_;
}
else
{
lean_object* v___x_3888_; 
v___x_3888_ = l_Lean_Meta_Grind_updateLastTag(v_a_3433_, v_a_3434_, v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v___x_3889_; 
lean_dec_ref_known(v___x_3888_, 1);
lean_inc_ref(v_lhs_3426_);
v___x_3889_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3426_, v_a_3433_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3891_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
lean_inc_ref(v_rhs_3427_);
v___x_3891_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_3427_, v_a_3433_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
v___x_3893_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7);
v___x_3894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3893_);
lean_ctor_set(v___x_3894_, 1, v_a_3890_);
v___x_3895_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9);
v___x_3896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3894_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
lean_ctor_set(v___x_3897_, 1, v_a_3892_);
v___x_3898_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3686_, v___x_3897_, v_a_3439_, v_a_3440_, v_a_3441_, v_a_3442_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_dec_ref_known(v___x_3898_, 1);
v___y_3806_ = v_a_3433_;
v___y_3807_ = v_a_3434_;
v___y_3808_ = v_a_3435_;
v___y_3809_ = v_a_3436_;
v___y_3810_ = v_a_3437_;
v___y_3811_ = v_a_3438_;
v___y_3812_ = v_a_3439_;
v___y_3813_ = v_a_3440_;
v___y_3814_ = v_a_3441_;
v___y_3815_ = v_a_3442_;
goto v___jp_3805_;
}
else
{
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhsNode_3428_);
lean_dec_ref(v_rhs_3427_);
lean_dec_ref(v_lhs_3426_);
lean_dec_ref(v_proof_3424_);
return v___x_3898_;
}
}
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_dec(v_a_3890_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhsNode_3428_);
lean_dec_ref(v_rhs_3427_);
lean_dec_ref(v_lhs_3426_);
lean_dec_ref(v_proof_3424_);
v_a_3899_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3891_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3891_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3914_; 
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhsNode_3428_);
lean_dec_ref(v_rhs_3427_);
lean_dec_ref(v_lhs_3426_);
lean_dec_ref(v_proof_3424_);
v_a_3907_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3909_ = v___x_3889_;
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3889_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhsNode_3428_);
lean_dec_ref(v_rhs_3427_);
lean_dec_ref(v_lhs_3426_);
lean_dec_ref(v_proof_3424_);
return v___x_3888_;
}
}
}
v___jp_3444_:
{
lean_object* v___x_3461_; 
v___x_3461_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3451_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3487_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3487_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3487_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
uint8_t v___x_3466_; 
v___x_3466_ = lean_unbox(v_a_3462_);
lean_dec(v_a_3462_);
if (v___x_3466_ == 0)
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
lean_del_object(v___x_3464_);
v___x_3467_ = l_Lean_Meta_Grind_ParentSet_elems(v___y_3450_);
lean_dec(v___y_3450_);
v___x_3468_ = lean_box(0);
v___x_3469_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v___x_3467_, v___x_3468_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec(v___x_3467_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v___x_3470_; 
lean_dec_ref_known(v___x_3469_, 1);
v___x_3470_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v___y_3446_, v___x_3468_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v___x_3471_; 
lean_dec_ref_known(v___x_3470_, 1);
v___x_3471_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v___y_3445_, v___y_3449_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec_ref(v___y_3449_);
lean_dec_ref(v___y_3445_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v___x_3472_; 
lean_dec_ref_known(v___x_3471_, 1);
v___x_3472_ = l_Lean_Meta_Grind_PendingSolverPropagations_propagate(v___y_3447_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3481_; 
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3481_ == 0)
{
lean_object* v_unused_3482_; 
v_unused_3482_ = lean_ctor_get(v___x_3472_, 0);
lean_dec(v_unused_3482_);
v___x_3474_ = v___x_3472_;
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
else
{
lean_dec(v___x_3472_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3481_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
uint8_t v___x_3476_; 
v___x_3476_ = l_Lean_Expr_isTrue(v___y_3448_);
if (v___x_3476_ == 0)
{
lean_object* v___x_3478_; 
lean_dec(v___y_3446_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3468_);
v___x_3478_ = v___x_3474_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3468_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
else
{
lean_object* v___x_3480_; 
lean_del_object(v___x_3474_);
v___x_3480_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v___y_3446_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec(v___y_3446_);
return v___x_3480_;
}
}
}
else
{
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3446_);
return v___x_3472_;
}
}
else
{
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
return v___x_3471_;
}
}
else
{
lean_dec_ref(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
return v___x_3470_;
}
}
else
{
lean_dec_ref(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
return v___x_3469_;
}
}
else
{
lean_object* v___x_3483_; lean_object* v___x_3485_; 
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
v___x_3483_ = lean_box(0);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 0, v___x_3483_);
v___x_3485_ = v___x_3464_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3483_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3495_; 
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
v_a_3488_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3490_ = v___x_3461_;
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3461_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3493_; 
if (v_isShared_3491_ == 0)
{
v___x_3493_ = v___x_3490_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3488_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
v___jp_3496_:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; 
lean_inc_ref(v___y_3505_);
v___x_3533_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v___x_3533_, 0, v___y_3505_);
lean_ctor_set(v___x_3533_, 1, v___y_3503_);
lean_ctor_set(v___x_3533_, 2, v___y_3522_);
lean_ctor_set(v___x_3533_, 3, v___y_3524_);
lean_ctor_set(v___x_3533_, 4, v___y_3529_);
lean_ctor_set(v___x_3533_, 5, v___y_3521_);
lean_ctor_set(v___x_3533_, 6, v___y_3515_);
lean_ctor_set(v___x_3533_, 7, v___y_3520_);
lean_ctor_set(v___x_3533_, 8, v___y_3514_);
lean_ctor_set(v___x_3533_, 9, v___y_3497_);
lean_ctor_set(v___x_3533_, 10, v___y_3504_);
lean_ctor_set(v___x_3533_, 11, v___y_3517_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12, v___y_3527_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12 + 1, v___y_3501_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12 + 2, v___y_3531_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12 + 3, v___y_3519_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12 + 4, v___y_3532_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*12 + 5, v___y_3530_);
lean_inc_ref(v___y_3506_);
v___x_3534_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3506_, v___x_3533_, v___y_3500_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v___x_3535_; 
lean_dec_ref_known(v___x_3534_, 1);
lean_inc_ref(v___y_3516_);
v___x_3535_ = l_Lean_Meta_Grind_propagateBeta(v___y_3516_, v___y_3525_, v___y_3500_, v___y_3518_, v___y_3511_, v___y_3507_, v___y_3526_, v___y_3510_, v___y_3499_, v___y_3509_, v___y_3523_, v___y_3513_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v___x_3536_; 
lean_dec_ref_known(v___x_3535_, 1);
lean_inc_ref(v___y_3528_);
v___x_3536_ = l_Lean_Meta_Grind_propagateBeta(v___y_3528_, v___y_3498_, v___y_3500_, v___y_3518_, v___y_3511_, v___y_3507_, v___y_3526_, v___y_3510_, v___y_3499_, v___y_3509_, v___y_3523_, v___y_3513_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v___x_3537_; 
lean_dec_ref_known(v___x_3536_, 1);
v___x_3537_ = l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(v_rhsRoot_3431_, v_lhsRoot_3430_, v___y_3500_, v___y_3499_, v___y_3509_, v___y_3523_, v___y_3513_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3539_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
v___x_3539_ = l_Lean_Meta_Grind_resetParentsOf___redArg(v___y_3502_, v___y_3500_);
lean_dec_ref(v___y_3502_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v___x_3540_; 
lean_dec_ref_known(v___x_3539_, 1);
lean_inc_ref(v___y_3506_);
v___x_3540_ = l_Lean_Meta_Grind_copyParentsTo(v___y_3512_, v___y_3506_, v___y_3500_, v___y_3518_, v___y_3511_, v___y_3507_, v___y_3526_, v___y_3510_, v___y_3499_, v___y_3509_, v___y_3523_, v___y_3513_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v___x_3541_; 
lean_dec_ref_known(v___x_3540_, 1);
v___x_3541_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3500_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; uint8_t v___x_3543_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3541_, 1);
v___x_3543_ = lean_unbox(v_a_3542_);
lean_dec(v_a_3542_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; 
v___x_3544_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v___y_3505_, v___y_3500_, v___y_3518_, v___y_3511_, v___y_3507_, v___y_3526_, v___y_3510_, v___y_3499_, v___y_3509_, v___y_3523_, v___y_3513_);
lean_dec_ref(v___y_3505_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_dec_ref_known(v___x_3544_, 1);
v___y_3445_ = v___y_3516_;
v___y_3446_ = v___y_3508_;
v___y_3447_ = v_a_3538_;
v___y_3448_ = v___y_3506_;
v___y_3449_ = v___y_3528_;
v___y_3450_ = v___y_3512_;
v___y_3451_ = v___y_3500_;
v___y_3452_ = v___y_3518_;
v___y_3453_ = v___y_3511_;
v___y_3454_ = v___y_3507_;
v___y_3455_ = v___y_3526_;
v___y_3456_ = v___y_3510_;
v___y_3457_ = v___y_3499_;
v___y_3458_ = v___y_3509_;
v___y_3459_ = v___y_3523_;
v___y_3460_ = v___y_3513_;
goto v___jp_3444_;
}
else
{
lean_dec(v_a_3538_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
return v___x_3544_;
}
}
else
{
lean_dec_ref(v___y_3505_);
v___y_3445_ = v___y_3516_;
v___y_3446_ = v___y_3508_;
v___y_3447_ = v_a_3538_;
v___y_3448_ = v___y_3506_;
v___y_3449_ = v___y_3528_;
v___y_3450_ = v___y_3512_;
v___y_3451_ = v___y_3500_;
v___y_3452_ = v___y_3518_;
v___y_3453_ = v___y_3511_;
v___y_3454_ = v___y_3507_;
v___y_3455_ = v___y_3526_;
v___y_3456_ = v___y_3510_;
v___y_3457_ = v___y_3499_;
v___y_3458_ = v___y_3509_;
v___y_3459_ = v___y_3523_;
v___y_3460_ = v___y_3513_;
goto v___jp_3444_;
}
}
else
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3552_; 
lean_dec(v_a_3538_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
v_a_3545_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3547_ = v___x_3541_;
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3541_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_a_3545_);
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
lean_dec(v_a_3538_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
return v___x_3540_;
}
}
else
{
lean_dec(v_a_3538_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
return v___x_3539_;
}
}
else
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v___y_3502_);
v_a_3553_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v___x_3537_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3537_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
else
{
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v___y_3502_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
return v___x_3536_;
}
}
else
{
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v___y_3502_);
lean_dec_ref(v___y_3498_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
return v___x_3535_;
}
}
else
{
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3525_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3512_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec_ref(v___y_3502_);
lean_dec_ref(v___y_3498_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
return v___x_3534_;
}
}
v___jp_3561_:
{
if (v_isHEq_3425_ == 0)
{
if (v___y_3571_ == 0)
{
v___y_3497_ = v___y_3562_;
v___y_3498_ = v___y_3563_;
v___y_3499_ = v___y_3565_;
v___y_3500_ = v___y_3564_;
v___y_3501_ = v___y_3566_;
v___y_3502_ = v___y_3569_;
v___y_3503_ = v___y_3568_;
v___y_3504_ = v___y_3567_;
v___y_3505_ = v___y_3570_;
v___y_3506_ = v___y_3572_;
v___y_3507_ = v___y_3573_;
v___y_3508_ = v___y_3575_;
v___y_3509_ = v___y_3576_;
v___y_3510_ = v___y_3577_;
v___y_3511_ = v___y_3578_;
v___y_3512_ = v___y_3579_;
v___y_3513_ = v___y_3580_;
v___y_3514_ = v___y_3581_;
v___y_3515_ = v___y_3582_;
v___y_3516_ = v___y_3583_;
v___y_3517_ = v___y_3584_;
v___y_3518_ = v___y_3585_;
v___y_3519_ = v___y_3598_;
v___y_3520_ = v___y_3586_;
v___y_3521_ = v___y_3587_;
v___y_3522_ = v___y_3588_;
v___y_3523_ = v___y_3591_;
v___y_3524_ = v___y_3590_;
v___y_3525_ = v___y_3589_;
v___y_3526_ = v___y_3592_;
v___y_3527_ = v___y_3593_;
v___y_3528_ = v___y_3596_;
v___y_3529_ = v___y_3595_;
v___y_3530_ = v___y_3594_;
v___y_3531_ = v___y_3597_;
v___y_3532_ = v___y_3574_;
goto v___jp_3496_;
}
else
{
v___y_3497_ = v___y_3562_;
v___y_3498_ = v___y_3563_;
v___y_3499_ = v___y_3565_;
v___y_3500_ = v___y_3564_;
v___y_3501_ = v___y_3566_;
v___y_3502_ = v___y_3569_;
v___y_3503_ = v___y_3568_;
v___y_3504_ = v___y_3567_;
v___y_3505_ = v___y_3570_;
v___y_3506_ = v___y_3572_;
v___y_3507_ = v___y_3573_;
v___y_3508_ = v___y_3575_;
v___y_3509_ = v___y_3576_;
v___y_3510_ = v___y_3577_;
v___y_3511_ = v___y_3578_;
v___y_3512_ = v___y_3579_;
v___y_3513_ = v___y_3580_;
v___y_3514_ = v___y_3581_;
v___y_3515_ = v___y_3582_;
v___y_3516_ = v___y_3583_;
v___y_3517_ = v___y_3584_;
v___y_3518_ = v___y_3585_;
v___y_3519_ = v___y_3598_;
v___y_3520_ = v___y_3586_;
v___y_3521_ = v___y_3587_;
v___y_3522_ = v___y_3588_;
v___y_3523_ = v___y_3591_;
v___y_3524_ = v___y_3590_;
v___y_3525_ = v___y_3589_;
v___y_3526_ = v___y_3592_;
v___y_3527_ = v___y_3593_;
v___y_3528_ = v___y_3596_;
v___y_3529_ = v___y_3595_;
v___y_3530_ = v___y_3594_;
v___y_3531_ = v___y_3597_;
v___y_3532_ = v___y_3571_;
goto v___jp_3496_;
}
}
else
{
v___y_3497_ = v___y_3562_;
v___y_3498_ = v___y_3563_;
v___y_3499_ = v___y_3565_;
v___y_3500_ = v___y_3564_;
v___y_3501_ = v___y_3566_;
v___y_3502_ = v___y_3569_;
v___y_3503_ = v___y_3568_;
v___y_3504_ = v___y_3567_;
v___y_3505_ = v___y_3570_;
v___y_3506_ = v___y_3572_;
v___y_3507_ = v___y_3573_;
v___y_3508_ = v___y_3575_;
v___y_3509_ = v___y_3576_;
v___y_3510_ = v___y_3577_;
v___y_3511_ = v___y_3578_;
v___y_3512_ = v___y_3579_;
v___y_3513_ = v___y_3580_;
v___y_3514_ = v___y_3581_;
v___y_3515_ = v___y_3582_;
v___y_3516_ = v___y_3583_;
v___y_3517_ = v___y_3584_;
v___y_3518_ = v___y_3585_;
v___y_3519_ = v___y_3598_;
v___y_3520_ = v___y_3586_;
v___y_3521_ = v___y_3587_;
v___y_3522_ = v___y_3588_;
v___y_3523_ = v___y_3591_;
v___y_3524_ = v___y_3590_;
v___y_3525_ = v___y_3589_;
v___y_3526_ = v___y_3592_;
v___y_3527_ = v___y_3593_;
v___y_3528_ = v___y_3596_;
v___y_3529_ = v___y_3595_;
v___y_3530_ = v___y_3594_;
v___y_3531_ = v___y_3597_;
v___y_3532_ = v_isHEq_3425_;
goto v___jp_3496_;
}
}
v___jp_3599_:
{
lean_object* v___x_3622_; 
v___x_3622_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v___y_3610_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3622_) == 0)
{
uint8_t v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
lean_dec_ref_known(v___x_3622_, 1);
v___x_3623_ = 0;
v___x_3624_ = lean_st_ref_get(v___y_3612_);
v___x_3625_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_3624_, v_lhs_3426_, v___x_3623_);
lean_dec(v___x_3624_);
v___x_3626_ = lean_st_ref_get(v___y_3612_);
lean_inc_ref(v___y_3606_);
v___x_3627_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3626_, v___y_3606_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___x_3626_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; lean_object* v_self_3629_; lean_object* v_root_3630_; lean_object* v_congr_3631_; lean_object* v_target_x3f_3632_; lean_object* v_proof_x3f_3633_; uint8_t v_flipped_3634_; lean_object* v_size_3635_; uint8_t v_interpreted_3636_; uint8_t v_ctor_3637_; uint8_t v_hasLambdas_3638_; uint8_t v_heqProofs_3639_; lean_object* v_idx_3640_; lean_object* v_generation_3641_; lean_object* v_mt_3642_; lean_object* v_sTerms_3643_; uint8_t v_funCC_3644_; lean_object* v_ematchDiagSource_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3672_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 1);
v_self_3629_ = lean_ctor_get(v_a_3628_, 0);
v_root_3630_ = lean_ctor_get(v_a_3628_, 2);
v_congr_3631_ = lean_ctor_get(v_a_3628_, 3);
v_target_x3f_3632_ = lean_ctor_get(v_a_3628_, 4);
v_proof_x3f_3633_ = lean_ctor_get(v_a_3628_, 5);
v_flipped_3634_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12);
v_size_3635_ = lean_ctor_get(v_a_3628_, 6);
v_interpreted_3636_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12 + 1);
v_ctor_3637_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12 + 2);
v_hasLambdas_3638_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12 + 3);
v_heqProofs_3639_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12 + 4);
v_idx_3640_ = lean_ctor_get(v_a_3628_, 7);
v_generation_3641_ = lean_ctor_get(v_a_3628_, 8);
v_mt_3642_ = lean_ctor_get(v_a_3628_, 9);
v_sTerms_3643_ = lean_ctor_get(v_a_3628_, 10);
v_funCC_3644_ = lean_ctor_get_uint8(v_a_3628_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3645_ = lean_ctor_get(v_a_3628_, 11);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_a_3628_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; 
v_unused_3673_ = lean_ctor_get(v_a_3628_, 1);
lean_dec(v_unused_3673_);
v___x_3647_ = v_a_3628_;
v_isShared_3648_ = v_isSharedCheck_3672_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_ematchDiagSource_3645_);
lean_inc(v_sTerms_3643_);
lean_inc(v_mt_3642_);
lean_inc(v_generation_3641_);
lean_inc(v_idx_3640_);
lean_inc(v_size_3635_);
lean_inc(v_proof_x3f_3633_);
lean_inc(v_target_x3f_3632_);
lean_inc(v_congr_3631_);
lean_inc(v_root_3630_);
lean_inc(v_self_3629_);
lean_dec(v_a_3628_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3672_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v_self_3649_; lean_object* v_next_3650_; lean_object* v_root_3651_; lean_object* v_congr_3652_; lean_object* v_target_x3f_3653_; lean_object* v_proof_x3f_3654_; uint8_t v_flipped_3655_; lean_object* v_size_3656_; uint8_t v_interpreted_3657_; uint8_t v_ctor_3658_; uint8_t v_hasLambdas_3659_; uint8_t v_heqProofs_3660_; lean_object* v_idx_3661_; lean_object* v_generation_3662_; lean_object* v_mt_3663_; lean_object* v_sTerms_3664_; uint8_t v_funCC_3665_; lean_object* v_ematchDiagSource_3666_; lean_object* v___x_3668_; 
v_self_3649_ = lean_ctor_get(v_rhsRoot_3431_, 0);
v_next_3650_ = lean_ctor_get(v_rhsRoot_3431_, 1);
v_root_3651_ = lean_ctor_get(v_rhsRoot_3431_, 2);
v_congr_3652_ = lean_ctor_get(v_rhsRoot_3431_, 3);
v_target_x3f_3653_ = lean_ctor_get(v_rhsRoot_3431_, 4);
v_proof_x3f_3654_ = lean_ctor_get(v_rhsRoot_3431_, 5);
v_flipped_3655_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12);
v_size_3656_ = lean_ctor_get(v_rhsRoot_3431_, 6);
v_interpreted_3657_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12 + 1);
v_ctor_3658_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12 + 2);
v_hasLambdas_3659_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12 + 3);
v_heqProofs_3660_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12 + 4);
v_idx_3661_ = lean_ctor_get(v_rhsRoot_3431_, 7);
v_generation_3662_ = lean_ctor_get(v_rhsRoot_3431_, 8);
v_mt_3663_ = lean_ctor_get(v_rhsRoot_3431_, 9);
v_sTerms_3664_ = lean_ctor_get(v_rhsRoot_3431_, 10);
v_funCC_3665_ = lean_ctor_get_uint8(v_rhsRoot_3431_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3666_ = lean_ctor_get(v_rhsRoot_3431_, 11);
lean_inc_ref(v_next_3650_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 1, v_next_3650_);
v___x_3668_ = v___x_3647_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_self_3629_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v_next_3650_);
lean_ctor_set(v_reuseFailAlloc_3671_, 2, v_root_3630_);
lean_ctor_set(v_reuseFailAlloc_3671_, 3, v_congr_3631_);
lean_ctor_set(v_reuseFailAlloc_3671_, 4, v_target_x3f_3632_);
lean_ctor_set(v_reuseFailAlloc_3671_, 5, v_proof_x3f_3633_);
lean_ctor_set(v_reuseFailAlloc_3671_, 6, v_size_3635_);
lean_ctor_set(v_reuseFailAlloc_3671_, 7, v_idx_3640_);
lean_ctor_set(v_reuseFailAlloc_3671_, 8, v_generation_3641_);
lean_ctor_set(v_reuseFailAlloc_3671_, 9, v_mt_3642_);
lean_ctor_set(v_reuseFailAlloc_3671_, 10, v_sTerms_3643_);
lean_ctor_set(v_reuseFailAlloc_3671_, 11, v_ematchDiagSource_3645_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12, v_flipped_3634_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12 + 1, v_interpreted_3636_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12 + 2, v_ctor_3637_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12 + 3, v_hasLambdas_3638_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12 + 4, v_heqProofs_3639_);
lean_ctor_set_uint8(v_reuseFailAlloc_3671_, sizeof(void*)*12 + 5, v_funCC_3644_);
v___x_3668_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
lean_object* v___x_3669_; 
v___x_3669_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3604_, v___x_3668_, v___y_3612_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v___x_3670_; 
lean_dec_ref_known(v___x_3669_, 1);
v___x_3670_ = lean_nat_add(v_size_3656_, v___y_3607_);
lean_dec(v___y_3607_);
if (v_hasLambdas_3659_ == 0)
{
lean_inc(v_target_x3f_3653_);
lean_inc_ref(v_congr_3652_);
lean_inc_ref(v_root_3651_);
lean_inc(v_proof_x3f_3654_);
lean_inc(v_idx_3661_);
lean_inc(v_ematchDiagSource_3666_);
lean_inc(v_generation_3662_);
lean_inc_ref(v_self_3649_);
lean_inc(v_sTerms_3664_);
lean_inc(v_mt_3663_);
v___y_3562_ = v_mt_3663_;
v___y_3563_ = v___y_3602_;
v___y_3564_ = v___y_3612_;
v___y_3565_ = v___y_3618_;
v___y_3566_ = v_interpreted_3657_;
v___y_3567_ = v_sTerms_3664_;
v___y_3568_ = v___y_3605_;
v___y_3569_ = v___y_3606_;
v___y_3570_ = v_self_3649_;
v___y_3571_ = v_heqProofs_3660_;
v___y_3572_ = v___y_3609_;
v___y_3573_ = v___y_3615_;
v___y_3574_ = v___y_3600_;
v___y_3575_ = v___x_3625_;
v___y_3576_ = v___y_3619_;
v___y_3577_ = v___y_3617_;
v___y_3578_ = v___y_3614_;
v___y_3579_ = v___y_3610_;
v___y_3580_ = v___y_3621_;
v___y_3581_ = v_generation_3662_;
v___y_3582_ = v___x_3670_;
v___y_3583_ = v___y_3601_;
v___y_3584_ = v_ematchDiagSource_3666_;
v___y_3585_ = v___y_3613_;
v___y_3586_ = v_idx_3661_;
v___y_3587_ = v_proof_x3f_3654_;
v___y_3588_ = v_root_3651_;
v___y_3589_ = v___y_3603_;
v___y_3590_ = v_congr_3652_;
v___y_3591_ = v___y_3620_;
v___y_3592_ = v___y_3616_;
v___y_3593_ = v_flipped_3655_;
v___y_3594_ = v_funCC_3665_;
v___y_3595_ = v_target_x3f_3653_;
v___y_3596_ = v___y_3608_;
v___y_3597_ = v_ctor_3658_;
v___y_3598_ = v___y_3611_;
goto v___jp_3561_;
}
else
{
lean_inc(v_target_x3f_3653_);
lean_inc_ref(v_congr_3652_);
lean_inc_ref(v_root_3651_);
lean_inc(v_proof_x3f_3654_);
lean_inc(v_idx_3661_);
lean_inc(v_ematchDiagSource_3666_);
lean_inc(v_generation_3662_);
lean_inc_ref(v_self_3649_);
lean_inc(v_sTerms_3664_);
lean_inc(v_mt_3663_);
v___y_3562_ = v_mt_3663_;
v___y_3563_ = v___y_3602_;
v___y_3564_ = v___y_3612_;
v___y_3565_ = v___y_3618_;
v___y_3566_ = v_interpreted_3657_;
v___y_3567_ = v_sTerms_3664_;
v___y_3568_ = v___y_3605_;
v___y_3569_ = v___y_3606_;
v___y_3570_ = v_self_3649_;
v___y_3571_ = v_heqProofs_3660_;
v___y_3572_ = v___y_3609_;
v___y_3573_ = v___y_3615_;
v___y_3574_ = v___y_3600_;
v___y_3575_ = v___x_3625_;
v___y_3576_ = v___y_3619_;
v___y_3577_ = v___y_3617_;
v___y_3578_ = v___y_3614_;
v___y_3579_ = v___y_3610_;
v___y_3580_ = v___y_3621_;
v___y_3581_ = v_generation_3662_;
v___y_3582_ = v___x_3670_;
v___y_3583_ = v___y_3601_;
v___y_3584_ = v_ematchDiagSource_3666_;
v___y_3585_ = v___y_3613_;
v___y_3586_ = v_idx_3661_;
v___y_3587_ = v_proof_x3f_3654_;
v___y_3588_ = v_root_3651_;
v___y_3589_ = v___y_3603_;
v___y_3590_ = v_congr_3652_;
v___y_3591_ = v___y_3620_;
v___y_3592_ = v___y_3616_;
v___y_3593_ = v_flipped_3655_;
v___y_3594_ = v_funCC_3665_;
v___y_3595_ = v_target_x3f_3653_;
v___y_3596_ = v___y_3608_;
v___y_3597_ = v_ctor_3658_;
v___y_3598_ = v_hasLambdas_3659_;
goto v___jp_3561_;
}
}
else
{
lean_dec(v___x_3625_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
return v___x_3669_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec(v___x_3625_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
v_a_3674_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3627_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3627_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
return v___x_3622_;
}
}
v___jp_3687_:
{
lean_object* v_self_3703_; lean_object* v_next_3704_; lean_object* v_size_3705_; uint8_t v_hasLambdas_3706_; uint8_t v_heqProofs_3707_; lean_object* v___x_3708_; 
v_self_3703_ = lean_ctor_get(v_lhsRoot_3430_, 0);
v_next_3704_ = lean_ctor_get(v_lhsRoot_3430_, 1);
v_size_3705_ = lean_ctor_get(v_lhsRoot_3430_, 6);
v_hasLambdas_3706_ = lean_ctor_get_uint8(v_lhsRoot_3430_, sizeof(void*)*12 + 3);
v_heqProofs_3707_ = lean_ctor_get_uint8(v_lhsRoot_3430_, sizeof(void*)*12 + 4);
v___x_3708_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_self_3703_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v_a_3709_; lean_object* v_root_3710_; lean_object* v___x_3711_; 
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
lean_inc(v_a_3709_);
lean_dec_ref_known(v___x_3708_, 1);
v_root_3710_ = lean_ctor_get(v_rhsNode_3429_, 2);
lean_inc_ref_n(v_root_3710_, 2);
lean_dec_ref(v_rhsNode_3429_);
lean_inc_ref(v_lhs_3426_);
v___x_3711_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3426_, v_root_3710_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_toCold_3712_; lean_object* v_options_3713_; uint8_t v_hasTrace_3714_; 
lean_dec_ref_known(v___x_3711_, 1);
v_toCold_3712_ = lean_ctor_get(v___y_3701_, 0);
v_options_3713_ = lean_ctor_get(v_toCold_3712_, 2);
v_hasTrace_3714_ = lean_ctor_get_uint8(v_options_3713_, sizeof(void*)*1);
if (v_hasTrace_3714_ == 0)
{
lean_inc(v_size_3705_);
lean_inc_ref(v_self_3703_);
lean_inc_ref(v_next_3704_);
v___y_3600_ = v_heqProofs_3707_;
v___y_3601_ = v___y_3688_;
v___y_3602_ = v_fns_u2082_3692_;
v___y_3603_ = v___y_3689_;
v___y_3604_ = v___y_3690_;
v___y_3605_ = v_next_3704_;
v___y_3606_ = v_self_3703_;
v___y_3607_ = v_size_3705_;
v___y_3608_ = v___y_3691_;
v___y_3609_ = v_root_3710_;
v___y_3610_ = v_a_3709_;
v___y_3611_ = v_hasLambdas_3706_;
v___y_3612_ = v___y_3693_;
v___y_3613_ = v___y_3694_;
v___y_3614_ = v___y_3695_;
v___y_3615_ = v___y_3696_;
v___y_3616_ = v___y_3697_;
v___y_3617_ = v___y_3698_;
v___y_3618_ = v___y_3699_;
v___y_3619_ = v___y_3700_;
v___y_3620_ = v___y_3701_;
v___y_3621_ = v___y_3702_;
goto v___jp_3599_;
}
else
{
lean_object* v_inheritedTraceOptions_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; 
v_inheritedTraceOptions_3715_ = lean_ctor_get(v_toCold_3712_, 11);
v___x_3716_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3717_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3715_, v_options_3713_, v___x_3716_);
if (v___x_3717_ == 0)
{
lean_inc(v_size_3705_);
lean_inc_ref(v_self_3703_);
lean_inc_ref(v_next_3704_);
v___y_3600_ = v_heqProofs_3707_;
v___y_3601_ = v___y_3688_;
v___y_3602_ = v_fns_u2082_3692_;
v___y_3603_ = v___y_3689_;
v___y_3604_ = v___y_3690_;
v___y_3605_ = v_next_3704_;
v___y_3606_ = v_self_3703_;
v___y_3607_ = v_size_3705_;
v___y_3608_ = v___y_3691_;
v___y_3609_ = v_root_3710_;
v___y_3610_ = v_a_3709_;
v___y_3611_ = v_hasLambdas_3706_;
v___y_3612_ = v___y_3693_;
v___y_3613_ = v___y_3694_;
v___y_3614_ = v___y_3695_;
v___y_3615_ = v___y_3696_;
v___y_3616_ = v___y_3697_;
v___y_3617_ = v___y_3698_;
v___y_3618_ = v___y_3699_;
v___y_3619_ = v___y_3700_;
v___y_3620_ = v___y_3701_;
v___y_3621_ = v___y_3702_;
goto v___jp_3599_;
}
else
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Lean_Meta_Grind_updateLastTag(v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3719_; 
lean_dec_ref_known(v___x_3718_, 1);
lean_inc_ref(v_lhs_3426_);
v___x_3719_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3426_, v___y_3693_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
lean_inc_ref(v_root_3710_);
v___x_3721_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_root_3710_, v___y_3693_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v_a_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
lean_inc(v_a_3722_);
lean_dec_ref_known(v___x_3721_, 1);
v___x_3723_ = lean_st_ref_get(v___y_3693_);
lean_inc_ref(v_lhs_3426_);
v___x_3724_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_3723_, v_lhs_3426_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
lean_dec(v___x_3723_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; lean_object* v___x_3726_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3724_, 1);
v___x_3726_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_a_3725_, v___y_3693_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
v___x_3728_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3);
v___x_3729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3729_, 0, v_a_3720_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v___x_3730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3729_);
lean_ctor_set(v___x_3730_, 1, v_a_3722_);
v___x_3731_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5);
v___x_3732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
lean_ctor_set(v___x_3733_, 1, v_a_3727_);
v___x_3734_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3686_, v___x_3733_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_dec_ref_known(v___x_3734_, 1);
lean_inc(v_size_3705_);
lean_inc_ref(v_self_3703_);
lean_inc_ref(v_next_3704_);
v___y_3600_ = v_heqProofs_3707_;
v___y_3601_ = v___y_3688_;
v___y_3602_ = v_fns_u2082_3692_;
v___y_3603_ = v___y_3689_;
v___y_3604_ = v___y_3690_;
v___y_3605_ = v_next_3704_;
v___y_3606_ = v_self_3703_;
v___y_3607_ = v_size_3705_;
v___y_3608_ = v___y_3691_;
v___y_3609_ = v_root_3710_;
v___y_3610_ = v_a_3709_;
v___y_3611_ = v_hasLambdas_3706_;
v___y_3612_ = v___y_3693_;
v___y_3613_ = v___y_3694_;
v___y_3614_ = v___y_3695_;
v___y_3615_ = v___y_3696_;
v___y_3616_ = v___y_3697_;
v___y_3617_ = v___y_3698_;
v___y_3618_ = v___y_3699_;
v___y_3619_ = v___y_3700_;
v___y_3620_ = v___y_3701_;
v___y_3621_ = v___y_3702_;
goto v___jp_3599_;
}
else
{
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
return v___x_3734_;
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_a_3722_);
lean_dec(v_a_3720_);
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
v_a_3735_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3726_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3726_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
lean_object* v_a_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
lean_dec(v_a_3722_);
lean_dec(v_a_3720_);
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
v_a_3743_ = lean_ctor_get(v___x_3724_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3724_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3724_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3743_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
lean_dec(v_a_3720_);
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
v_a_3751_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3721_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3721_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
v_a_3759_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3719_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3719_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3764_; 
if (v_isShared_3762_ == 0)
{
v___x_3764_ = v___x_3761_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_a_3759_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
else
{
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
return v___x_3718_;
}
}
}
}
else
{
lean_dec_ref(v_root_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_lhs_3426_);
return v___x_3711_;
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
lean_dec_ref(v_fns_u2082_3692_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v___y_3689_);
lean_dec_ref(v___y_3688_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
v_a_3767_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3708_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3708_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
v___jp_3775_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v___x_3790_ = lean_array_get_size(v___y_3778_);
v___x_3791_ = lean_unsigned_to_nat(0u);
v___x_3792_ = lean_nat_dec_eq(v___x_3790_, v___x_3791_);
if (v___x_3792_ == 0)
{
lean_object* v_self_3793_; lean_object* v___x_3794_; 
v_self_3793_ = lean_ctor_get(v_lhsRoot_3430_, 0);
lean_inc_ref(v_self_3793_);
v___x_3794_ = l_Lean_Meta_Grind_getFnRoots(v_self_3793_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
v___y_3688_ = v___y_3776_;
v___y_3689_ = v_fns_u2081_3779_;
v___y_3690_ = v___y_3777_;
v___y_3691_ = v___y_3778_;
v_fns_u2082_3692_ = v_a_3795_;
v___y_3693_ = v___y_3780_;
v___y_3694_ = v___y_3781_;
v___y_3695_ = v___y_3782_;
v___y_3696_ = v___y_3783_;
v___y_3697_ = v___y_3784_;
v___y_3698_ = v___y_3785_;
v___y_3699_ = v___y_3786_;
v___y_3700_ = v___y_3787_;
v___y_3701_ = v___y_3788_;
v___y_3702_ = v___y_3789_;
goto v___jp_3687_;
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec_ref(v_fns_u2081_3779_);
lean_dec_ref(v___y_3778_);
lean_dec_ref(v___y_3777_);
lean_dec_ref(v___y_3776_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
v_a_3796_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3794_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3794_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v___x_3804_; 
v___x_3804_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
v___y_3688_ = v___y_3776_;
v___y_3689_ = v_fns_u2081_3779_;
v___y_3690_ = v___y_3777_;
v___y_3691_ = v___y_3778_;
v_fns_u2082_3692_ = v___x_3804_;
v___y_3693_ = v___y_3780_;
v___y_3694_ = v___y_3781_;
v___y_3695_ = v___y_3782_;
v___y_3696_ = v___y_3783_;
v___y_3697_ = v___y_3784_;
v___y_3698_ = v___y_3785_;
v___y_3699_ = v___y_3786_;
v___y_3700_ = v___y_3787_;
v___y_3701_ = v___y_3788_;
v___y_3702_ = v___y_3789_;
goto v___jp_3687_;
}
}
v___jp_3805_:
{
lean_object* v___x_3816_; 
lean_inc_ref(v_lhs_3426_);
v___x_3816_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_lhs_3426_, v___y_3806_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3884_; 
v_isSharedCheck_3884_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3884_ == 0)
{
lean_object* v_unused_3885_; 
v_unused_3885_ = lean_ctor_get(v___x_3816_, 0);
lean_dec(v_unused_3885_);
v___x_3818_ = v___x_3816_;
v_isShared_3819_ = v_isSharedCheck_3884_;
goto v_resetjp_3817_;
}
else
{
lean_dec(v___x_3816_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3884_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v_self_3820_; lean_object* v_next_3821_; lean_object* v_root_3822_; lean_object* v_congr_3823_; lean_object* v_size_3824_; uint8_t v_interpreted_3825_; uint8_t v_ctor_3826_; uint8_t v_hasLambdas_3827_; uint8_t v_heqProofs_3828_; lean_object* v_idx_3829_; lean_object* v_generation_3830_; lean_object* v_mt_3831_; lean_object* v_sTerms_3832_; uint8_t v_funCC_3833_; lean_object* v_ematchDiagSource_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3881_; 
v_self_3820_ = lean_ctor_get(v_lhsNode_3428_, 0);
v_next_3821_ = lean_ctor_get(v_lhsNode_3428_, 1);
v_root_3822_ = lean_ctor_get(v_lhsNode_3428_, 2);
v_congr_3823_ = lean_ctor_get(v_lhsNode_3428_, 3);
v_size_3824_ = lean_ctor_get(v_lhsNode_3428_, 6);
v_interpreted_3825_ = lean_ctor_get_uint8(v_lhsNode_3428_, sizeof(void*)*12 + 1);
v_ctor_3826_ = lean_ctor_get_uint8(v_lhsNode_3428_, sizeof(void*)*12 + 2);
v_hasLambdas_3827_ = lean_ctor_get_uint8(v_lhsNode_3428_, sizeof(void*)*12 + 3);
v_heqProofs_3828_ = lean_ctor_get_uint8(v_lhsNode_3428_, sizeof(void*)*12 + 4);
v_idx_3829_ = lean_ctor_get(v_lhsNode_3428_, 7);
v_generation_3830_ = lean_ctor_get(v_lhsNode_3428_, 8);
v_mt_3831_ = lean_ctor_get(v_lhsNode_3428_, 9);
v_sTerms_3832_ = lean_ctor_get(v_lhsNode_3428_, 10);
v_funCC_3833_ = lean_ctor_get_uint8(v_lhsNode_3428_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3834_ = lean_ctor_get(v_lhsNode_3428_, 11);
v_isSharedCheck_3881_ = !lean_is_exclusive(v_lhsNode_3428_);
if (v_isSharedCheck_3881_ == 0)
{
lean_object* v_unused_3882_; lean_object* v_unused_3883_; 
v_unused_3882_ = lean_ctor_get(v_lhsNode_3428_, 5);
lean_dec(v_unused_3882_);
v_unused_3883_ = lean_ctor_get(v_lhsNode_3428_, 4);
lean_dec(v_unused_3883_);
v___x_3836_ = v_lhsNode_3428_;
v_isShared_3837_ = v_isSharedCheck_3881_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_ematchDiagSource_3834_);
lean_inc(v_sTerms_3832_);
lean_inc(v_mt_3831_);
lean_inc(v_generation_3830_);
lean_inc(v_idx_3829_);
lean_inc(v_size_3824_);
lean_inc(v_congr_3823_);
lean_inc(v_root_3822_);
lean_inc(v_next_3821_);
lean_inc(v_self_3820_);
lean_dec(v_lhsNode_3428_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3881_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3819_ == 0)
{
lean_ctor_set_tag(v___x_3818_, 1);
lean_ctor_set(v___x_3818_, 0, v_rhs_3427_);
v___x_3839_ = v___x_3818_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_rhs_3427_);
v___x_3839_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; lean_object* v___x_3842_; 
v___x_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3840_, 0, v_proof_3424_);
lean_inc_ref(v_root_3822_);
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 5, v___x_3840_);
lean_ctor_set(v___x_3836_, 4, v___x_3839_);
v___x_3842_ = v___x_3836_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_self_3820_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_next_3821_);
lean_ctor_set(v_reuseFailAlloc_3879_, 2, v_root_3822_);
lean_ctor_set(v_reuseFailAlloc_3879_, 3, v_congr_3823_);
lean_ctor_set(v_reuseFailAlloc_3879_, 4, v___x_3839_);
lean_ctor_set(v_reuseFailAlloc_3879_, 5, v___x_3840_);
lean_ctor_set(v_reuseFailAlloc_3879_, 6, v_size_3824_);
lean_ctor_set(v_reuseFailAlloc_3879_, 7, v_idx_3829_);
lean_ctor_set(v_reuseFailAlloc_3879_, 8, v_generation_3830_);
lean_ctor_set(v_reuseFailAlloc_3879_, 9, v_mt_3831_);
lean_ctor_set(v_reuseFailAlloc_3879_, 10, v_sTerms_3832_);
lean_ctor_set(v_reuseFailAlloc_3879_, 11, v_ematchDiagSource_3834_);
lean_ctor_set_uint8(v_reuseFailAlloc_3879_, sizeof(void*)*12 + 1, v_interpreted_3825_);
lean_ctor_set_uint8(v_reuseFailAlloc_3879_, sizeof(void*)*12 + 2, v_ctor_3826_);
lean_ctor_set_uint8(v_reuseFailAlloc_3879_, sizeof(void*)*12 + 3, v_hasLambdas_3827_);
lean_ctor_set_uint8(v_reuseFailAlloc_3879_, sizeof(void*)*12 + 4, v_heqProofs_3828_);
lean_ctor_set_uint8(v_reuseFailAlloc_3879_, sizeof(void*)*12 + 5, v_funCC_3833_);
v___x_3842_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
lean_object* v___x_3843_; 
lean_ctor_set_uint8(v___x_3842_, sizeof(void*)*12, v_flipped_3432_);
lean_inc_ref(v_lhs_3426_);
v___x_3843_ = l_Lean_Meta_Grind_setENode___redArg(v_lhs_3426_, v___x_3842_, v___y_3806_);
if (lean_obj_tag(v___x_3843_) == 0)
{
lean_object* v___x_3844_; 
lean_dec_ref_known(v___x_3843_, 1);
v___x_3844_ = l_Lean_Meta_Grind_getEqcLambdas(v_lhsRoot_3430_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3846_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
lean_inc(v_a_3845_);
lean_dec_ref_known(v___x_3844_, 1);
v___x_3846_ = l_Lean_Meta_Grind_getEqcLambdas(v_rhsRoot_3431_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v_a_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; uint8_t v___x_3850_; 
v_a_3847_ = lean_ctor_get(v___x_3846_, 0);
lean_inc(v_a_3847_);
lean_dec_ref_known(v___x_3846_, 1);
v___x_3848_ = lean_array_get_size(v_a_3845_);
v___x_3849_ = lean_unsigned_to_nat(0u);
v___x_3850_ = lean_nat_dec_eq(v___x_3848_, v___x_3849_);
if (v___x_3850_ == 0)
{
lean_object* v_self_3851_; lean_object* v___x_3852_; 
v_self_3851_ = lean_ctor_get(v_rhsRoot_3431_, 0);
lean_inc_ref(v_self_3851_);
v___x_3852_ = l_Lean_Meta_Grind_getFnRoots(v_self_3851_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
lean_dec_ref_known(v___x_3852_, 1);
v___y_3776_ = v_a_3845_;
v___y_3777_ = v_root_3822_;
v___y_3778_ = v_a_3847_;
v_fns_u2081_3779_ = v_a_3853_;
v___y_3780_ = v___y_3806_;
v___y_3781_ = v___y_3807_;
v___y_3782_ = v___y_3808_;
v___y_3783_ = v___y_3809_;
v___y_3784_ = v___y_3810_;
v___y_3785_ = v___y_3811_;
v___y_3786_ = v___y_3812_;
v___y_3787_ = v___y_3813_;
v___y_3788_ = v___y_3814_;
v___y_3789_ = v___y_3815_;
goto v___jp_3775_;
}
else
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3861_; 
lean_dec(v_a_3847_);
lean_dec(v_a_3845_);
lean_dec_ref(v_root_3822_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
v_a_3854_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3856_ = v___x_3852_;
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v___x_3852_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
}
}
else
{
lean_object* v___x_3862_; 
v___x_3862_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
v___y_3776_ = v_a_3845_;
v___y_3777_ = v_root_3822_;
v___y_3778_ = v_a_3847_;
v_fns_u2081_3779_ = v___x_3862_;
v___y_3780_ = v___y_3806_;
v___y_3781_ = v___y_3807_;
v___y_3782_ = v___y_3808_;
v___y_3783_ = v___y_3809_;
v___y_3784_ = v___y_3810_;
v___y_3785_ = v___y_3811_;
v___y_3786_ = v___y_3812_;
v___y_3787_ = v___y_3813_;
v___y_3788_ = v___y_3814_;
v___y_3789_ = v___y_3815_;
goto v___jp_3775_;
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec(v_a_3845_);
lean_dec_ref(v_root_3822_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
v_a_3863_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3846_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3846_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
else
{
lean_object* v_a_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3878_; 
lean_dec_ref(v_root_3822_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
v_a_3871_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3873_ = v___x_3844_;
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_a_3871_);
lean_dec(v___x_3844_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3878_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
if (v_isShared_3874_ == 0)
{
v___x_3876_ = v___x_3873_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v_a_3871_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
else
{
lean_dec_ref(v_root_3822_);
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhs_3426_);
return v___x_3843_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3431_);
lean_dec_ref(v_lhsRoot_3430_);
lean_dec_ref(v_rhsNode_3429_);
lean_dec_ref(v_lhsNode_3428_);
lean_dec_ref(v_rhs_3427_);
lean_dec_ref(v_lhs_3426_);
lean_dec_ref(v_proof_3424_);
return v___x_3816_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object** _args){
lean_object* v_proof_3915_ = _args[0];
lean_object* v_isHEq_3916_ = _args[1];
lean_object* v_lhs_3917_ = _args[2];
lean_object* v_rhs_3918_ = _args[3];
lean_object* v_lhsNode_3919_ = _args[4];
lean_object* v_rhsNode_3920_ = _args[5];
lean_object* v_lhsRoot_3921_ = _args[6];
lean_object* v_rhsRoot_3922_ = _args[7];
lean_object* v_flipped_3923_ = _args[8];
lean_object* v_a_3924_ = _args[9];
lean_object* v_a_3925_ = _args[10];
lean_object* v_a_3926_ = _args[11];
lean_object* v_a_3927_ = _args[12];
lean_object* v_a_3928_ = _args[13];
lean_object* v_a_3929_ = _args[14];
lean_object* v_a_3930_ = _args[15];
lean_object* v_a_3931_ = _args[16];
lean_object* v_a_3932_ = _args[17];
lean_object* v_a_3933_ = _args[18];
lean_object* v_a_3934_ = _args[19];
_start:
{
uint8_t v_isHEq_boxed_3935_; uint8_t v_flipped_boxed_3936_; lean_object* v_res_3937_; 
v_isHEq_boxed_3935_ = lean_unbox(v_isHEq_3916_);
v_flipped_boxed_3936_ = lean_unbox(v_flipped_3923_);
v_res_3937_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_3915_, v_isHEq_boxed_3935_, v_lhs_3917_, v_rhs_3918_, v_lhsNode_3919_, v_rhsNode_3920_, v_lhsRoot_3921_, v_rhsRoot_3922_, v_flipped_boxed_3936_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
lean_dec(v_a_3931_);
lean_dec_ref(v_a_3930_);
lean_dec(v_a_3929_);
lean_dec_ref(v_a_3928_);
lean_dec(v_a_3927_);
lean_dec_ref(v_a_3926_);
lean_dec(v_a_3925_);
lean_dec(v_a_3924_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object* v_as_3938_, lean_object* v_as_x27_3939_, lean_object* v_b_3940_, lean_object* v_a_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_){
_start:
{
lean_object* v___x_3953_; 
v___x_3953_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3939_, v_b_3940_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_);
return v___x_3953_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object* v_as_3954_, lean_object* v_as_x27_3955_, lean_object* v_b_3956_, lean_object* v_a_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_){
_start:
{
lean_object* v_res_3969_; 
v_res_3969_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(v_as_3954_, v_as_x27_3955_, v_b_3956_, v_a_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
lean_dec(v___y_3965_);
lean_dec_ref(v___y_3964_);
lean_dec(v___y_3963_);
lean_dec_ref(v___y_3962_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec(v___y_3958_);
lean_dec(v_as_x27_3955_);
lean_dec(v_as_3954_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object* v_as_3970_, lean_object* v_as_x27_3971_, lean_object* v_b_3972_, lean_object* v_a_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_){
_start:
{
lean_object* v___x_3985_; 
v___x_3985_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_3971_, v_b_3972_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_);
return v___x_3985_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object* v_as_3986_, lean_object* v_as_x27_3987_, lean_object* v_b_3988_, lean_object* v_a_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v_res_4001_; 
v_res_4001_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(v_as_3986_, v_as_x27_3987_, v_b_3988_, v_a_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v___y_3991_);
lean_dec(v___y_3990_);
lean_dec(v_as_x27_3987_);
lean_dec(v_as_3986_);
return v_res_4001_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1(void){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4003_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0));
v___x_4004_ = l_Lean_stringToMessageData(v___x_4003_);
return v___x_4004_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4(void){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3));
v___x_4010_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_4011_ = l_Lean_Name_append(v___x_4010_, v___x_4009_);
return v___x_4011_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6(void){
_start:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4013_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5));
v___x_4014_ = l_Lean_stringToMessageData(v___x_4013_);
return v___x_4014_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8(void){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7));
v___x_4017_ = l_Lean_stringToMessageData(v___x_4016_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object* v_lhs_4018_, lean_object* v_rhs_4019_, lean_object* v_proof_4020_, uint8_t v_isHEq_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4036_ = lean_st_ref_get(v_a_4022_);
lean_inc_ref(v_lhs_4018_);
v___x_4037_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4036_, v_lhs_4018_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
lean_dec(v___x_4036_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4039_ = lean_st_ref_get(v_a_4022_);
lean_inc_ref(v_rhs_4019_);
v___x_4040_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4039_, v_rhs_4019_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
lean_dec(v___x_4039_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v_root_4042_; lean_object* v_root_4043_; size_t v___x_4044_; size_t v___x_4045_; uint8_t v___x_4046_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
v_root_4042_ = lean_ctor_get(v_a_4038_, 2);
v_root_4043_ = lean_ctor_get(v_a_4041_, 2);
v___x_4044_ = lean_ptr_addr(v_root_4042_);
v___x_4045_ = lean_ptr_addr(v_root_4043_);
v___x_4046_ = lean_usize_dec_eq(v___x_4044_, v___x_4045_);
if (v___x_4046_ == 0)
{
lean_object* v_toCold_4047_; lean_object* v_options_4048_; lean_object* v_inheritedTraceOptions_4049_; uint8_t v_hasTrace_4050_; uint8_t v___x_4051_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4089_; uint8_t v___y_4090_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4117_; uint8_t v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4147_; uint8_t v___y_4148_; uint8_t v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4163_; uint8_t v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; uint8_t v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4179_; uint8_t v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; uint8_t v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4195_; uint8_t v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; lean_object* v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; uint8_t v___y_4206_; lean_object* v___y_4207_; lean_object* v_size_4208_; uint8_t v_interpreted_4209_; uint8_t v_ctor_4210_; lean_object* v___y_4211_; lean_object* v___y_4215_; uint8_t v_ctor_4216_; uint8_t v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; uint8_t v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4237_; lean_object* v___y_4238_; uint8_t v_valueInconsistency_4239_; uint8_t v_trueEqFalse_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; uint8_t v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4306_; 
v_toCold_4047_ = lean_ctor_get(v_a_4030_, 0);
v_options_4048_ = lean_ctor_get(v_toCold_4047_, 2);
v_inheritedTraceOptions_4049_ = lean_ctor_get(v_toCold_4047_, 11);
v_hasTrace_4050_ = lean_ctor_get_uint8(v_options_4048_, sizeof(void*)*1);
v___x_4051_ = 1;
if (v_hasTrace_4050_ == 0)
{
v___y_4297_ = v_a_4022_;
v___y_4298_ = v_a_4023_;
v___y_4299_ = v_a_4024_;
v___y_4300_ = v_a_4025_;
v___y_4301_ = v_a_4026_;
v___y_4302_ = v_a_4027_;
v___y_4303_ = v_a_4028_;
v___y_4304_ = v_a_4029_;
v___y_4305_ = v_a_4030_;
v___y_4306_ = v_a_4031_;
goto v___jp_4296_;
}
else
{
lean_object* v___x_4340_; lean_object* v_____do__lift_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___x_4355_; uint8_t v___x_4356_; 
v___x_4340_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3));
v___x_4355_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4);
v___x_4356_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4049_, v_options_4048_, v___x_4355_);
if (v___x_4356_ == 0)
{
v___y_4297_ = v_a_4022_;
v___y_4298_ = v_a_4023_;
v___y_4299_ = v_a_4024_;
v___y_4300_ = v_a_4025_;
v___y_4301_ = v_a_4026_;
v___y_4302_ = v_a_4027_;
v___y_4303_ = v_a_4028_;
v___y_4304_ = v_a_4029_;
v___y_4305_ = v_a_4030_;
v___y_4306_ = v_a_4031_;
goto v___jp_4296_;
}
else
{
lean_object* v___x_4357_; 
v___x_4357_ = l_Lean_Meta_Grind_updateLastTag(v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_dec_ref_known(v___x_4357_, 1);
if (v_isHEq_4021_ == 0)
{
lean_object* v___x_4358_; 
lean_inc_ref(v_rhs_4019_);
lean_inc_ref(v_lhs_4018_);
v___x_4358_ = l_Lean_Meta_mkEq(v_lhs_4018_, v_rhs_4019_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v_a_4359_; 
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4358_, 1);
v_____do__lift_4342_ = v_a_4359_;
v___y_4343_ = v_a_4022_;
v___y_4344_ = v_a_4023_;
v___y_4345_ = v_a_4024_;
v___y_4346_ = v_a_4025_;
v___y_4347_ = v_a_4026_;
v___y_4348_ = v_a_4027_;
v___y_4349_ = v_a_4028_;
v___y_4350_ = v_a_4029_;
v___y_4351_ = v_a_4030_;
v___y_4352_ = v_a_4031_;
goto v___jp_4341_;
}
else
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4360_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___x_4358_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4358_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
}
else
{
lean_object* v___x_4368_; 
lean_inc_ref(v_rhs_4019_);
lean_inc_ref(v_lhs_4018_);
v___x_4368_ = l_Lean_Meta_mkHEq(v_lhs_4018_, v_rhs_4019_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4368_) == 0)
{
lean_object* v_a_4369_; 
v_a_4369_ = lean_ctor_get(v___x_4368_, 0);
lean_inc(v_a_4369_);
lean_dec_ref_known(v___x_4368_, 1);
v_____do__lift_4342_ = v_a_4369_;
v___y_4343_ = v_a_4022_;
v___y_4344_ = v_a_4023_;
v___y_4345_ = v_a_4024_;
v___y_4346_ = v_a_4025_;
v___y_4347_ = v_a_4026_;
v___y_4348_ = v_a_4027_;
v___y_4349_ = v_a_4028_;
v___y_4350_ = v_a_4029_;
v___y_4351_ = v_a_4030_;
v___y_4352_ = v_a_4031_;
goto v___jp_4341_;
}
else
{
lean_object* v_a_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4370_ = lean_ctor_get(v___x_4368_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4372_ = v___x_4368_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_a_4370_);
lean_dec(v___x_4368_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4375_; 
if (v_isShared_4373_ == 0)
{
v___x_4375_ = v___x_4372_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4370_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
}
}
else
{
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
return v___x_4357_;
}
}
v___jp_4341_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4353_ = l_Lean_MessageData_ofExpr(v_____do__lift_4342_);
v___x_4354_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4340_, v___x_4353_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
if (lean_obj_tag(v___x_4354_) == 0)
{
lean_dec_ref_known(v___x_4354_, 1);
v___y_4297_ = v___y_4343_;
v___y_4298_ = v___y_4344_;
v___y_4299_ = v___y_4345_;
v___y_4300_ = v___y_4346_;
v___y_4301_ = v___y_4347_;
v___y_4302_ = v___y_4348_;
v___y_4303_ = v___y_4349_;
v___y_4304_ = v___y_4350_;
v___y_4305_ = v___y_4351_;
v___y_4306_ = v___y_4352_;
goto v___jp_4296_;
}
else
{
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
return v___x_4354_;
}
}
}
v___jp_4052_:
{
lean_object* v_toCold_4063_; lean_object* v_options_4064_; uint8_t v_hasTrace_4065_; 
v_toCold_4063_ = lean_ctor_get(v___y_4061_, 0);
v_options_4064_ = lean_ctor_get(v_toCold_4063_, 2);
v_hasTrace_4065_ = lean_ctor_get_uint8(v_options_4064_, sizeof(void*)*1);
if (v_hasTrace_4065_ == 0)
{
lean_object* v___x_4066_; 
v___x_4066_ = l_Lean_Meta_Grind_checkInvariants(v___x_4046_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4066_;
}
else
{
lean_object* v_inheritedTraceOptions_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; uint8_t v___x_4070_; 
v_inheritedTraceOptions_4067_ = lean_ctor_get(v_toCold_4063_, 11);
v___x_4068_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_4069_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_4070_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4067_, v_options_4064_, v___x_4069_);
if (v___x_4070_ == 0)
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lean_Meta_Grind_checkInvariants(v___x_4046_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4071_;
}
else
{
lean_object* v___x_4072_; 
v___x_4072_ = l_Lean_Meta_Grind_updateLastTag(v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v___x_4073_; lean_object* v___x_4074_; 
lean_dec_ref_known(v___x_4072_, 1);
v___x_4073_ = lean_st_ref_get(v___y_4053_);
v___x_4074_ = l_Lean_Meta_Grind_Goal_ppState(v___x_4073_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
lean_dec(v___x_4073_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref_known(v___x_4074_, 1);
v___x_4076_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1);
v___x_4077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
lean_ctor_set(v___x_4077_, 1, v_a_4075_);
v___x_4078_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4068_, v___x_4077_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v___x_4079_; 
lean_dec_ref_known(v___x_4078_, 1);
v___x_4079_ = l_Lean_Meta_Grind_checkInvariants(v___x_4046_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4079_;
}
else
{
return v___x_4078_;
}
}
else
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4087_; 
v_a_4080_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4082_ = v___x_4074_;
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4074_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4080_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
}
}
else
{
return v___x_4072_;
}
}
}
}
v___jp_4088_:
{
lean_object* v___x_4102_; 
v___x_4102_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4092_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; uint8_t v___x_4104_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v___x_4104_ = lean_unbox(v_a_4103_);
lean_dec(v_a_4103_);
if (v___x_4104_ == 0)
{
if (v___y_4090_ == 0)
{
lean_dec_ref(v___y_4091_);
lean_dec_ref(v___y_4089_);
v___y_4053_ = v___y_4092_;
v___y_4054_ = v___y_4093_;
v___y_4055_ = v___y_4094_;
v___y_4056_ = v___y_4095_;
v___y_4057_ = v___y_4096_;
v___y_4058_ = v___y_4097_;
v___y_4059_ = v___y_4098_;
v___y_4060_ = v___y_4099_;
v___y_4061_ = v___y_4100_;
v___y_4062_ = v___y_4101_;
goto v___jp_4052_;
}
else
{
lean_object* v_self_4105_; lean_object* v_self_4106_; lean_object* v___x_4107_; 
v_self_4105_ = lean_ctor_get(v___y_4089_, 0);
lean_inc_ref(v_self_4105_);
lean_dec_ref(v___y_4089_);
v_self_4106_ = lean_ctor_get(v___y_4091_, 0);
lean_inc_ref(v_self_4106_);
lean_dec_ref(v___y_4091_);
v___x_4107_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_self_4105_, v_self_4106_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_dec_ref_known(v___x_4107_, 1);
v___y_4053_ = v___y_4092_;
v___y_4054_ = v___y_4093_;
v___y_4055_ = v___y_4094_;
v___y_4056_ = v___y_4095_;
v___y_4057_ = v___y_4096_;
v___y_4058_ = v___y_4097_;
v___y_4059_ = v___y_4098_;
v___y_4060_ = v___y_4099_;
v___y_4061_ = v___y_4100_;
v___y_4062_ = v___y_4101_;
goto v___jp_4052_;
}
else
{
return v___x_4107_;
}
}
}
else
{
lean_dec_ref(v___y_4091_);
lean_dec_ref(v___y_4089_);
v___y_4053_ = v___y_4092_;
v___y_4054_ = v___y_4093_;
v___y_4055_ = v___y_4094_;
v___y_4056_ = v___y_4095_;
v___y_4057_ = v___y_4096_;
v___y_4058_ = v___y_4097_;
v___y_4059_ = v___y_4098_;
v___y_4060_ = v___y_4099_;
v___y_4061_ = v___y_4100_;
v___y_4062_ = v___y_4101_;
goto v___jp_4052_;
}
}
else
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
lean_dec_ref(v___y_4091_);
lean_dec_ref(v___y_4089_);
v_a_4108_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4102_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4102_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
v___jp_4116_:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4120_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v_a_4131_; uint8_t v___x_4132_; 
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
lean_inc(v_a_4131_);
lean_dec_ref_known(v___x_4130_, 1);
v___x_4132_ = lean_unbox(v_a_4131_);
lean_dec(v_a_4131_);
if (v___x_4132_ == 0)
{
uint8_t v_ctor_4133_; 
v_ctor_4133_ = lean_ctor_get_uint8(v___y_4117_, sizeof(void*)*12 + 2);
if (v_ctor_4133_ == 0)
{
v___y_4089_ = v___y_4117_;
v___y_4090_ = v___y_4118_;
v___y_4091_ = v___y_4119_;
v___y_4092_ = v___y_4120_;
v___y_4093_ = v___y_4121_;
v___y_4094_ = v___y_4122_;
v___y_4095_ = v___y_4123_;
v___y_4096_ = v___y_4124_;
v___y_4097_ = v___y_4125_;
v___y_4098_ = v___y_4126_;
v___y_4099_ = v___y_4127_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___y_4129_;
goto v___jp_4088_;
}
else
{
uint8_t v_ctor_4134_; 
v_ctor_4134_ = lean_ctor_get_uint8(v___y_4119_, sizeof(void*)*12 + 2);
if (v_ctor_4134_ == 0)
{
v___y_4089_ = v___y_4117_;
v___y_4090_ = v___y_4118_;
v___y_4091_ = v___y_4119_;
v___y_4092_ = v___y_4120_;
v___y_4093_ = v___y_4121_;
v___y_4094_ = v___y_4122_;
v___y_4095_ = v___y_4123_;
v___y_4096_ = v___y_4124_;
v___y_4097_ = v___y_4125_;
v___y_4098_ = v___y_4126_;
v___y_4099_ = v___y_4127_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___y_4129_;
goto v___jp_4088_;
}
else
{
lean_object* v_self_4135_; lean_object* v_self_4136_; lean_object* v___x_4137_; 
v_self_4135_ = lean_ctor_get(v___y_4117_, 0);
v_self_4136_ = lean_ctor_get(v___y_4119_, 0);
lean_inc_ref(v_self_4136_);
lean_inc_ref(v_self_4135_);
v___x_4137_ = l_Lean_Meta_Grind_propagateCtor(v_self_4135_, v_self_4136_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_);
if (lean_obj_tag(v___x_4137_) == 0)
{
lean_dec_ref_known(v___x_4137_, 1);
v___y_4089_ = v___y_4117_;
v___y_4090_ = v___y_4118_;
v___y_4091_ = v___y_4119_;
v___y_4092_ = v___y_4120_;
v___y_4093_ = v___y_4121_;
v___y_4094_ = v___y_4122_;
v___y_4095_ = v___y_4123_;
v___y_4096_ = v___y_4124_;
v___y_4097_ = v___y_4125_;
v___y_4098_ = v___y_4126_;
v___y_4099_ = v___y_4127_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___y_4129_;
goto v___jp_4088_;
}
else
{
lean_dec_ref(v___y_4119_);
lean_dec_ref(v___y_4117_);
return v___x_4137_;
}
}
}
}
else
{
v___y_4089_ = v___y_4117_;
v___y_4090_ = v___y_4118_;
v___y_4091_ = v___y_4119_;
v___y_4092_ = v___y_4120_;
v___y_4093_ = v___y_4121_;
v___y_4094_ = v___y_4122_;
v___y_4095_ = v___y_4123_;
v___y_4096_ = v___y_4124_;
v___y_4097_ = v___y_4125_;
v___y_4098_ = v___y_4126_;
v___y_4099_ = v___y_4127_;
v___y_4100_ = v___y_4128_;
v___y_4101_ = v___y_4129_;
goto v___jp_4088_;
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
lean_dec_ref(v___y_4119_);
lean_dec_ref(v___y_4117_);
v_a_4138_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4130_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4130_);
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
v___jp_4146_:
{
if (v___y_4148_ == 0)
{
v___y_4117_ = v___y_4147_;
v___y_4118_ = v___y_4149_;
v___y_4119_ = v___y_4150_;
v___y_4120_ = v___y_4151_;
v___y_4121_ = v___y_4152_;
v___y_4122_ = v___y_4153_;
v___y_4123_ = v___y_4154_;
v___y_4124_ = v___y_4155_;
v___y_4125_ = v___y_4156_;
v___y_4126_ = v___y_4157_;
v___y_4127_ = v___y_4158_;
v___y_4128_ = v___y_4159_;
v___y_4129_ = v___y_4160_;
goto v___jp_4116_;
}
else
{
lean_object* v___x_4161_; 
v___x_4161_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_dec_ref_known(v___x_4161_, 1);
v___y_4117_ = v___y_4147_;
v___y_4118_ = v___y_4149_;
v___y_4119_ = v___y_4150_;
v___y_4120_ = v___y_4151_;
v___y_4121_ = v___y_4152_;
v___y_4122_ = v___y_4153_;
v___y_4123_ = v___y_4154_;
v___y_4124_ = v___y_4155_;
v___y_4125_ = v___y_4156_;
v___y_4126_ = v___y_4157_;
v___y_4127_ = v___y_4158_;
v___y_4128_ = v___y_4159_;
v___y_4129_ = v___y_4160_;
goto v___jp_4116_;
}
else
{
lean_dec_ref(v___y_4150_);
lean_dec_ref(v___y_4147_);
return v___x_4161_;
}
}
}
v___jp_4162_:
{
lean_object* v___x_4177_; 
lean_inc_ref(v___y_4163_);
lean_inc_ref(v___y_4175_);
v___x_4177_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_4020_, v_isHEq_4021_, v_rhs_4019_, v_lhs_4018_, v_a_4041_, v_a_4038_, v___y_4175_, v___y_4163_, v___x_4051_, v___y_4167_, v___y_4172_, v___y_4170_, v___y_4165_, v___y_4169_, v___y_4168_, v___y_4166_, v___y_4176_, v___y_4171_, v___y_4174_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_dec_ref_known(v___x_4177_, 1);
v___y_4147_ = v___y_4163_;
v___y_4148_ = v___y_4164_;
v___y_4149_ = v___y_4173_;
v___y_4150_ = v___y_4175_;
v___y_4151_ = v___y_4167_;
v___y_4152_ = v___y_4172_;
v___y_4153_ = v___y_4170_;
v___y_4154_ = v___y_4165_;
v___y_4155_ = v___y_4169_;
v___y_4156_ = v___y_4168_;
v___y_4157_ = v___y_4166_;
v___y_4158_ = v___y_4176_;
v___y_4159_ = v___y_4171_;
v___y_4160_ = v___y_4174_;
goto v___jp_4146_;
}
else
{
lean_dec_ref(v___y_4175_);
lean_dec_ref(v___y_4163_);
return v___x_4177_;
}
}
v___jp_4178_:
{
lean_object* v___x_4193_; 
lean_inc_ref(v___y_4191_);
lean_inc_ref(v___y_4179_);
v___x_4193_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_4020_, v_isHEq_4021_, v_lhs_4018_, v_rhs_4019_, v_a_4038_, v_a_4041_, v___y_4179_, v___y_4191_, v___x_4046_, v___y_4183_, v___y_4188_, v___y_4186_, v___y_4181_, v___y_4185_, v___y_4184_, v___y_4182_, v___y_4192_, v___y_4187_, v___y_4190_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_dec_ref_known(v___x_4193_, 1);
v___y_4147_ = v___y_4179_;
v___y_4148_ = v___y_4180_;
v___y_4149_ = v___y_4189_;
v___y_4150_ = v___y_4191_;
v___y_4151_ = v___y_4183_;
v___y_4152_ = v___y_4188_;
v___y_4153_ = v___y_4186_;
v___y_4154_ = v___y_4181_;
v___y_4155_ = v___y_4185_;
v___y_4156_ = v___y_4184_;
v___y_4157_ = v___y_4182_;
v___y_4158_ = v___y_4192_;
v___y_4159_ = v___y_4187_;
v___y_4160_ = v___y_4190_;
goto v___jp_4146_;
}
else
{
lean_dec_ref(v___y_4191_);
lean_dec_ref(v___y_4179_);
return v___x_4193_;
}
}
v___jp_4194_:
{
lean_object* v_size_4212_; uint8_t v___x_4213_; 
v_size_4212_ = lean_ctor_get(v___y_4195_, 6);
v___x_4213_ = lean_nat_dec_lt(v_size_4208_, v_size_4212_);
lean_dec(v_size_4208_);
if (v___x_4213_ == 0)
{
v___y_4179_ = v___y_4195_;
v___y_4180_ = v___y_4196_;
v___y_4181_ = v___y_4197_;
v___y_4182_ = v___y_4198_;
v___y_4183_ = v___y_4199_;
v___y_4184_ = v___y_4200_;
v___y_4185_ = v___y_4201_;
v___y_4186_ = v___y_4202_;
v___y_4187_ = v___y_4203_;
v___y_4188_ = v___y_4204_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4205_;
v___y_4191_ = v___y_4207_;
v___y_4192_ = v___y_4211_;
goto v___jp_4178_;
}
else
{
if (v_interpreted_4209_ == 0)
{
if (v_ctor_4210_ == 0)
{
v___y_4163_ = v___y_4195_;
v___y_4164_ = v___y_4196_;
v___y_4165_ = v___y_4197_;
v___y_4166_ = v___y_4198_;
v___y_4167_ = v___y_4199_;
v___y_4168_ = v___y_4200_;
v___y_4169_ = v___y_4201_;
v___y_4170_ = v___y_4202_;
v___y_4171_ = v___y_4203_;
v___y_4172_ = v___y_4204_;
v___y_4173_ = v___y_4206_;
v___y_4174_ = v___y_4205_;
v___y_4175_ = v___y_4207_;
v___y_4176_ = v___y_4211_;
goto v___jp_4162_;
}
else
{
v___y_4179_ = v___y_4195_;
v___y_4180_ = v___y_4196_;
v___y_4181_ = v___y_4197_;
v___y_4182_ = v___y_4198_;
v___y_4183_ = v___y_4199_;
v___y_4184_ = v___y_4200_;
v___y_4185_ = v___y_4201_;
v___y_4186_ = v___y_4202_;
v___y_4187_ = v___y_4203_;
v___y_4188_ = v___y_4204_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4205_;
v___y_4191_ = v___y_4207_;
v___y_4192_ = v___y_4211_;
goto v___jp_4178_;
}
}
else
{
v___y_4179_ = v___y_4195_;
v___y_4180_ = v___y_4196_;
v___y_4181_ = v___y_4197_;
v___y_4182_ = v___y_4198_;
v___y_4183_ = v___y_4199_;
v___y_4184_ = v___y_4200_;
v___y_4185_ = v___y_4201_;
v___y_4186_ = v___y_4202_;
v___y_4187_ = v___y_4203_;
v___y_4188_ = v___y_4204_;
v___y_4189_ = v___y_4206_;
v___y_4190_ = v___y_4205_;
v___y_4191_ = v___y_4207_;
v___y_4192_ = v___y_4211_;
goto v___jp_4178_;
}
}
}
v___jp_4214_:
{
if (v_ctor_4216_ == 0)
{
lean_object* v_size_4230_; uint8_t v_interpreted_4231_; uint8_t v_ctor_4232_; 
v_size_4230_ = lean_ctor_get(v___y_4228_, 6);
lean_inc(v_size_4230_);
v_interpreted_4231_ = lean_ctor_get_uint8(v___y_4228_, sizeof(void*)*12 + 1);
v_ctor_4232_ = lean_ctor_get_uint8(v___y_4228_, sizeof(void*)*12 + 2);
v___y_4195_ = v___y_4215_;
v___y_4196_ = v___y_4217_;
v___y_4197_ = v___y_4218_;
v___y_4198_ = v___y_4219_;
v___y_4199_ = v___y_4220_;
v___y_4200_ = v___y_4221_;
v___y_4201_ = v___y_4222_;
v___y_4202_ = v___y_4223_;
v___y_4203_ = v___y_4224_;
v___y_4204_ = v___y_4225_;
v___y_4205_ = v___y_4226_;
v___y_4206_ = v___y_4227_;
v___y_4207_ = v___y_4228_;
v_size_4208_ = v_size_4230_;
v_interpreted_4209_ = v_interpreted_4231_;
v_ctor_4210_ = v_ctor_4232_;
v___y_4211_ = v___y_4229_;
goto v___jp_4194_;
}
else
{
uint8_t v_ctor_4233_; 
v_ctor_4233_ = lean_ctor_get_uint8(v___y_4228_, sizeof(void*)*12 + 2);
if (v_ctor_4233_ == 0)
{
v___y_4163_ = v___y_4215_;
v___y_4164_ = v___y_4217_;
v___y_4165_ = v___y_4218_;
v___y_4166_ = v___y_4219_;
v___y_4167_ = v___y_4220_;
v___y_4168_ = v___y_4221_;
v___y_4169_ = v___y_4222_;
v___y_4170_ = v___y_4223_;
v___y_4171_ = v___y_4224_;
v___y_4172_ = v___y_4225_;
v___y_4173_ = v___y_4227_;
v___y_4174_ = v___y_4226_;
v___y_4175_ = v___y_4228_;
v___y_4176_ = v___y_4229_;
goto v___jp_4162_;
}
else
{
lean_object* v_size_4234_; uint8_t v_interpreted_4235_; 
v_size_4234_ = lean_ctor_get(v___y_4228_, 6);
lean_inc(v_size_4234_);
v_interpreted_4235_ = lean_ctor_get_uint8(v___y_4228_, sizeof(void*)*12 + 1);
v___y_4195_ = v___y_4215_;
v___y_4196_ = v___y_4217_;
v___y_4197_ = v___y_4218_;
v___y_4198_ = v___y_4219_;
v___y_4199_ = v___y_4220_;
v___y_4200_ = v___y_4221_;
v___y_4201_ = v___y_4222_;
v___y_4202_ = v___y_4223_;
v___y_4203_ = v___y_4224_;
v___y_4204_ = v___y_4225_;
v___y_4205_ = v___y_4226_;
v___y_4206_ = v___y_4227_;
v___y_4207_ = v___y_4228_;
v_size_4208_ = v_size_4234_;
v_interpreted_4209_ = v_interpreted_4235_;
v_ctor_4210_ = v_ctor_4233_;
v___y_4211_ = v___y_4229_;
goto v___jp_4194_;
}
}
}
v___jp_4236_:
{
uint8_t v_interpreted_4251_; 
v_interpreted_4251_ = lean_ctor_get_uint8(v___y_4237_, sizeof(void*)*12 + 1);
if (v_interpreted_4251_ == 0)
{
uint8_t v_ctor_4252_; 
v_ctor_4252_ = lean_ctor_get_uint8(v___y_4237_, sizeof(void*)*12 + 2);
v___y_4215_ = v___y_4237_;
v_ctor_4216_ = v_ctor_4252_;
v___y_4217_ = v_trueEqFalse_4240_;
v___y_4218_ = v___y_4244_;
v___y_4219_ = v___y_4247_;
v___y_4220_ = v___y_4241_;
v___y_4221_ = v___y_4246_;
v___y_4222_ = v___y_4245_;
v___y_4223_ = v___y_4243_;
v___y_4224_ = v___y_4249_;
v___y_4225_ = v___y_4242_;
v___y_4226_ = v___y_4250_;
v___y_4227_ = v_valueInconsistency_4239_;
v___y_4228_ = v___y_4238_;
v___y_4229_ = v___y_4248_;
goto v___jp_4214_;
}
else
{
uint8_t v_interpreted_4253_; 
v_interpreted_4253_ = lean_ctor_get_uint8(v___y_4238_, sizeof(void*)*12 + 1);
if (v_interpreted_4253_ == 0)
{
v___y_4163_ = v___y_4237_;
v___y_4164_ = v_trueEqFalse_4240_;
v___y_4165_ = v___y_4244_;
v___y_4166_ = v___y_4247_;
v___y_4167_ = v___y_4241_;
v___y_4168_ = v___y_4246_;
v___y_4169_ = v___y_4245_;
v___y_4170_ = v___y_4243_;
v___y_4171_ = v___y_4249_;
v___y_4172_ = v___y_4242_;
v___y_4173_ = v_valueInconsistency_4239_;
v___y_4174_ = v___y_4250_;
v___y_4175_ = v___y_4238_;
v___y_4176_ = v___y_4248_;
goto v___jp_4162_;
}
else
{
uint8_t v_ctor_4254_; 
v_ctor_4254_ = lean_ctor_get_uint8(v___y_4237_, sizeof(void*)*12 + 2);
v___y_4215_ = v___y_4237_;
v_ctor_4216_ = v_ctor_4254_;
v___y_4217_ = v_trueEqFalse_4240_;
v___y_4218_ = v___y_4244_;
v___y_4219_ = v___y_4247_;
v___y_4220_ = v___y_4241_;
v___y_4221_ = v___y_4246_;
v___y_4222_ = v___y_4245_;
v___y_4223_ = v___y_4243_;
v___y_4224_ = v___y_4249_;
v___y_4225_ = v___y_4242_;
v___y_4226_ = v___y_4250_;
v___y_4227_ = v_valueInconsistency_4239_;
v___y_4228_ = v___y_4238_;
v___y_4229_ = v___y_4248_;
goto v___jp_4214_;
}
}
}
v___jp_4255_:
{
lean_object* v___x_4268_; 
v___x_4268_ = l_Lean_Meta_Grind_markAsInconsistent___redArg(v___y_4265_, v___y_4260_, v___y_4256_, v___y_4258_, v___y_4263_);
if (lean_obj_tag(v___x_4268_) == 0)
{
lean_dec_ref_known(v___x_4268_, 1);
v___y_4237_ = v___y_4257_;
v___y_4238_ = v___y_4266_;
v_valueInconsistency_4239_ = v___x_4046_;
v_trueEqFalse_4240_ = v___x_4051_;
v___y_4241_ = v___y_4265_;
v___y_4242_ = v___y_4264_;
v___y_4243_ = v___y_4261_;
v___y_4244_ = v___y_4259_;
v___y_4245_ = v___y_4267_;
v___y_4246_ = v___y_4262_;
v___y_4247_ = v___y_4260_;
v___y_4248_ = v___y_4256_;
v___y_4249_ = v___y_4258_;
v___y_4250_ = v___y_4263_;
goto v___jp_4236_;
}
else
{
lean_dec_ref(v___y_4266_);
lean_dec_ref(v___y_4257_);
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
return v___x_4268_;
}
}
v___jp_4269_:
{
if (v___y_4275_ == 0)
{
lean_object* v___x_4285_; 
v___x_4285_ = l_Lean_Meta_Grind_hasSameType(v___y_4283_, v___y_4278_, v___y_4274_, v___y_4271_, v___y_4272_, v___y_4279_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; uint8_t v___x_4287_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_a_4286_);
lean_dec_ref_known(v___x_4285_, 1);
v___x_4287_ = lean_unbox(v_a_4286_);
lean_dec(v_a_4286_);
if (v___x_4287_ == 0)
{
v___y_4237_ = v___y_4270_;
v___y_4238_ = v___y_4281_;
v_valueInconsistency_4239_ = v___x_4046_;
v_trueEqFalse_4240_ = v___x_4046_;
v___y_4241_ = v___y_4282_;
v___y_4242_ = v___y_4280_;
v___y_4243_ = v___y_4276_;
v___y_4244_ = v___y_4273_;
v___y_4245_ = v___y_4284_;
v___y_4246_ = v___y_4277_;
v___y_4247_ = v___y_4274_;
v___y_4248_ = v___y_4271_;
v___y_4249_ = v___y_4272_;
v___y_4250_ = v___y_4279_;
goto v___jp_4236_;
}
else
{
v___y_4237_ = v___y_4270_;
v___y_4238_ = v___y_4281_;
v_valueInconsistency_4239_ = v___x_4051_;
v_trueEqFalse_4240_ = v___x_4046_;
v___y_4241_ = v___y_4282_;
v___y_4242_ = v___y_4280_;
v___y_4243_ = v___y_4276_;
v___y_4244_ = v___y_4273_;
v___y_4245_ = v___y_4284_;
v___y_4246_ = v___y_4277_;
v___y_4247_ = v___y_4274_;
v___y_4248_ = v___y_4271_;
v___y_4249_ = v___y_4272_;
v___y_4250_ = v___y_4279_;
goto v___jp_4236_;
}
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
lean_dec_ref(v___y_4281_);
lean_dec_ref(v___y_4270_);
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4288_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v___x_4285_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_a_4288_);
lean_dec(v___x_4285_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
else
{
lean_dec_ref(v___y_4283_);
lean_dec_ref(v___y_4278_);
v___y_4237_ = v___y_4270_;
v___y_4238_ = v___y_4281_;
v_valueInconsistency_4239_ = v___x_4051_;
v_trueEqFalse_4240_ = v___x_4046_;
v___y_4241_ = v___y_4282_;
v___y_4242_ = v___y_4280_;
v___y_4243_ = v___y_4276_;
v___y_4244_ = v___y_4273_;
v___y_4245_ = v___y_4284_;
v___y_4246_ = v___y_4277_;
v___y_4247_ = v___y_4274_;
v___y_4248_ = v___y_4271_;
v___y_4249_ = v___y_4272_;
v___y_4250_ = v___y_4279_;
goto v___jp_4236_;
}
}
v___jp_4296_:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4307_ = lean_st_ref_get(v___y_4297_);
lean_inc_ref(v_root_4042_);
v___x_4308_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4307_, v_root_4042_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___x_4307_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v___x_4308_, 1);
v___x_4310_ = lean_st_ref_get(v___y_4297_);
lean_inc_ref(v_root_4043_);
v___x_4311_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4310_, v_root_4043_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___x_4310_);
if (lean_obj_tag(v___x_4311_) == 0)
{
uint8_t v_interpreted_4312_; 
v_interpreted_4312_ = lean_ctor_get_uint8(v_a_4309_, sizeof(void*)*12 + 1);
if (v_interpreted_4312_ == 0)
{
lean_object* v_a_4313_; uint8_t v_ctor_4314_; 
v_a_4313_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_a_4313_);
lean_dec_ref_known(v___x_4311_, 1);
v_ctor_4314_ = lean_ctor_get_uint8(v_a_4309_, sizeof(void*)*12 + 2);
v___y_4215_ = v_a_4309_;
v_ctor_4216_ = v_ctor_4314_;
v___y_4217_ = v___x_4046_;
v___y_4218_ = v___y_4300_;
v___y_4219_ = v___y_4303_;
v___y_4220_ = v___y_4297_;
v___y_4221_ = v___y_4302_;
v___y_4222_ = v___y_4301_;
v___y_4223_ = v___y_4299_;
v___y_4224_ = v___y_4305_;
v___y_4225_ = v___y_4298_;
v___y_4226_ = v___y_4306_;
v___y_4227_ = v___x_4046_;
v___y_4228_ = v_a_4313_;
v___y_4229_ = v___y_4304_;
goto v___jp_4214_;
}
else
{
lean_object* v_a_4315_; uint8_t v_interpreted_4316_; 
v_a_4315_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4311_, 1);
v_interpreted_4316_ = lean_ctor_get_uint8(v_a_4315_, sizeof(void*)*12 + 1);
if (v_interpreted_4316_ == 0)
{
v___y_4163_ = v_a_4309_;
v___y_4164_ = v___x_4046_;
v___y_4165_ = v___y_4300_;
v___y_4166_ = v___y_4303_;
v___y_4167_ = v___y_4297_;
v___y_4168_ = v___y_4302_;
v___y_4169_ = v___y_4301_;
v___y_4170_ = v___y_4299_;
v___y_4171_ = v___y_4305_;
v___y_4172_ = v___y_4298_;
v___y_4173_ = v___x_4046_;
v___y_4174_ = v___y_4306_;
v___y_4175_ = v_a_4315_;
v___y_4176_ = v___y_4304_;
goto v___jp_4162_;
}
else
{
lean_object* v_self_4317_; uint8_t v_ctor_4318_; uint8_t v_heqProofs_4319_; lean_object* v_self_4320_; uint8_t v_heqProofs_4321_; uint8_t v___x_4322_; 
v_self_4317_ = lean_ctor_get(v_a_4309_, 0);
v_ctor_4318_ = lean_ctor_get_uint8(v_a_4309_, sizeof(void*)*12 + 2);
v_heqProofs_4319_ = lean_ctor_get_uint8(v_a_4309_, sizeof(void*)*12 + 4);
v_self_4320_ = lean_ctor_get(v_a_4315_, 0);
v_heqProofs_4321_ = lean_ctor_get_uint8(v_a_4315_, sizeof(void*)*12 + 4);
lean_inc_ref(v_root_4042_);
v___x_4322_ = l_Lean_Expr_isTrue(v_root_4042_);
if (v___x_4322_ == 0)
{
uint8_t v___x_4323_; 
lean_inc_ref(v_root_4043_);
v___x_4323_ = l_Lean_Expr_isTrue(v_root_4043_);
if (v___x_4323_ == 0)
{
if (v_isHEq_4021_ == 0)
{
if (v_heqProofs_4319_ == 0)
{
if (v_heqProofs_4321_ == 0)
{
v___y_4215_ = v_a_4309_;
v_ctor_4216_ = v_ctor_4318_;
v___y_4217_ = v___x_4046_;
v___y_4218_ = v___y_4300_;
v___y_4219_ = v___y_4303_;
v___y_4220_ = v___y_4297_;
v___y_4221_ = v___y_4302_;
v___y_4222_ = v___y_4301_;
v___y_4223_ = v___y_4299_;
v___y_4224_ = v___y_4305_;
v___y_4225_ = v___y_4298_;
v___y_4226_ = v___y_4306_;
v___y_4227_ = v___x_4051_;
v___y_4228_ = v_a_4315_;
v___y_4229_ = v___y_4304_;
goto v___jp_4214_;
}
else
{
lean_inc_ref(v_self_4320_);
lean_inc_ref(v_self_4317_);
v___y_4270_ = v_a_4309_;
v___y_4271_ = v___y_4304_;
v___y_4272_ = v___y_4305_;
v___y_4273_ = v___y_4300_;
v___y_4274_ = v___y_4303_;
v___y_4275_ = v___x_4323_;
v___y_4276_ = v___y_4299_;
v___y_4277_ = v___y_4302_;
v___y_4278_ = v_self_4320_;
v___y_4279_ = v___y_4306_;
v___y_4280_ = v___y_4298_;
v___y_4281_ = v_a_4315_;
v___y_4282_ = v___y_4297_;
v___y_4283_ = v_self_4317_;
v___y_4284_ = v___y_4301_;
goto v___jp_4269_;
}
}
else
{
lean_inc_ref(v_self_4320_);
lean_inc_ref(v_self_4317_);
v___y_4270_ = v_a_4309_;
v___y_4271_ = v___y_4304_;
v___y_4272_ = v___y_4305_;
v___y_4273_ = v___y_4300_;
v___y_4274_ = v___y_4303_;
v___y_4275_ = v___x_4323_;
v___y_4276_ = v___y_4299_;
v___y_4277_ = v___y_4302_;
v___y_4278_ = v_self_4320_;
v___y_4279_ = v___y_4306_;
v___y_4280_ = v___y_4298_;
v___y_4281_ = v_a_4315_;
v___y_4282_ = v___y_4297_;
v___y_4283_ = v_self_4317_;
v___y_4284_ = v___y_4301_;
goto v___jp_4269_;
}
}
else
{
lean_inc_ref(v_self_4320_);
lean_inc_ref(v_self_4317_);
v___y_4270_ = v_a_4309_;
v___y_4271_ = v___y_4304_;
v___y_4272_ = v___y_4305_;
v___y_4273_ = v___y_4300_;
v___y_4274_ = v___y_4303_;
v___y_4275_ = v___x_4323_;
v___y_4276_ = v___y_4299_;
v___y_4277_ = v___y_4302_;
v___y_4278_ = v_self_4320_;
v___y_4279_ = v___y_4306_;
v___y_4280_ = v___y_4298_;
v___y_4281_ = v_a_4315_;
v___y_4282_ = v___y_4297_;
v___y_4283_ = v_self_4317_;
v___y_4284_ = v___y_4301_;
goto v___jp_4269_;
}
}
else
{
v___y_4256_ = v___y_4304_;
v___y_4257_ = v_a_4309_;
v___y_4258_ = v___y_4305_;
v___y_4259_ = v___y_4300_;
v___y_4260_ = v___y_4303_;
v___y_4261_ = v___y_4299_;
v___y_4262_ = v___y_4302_;
v___y_4263_ = v___y_4306_;
v___y_4264_ = v___y_4298_;
v___y_4265_ = v___y_4297_;
v___y_4266_ = v_a_4315_;
v___y_4267_ = v___y_4301_;
goto v___jp_4255_;
}
}
else
{
v___y_4256_ = v___y_4304_;
v___y_4257_ = v_a_4309_;
v___y_4258_ = v___y_4305_;
v___y_4259_ = v___y_4300_;
v___y_4260_ = v___y_4303_;
v___y_4261_ = v___y_4299_;
v___y_4262_ = v___y_4302_;
v___y_4263_ = v___y_4306_;
v___y_4264_ = v___y_4298_;
v___y_4265_ = v___y_4297_;
v___y_4266_ = v_a_4315_;
v___y_4267_ = v___y_4301_;
goto v___jp_4255_;
}
}
}
}
else
{
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
lean_dec(v_a_4309_);
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4324_ = lean_ctor_get(v___x_4311_, 0);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___x_4311_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___x_4311_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_a_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
else
{
lean_object* v_a_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4339_; 
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4332_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4334_ = v___x_4308_;
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_a_4332_);
lean_dec(v___x_4308_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4339_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4337_; 
if (v_isShared_4335_ == 0)
{
v___x_4337_ = v___x_4334_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v_a_4332_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
}
}
}
else
{
lean_object* v_toCold_4378_; lean_object* v_options_4379_; uint8_t v_hasTrace_4380_; 
lean_dec(v_a_4041_);
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
v_toCold_4378_ = lean_ctor_get(v_a_4030_, 0);
v_options_4379_ = lean_ctor_get(v_toCold_4378_, 2);
v_hasTrace_4380_ = lean_ctor_get_uint8(v_options_4379_, sizeof(void*)*1);
if (v_hasTrace_4380_ == 0)
{
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
goto v___jp_4033_;
}
else
{
lean_object* v_inheritedTraceOptions_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; uint8_t v___x_4384_; 
v_inheritedTraceOptions_4381_ = lean_ctor_get(v_toCold_4378_, 11);
v___x_4382_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_4383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_4384_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4381_, v_options_4379_, v___x_4383_);
if (v___x_4384_ == 0)
{
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
goto v___jp_4033_;
}
else
{
lean_object* v___x_4385_; 
v___x_4385_ = l_Lean_Meta_Grind_updateLastTag(v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v___x_4386_; 
lean_dec_ref_known(v___x_4385_, 1);
v___x_4386_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_4018_, v_a_4022_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4388_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4386_, 1);
v___x_4388_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_4019_, v_a_4022_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v_a_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; 
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc(v_a_4389_);
lean_dec_ref_known(v___x_4388_, 1);
v___x_4390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6);
v___x_4391_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4391_, 0, v_a_4387_);
lean_ctor_set(v___x_4391_, 1, v___x_4390_);
v___x_4392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
lean_ctor_set(v___x_4392_, 1, v_a_4389_);
v___x_4393_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8);
v___x_4394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4394_, 0, v___x_4392_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
v___x_4395_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4382_, v___x_4394_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_dec_ref_known(v___x_4395_, 1);
goto v___jp_4033_;
}
else
{
return v___x_4395_;
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
lean_dec(v_a_4387_);
v_a_4396_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4398_ = v___x_4388_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4388_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
}
else
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4411_; 
lean_dec_ref(v_rhs_4019_);
v_a_4404_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4406_ = v___x_4386_;
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4386_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
return v___x_4409_;
}
}
}
}
else
{
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
return v___x_4385_;
}
}
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_dec(v_a_4038_);
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4412_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4040_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4040_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
else
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4427_; 
lean_dec_ref(v_proof_4020_);
lean_dec_ref(v_rhs_4019_);
lean_dec_ref(v_lhs_4018_);
v_a_4420_ = lean_ctor_get(v___x_4037_, 0);
v_isSharedCheck_4427_ = !lean_is_exclusive(v___x_4037_);
if (v_isSharedCheck_4427_ == 0)
{
v___x_4422_ = v___x_4037_;
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v___x_4037_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4427_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4425_; 
if (v_isShared_4423_ == 0)
{
v___x_4425_ = v___x_4422_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v_a_4420_);
v___x_4425_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
return v___x_4425_;
}
}
}
v___jp_4033_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4034_ = lean_box(0);
v___x_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4034_);
return v___x_4035_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object* v_lhs_4428_, lean_object* v_rhs_4429_, lean_object* v_proof_4430_, lean_object* v_isHEq_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_, lean_object* v_a_4439_, lean_object* v_a_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_){
_start:
{
uint8_t v_isHEq_boxed_4443_; lean_object* v_res_4444_; 
v_isHEq_boxed_4443_ = lean_unbox(v_isHEq_4431_);
v_res_4444_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4428_, v_rhs_4429_, v_proof_4430_, v_isHEq_boxed_4443_, v_a_4432_, v_a_4433_, v_a_4434_, v_a_4435_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_, v_a_4440_, v_a_4441_);
lean_dec(v_a_4441_);
lean_dec_ref(v_a_4440_);
lean_dec(v_a_4439_);
lean_dec_ref(v_a_4438_);
lean_dec(v_a_4437_);
lean_dec_ref(v_a_4436_);
lean_dec(v_a_4435_);
lean_dec_ref(v_a_4434_);
lean_dec(v_a_4433_);
lean_dec(v_a_4432_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(lean_object* v_a_4447_){
_start:
{
lean_object* v___x_4449_; lean_object* v_toGoalState_4450_; lean_object* v_mvarId_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4487_; 
v___x_4449_ = lean_st_ref_take(v_a_4447_);
v_toGoalState_4450_ = lean_ctor_get(v___x_4449_, 0);
v_mvarId_4451_ = lean_ctor_get(v___x_4449_, 1);
v_isSharedCheck_4487_ = !lean_is_exclusive(v___x_4449_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4453_ = v___x_4449_;
v_isShared_4454_ = v_isSharedCheck_4487_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_mvarId_4451_);
lean_inc(v_toGoalState_4450_);
lean_dec(v___x_4449_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4487_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v_nextDeclIdx_4455_; lean_object* v_enodeMap_4456_; lean_object* v_exprs_4457_; lean_object* v_parents_4458_; lean_object* v_congrTable_4459_; lean_object* v_appMap_4460_; lean_object* v_indicesFound_4461_; uint8_t v_inconsistent_4462_; lean_object* v_nextIdx_4463_; lean_object* v_newRawFacts_4464_; lean_object* v_facts_4465_; lean_object* v_extThms_4466_; lean_object* v_ematch_4467_; lean_object* v_inj_4468_; lean_object* v_split_4469_; lean_object* v_clean_4470_; lean_object* v_sstates_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4485_; 
v_nextDeclIdx_4455_ = lean_ctor_get(v_toGoalState_4450_, 0);
v_enodeMap_4456_ = lean_ctor_get(v_toGoalState_4450_, 1);
v_exprs_4457_ = lean_ctor_get(v_toGoalState_4450_, 2);
v_parents_4458_ = lean_ctor_get(v_toGoalState_4450_, 3);
v_congrTable_4459_ = lean_ctor_get(v_toGoalState_4450_, 4);
v_appMap_4460_ = lean_ctor_get(v_toGoalState_4450_, 5);
v_indicesFound_4461_ = lean_ctor_get(v_toGoalState_4450_, 6);
v_inconsistent_4462_ = lean_ctor_get_uint8(v_toGoalState_4450_, sizeof(void*)*17);
v_nextIdx_4463_ = lean_ctor_get(v_toGoalState_4450_, 8);
v_newRawFacts_4464_ = lean_ctor_get(v_toGoalState_4450_, 9);
v_facts_4465_ = lean_ctor_get(v_toGoalState_4450_, 10);
v_extThms_4466_ = lean_ctor_get(v_toGoalState_4450_, 11);
v_ematch_4467_ = lean_ctor_get(v_toGoalState_4450_, 12);
v_inj_4468_ = lean_ctor_get(v_toGoalState_4450_, 13);
v_split_4469_ = lean_ctor_get(v_toGoalState_4450_, 14);
v_clean_4470_ = lean_ctor_get(v_toGoalState_4450_, 15);
v_sstates_4471_ = lean_ctor_get(v_toGoalState_4450_, 16);
v_isSharedCheck_4485_ = !lean_is_exclusive(v_toGoalState_4450_);
if (v_isSharedCheck_4485_ == 0)
{
lean_object* v_unused_4486_; 
v_unused_4486_ = lean_ctor_get(v_toGoalState_4450_, 7);
lean_dec(v_unused_4486_);
v___x_4473_ = v_toGoalState_4450_;
v_isShared_4474_ = v_isSharedCheck_4485_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_sstates_4471_);
lean_inc(v_clean_4470_);
lean_inc(v_split_4469_);
lean_inc(v_inj_4468_);
lean_inc(v_ematch_4467_);
lean_inc(v_extThms_4466_);
lean_inc(v_facts_4465_);
lean_inc(v_newRawFacts_4464_);
lean_inc(v_nextIdx_4463_);
lean_inc(v_indicesFound_4461_);
lean_inc(v_appMap_4460_);
lean_inc(v_congrTable_4459_);
lean_inc(v_parents_4458_);
lean_inc(v_exprs_4457_);
lean_inc(v_enodeMap_4456_);
lean_inc(v_nextDeclIdx_4455_);
lean_dec(v_toGoalState_4450_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4485_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4478_; 
v___x_4475_ = lean_box(0);
v___x_4476_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___closed__0));
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 7, v___x_4476_);
v___x_4478_ = v___x_4473_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_nextDeclIdx_4455_);
lean_ctor_set(v_reuseFailAlloc_4484_, 1, v_enodeMap_4456_);
lean_ctor_set(v_reuseFailAlloc_4484_, 2, v_exprs_4457_);
lean_ctor_set(v_reuseFailAlloc_4484_, 3, v_parents_4458_);
lean_ctor_set(v_reuseFailAlloc_4484_, 4, v_congrTable_4459_);
lean_ctor_set(v_reuseFailAlloc_4484_, 5, v_appMap_4460_);
lean_ctor_set(v_reuseFailAlloc_4484_, 6, v_indicesFound_4461_);
lean_ctor_set(v_reuseFailAlloc_4484_, 7, v___x_4476_);
lean_ctor_set(v_reuseFailAlloc_4484_, 8, v_nextIdx_4463_);
lean_ctor_set(v_reuseFailAlloc_4484_, 9, v_newRawFacts_4464_);
lean_ctor_set(v_reuseFailAlloc_4484_, 10, v_facts_4465_);
lean_ctor_set(v_reuseFailAlloc_4484_, 11, v_extThms_4466_);
lean_ctor_set(v_reuseFailAlloc_4484_, 12, v_ematch_4467_);
lean_ctor_set(v_reuseFailAlloc_4484_, 13, v_inj_4468_);
lean_ctor_set(v_reuseFailAlloc_4484_, 14, v_split_4469_);
lean_ctor_set(v_reuseFailAlloc_4484_, 15, v_clean_4470_);
lean_ctor_set(v_reuseFailAlloc_4484_, 16, v_sstates_4471_);
lean_ctor_set_uint8(v_reuseFailAlloc_4484_, sizeof(void*)*17, v_inconsistent_4462_);
v___x_4478_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
lean_object* v___x_4480_; 
if (v_isShared_4454_ == 0)
{
lean_ctor_set(v___x_4453_, 0, v___x_4478_);
v___x_4480_ = v___x_4453_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v___x_4478_);
lean_ctor_set(v_reuseFailAlloc_4483_, 1, v_mvarId_4451_);
v___x_4480_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4481_ = lean_st_ref_put(v_a_4447_, v___x_4480_);
v___x_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4475_);
return v___x_4482_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg___boxed(lean_object* v_a_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_4488_);
lean_dec(v_a_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(lean_object* v_a_4491_, lean_object* v_a_4492_, lean_object* v_a_4493_, lean_object* v_a_4494_, lean_object* v_a_4495_, lean_object* v_a_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_){
_start:
{
lean_object* v___x_4502_; 
v___x_4502_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_4491_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___boxed(lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_){
_start:
{
lean_object* v_res_4514_; 
v_res_4514_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts(v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_, v_a_4512_);
lean_dec(v_a_4512_);
lean_dec_ref(v_a_4511_);
lean_dec(v_a_4510_);
lean_dec_ref(v_a_4509_);
lean_dec(v_a_4508_);
lean_dec_ref(v_a_4507_);
lean_dec(v_a_4506_);
lean_dec_ref(v_a_4505_);
lean_dec(v_a_4504_);
lean_dec(v_a_4503_);
return v_res_4514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(lean_object* v_a_4515_){
_start:
{
lean_object* v___x_4517_; lean_object* v_toGoalState_4518_; lean_object* v_newFacts_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; 
v___x_4517_ = lean_st_ref_get(v_a_4515_);
v_toGoalState_4518_ = lean_ctor_get(v___x_4517_, 0);
lean_inc_ref(v_toGoalState_4518_);
lean_dec(v___x_4517_);
v_newFacts_4519_ = lean_ctor_get(v_toGoalState_4518_, 7);
lean_inc_ref(v_newFacts_4519_);
lean_dec_ref(v_toGoalState_4518_);
v___x_4520_ = lean_array_get_size(v_newFacts_4519_);
v___x_4521_ = lean_unsigned_to_nat(1u);
v___x_4522_ = lean_nat_sub(v___x_4520_, v___x_4521_);
v___x_4523_ = lean_nat_dec_lt(v___x_4522_, v___x_4520_);
if (v___x_4523_ == 0)
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
lean_dec(v___x_4522_);
lean_dec_ref(v_newFacts_4519_);
v___x_4524_ = lean_box(0);
v___x_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
return v___x_4525_;
}
else
{
lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v_toGoalState_4529_; lean_object* v_mvarId_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4565_; 
v___x_4526_ = lean_array_fget(v_newFacts_4519_, v___x_4522_);
lean_dec(v___x_4522_);
lean_dec_ref(v_newFacts_4519_);
v___x_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4526_);
v___x_4528_ = lean_st_ref_take(v_a_4515_);
v_toGoalState_4529_ = lean_ctor_get(v___x_4528_, 0);
v_mvarId_4530_ = lean_ctor_get(v___x_4528_, 1);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4528_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4532_ = v___x_4528_;
v_isShared_4533_ = v_isSharedCheck_4565_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_mvarId_4530_);
lean_inc(v_toGoalState_4529_);
lean_dec(v___x_4528_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4565_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
lean_object* v_nextDeclIdx_4534_; lean_object* v_enodeMap_4535_; lean_object* v_exprs_4536_; lean_object* v_parents_4537_; lean_object* v_congrTable_4538_; lean_object* v_appMap_4539_; lean_object* v_indicesFound_4540_; lean_object* v_newFacts_4541_; uint8_t v_inconsistent_4542_; lean_object* v_nextIdx_4543_; lean_object* v_newRawFacts_4544_; lean_object* v_facts_4545_; lean_object* v_extThms_4546_; lean_object* v_ematch_4547_; lean_object* v_inj_4548_; lean_object* v_split_4549_; lean_object* v_clean_4550_; lean_object* v_sstates_4551_; lean_object* v___x_4553_; uint8_t v_isShared_4554_; uint8_t v_isSharedCheck_4564_; 
v_nextDeclIdx_4534_ = lean_ctor_get(v_toGoalState_4529_, 0);
v_enodeMap_4535_ = lean_ctor_get(v_toGoalState_4529_, 1);
v_exprs_4536_ = lean_ctor_get(v_toGoalState_4529_, 2);
v_parents_4537_ = lean_ctor_get(v_toGoalState_4529_, 3);
v_congrTable_4538_ = lean_ctor_get(v_toGoalState_4529_, 4);
v_appMap_4539_ = lean_ctor_get(v_toGoalState_4529_, 5);
v_indicesFound_4540_ = lean_ctor_get(v_toGoalState_4529_, 6);
v_newFacts_4541_ = lean_ctor_get(v_toGoalState_4529_, 7);
v_inconsistent_4542_ = lean_ctor_get_uint8(v_toGoalState_4529_, sizeof(void*)*17);
v_nextIdx_4543_ = lean_ctor_get(v_toGoalState_4529_, 8);
v_newRawFacts_4544_ = lean_ctor_get(v_toGoalState_4529_, 9);
v_facts_4545_ = lean_ctor_get(v_toGoalState_4529_, 10);
v_extThms_4546_ = lean_ctor_get(v_toGoalState_4529_, 11);
v_ematch_4547_ = lean_ctor_get(v_toGoalState_4529_, 12);
v_inj_4548_ = lean_ctor_get(v_toGoalState_4529_, 13);
v_split_4549_ = lean_ctor_get(v_toGoalState_4529_, 14);
v_clean_4550_ = lean_ctor_get(v_toGoalState_4529_, 15);
v_sstates_4551_ = lean_ctor_get(v_toGoalState_4529_, 16);
v_isSharedCheck_4564_ = !lean_is_exclusive(v_toGoalState_4529_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4553_ = v_toGoalState_4529_;
v_isShared_4554_ = v_isSharedCheck_4564_;
goto v_resetjp_4552_;
}
else
{
lean_inc(v_sstates_4551_);
lean_inc(v_clean_4550_);
lean_inc(v_split_4549_);
lean_inc(v_inj_4548_);
lean_inc(v_ematch_4547_);
lean_inc(v_extThms_4546_);
lean_inc(v_facts_4545_);
lean_inc(v_newRawFacts_4544_);
lean_inc(v_nextIdx_4543_);
lean_inc(v_newFacts_4541_);
lean_inc(v_indicesFound_4540_);
lean_inc(v_appMap_4539_);
lean_inc(v_congrTable_4538_);
lean_inc(v_parents_4537_);
lean_inc(v_exprs_4536_);
lean_inc(v_enodeMap_4535_);
lean_inc(v_nextDeclIdx_4534_);
lean_dec(v_toGoalState_4529_);
v___x_4553_ = lean_box(0);
v_isShared_4554_ = v_isSharedCheck_4564_;
goto v_resetjp_4552_;
}
v_resetjp_4552_:
{
lean_object* v___x_4555_; lean_object* v___x_4557_; 
v___x_4555_ = lean_array_pop(v_newFacts_4541_);
if (v_isShared_4554_ == 0)
{
lean_ctor_set(v___x_4553_, 7, v___x_4555_);
v___x_4557_ = v___x_4553_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_nextDeclIdx_4534_);
lean_ctor_set(v_reuseFailAlloc_4563_, 1, v_enodeMap_4535_);
lean_ctor_set(v_reuseFailAlloc_4563_, 2, v_exprs_4536_);
lean_ctor_set(v_reuseFailAlloc_4563_, 3, v_parents_4537_);
lean_ctor_set(v_reuseFailAlloc_4563_, 4, v_congrTable_4538_);
lean_ctor_set(v_reuseFailAlloc_4563_, 5, v_appMap_4539_);
lean_ctor_set(v_reuseFailAlloc_4563_, 6, v_indicesFound_4540_);
lean_ctor_set(v_reuseFailAlloc_4563_, 7, v___x_4555_);
lean_ctor_set(v_reuseFailAlloc_4563_, 8, v_nextIdx_4543_);
lean_ctor_set(v_reuseFailAlloc_4563_, 9, v_newRawFacts_4544_);
lean_ctor_set(v_reuseFailAlloc_4563_, 10, v_facts_4545_);
lean_ctor_set(v_reuseFailAlloc_4563_, 11, v_extThms_4546_);
lean_ctor_set(v_reuseFailAlloc_4563_, 12, v_ematch_4547_);
lean_ctor_set(v_reuseFailAlloc_4563_, 13, v_inj_4548_);
lean_ctor_set(v_reuseFailAlloc_4563_, 14, v_split_4549_);
lean_ctor_set(v_reuseFailAlloc_4563_, 15, v_clean_4550_);
lean_ctor_set(v_reuseFailAlloc_4563_, 16, v_sstates_4551_);
lean_ctor_set_uint8(v_reuseFailAlloc_4563_, sizeof(void*)*17, v_inconsistent_4542_);
v___x_4557_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
lean_object* v___x_4559_; 
if (v_isShared_4533_ == 0)
{
lean_ctor_set(v___x_4532_, 0, v___x_4557_);
v___x_4559_ = v___x_4532_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v___x_4557_);
lean_ctor_set(v_reuseFailAlloc_4562_, 1, v_mvarId_4530_);
v___x_4559_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; 
v___x_4560_ = lean_st_ref_put(v_a_4515_, v___x_4559_);
v___x_4561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4527_);
return v___x_4561_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg___boxed(lean_object* v_a_4566_, lean_object* v_a_4567_){
_start:
{
lean_object* v_res_4568_; 
v_res_4568_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v_a_4566_);
lean_dec(v_a_4566_);
return v_res_4568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(lean_object* v_a_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_){
_start:
{
lean_object* v___x_4580_; 
v___x_4580_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v_a_4569_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___boxed(lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_){
_start:
{
lean_object* v_res_4592_; 
v_res_4592_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f(v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_, v_a_4590_);
lean_dec(v_a_4590_);
lean_dec_ref(v_a_4589_);
lean_dec(v_a_4588_);
lean_dec_ref(v_a_4587_);
lean_dec(v_a_4586_);
lean_dec_ref(v_a_4585_);
lean_dec(v_a_4584_);
lean_dec_ref(v_a_4583_);
lean_dec(v_a_4582_);
lean_dec(v_a_4581_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object* v_lhs_4593_, lean_object* v_rhs_4594_, lean_object* v_proof_4595_, uint8_t v_isHEq_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_){
_start:
{
lean_object* v___x_4608_; 
v___x_4608_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4593_, v_rhs_4594_, v_proof_4595_, v_isHEq_4596_, v_a_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_);
if (lean_obj_tag(v___x_4608_) == 0)
{
lean_object* v___x_4609_; 
lean_dec_ref_known(v___x_4608_, 1);
lean_inc(v_a_4606_);
lean_inc_ref(v_a_4605_);
lean_inc(v_a_4604_);
lean_inc_ref(v_a_4603_);
lean_inc(v_a_4602_);
lean_inc_ref(v_a_4601_);
lean_inc(v_a_4600_);
lean_inc_ref(v_a_4599_);
lean_inc(v_a_4598_);
lean_inc(v_a_4597_);
v___x_4609_ = lean_grind_process_new_facts(v_a_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_);
return v___x_4609_;
}
else
{
return v___x_4608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object* v_lhs_4610_, lean_object* v_rhs_4611_, lean_object* v_proof_4612_, lean_object* v_isHEq_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_){
_start:
{
uint8_t v_isHEq_boxed_4625_; lean_object* v_res_4626_; 
v_isHEq_boxed_4625_ = lean_unbox(v_isHEq_4613_);
v_res_4626_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4610_, v_rhs_4611_, v_proof_4612_, v_isHEq_boxed_4625_, v_a_4614_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_);
lean_dec(v_a_4623_);
lean_dec_ref(v_a_4622_);
lean_dec(v_a_4621_);
lean_dec_ref(v_a_4620_);
lean_dec(v_a_4619_);
lean_dec_ref(v_a_4618_);
lean_dec(v_a_4617_);
lean_dec_ref(v_a_4616_);
lean_dec(v_a_4615_);
lean_dec(v_a_4614_);
return v_res_4626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object* v_lhs_4627_, lean_object* v_rhs_4628_, lean_object* v_proof_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_, lean_object* v_a_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_){
_start:
{
uint8_t v___x_4641_; lean_object* v___x_4642_; 
v___x_4641_ = 0;
v___x_4642_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4627_, v_rhs_4628_, v_proof_4629_, v___x_4641_, v_a_4630_, v_a_4631_, v_a_4632_, v_a_4633_, v_a_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object* v_lhs_4643_, lean_object* v_rhs_4644_, lean_object* v_proof_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_, lean_object* v_a_4654_, lean_object* v_a_4655_, lean_object* v_a_4656_){
_start:
{
lean_object* v_res_4657_; 
v_res_4657_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4643_, v_rhs_4644_, v_proof_4645_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_, v_a_4650_, v_a_4651_, v_a_4652_, v_a_4653_, v_a_4654_, v_a_4655_);
lean_dec(v_a_4655_);
lean_dec_ref(v_a_4654_);
lean_dec(v_a_4653_);
lean_dec_ref(v_a_4652_);
lean_dec(v_a_4651_);
lean_dec_ref(v_a_4650_);
lean_dec(v_a_4649_);
lean_dec_ref(v_a_4648_);
lean_dec(v_a_4647_);
lean_dec(v_a_4646_);
return v_res_4657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object* v_lhs_4658_, lean_object* v_rhs_4659_, lean_object* v_proof_4660_, lean_object* v_a_4661_, lean_object* v_a_4662_, lean_object* v_a_4663_, lean_object* v_a_4664_, lean_object* v_a_4665_, lean_object* v_a_4666_, lean_object* v_a_4667_, lean_object* v_a_4668_, lean_object* v_a_4669_, lean_object* v_a_4670_){
_start:
{
uint8_t v___x_4672_; lean_object* v___x_4673_; 
v___x_4672_ = 1;
v___x_4673_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4658_, v_rhs_4659_, v_proof_4660_, v___x_4672_, v_a_4661_, v_a_4662_, v_a_4663_, v_a_4664_, v_a_4665_, v_a_4666_, v_a_4667_, v_a_4668_, v_a_4669_, v_a_4670_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object* v_lhs_4674_, lean_object* v_rhs_4675_, lean_object* v_proof_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_, lean_object* v_a_4685_, lean_object* v_a_4686_, lean_object* v_a_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(v_lhs_4674_, v_rhs_4675_, v_proof_4676_, v_a_4677_, v_a_4678_, v_a_4679_, v_a_4680_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_, v_a_4685_, v_a_4686_);
lean_dec(v_a_4686_);
lean_dec_ref(v_a_4685_);
lean_dec(v_a_4684_);
lean_dec_ref(v_a_4683_);
lean_dec(v_a_4682_);
lean_dec_ref(v_a_4681_);
lean_dec(v_a_4680_);
lean_dec_ref(v_a_4679_);
lean_dec(v_a_4678_);
lean_dec(v_a_4677_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object* v_fact_4689_, lean_object* v_a_4690_){
_start:
{
lean_object* v___x_4692_; lean_object* v_toGoalState_4693_; lean_object* v_mvarId_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4730_; 
v___x_4692_ = lean_st_ref_take(v_a_4690_);
v_toGoalState_4693_ = lean_ctor_get(v___x_4692_, 0);
v_mvarId_4694_ = lean_ctor_get(v___x_4692_, 1);
v_isSharedCheck_4730_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4730_ == 0)
{
v___x_4696_ = v___x_4692_;
v_isShared_4697_ = v_isSharedCheck_4730_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_mvarId_4694_);
lean_inc(v_toGoalState_4693_);
lean_dec(v___x_4692_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4730_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v_nextDeclIdx_4698_; lean_object* v_enodeMap_4699_; lean_object* v_exprs_4700_; lean_object* v_parents_4701_; lean_object* v_congrTable_4702_; lean_object* v_appMap_4703_; lean_object* v_indicesFound_4704_; lean_object* v_newFacts_4705_; uint8_t v_inconsistent_4706_; lean_object* v_nextIdx_4707_; lean_object* v_newRawFacts_4708_; lean_object* v_facts_4709_; lean_object* v_extThms_4710_; lean_object* v_ematch_4711_; lean_object* v_inj_4712_; lean_object* v_split_4713_; lean_object* v_clean_4714_; lean_object* v_sstates_4715_; lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4729_; 
v_nextDeclIdx_4698_ = lean_ctor_get(v_toGoalState_4693_, 0);
v_enodeMap_4699_ = lean_ctor_get(v_toGoalState_4693_, 1);
v_exprs_4700_ = lean_ctor_get(v_toGoalState_4693_, 2);
v_parents_4701_ = lean_ctor_get(v_toGoalState_4693_, 3);
v_congrTable_4702_ = lean_ctor_get(v_toGoalState_4693_, 4);
v_appMap_4703_ = lean_ctor_get(v_toGoalState_4693_, 5);
v_indicesFound_4704_ = lean_ctor_get(v_toGoalState_4693_, 6);
v_newFacts_4705_ = lean_ctor_get(v_toGoalState_4693_, 7);
v_inconsistent_4706_ = lean_ctor_get_uint8(v_toGoalState_4693_, sizeof(void*)*17);
v_nextIdx_4707_ = lean_ctor_get(v_toGoalState_4693_, 8);
v_newRawFacts_4708_ = lean_ctor_get(v_toGoalState_4693_, 9);
v_facts_4709_ = lean_ctor_get(v_toGoalState_4693_, 10);
v_extThms_4710_ = lean_ctor_get(v_toGoalState_4693_, 11);
v_ematch_4711_ = lean_ctor_get(v_toGoalState_4693_, 12);
v_inj_4712_ = lean_ctor_get(v_toGoalState_4693_, 13);
v_split_4713_ = lean_ctor_get(v_toGoalState_4693_, 14);
v_clean_4714_ = lean_ctor_get(v_toGoalState_4693_, 15);
v_sstates_4715_ = lean_ctor_get(v_toGoalState_4693_, 16);
v_isSharedCheck_4729_ = !lean_is_exclusive(v_toGoalState_4693_);
if (v_isSharedCheck_4729_ == 0)
{
v___x_4717_ = v_toGoalState_4693_;
v_isShared_4718_ = v_isSharedCheck_4729_;
goto v_resetjp_4716_;
}
else
{
lean_inc(v_sstates_4715_);
lean_inc(v_clean_4714_);
lean_inc(v_split_4713_);
lean_inc(v_inj_4712_);
lean_inc(v_ematch_4711_);
lean_inc(v_extThms_4710_);
lean_inc(v_facts_4709_);
lean_inc(v_newRawFacts_4708_);
lean_inc(v_nextIdx_4707_);
lean_inc(v_newFacts_4705_);
lean_inc(v_indicesFound_4704_);
lean_inc(v_appMap_4703_);
lean_inc(v_congrTable_4702_);
lean_inc(v_parents_4701_);
lean_inc(v_exprs_4700_);
lean_inc(v_enodeMap_4699_);
lean_inc(v_nextDeclIdx_4698_);
lean_dec(v_toGoalState_4693_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4729_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4722_; 
v___x_4719_ = lean_box(0);
v___x_4720_ = l_Lean_PersistentArray_push___redArg(v_facts_4709_, v_fact_4689_);
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 10, v___x_4720_);
v___x_4722_ = v___x_4717_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4728_; 
v_reuseFailAlloc_4728_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_4728_, 0, v_nextDeclIdx_4698_);
lean_ctor_set(v_reuseFailAlloc_4728_, 1, v_enodeMap_4699_);
lean_ctor_set(v_reuseFailAlloc_4728_, 2, v_exprs_4700_);
lean_ctor_set(v_reuseFailAlloc_4728_, 3, v_parents_4701_);
lean_ctor_set(v_reuseFailAlloc_4728_, 4, v_congrTable_4702_);
lean_ctor_set(v_reuseFailAlloc_4728_, 5, v_appMap_4703_);
lean_ctor_set(v_reuseFailAlloc_4728_, 6, v_indicesFound_4704_);
lean_ctor_set(v_reuseFailAlloc_4728_, 7, v_newFacts_4705_);
lean_ctor_set(v_reuseFailAlloc_4728_, 8, v_nextIdx_4707_);
lean_ctor_set(v_reuseFailAlloc_4728_, 9, v_newRawFacts_4708_);
lean_ctor_set(v_reuseFailAlloc_4728_, 10, v___x_4720_);
lean_ctor_set(v_reuseFailAlloc_4728_, 11, v_extThms_4710_);
lean_ctor_set(v_reuseFailAlloc_4728_, 12, v_ematch_4711_);
lean_ctor_set(v_reuseFailAlloc_4728_, 13, v_inj_4712_);
lean_ctor_set(v_reuseFailAlloc_4728_, 14, v_split_4713_);
lean_ctor_set(v_reuseFailAlloc_4728_, 15, v_clean_4714_);
lean_ctor_set(v_reuseFailAlloc_4728_, 16, v_sstates_4715_);
lean_ctor_set_uint8(v_reuseFailAlloc_4728_, sizeof(void*)*17, v_inconsistent_4706_);
v___x_4722_ = v_reuseFailAlloc_4728_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
lean_object* v___x_4724_; 
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 0, v___x_4722_);
v___x_4724_ = v___x_4696_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4722_);
lean_ctor_set(v_reuseFailAlloc_4727_, 1, v_mvarId_4694_);
v___x_4724_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4725_ = lean_st_ref_put(v_a_4690_, v___x_4724_);
v___x_4726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4719_);
return v___x_4726_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object* v_fact_4731_, lean_object* v_a_4732_, lean_object* v_a_4733_){
_start:
{
lean_object* v_res_4734_; 
v_res_4734_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4731_, v_a_4732_);
lean_dec(v_a_4732_);
return v_res_4734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object* v_fact_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_, lean_object* v_a_4739_, lean_object* v_a_4740_, lean_object* v_a_4741_, lean_object* v_a_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_){
_start:
{
lean_object* v___x_4747_; 
v___x_4747_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4735_, v_a_4736_);
return v___x_4747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object* v_fact_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_, lean_object* v_a_4756_, lean_object* v_a_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_){
_start:
{
lean_object* v_res_4760_; 
v_res_4760_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(v_fact_4748_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_, v_a_4756_, v_a_4757_, v_a_4758_);
lean_dec(v_a_4758_);
lean_dec_ref(v_a_4757_);
lean_dec(v_a_4756_);
lean_dec_ref(v_a_4755_);
lean_dec(v_a_4754_);
lean_dec_ref(v_a_4753_);
lean_dec(v_a_4752_);
lean_dec_ref(v_a_4751_);
lean_dec(v_a_4750_);
lean_dec(v_a_4749_);
return v_res_4760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object* v_lhs_4761_, lean_object* v_rhs_4762_, lean_object* v_proof_4763_, lean_object* v_generation_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_){
_start:
{
lean_object* v___x_4776_; 
lean_inc_ref(v_rhs_4762_);
lean_inc_ref(v_lhs_4761_);
v___x_4776_ = l_Lean_Meta_mkEq(v_lhs_4761_, v_rhs_4762_, v_a_4771_, v_a_4772_, v_a_4773_, v_a_4774_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v_a_4777_; lean_object* v___x_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4788_; 
v_a_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc_n(v_a_4777_, 2);
lean_dec_ref_known(v___x_4776_, 1);
v___x_4778_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_a_4777_, v_a_4765_);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4788_ == 0)
{
lean_object* v_unused_4789_; 
v_unused_4789_ = lean_ctor_get(v___x_4778_, 0);
lean_dec(v_unused_4789_);
v___x_4780_ = v___x_4778_;
v_isShared_4781_ = v_isSharedCheck_4788_;
goto v_resetjp_4779_;
}
else
{
lean_dec(v___x_4778_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4788_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v___x_4783_; 
if (v_isShared_4781_ == 0)
{
lean_ctor_set_tag(v___x_4780_, 1);
lean_ctor_set(v___x_4780_, 0, v_a_4777_);
v___x_4783_ = v___x_4780_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v_a_4777_);
v___x_4783_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
lean_object* v___x_4784_; 
lean_inc(v_a_4774_);
lean_inc_ref(v_a_4773_);
lean_inc(v_a_4772_);
lean_inc_ref(v_a_4771_);
lean_inc(v_a_4770_);
lean_inc_ref(v_a_4769_);
lean_inc(v_a_4768_);
lean_inc_ref(v_a_4767_);
lean_inc(v_a_4766_);
lean_inc(v_a_4765_);
lean_inc_ref(v___x_4783_);
lean_inc(v_generation_4764_);
lean_inc_ref(v_lhs_4761_);
v___x_4784_ = lean_grind_internalize(v_lhs_4761_, v_generation_4764_, v___x_4783_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_, v_a_4773_, v_a_4774_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4785_; 
lean_dec_ref_known(v___x_4784_, 1);
lean_inc(v_a_4774_);
lean_inc_ref(v_a_4773_);
lean_inc(v_a_4772_);
lean_inc_ref(v_a_4771_);
lean_inc(v_a_4770_);
lean_inc_ref(v_a_4769_);
lean_inc(v_a_4768_);
lean_inc_ref(v_a_4767_);
lean_inc(v_a_4766_);
lean_inc(v_a_4765_);
lean_inc_ref(v_rhs_4762_);
v___x_4785_ = lean_grind_internalize(v_rhs_4762_, v_generation_4764_, v___x_4783_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_, v_a_4773_, v_a_4774_);
if (lean_obj_tag(v___x_4785_) == 0)
{
lean_object* v___x_4786_; 
lean_dec_ref_known(v___x_4785_, 1);
v___x_4786_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4761_, v_rhs_4762_, v_proof_4763_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_, v_a_4773_, v_a_4774_);
return v___x_4786_;
}
else
{
lean_dec_ref(v_proof_4763_);
lean_dec_ref(v_rhs_4762_);
lean_dec_ref(v_lhs_4761_);
return v___x_4785_;
}
}
else
{
lean_dec_ref(v___x_4783_);
lean_dec(v_generation_4764_);
lean_dec_ref(v_proof_4763_);
lean_dec_ref(v_rhs_4762_);
lean_dec_ref(v_lhs_4761_);
return v___x_4784_;
}
}
}
}
else
{
lean_object* v_a_4790_; lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4797_; 
lean_dec(v_generation_4764_);
lean_dec_ref(v_proof_4763_);
lean_dec_ref(v_rhs_4762_);
lean_dec_ref(v_lhs_4761_);
v_a_4790_ = lean_ctor_get(v___x_4776_, 0);
v_isSharedCheck_4797_ = !lean_is_exclusive(v___x_4776_);
if (v_isSharedCheck_4797_ == 0)
{
v___x_4792_ = v___x_4776_;
v_isShared_4793_ = v_isSharedCheck_4797_;
goto v_resetjp_4791_;
}
else
{
lean_inc(v_a_4790_);
lean_dec(v___x_4776_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4797_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
lean_object* v___x_4795_; 
if (v_isShared_4793_ == 0)
{
v___x_4795_ = v___x_4792_;
goto v_reusejp_4794_;
}
else
{
lean_object* v_reuseFailAlloc_4796_; 
v_reuseFailAlloc_4796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4796_, 0, v_a_4790_);
v___x_4795_ = v_reuseFailAlloc_4796_;
goto v_reusejp_4794_;
}
v_reusejp_4794_:
{
return v___x_4795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object* v_lhs_4798_, lean_object* v_rhs_4799_, lean_object* v_proof_4800_, lean_object* v_generation_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l_Lean_Meta_Grind_addNewEq(v_lhs_4798_, v_rhs_4799_, v_proof_4800_, v_generation_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_, v_a_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_);
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
return v_res_4813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object* v_proof_4814_, lean_object* v_generation_4815_, lean_object* v_p_4816_, uint8_t v_isNeg_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_){
_start:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4829_ = lean_box(0);
lean_inc(v_a_4827_);
lean_inc_ref(v_a_4826_);
lean_inc(v_a_4825_);
lean_inc_ref(v_a_4824_);
lean_inc(v_a_4823_);
lean_inc_ref(v_a_4822_);
lean_inc(v_a_4821_);
lean_inc_ref(v_a_4820_);
lean_inc(v_a_4819_);
lean_inc(v_a_4818_);
lean_inc_ref(v_p_4816_);
v___x_4830_ = lean_grind_internalize(v_p_4816_, v_generation_4815_, v___x_4829_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
if (lean_obj_tag(v___x_4830_) == 0)
{
lean_dec_ref_known(v___x_4830_, 1);
if (v_isNeg_4817_ == 0)
{
lean_object* v___x_4831_; 
v___x_4831_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_4822_);
if (lean_obj_tag(v___x_4831_) == 0)
{
lean_object* v_a_4832_; lean_object* v___x_4833_; 
v_a_4832_ = lean_ctor_get(v___x_4831_, 0);
lean_inc(v_a_4832_);
lean_dec_ref_known(v___x_4831_, 1);
v___x_4833_ = l_Lean_Meta_mkEqTrue(v_proof_4814_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
if (lean_obj_tag(v___x_4833_) == 0)
{
lean_object* v_a_4834_; lean_object* v___x_4835_; 
v_a_4834_ = lean_ctor_get(v___x_4833_, 0);
lean_inc(v_a_4834_);
lean_dec_ref_known(v___x_4833_, 1);
v___x_4835_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4816_, v_a_4832_, v_a_4834_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
return v___x_4835_;
}
else
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
lean_dec(v_a_4832_);
lean_dec_ref(v_p_4816_);
v_a_4836_ = lean_ctor_get(v___x_4833_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4833_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4833_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4833_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_dec_ref(v_p_4816_);
lean_dec_ref(v_proof_4814_);
v_a_4844_ = lean_ctor_get(v___x_4831_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4831_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4831_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4831_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
else
{
lean_object* v___x_4852_; 
v___x_4852_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4822_);
if (lean_obj_tag(v___x_4852_) == 0)
{
lean_object* v_a_4853_; lean_object* v___x_4854_; 
v_a_4853_ = lean_ctor_get(v___x_4852_, 0);
lean_inc(v_a_4853_);
lean_dec_ref_known(v___x_4852_, 1);
v___x_4854_ = l_Lean_Meta_mkEqFalse(v_proof_4814_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
if (lean_obj_tag(v___x_4854_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4856_; 
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
lean_inc(v_a_4855_);
lean_dec_ref_known(v___x_4854_, 1);
v___x_4856_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4816_, v_a_4853_, v_a_4855_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
return v___x_4856_;
}
else
{
lean_object* v_a_4857_; lean_object* v___x_4859_; uint8_t v_isShared_4860_; uint8_t v_isSharedCheck_4864_; 
lean_dec(v_a_4853_);
lean_dec_ref(v_p_4816_);
v_a_4857_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4864_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4864_ == 0)
{
v___x_4859_ = v___x_4854_;
v_isShared_4860_ = v_isSharedCheck_4864_;
goto v_resetjp_4858_;
}
else
{
lean_inc(v_a_4857_);
lean_dec(v___x_4854_);
v___x_4859_ = lean_box(0);
v_isShared_4860_ = v_isSharedCheck_4864_;
goto v_resetjp_4858_;
}
v_resetjp_4858_:
{
lean_object* v___x_4862_; 
if (v_isShared_4860_ == 0)
{
v___x_4862_ = v___x_4859_;
goto v_reusejp_4861_;
}
else
{
lean_object* v_reuseFailAlloc_4863_; 
v_reuseFailAlloc_4863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4863_, 0, v_a_4857_);
v___x_4862_ = v_reuseFailAlloc_4863_;
goto v_reusejp_4861_;
}
v_reusejp_4861_:
{
return v___x_4862_;
}
}
}
}
else
{
lean_object* v_a_4865_; lean_object* v___x_4867_; uint8_t v_isShared_4868_; uint8_t v_isSharedCheck_4872_; 
lean_dec_ref(v_p_4816_);
lean_dec_ref(v_proof_4814_);
v_a_4865_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4872_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4872_ == 0)
{
v___x_4867_ = v___x_4852_;
v_isShared_4868_ = v_isSharedCheck_4872_;
goto v_resetjp_4866_;
}
else
{
lean_inc(v_a_4865_);
lean_dec(v___x_4852_);
v___x_4867_ = lean_box(0);
v_isShared_4868_ = v_isSharedCheck_4872_;
goto v_resetjp_4866_;
}
v_resetjp_4866_:
{
lean_object* v___x_4870_; 
if (v_isShared_4868_ == 0)
{
v___x_4870_ = v___x_4867_;
goto v_reusejp_4869_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v_a_4865_);
v___x_4870_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4869_;
}
v_reusejp_4869_:
{
return v___x_4870_;
}
}
}
}
}
else
{
lean_dec_ref(v_p_4816_);
lean_dec_ref(v_proof_4814_);
return v___x_4830_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object* v_proof_4873_, lean_object* v_generation_4874_, lean_object* v_p_4875_, lean_object* v_isNeg_4876_, lean_object* v_a_4877_, lean_object* v_a_4878_, lean_object* v_a_4879_, lean_object* v_a_4880_, lean_object* v_a_4881_, lean_object* v_a_4882_, lean_object* v_a_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_, lean_object* v_a_4887_){
_start:
{
uint8_t v_isNeg_boxed_4888_; lean_object* v_res_4889_; 
v_isNeg_boxed_4888_ = lean_unbox(v_isNeg_4876_);
v_res_4889_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4873_, v_generation_4874_, v_p_4875_, v_isNeg_boxed_4888_, v_a_4877_, v_a_4878_, v_a_4879_, v_a_4880_, v_a_4881_, v_a_4882_, v_a_4883_, v_a_4884_, v_a_4885_, v_a_4886_);
lean_dec(v_a_4886_);
lean_dec_ref(v_a_4885_);
lean_dec(v_a_4884_);
lean_dec_ref(v_a_4883_);
lean_dec(v_a_4882_);
lean_dec_ref(v_a_4881_);
lean_dec(v_a_4880_);
lean_dec_ref(v_a_4879_);
lean_dec(v_a_4878_);
lean_dec(v_a_4877_);
return v_res_4889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object* v_proof_4890_, lean_object* v_generation_4891_, lean_object* v_p_4892_, lean_object* v_lhs_4893_, lean_object* v_rhs_4894_, uint8_t v_isNeg_4895_, uint8_t v_isHEq_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_, lean_object* v_a_4906_){
_start:
{
if (v_isNeg_4895_ == 0)
{
lean_object* v___x_4908_; lean_object* v___x_4909_; 
lean_inc_ref(v_p_4892_);
v___x_4908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4908_, 0, v_p_4892_);
lean_inc(v_a_4906_);
lean_inc_ref(v_a_4905_);
lean_inc(v_a_4904_);
lean_inc_ref(v_a_4903_);
lean_inc(v_a_4902_);
lean_inc_ref(v_a_4901_);
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc(v_a_4897_);
lean_inc_ref(v___x_4908_);
lean_inc(v_generation_4891_);
lean_inc_ref(v_lhs_4893_);
v___x_4909_ = lean_grind_internalize(v_lhs_4893_, v_generation_4891_, v___x_4908_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
if (lean_obj_tag(v___x_4909_) == 0)
{
lean_object* v___x_4910_; 
lean_dec_ref_known(v___x_4909_, 1);
lean_inc(v_a_4906_);
lean_inc_ref(v_a_4905_);
lean_inc(v_a_4904_);
lean_inc_ref(v_a_4903_);
lean_inc(v_a_4902_);
lean_inc_ref(v_a_4901_);
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc(v_a_4897_);
lean_inc_ref(v_rhs_4894_);
v___x_4910_ = lean_grind_internalize(v_rhs_4894_, v_generation_4891_, v___x_4908_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
if (lean_obj_tag(v___x_4910_) == 0)
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
lean_dec_ref_known(v___x_4910_, 1);
v___x_4911_ = lean_box(0);
v___x_4912_ = l_Lean_Meta_Grind_Solvers_internalize(v_p_4892_, v___x_4911_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v___x_4913_; 
lean_dec_ref_known(v___x_4912_, 1);
v___x_4913_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4893_, v_rhs_4894_, v_proof_4890_, v_isHEq_4896_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
return v___x_4913_;
}
else
{
lean_dec_ref(v_rhs_4894_);
lean_dec_ref(v_lhs_4893_);
lean_dec_ref(v_proof_4890_);
return v___x_4912_;
}
}
else
{
lean_dec_ref(v_rhs_4894_);
lean_dec_ref(v_lhs_4893_);
lean_dec_ref(v_p_4892_);
lean_dec_ref(v_proof_4890_);
return v___x_4910_;
}
}
else
{
lean_dec_ref_known(v___x_4908_, 1);
lean_dec_ref(v_rhs_4894_);
lean_dec_ref(v_lhs_4893_);
lean_dec_ref(v_p_4892_);
lean_dec(v_generation_4891_);
lean_dec_ref(v_proof_4890_);
return v___x_4909_;
}
}
else
{
lean_object* v___x_4914_; lean_object* v___x_4915_; 
lean_dec_ref(v_rhs_4894_);
lean_dec_ref(v_lhs_4893_);
v___x_4914_ = lean_box(0);
lean_inc(v_a_4906_);
lean_inc_ref(v_a_4905_);
lean_inc(v_a_4904_);
lean_inc_ref(v_a_4903_);
lean_inc(v_a_4902_);
lean_inc_ref(v_a_4901_);
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc(v_a_4897_);
lean_inc_ref(v_p_4892_);
v___x_4915_ = lean_grind_internalize(v_p_4892_, v_generation_4891_, v___x_4914_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
if (lean_obj_tag(v___x_4915_) == 0)
{
lean_object* v___x_4916_; 
lean_dec_ref_known(v___x_4915_, 1);
v___x_4916_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4901_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; lean_object* v___x_4918_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v___x_4918_ = l_Lean_Meta_mkEqFalse(v_proof_4890_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___x_4920_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4918_, 1);
v___x_4920_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4892_, v_a_4917_, v_a_4919_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_, v_a_4906_);
return v___x_4920_;
}
else
{
lean_object* v_a_4921_; lean_object* v___x_4923_; uint8_t v_isShared_4924_; uint8_t v_isSharedCheck_4928_; 
lean_dec(v_a_4917_);
lean_dec_ref(v_p_4892_);
v_a_4921_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4928_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4928_ == 0)
{
v___x_4923_ = v___x_4918_;
v_isShared_4924_ = v_isSharedCheck_4928_;
goto v_resetjp_4922_;
}
else
{
lean_inc(v_a_4921_);
lean_dec(v___x_4918_);
v___x_4923_ = lean_box(0);
v_isShared_4924_ = v_isSharedCheck_4928_;
goto v_resetjp_4922_;
}
v_resetjp_4922_:
{
lean_object* v___x_4926_; 
if (v_isShared_4924_ == 0)
{
v___x_4926_ = v___x_4923_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4927_; 
v_reuseFailAlloc_4927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4927_, 0, v_a_4921_);
v___x_4926_ = v_reuseFailAlloc_4927_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
return v___x_4926_;
}
}
}
}
else
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4936_; 
lean_dec_ref(v_p_4892_);
lean_dec_ref(v_proof_4890_);
v_a_4929_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4931_ = v___x_4916_;
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4916_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
else
{
lean_dec_ref(v_p_4892_);
lean_dec_ref(v_proof_4890_);
return v___x_4915_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object** _args){
lean_object* v_proof_4937_ = _args[0];
lean_object* v_generation_4938_ = _args[1];
lean_object* v_p_4939_ = _args[2];
lean_object* v_lhs_4940_ = _args[3];
lean_object* v_rhs_4941_ = _args[4];
lean_object* v_isNeg_4942_ = _args[5];
lean_object* v_isHEq_4943_ = _args[6];
lean_object* v_a_4944_ = _args[7];
lean_object* v_a_4945_ = _args[8];
lean_object* v_a_4946_ = _args[9];
lean_object* v_a_4947_ = _args[10];
lean_object* v_a_4948_ = _args[11];
lean_object* v_a_4949_ = _args[12];
lean_object* v_a_4950_ = _args[13];
lean_object* v_a_4951_ = _args[14];
lean_object* v_a_4952_ = _args[15];
lean_object* v_a_4953_ = _args[16];
lean_object* v_a_4954_ = _args[17];
_start:
{
uint8_t v_isNeg_boxed_4955_; uint8_t v_isHEq_boxed_4956_; lean_object* v_res_4957_; 
v_isNeg_boxed_4955_ = lean_unbox(v_isNeg_4942_);
v_isHEq_boxed_4956_ = lean_unbox(v_isHEq_4943_);
v_res_4957_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4937_, v_generation_4938_, v_p_4939_, v_lhs_4940_, v_rhs_4941_, v_isNeg_boxed_4955_, v_isHEq_boxed_4956_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_);
lean_dec(v_a_4953_);
lean_dec_ref(v_a_4952_);
lean_dec(v_a_4951_);
lean_dec_ref(v_a_4950_);
lean_dec(v_a_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v_a_4947_);
lean_dec_ref(v_a_4946_);
lean_dec(v_a_4945_);
lean_dec(v_a_4944_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object* v_proof_4961_, lean_object* v_generation_4962_, lean_object* v_p_4963_, uint8_t v_isNeg_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_){
_start:
{
lean_object* v___x_4976_; 
lean_inc_ref(v_p_4963_);
v___x_4976_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_p_4963_, v_a_4972_);
if (lean_obj_tag(v___x_4976_) == 0)
{
lean_object* v_a_4977_; lean_object* v___x_4978_; uint8_t v___x_4979_; 
v_a_4977_ = lean_ctor_get(v___x_4976_, 0);
lean_inc(v_a_4977_);
lean_dec_ref_known(v___x_4976_, 1);
v___x_4978_ = l_Lean_Expr_cleanupAnnotations(v_a_4977_);
v___x_4979_ = l_Lean_Expr_isApp(v___x_4978_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; 
lean_dec_ref(v___x_4978_);
v___x_4980_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4980_;
}
else
{
lean_object* v_arg_4981_; lean_object* v___x_4982_; uint8_t v___x_4983_; 
v_arg_4981_ = lean_ctor_get(v___x_4978_, 1);
lean_inc_ref(v_arg_4981_);
v___x_4982_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4978_);
v___x_4983_ = l_Lean_Expr_isApp(v___x_4982_);
if (v___x_4983_ == 0)
{
lean_object* v___x_4984_; 
lean_dec_ref(v___x_4982_);
lean_dec_ref(v_arg_4981_);
v___x_4984_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4984_;
}
else
{
lean_object* v_arg_4985_; lean_object* v___x_4986_; uint8_t v___x_4987_; 
v_arg_4985_ = lean_ctor_get(v___x_4982_, 1);
lean_inc_ref(v_arg_4985_);
v___x_4986_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4982_);
v___x_4987_ = l_Lean_Expr_isApp(v___x_4986_);
if (v___x_4987_ == 0)
{
lean_object* v___x_4988_; 
lean_dec_ref(v___x_4986_);
lean_dec_ref(v_arg_4985_);
lean_dec_ref(v_arg_4981_);
v___x_4988_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4988_;
}
else
{
lean_object* v_arg_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; uint8_t v___x_4992_; 
v_arg_4989_ = lean_ctor_get(v___x_4986_, 1);
lean_inc_ref(v_arg_4989_);
v___x_4990_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4986_);
v___x_4991_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1));
v___x_4992_ = l_Lean_Expr_isConstOf(v___x_4990_, v___x_4991_);
if (v___x_4992_ == 0)
{
uint8_t v___x_4993_; 
lean_dec_ref(v_arg_4985_);
v___x_4993_ = l_Lean_Expr_isApp(v___x_4990_);
if (v___x_4993_ == 0)
{
lean_object* v___x_4994_; 
lean_dec_ref(v___x_4990_);
lean_dec_ref(v_arg_4989_);
lean_dec_ref(v_arg_4981_);
v___x_4994_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4994_;
}
else
{
lean_object* v___x_4995_; lean_object* v___x_4996_; uint8_t v___x_4997_; 
v___x_4995_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4990_);
v___x_4996_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1));
v___x_4997_ = l_Lean_Expr_isConstOf(v___x_4995_, v___x_4996_);
lean_dec_ref(v___x_4995_);
if (v___x_4997_ == 0)
{
lean_object* v___x_4998_; 
lean_dec_ref(v_arg_4989_);
lean_dec_ref(v_arg_4981_);
v___x_4998_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4998_;
}
else
{
lean_object* v___x_4999_; 
v___x_4999_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4961_, v_generation_4962_, v_p_4963_, v_arg_4989_, v_arg_4981_, v_isNeg_4964_, v___x_4997_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4999_;
}
}
}
else
{
uint8_t v___x_5000_; 
lean_dec_ref(v___x_4990_);
v___x_5000_ = l_Lean_Expr_isProp(v_arg_4989_);
lean_dec_ref(v_arg_4989_);
if (v___x_5000_ == 0)
{
lean_object* v___x_5001_; 
v___x_5001_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4961_, v_generation_4962_, v_p_4963_, v_arg_4985_, v_arg_4981_, v_isNeg_4964_, v___x_5000_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_5001_;
}
else
{
lean_object* v___x_5002_; 
lean_dec_ref(v_arg_4985_);
lean_dec_ref(v_arg_4981_);
v___x_5002_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4961_, v_generation_4962_, v_p_4963_, v_isNeg_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_5002_;
}
}
}
}
}
}
else
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5010_; 
lean_dec_ref(v_p_4963_);
lean_dec(v_generation_4962_);
lean_dec_ref(v_proof_4961_);
v_a_5003_ = lean_ctor_get(v___x_4976_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v___x_4976_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_5005_ = v___x_4976_;
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_4976_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
lean_object* v___x_5008_; 
if (v_isShared_5006_ == 0)
{
v___x_5008_ = v___x_5005_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_a_5003_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object* v_proof_5011_, lean_object* v_generation_5012_, lean_object* v_p_5013_, lean_object* v_isNeg_5014_, lean_object* v_a_5015_, lean_object* v_a_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_, lean_object* v_a_5024_, lean_object* v_a_5025_){
_start:
{
uint8_t v_isNeg_boxed_5026_; lean_object* v_res_5027_; 
v_isNeg_boxed_5026_ = lean_unbox(v_isNeg_5014_);
v_res_5027_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5011_, v_generation_5012_, v_p_5013_, v_isNeg_boxed_5026_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_, v_a_5021_, v_a_5022_, v_a_5023_, v_a_5024_);
lean_dec(v_a_5024_);
lean_dec_ref(v_a_5023_);
lean_dec(v_a_5022_);
lean_dec_ref(v_a_5021_);
lean_dec(v_a_5020_);
lean_dec_ref(v_a_5019_);
lean_dec(v_a_5018_);
lean_dec_ref(v_a_5017_);
lean_dec(v_a_5016_);
lean_dec(v_a_5015_);
return v_res_5027_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4(void){
_start:
{
lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; 
v___x_5035_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3));
v___x_5036_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_5037_ = l_Lean_Name_append(v___x_5036_, v___x_5035_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object* v_fact_5038_, lean_object* v_proof_5039_, lean_object* v_generation_5040_, lean_object* v_a_5041_, lean_object* v_a_5042_, lean_object* v_a_5043_, lean_object* v_a_5044_, lean_object* v_a_5045_, lean_object* v_a_5046_, lean_object* v_a_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_){
_start:
{
lean_object* v___y_5053_; lean_object* v___y_5054_; lean_object* v___y_5055_; lean_object* v___y_5056_; lean_object* v___y_5057_; lean_object* v___y_5058_; lean_object* v___y_5059_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5066_; lean_object* v___y_5067_; lean_object* v___y_5068_; lean_object* v___y_5069_; lean_object* v___y_5070_; lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v___y_5073_; lean_object* v___y_5074_; lean_object* v___y_5075_; lean_object* v___x_5083_; lean_object* v_toCold_5084_; lean_object* v_options_5085_; uint8_t v_hasTrace_5086_; 
lean_inc_ref(v_fact_5038_);
v___x_5083_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_5038_, v_a_5041_);
lean_dec_ref(v___x_5083_);
v_toCold_5084_ = lean_ctor_get(v_a_5049_, 0);
v_options_5085_ = lean_ctor_get(v_toCold_5084_, 2);
v_hasTrace_5086_ = lean_ctor_get_uint8(v_options_5085_, sizeof(void*)*1);
if (v_hasTrace_5086_ == 0)
{
v___y_5066_ = v_a_5041_;
v___y_5067_ = v_a_5042_;
v___y_5068_ = v_a_5043_;
v___y_5069_ = v_a_5044_;
v___y_5070_ = v_a_5045_;
v___y_5071_ = v_a_5046_;
v___y_5072_ = v_a_5047_;
v___y_5073_ = v_a_5048_;
v___y_5074_ = v_a_5049_;
v___y_5075_ = v_a_5050_;
goto v___jp_5065_;
}
else
{
lean_object* v_inheritedTraceOptions_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; 
v_inheritedTraceOptions_5087_ = lean_ctor_get(v_toCold_5084_, 11);
v___x_5088_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3));
v___x_5089_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4);
v___x_5090_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5087_, v_options_5085_, v___x_5089_);
if (v___x_5090_ == 0)
{
v___y_5066_ = v_a_5041_;
v___y_5067_ = v_a_5042_;
v___y_5068_ = v_a_5043_;
v___y_5069_ = v_a_5044_;
v___y_5070_ = v_a_5045_;
v___y_5071_ = v_a_5046_;
v___y_5072_ = v_a_5047_;
v___y_5073_ = v_a_5048_;
v___y_5074_ = v_a_5049_;
v___y_5075_ = v_a_5050_;
goto v___jp_5065_;
}
else
{
lean_object* v___x_5091_; 
v___x_5091_ = l_Lean_Meta_Grind_updateLastTag(v_a_5041_, v_a_5042_, v_a_5043_, v_a_5044_, v_a_5045_, v_a_5046_, v_a_5047_, v_a_5048_, v_a_5049_, v_a_5050_);
if (lean_obj_tag(v___x_5091_) == 0)
{
lean_object* v___x_5092_; lean_object* v___x_5093_; 
lean_dec_ref_known(v___x_5091_, 1);
lean_inc_ref(v_fact_5038_);
v___x_5092_ = l_Lean_MessageData_ofExpr(v_fact_5038_);
v___x_5093_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_5088_, v___x_5092_, v_a_5047_, v_a_5048_, v_a_5049_, v_a_5050_);
if (lean_obj_tag(v___x_5093_) == 0)
{
lean_dec_ref_known(v___x_5093_, 1);
v___y_5066_ = v_a_5041_;
v___y_5067_ = v_a_5042_;
v___y_5068_ = v_a_5043_;
v___y_5069_ = v_a_5044_;
v___y_5070_ = v_a_5045_;
v___y_5071_ = v_a_5046_;
v___y_5072_ = v_a_5047_;
v___y_5073_ = v_a_5048_;
v___y_5074_ = v_a_5049_;
v___y_5075_ = v_a_5050_;
goto v___jp_5065_;
}
else
{
lean_dec(v_generation_5040_);
lean_dec_ref(v_proof_5039_);
lean_dec_ref(v_fact_5038_);
return v___x_5093_;
}
}
else
{
lean_dec(v_generation_5040_);
lean_dec_ref(v_proof_5039_);
lean_dec_ref(v_fact_5038_);
return v___x_5091_;
}
}
}
v___jp_5052_:
{
uint8_t v___x_5063_; lean_object* v___x_5064_; 
v___x_5063_ = 0;
v___x_5064_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5039_, v_generation_5040_, v_fact_5038_, v___x_5063_, v___y_5053_, v___y_5054_, v___y_5055_, v___y_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
return v___x_5064_;
}
v___jp_5065_:
{
lean_object* v___x_5076_; uint8_t v___x_5077_; 
lean_inc_ref(v_fact_5038_);
v___x_5076_ = l_Lean_Expr_cleanupAnnotations(v_fact_5038_);
v___x_5077_ = l_Lean_Expr_isApp(v___x_5076_);
if (v___x_5077_ == 0)
{
lean_dec_ref(v___x_5076_);
v___y_5053_ = v___y_5066_;
v___y_5054_ = v___y_5067_;
v___y_5055_ = v___y_5068_;
v___y_5056_ = v___y_5069_;
v___y_5057_ = v___y_5070_;
v___y_5058_ = v___y_5071_;
v___y_5059_ = v___y_5072_;
v___y_5060_ = v___y_5073_;
v___y_5061_ = v___y_5074_;
v___y_5062_ = v___y_5075_;
goto v___jp_5052_;
}
else
{
lean_object* v_arg_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; 
v_arg_5078_ = lean_ctor_get(v___x_5076_, 1);
lean_inc_ref(v_arg_5078_);
v___x_5079_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5076_);
v___x_5080_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1));
v___x_5081_ = l_Lean_Expr_isConstOf(v___x_5079_, v___x_5080_);
lean_dec_ref(v___x_5079_);
if (v___x_5081_ == 0)
{
lean_dec_ref(v_arg_5078_);
v___y_5053_ = v___y_5066_;
v___y_5054_ = v___y_5067_;
v___y_5055_ = v___y_5068_;
v___y_5056_ = v___y_5069_;
v___y_5057_ = v___y_5070_;
v___y_5058_ = v___y_5071_;
v___y_5059_ = v___y_5072_;
v___y_5060_ = v___y_5073_;
v___y_5061_ = v___y_5074_;
v___y_5062_ = v___y_5075_;
goto v___jp_5052_;
}
else
{
lean_object* v___x_5082_; 
lean_dec_ref(v_fact_5038_);
v___x_5082_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5039_, v_generation_5040_, v_arg_5078_, v___x_5081_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_);
return v___x_5082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object* v_fact_5094_, lean_object* v_proof_5095_, lean_object* v_generation_5096_, lean_object* v_a_5097_, lean_object* v_a_5098_, lean_object* v_a_5099_, lean_object* v_a_5100_, lean_object* v_a_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_){
_start:
{
lean_object* v_res_5108_; 
v_res_5108_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5094_, v_proof_5095_, v_generation_5096_, v_a_5097_, v_a_5098_, v_a_5099_, v_a_5100_, v_a_5101_, v_a_5102_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
lean_dec(v_a_5106_);
lean_dec_ref(v_a_5105_);
lean_dec(v_a_5104_);
lean_dec_ref(v_a_5103_);
lean_dec(v_a_5102_);
lean_dec_ref(v_a_5101_);
lean_dec(v_a_5100_);
lean_dec_ref(v_a_5099_);
lean_dec(v_a_5098_);
lean_dec(v_a_5097_);
return v_res_5108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_){
_start:
{
lean_object* v___x_5123_; 
v___x_5123_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_5112_);
if (lean_obj_tag(v___x_5123_) == 0)
{
lean_object* v_a_5124_; uint8_t v___x_5125_; 
v_a_5124_ = lean_ctor_get(v___x_5123_, 0);
lean_inc(v_a_5124_);
lean_dec_ref_known(v___x_5123_, 1);
v___x_5125_ = lean_unbox(v_a_5124_);
lean_dec(v_a_5124_);
if (v___x_5125_ == 0)
{
lean_object* v___x_5126_; lean_object* v___x_5127_; 
v___x_5126_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0));
v___x_5127_ = l_Lean_Core_checkSystem(v___x_5126_, v___y_5120_, v___y_5121_);
if (lean_obj_tag(v___x_5127_) == 0)
{
lean_object* v___x_5128_; 
lean_dec_ref_known(v___x_5127_, 1);
v___x_5128_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popNextFact_x3f___redArg(v___y_5112_);
if (lean_obj_tag(v___x_5128_) == 0)
{
lean_object* v_a_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5165_; 
v_a_5129_ = lean_ctor_get(v___x_5128_, 0);
v_isSharedCheck_5165_ = !lean_is_exclusive(v___x_5128_);
if (v_isSharedCheck_5165_ == 0)
{
v___x_5131_ = v___x_5128_;
v_isShared_5132_ = v_isSharedCheck_5165_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_a_5129_);
lean_dec(v___x_5128_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5165_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
if (lean_obj_tag(v_a_5129_) == 1)
{
lean_object* v_val_5133_; 
lean_del_object(v___x_5131_);
v_val_5133_ = lean_ctor_get(v_a_5129_, 0);
lean_inc(v_val_5133_);
lean_dec_ref_known(v_a_5129_, 1);
if (lean_obj_tag(v_val_5133_) == 0)
{
lean_object* v_lhs_5134_; lean_object* v_rhs_5135_; lean_object* v_proof_5136_; uint8_t v_isHEq_5137_; lean_object* v___x_5138_; 
v_lhs_5134_ = lean_ctor_get(v_val_5133_, 0);
lean_inc_ref(v_lhs_5134_);
v_rhs_5135_ = lean_ctor_get(v_val_5133_, 1);
lean_inc_ref(v_rhs_5135_);
v_proof_5136_ = lean_ctor_get(v_val_5133_, 2);
lean_inc_ref(v_proof_5136_);
v_isHEq_5137_ = lean_ctor_get_uint8(v_val_5133_, sizeof(void*)*3);
lean_dec_ref_known(v_val_5133_, 3);
v___x_5138_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_5134_, v_rhs_5135_, v_proof_5136_, v_isHEq_5137_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_dec_ref_known(v___x_5138_, 1);
goto _start;
}
else
{
lean_object* v_a_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5147_; 
v_a_5140_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5147_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5147_ == 0)
{
v___x_5142_ = v___x_5138_;
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_a_5140_);
lean_dec(v___x_5138_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5145_; 
if (v_isShared_5143_ == 0)
{
v___x_5145_ = v___x_5142_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5146_; 
v_reuseFailAlloc_5146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5146_, 0, v_a_5140_);
v___x_5145_ = v_reuseFailAlloc_5146_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
return v___x_5145_;
}
}
}
}
else
{
lean_object* v_prop_5148_; lean_object* v_proof_5149_; lean_object* v_generation_5150_; lean_object* v___x_5151_; 
v_prop_5148_ = lean_ctor_get(v_val_5133_, 0);
lean_inc_ref(v_prop_5148_);
v_proof_5149_ = lean_ctor_get(v_val_5133_, 1);
lean_inc_ref(v_proof_5149_);
v_generation_5150_ = lean_ctor_get(v_val_5133_, 2);
lean_inc(v_generation_5150_);
lean_dec_ref_known(v_val_5133_, 3);
v___x_5151_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_prop_5148_, v_proof_5149_, v_generation_5150_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_);
if (lean_obj_tag(v___x_5151_) == 0)
{
lean_dec_ref_known(v___x_5151_, 1);
goto _start;
}
else
{
lean_object* v_a_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5160_; 
v_a_5153_ = lean_ctor_get(v___x_5151_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5151_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5155_ = v___x_5151_;
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_a_5153_);
lean_dec(v___x_5151_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5158_; 
if (v_isShared_5156_ == 0)
{
v___x_5158_ = v___x_5155_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5153_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
}
else
{
lean_object* v___x_5161_; lean_object* v___x_5163_; 
lean_dec(v_a_5129_);
v___x_5161_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0));
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 0, v___x_5161_);
v___x_5163_ = v___x_5131_;
goto v_reusejp_5162_;
}
else
{
lean_object* v_reuseFailAlloc_5164_; 
v_reuseFailAlloc_5164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5164_, 0, v___x_5161_);
v___x_5163_ = v_reuseFailAlloc_5164_;
goto v_reusejp_5162_;
}
v_reusejp_5162_:
{
return v___x_5163_;
}
}
}
}
else
{
lean_object* v_a_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5173_; 
v_a_5166_ = lean_ctor_get(v___x_5128_, 0);
v_isSharedCheck_5173_ = !lean_is_exclusive(v___x_5128_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5168_ = v___x_5128_;
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_a_5166_);
lean_dec(v___x_5128_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5173_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
lean_object* v___x_5171_; 
if (v_isShared_5169_ == 0)
{
v___x_5171_ = v___x_5168_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_a_5166_);
v___x_5171_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
return v___x_5171_;
}
}
}
}
else
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5181_; 
v_a_5174_ = lean_ctor_get(v___x_5127_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5127_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5176_ = v___x_5127_;
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5127_);
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
v___x_5182_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v___y_5112_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5190_; 
v_isSharedCheck_5190_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5190_ == 0)
{
lean_object* v_unused_5191_; 
v_unused_5191_ = lean_ctor_get(v___x_5182_, 0);
lean_dec(v_unused_5191_);
v___x_5184_ = v___x_5182_;
v_isShared_5185_ = v_isSharedCheck_5190_;
goto v_resetjp_5183_;
}
else
{
lean_dec(v___x_5182_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5190_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5186_; lean_object* v___x_5188_; 
v___x_5186_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___closed__0));
if (v_isShared_5185_ == 0)
{
lean_ctor_set(v___x_5184_, 0, v___x_5186_);
v___x_5188_ = v___x_5184_;
goto v_reusejp_5187_;
}
else
{
lean_object* v_reuseFailAlloc_5189_; 
v_reuseFailAlloc_5189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5189_, 0, v___x_5186_);
v___x_5188_ = v_reuseFailAlloc_5189_;
goto v_reusejp_5187_;
}
v_reusejp_5187_:
{
return v___x_5188_;
}
}
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5199_; 
v_a_5192_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5199_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5194_ = v___x_5182_;
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5182_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5197_; 
if (v_isShared_5195_ == 0)
{
v___x_5197_ = v___x_5194_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v_a_5192_);
v___x_5197_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
return v___x_5197_;
}
}
}
}
}
else
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
v_a_5200_ = lean_ctor_get(v___x_5123_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5123_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v___x_5123_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5123_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg___boxed(lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec(v___y_5215_);
lean_dec_ref(v___y_5214_);
lean_dec(v___y_5213_);
lean_dec_ref(v___y_5212_);
lean_dec(v___y_5211_);
lean_dec_ref(v___y_5210_);
lean_dec(v___y_5209_);
lean_dec(v___y_5208_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* lean_grind_process_new_facts(lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_, lean_object* v_a_5224_, lean_object* v_a_5225_, lean_object* v_a_5226_, lean_object* v_a_5227_, lean_object* v_a_5228_, lean_object* v_a_5229_){
_start:
{
lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5231_ = lean_box(0);
v___x_5232_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_, v_a_5224_, v_a_5225_, v_a_5226_, v_a_5227_, v_a_5228_, v_a_5229_);
lean_dec(v_a_5229_);
lean_dec_ref(v_a_5228_);
lean_dec(v_a_5227_);
lean_dec_ref(v_a_5226_);
lean_dec(v_a_5225_);
lean_dec_ref(v_a_5224_);
lean_dec(v_a_5223_);
lean_dec_ref(v_a_5222_);
lean_dec(v_a_5221_);
lean_dec(v_a_5220_);
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5245_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5235_ = v___x_5232_;
v_isShared_5236_ = v_isSharedCheck_5245_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5232_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5245_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v_fst_5237_; 
v_fst_5237_ = lean_ctor_get(v_a_5233_, 0);
lean_inc(v_fst_5237_);
lean_dec(v_a_5233_);
if (lean_obj_tag(v_fst_5237_) == 0)
{
lean_object* v___x_5239_; 
if (v_isShared_5236_ == 0)
{
lean_ctor_set(v___x_5235_, 0, v___x_5231_);
v___x_5239_ = v___x_5235_;
goto v_reusejp_5238_;
}
else
{
lean_object* v_reuseFailAlloc_5240_; 
v_reuseFailAlloc_5240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5240_, 0, v___x_5231_);
v___x_5239_ = v_reuseFailAlloc_5240_;
goto v_reusejp_5238_;
}
v_reusejp_5238_:
{
return v___x_5239_;
}
}
else
{
lean_object* v_val_5241_; lean_object* v___x_5243_; 
v_val_5241_ = lean_ctor_get(v_fst_5237_, 0);
lean_inc(v_val_5241_);
lean_dec_ref_known(v_fst_5237_, 1);
if (v_isShared_5236_ == 0)
{
lean_ctor_set(v___x_5235_, 0, v_val_5241_);
v___x_5243_ = v___x_5235_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v_val_5241_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
return v___x_5243_;
}
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
v_a_5246_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v___x_5232_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_a_5246_);
lean_dec(v___x_5232_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
return v___x_5251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl___boxed(lean_object* v_a_5254_, lean_object* v_a_5255_, lean_object* v_a_5256_, lean_object* v_a_5257_, lean_object* v_a_5258_, lean_object* v_a_5259_, lean_object* v_a_5260_, lean_object* v_a_5261_, lean_object* v_a_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = lean_grind_process_new_facts(v_a_5254_, v_a_5255_, v_a_5256_, v_a_5257_, v_a_5258_, v_a_5259_, v_a_5260_, v_a_5261_, v_a_5262_, v_a_5263_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(lean_object* v_inst_5266_, lean_object* v_a_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_){
_start:
{
lean_object* v___x_5279_; 
v___x_5279_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___redArg(v___y_5268_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_, v___y_5276_, v___y_5277_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0___boxed(lean_object* v_inst_5280_, lean_object* v_a_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processNewFactsImpl_spec__0(v_inst_5280_, v_a_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
lean_dec(v___y_5287_);
lean_dec_ref(v___y_5286_);
lean_dec(v___y_5285_);
lean_dec_ref(v___y_5284_);
lean_dec(v___y_5283_);
lean_dec(v___y_5282_);
lean_dec_ref(v_a_5281_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object* v_fact_5294_, lean_object* v_proof_5295_, lean_object* v_generation_5296_, lean_object* v_a_5297_, lean_object* v_a_5298_, lean_object* v_a_5299_, lean_object* v_a_5300_, lean_object* v_a_5301_, lean_object* v_a_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_){
_start:
{
uint8_t v___x_5308_; 
lean_inc_ref(v_fact_5294_);
v___x_5308_ = l_Lean_Expr_isTrue(v_fact_5294_);
if (v___x_5308_ == 0)
{
lean_object* v___x_5309_; 
v___x_5309_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_5297_);
if (lean_obj_tag(v___x_5309_) == 0)
{
lean_object* v_a_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5321_; 
v_a_5310_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5321_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5321_ == 0)
{
v___x_5312_ = v___x_5309_;
v_isShared_5313_ = v_isSharedCheck_5321_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_a_5310_);
lean_dec(v___x_5309_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5321_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
uint8_t v___x_5314_; 
v___x_5314_ = lean_unbox(v_a_5310_);
lean_dec(v_a_5310_);
if (v___x_5314_ == 0)
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
lean_del_object(v___x_5312_);
v___x_5315_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetNewFacts___redArg(v_a_5297_);
lean_dec_ref(v___x_5315_);
v___x_5316_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5294_, v_proof_5295_, v_generation_5296_, v_a_5297_, v_a_5298_, v_a_5299_, v_a_5300_, v_a_5301_, v_a_5302_, v_a_5303_, v_a_5304_, v_a_5305_, v_a_5306_);
return v___x_5316_;
}
else
{
lean_object* v___x_5317_; lean_object* v___x_5319_; 
lean_dec(v_generation_5296_);
lean_dec_ref(v_proof_5295_);
lean_dec_ref(v_fact_5294_);
v___x_5317_ = lean_box(0);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5317_);
v___x_5319_ = v___x_5312_;
goto v_reusejp_5318_;
}
else
{
lean_object* v_reuseFailAlloc_5320_; 
v_reuseFailAlloc_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5320_, 0, v___x_5317_);
v___x_5319_ = v_reuseFailAlloc_5320_;
goto v_reusejp_5318_;
}
v_reusejp_5318_:
{
return v___x_5319_;
}
}
}
}
else
{
lean_object* v_a_5322_; lean_object* v___x_5324_; uint8_t v_isShared_5325_; uint8_t v_isSharedCheck_5329_; 
lean_dec(v_generation_5296_);
lean_dec_ref(v_proof_5295_);
lean_dec_ref(v_fact_5294_);
v_a_5322_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5324_ = v___x_5309_;
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
else
{
lean_inc(v_a_5322_);
lean_dec(v___x_5309_);
v___x_5324_ = lean_box(0);
v_isShared_5325_ = v_isSharedCheck_5329_;
goto v_resetjp_5323_;
}
v_resetjp_5323_:
{
lean_object* v___x_5327_; 
if (v_isShared_5325_ == 0)
{
v___x_5327_ = v___x_5324_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v_a_5322_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
}
else
{
lean_object* v___x_5330_; lean_object* v___x_5331_; 
lean_dec(v_generation_5296_);
lean_dec_ref(v_proof_5295_);
lean_dec_ref(v_fact_5294_);
v___x_5330_ = lean_box(0);
v___x_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5331_, 0, v___x_5330_);
return v___x_5331_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object* v_fact_5332_, lean_object* v_proof_5333_, lean_object* v_generation_5334_, lean_object* v_a_5335_, lean_object* v_a_5336_, lean_object* v_a_5337_, lean_object* v_a_5338_, lean_object* v_a_5339_, lean_object* v_a_5340_, lean_object* v_a_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_, lean_object* v_a_5344_, lean_object* v_a_5345_){
_start:
{
lean_object* v_res_5346_; 
v_res_5346_ = l_Lean_Meta_Grind_add(v_fact_5332_, v_proof_5333_, v_generation_5334_, v_a_5335_, v_a_5336_, v_a_5337_, v_a_5338_, v_a_5339_, v_a_5340_, v_a_5341_, v_a_5342_, v_a_5343_, v_a_5344_);
lean_dec(v_a_5344_);
lean_dec_ref(v_a_5343_);
lean_dec(v_a_5342_);
lean_dec_ref(v_a_5341_);
lean_dec(v_a_5340_);
lean_dec_ref(v_a_5339_);
lean_dec(v_a_5338_);
lean_dec_ref(v_a_5337_);
lean_dec(v_a_5336_);
lean_dec(v_a_5335_);
return v_res_5346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object* v_fvarId_5347_, lean_object* v_generation_5348_, lean_object* v_a_5349_, lean_object* v_a_5350_, lean_object* v_a_5351_, lean_object* v_a_5352_, lean_object* v_a_5353_, lean_object* v_a_5354_, lean_object* v_a_5355_, lean_object* v_a_5356_, lean_object* v_a_5357_, lean_object* v_a_5358_){
_start:
{
lean_object* v___x_5360_; 
lean_inc(v_fvarId_5347_);
v___x_5360_ = l_Lean_FVarId_getType___redArg(v_fvarId_5347_, v_a_5355_, v_a_5357_, v_a_5358_);
if (lean_obj_tag(v___x_5360_) == 0)
{
lean_object* v_a_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; 
v_a_5361_ = lean_ctor_get(v___x_5360_, 0);
lean_inc(v_a_5361_);
lean_dec_ref_known(v___x_5360_, 1);
v___x_5362_ = l_Lean_mkFVar(v_fvarId_5347_);
v___x_5363_ = l_Lean_Meta_Grind_add(v_a_5361_, v___x_5362_, v_generation_5348_, v_a_5349_, v_a_5350_, v_a_5351_, v_a_5352_, v_a_5353_, v_a_5354_, v_a_5355_, v_a_5356_, v_a_5357_, v_a_5358_);
return v___x_5363_;
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
lean_dec(v_generation_5348_);
lean_dec(v_fvarId_5347_);
v_a_5364_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5360_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5360_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object* v_fvarId_5372_, lean_object* v_generation_5373_, lean_object* v_a_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v_a_5379_, lean_object* v_a_5380_, lean_object* v_a_5381_, lean_object* v_a_5382_, lean_object* v_a_5383_, lean_object* v_a_5384_){
_start:
{
lean_object* v_res_5385_; 
v_res_5385_ = l_Lean_Meta_Grind_addHypothesis(v_fvarId_5372_, v_generation_5373_, v_a_5374_, v_a_5375_, v_a_5376_, v_a_5377_, v_a_5378_, v_a_5379_, v_a_5380_, v_a_5381_, v_a_5382_, v_a_5383_);
lean_dec(v_a_5383_);
lean_dec_ref(v_a_5382_);
lean_dec(v_a_5381_);
lean_dec_ref(v_a_5380_);
lean_dec(v_a_5379_);
lean_dec_ref(v_a_5378_);
lean_dec(v_a_5377_);
lean_dec_ref(v_a_5376_);
lean_dec(v_a_5375_);
lean_dec(v_a_5374_);
return v_res_5385_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Core(builtin);
}
#ifdef __cplusplus
}
#endif

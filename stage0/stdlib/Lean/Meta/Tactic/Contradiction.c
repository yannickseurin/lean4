// Lean compiler output
// Module: Lean.Meta.Tactic.Contradiction
// Imports: public import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Apply import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Simp.Rewrite
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNot_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_saveState___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value)} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value;
static const lean_array_object l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "contradiction"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 147, 90, 76, 177, 67, 155, 92)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__4 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__5 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__6 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__7;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "elimEmptyInductive, number subgoals: "};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "elimEmptyInductive out-of-fuel"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__8 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_mkGenDiseqMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkGenDiseqMask___closed__0 = (const lean_object*)&l_Lean_Meta_mkGenDiseqMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Contradiction.0.Lean.Meta.processGenDiseq"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: isGenDiseq localDecl.type\n  "};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_contradictionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 42, 230, 185, 74, 16, 247, 90)}};
static const lean_object* l_Lean_MVarId_contradictionCore___closed__0 = (const lean_object*)&l_Lean_MVarId_contradictionCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object* v_e_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_e_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_appArg_x21(v_e_6_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object* v_e_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(v_e_13_);
lean_dec_ref(v_e_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_ks_20_; lean_object* v_vs_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_45_; 
v_ks_20_ = lean_ctor_get(v_x_16_, 0);
v_vs_21_ = lean_ctor_get(v_x_16_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_45_ == 0)
{
v___x_23_ = v_x_16_;
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_vs_21_);
lean_inc(v_ks_20_);
lean_dec(v_x_16_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_get_size(v_ks_20_);
v___x_26_ = lean_nat_dec_lt(v_x_17_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_dec(v_x_17_);
v___x_27_ = lean_array_push(v_ks_20_, v_x_18_);
v___x_28_ = lean_array_push(v_vs_21_, v_x_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_28_);
lean_ctor_set(v___x_23_, 0, v___x_27_);
v___x_30_ = v___x_23_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
else
{
lean_object* v_k_x27_32_; uint8_t v___x_33_; 
v_k_x27_32_ = lean_array_fget_borrowed(v_ks_20_, v_x_17_);
v___x_33_ = l_Lean_instBEqMVarId_beq(v_x_18_, v_k_x27_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_35_; 
if (v_isShared_24_ == 0)
{
v___x_35_ = v___x_23_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_ks_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_vs_21_);
v___x_35_ = v_reuseFailAlloc_39_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_x_17_, v___x_36_);
lean_dec(v_x_17_);
v_x_16_ = v___x_35_;
v_x_17_ = v___x_37_;
goto _start;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_40_ = lean_array_fset(v_ks_20_, v_x_17_, v_x_18_);
v___x_41_ = lean_array_fset(v_vs_21_, v_x_17_, v_x_19_);
lean_dec(v_x_17_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_41_);
lean_ctor_set(v___x_23_, 0, v___x_40_);
v___x_43_ = v___x_23_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_46_, v___x_49_, v_k_47_, v_v_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_box(0);
v___x_52_ = l_unsafeCast___redArg(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object* v_x_54_, size_t v_x_55_, size_t v_x_56_, lean_object* v_x_57_, lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
lean_object* v_es_59_; size_t v___x_60_; size_t v___x_61_; lean_object* v_j_62_; lean_object* v___x_63_; uint8_t v___x_64_; 
v_es_59_ = lean_ctor_get(v_x_54_, 0);
v___x_60_ = ((size_t)31ULL);
v___x_61_ = lean_usize_land(v_x_55_, v___x_60_);
v_j_62_ = lean_usize_to_nat(v___x_61_);
v___x_63_ = lean_array_get_size(v_es_59_);
v___x_64_ = lean_nat_dec_lt(v_j_62_, v___x_63_);
if (v___x_64_ == 0)
{
lean_dec(v_j_62_);
lean_dec(v_x_58_);
lean_dec(v_x_57_);
return v_x_54_;
}
else
{
lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_103_; 
lean_inc_ref(v_es_59_);
v_isSharedCheck_103_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_103_ == 0)
{
lean_object* v_unused_104_; 
v_unused_104_ = lean_ctor_get(v_x_54_, 0);
lean_dec(v_unused_104_);
v___x_66_ = v_x_54_;
v_isShared_67_ = v_isSharedCheck_103_;
goto v_resetjp_65_;
}
else
{
lean_dec(v_x_54_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_103_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v_v_68_; lean_object* v___x_69_; lean_object* v_xs_x27_70_; lean_object* v___y_72_; 
v_v_68_ = lean_array_fget(v_es_59_, v_j_62_);
v___x_69_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_70_ = lean_array_fset(v_es_59_, v_j_62_, v___x_69_);
switch(lean_obj_tag(v_v_68_))
{
case 0:
{
lean_object* v_key_77_; lean_object* v_val_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_88_; 
v_key_77_ = lean_ctor_get(v_v_68_, 0);
v_val_78_ = lean_ctor_get(v_v_68_, 1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_v_68_);
if (v_isSharedCheck_88_ == 0)
{
v___x_80_ = v_v_68_;
v_isShared_81_ = v_isSharedCheck_88_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_val_78_);
lean_inc(v_key_77_);
lean_dec(v_v_68_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_88_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
uint8_t v___x_82_; 
v___x_82_ = l_Lean_instBEqMVarId_beq(v_x_57_, v_key_77_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_del_object(v___x_80_);
v___x_83_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_77_, v_val_78_, v_x_57_, v_x_58_);
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
v___y_72_ = v___x_84_;
goto v___jp_71_;
}
else
{
lean_object* v___x_86_; 
lean_dec(v_val_78_);
lean_dec(v_key_77_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 1, v_x_58_);
lean_ctor_set(v___x_80_, 0, v_x_57_);
v___x_86_ = v___x_80_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_x_57_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v_x_58_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
v___y_72_ = v___x_86_;
goto v___jp_71_;
}
}
}
}
case 1:
{
lean_object* v_node_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_101_; 
v_node_89_ = lean_ctor_get(v_v_68_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_v_68_);
if (v_isSharedCheck_101_ == 0)
{
v___x_91_ = v_v_68_;
v_isShared_92_ = v_isSharedCheck_101_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_node_89_);
lean_dec(v_v_68_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_101_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; size_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_93_ = ((size_t)5ULL);
v___x_94_ = lean_usize_shift_right(v_x_55_, v___x_93_);
v___x_95_ = ((size_t)1ULL);
v___x_96_ = lean_usize_add(v_x_56_, v___x_95_);
v___x_97_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_node_89_, v___x_94_, v___x_96_, v_x_57_, v_x_58_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_97_);
v___x_99_ = v___x_91_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
v___y_72_ = v___x_99_;
goto v___jp_71_;
}
}
}
default: 
{
lean_object* v___x_102_; 
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v_x_57_);
lean_ctor_set(v___x_102_, 1, v_x_58_);
v___y_72_ = v___x_102_;
goto v___jp_71_;
}
}
v___jp_71_:
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = lean_array_fset(v_xs_x27_70_, v_j_62_, v___y_72_);
lean_dec(v_j_62_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 0, v___x_73_);
v___x_75_ = v___x_66_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___x_73_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
}
}
else
{
lean_object* v_ks_105_; lean_object* v_vs_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_124_; 
v_ks_105_ = lean_ctor_get(v_x_54_, 0);
v_vs_106_ = lean_ctor_get(v_x_54_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_124_ == 0)
{
v___x_108_ = v_x_54_;
v_isShared_109_ = v_isSharedCheck_124_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_vs_106_);
lean_inc(v_ks_105_);
lean_dec(v_x_54_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_124_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_ks_105_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v_vs_106_);
v___x_111_ = v_reuseFailAlloc_123_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v_newNode_112_; size_t v___x_113_; uint8_t v___x_114_; 
v_newNode_112_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v___x_111_, v_x_57_, v_x_58_);
v___x_113_ = ((size_t)7ULL);
v___x_114_ = lean_usize_dec_le(v___x_113_, v_x_56_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_115_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_112_);
v___x_116_ = lean_unsigned_to_nat(4u);
v___x_117_ = lean_nat_dec_lt(v___x_115_, v___x_116_);
lean_dec(v___x_115_);
if (v___x_117_ == 0)
{
lean_object* v_ks_118_; lean_object* v_vs_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_ks_118_ = lean_ctor_get(v_newNode_112_, 0);
lean_inc_ref(v_ks_118_);
v_vs_119_ = lean_ctor_get(v_newNode_112_, 1);
lean_inc_ref(v_vs_119_);
lean_dec_ref(v_newNode_112_);
v___x_120_ = lean_unsigned_to_nat(0u);
v___x_121_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_122_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_x_56_, v_ks_118_, v_vs_119_, v___x_120_, v___x_121_);
lean_dec_ref(v_vs_119_);
lean_dec_ref(v_ks_118_);
return v___x_122_;
}
else
{
return v_newNode_112_;
}
}
else
{
return v_newNode_112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_125_, lean_object* v_keys_126_, lean_object* v_vals_127_, lean_object* v_i_128_, lean_object* v_entries_129_){
_start:
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = lean_array_get_size(v_keys_126_);
v___x_131_ = lean_nat_dec_lt(v_i_128_, v___x_130_);
if (v___x_131_ == 0)
{
lean_dec(v_i_128_);
return v_entries_129_;
}
else
{
lean_object* v_k_132_; lean_object* v_v_133_; uint64_t v___x_134_; size_t v_h_135_; size_t v___x_136_; lean_object* v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v_h_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_k_132_ = lean_array_fget_borrowed(v_keys_126_, v_i_128_);
v_v_133_ = lean_array_fget_borrowed(v_vals_127_, v_i_128_);
v___x_134_ = l_Lean_instHashableMVarId_hash(v_k_132_);
v_h_135_ = lean_uint64_to_usize(v___x_134_);
v___x_136_ = ((size_t)5ULL);
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_sub(v_depth_125_, v___x_138_);
v___x_140_ = lean_usize_mul(v___x_136_, v___x_139_);
v_h_141_ = lean_usize_shift_right(v_h_135_, v___x_140_);
v___x_142_ = lean_nat_add(v_i_128_, v___x_137_);
lean_dec(v_i_128_);
lean_inc(v_v_133_);
lean_inc(v_k_132_);
v___x_143_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_entries_129_, v_h_141_, v_depth_125_, v_k_132_, v_v_133_);
v_i_128_ = v___x_142_;
v_entries_129_ = v___x_143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_145_, lean_object* v_keys_146_, lean_object* v_vals_147_, lean_object* v_i_148_, lean_object* v_entries_149_){
_start:
{
size_t v_depth_boxed_150_; lean_object* v_res_151_; 
v_depth_boxed_150_ = lean_unbox_usize(v_depth_145_);
lean_dec(v_depth_145_);
v_res_151_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_150_, v_keys_146_, v_vals_147_, v_i_148_, v_entries_149_);
lean_dec_ref(v_vals_147_);
lean_dec_ref(v_keys_146_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_, lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
size_t v_x_1127__boxed_157_; size_t v_x_1128__boxed_158_; lean_object* v_res_159_; 
v_x_1127__boxed_157_ = lean_unbox_usize(v_x_153_);
lean_dec(v_x_153_);
v_x_1128__boxed_158_ = lean_unbox_usize(v_x_154_);
lean_dec(v_x_154_);
v_res_159_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_152_, v_x_1127__boxed_157_, v_x_1128__boxed_158_, v_x_155_, v_x_156_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
uint64_t v___x_163_; size_t v___x_164_; size_t v___x_165_; lean_object* v___x_166_; 
v___x_163_ = l_Lean_instHashableMVarId_hash(v_x_161_);
v___x_164_ = lean_uint64_to_usize(v___x_163_);
v___x_165_ = ((size_t)1ULL);
v___x_166_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_160_, v___x_164_, v___x_165_, v_x_161_, v_x_162_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object* v_mvarId_167_, lean_object* v_val_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; lean_object* v_mctx_172_; lean_object* v_cache_173_; lean_object* v_zetaDeltaFVarIds_174_; lean_object* v_postponed_175_; lean_object* v_diag_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_205_; 
v___x_171_ = lean_st_ref_take(v___y_169_);
v_mctx_172_ = lean_ctor_get(v___x_171_, 0);
v_cache_173_ = lean_ctor_get(v___x_171_, 1);
v_zetaDeltaFVarIds_174_ = lean_ctor_get(v___x_171_, 2);
v_postponed_175_ = lean_ctor_get(v___x_171_, 3);
v_diag_176_ = lean_ctor_get(v___x_171_, 4);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_205_ == 0)
{
v___x_178_ = v___x_171_;
v_isShared_179_ = v_isSharedCheck_205_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_diag_176_);
lean_inc(v_postponed_175_);
lean_inc(v_zetaDeltaFVarIds_174_);
lean_inc(v_cache_173_);
lean_inc(v_mctx_172_);
lean_dec(v___x_171_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_205_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_depth_180_; lean_object* v_levelAssignDepth_181_; lean_object* v_lmvarCounter_182_; lean_object* v_mvarCounter_183_; lean_object* v_lDecls_184_; lean_object* v_decls_185_; lean_object* v_userNames_186_; lean_object* v_lAssignment_187_; lean_object* v_eAssignment_188_; lean_object* v_dAssignment_189_; lean_object* v_instanceTypedMVars_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_204_; 
v_depth_180_ = lean_ctor_get(v_mctx_172_, 0);
v_levelAssignDepth_181_ = lean_ctor_get(v_mctx_172_, 1);
v_lmvarCounter_182_ = lean_ctor_get(v_mctx_172_, 2);
v_mvarCounter_183_ = lean_ctor_get(v_mctx_172_, 3);
v_lDecls_184_ = lean_ctor_get(v_mctx_172_, 4);
v_decls_185_ = lean_ctor_get(v_mctx_172_, 5);
v_userNames_186_ = lean_ctor_get(v_mctx_172_, 6);
v_lAssignment_187_ = lean_ctor_get(v_mctx_172_, 7);
v_eAssignment_188_ = lean_ctor_get(v_mctx_172_, 8);
v_dAssignment_189_ = lean_ctor_get(v_mctx_172_, 9);
v_instanceTypedMVars_190_ = lean_ctor_get(v_mctx_172_, 10);
v_isSharedCheck_204_ = !lean_is_exclusive(v_mctx_172_);
if (v_isSharedCheck_204_ == 0)
{
v___x_192_ = v_mctx_172_;
v_isShared_193_ = v_isSharedCheck_204_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_instanceTypedMVars_190_);
lean_inc(v_dAssignment_189_);
lean_inc(v_eAssignment_188_);
lean_inc(v_lAssignment_187_);
lean_inc(v_userNames_186_);
lean_inc(v_decls_185_);
lean_inc(v_lDecls_184_);
lean_inc(v_mvarCounter_183_);
lean_inc(v_lmvarCounter_182_);
lean_inc(v_levelAssignDepth_181_);
lean_inc(v_depth_180_);
lean_dec(v_mctx_172_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_204_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_194_ = lean_box(0);
v___x_195_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_eAssignment_188_, v_mvarId_167_, v_val_168_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 8, v___x_195_);
v___x_197_ = v___x_192_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_depth_180_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_levelAssignDepth_181_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_lmvarCounter_182_);
lean_ctor_set(v_reuseFailAlloc_203_, 3, v_mvarCounter_183_);
lean_ctor_set(v_reuseFailAlloc_203_, 4, v_lDecls_184_);
lean_ctor_set(v_reuseFailAlloc_203_, 5, v_decls_185_);
lean_ctor_set(v_reuseFailAlloc_203_, 6, v_userNames_186_);
lean_ctor_set(v_reuseFailAlloc_203_, 7, v_lAssignment_187_);
lean_ctor_set(v_reuseFailAlloc_203_, 8, v___x_195_);
lean_ctor_set(v_reuseFailAlloc_203_, 9, v_dAssignment_189_);
lean_ctor_set(v_reuseFailAlloc_203_, 10, v_instanceTypedMVars_190_);
v___x_197_ = v_reuseFailAlloc_203_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_199_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_197_);
v___x_199_ = v___x_178_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_cache_173_);
lean_ctor_set(v_reuseFailAlloc_202_, 2, v_zetaDeltaFVarIds_174_);
lean_ctor_set(v_reuseFailAlloc_202_, 3, v_postponed_175_);
lean_ctor_set(v_reuseFailAlloc_202_, 4, v_diag_176_);
v___x_199_ = v_reuseFailAlloc_202_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_st_ref_put(v___y_169_, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_194_);
return v___x_201_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object* v_mvarId_206_, lean_object* v_val_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_206_, v_val_207_, v___y_208_);
lean_dec(v___y_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object* v_mvarId_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v___f_218_; lean_object* v___x_219_; 
v___f_218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0));
lean_inc(v_mvarId_212_);
v___x_219_ = l_Lean_MVarId_getType(v_mvarId_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_263_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_263_ == 0)
{
v___x_222_ = v___x_219_;
v_isShared_223_ = v_isSharedCheck_263_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_263_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; 
v___x_224_ = lean_find_expr(v___f_218_, v_a_220_);
lean_dec(v_a_220_);
if (lean_obj_tag(v___x_224_) == 1)
{
lean_object* v_val_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
lean_del_object(v___x_222_);
v_val_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Expr_appArg_x21(v_val_225_);
lean_dec(v_val_225_);
lean_inc(v_mvarId_212_);
v___x_227_ = l_Lean_MVarId_getType(v_mvarId_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = l_Lean_Meta_mkFalseElim(v_a_228_, v___x_226_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_240_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
v___x_231_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_212_, v_a_230_, v_a_214_);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v___x_231_, 0);
lean_dec(v_unused_241_);
v___x_233_ = v___x_231_;
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
else
{
lean_dec(v___x_231_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_235_ = 1;
v___x_236_ = lean_box(v___x_235_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_236_);
v___x_238_ = v___x_233_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec(v_mvarId_212_);
v_a_242_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_229_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_229_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v___x_226_);
lean_dec(v_mvarId_212_);
v_a_250_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_227_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_227_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v___x_224_);
lean_dec(v_mvarId_212_);
v___x_258_ = 0;
v___x_259_ = lean_box(v___x_258_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_259_);
v___x_261_ = v___x_222_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v_mvarId_212_);
v_a_264_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_219_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_219_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object* v_mvarId_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object* v_mvarId_279_, lean_object* v_val_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_279_, v_val_280_, v___y_282_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object* v_mvarId_287_, lean_object* v_val_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(v_mvarId_287_, v_val_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object* v_00_u03b2_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_x_296_, v_x_297_, v_x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_300_, lean_object* v_x_301_, size_t v_x_302_, size_t v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_301_, v_x_302_, v_x_303_, v_x_304_, v_x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_307_, lean_object* v_x_308_, lean_object* v_x_309_, lean_object* v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
size_t v_x_1480__boxed_313_; size_t v_x_1481__boxed_314_; lean_object* v_res_315_; 
v_x_1480__boxed_313_ = lean_unbox_usize(v_x_309_);
lean_dec(v_x_309_);
v_x_1481__boxed_314_ = lean_unbox_usize(v_x_310_);
lean_dec(v_x_310_);
v_res_315_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(v_00_u03b2_307_, v_x_308_, v_x_1480__boxed_313_, v_x_1481__boxed_314_, v_x_311_, v_x_312_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_316_, lean_object* v_n_317_, lean_object* v_k_318_, lean_object* v_v_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v_n_317_, v_k_318_, v_v_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_321_, size_t v_depth_322_, lean_object* v_keys_323_, lean_object* v_vals_324_, lean_object* v_heq_325_, lean_object* v_i_326_, lean_object* v_entries_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_322_, v_keys_323_, v_vals_324_, v_i_326_, v_entries_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_329_, lean_object* v_depth_330_, lean_object* v_keys_331_, lean_object* v_vals_332_, lean_object* v_heq_333_, lean_object* v_i_334_, lean_object* v_entries_335_){
_start:
{
size_t v_depth_boxed_336_; lean_object* v_res_337_; 
v_depth_boxed_336_ = lean_unbox_usize(v_depth_330_);
lean_dec(v_depth_330_);
v_res_337_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_329_, v_depth_boxed_336_, v_keys_331_, v_vals_332_, v_heq_333_, v_i_334_, v_entries_335_);
lean_dec_ref(v_vals_332_);
lean_dec_ref(v_keys_331_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_338_, lean_object* v_x_339_, lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_339_, v_x_340_, v_x_341_, v_x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object* v_fvarId_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_FVarId_getType___redArg(v_fvarId_344_, v_a_345_, v_a_347_, v_a_348_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = l_Lean_Meta_whnfD(v_a_355_, v_a_345_, v_a_346_, v_a_347_, v_a_348_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_383_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_383_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_383_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_383_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Expr_getAppFn(v_a_357_);
lean_dec(v_a_357_);
if (lean_obj_tag(v___x_361_) == 4)
{
lean_object* v_declName_362_; lean_object* v___x_363_; lean_object* v_env_364_; uint8_t v___x_365_; lean_object* v___x_366_; 
v_declName_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_declName_362_);
lean_dec_ref_known(v___x_361_, 2);
v___x_363_ = lean_st_ref_get(v_a_348_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_env_364_);
lean_dec(v___x_363_);
v___x_365_ = 0;
v___x_366_ = l_Lean_Environment_find_x3f(v_env_364_, v_declName_362_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_del_object(v___x_359_);
goto v___jp_350_;
}
else
{
lean_object* v_val_367_; 
v_val_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_val_367_);
lean_dec_ref_known(v___x_366_, 1);
if (lean_obj_tag(v_val_367_) == 5)
{
lean_object* v_val_368_; lean_object* v_numIndices_369_; lean_object* v_ctors_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_val_368_ = lean_ctor_get(v_val_367_, 0);
lean_inc_ref(v_val_368_);
lean_dec_ref_known(v_val_367_, 1);
v_numIndices_369_ = lean_ctor_get(v_val_368_, 2);
lean_inc(v_numIndices_369_);
v_ctors_370_ = lean_ctor_get(v_val_368_, 4);
lean_inc(v_ctors_370_);
lean_dec_ref(v_val_368_);
v___x_371_ = l_List_lengthTR___redArg(v_ctors_370_);
lean_dec(v_ctors_370_);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = lean_nat_dec_eq(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
uint8_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_374_ = lean_nat_dec_lt(v___x_372_, v_numIndices_369_);
lean_dec(v_numIndices_369_);
v___x_375_ = lean_box(v___x_374_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_375_);
v___x_377_ = v___x_359_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
else
{
lean_object* v___x_379_; lean_object* v___x_381_; 
lean_dec(v_numIndices_369_);
v___x_379_ = lean_box(v___x_373_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_379_);
v___x_381_ = v___x_359_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_dec(v_val_367_);
lean_del_object(v___x_359_);
goto v___jp_350_;
}
}
}
else
{
lean_dec_ref(v___x_361_);
lean_del_object(v___x_359_);
goto v___jp_350_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_356_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_356_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
v_a_392_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_354_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_354_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
v___jp_350_:
{
uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_351_ = 0;
v___x_352_ = lean_box(v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object* v_fvarId_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object* v_s_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Meta_SavedState_restore___redArg(v_s_407_, v___y_410_, v___y_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object* v_s_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(v_s_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v_s_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object* v_x_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
lean_inc(v___y_432_);
v___x_438_ = lean_apply_6(v_x_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, lean_box(0));
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object* v_x_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(v_x_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
lean_dec(v___y_440_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object* v_mvarId_447_, lean_object* v_x_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___f_455_; lean_object* v___x_456_; 
lean_inc(v___y_449_);
v___f_455_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_455_, 0, v_x_448_);
lean_closure_set(v___f_455_, 1, v___y_449_);
v___x_456_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_447_, v___f_455_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
if (lean_obj_tag(v___x_456_) == 0)
{
return v___x_456_;
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_456_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_456_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object* v_mvarId_465_, lean_object* v_x_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_465_, v_x_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object* v_00_u03b1_474_, lean_object* v_mvarId_475_, lean_object* v_x_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_475_, v_x_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object* v_00_u03b1_484_, lean_object* v_mvarId_485_, lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(v_00_u03b1_484_, v_mvarId_485_, v_x_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object* v_x_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_saveState___redArg(v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___y_504_; lean_object* v___y_505_; uint8_t v___y_506_; lean_object* v___y_525_; lean_object* v_a_526_; lean_object* v___x_529_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
v___x_529_ = lean_apply_6(v_x_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, lean_box(0));
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; uint8_t v___x_531_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
v___x_531_ = lean_unbox(v_a_530_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; 
lean_dec_ref_known(v___x_529_, 1);
v___x_532_ = l_Lean_Meta_SavedState_restore___redArg(v_a_502_, v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec(v_a_502_);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_539_ == 0)
{
lean_object* v_unused_540_; 
v_unused_540_ = lean_ctor_get(v___x_532_, 0);
lean_dec(v_unused_540_);
v___x_534_ = v___x_532_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_dec(v___x_532_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v_a_530_);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_530_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_530_);
v_a_541_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_532_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_532_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
lean_inc(v_a_541_);
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
v___y_525_ = v___x_546_;
v_a_526_ = v_a_541_;
goto v___jp_524_;
}
}
}
}
else
{
lean_dec(v_a_530_);
lean_dec(v_a_502_);
return v___x_529_;
}
}
else
{
lean_object* v_a_549_; 
v_a_549_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_549_);
v___y_525_ = v___x_529_;
v_a_526_ = v_a_549_;
goto v___jp_524_;
}
v___jp_503_:
{
if (v___y_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec_ref(v___y_504_);
v___x_507_ = l_Lean_Meta_SavedState_restore___redArg(v_a_502_, v___y_497_, v___y_499_);
lean_dec(v_a_502_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_514_ == 0)
{
lean_object* v_unused_515_; 
v_unused_515_ = lean_ctor_get(v___x_507_, 0);
lean_dec(v_unused_515_);
v___x_509_ = v___x_507_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_dec(v___x_507_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 1);
lean_ctor_set(v___x_509_, 0, v___y_505_);
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___y_505_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v___y_505_);
v_a_516_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_507_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_507_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
else
{
lean_dec_ref(v___y_505_);
lean_dec(v_a_502_);
return v___y_504_;
}
}
v___jp_524_:
{
uint8_t v___x_527_; 
v___x_527_ = l_Lean_Exception_isInterrupt(v_a_526_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
lean_inc_ref(v_a_526_);
v___x_528_ = l_Lean_Exception_isRuntime(v_a_526_);
v___y_504_ = v___y_525_;
v___y_505_ = v_a_526_;
v___y_506_ = v___x_528_;
goto v___jp_503_;
}
else
{
v___y_504_ = v___y_525_;
v___y_505_ = v_a_526_;
v___y_506_ = v___x_527_;
goto v___jp_503_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_x_494_);
v_a_550_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_501_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_501_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object* v_x_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v_x_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object* v_msgData_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; lean_object* v_env_573_; lean_object* v___x_574_; lean_object* v_toCold_575_; lean_object* v_mctx_576_; lean_object* v_lctx_577_; lean_object* v_options_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_572_ = lean_st_ref_get(v___y_570_);
v_env_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_env_573_);
lean_dec(v___x_572_);
v___x_574_ = lean_st_ref_get(v___y_568_);
v_toCold_575_ = lean_ctor_get(v___y_569_, 0);
v_mctx_576_ = lean_ctor_get(v___x_574_, 0);
lean_inc_ref(v_mctx_576_);
lean_dec(v___x_574_);
v_lctx_577_ = lean_ctor_get(v___y_567_, 2);
v_options_578_ = lean_ctor_get(v_toCold_575_, 2);
lean_inc_ref(v_options_578_);
lean_inc_ref(v_lctx_577_);
v___x_579_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_579_, 0, v_env_573_);
lean_ctor_set(v___x_579_, 1, v_mctx_576_);
lean_ctor_set(v___x_579_, 2, v_lctx_577_);
lean_ctor_set(v___x_579_, 3, v_options_578_);
v___x_580_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v_msgData_566_);
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object* v_msgData_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msgData_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
return v_res_588_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_589_; double v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_float_of_nat(v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object* v_cls_594_, lean_object* v_msg_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_ref_601_; lean_object* v___x_602_; lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_647_; 
v_ref_601_ = lean_ctor_get(v___y_598_, 2);
v___x_602_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msg_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
v_a_603_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_647_ == 0)
{
v___x_605_ = v___x_602_;
v_isShared_606_ = v_isSharedCheck_647_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_602_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_647_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_607_; lean_object* v_traceState_608_; lean_object* v_env_609_; lean_object* v_nextMacroScope_610_; lean_object* v_ngen_611_; lean_object* v_auxDeclNGen_612_; lean_object* v_cache_613_; lean_object* v_messages_614_; lean_object* v_infoState_615_; lean_object* v_snapshotTasks_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_646_; 
v___x_607_ = lean_st_ref_take(v___y_599_);
v_traceState_608_ = lean_ctor_get(v___x_607_, 4);
v_env_609_ = lean_ctor_get(v___x_607_, 0);
v_nextMacroScope_610_ = lean_ctor_get(v___x_607_, 1);
v_ngen_611_ = lean_ctor_get(v___x_607_, 2);
v_auxDeclNGen_612_ = lean_ctor_get(v___x_607_, 3);
v_cache_613_ = lean_ctor_get(v___x_607_, 5);
v_messages_614_ = lean_ctor_get(v___x_607_, 6);
v_infoState_615_ = lean_ctor_get(v___x_607_, 7);
v_snapshotTasks_616_ = lean_ctor_get(v___x_607_, 8);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_646_ == 0)
{
v___x_618_ = v___x_607_;
v_isShared_619_ = v_isSharedCheck_646_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_snapshotTasks_616_);
lean_inc(v_infoState_615_);
lean_inc(v_messages_614_);
lean_inc(v_cache_613_);
lean_inc(v_traceState_608_);
lean_inc(v_auxDeclNGen_612_);
lean_inc(v_ngen_611_);
lean_inc(v_nextMacroScope_610_);
lean_inc(v_env_609_);
lean_dec(v___x_607_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_646_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
uint64_t v_tid_620_; lean_object* v_traces_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_645_; 
v_tid_620_ = lean_ctor_get_uint64(v_traceState_608_, sizeof(void*)*1);
v_traces_621_ = lean_ctor_get(v_traceState_608_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v_traceState_608_);
if (v_isSharedCheck_645_ == 0)
{
v___x_623_ = v_traceState_608_;
v_isShared_624_ = v_isSharedCheck_645_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_traces_621_);
lean_dec(v_traceState_608_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_645_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; lean_object* v___x_626_; double v___x_627_; uint8_t v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_625_ = lean_box(0);
v___x_626_ = lean_box(0);
v___x_627_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0);
v___x_628_ = 0;
v___x_629_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1));
v___x_630_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_630_, 0, v_cls_594_);
lean_ctor_set(v___x_630_, 1, v___x_626_);
lean_ctor_set(v___x_630_, 2, v___x_629_);
lean_ctor_set_float(v___x_630_, sizeof(void*)*3, v___x_627_);
lean_ctor_set_float(v___x_630_, sizeof(void*)*3 + 8, v___x_627_);
lean_ctor_set_uint8(v___x_630_, sizeof(void*)*3 + 16, v___x_628_);
v___x_631_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2));
v___x_632_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v_a_603_);
lean_ctor_set(v___x_632_, 2, v___x_631_);
lean_inc(v_ref_601_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v_ref_601_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Lean_PersistentArray_push___redArg(v_traces_621_, v___x_633_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_634_);
v___x_636_ = v___x_623_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_634_);
lean_ctor_set_uint64(v_reuseFailAlloc_644_, sizeof(void*)*1, v_tid_620_);
v___x_636_ = v_reuseFailAlloc_644_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_638_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 4, v___x_636_);
v___x_638_ = v___x_618_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_env_609_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_nextMacroScope_610_);
lean_ctor_set(v_reuseFailAlloc_643_, 2, v_ngen_611_);
lean_ctor_set(v_reuseFailAlloc_643_, 3, v_auxDeclNGen_612_);
lean_ctor_set(v_reuseFailAlloc_643_, 4, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_643_, 5, v_cache_613_);
lean_ctor_set(v_reuseFailAlloc_643_, 6, v_messages_614_);
lean_ctor_set(v_reuseFailAlloc_643_, 7, v_infoState_615_);
lean_ctor_set(v_reuseFailAlloc_643_, 8, v_snapshotTasks_616_);
v___x_638_ = v_reuseFailAlloc_643_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_639_ = lean_st_ref_put(v___y_599_, v___x_638_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_625_);
v___x_641_ = v___x_605_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_625_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object* v_cls_648_, lean_object* v_msg_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_648_, v_msg_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object* v_toInductionSubgoal_663_, lean_object* v_mvarId_664_, lean_object* v_fields_665_, lean_object* v_sz_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v___x_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
size_t v_sz_boxed_676_; size_t v___x_15944__boxed_677_; uint8_t v___x_15946__boxed_678_; lean_object* v_res_679_; 
v_sz_boxed_676_ = lean_unbox_usize(v_sz_666_);
lean_dec(v_sz_666_);
v___x_15944__boxed_677_ = lean_unbox_usize(v___x_667_);
lean_dec(v___x_667_);
v___x_15946__boxed_678_ = lean_unbox(v___x_669_);
v_res_679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(v_toInductionSubgoal_663_, v_mvarId_664_, v_fields_665_, v_sz_boxed_676_, v___x_15944__boxed_677_, v___x_668_, v___x_15946__boxed_678_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec_ref(v_fields_665_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object* v_val_680_, lean_object* v_as_681_, size_t v_sz_682_, size_t v_i_683_, lean_object* v_b_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = lean_usize_dec_lt(v_i_683_, v_sz_682_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; 
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v_b_684_);
return v___x_692_;
}
else
{
lean_object* v_a_693_; lean_object* v_toInductionSubgoal_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_735_; 
lean_dec_ref(v_b_684_);
v_a_693_ = lean_array_uget(v_as_681_, v_i_683_);
v_toInductionSubgoal_694_ = lean_ctor_get(v_a_693_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v_a_693_);
if (v_isSharedCheck_735_ == 0)
{
lean_object* v_unused_736_; 
v_unused_736_ = lean_ctor_get(v_a_693_, 1);
lean_dec(v_unused_736_);
v___x_696_ = v_a_693_;
v_isShared_697_ = v_isSharedCheck_735_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_toInductionSubgoal_694_);
lean_dec(v_a_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_735_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_mvarId_698_; lean_object* v_fields_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; size_t v_sz_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___f_708_; lean_object* v___x_709_; 
v_mvarId_698_ = lean_ctor_get(v_toInductionSubgoal_694_, 0);
lean_inc_n(v_mvarId_698_, 2);
v_fields_699_ = lean_ctor_get(v_toInductionSubgoal_694_, 1);
lean_inc_ref(v_fields_699_);
v___x_700_ = lean_box(0);
v___x_701_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_nat_dec_eq(v_val_680_, v___x_702_);
v_sz_704_ = lean_array_size(v_fields_699_);
v___x_705_ = lean_box_usize(v_sz_704_);
v___x_706_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1));
v___x_707_ = lean_box(v___x_703_);
v___f_708_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed), 13, 7);
lean_closure_set(v___f_708_, 0, v_toInductionSubgoal_694_);
lean_closure_set(v___f_708_, 1, v_mvarId_698_);
lean_closure_set(v___f_708_, 2, v_fields_699_);
lean_closure_set(v___f_708_, 3, v___x_705_);
lean_closure_set(v___f_708_, 4, v___x_706_);
lean_closure_set(v___f_708_, 5, v___x_701_);
lean_closure_set(v___f_708_, 6, v___x_707_);
v___x_709_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_698_, v___f_708_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_726_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_726_ == 0)
{
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
uint8_t v___x_714_; 
v___x_714_ = lean_unbox(v_a_710_);
lean_dec(v_a_710_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_715_ = lean_box(v___x_703_);
v___x_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 1, v___x_700_);
lean_ctor_set(v___x_696_, 0, v___x_716_);
v___x_718_ = v___x_696_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___x_700_);
v___x_718_ = v_reuseFailAlloc_722_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_718_);
v___x_720_ = v___x_712_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
else
{
size_t v___x_723_; size_t v___x_724_; 
lean_del_object(v___x_712_);
lean_del_object(v___x_696_);
v___x_723_ = ((size_t)1ULL);
v___x_724_ = lean_usize_add(v_i_683_, v___x_723_);
v_i_683_ = v___x_724_;
v_b_684_ = v___x_701_;
goto _start;
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_del_object(v___x_696_);
v_a_727_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_709_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_709_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_748_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__6));
v___x_749_ = l_Lean_Name_append(v___x_748_, v___x_747_);
return v___x_749_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0));
v___x_752_ = l_Lean_stringToMessageData(v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object* v_mvarId_753_, lean_object* v_fvarId_754_, lean_object* v___x_755_, uint8_t v___x_756_, lean_object* v___x_757_, lean_object* v_val_758_, uint8_t v___x_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_MVarId_cases(v_mvarId_753_, v_fvarId_754_, v___x_755_, v___x_756_, v___x_757_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v_toCold_800_; lean_object* v_options_801_; uint8_t v_hasTrace_802_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v_toCold_800_ = lean_ctor_get(v___y_763_, 0);
v_options_801_ = lean_ctor_get(v_toCold_800_, 2);
v_hasTrace_802_ = lean_ctor_get_uint8(v_options_801_, sizeof(void*)*1);
if (v_hasTrace_802_ == 0)
{
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
goto v___jp_768_;
}
else
{
lean_object* v_inheritedTraceOptions_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v_inheritedTraceOptions_803_ = lean_ctor_get(v_toCold_800_, 11);
v___x_804_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_805_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_806_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_803_, v_options_801_, v___x_805_);
if (v___x_806_ == 0)
{
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
goto v___jp_768_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_807_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1, &l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1);
v___x_808_ = lean_array_get_size(v_a_767_);
v___x_809_ = l_Nat_reprFast(v___x_808_);
v___x_810_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
v___x_811_ = l_Lean_MessageData_ofFormat(v___x_810_);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_807_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_804_, v___x_812_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_dec_ref_known(v___x_813_, 1);
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
goto v___jp_768_;
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_a_767_);
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
v___jp_768_:
{
lean_object* v___x_774_; size_t v_sz_775_; size_t v___x_776_; lean_object* v___x_777_; 
v___x_774_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_sz_775_ = lean_array_size(v_a_767_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_758_, v_a_767_, v_sz_775_, v___x_776_, v___x_774_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
lean_dec(v_a_767_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_791_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_791_ == 0)
{
v___x_780_ = v___x_777_;
v_isShared_781_ = v_isSharedCheck_791_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_791_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v_fst_782_; 
v_fst_782_ = lean_ctor_get(v_a_778_, 0);
lean_inc(v_fst_782_);
lean_dec(v_a_778_);
if (lean_obj_tag(v_fst_782_) == 0)
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_box(v___x_759_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v___x_783_);
v___x_785_ = v___x_780_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
else
{
lean_object* v_val_787_; lean_object* v___x_789_; 
v_val_787_ = lean_ctor_get(v_fst_782_, 0);
lean_inc(v_val_787_);
lean_dec_ref_known(v_fst_782_, 1);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v_val_787_);
v___x_789_ = v___x_780_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_val_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
v_a_792_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_777_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_777_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_867_; 
v_a_822_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_867_ == 0)
{
v___x_824_ = v___x_766_;
v_isShared_825_ = v_isSharedCheck_867_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_766_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_867_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
uint8_t v___y_827_; uint8_t v___x_865_; 
v___x_865_ = l_Lean_Exception_isInterrupt(v_a_822_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; 
lean_inc(v_a_822_);
v___x_866_ = l_Lean_Exception_isRuntime(v_a_822_);
v___y_827_ = v___x_866_;
goto v___jp_826_;
}
else
{
v___y_827_ = v___x_865_;
goto v___jp_826_;
}
v___jp_826_:
{
if (v___y_827_ == 0)
{
lean_object* v_toCold_828_; lean_object* v_options_829_; uint8_t v_hasTrace_830_; 
v_toCold_828_ = lean_ctor_get(v___y_763_, 0);
v_options_829_ = lean_ctor_get(v_toCold_828_, 2);
v_hasTrace_830_ = lean_ctor_get_uint8(v_options_829_, sizeof(void*)*1);
if (v_hasTrace_830_ == 0)
{
lean_object* v___x_831_; lean_object* v___x_833_; 
lean_dec(v_a_822_);
v___x_831_ = lean_box(v___x_756_);
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 0);
lean_ctor_set(v___x_824_, 0, v___x_831_);
v___x_833_ = v___x_824_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
else
{
lean_object* v_inheritedTraceOptions_835_; lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v_inheritedTraceOptions_835_ = lean_ctor_get(v_toCold_828_, 11);
v___x_836_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_837_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_838_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_835_, v_options_829_, v___x_837_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; lean_object* v___x_841_; 
lean_dec(v_a_822_);
v___x_839_ = lean_box(v___x_756_);
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 0);
lean_ctor_set(v___x_824_, 0, v___x_839_);
v___x_841_ = v___x_824_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_del_object(v___x_824_);
v___x_843_ = l_Lean_Exception_toMessageData(v_a_822_);
v___x_844_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_836_, v___x_843_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_852_; 
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; 
v_unused_853_ = lean_ctor_get(v___x_844_, 0);
lean_dec(v_unused_853_);
v___x_846_ = v___x_844_;
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
else
{
lean_dec(v___x_844_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_848_ = lean_box(v___x_756_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v___x_848_);
v___x_850_ = v___x_846_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_a_854_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_844_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_844_);
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
}
else
{
lean_object* v___x_863_; 
if (v_isShared_825_ == 0)
{
v___x_863_ = v___x_824_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_822_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object* v_mvarId_868_, lean_object* v_fvarId_869_, lean_object* v___x_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v_val_873_, lean_object* v___x_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
uint8_t v___x_16066__boxed_881_; uint8_t v___x_16069__boxed_882_; lean_object* v_res_883_; 
v___x_16066__boxed_881_ = lean_unbox(v___x_871_);
v___x_16069__boxed_882_ = lean_unbox(v___x_874_);
v_res_883_ = l_Lean_Meta_ElimEmptyInductive_elim___lam__0(v_mvarId_868_, v_fvarId_869_, v___x_870_, v___x_16066__boxed_881_, v___x_872_, v_val_873_, v___x_16069__boxed_882_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec(v_val_873_);
return v_res_883_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__8));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object* v_mvarId_887_, lean_object* v_fvarId_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = lean_st_ref_get(v_a_889_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_nat_dec_eq(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; 
v___x_902_ = 1;
v___x_903_ = lean_st_ref_take(v_a_889_);
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_sub(v___x_903_, v___x_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_st_ref_put(v_a_889_, v___x_905_);
v___x_907_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__0));
v___x_908_ = lean_box(0);
v___x_909_ = lean_box(v___x_901_);
v___x_910_ = lean_box(v___x_902_);
v___f_911_ = lean_alloc_closure((void*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed), 13, 7);
lean_closure_set(v___f_911_, 0, v_mvarId_887_);
lean_closure_set(v___f_911_, 1, v_fvarId_888_);
lean_closure_set(v___f_911_, 2, v___x_907_);
lean_closure_set(v___f_911_, 3, v___x_909_);
lean_closure_set(v___f_911_, 4, v___x_908_);
lean_closure_set(v___f_911_, 5, v___x_899_);
lean_closure_set(v___f_911_, 6, v___x_910_);
v___x_912_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v___f_911_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
return v___x_912_;
}
else
{
lean_object* v_toCold_913_; lean_object* v_options_914_; uint8_t v_hasTrace_915_; 
lean_dec(v___x_899_);
lean_dec(v_fvarId_888_);
lean_dec(v_mvarId_887_);
v_toCold_913_ = lean_ctor_get(v_a_892_, 0);
v_options_914_ = lean_ctor_get(v_toCold_913_, 2);
v_hasTrace_915_ = lean_ctor_get_uint8(v_options_914_, sizeof(void*)*1);
if (v_hasTrace_915_ == 0)
{
goto v___jp_895_;
}
else
{
lean_object* v_inheritedTraceOptions_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
v_inheritedTraceOptions_916_ = lean_ctor_get(v_toCold_913_, 11);
v___x_917_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_918_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_919_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_916_, v_options_914_, v___x_918_);
if (v___x_919_ == 0)
{
goto v___jp_895_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__9, &l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9);
v___x_921_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_917_, v___x_920_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref_known(v___x_921_, 1);
goto v___jp_895_;
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
}
v___jp_895_:
{
uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = 0;
v___x_897_ = lean_box(v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object* v___x_930_, lean_object* v___x_931_, lean_object* v_as_932_, size_t v_sz_933_, size_t v_i_934_, lean_object* v_b_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_a_943_; uint8_t v___x_947_; 
v___x_947_ = lean_usize_dec_lt(v_i_934_, v_sz_933_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_b_935_);
return v___x_948_;
}
else
{
lean_object* v_subst_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_a_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
lean_dec_ref(v_b_935_);
v_subst_949_ = lean_ctor_get(v___x_930_, 2);
v___x_950_ = lean_box(0);
v___x_951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_a_952_ = lean_array_uget_borrowed(v_as_932_, v_i_934_);
lean_inc(v_subst_949_);
v___x_953_ = l_Lean_Meta_FVarSubst_apply(v_subst_949_, v_a_952_);
v___x_954_ = l_Lean_Expr_isFVar(v___x_953_);
if (v___x_954_ == 0)
{
lean_dec_ref(v___x_953_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = l_Lean_Expr_fvarId_x21(v___x_953_);
lean_dec_ref(v___x_953_);
lean_inc(v___x_955_);
v___x_956_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v___x_955_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; uint8_t v___x_958_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v___x_956_, 1);
v___x_958_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_958_ == 0)
{
lean_dec(v___x_955_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_959_; 
lean_inc(v___x_931_);
v___x_959_ = l_Lean_Meta_ElimEmptyInductive_elim(v___x_931_, v___x_955_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_971_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_971_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = lean_unbox(v_a_960_);
lean_dec(v_a_960_);
if (v___x_964_ == 0)
{
lean_del_object(v___x_962_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_969_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_965_ = lean_box(v___x_954_);
v___x_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
lean_ctor_set(v___x_967_, 1, v___x_950_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_967_);
v___x_969_ = v___x_962_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_972_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_959_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_959_);
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
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v___x_955_);
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_980_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_956_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_956_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
v___jp_942_:
{
size_t v___x_944_; size_t v___x_945_; 
v___x_944_ = ((size_t)1ULL);
v___x_945_ = lean_usize_add(v_i_934_, v___x_944_);
lean_inc_ref(v_a_943_);
v_i_934_ = v___x_945_;
v_b_935_ = v_a_943_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object* v_toInductionSubgoal_988_, lean_object* v_mvarId_989_, lean_object* v_fields_990_, size_t v_sz_991_, size_t v___x_992_, lean_object* v___x_993_, uint8_t v___x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v_toInductionSubgoal_988_, v_mvarId_989_, v_fields_990_, v_sz_991_, v___x_992_, v___x_993_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1015_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_fst_1006_; 
v_fst_1006_ = lean_ctor_get(v_a_1002_, 0);
lean_inc(v_fst_1006_);
lean_dec(v_a_1002_);
if (lean_obj_tag(v_fst_1006_) == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = lean_box(v___x_994_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1007_);
v___x_1009_ = v___x_1004_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
else
{
lean_object* v_val_1011_; lean_object* v___x_1013_; 
v_val_1011_ = lean_ctor_get(v_fst_1006_, 0);
lean_inc(v_val_1011_);
lean_dec_ref_known(v_fst_1006_, 1);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v_val_1011_);
v___x_1013_ = v___x_1004_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_val_1011_);
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
v_a_1016_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1001_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1001_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object* v_val_1024_, lean_object* v_as_1025_, lean_object* v_sz_1026_, lean_object* v_i_1027_, lean_object* v_b_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
size_t v_sz_boxed_1035_; size_t v_i_boxed_1036_; lean_object* v_res_1037_; 
v_sz_boxed_1035_ = lean_unbox_usize(v_sz_1026_);
lean_dec(v_sz_1026_);
v_i_boxed_1036_ = lean_unbox_usize(v_i_1027_);
lean_dec(v_i_1027_);
v_res_1037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_1024_, v_as_1025_, v_sz_boxed_1035_, v_i_boxed_1036_, v_b_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v_as_1025_);
lean_dec(v_val_1024_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object* v___x_1038_, lean_object* v___x_1039_, lean_object* v_as_1040_, lean_object* v_sz_1041_, lean_object* v_i_1042_, lean_object* v_b_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
size_t v_sz_boxed_1050_; size_t v_i_boxed_1051_; lean_object* v_res_1052_; 
v_sz_boxed_1050_ = lean_unbox_usize(v_sz_1041_);
lean_dec(v_sz_1041_);
v_i_boxed_1051_ = lean_unbox_usize(v_i_1042_);
lean_dec(v_i_1042_);
v_res_1052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v___x_1038_, v___x_1039_, v_as_1040_, v_sz_boxed_1050_, v_i_boxed_1051_, v_b_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v_as_1040_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object* v_mvarId_1053_, lean_object* v_fvarId_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Meta_ElimEmptyInductive_elim(v_mvarId_1053_, v_fvarId_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object* v_cls_1062_, lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_1062_, v_msg_1063_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object* v_cls_1071_, lean_object* v_msg_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(v_cls_1071_, v_msg_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object* v_x_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_Meta_saveState___redArg(v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___y_1089_; lean_object* v___y_1090_; uint8_t v___y_1091_; lean_object* v___y_1110_; lean_object* v_a_1111_; lean_object* v___x_1114_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
lean_inc(v___y_1082_);
lean_inc_ref(v___y_1081_);
v___x_1114_ = lean_apply_5(v_x_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, lean_box(0));
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; uint8_t v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
v___x_1116_ = lean_unbox(v_a_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
lean_dec_ref_known(v___x_1114_, 1);
v___x_1117_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1087_, v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_dec(v_a_1087_);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v___x_1117_, 0);
lean_dec(v_unused_1125_);
v___x_1119_ = v___x_1117_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v___x_1117_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v_a_1115_);
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1115_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec(v_a_1115_);
v_a_1126_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1117_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1117_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
lean_inc(v_a_1126_);
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
v___y_1110_ = v___x_1131_;
v_a_1111_ = v_a_1126_;
goto v___jp_1109_;
}
}
}
}
else
{
lean_dec(v_a_1115_);
lean_dec(v_a_1087_);
return v___x_1114_;
}
}
else
{
lean_object* v_a_1134_; 
v_a_1134_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1134_);
v___y_1110_ = v___x_1114_;
v_a_1111_ = v_a_1134_;
goto v___jp_1109_;
}
v___jp_1088_:
{
if (v___y_1091_ == 0)
{
lean_object* v___x_1092_; 
lean_dec_ref(v___y_1090_);
v___x_1092_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1087_, v___y_1082_, v___y_1084_);
lean_dec(v_a_1087_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1099_; 
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1099_ == 0)
{
lean_object* v_unused_1100_; 
v_unused_1100_ = lean_ctor_get(v___x_1092_, 0);
lean_dec(v_unused_1100_);
v___x_1094_ = v___x_1092_;
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
else
{
lean_dec(v___x_1092_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1099_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1097_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set_tag(v___x_1094_, 1);
lean_ctor_set(v___x_1094_, 0, v___y_1089_);
v___x_1097_ = v___x_1094_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___y_1089_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec_ref(v___y_1089_);
v_a_1101_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1092_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1092_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
else
{
lean_dec_ref(v___y_1089_);
lean_dec(v_a_1087_);
return v___y_1090_;
}
}
v___jp_1109_:
{
uint8_t v___x_1112_; 
v___x_1112_ = l_Lean_Exception_isInterrupt(v_a_1111_);
if (v___x_1112_ == 0)
{
uint8_t v___x_1113_; 
lean_inc_ref(v_a_1111_);
v___x_1113_ = l_Lean_Exception_isRuntime(v_a_1111_);
v___y_1089_ = v_a_1111_;
v___y_1090_ = v___y_1110_;
v___y_1091_ = v___x_1113_;
goto v___jp_1088_;
}
else
{
v___y_1089_ = v_a_1111_;
v___y_1090_ = v___y_1110_;
v___y_1091_ = v___x_1112_;
goto v___jp_1088_;
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v_x_1080_);
v_a_1135_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1086_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1086_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object* v_x_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v_x_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object* v_mvarId_1150_, lean_object* v_x_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1150_, v_x_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
v_a_1166_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1157_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1157_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object* v_mvarId_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1174_, v_x_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object* v_00_u03b1_1182_, lean_object* v_mvarId_1183_, lean_object* v_x_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1183_, v_x_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object* v_00_u03b1_1191_, lean_object* v_mvarId_1192_, lean_object* v_x_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(v_00_u03b1_1191_, v_mvarId_1192_, v_x_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object* v_mvarId_1200_, lean_object* v_fuel_1201_, lean_object* v_fvarId_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_MVarId_exfalso(v_mvarId_1200_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = lean_st_mk_ref(v_fuel_1201_);
v___x_1211_ = l_Lean_Meta_ElimEmptyInductive_elim(v_a_1209_, v_fvarId_1202_, v___x_1210_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1220_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1216_ = lean_st_ref_get(v___x_1210_);
lean_dec(v___x_1210_);
lean_dec(v___x_1216_);
if (v_isShared_1215_ == 0)
{
v___x_1218_ = v___x_1214_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1212_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_dec(v___x_1210_);
return v___x_1211_;
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
lean_dec(v_fvarId_1202_);
lean_dec(v_fuel_1201_);
v_a_1221_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1208_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1208_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object* v_mvarId_1229_, lean_object* v_fuel_1230_, lean_object* v_fvarId_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(v_mvarId_1229_, v_fuel_1230_, v_fvarId_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object* v_fvarId_1238_, lean_object* v___f_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_1238_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; uint8_t v___x_1247_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
v___x_1247_ = lean_unbox(v_a_1246_);
lean_dec(v_a_1246_);
if (v___x_1247_ == 0)
{
lean_dec_ref(v___f_1239_);
return v___x_1245_;
}
else
{
lean_object* v___x_1248_; 
lean_dec_ref_known(v___x_1245_, 1);
v___x_1248_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v___f_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
return v___x_1248_;
}
}
else
{
lean_dec_ref(v___f_1239_);
return v___x_1245_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object* v_fvarId_1249_, lean_object* v___f_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(v_fvarId_1249_, v___f_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object* v_mvarId_1257_, lean_object* v_fvarId_1258_, lean_object* v_fuel_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v___f_1265_; lean_object* v___f_1266_; lean_object* v___x_1267_; 
lean_inc(v_fvarId_1258_);
lean_inc(v_mvarId_1257_);
v___f_1265_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1265_, 0, v_mvarId_1257_);
lean_closure_set(v___f_1265_, 1, v_fuel_1259_);
lean_closure_set(v___f_1265_, 2, v_fvarId_1258_);
v___f_1266_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1266_, 0, v_fvarId_1258_);
lean_closure_set(v___f_1266_, 1, v___f_1265_);
v___x_1267_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1257_, v___f_1266_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object* v_mvarId_1268_, lean_object* v_fvarId_1269_, lean_object* v_fuel_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1268_, v_fvarId_1269_, v_fuel_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object* v_e_1277_){
_start:
{
uint8_t v___x_1278_; 
v___x_1278_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_e_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object* v_e_1279_){
_start:
{
uint8_t v_res_1280_; lean_object* v_r_1281_; 
v_res_1280_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(v_e_1279_);
v_r_1281_ = lean_box(v_res_1280_);
return v_r_1281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object* v_e_1282_, lean_object* v_acc_1283_){
_start:
{
if (lean_obj_tag(v_e_1282_) == 7)
{
lean_object* v_binderType_1284_; lean_object* v_body_1285_; uint8_t v___y_1287_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_binderType_1284_ = lean_ctor_get(v_e_1282_, 1);
v_body_1285_ = lean_ctor_get(v_e_1282_, 2);
v___x_1291_ = lean_unsigned_to_nat(0u);
v___x_1292_ = lean_expr_has_loose_bvar(v_body_1285_, v___x_1291_);
if (v___x_1292_ == 0)
{
uint8_t v___x_1293_; 
v___x_1293_ = l_Lean_Expr_isEq(v_binderType_1284_);
if (v___x_1293_ == 0)
{
uint8_t v___x_1294_; 
v___x_1294_ = l_Lean_Expr_isHEq(v_binderType_1284_);
v___y_1287_ = v___x_1294_;
goto v___jp_1286_;
}
else
{
v___y_1287_ = v___x_1293_;
goto v___jp_1286_;
}
}
else
{
uint8_t v___x_1295_; 
v___x_1295_ = 0;
v___y_1287_ = v___x_1295_;
goto v___jp_1286_;
}
v___jp_1286_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_box(v___y_1287_);
v___x_1289_ = lean_array_push(v_acc_1283_, v___x_1288_);
v_e_1282_ = v_body_1285_;
v_acc_1283_ = v___x_1289_;
goto _start;
}
}
else
{
return v_acc_1283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object* v_e_1296_, lean_object* v_acc_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1296_, v_acc_1297_);
lean_dec_ref(v_e_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object* v_e_1301_){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = ((lean_object*)(l_Lean_Meta_mkGenDiseqMask___closed__0));
v___x_1303_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1301_, v___x_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object* v_e_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_Meta_mkGenDiseqMask(v_e_1304_);
lean_dec_ref(v_e_1304_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object* v_msg_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v___f_1313_; lean_object* v___x_4344__overap_1314_; lean_object* v___x_1315_; 
v___f_1313_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0));
v___x_4344__overap_1314_ = lean_panic_fn_borrowed(v___f_1313_, v_msg_1307_);
lean_inc(v___y_1311_);
lean_inc_ref(v___y_1310_);
lean_inc(v___y_1309_);
lean_inc_ref(v___y_1308_);
v___x_1315_ = lean_apply_5(v___x_4344__overap_1314_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, lean_box(0));
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object* v_msg_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v_msg_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object* v_e_1323_, lean_object* v___y_1324_){
_start:
{
uint8_t v___x_1326_; 
v___x_1326_ = l_Lean_Expr_hasMVar(v_e_1323_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v_e_1323_);
return v___x_1327_;
}
else
{
lean_object* v___x_1328_; lean_object* v_mctx_1329_; lean_object* v___x_1330_; lean_object* v_fst_1331_; lean_object* v_snd_1332_; lean_object* v___x_1333_; lean_object* v_cache_1334_; lean_object* v_zetaDeltaFVarIds_1335_; lean_object* v_postponed_1336_; lean_object* v_diag_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1346_; 
v___x_1328_ = lean_st_ref_get(v___y_1324_);
v_mctx_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc_ref(v_mctx_1329_);
lean_dec(v___x_1328_);
v___x_1330_ = l_Lean_instantiateMVarsCore(v_mctx_1329_, v_e_1323_);
v_fst_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_fst_1331_);
v_snd_1332_ = lean_ctor_get(v___x_1330_, 1);
lean_inc(v_snd_1332_);
lean_dec_ref(v___x_1330_);
v___x_1333_ = lean_st_ref_take(v___y_1324_);
v_cache_1334_ = lean_ctor_get(v___x_1333_, 1);
v_zetaDeltaFVarIds_1335_ = lean_ctor_get(v___x_1333_, 2);
v_postponed_1336_ = lean_ctor_get(v___x_1333_, 3);
v_diag_1337_ = lean_ctor_get(v___x_1333_, 4);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1346_ == 0)
{
lean_object* v_unused_1347_; 
v_unused_1347_ = lean_ctor_get(v___x_1333_, 0);
lean_dec(v_unused_1347_);
v___x_1339_ = v___x_1333_;
v_isShared_1340_ = v_isSharedCheck_1346_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_diag_1337_);
lean_inc(v_postponed_1336_);
lean_inc(v_zetaDeltaFVarIds_1335_);
lean_inc(v_cache_1334_);
lean_dec(v___x_1333_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1346_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 0, v_snd_1332_);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_snd_1332_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v_cache_1334_);
lean_ctor_set(v_reuseFailAlloc_1345_, 2, v_zetaDeltaFVarIds_1335_);
lean_ctor_set(v_reuseFailAlloc_1345_, 3, v_postponed_1336_);
lean_ctor_set(v_reuseFailAlloc_1345_, 4, v_diag_1337_);
v___x_1342_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = lean_st_ref_put(v___y_1324_, v___x_1342_);
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v_fst_1331_);
return v___x_1344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object* v_e_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1348_, v___y_1349_);
lean_dec(v___y_1349_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object* v_e_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1352_, v___y_1354_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object* v_e_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(v_e_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object* v_k_1366_, uint8_t v_allowLevelAssignments_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1367_, v_k_1366_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1373_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1373_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1373_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object* v_k_1390_, lean_object* v_allowLevelAssignments_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1397_; lean_object* v_res_1398_; 
v_allowLevelAssignments_boxed_1397_ = lean_unbox(v_allowLevelAssignments_1391_);
v_res_1398_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1390_, v_allowLevelAssignments_boxed_1397_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object* v_00_u03b1_1399_, lean_object* v_k_1400_, uint8_t v_allowLevelAssignments_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1400_, v_allowLevelAssignments_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object* v_00_u03b1_1408_, lean_object* v_k_1409_, lean_object* v_allowLevelAssignments_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1416_; lean_object* v_res_1417_; 
v_allowLevelAssignments_boxed_1416_ = lean_unbox(v_allowLevelAssignments_1410_);
v_res_1417_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(v_00_u03b1_1408_, v_k_1409_, v_allowLevelAssignments_boxed_1416_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object* v_as_1420_, size_t v_sz_1421_, size_t v_i_1422_, lean_object* v_b_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_a_1430_; uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_lt(v_i_1422_, v_sz_1421_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_b_1423_);
return v___x_1435_;
}
else
{
lean_object* v_snd_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1598_; 
v_snd_1436_ = lean_ctor_get(v_b_1423_, 1);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_b_1423_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v_b_1423_, 0);
lean_dec(v_unused_1599_);
v___x_1438_ = v_b_1423_;
v_isShared_1439_ = v_isSharedCheck_1598_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_snd_1436_);
lean_dec(v_b_1423_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1598_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v_array_1440_; lean_object* v_start_1441_; lean_object* v_stop_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
v_array_1440_ = lean_ctor_get(v_snd_1436_, 0);
v_start_1441_ = lean_ctor_get(v_snd_1436_, 1);
v_stop_1442_ = lean_ctor_get(v_snd_1436_, 2);
v___x_1443_ = lean_box(0);
v___x_1444_ = lean_nat_dec_lt(v_start_1441_, v_stop_1442_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1446_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1443_);
v___x_1446_ = v___x_1438_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_snd_1436_);
v___x_1446_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
return v___x_1447_;
}
}
else
{
lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1594_; 
lean_inc(v_stop_1442_);
lean_inc(v_start_1441_);
lean_inc_ref(v_array_1440_);
v_isSharedCheck_1594_ = !lean_is_exclusive(v_snd_1436_);
if (v_isSharedCheck_1594_ == 0)
{
lean_object* v_unused_1595_; lean_object* v_unused_1596_; lean_object* v_unused_1597_; 
v_unused_1595_ = lean_ctor_get(v_snd_1436_, 2);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_snd_1436_, 1);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_snd_1436_, 0);
lean_dec(v_unused_1597_);
v___x_1450_ = v_snd_1436_;
v_isShared_1451_ = v_isSharedCheck_1594_;
goto v_resetjp_1449_;
}
else
{
lean_dec(v_snd_1436_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1594_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1456_; 
v___x_1452_ = lean_array_fget(v_array_1440_, v_start_1441_);
v___x_1453_ = lean_unsigned_to_nat(1u);
v___x_1454_ = lean_nat_add(v_start_1441_, v___x_1453_);
lean_dec(v_start_1441_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set(v___x_1450_, 1, v___x_1454_);
v___x_1456_ = v___x_1450_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_array_1440_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v___x_1454_);
lean_ctor_set(v_reuseFailAlloc_1593_, 2, v_stop_1442_);
v___x_1456_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
uint8_t v___x_1457_; 
v___x_1457_ = lean_unbox(v___x_1452_);
lean_dec(v___x_1452_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1459_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 1, v___x_1456_);
lean_ctor_set(v___x_1438_, 0, v___x_1443_);
v___x_1459_ = v___x_1438_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v___x_1456_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
v_a_1430_ = v___x_1459_;
goto v___jp_1429_;
}
}
else
{
lean_object* v_a_1461_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___x_1533_; 
v_a_1461_ = lean_array_uget_borrowed(v_as_1420_, v_i_1422_);
lean_inc(v___y_1427_);
lean_inc_ref(v___y_1426_);
lean_inc(v___y_1425_);
lean_inc_ref(v___y_1424_);
lean_inc(v_a_1461_);
v___x_1533_ = lean_infer_type(v_a_1461_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = l_Lean_Meta_matchEq_x3f(v_a_1534_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
if (lean_obj_tag(v_a_1536_) == 1)
{
lean_object* v_val_1537_; lean_object* v_snd_1538_; lean_object* v_fst_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1575_; 
v_val_1537_ = lean_ctor_get(v_a_1536_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v_a_1536_, 1);
v_snd_1538_ = lean_ctor_get(v_val_1537_, 1);
lean_inc(v_snd_1538_);
lean_dec(v_val_1537_);
v_fst_1539_ = lean_ctor_get(v_snd_1538_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_snd_1538_);
if (v_isSharedCheck_1575_ == 0)
{
lean_object* v_unused_1576_; 
v_unused_1576_ = lean_ctor_get(v_snd_1538_, 1);
lean_dec(v_unused_1576_);
v___x_1541_ = v_snd_1538_;
v_isShared_1542_ = v_isSharedCheck_1575_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_fst_1539_);
lean_dec(v_snd_1538_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1575_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lean_Meta_mkEqRefl(v_fst_1539_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1545_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1543_, 1);
lean_inc(v_a_1461_);
v___x_1545_ = l_Lean_Meta_isExprDefEq(v_a_1461_, v_a_1544_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1558_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1548_ = v___x_1545_;
v_isShared_1549_ = v_isSharedCheck_1558_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1558_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
uint8_t v___x_1550_; 
v___x_1550_ = lean_unbox(v_a_1546_);
lean_dec(v_a_1546_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
lean_del_object(v___x_1438_);
v___x_1551_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 1, v___x_1456_);
lean_ctor_set(v___x_1541_, 0, v___x_1551_);
v___x_1553_ = v___x_1541_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1557_, 1, v___x_1456_);
v___x_1553_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1555_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1553_);
v___x_1555_ = v___x_1548_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
else
{
lean_del_object(v___x_1548_);
lean_del_object(v___x_1541_);
v___y_1463_ = v___y_1424_;
v___y_1464_ = v___y_1425_;
v___y_1465_ = v___y_1426_;
v___y_1466_ = v___y_1427_;
goto v___jp_1462_;
}
}
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_del_object(v___x_1541_);
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1559_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1545_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1545_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_del_object(v___x_1541_);
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1567_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1543_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1543_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
}
else
{
lean_dec(v_a_1536_);
v___y_1463_ = v___y_1424_;
v___y_1464_ = v___y_1425_;
v___y_1465_ = v___y_1426_;
v___y_1466_ = v___y_1427_;
goto v___jp_1462_;
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1577_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1535_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1535_);
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
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1585_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1533_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1533_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
v___jp_1462_:
{
lean_object* v___x_1467_; 
lean_inc(v___y_1466_);
lean_inc_ref(v___y_1465_);
lean_inc(v___y_1464_);
lean_inc_ref(v___y_1463_);
lean_inc(v_a_1461_);
v___x_1467_ = lean_infer_type(v_a_1461_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1469_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___x_1467_, 1);
v___x_1469_ = l_Lean_Meta_matchHEq_x3f(v_a_1468_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1469_, 1);
if (lean_obj_tag(v_a_1470_) == 1)
{
lean_object* v_val_1471_; lean_object* v_snd_1472_; lean_object* v_fst_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1512_; 
lean_del_object(v___x_1438_);
v_val_1471_ = lean_ctor_get(v_a_1470_, 0);
lean_inc(v_val_1471_);
lean_dec_ref_known(v_a_1470_, 1);
v_snd_1472_ = lean_ctor_get(v_val_1471_, 1);
lean_inc(v_snd_1472_);
lean_dec(v_val_1471_);
v_fst_1473_ = lean_ctor_get(v_snd_1472_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_snd_1472_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; 
v_unused_1513_ = lean_ctor_get(v_snd_1472_, 1);
lean_dec(v_unused_1513_);
v___x_1475_ = v_snd_1472_;
v_isShared_1476_ = v_isSharedCheck_1512_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_fst_1473_);
lean_dec(v_snd_1472_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1512_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Lean_Meta_mkHEqRefl(v_fst_1473_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1479_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref_known(v___x_1477_, 1);
lean_inc(v_a_1461_);
v___x_1479_ = l_Lean_Meta_isExprDefEq(v_a_1461_, v_a_1478_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1495_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1482_ = v___x_1479_;
v_isShared_1483_ = v_isSharedCheck_1495_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1495_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
uint8_t v___x_1484_; 
v___x_1484_ = lean_unbox(v_a_1480_);
lean_dec(v_a_1480_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 1, v___x_1456_);
lean_ctor_set(v___x_1475_, 0, v___x_1485_);
v___x_1487_ = v___x_1475_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1485_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1456_);
v___x_1487_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1487_);
v___x_1489_ = v___x_1482_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
else
{
lean_object* v___x_1493_; 
lean_del_object(v___x_1482_);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 1, v___x_1456_);
lean_ctor_set(v___x_1475_, 0, v___x_1443_);
v___x_1493_ = v___x_1475_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v___x_1456_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
v_a_1430_ = v___x_1493_;
goto v___jp_1429_;
}
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_del_object(v___x_1475_);
lean_dec_ref(v___x_1456_);
v_a_1496_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1479_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1479_);
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
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_del_object(v___x_1475_);
lean_dec_ref(v___x_1456_);
v_a_1504_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1477_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1477_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
else
{
lean_object* v___x_1515_; 
lean_dec(v_a_1470_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 1, v___x_1456_);
lean_ctor_set(v___x_1438_, 0, v___x_1443_);
v___x_1515_ = v___x_1438_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v___x_1456_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
v_a_1430_ = v___x_1515_;
goto v___jp_1429_;
}
}
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1524_; 
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1517_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1519_ = v___x_1469_;
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_a_1517_);
lean_dec(v___x_1469_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1524_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1522_; 
if (v_isShared_1520_ == 0)
{
v___x_1522_ = v___x_1519_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_a_1517_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v___x_1456_);
lean_del_object(v___x_1438_);
v_a_1525_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1467_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1467_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
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
v___jp_1429_:
{
size_t v___x_1431_; size_t v___x_1432_; 
v___x_1431_ = ((size_t)1ULL);
v___x_1432_ = lean_usize_add(v_i_1422_, v___x_1431_);
v_i_1422_ = v___x_1432_;
v_b_1423_ = v_a_1430_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object* v_as_1600_, lean_object* v_sz_1601_, lean_object* v_i_1602_, lean_object* v_b_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
size_t v_sz_boxed_1609_; size_t v_i_boxed_1610_; lean_object* v_res_1611_; 
v_sz_boxed_1609_ = lean_unbox_usize(v_sz_1601_);
lean_dec(v_sz_1601_);
v_i_boxed_1610_ = lean_unbox_usize(v_i_1602_);
lean_dec(v_i_1602_);
v_res_1611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_as_1600_, v_sz_boxed_1609_, v_i_boxed_1610_, v_b_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec_ref(v_as_1600_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object* v___x_1612_, uint8_t v___x_1613_, lean_object* v_localDecl_1614_, lean_object* v_mvarId_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; 
lean_inc_ref(v___x_1612_);
v___x_1621_ = l_Lean_Meta_forallMetaTelescope(v___x_1612_, v___x_1613_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; lean_object* v_fst_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1712_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v_fst_1623_ = lean_ctor_get(v_a_1622_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v_a_1622_);
if (v_isSharedCheck_1712_ == 0)
{
lean_object* v_unused_1713_; 
v_unused_1713_ = lean_ctor_get(v_a_1622_, 1);
lean_dec(v_unused_1713_);
v___x_1625_ = v_a_1622_;
v_isShared_1626_ = v_isSharedCheck_1712_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_fst_1623_);
lean_dec(v_a_1622_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1712_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1633_; 
v___x_1627_ = l_Lean_Meta_mkGenDiseqMask(v___x_1612_);
lean_dec_ref(v___x_1612_);
v___x_1628_ = lean_unsigned_to_nat(0u);
v___x_1629_ = lean_array_get_size(v___x_1627_);
v___x_1630_ = l_Array_toSubarray___redArg(v___x_1627_, v___x_1628_, v___x_1629_);
v___x_1631_ = lean_box(0);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 1, v___x_1630_);
lean_ctor_set(v___x_1625_, 0, v___x_1631_);
v___x_1633_ = v___x_1625_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1631_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v___x_1630_);
v___x_1633_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
size_t v_sz_1634_; size_t v___x_1635_; lean_object* v___x_1636_; 
v_sz_1634_ = lean_array_size(v_fst_1623_);
v___x_1635_ = ((size_t)0ULL);
v___x_1636_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_fst_1623_, v_sz_1634_, v___x_1635_, v___x_1633_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1702_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1639_ = v___x_1636_;
v_isShared_1640_ = v_isSharedCheck_1702_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1636_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1702_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v_fst_1641_; 
v_fst_1641_ = lean_ctor_get(v_a_1637_, 0);
lean_inc(v_fst_1641_);
lean_dec(v_a_1637_);
if (lean_obj_tag(v_fst_1641_) == 0)
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1697_; 
lean_del_object(v___x_1639_);
v___x_1642_ = l_Lean_LocalDecl_toExpr(v_localDecl_1614_);
v___x_1643_ = l_Lean_mkAppN(v___x_1642_, v_fst_1623_);
lean_dec(v_fst_1623_);
v___x_1644_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1643_, v___y_1617_);
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1697_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1697_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; 
lean_inc(v_a_1645_);
v___x_1649_ = l_Lean_Meta_hasAssignableMVar(v_a_1645_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1688_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1652_ = v___x_1649_;
v_isShared_1653_ = v_isSharedCheck_1688_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1649_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1688_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
uint8_t v___x_1654_; 
v___x_1654_ = lean_unbox(v_a_1650_);
lean_dec(v_a_1650_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; 
lean_del_object(v___x_1652_);
v___x_1655_ = l_Lean_MVarId_getType(v_mvarId_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1657_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_a_1656_);
lean_dec_ref_known(v___x_1655_, 1);
v___x_1657_ = l_Lean_Meta_mkFalseElim(v_a_1656_, v_a_1645_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1668_; 
v_a_1658_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1660_ = v___x_1657_;
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1657_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1648_ == 0)
{
lean_ctor_set_tag(v___x_1647_, 1);
lean_ctor_set(v___x_1647_, 0, v_a_1658_);
v___x_1663_ = v___x_1647_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1665_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v___x_1663_);
v___x_1665_ = v___x_1660_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_del_object(v___x_1647_);
v_a_1669_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1657_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1657_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
lean_del_object(v___x_1647_);
lean_dec(v_a_1645_);
v_a_1677_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1655_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1655_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
else
{
lean_object* v___x_1686_; 
lean_del_object(v___x_1647_);
lean_dec(v_a_1645_);
lean_dec(v_mvarId_1615_);
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 0, v___x_1631_);
v___x_1686_ = v___x_1652_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1631_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_del_object(v___x_1647_);
lean_dec(v_a_1645_);
lean_dec(v_mvarId_1615_);
v_a_1689_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1649_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1649_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
else
{
lean_object* v_val_1698_; lean_object* v___x_1700_; 
lean_dec(v_fst_1623_);
lean_dec(v_mvarId_1615_);
lean_dec_ref(v_localDecl_1614_);
v_val_1698_ = lean_ctor_get(v_fst_1641_, 0);
lean_inc(v_val_1698_);
lean_dec_ref_known(v_fst_1641_, 1);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v_val_1698_);
v___x_1700_ = v___x_1639_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_val_1698_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec(v_fst_1623_);
lean_dec(v_mvarId_1615_);
lean_dec_ref(v_localDecl_1614_);
v_a_1703_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1636_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1636_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_mvarId_1615_);
lean_dec_ref(v_localDecl_1614_);
lean_dec_ref(v___x_1612_);
v_a_1714_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1621_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1621_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object* v___x_1722_, lean_object* v___x_1723_, lean_object* v_localDecl_1724_, lean_object* v_mvarId_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_6078__boxed_1731_; lean_object* v_res_1732_; 
v___x_6078__boxed_1731_ = lean_unbox(v___x_1723_);
v_res_1732_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(v___x_1722_, v___x_6078__boxed_1731_, v_localDecl_1724_, v_mvarId_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
return v_res_1732_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1736_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2));
v___x_1737_ = lean_unsigned_to_nat(2u);
v___x_1738_ = lean_unsigned_to_nat(120u);
v___x_1739_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1));
v___x_1740_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0));
v___x_1741_ = l_mkPanicMessageWithDecl(v___x_1740_, v___x_1739_, v___x_1738_, v___x_1737_, v___x_1736_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object* v_mvarId_1742_, lean_object* v_localDecl_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = l_Lean_LocalDecl_type(v_localDecl_1743_);
lean_inc_ref(v___x_1749_);
v___x_1750_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1749_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec_ref(v___x_1749_);
lean_dec_ref(v_localDecl_1743_);
lean_dec(v_mvarId_1742_);
v___x_1751_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3);
v___x_1752_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v___x_1751_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
return v___x_1752_;
}
else
{
uint8_t v___x_1753_; lean_object* v___x_1754_; lean_object* v___f_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; 
v___x_1753_ = 0;
v___x_1754_ = lean_box(v___x_1753_);
lean_inc(v_mvarId_1742_);
v___f_1755_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1755_, 0, v___x_1749_);
lean_closure_set(v___f_1755_, 1, v___x_1754_);
lean_closure_set(v___f_1755_, 2, v_localDecl_1743_);
lean_closure_set(v___f_1755_, 3, v_mvarId_1742_);
v___x_1756_ = 0;
v___x_1757_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v___f_1755_, v___x_1756_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1777_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1760_ = v___x_1757_;
v_isShared_1761_ = v_isSharedCheck_1777_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1757_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1777_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
if (lean_obj_tag(v_a_1758_) == 1)
{
lean_object* v_val_1762_; lean_object* v___x_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1771_; 
lean_del_object(v___x_1760_);
v_val_1762_ = lean_ctor_get(v_a_1758_, 0);
lean_inc(v_val_1762_);
lean_dec_ref_known(v_a_1758_, 1);
v___x_1763_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1742_, v_val_1762_, v_a_1745_);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1771_ == 0)
{
lean_object* v_unused_1772_; 
v_unused_1772_ = lean_ctor_get(v___x_1763_, 0);
lean_dec(v_unused_1772_);
v___x_1765_ = v___x_1763_;
v_isShared_1766_ = v_isSharedCheck_1771_;
goto v_resetjp_1764_;
}
else
{
lean_dec(v___x_1763_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1771_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1769_; 
v___x_1767_ = lean_box(v___x_1750_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1767_);
v___x_1769_ = v___x_1765_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v___x_1767_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
else
{
lean_object* v___x_1773_; lean_object* v___x_1775_; 
lean_dec(v_a_1758_);
lean_dec(v_mvarId_1742_);
v___x_1773_ = lean_box(v___x_1756_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1773_);
v___x_1775_ = v___x_1760_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1773_);
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
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec(v_mvarId_1742_);
v_a_1778_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1757_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1757_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object* v_mvarId_1786_, lean_object* v_localDecl_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1786_, v_localDecl_1787_, v_a_1788_, v_a_1789_, v_a_1790_, v_a_1791_);
lean_dec(v_a_1791_);
lean_dec_ref(v_a_1790_);
lean_dec(v_a_1789_);
lean_dec_ref(v_a_1788_);
return v_res_1793_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = lean_box(0);
v___x_1806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5));
v___x_1807_ = l_Lean_mkConst(v___x_1806_, v___x_1805_);
return v___x_1807_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = l_unsafeCast___redArg(v___x_1808_);
return v___x_1809_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8(void){
_start:
{
lean_object* v___x_1810_; lean_object* v_dummy_1811_; 
v___x_1810_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_dummy_1811_ = l_Lean_Expr_sort___override(v___x_1810_);
return v_dummy_1811_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object* v_config_1812_, lean_object* v_mvarId_1813_, lean_object* v_as_1814_, size_t v_sz_1815_, size_t v_i_1816_, lean_object* v_b_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
uint8_t v___x_1823_; 
v___x_1823_ = lean_usize_dec_lt(v_i_1816_, v_sz_1815_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; 
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v___x_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1824_, 0, v_b_1817_);
return v___x_1824_;
}
else
{
lean_object* v_snd_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_2475_; 
v_snd_1825_ = lean_ctor_get(v_b_1817_, 1);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_b_1817_);
if (v_isSharedCheck_2475_ == 0)
{
lean_object* v_unused_2476_; 
v_unused_2476_ = lean_ctor_get(v_b_1817_, 0);
lean_dec(v_unused_2476_);
v___x_1827_ = v_b_1817_;
v_isShared_1828_ = v_isSharedCheck_2475_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_snd_1825_);
lean_dec(v_b_1817_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_2475_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v_a_1830_; lean_object* v___x_1836_; lean_object* v_a_1838_; lean_object* v_a_1843_; 
v___x_1836_ = lean_box(0);
v_a_1843_ = lean_array_uget(v_as_1814_, v_i_1816_);
if (lean_obj_tag(v_a_1843_) == 0)
{
lean_del_object(v___x_1827_);
v_a_1838_ = v_snd_1825_;
goto v___jp_1837_;
}
else
{
lean_object* v_val_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_2474_; 
v_val_1844_ = lean_ctor_get(v_a_1843_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_a_1843_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_1846_ = v_a_1843_;
v_isShared_1847_ = v_isSharedCheck_2474_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_val_1844_);
lean_dec(v_a_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_2474_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1848_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___x_1889_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1915_; uint8_t v___y_1916_; uint8_t v___x_1917_; lean_object* v___y_1919_; uint8_t v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1925_; uint8_t v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; uint8_t v___y_1930_; uint8_t v___y_1932_; uint8_t v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; uint8_t v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; uint8_t v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; uint8_t v___y_1946_; 
v___x_1848_ = lean_box(0);
v___x_1889_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_1917_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1844_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1961_; uint8_t v___y_1963_; uint8_t v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1972_; lean_object* v___y_1973_; uint8_t v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; uint8_t v___y_1977_; lean_object* v___y_1978_; uint8_t v___y_1979_; lean_object* v___y_1982_; uint8_t v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; uint8_t v___y_1986_; lean_object* v___y_1987_; lean_object* v_a_1988_; lean_object* v___y_1992_; lean_object* v___y_1993_; uint8_t v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; uint8_t v___y_1997_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2036_; uint8_t v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; uint8_t v___y_2040_; lean_object* v___y_2041_; lean_object* v___y_2065_; uint8_t v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; uint8_t v___y_2069_; lean_object* v___y_2070_; uint8_t v___y_2071_; lean_object* v___y_2073_; uint8_t v___y_2074_; lean_object* v___y_2075_; lean_object* v___y_2076_; uint8_t v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; uint8_t v___y_2080_; lean_object* v___y_2083_; uint8_t v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; uint8_t v___y_2087_; lean_object* v___y_2088_; uint8_t v___y_2089_; lean_object* v___y_2102_; uint8_t v___y_2103_; lean_object* v___y_2104_; lean_object* v___y_2105_; uint8_t v___y_2106_; lean_object* v___y_2107_; uint8_t v___y_2108_; uint8_t v___y_2110_; uint8_t v_isHEq_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; lean_object* v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; uint8_t v___y_2125_; uint8_t v_isEq_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2185_; lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___x_2411_; 
v___x_1961_ = l_Lean_LocalDecl_type(v_val_1844_);
lean_inc_ref(v___x_1961_);
v___x_2411_ = l_Lean_Meta_matchNot_x3f(v___x_1961_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
if (lean_obj_tag(v_a_2412_) == 1)
{
lean_object* v_val_2413_; lean_object* v___x_2414_; 
v_val_2413_ = lean_ctor_get(v_a_2412_, 0);
lean_inc(v_val_2413_);
lean_dec_ref_known(v_a_2412_, 1);
v___x_2414_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2413_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
if (lean_obj_tag(v_a_2415_) == 1)
{
lean_object* v_val_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2457_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec_ref(v_config_1812_);
v_val_2416_ = lean_ctor_get(v_a_2415_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v_a_2415_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2418_ = v_a_2415_;
v_isShared_2419_ = v_isSharedCheck_2457_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_val_2416_);
lean_dec(v_a_2415_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2457_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2420_; 
lean_inc(v_mvarId_1813_);
v___x_2420_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v___x_2422_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_2423_ = l_Lean_mkFVar(v_val_2416_);
v___x_2424_ = l_Lean_Expr_app___override(v___x_2422_, v___x_2423_);
v___x_2425_ = l_Lean_Meta_mkFalseElim(v_a_2421_, v___x_2424_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2427_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2426_);
lean_dec_ref_known(v___x_2425_, 1);
v___x_2427_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_2426_, v___y_1819_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v___x_2428_; lean_object* v___x_2430_; 
lean_dec_ref_known(v___x_2427_, 1);
v___x_2428_ = lean_box(v___x_1823_);
if (v_isShared_2419_ == 0)
{
lean_ctor_set(v___x_2418_, 0, v___x_2428_);
v___x_2430_ = v___x_2418_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2428_);
v___x_2430_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
lean_object* v___x_2431_; 
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
lean_ctor_set(v___x_2431_, 1, v___x_1848_);
v_a_1830_ = v___x_2431_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
lean_del_object(v___x_2418_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_2433_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2427_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2427_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_del_object(v___x_2418_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2441_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2425_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2425_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_del_object(v___x_2418_);
lean_dec(v_val_2416_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2449_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2420_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2420_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
}
else
{
lean_dec(v_a_2415_);
v___y_2277_ = v___y_1818_;
v___y_2278_ = v___y_1819_;
v___y_2279_ = v___y_1820_;
v___y_2280_ = v___y_1821_;
goto v___jp_2276_;
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2458_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2414_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2414_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_dec(v_a_2412_);
v___y_2277_ = v___y_1818_;
v___y_2278_ = v___y_1819_;
v___y_2279_ = v___y_1820_;
v___y_2280_ = v___y_1821_;
goto v___jp_2276_;
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2466_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2411_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2411_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
v___jp_1962_:
{
uint8_t v_genDiseq_1969_; 
v_genDiseq_1969_ = lean_ctor_get_uint8(v_config_1812_, sizeof(void*)*1 + 2);
if (v_genDiseq_1969_ == 0)
{
lean_dec_ref(v___x_1961_);
v___y_1940_ = v___y_1963_;
v___y_1941_ = v___y_1965_;
v___y_1942_ = v___y_1966_;
v___y_1943_ = v___y_1964_;
v___y_1944_ = v___y_1968_;
v___y_1945_ = v___y_1967_;
v___y_1946_ = v___x_1917_;
goto v___jp_1939_;
}
else
{
uint8_t v___x_1970_; 
v___x_1970_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1961_);
v___y_1940_ = v___y_1963_;
v___y_1941_ = v___y_1965_;
v___y_1942_ = v___y_1966_;
v___y_1943_ = v___y_1964_;
v___y_1944_ = v___y_1968_;
v___y_1945_ = v___y_1967_;
v___y_1946_ = v___x_1970_;
goto v___jp_1939_;
}
}
v___jp_1971_:
{
if (v___y_1979_ == 0)
{
lean_dec_ref(v___y_1973_);
v___y_1963_ = v___y_1974_;
v___y_1964_ = v___y_1977_;
v___y_1965_ = v___y_1976_;
v___y_1966_ = v___y_1975_;
v___y_1967_ = v___y_1978_;
v___y_1968_ = v___y_1972_;
goto v___jp_1962_;
}
else
{
lean_object* v___x_1980_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___y_1973_);
return v___x_1980_;
}
}
v___jp_1981_:
{
uint8_t v___x_1989_; 
v___x_1989_ = l_Lean_Exception_isInterrupt(v_a_1988_);
if (v___x_1989_ == 0)
{
uint8_t v___x_1990_; 
lean_inc_ref(v_a_1988_);
v___x_1990_ = l_Lean_Exception_isRuntime(v_a_1988_);
v___y_1972_ = v___y_1982_;
v___y_1973_ = v_a_1988_;
v___y_1974_ = v___y_1983_;
v___y_1975_ = v___y_1984_;
v___y_1976_ = v___y_1985_;
v___y_1977_ = v___y_1986_;
v___y_1978_ = v___y_1987_;
v___y_1979_ = v___x_1990_;
goto v___jp_1971_;
}
else
{
v___y_1972_ = v___y_1982_;
v___y_1973_ = v_a_1988_;
v___y_1974_ = v___y_1983_;
v___y_1975_ = v___y_1984_;
v___y_1976_ = v___y_1985_;
v___y_1977_ = v___y_1986_;
v___y_1978_ = v___y_1987_;
v___y_1979_ = v___x_1989_;
goto v___jp_1971_;
}
}
v___jp_1991_:
{
if (lean_obj_tag(v___y_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
v_a_2000_ = lean_ctor_get(v___y_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___y_1999_, 1);
v___x_2001_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2002_ = l_Lean_Expr_isConstOf(v_a_2000_, v___x_2001_);
lean_dec(v_a_2000_);
if (v___x_2002_ == 0)
{
lean_dec_ref(v___y_1993_);
v___y_1963_ = v___y_1994_;
v___y_1964_ = v___y_1997_;
v___y_1965_ = v___y_1996_;
v___y_1966_ = v___y_1995_;
v___y_1967_ = v___y_1998_;
v___y_1968_ = v___y_1992_;
goto v___jp_1962_;
}
else
{
lean_object* v___x_2003_; 
lean_inc_ref(v___y_1993_);
v___x_2003_ = l_Lean_Meta_mkEqRefl(v___y_1993_, v___y_1996_, v___y_1995_, v___y_1998_, v___y_1992_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2005_; lean_object* v_dummy_2006_; lean_object* v_nargs_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref_known(v___x_2003_, 1);
v___x_2005_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2006_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
v_nargs_2007_ = l_Lean_Expr_getAppNumArgs(v___y_1993_);
lean_inc(v_nargs_2007_);
v___x_2008_ = lean_mk_array(v_nargs_2007_, v_dummy_2006_);
v___x_2009_ = lean_unsigned_to_nat(1u);
v___x_2010_ = lean_nat_sub(v_nargs_2007_, v___x_2009_);
lean_dec(v_nargs_2007_);
v___x_2011_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_1993_, v___x_2008_, v___x_2010_);
v___x_2012_ = lean_array_push(v___x_2011_, v_a_2004_);
v___x_2013_ = l_Lean_mkAppN(v___x_2005_, v___x_2012_);
lean_dec_ref(v___x_2012_);
lean_inc(v_mvarId_1813_);
v___x_2014_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_1996_, v___y_1995_, v___y_1998_, v___y_1992_);
if (lean_obj_tag(v___x_2014_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_a_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2015_);
lean_dec_ref_known(v___x_2014_, 1);
lean_inc(v_val_1844_);
v___x_2016_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_2017_ = l_Lean_Meta_mkAbsurd(v_a_2015_, v___x_2016_, v___x_2013_, v___y_1996_, v___y_1995_, v___y_1998_, v___y_1992_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2019_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2017_, 1);
lean_inc(v_mvarId_1813_);
v___x_2019_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_2018_, v___y_1995_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; 
v_unused_2029_ = lean_ctor_get(v___x_2019_, 0);
lean_dec(v_unused_2029_);
v___x_2021_ = v___x_2019_;
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
else
{
lean_dec(v___x_2019_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2028_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_box(v___x_1823_);
if (v_isShared_2022_ == 0)
{
lean_ctor_set_tag(v___x_2021_, 1);
lean_ctor_set(v___x_2021_, 0, v___x_2023_);
v___x_2025_ = v___x_2021_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
lean_ctor_set(v___x_2026_, 1, v___x_1848_);
v_a_1830_ = v___x_2026_;
goto v___jp_1829_;
}
}
}
else
{
lean_object* v_a_2030_; 
v_a_2030_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2019_, 1);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1994_;
v___y_1984_ = v___y_1995_;
v___y_1985_ = v___y_1996_;
v___y_1986_ = v___y_1997_;
v___y_1987_ = v___y_1998_;
v_a_1988_ = v_a_2030_;
goto v___jp_1981_;
}
}
else
{
lean_object* v_a_2031_; 
v_a_2031_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2031_);
lean_dec_ref_known(v___x_2017_, 1);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1994_;
v___y_1984_ = v___y_1995_;
v___y_1985_ = v___y_1996_;
v___y_1986_ = v___y_1997_;
v___y_1987_ = v___y_1998_;
v_a_1988_ = v_a_2031_;
goto v___jp_1981_;
}
}
else
{
lean_object* v_a_2032_; 
lean_dec_ref(v___x_2013_);
v_a_2032_ = lean_ctor_get(v___x_2014_, 0);
lean_inc(v_a_2032_);
lean_dec_ref_known(v___x_2014_, 1);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1994_;
v___y_1984_ = v___y_1995_;
v___y_1985_ = v___y_1996_;
v___y_1986_ = v___y_1997_;
v___y_1987_ = v___y_1998_;
v_a_1988_ = v_a_2032_;
goto v___jp_1981_;
}
}
else
{
lean_object* v_a_2033_; 
lean_dec_ref(v___y_1993_);
v_a_2033_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2003_, 1);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1994_;
v___y_1984_ = v___y_1995_;
v___y_1985_ = v___y_1996_;
v___y_1986_ = v___y_1997_;
v___y_1987_ = v___y_1998_;
v_a_1988_ = v_a_2033_;
goto v___jp_1981_;
}
}
}
else
{
lean_object* v_a_2034_; 
lean_dec_ref(v___y_1993_);
v_a_2034_ = lean_ctor_get(v___y_1999_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___y_1999_, 1);
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1994_;
v___y_1984_ = v___y_1995_;
v___y_1985_ = v___y_1996_;
v___y_1986_ = v___y_1997_;
v___y_1987_ = v___y_1998_;
v_a_1988_ = v_a_2034_;
goto v___jp_1981_;
}
}
v___jp_2035_:
{
lean_object* v___x_2042_; 
lean_inc_ref(v___x_1961_);
v___x_2042_ = l_Lean_Meta_mkDecide(v___x_1961_, v___y_2039_, v___y_2038_, v___y_2041_, v___y_2036_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2044_; uint8_t v_transparency_2045_; uint8_t v___x_2046_; uint8_t v___x_2047_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2043_);
lean_dec_ref_known(v___x_2042_, 1);
v___x_2044_ = l_Lean_Meta_Context_config(v___y_2039_);
v_transparency_2045_ = lean_ctor_get_uint8(v___x_2044_, 9);
lean_dec_ref(v___x_2044_);
v___x_2046_ = 1;
v___x_2047_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2045_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v_keyedConfig_2048_; uint8_t v_trackZetaDelta_2049_; lean_object* v_zetaDeltaSet_2050_; lean_object* v_lctx_2051_; lean_object* v_localInstances_2052_; lean_object* v_defEqCtx_x3f_2053_; lean_object* v_synthPendingDepth_2054_; lean_object* v_customCanUnfoldPredicate_x3f_2055_; uint8_t v_univApprox_2056_; uint8_t v_inTypeClassResolution_2057_; uint8_t v_cacheInferType_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v_keyedConfig_2048_ = lean_ctor_get(v___y_2039_, 0);
v_trackZetaDelta_2049_ = lean_ctor_get_uint8(v___y_2039_, sizeof(void*)*7);
v_zetaDeltaSet_2050_ = lean_ctor_get(v___y_2039_, 1);
v_lctx_2051_ = lean_ctor_get(v___y_2039_, 2);
v_localInstances_2052_ = lean_ctor_get(v___y_2039_, 3);
v_defEqCtx_x3f_2053_ = lean_ctor_get(v___y_2039_, 4);
v_synthPendingDepth_2054_ = lean_ctor_get(v___y_2039_, 5);
v_customCanUnfoldPredicate_x3f_2055_ = lean_ctor_get(v___y_2039_, 6);
v_univApprox_2056_ = lean_ctor_get_uint8(v___y_2039_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2057_ = lean_ctor_get_uint8(v___y_2039_, sizeof(void*)*7 + 2);
v_cacheInferType_2058_ = lean_ctor_get_uint8(v___y_2039_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2048_);
v___x_2059_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2046_, v_keyedConfig_2048_);
lean_inc(v_customCanUnfoldPredicate_x3f_2055_);
lean_inc(v_synthPendingDepth_2054_);
lean_inc(v_defEqCtx_x3f_2053_);
lean_inc_ref(v_localInstances_2052_);
lean_inc_ref(v_lctx_2051_);
lean_inc(v_zetaDeltaSet_2050_);
v___x_2060_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_zetaDeltaSet_2050_);
lean_ctor_set(v___x_2060_, 2, v_lctx_2051_);
lean_ctor_set(v___x_2060_, 3, v_localInstances_2052_);
lean_ctor_set(v___x_2060_, 4, v_defEqCtx_x3f_2053_);
lean_ctor_set(v___x_2060_, 5, v_synthPendingDepth_2054_);
lean_ctor_set(v___x_2060_, 6, v_customCanUnfoldPredicate_x3f_2055_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7, v_trackZetaDelta_2049_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 1, v_univApprox_2056_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2057_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*7 + 3, v_cacheInferType_2058_);
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2041_);
lean_inc(v___y_2038_);
lean_inc(v_a_2043_);
v___x_2061_ = lean_whnf(v_a_2043_, v___x_2060_, v___y_2038_, v___y_2041_, v___y_2036_);
v___y_1992_ = v___y_2036_;
v___y_1993_ = v_a_2043_;
v___y_1994_ = v___y_2037_;
v___y_1995_ = v___y_2038_;
v___y_1996_ = v___y_2039_;
v___y_1997_ = v___y_2040_;
v___y_1998_ = v___y_2041_;
v___y_1999_ = v___x_2061_;
goto v___jp_1991_;
}
else
{
lean_object* v___x_2062_; 
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2041_);
lean_inc(v___y_2038_);
lean_inc_ref(v___y_2039_);
lean_inc(v_a_2043_);
v___x_2062_ = lean_whnf(v_a_2043_, v___y_2039_, v___y_2038_, v___y_2041_, v___y_2036_);
v___y_1992_ = v___y_2036_;
v___y_1993_ = v_a_2043_;
v___y_1994_ = v___y_2037_;
v___y_1995_ = v___y_2038_;
v___y_1996_ = v___y_2039_;
v___y_1997_ = v___y_2040_;
v___y_1998_ = v___y_2041_;
v___y_1999_ = v___x_2062_;
goto v___jp_1991_;
}
}
else
{
lean_object* v_a_2063_; 
v_a_2063_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2042_, 1);
v___y_1982_ = v___y_2036_;
v___y_1983_ = v___y_2037_;
v___y_1984_ = v___y_2038_;
v___y_1985_ = v___y_2039_;
v___y_1986_ = v___y_2040_;
v___y_1987_ = v___y_2041_;
v_a_1988_ = v_a_2063_;
goto v___jp_1981_;
}
}
v___jp_2064_:
{
if (v___y_2071_ == 0)
{
v___y_1963_ = v___y_2066_;
v___y_1964_ = v___y_2069_;
v___y_1965_ = v___y_2068_;
v___y_1966_ = v___y_2067_;
v___y_1967_ = v___y_2070_;
v___y_1968_ = v___y_2065_;
goto v___jp_1962_;
}
else
{
v___y_2036_ = v___y_2065_;
v___y_2037_ = v___y_2066_;
v___y_2038_ = v___y_2067_;
v___y_2039_ = v___y_2068_;
v___y_2040_ = v___y_2069_;
v___y_2041_ = v___y_2070_;
goto v___jp_2035_;
}
}
v___jp_2072_:
{
if (v___y_2080_ == 0)
{
lean_dec_ref(v___y_2078_);
v___y_2065_ = v___y_2073_;
v___y_2066_ = v___y_2074_;
v___y_2067_ = v___y_2075_;
v___y_2068_ = v___y_2076_;
v___y_2069_ = v___y_2077_;
v___y_2070_ = v___y_2079_;
v___y_2071_ = v___x_1917_;
goto v___jp_2064_;
}
else
{
uint8_t v___x_2081_; 
v___x_2081_ = l_Lean_Expr_hasFVar(v___y_2078_);
lean_dec_ref(v___y_2078_);
if (v___x_2081_ == 0)
{
v___y_2036_ = v___y_2073_;
v___y_2037_ = v___y_2074_;
v___y_2038_ = v___y_2075_;
v___y_2039_ = v___y_2076_;
v___y_2040_ = v___y_2077_;
v___y_2041_ = v___y_2079_;
goto v___jp_2035_;
}
else
{
v___y_2065_ = v___y_2073_;
v___y_2066_ = v___y_2074_;
v___y_2067_ = v___y_2075_;
v___y_2068_ = v___y_2076_;
v___y_2069_ = v___y_2077_;
v___y_2070_ = v___y_2079_;
v___y_2071_ = v___x_1917_;
goto v___jp_2064_;
}
}
}
v___jp_2082_:
{
lean_object* v___x_2090_; 
lean_inc_ref(v___x_1961_);
v___x_2090_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1961_, v___y_2085_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; uint8_t v___x_2092_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2090_, 1);
v___x_2092_ = l_Lean_Expr_hasMVar(v_a_2091_);
if (v___x_2092_ == 0)
{
v___y_2073_ = v___y_2083_;
v___y_2074_ = v___y_2084_;
v___y_2075_ = v___y_2085_;
v___y_2076_ = v___y_2086_;
v___y_2077_ = v___y_2087_;
v___y_2078_ = v_a_2091_;
v___y_2079_ = v___y_2088_;
v___y_2080_ = v___y_2089_;
goto v___jp_2072_;
}
else
{
v___y_2073_ = v___y_2083_;
v___y_2074_ = v___y_2084_;
v___y_2075_ = v___y_2085_;
v___y_2076_ = v___y_2086_;
v___y_2077_ = v___y_2087_;
v___y_2078_ = v_a_2091_;
v___y_2079_ = v___y_2088_;
v___y_2080_ = v___x_1917_;
goto v___jp_2072_;
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2093_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2090_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2090_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
v___jp_2101_:
{
if (v___y_2108_ == 0)
{
v___y_1963_ = v___y_2103_;
v___y_1964_ = v___y_2106_;
v___y_1965_ = v___y_2105_;
v___y_1966_ = v___y_2104_;
v___y_1967_ = v___y_2107_;
v___y_1968_ = v___y_2102_;
goto v___jp_1962_;
}
else
{
v___y_2083_ = v___y_2102_;
v___y_2084_ = v___y_2103_;
v___y_2085_ = v___y_2104_;
v___y_2086_ = v___y_2105_;
v___y_2087_ = v___y_2106_;
v___y_2088_ = v___y_2107_;
v___y_2089_ = v___y_2108_;
goto v___jp_2082_;
}
}
v___jp_2109_:
{
uint8_t v_useDecide_2116_; 
v_useDecide_2116_ = lean_ctor_get_uint8(v_config_1812_, sizeof(void*)*1);
if (v_useDecide_2116_ == 0)
{
v___y_2102_ = v___y_2115_;
v___y_2103_ = v_isHEq_2111_;
v___y_2104_ = v___y_2113_;
v___y_2105_ = v___y_2112_;
v___y_2106_ = v___y_2110_;
v___y_2107_ = v___y_2114_;
v___y_2108_ = v___x_1917_;
goto v___jp_2101_;
}
else
{
uint8_t v___x_2117_; 
v___x_2117_ = l_Lean_Expr_hasFVar(v___x_1961_);
if (v___x_2117_ == 0)
{
v___y_2083_ = v___y_2115_;
v___y_2084_ = v_isHEq_2111_;
v___y_2085_ = v___y_2113_;
v___y_2086_ = v___y_2112_;
v___y_2087_ = v___y_2110_;
v___y_2088_ = v___y_2114_;
v___y_2089_ = v_useDecide_2116_;
goto v___jp_2082_;
}
else
{
v___y_2102_ = v___y_2115_;
v___y_2103_ = v_isHEq_2111_;
v___y_2104_ = v___y_2113_;
v___y_2105_ = v___y_2112_;
v___y_2106_ = v___y_2110_;
v___y_2107_ = v___y_2114_;
v___y_2108_ = v___x_1917_;
goto v___jp_2101_;
}
}
}
v___jp_2118_:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lean_Meta_isExprDefEq(v___y_2121_, v___y_2122_, v___y_2124_, v___y_2123_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; uint8_t v___x_2128_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 1);
v___x_2128_ = lean_unbox(v_a_2127_);
lean_dec(v_a_2127_);
if (v___x_2128_ == 0)
{
v___y_2110_ = v___y_2125_;
v_isHEq_2111_ = v___x_1823_;
v___y_2112_ = v___y_2124_;
v___y_2113_ = v___y_2123_;
v___y_2114_ = v___y_2119_;
v___y_2115_ = v___y_2120_;
goto v___jp_2109_;
}
else
{
lean_object* v___x_2129_; 
lean_dec_ref(v___x_1961_);
lean_dec_ref(v_config_1812_);
lean_inc(v_mvarId_1813_);
v___x_2129_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_2124_, v___y_2123_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2130_);
lean_dec_ref_known(v___x_2129_, 1);
v___x_2131_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_2132_ = l_Lean_Meta_mkEqOfHEq(v___x_2131_, v___x_1823_, v___y_2124_, v___y_2123_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v___x_2134_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2132_, 1);
v___x_2134_ = l_Lean_Meta_mkNoConfusion(v_a_2130_, v_a_2133_, v___y_2124_, v___y_2123_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_2135_, v___y_2123_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
lean_dec_ref_known(v___x_2136_, 1);
v___x_2137_ = lean_box(v___x_1823_);
v___x_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v___x_1848_);
v_a_1830_ = v___x_2139_;
goto v___jp_1829_;
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_2140_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2136_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2136_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2148_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_2134_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2134_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v_a_2130_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2156_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2132_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2132_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2164_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2129_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2129_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2172_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2126_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2126_);
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
v___jp_2180_:
{
lean_object* v___x_2186_; 
lean_inc_ref(v___x_1961_);
v___x_2186_ = l_Lean_Meta_matchHEq_x3f(v___x_1961_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
if (lean_obj_tag(v_a_2187_) == 1)
{
lean_object* v_val_2188_; lean_object* v_snd_2189_; lean_object* v_snd_2190_; lean_object* v_fst_2191_; lean_object* v_fst_2192_; lean_object* v_fst_2193_; lean_object* v_snd_2194_; lean_object* v___x_2195_; 
v_val_2188_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_val_2188_);
lean_dec_ref_known(v_a_2187_, 1);
v_snd_2189_ = lean_ctor_get(v_val_2188_, 1);
lean_inc(v_snd_2189_);
v_snd_2190_ = lean_ctor_get(v_snd_2189_, 1);
lean_inc(v_snd_2190_);
v_fst_2191_ = lean_ctor_get(v_val_2188_, 0);
lean_inc(v_fst_2191_);
lean_dec(v_val_2188_);
v_fst_2192_ = lean_ctor_get(v_snd_2189_, 0);
lean_inc(v_fst_2192_);
lean_dec(v_snd_2189_);
v_fst_2193_ = lean_ctor_get(v_snd_2190_, 0);
lean_inc(v_fst_2193_);
v_snd_2194_ = lean_ctor_get(v_snd_2190_, 1);
lean_inc(v_snd_2194_);
lean_dec(v_snd_2190_);
v___x_2195_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2192_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2195_, 1);
if (lean_obj_tag(v_a_2196_) == 1)
{
lean_object* v_val_2197_; lean_object* v___x_2198_; 
v_val_2197_ = lean_ctor_get(v_a_2196_, 0);
lean_inc(v_val_2197_);
lean_dec_ref_known(v_a_2196_, 1);
v___x_2198_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2194_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
if (lean_obj_tag(v_a_2199_) == 1)
{
lean_object* v_toConstantVal_2200_; lean_object* v_val_2201_; lean_object* v_toConstantVal_2202_; lean_object* v_name_2203_; lean_object* v_name_2204_; uint8_t v___x_2205_; 
v_toConstantVal_2200_ = lean_ctor_get(v_val_2197_, 0);
lean_inc_ref(v_toConstantVal_2200_);
lean_dec(v_val_2197_);
v_val_2201_ = lean_ctor_get(v_a_2199_, 0);
lean_inc(v_val_2201_);
lean_dec_ref_known(v_a_2199_, 1);
v_toConstantVal_2202_ = lean_ctor_get(v_val_2201_, 0);
lean_inc_ref(v_toConstantVal_2202_);
lean_dec(v_val_2201_);
v_name_2203_ = lean_ctor_get(v_toConstantVal_2200_, 0);
lean_inc(v_name_2203_);
lean_dec_ref(v_toConstantVal_2200_);
v_name_2204_ = lean_ctor_get(v_toConstantVal_2202_, 0);
lean_inc(v_name_2204_);
lean_dec_ref(v_toConstantVal_2202_);
v___x_2205_ = lean_name_eq(v_name_2203_, v_name_2204_);
lean_dec(v_name_2204_);
lean_dec(v_name_2203_);
if (v___x_2205_ == 0)
{
v___y_2119_ = v___y_2184_;
v___y_2120_ = v___y_2185_;
v___y_2121_ = v_fst_2191_;
v___y_2122_ = v_fst_2193_;
v___y_2123_ = v___y_2183_;
v___y_2124_ = v___y_2182_;
v___y_2125_ = v_isEq_2181_;
goto v___jp_2118_;
}
else
{
if (v___x_1917_ == 0)
{
lean_dec(v_fst_2193_);
lean_dec(v_fst_2191_);
v___y_2110_ = v_isEq_2181_;
v_isHEq_2111_ = v___x_1823_;
v___y_2112_ = v___y_2182_;
v___y_2113_ = v___y_2183_;
v___y_2114_ = v___y_2184_;
v___y_2115_ = v___y_2185_;
goto v___jp_2109_;
}
else
{
v___y_2119_ = v___y_2184_;
v___y_2120_ = v___y_2185_;
v___y_2121_ = v_fst_2191_;
v___y_2122_ = v_fst_2193_;
v___y_2123_ = v___y_2183_;
v___y_2124_ = v___y_2182_;
v___y_2125_ = v_isEq_2181_;
goto v___jp_2118_;
}
}
}
else
{
lean_dec(v_a_2199_);
lean_dec(v_val_2197_);
lean_dec(v_fst_2193_);
lean_dec(v_fst_2191_);
v___y_2110_ = v_isEq_2181_;
v_isHEq_2111_ = v___x_1823_;
v___y_2112_ = v___y_2182_;
v___y_2113_ = v___y_2183_;
v___y_2114_ = v___y_2184_;
v___y_2115_ = v___y_2185_;
goto v___jp_2109_;
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec(v_val_2197_);
lean_dec(v_fst_2193_);
lean_dec(v_fst_2191_);
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2206_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2198_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2198_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
else
{
lean_dec(v_a_2196_);
lean_dec(v_snd_2194_);
lean_dec(v_fst_2193_);
lean_dec(v_fst_2191_);
v___y_2110_ = v_isEq_2181_;
v_isHEq_2111_ = v___x_1823_;
v___y_2112_ = v___y_2182_;
v___y_2113_ = v___y_2183_;
v___y_2114_ = v___y_2184_;
v___y_2115_ = v___y_2185_;
goto v___jp_2109_;
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec(v_snd_2194_);
lean_dec(v_fst_2193_);
lean_dec(v_fst_2191_);
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2214_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2195_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2195_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
else
{
lean_dec(v_a_2187_);
v___y_2110_ = v_isEq_2181_;
v_isHEq_2111_ = v___x_1917_;
v___y_2112_ = v___y_2182_;
v___y_2113_ = v___y_2183_;
v___y_2114_ = v___y_2184_;
v___y_2115_ = v___y_2185_;
goto v___jp_2109_;
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_dec_ref(v___x_1961_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2222_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2186_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2186_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
v___jp_2230_:
{
lean_object* v___x_2235_; 
lean_inc_ref(v___x_1961_);
v___x_2235_ = l_Lean_Meta_matchEq_x3f(v___x_1961_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
lean_dec_ref_known(v___x_2235_, 1);
if (lean_obj_tag(v_a_2236_) == 1)
{
lean_object* v_val_2237_; lean_object* v_snd_2238_; lean_object* v_fst_2239_; lean_object* v_snd_2240_; lean_object* v___x_2241_; 
v_val_2237_ = lean_ctor_get(v_a_2236_, 0);
lean_inc(v_val_2237_);
lean_dec_ref_known(v_a_2236_, 1);
v_snd_2238_ = lean_ctor_get(v_val_2237_, 1);
lean_inc(v_snd_2238_);
lean_dec(v_val_2237_);
v_fst_2239_ = lean_ctor_get(v_snd_2238_, 0);
lean_inc(v_fst_2239_);
v_snd_2240_ = lean_ctor_get(v_snd_2238_, 1);
lean_inc(v_snd_2240_);
lean_dec(v_snd_2238_);
v___x_2241_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2239_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v___x_2241_, 1);
if (lean_obj_tag(v_a_2242_) == 1)
{
lean_object* v_val_2243_; lean_object* v___x_2244_; 
v_val_2243_ = lean_ctor_get(v_a_2242_, 0);
lean_inc(v_val_2243_);
lean_dec_ref_known(v_a_2242_, 1);
v___x_2244_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2240_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
if (lean_obj_tag(v_a_2245_) == 1)
{
lean_object* v_toConstantVal_2246_; lean_object* v_val_2247_; lean_object* v_toConstantVal_2248_; lean_object* v_name_2249_; lean_object* v_name_2250_; uint8_t v___x_2251_; 
v_toConstantVal_2246_ = lean_ctor_get(v_val_2243_, 0);
lean_inc_ref(v_toConstantVal_2246_);
lean_dec(v_val_2243_);
v_val_2247_ = lean_ctor_get(v_a_2245_, 0);
lean_inc(v_val_2247_);
lean_dec_ref_known(v_a_2245_, 1);
v_toConstantVal_2248_ = lean_ctor_get(v_val_2247_, 0);
lean_inc_ref(v_toConstantVal_2248_);
lean_dec(v_val_2247_);
v_name_2249_ = lean_ctor_get(v_toConstantVal_2246_, 0);
lean_inc(v_name_2249_);
lean_dec_ref(v_toConstantVal_2246_);
v_name_2250_ = lean_ctor_get(v_toConstantVal_2248_, 0);
lean_inc(v_name_2250_);
lean_dec_ref(v_toConstantVal_2248_);
v___x_2251_ = lean_name_eq(v_name_2249_, v_name_2250_);
lean_dec(v_name_2250_);
lean_dec(v_name_2249_);
if (v___x_2251_ == 0)
{
lean_dec_ref(v___x_1961_);
lean_dec_ref(v_config_1812_);
v___y_1850_ = v___y_2234_;
v___y_1851_ = v___y_2233_;
v___y_1852_ = v___y_2232_;
v___y_1853_ = v___y_2231_;
goto v___jp_1849_;
}
else
{
if (v___x_1917_ == 0)
{
lean_del_object(v___x_1846_);
v_isEq_2181_ = v___x_1823_;
v___y_2182_ = v___y_2231_;
v___y_2183_ = v___y_2232_;
v___y_2184_ = v___y_2233_;
v___y_2185_ = v___y_2234_;
goto v___jp_2180_;
}
else
{
lean_dec_ref(v___x_1961_);
lean_dec_ref(v_config_1812_);
v___y_1850_ = v___y_2234_;
v___y_1851_ = v___y_2233_;
v___y_1852_ = v___y_2232_;
v___y_1853_ = v___y_2231_;
goto v___jp_1849_;
}
}
}
else
{
lean_dec(v_a_2245_);
lean_dec(v_val_2243_);
lean_del_object(v___x_1846_);
v_isEq_2181_ = v___x_1823_;
v___y_2182_ = v___y_2231_;
v___y_2183_ = v___y_2232_;
v___y_2184_ = v___y_2233_;
v___y_2185_ = v___y_2234_;
goto v___jp_2180_;
}
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
lean_dec(v_val_2243_);
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2252_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v___x_2244_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_dec(v___x_2244_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
else
{
lean_dec(v_a_2242_);
lean_dec(v_snd_2240_);
lean_del_object(v___x_1846_);
v_isEq_2181_ = v___x_1823_;
v___y_2182_ = v___y_2231_;
v___y_2183_ = v___y_2232_;
v___y_2184_ = v___y_2233_;
v___y_2185_ = v___y_2234_;
goto v___jp_2180_;
}
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
lean_dec(v_snd_2240_);
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2260_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2241_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2241_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
lean_dec(v_a_2236_);
lean_del_object(v___x_1846_);
v_isEq_2181_ = v___x_1917_;
v___y_2182_ = v___y_2231_;
v___y_2183_ = v___y_2232_;
v___y_2184_ = v___y_2233_;
v___y_2185_ = v___y_2234_;
goto v___jp_2180_;
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2268_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2235_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2235_);
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
}
v___jp_2276_:
{
lean_object* v___x_2281_; 
lean_inc_ref(v___x_1961_);
v___x_2281_ = l_Lean_refutableHasNotBit_x3f(v___x_1961_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
if (lean_obj_tag(v_a_2282_) == 1)
{
lean_object* v_val_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec_ref(v_config_1812_);
v_val_2283_ = lean_ctor_get(v_a_2282_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_a_2282_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2285_ = v_a_2282_;
v_isShared_2286_ = v_isSharedCheck_2322_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_val_2283_);
lean_dec(v_a_2282_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2322_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2287_; 
lean_inc(v_mvarId_1813_);
v___x_2287_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v___x_2289_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_2290_ = l_Lean_Meta_mkAbsurd(v_a_2288_, v_val_2283_, v___x_2289_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2292_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v___x_2290_, 1);
v___x_2292_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_2291_, v___y_2278_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v___x_2293_; lean_object* v___x_2295_; 
lean_dec_ref_known(v___x_2292_, 1);
v___x_2293_ = lean_box(v___x_1823_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 0, v___x_2293_);
v___x_2295_ = v___x_2285_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_ctor_set(v___x_2296_, 1, v___x_1848_);
v_a_1830_ = v___x_2296_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_del_object(v___x_2285_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_2298_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2292_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2292_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_del_object(v___x_2285_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2306_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2290_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2290_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_del_object(v___x_2285_);
lean_dec(v_val_2283_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2314_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2287_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2287_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
else
{
lean_object* v___x_2323_; 
lean_dec(v_a_2282_);
lean_inc_ref(v___x_1961_);
v___x_2323_ = l_Lean_Meta_matchNe_x3f(v___x_1961_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
if (lean_obj_tag(v_a_2324_) == 1)
{
lean_object* v_val_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2394_; 
v_val_2325_ = lean_ctor_get(v_a_2324_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v_a_2324_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2327_ = v_a_2324_;
v_isShared_2328_ = v_isSharedCheck_2394_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_val_2325_);
lean_dec(v_a_2324_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2394_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_snd_2329_; lean_object* v_fst_2330_; lean_object* v_snd_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2393_; 
v_snd_2329_ = lean_ctor_get(v_val_2325_, 1);
lean_inc(v_snd_2329_);
lean_dec(v_val_2325_);
v_fst_2330_ = lean_ctor_get(v_snd_2329_, 0);
v_snd_2331_ = lean_ctor_get(v_snd_2329_, 1);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_snd_2329_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2333_ = v_snd_2329_;
v_isShared_2334_ = v_isSharedCheck_2393_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_snd_2331_);
lean_inc(v_fst_2330_);
lean_dec(v_snd_2329_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2393_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; 
lean_inc(v_fst_2330_);
v___x_2335_ = l_Lean_Meta_isExprDefEq(v_fst_2330_, v_snd_2331_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; uint8_t v___x_2337_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v___x_2337_ = lean_unbox(v_a_2336_);
lean_dec(v_a_2336_);
if (v___x_2337_ == 0)
{
lean_del_object(v___x_2333_);
lean_dec(v_fst_2330_);
lean_del_object(v___x_2327_);
v___y_2231_ = v___y_2277_;
v___y_2232_ = v___y_2278_;
v___y_2233_ = v___y_2279_;
v___y_2234_ = v___y_2280_;
goto v___jp_2230_;
}
else
{
lean_object* v___x_2338_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec_ref(v_config_1812_);
lean_inc(v_mvarId_1813_);
v___x_2338_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2340_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2338_, 1);
v___x_2340_ = l_Lean_Meta_mkEqRefl(v_fst_2330_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
v___x_2342_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_2343_ = l_Lean_Meta_mkAbsurd(v_a_2339_, v_a_2341_, v___x_2342_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2345_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
v___x_2345_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_2344_, v___y_2278_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
lean_dec_ref_known(v___x_2345_, 1);
v___x_2346_ = lean_box(v___x_1823_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 0, v___x_2346_);
v___x_2348_ = v___x_2327_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 1, v___x_1848_);
lean_ctor_set(v___x_2333_, 0, v___x_2348_);
v___x_2350_ = v___x_2333_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v___x_1848_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
v_a_1830_ = v___x_2350_;
goto v___jp_1829_;
}
}
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2360_; 
lean_del_object(v___x_2333_);
lean_del_object(v___x_2327_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_2353_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2355_ = v___x_2345_;
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2345_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2358_; 
if (v_isShared_2356_ == 0)
{
v___x_2358_ = v___x_2355_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_a_2353_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_del_object(v___x_2333_);
lean_del_object(v___x_2327_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2361_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2343_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2343_);
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
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_dec(v_a_2339_);
lean_del_object(v___x_2333_);
lean_del_object(v___x_2327_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2369_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2340_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2340_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2384_; 
lean_del_object(v___x_2333_);
lean_dec(v_fst_2330_);
lean_del_object(v___x_2327_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_2377_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2379_ = v___x_2338_;
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2338_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
}
else
{
lean_object* v_a_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2392_; 
lean_del_object(v___x_2333_);
lean_dec(v_fst_2330_);
lean_del_object(v___x_2327_);
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2385_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2387_ = v___x_2335_;
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_a_2385_);
lean_dec(v___x_2335_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2392_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2388_ == 0)
{
v___x_2390_ = v___x_2387_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v_a_2385_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2324_);
v___y_2231_ = v___y_2277_;
v___y_2232_ = v___y_2278_;
v___y_2233_ = v___y_2279_;
v___y_2234_ = v___y_2280_;
goto v___jp_2230_;
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2395_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2323_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2323_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec_ref(v___x_1961_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_2403_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2281_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2281_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
}
else
{
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_1838_ = v___x_1889_;
goto v___jp_1837_;
}
v___jp_1849_:
{
lean_object* v___x_1854_; 
lean_inc(v_mvarId_1813_);
v___x_1854_ = l_Lean_MVarId_getType(v_mvarId_1813_, v___y_1853_, v___y_1852_, v___y_1851_, v___y_1850_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1855_);
lean_dec_ref_known(v___x_1854_, 1);
v___x_1856_ = l_Lean_LocalDecl_toExpr(v_val_1844_);
v___x_1857_ = l_Lean_Meta_mkNoConfusion(v_a_1855_, v___x_1856_, v___y_1853_, v___y_1852_, v___y_1851_, v___y_1850_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1859_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v___x_1859_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1813_, v_a_1858_, v___y_1852_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
lean_dec_ref_known(v___x_1859_, 1);
v___x_1860_ = lean_box(v___x_1823_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1860_);
v___x_1862_ = v___x_1846_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1862_);
lean_ctor_set(v___x_1863_, 1, v___x_1848_);
v_a_1830_ = v___x_1863_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_del_object(v___x_1846_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_1865_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1859_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1859_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_del_object(v___x_1846_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_1873_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1857_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1857_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_del_object(v___x_1846_);
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
v_a_1881_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1854_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1854_);
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
v___jp_1890_:
{
lean_object* v_searchFuel_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v_searchFuel_1895_ = lean_ctor_get(v_config_1812_, 0);
v___x_1896_ = l_Lean_LocalDecl_fvarId(v_val_1844_);
lean_dec(v_val_1844_);
lean_inc(v_searchFuel_1895_);
lean_inc(v_mvarId_1813_);
v___x_1897_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1813_, v___x_1896_, v_searchFuel_1895_, v___y_1893_, v___y_1891_, v___y_1894_, v___y_1892_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; uint8_t v___x_1899_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
lean_inc(v_a_1898_);
lean_dec_ref_known(v___x_1897_, 1);
v___x_1899_ = lean_unbox(v_a_1898_);
lean_dec(v_a_1898_);
if (v___x_1899_ == 0)
{
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_1838_ = v___x_1889_;
goto v___jp_1837_;
}
else
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v___x_1900_ = lean_box(v___x_1823_);
v___x_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
lean_ctor_set(v___x_1902_, 1, v___x_1848_);
v_a_1830_ = v___x_1902_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_1903_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1897_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1897_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
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
v___jp_1911_:
{
if (v___y_1916_ == 0)
{
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
v_a_1838_ = v___x_1889_;
goto v___jp_1837_;
}
else
{
v___y_1891_ = v___y_1912_;
v___y_1892_ = v___y_1913_;
v___y_1893_ = v___y_1914_;
v___y_1894_ = v___y_1915_;
goto v___jp_1890_;
}
}
v___jp_1918_:
{
if (v___y_1920_ == 0)
{
v___y_1891_ = v___y_1919_;
v___y_1892_ = v___y_1921_;
v___y_1893_ = v___y_1922_;
v___y_1894_ = v___y_1923_;
goto v___jp_1890_;
}
else
{
v___y_1912_ = v___y_1919_;
v___y_1913_ = v___y_1921_;
v___y_1914_ = v___y_1922_;
v___y_1915_ = v___y_1923_;
v___y_1916_ = v___x_1917_;
goto v___jp_1911_;
}
}
v___jp_1924_:
{
if (v___y_1930_ == 0)
{
v___y_1912_ = v___y_1925_;
v___y_1913_ = v___y_1927_;
v___y_1914_ = v___y_1928_;
v___y_1915_ = v___y_1929_;
v___y_1916_ = v___x_1917_;
goto v___jp_1911_;
}
else
{
v___y_1919_ = v___y_1925_;
v___y_1920_ = v___y_1926_;
v___y_1921_ = v___y_1927_;
v___y_1922_ = v___y_1928_;
v___y_1923_ = v___y_1929_;
goto v___jp_1918_;
}
}
v___jp_1931_:
{
uint8_t v_emptyType_1938_; 
v_emptyType_1938_ = lean_ctor_get_uint8(v_config_1812_, sizeof(void*)*1 + 1);
if (v_emptyType_1938_ == 0)
{
v___y_1925_ = v___y_1935_;
v___y_1926_ = v___y_1932_;
v___y_1927_ = v___y_1937_;
v___y_1928_ = v___y_1934_;
v___y_1929_ = v___y_1936_;
v___y_1930_ = v___x_1917_;
goto v___jp_1924_;
}
else
{
if (v___y_1933_ == 0)
{
v___y_1919_ = v___y_1935_;
v___y_1920_ = v___y_1932_;
v___y_1921_ = v___y_1937_;
v___y_1922_ = v___y_1934_;
v___y_1923_ = v___y_1936_;
goto v___jp_1918_;
}
else
{
v___y_1925_ = v___y_1935_;
v___y_1926_ = v___y_1932_;
v___y_1927_ = v___y_1937_;
v___y_1928_ = v___y_1934_;
v___y_1929_ = v___y_1936_;
v___y_1930_ = v___x_1917_;
goto v___jp_1924_;
}
}
}
v___jp_1939_:
{
if (v___y_1946_ == 0)
{
v___y_1932_ = v___y_1940_;
v___y_1933_ = v___y_1943_;
v___y_1934_ = v___y_1941_;
v___y_1935_ = v___y_1942_;
v___y_1936_ = v___y_1945_;
v___y_1937_ = v___y_1944_;
goto v___jp_1931_;
}
else
{
lean_object* v___x_1947_; 
lean_inc(v_val_1844_);
lean_inc(v_mvarId_1813_);
v___x_1947_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1813_, v_val_1844_, v___y_1941_, v___y_1942_, v___y_1945_, v___y_1944_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; uint8_t v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v___x_1949_ = lean_unbox(v_a_1948_);
lean_dec(v_a_1948_);
if (v___x_1949_ == 0)
{
v___y_1932_ = v___y_1940_;
v___y_1933_ = v___y_1943_;
v___y_1934_ = v___y_1941_;
v___y_1935_ = v___y_1942_;
v___y_1936_ = v___y_1945_;
v___y_1937_ = v___y_1944_;
goto v___jp_1931_;
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
lean_dec(v_val_1844_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v___x_1950_ = lean_box(v___x_1823_);
v___x_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v___x_1848_);
v_a_1830_ = v___x_1952_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec(v_val_1844_);
lean_del_object(v___x_1827_);
lean_dec(v_snd_1825_);
lean_dec(v_mvarId_1813_);
lean_dec_ref(v_config_1812_);
v_a_1953_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1947_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1947_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
}
}
}
v___jp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1831_, 0, v_a_1830_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 0, v___x_1831_);
v___x_1833_ = v___x_1827_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1831_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_snd_1825_);
v___x_1833_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
return v___x_1834_;
}
}
v___jp_1837_:
{
lean_object* v___x_1839_; size_t v___x_1840_; size_t v___x_1841_; 
v___x_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1836_);
lean_ctor_set(v___x_1839_, 1, v_a_1838_);
v___x_1840_ = ((size_t)1ULL);
v___x_1841_ = lean_usize_add(v_i_1816_, v___x_1840_);
v_i_1816_ = v___x_1841_;
v_b_1817_ = v___x_1839_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object* v_config_2477_, lean_object* v_mvarId_2478_, lean_object* v_as_2479_, lean_object* v_sz_2480_, lean_object* v_i_2481_, lean_object* v_b_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
size_t v_sz_boxed_2488_; size_t v_i_boxed_2489_; lean_object* v_res_2490_; 
v_sz_boxed_2488_ = lean_unbox_usize(v_sz_2480_);
lean_dec(v_sz_2480_);
v_i_boxed_2489_ = lean_unbox_usize(v_i_2481_);
lean_dec(v_i_2481_);
v_res_2490_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2477_, v_mvarId_2478_, v_as_2479_, v_sz_boxed_2488_, v_i_boxed_2489_, v_b_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec_ref(v_as_2479_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object* v_config_2491_, lean_object* v_mvarId_2492_, lean_object* v_as_2493_, size_t v_sz_2494_, size_t v_i_2495_, lean_object* v_b_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
uint8_t v___x_2502_; 
v___x_2502_ = lean_usize_dec_lt(v_i_2495_, v_sz_2494_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; 
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_b_2496_);
return v___x_2503_;
}
else
{
lean_object* v_snd_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_3154_; 
v_snd_2504_ = lean_ctor_get(v_b_2496_, 1);
v_isSharedCheck_3154_ = !lean_is_exclusive(v_b_2496_);
if (v_isSharedCheck_3154_ == 0)
{
lean_object* v_unused_3155_; 
v_unused_3155_ = lean_ctor_get(v_b_2496_, 0);
lean_dec(v_unused_3155_);
v___x_2506_ = v_b_2496_;
v_isShared_2507_ = v_isSharedCheck_3154_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_snd_2504_);
lean_dec(v_b_2496_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_3154_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v_a_2509_; lean_object* v___x_2515_; lean_object* v_a_2517_; lean_object* v_a_2522_; 
v___x_2515_ = lean_box(0);
v_a_2522_ = lean_array_uget(v_as_2493_, v_i_2495_);
if (lean_obj_tag(v_a_2522_) == 0)
{
lean_del_object(v___x_2506_);
v_a_2517_ = v_snd_2504_;
goto v___jp_2516_;
}
else
{
lean_object* v_val_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_3153_; 
v_val_2523_ = lean_ctor_get(v_a_2522_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_a_2522_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_2525_ = v_a_2522_;
v_isShared_2526_ = v_isSharedCheck_3153_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_val_2523_);
lean_dec(v_a_2522_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_3153_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2527_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___x_2568_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; uint8_t v___y_2595_; uint8_t v___x_2596_; lean_object* v___y_2598_; lean_object* v___y_2599_; uint8_t v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2604_; lean_object* v___y_2605_; uint8_t v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; uint8_t v___y_2609_; uint8_t v___y_2611_; uint8_t v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v___y_2616_; uint8_t v___y_2619_; uint8_t v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; uint8_t v___y_2625_; 
v___x_2527_ = lean_box(0);
v___x_2568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2596_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2523_);
if (v___x_2596_ == 0)
{
lean_object* v___x_2640_; uint8_t v___y_2642_; uint8_t v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2651_; uint8_t v___y_2652_; uint8_t v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; uint8_t v___y_2658_; uint8_t v___y_2661_; uint8_t v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v_a_2667_; uint8_t v___y_2671_; uint8_t v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; uint8_t v___y_2715_; uint8_t v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; uint8_t v___y_2744_; uint8_t v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; uint8_t v___y_2750_; lean_object* v___y_2752_; uint8_t v___y_2753_; uint8_t v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; uint8_t v___y_2759_; uint8_t v___y_2762_; uint8_t v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; uint8_t v___y_2768_; uint8_t v___y_2781_; uint8_t v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2786_; uint8_t v___y_2787_; uint8_t v___y_2789_; uint8_t v_isHEq_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; uint8_t v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; uint8_t v_isEq_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2956_; lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___x_3090_; 
v___x_2640_ = l_Lean_LocalDecl_type(v_val_2523_);
lean_inc_ref(v___x_2640_);
v___x_3090_ = l_Lean_Meta_matchNot_x3f(v___x_2640_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3090_, 1);
if (lean_obj_tag(v_a_3091_) == 1)
{
lean_object* v_val_3092_; lean_object* v___x_3093_; 
v_val_3092_ = lean_ctor_get(v_a_3091_, 0);
lean_inc(v_val_3092_);
lean_dec_ref_known(v_a_3091_, 1);
v___x_3093_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3092_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref_known(v___x_3093_, 1);
if (lean_obj_tag(v_a_3094_) == 1)
{
lean_object* v_val_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec_ref(v_config_2491_);
v_val_3095_ = lean_ctor_get(v_a_3094_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_a_3094_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3097_ = v_a_3094_;
v_isShared_3098_ = v_isSharedCheck_3136_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_val_3095_);
lean_dec(v_a_3094_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3136_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3099_; 
lean_inc(v_mvarId_2492_);
v___x_3099_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3101_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_3102_ = l_Lean_mkFVar(v_val_3095_);
v___x_3103_ = l_Lean_Expr_app___override(v___x_3101_, v___x_3102_);
v___x_3104_ = l_Lean_Meta_mkFalseElim(v_a_3100_, v___x_3103_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3106_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3106_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_3105_, v___y_2498_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v___x_3107_; lean_object* v___x_3109_; 
lean_dec_ref_known(v___x_3106_, 1);
v___x_3107_ = lean_box(v___x_2502_);
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 0, v___x_3107_);
v___x_3109_ = v___x_3097_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3107_);
v___x_3109_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3110_; 
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_2527_);
v_a_2509_ = v___x_3110_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_del_object(v___x_3097_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_3112_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3106_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3106_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_del_object(v___x_3097_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_3120_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3104_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3104_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_del_object(v___x_3097_);
lean_dec(v_val_3095_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_3128_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3099_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3099_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
else
{
lean_dec(v_a_3094_);
v___y_2956_ = v___y_2497_;
v___y_2957_ = v___y_2498_;
v___y_2958_ = v___y_2499_;
v___y_2959_ = v___y_2500_;
goto v___jp_2955_;
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_3137_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3093_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3093_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
else
{
lean_dec(v_a_3091_);
v___y_2956_ = v___y_2497_;
v___y_2957_ = v___y_2498_;
v___y_2958_ = v___y_2499_;
v___y_2959_ = v___y_2500_;
goto v___jp_2955_;
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_3145_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3090_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3090_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
v___jp_2641_:
{
uint8_t v_genDiseq_2648_; 
v_genDiseq_2648_ = lean_ctor_get_uint8(v_config_2491_, sizeof(void*)*1 + 2);
if (v_genDiseq_2648_ == 0)
{
lean_dec_ref(v___x_2640_);
v___y_2619_ = v___y_2642_;
v___y_2620_ = v___y_2643_;
v___y_2621_ = v___y_2647_;
v___y_2622_ = v___y_2644_;
v___y_2623_ = v___y_2645_;
v___y_2624_ = v___y_2646_;
v___y_2625_ = v___x_2596_;
goto v___jp_2618_;
}
else
{
uint8_t v___x_2649_; 
v___x_2649_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2640_);
v___y_2619_ = v___y_2642_;
v___y_2620_ = v___y_2643_;
v___y_2621_ = v___y_2647_;
v___y_2622_ = v___y_2644_;
v___y_2623_ = v___y_2645_;
v___y_2624_ = v___y_2646_;
v___y_2625_ = v___x_2649_;
goto v___jp_2618_;
}
}
v___jp_2650_:
{
if (v___y_2658_ == 0)
{
lean_dec_ref(v___y_2651_);
v___y_2642_ = v___y_2652_;
v___y_2643_ = v___y_2653_;
v___y_2644_ = v___y_2655_;
v___y_2645_ = v___y_2654_;
v___y_2646_ = v___y_2656_;
v___y_2647_ = v___y_2657_;
goto v___jp_2641_;
}
else
{
lean_object* v___x_2659_; 
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v___x_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2659_, 0, v___y_2651_);
return v___x_2659_;
}
}
v___jp_2660_:
{
uint8_t v___x_2668_; 
v___x_2668_ = l_Lean_Exception_isInterrupt(v_a_2667_);
if (v___x_2668_ == 0)
{
uint8_t v___x_2669_; 
lean_inc_ref(v_a_2667_);
v___x_2669_ = l_Lean_Exception_isRuntime(v_a_2667_);
v___y_2651_ = v_a_2667_;
v___y_2652_ = v___y_2661_;
v___y_2653_ = v___y_2662_;
v___y_2654_ = v___y_2664_;
v___y_2655_ = v___y_2663_;
v___y_2656_ = v___y_2665_;
v___y_2657_ = v___y_2666_;
v___y_2658_ = v___x_2669_;
goto v___jp_2650_;
}
else
{
v___y_2651_ = v_a_2667_;
v___y_2652_ = v___y_2661_;
v___y_2653_ = v___y_2662_;
v___y_2654_ = v___y_2664_;
v___y_2655_ = v___y_2663_;
v___y_2656_ = v___y_2665_;
v___y_2657_ = v___y_2666_;
v___y_2658_ = v___x_2668_;
goto v___jp_2650_;
}
}
v___jp_2670_:
{
if (lean_obj_tag(v___y_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v_a_2679_ = lean_ctor_get(v___y_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___y_2678_, 1);
v___x_2680_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2681_ = l_Lean_Expr_isConstOf(v_a_2679_, v___x_2680_);
lean_dec(v_a_2679_);
if (v___x_2681_ == 0)
{
lean_dec_ref(v___y_2675_);
v___y_2642_ = v___y_2671_;
v___y_2643_ = v___y_2672_;
v___y_2644_ = v___y_2674_;
v___y_2645_ = v___y_2673_;
v___y_2646_ = v___y_2676_;
v___y_2647_ = v___y_2677_;
goto v___jp_2641_;
}
else
{
lean_object* v___x_2682_; 
lean_inc_ref(v___y_2675_);
v___x_2682_ = l_Lean_Meta_mkEqRefl(v___y_2675_, v___y_2674_, v___y_2673_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; lean_object* v_dummy_2685_; lean_object* v_nargs_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2685_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
v_nargs_2686_ = l_Lean_Expr_getAppNumArgs(v___y_2675_);
lean_inc(v_nargs_2686_);
v___x_2687_ = lean_mk_array(v_nargs_2686_, v_dummy_2685_);
v___x_2688_ = lean_unsigned_to_nat(1u);
v___x_2689_ = lean_nat_sub(v_nargs_2686_, v___x_2688_);
lean_dec(v_nargs_2686_);
v___x_2690_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2675_, v___x_2687_, v___x_2689_);
v___x_2691_ = lean_array_push(v___x_2690_, v_a_2683_);
v___x_2692_ = l_Lean_mkAppN(v___x_2684_, v___x_2691_);
lean_dec_ref(v___x_2691_);
lean_inc(v_mvarId_2492_);
v___x_2693_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2674_, v___y_2673_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2693_, 1);
lean_inc(v_val_2523_);
v___x_2695_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_2696_ = l_Lean_Meta_mkAbsurd(v_a_2694_, v___x_2695_, v___x_2692_, v___y_2674_, v___y_2673_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
lean_inc(v_mvarId_2492_);
v___x_2698_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_2697_, v___y_2673_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2707_; 
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2707_ == 0)
{
lean_object* v_unused_2708_; 
v_unused_2708_ = lean_ctor_get(v___x_2698_, 0);
lean_dec(v_unused_2708_);
v___x_2700_ = v___x_2698_;
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
else
{
lean_dec(v___x_2698_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2702_ = lean_box(v___x_2502_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 1);
lean_ctor_set(v___x_2700_, 0, v___x_2702_);
v___x_2704_ = v___x_2700_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
lean_object* v___x_2705_; 
v___x_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
lean_ctor_set(v___x_2705_, 1, v___x_2527_);
v_a_2509_ = v___x_2705_;
goto v___jp_2508_;
}
}
}
else
{
lean_object* v_a_2709_; 
v_a_2709_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2698_, 1);
v___y_2661_ = v___y_2671_;
v___y_2662_ = v___y_2672_;
v___y_2663_ = v___y_2674_;
v___y_2664_ = v___y_2673_;
v___y_2665_ = v___y_2676_;
v___y_2666_ = v___y_2677_;
v_a_2667_ = v_a_2709_;
goto v___jp_2660_;
}
}
else
{
lean_object* v_a_2710_; 
v_a_2710_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2710_);
lean_dec_ref_known(v___x_2696_, 1);
v___y_2661_ = v___y_2671_;
v___y_2662_ = v___y_2672_;
v___y_2663_ = v___y_2674_;
v___y_2664_ = v___y_2673_;
v___y_2665_ = v___y_2676_;
v___y_2666_ = v___y_2677_;
v_a_2667_ = v_a_2710_;
goto v___jp_2660_;
}
}
else
{
lean_object* v_a_2711_; 
lean_dec_ref(v___x_2692_);
v_a_2711_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2711_);
lean_dec_ref_known(v___x_2693_, 1);
v___y_2661_ = v___y_2671_;
v___y_2662_ = v___y_2672_;
v___y_2663_ = v___y_2674_;
v___y_2664_ = v___y_2673_;
v___y_2665_ = v___y_2676_;
v___y_2666_ = v___y_2677_;
v_a_2667_ = v_a_2711_;
goto v___jp_2660_;
}
}
else
{
lean_object* v_a_2712_; 
lean_dec_ref(v___y_2675_);
v_a_2712_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2712_);
lean_dec_ref_known(v___x_2682_, 1);
v___y_2661_ = v___y_2671_;
v___y_2662_ = v___y_2672_;
v___y_2663_ = v___y_2674_;
v___y_2664_ = v___y_2673_;
v___y_2665_ = v___y_2676_;
v___y_2666_ = v___y_2677_;
v_a_2667_ = v_a_2712_;
goto v___jp_2660_;
}
}
}
else
{
lean_object* v_a_2713_; 
lean_dec_ref(v___y_2675_);
v_a_2713_ = lean_ctor_get(v___y_2678_, 0);
lean_inc(v_a_2713_);
lean_dec_ref_known(v___y_2678_, 1);
v___y_2661_ = v___y_2671_;
v___y_2662_ = v___y_2672_;
v___y_2663_ = v___y_2674_;
v___y_2664_ = v___y_2673_;
v___y_2665_ = v___y_2676_;
v___y_2666_ = v___y_2677_;
v_a_2667_ = v_a_2713_;
goto v___jp_2660_;
}
}
v___jp_2714_:
{
lean_object* v___x_2721_; 
lean_inc_ref(v___x_2640_);
v___x_2721_ = l_Lean_Meta_mkDecide(v___x_2640_, v___y_2718_, v___y_2717_, v___y_2719_, v___y_2720_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v_a_2722_; lean_object* v___x_2723_; uint8_t v_transparency_2724_; uint8_t v___x_2725_; uint8_t v___x_2726_; 
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v___x_2721_, 1);
v___x_2723_ = l_Lean_Meta_Context_config(v___y_2718_);
v_transparency_2724_ = lean_ctor_get_uint8(v___x_2723_, 9);
lean_dec_ref(v___x_2723_);
v___x_2725_ = 1;
v___x_2726_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v_keyedConfig_2727_; uint8_t v_trackZetaDelta_2728_; lean_object* v_zetaDeltaSet_2729_; lean_object* v_lctx_2730_; lean_object* v_localInstances_2731_; lean_object* v_defEqCtx_x3f_2732_; lean_object* v_synthPendingDepth_2733_; lean_object* v_customCanUnfoldPredicate_x3f_2734_; uint8_t v_univApprox_2735_; uint8_t v_inTypeClassResolution_2736_; uint8_t v_cacheInferType_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v_keyedConfig_2727_ = lean_ctor_get(v___y_2718_, 0);
v_trackZetaDelta_2728_ = lean_ctor_get_uint8(v___y_2718_, sizeof(void*)*7);
v_zetaDeltaSet_2729_ = lean_ctor_get(v___y_2718_, 1);
v_lctx_2730_ = lean_ctor_get(v___y_2718_, 2);
v_localInstances_2731_ = lean_ctor_get(v___y_2718_, 3);
v_defEqCtx_x3f_2732_ = lean_ctor_get(v___y_2718_, 4);
v_synthPendingDepth_2733_ = lean_ctor_get(v___y_2718_, 5);
v_customCanUnfoldPredicate_x3f_2734_ = lean_ctor_get(v___y_2718_, 6);
v_univApprox_2735_ = lean_ctor_get_uint8(v___y_2718_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2736_ = lean_ctor_get_uint8(v___y_2718_, sizeof(void*)*7 + 2);
v_cacheInferType_2737_ = lean_ctor_get_uint8(v___y_2718_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2727_);
v___x_2738_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2725_, v_keyedConfig_2727_);
lean_inc(v_customCanUnfoldPredicate_x3f_2734_);
lean_inc(v_synthPendingDepth_2733_);
lean_inc(v_defEqCtx_x3f_2732_);
lean_inc_ref(v_localInstances_2731_);
lean_inc_ref(v_lctx_2730_);
lean_inc(v_zetaDeltaSet_2729_);
v___x_2739_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2739_, 0, v___x_2738_);
lean_ctor_set(v___x_2739_, 1, v_zetaDeltaSet_2729_);
lean_ctor_set(v___x_2739_, 2, v_lctx_2730_);
lean_ctor_set(v___x_2739_, 3, v_localInstances_2731_);
lean_ctor_set(v___x_2739_, 4, v_defEqCtx_x3f_2732_);
lean_ctor_set(v___x_2739_, 5, v_synthPendingDepth_2733_);
lean_ctor_set(v___x_2739_, 6, v_customCanUnfoldPredicate_x3f_2734_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*7, v_trackZetaDelta_2728_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*7 + 1, v_univApprox_2735_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2736_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*7 + 3, v_cacheInferType_2737_);
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2717_);
lean_inc(v_a_2722_);
v___x_2740_ = lean_whnf(v_a_2722_, v___x_2739_, v___y_2717_, v___y_2719_, v___y_2720_);
v___y_2671_ = v___y_2715_;
v___y_2672_ = v___y_2716_;
v___y_2673_ = v___y_2717_;
v___y_2674_ = v___y_2718_;
v___y_2675_ = v_a_2722_;
v___y_2676_ = v___y_2719_;
v___y_2677_ = v___y_2720_;
v___y_2678_ = v___x_2740_;
goto v___jp_2670_;
}
else
{
lean_object* v___x_2741_; 
lean_inc(v___y_2720_);
lean_inc_ref(v___y_2719_);
lean_inc(v___y_2717_);
lean_inc_ref(v___y_2718_);
lean_inc(v_a_2722_);
v___x_2741_ = lean_whnf(v_a_2722_, v___y_2718_, v___y_2717_, v___y_2719_, v___y_2720_);
v___y_2671_ = v___y_2715_;
v___y_2672_ = v___y_2716_;
v___y_2673_ = v___y_2717_;
v___y_2674_ = v___y_2718_;
v___y_2675_ = v_a_2722_;
v___y_2676_ = v___y_2719_;
v___y_2677_ = v___y_2720_;
v___y_2678_ = v___x_2741_;
goto v___jp_2670_;
}
}
else
{
lean_object* v_a_2742_; 
v_a_2742_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2742_);
lean_dec_ref_known(v___x_2721_, 1);
v___y_2661_ = v___y_2715_;
v___y_2662_ = v___y_2716_;
v___y_2663_ = v___y_2718_;
v___y_2664_ = v___y_2717_;
v___y_2665_ = v___y_2719_;
v___y_2666_ = v___y_2720_;
v_a_2667_ = v_a_2742_;
goto v___jp_2660_;
}
}
v___jp_2743_:
{
if (v___y_2750_ == 0)
{
v___y_2642_ = v___y_2744_;
v___y_2643_ = v___y_2745_;
v___y_2644_ = v___y_2747_;
v___y_2645_ = v___y_2746_;
v___y_2646_ = v___y_2748_;
v___y_2647_ = v___y_2749_;
goto v___jp_2641_;
}
else
{
v___y_2715_ = v___y_2744_;
v___y_2716_ = v___y_2745_;
v___y_2717_ = v___y_2746_;
v___y_2718_ = v___y_2747_;
v___y_2719_ = v___y_2748_;
v___y_2720_ = v___y_2749_;
goto v___jp_2714_;
}
}
v___jp_2751_:
{
if (v___y_2759_ == 0)
{
lean_dec_ref(v___y_2752_);
v___y_2744_ = v___y_2753_;
v___y_2745_ = v___y_2754_;
v___y_2746_ = v___y_2756_;
v___y_2747_ = v___y_2755_;
v___y_2748_ = v___y_2757_;
v___y_2749_ = v___y_2758_;
v___y_2750_ = v___x_2596_;
goto v___jp_2743_;
}
else
{
uint8_t v___x_2760_; 
v___x_2760_ = l_Lean_Expr_hasFVar(v___y_2752_);
lean_dec_ref(v___y_2752_);
if (v___x_2760_ == 0)
{
v___y_2715_ = v___y_2753_;
v___y_2716_ = v___y_2754_;
v___y_2717_ = v___y_2756_;
v___y_2718_ = v___y_2755_;
v___y_2719_ = v___y_2757_;
v___y_2720_ = v___y_2758_;
goto v___jp_2714_;
}
else
{
v___y_2744_ = v___y_2753_;
v___y_2745_ = v___y_2754_;
v___y_2746_ = v___y_2756_;
v___y_2747_ = v___y_2755_;
v___y_2748_ = v___y_2757_;
v___y_2749_ = v___y_2758_;
v___y_2750_ = v___x_2596_;
goto v___jp_2743_;
}
}
}
v___jp_2761_:
{
lean_object* v___x_2769_; 
lean_inc_ref(v___x_2640_);
v___x_2769_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2640_, v___y_2765_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; uint8_t v___x_2771_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2771_ = l_Lean_Expr_hasMVar(v_a_2770_);
if (v___x_2771_ == 0)
{
v___y_2752_ = v_a_2770_;
v___y_2753_ = v___y_2762_;
v___y_2754_ = v___y_2763_;
v___y_2755_ = v___y_2764_;
v___y_2756_ = v___y_2765_;
v___y_2757_ = v___y_2766_;
v___y_2758_ = v___y_2767_;
v___y_2759_ = v___y_2768_;
goto v___jp_2751_;
}
else
{
v___y_2752_ = v_a_2770_;
v___y_2753_ = v___y_2762_;
v___y_2754_ = v___y_2763_;
v___y_2755_ = v___y_2764_;
v___y_2756_ = v___y_2765_;
v___y_2757_ = v___y_2766_;
v___y_2758_ = v___y_2767_;
v___y_2759_ = v___x_2596_;
goto v___jp_2751_;
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2772_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2769_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2769_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
v___jp_2780_:
{
if (v___y_2787_ == 0)
{
v___y_2642_ = v___y_2781_;
v___y_2643_ = v___y_2782_;
v___y_2644_ = v___y_2784_;
v___y_2645_ = v___y_2783_;
v___y_2646_ = v___y_2785_;
v___y_2647_ = v___y_2786_;
goto v___jp_2641_;
}
else
{
v___y_2762_ = v___y_2781_;
v___y_2763_ = v___y_2782_;
v___y_2764_ = v___y_2784_;
v___y_2765_ = v___y_2783_;
v___y_2766_ = v___y_2785_;
v___y_2767_ = v___y_2786_;
v___y_2768_ = v___y_2787_;
goto v___jp_2761_;
}
}
v___jp_2788_:
{
uint8_t v_useDecide_2795_; 
v_useDecide_2795_ = lean_ctor_get_uint8(v_config_2491_, sizeof(void*)*1);
if (v_useDecide_2795_ == 0)
{
v___y_2781_ = v_isHEq_2790_;
v___y_2782_ = v___y_2789_;
v___y_2783_ = v___y_2792_;
v___y_2784_ = v___y_2791_;
v___y_2785_ = v___y_2793_;
v___y_2786_ = v___y_2794_;
v___y_2787_ = v___x_2596_;
goto v___jp_2780_;
}
else
{
uint8_t v___x_2796_; 
v___x_2796_ = l_Lean_Expr_hasFVar(v___x_2640_);
if (v___x_2796_ == 0)
{
v___y_2762_ = v_isHEq_2790_;
v___y_2763_ = v___y_2789_;
v___y_2764_ = v___y_2791_;
v___y_2765_ = v___y_2792_;
v___y_2766_ = v___y_2793_;
v___y_2767_ = v___y_2794_;
v___y_2768_ = v_useDecide_2795_;
goto v___jp_2761_;
}
else
{
v___y_2781_ = v_isHEq_2790_;
v___y_2782_ = v___y_2789_;
v___y_2783_ = v___y_2792_;
v___y_2784_ = v___y_2791_;
v___y_2785_ = v___y_2793_;
v___y_2786_ = v___y_2794_;
v___y_2787_ = v___x_2596_;
goto v___jp_2780_;
}
}
}
v___jp_2797_:
{
lean_object* v___x_2805_; 
v___x_2805_ = l_Lean_Meta_isExprDefEq(v___y_2802_, v___y_2804_, v___y_2798_, v___y_2803_, v___y_2800_, v___y_2799_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; uint8_t v___x_2807_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
v___x_2807_ = lean_unbox(v_a_2806_);
lean_dec(v_a_2806_);
if (v___x_2807_ == 0)
{
v___y_2789_ = v___y_2801_;
v_isHEq_2790_ = v___x_2502_;
v___y_2791_ = v___y_2798_;
v___y_2792_ = v___y_2803_;
v___y_2793_ = v___y_2800_;
v___y_2794_ = v___y_2799_;
goto v___jp_2788_;
}
else
{
lean_object* v___x_2808_; 
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_config_2491_);
lean_inc(v_mvarId_2492_);
v___x_2808_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2798_, v___y_2803_, v___y_2800_, v___y_2799_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
v___x_2810_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_2811_ = l_Lean_Meta_mkEqOfHEq(v___x_2810_, v___x_2502_, v___y_2798_, v___y_2803_, v___y_2800_, v___y_2799_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2813_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v___x_2813_ = l_Lean_Meta_mkNoConfusion(v_a_2809_, v_a_2812_, v___y_2798_, v___y_2803_, v___y_2800_, v___y_2799_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_2814_, v___y_2803_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
lean_dec_ref_known(v___x_2815_, 1);
v___x_2816_ = lean_box(v___x_2502_);
v___x_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
v___x_2818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2817_);
lean_ctor_set(v___x_2818_, 1, v___x_2527_);
v_a_2509_ = v___x_2818_;
goto v___jp_2508_;
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2819_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2815_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2815_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2827_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2813_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2813_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec(v_a_2809_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2835_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2811_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2811_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2843_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2808_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2808_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2851_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2805_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2805_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
v___jp_2859_:
{
lean_object* v___x_2865_; 
lean_inc_ref(v___x_2640_);
v___x_2865_ = l_Lean_Meta_matchHEq_x3f(v___x_2640_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2866_);
lean_dec_ref_known(v___x_2865_, 1);
if (lean_obj_tag(v_a_2866_) == 1)
{
lean_object* v_val_2867_; lean_object* v_snd_2868_; lean_object* v_snd_2869_; lean_object* v_fst_2870_; lean_object* v_fst_2871_; lean_object* v_fst_2872_; lean_object* v_snd_2873_; lean_object* v___x_2874_; 
v_val_2867_ = lean_ctor_get(v_a_2866_, 0);
lean_inc(v_val_2867_);
lean_dec_ref_known(v_a_2866_, 1);
v_snd_2868_ = lean_ctor_get(v_val_2867_, 1);
lean_inc(v_snd_2868_);
v_snd_2869_ = lean_ctor_get(v_snd_2868_, 1);
lean_inc(v_snd_2869_);
v_fst_2870_ = lean_ctor_get(v_val_2867_, 0);
lean_inc(v_fst_2870_);
lean_dec(v_val_2867_);
v_fst_2871_ = lean_ctor_get(v_snd_2868_, 0);
lean_inc(v_fst_2871_);
lean_dec(v_snd_2868_);
v_fst_2872_ = lean_ctor_get(v_snd_2869_, 0);
lean_inc(v_fst_2872_);
v_snd_2873_ = lean_ctor_get(v_snd_2869_, 1);
lean_inc(v_snd_2873_);
lean_dec(v_snd_2869_);
v___x_2874_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2871_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2874_) == 0)
{
lean_object* v_a_2875_; 
v_a_2875_ = lean_ctor_get(v___x_2874_, 0);
lean_inc(v_a_2875_);
lean_dec_ref_known(v___x_2874_, 1);
if (lean_obj_tag(v_a_2875_) == 1)
{
lean_object* v_val_2876_; lean_object* v___x_2877_; 
v_val_2876_ = lean_ctor_get(v_a_2875_, 0);
lean_inc(v_val_2876_);
lean_dec_ref_known(v_a_2875_, 1);
v___x_2877_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2873_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref_known(v___x_2877_, 1);
if (lean_obj_tag(v_a_2878_) == 1)
{
lean_object* v_toConstantVal_2879_; lean_object* v_val_2880_; lean_object* v_toConstantVal_2881_; lean_object* v_name_2882_; lean_object* v_name_2883_; uint8_t v___x_2884_; 
v_toConstantVal_2879_ = lean_ctor_get(v_val_2876_, 0);
lean_inc_ref(v_toConstantVal_2879_);
lean_dec(v_val_2876_);
v_val_2880_ = lean_ctor_get(v_a_2878_, 0);
lean_inc(v_val_2880_);
lean_dec_ref_known(v_a_2878_, 1);
v_toConstantVal_2881_ = lean_ctor_get(v_val_2880_, 0);
lean_inc_ref(v_toConstantVal_2881_);
lean_dec(v_val_2880_);
v_name_2882_ = lean_ctor_get(v_toConstantVal_2879_, 0);
lean_inc(v_name_2882_);
lean_dec_ref(v_toConstantVal_2879_);
v_name_2883_ = lean_ctor_get(v_toConstantVal_2881_, 0);
lean_inc(v_name_2883_);
lean_dec_ref(v_toConstantVal_2881_);
v___x_2884_ = lean_name_eq(v_name_2882_, v_name_2883_);
lean_dec(v_name_2883_);
lean_dec(v_name_2882_);
if (v___x_2884_ == 0)
{
v___y_2798_ = v___y_2861_;
v___y_2799_ = v___y_2864_;
v___y_2800_ = v___y_2863_;
v___y_2801_ = v_isEq_2860_;
v___y_2802_ = v_fst_2870_;
v___y_2803_ = v___y_2862_;
v___y_2804_ = v_fst_2872_;
goto v___jp_2797_;
}
else
{
if (v___x_2596_ == 0)
{
lean_dec(v_fst_2872_);
lean_dec(v_fst_2870_);
v___y_2789_ = v_isEq_2860_;
v_isHEq_2790_ = v___x_2502_;
v___y_2791_ = v___y_2861_;
v___y_2792_ = v___y_2862_;
v___y_2793_ = v___y_2863_;
v___y_2794_ = v___y_2864_;
goto v___jp_2788_;
}
else
{
v___y_2798_ = v___y_2861_;
v___y_2799_ = v___y_2864_;
v___y_2800_ = v___y_2863_;
v___y_2801_ = v_isEq_2860_;
v___y_2802_ = v_fst_2870_;
v___y_2803_ = v___y_2862_;
v___y_2804_ = v_fst_2872_;
goto v___jp_2797_;
}
}
}
else
{
lean_dec(v_a_2878_);
lean_dec(v_val_2876_);
lean_dec(v_fst_2872_);
lean_dec(v_fst_2870_);
v___y_2789_ = v_isEq_2860_;
v_isHEq_2790_ = v___x_2502_;
v___y_2791_ = v___y_2861_;
v___y_2792_ = v___y_2862_;
v___y_2793_ = v___y_2863_;
v___y_2794_ = v___y_2864_;
goto v___jp_2788_;
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_dec(v_val_2876_);
lean_dec(v_fst_2872_);
lean_dec(v_fst_2870_);
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2885_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2877_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2877_);
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
else
{
lean_dec(v_a_2875_);
lean_dec(v_snd_2873_);
lean_dec(v_fst_2872_);
lean_dec(v_fst_2870_);
v___y_2789_ = v_isEq_2860_;
v_isHEq_2790_ = v___x_2502_;
v___y_2791_ = v___y_2861_;
v___y_2792_ = v___y_2862_;
v___y_2793_ = v___y_2863_;
v___y_2794_ = v___y_2864_;
goto v___jp_2788_;
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec(v_snd_2873_);
lean_dec(v_fst_2872_);
lean_dec(v_fst_2870_);
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2893_ = lean_ctor_get(v___x_2874_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2874_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2874_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
else
{
lean_dec(v_a_2866_);
v___y_2789_ = v_isEq_2860_;
v_isHEq_2790_ = v___x_2596_;
v___y_2791_ = v___y_2861_;
v___y_2792_ = v___y_2862_;
v___y_2793_ = v___y_2863_;
v___y_2794_ = v___y_2864_;
goto v___jp_2788_;
}
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_dec_ref(v___x_2640_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2901_ = lean_ctor_get(v___x_2865_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2865_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2865_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
v___jp_2909_:
{
lean_object* v___x_2914_; 
lean_inc_ref(v___x_2640_);
v___x_2914_ = l_Lean_Meta_matchEq_x3f(v___x_2640_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
if (lean_obj_tag(v_a_2915_) == 1)
{
lean_object* v_val_2916_; lean_object* v_snd_2917_; lean_object* v_fst_2918_; lean_object* v_snd_2919_; lean_object* v___x_2920_; 
v_val_2916_ = lean_ctor_get(v_a_2915_, 0);
lean_inc(v_val_2916_);
lean_dec_ref_known(v_a_2915_, 1);
v_snd_2917_ = lean_ctor_get(v_val_2916_, 1);
lean_inc(v_snd_2917_);
lean_dec(v_val_2916_);
v_fst_2918_ = lean_ctor_get(v_snd_2917_, 0);
lean_inc(v_fst_2918_);
v_snd_2919_ = lean_ctor_get(v_snd_2917_, 1);
lean_inc(v_snd_2919_);
lean_dec(v_snd_2917_);
v___x_2920_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2918_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_a_2921_);
lean_dec_ref_known(v___x_2920_, 1);
if (lean_obj_tag(v_a_2921_) == 1)
{
lean_object* v_val_2922_; lean_object* v___x_2923_; 
v_val_2922_ = lean_ctor_get(v_a_2921_, 0);
lean_inc(v_val_2922_);
lean_dec_ref_known(v_a_2921_, 1);
v___x_2923_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2919_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
if (lean_obj_tag(v_a_2924_) == 1)
{
lean_object* v_toConstantVal_2925_; lean_object* v_val_2926_; lean_object* v_toConstantVal_2927_; lean_object* v_name_2928_; lean_object* v_name_2929_; uint8_t v___x_2930_; 
v_toConstantVal_2925_ = lean_ctor_get(v_val_2922_, 0);
lean_inc_ref(v_toConstantVal_2925_);
lean_dec(v_val_2922_);
v_val_2926_ = lean_ctor_get(v_a_2924_, 0);
lean_inc(v_val_2926_);
lean_dec_ref_known(v_a_2924_, 1);
v_toConstantVal_2927_ = lean_ctor_get(v_val_2926_, 0);
lean_inc_ref(v_toConstantVal_2927_);
lean_dec(v_val_2926_);
v_name_2928_ = lean_ctor_get(v_toConstantVal_2925_, 0);
lean_inc(v_name_2928_);
lean_dec_ref(v_toConstantVal_2925_);
v_name_2929_ = lean_ctor_get(v_toConstantVal_2927_, 0);
lean_inc(v_name_2929_);
lean_dec_ref(v_toConstantVal_2927_);
v___x_2930_ = lean_name_eq(v_name_2928_, v_name_2929_);
lean_dec(v_name_2929_);
lean_dec(v_name_2928_);
if (v___x_2930_ == 0)
{
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_config_2491_);
v___y_2529_ = v___y_2912_;
v___y_2530_ = v___y_2913_;
v___y_2531_ = v___y_2911_;
v___y_2532_ = v___y_2910_;
goto v___jp_2528_;
}
else
{
if (v___x_2596_ == 0)
{
lean_del_object(v___x_2525_);
v_isEq_2860_ = v___x_2502_;
v___y_2861_ = v___y_2910_;
v___y_2862_ = v___y_2911_;
v___y_2863_ = v___y_2912_;
v___y_2864_ = v___y_2913_;
goto v___jp_2859_;
}
else
{
lean_dec_ref(v___x_2640_);
lean_dec_ref(v_config_2491_);
v___y_2529_ = v___y_2912_;
v___y_2530_ = v___y_2913_;
v___y_2531_ = v___y_2911_;
v___y_2532_ = v___y_2910_;
goto v___jp_2528_;
}
}
}
else
{
lean_dec(v_a_2924_);
lean_dec(v_val_2922_);
lean_del_object(v___x_2525_);
v_isEq_2860_ = v___x_2502_;
v___y_2861_ = v___y_2910_;
v___y_2862_ = v___y_2911_;
v___y_2863_ = v___y_2912_;
v___y_2864_ = v___y_2913_;
goto v___jp_2859_;
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_dec(v_val_2922_);
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2931_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2923_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2923_);
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
else
{
lean_dec(v_a_2921_);
lean_dec(v_snd_2919_);
lean_del_object(v___x_2525_);
v_isEq_2860_ = v___x_2502_;
v___y_2861_ = v___y_2910_;
v___y_2862_ = v___y_2911_;
v___y_2863_ = v___y_2912_;
v___y_2864_ = v___y_2913_;
goto v___jp_2859_;
}
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec(v_snd_2919_);
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2939_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2920_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2920_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
else
{
lean_dec(v_a_2915_);
lean_del_object(v___x_2525_);
v_isEq_2860_ = v___x_2596_;
v___y_2861_ = v___y_2910_;
v___y_2862_ = v___y_2911_;
v___y_2863_ = v___y_2912_;
v___y_2864_ = v___y_2913_;
goto v___jp_2859_;
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2954_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2947_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2949_ = v___x_2914_;
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2914_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2952_; 
if (v_isShared_2950_ == 0)
{
v___x_2952_ = v___x_2949_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2947_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
return v___x_2952_;
}
}
}
}
v___jp_2955_:
{
lean_object* v___x_2960_; 
lean_inc_ref(v___x_2640_);
v___x_2960_ = l_Lean_refutableHasNotBit_x3f(v___x_2640_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2960_, 1);
if (lean_obj_tag(v_a_2961_) == 1)
{
lean_object* v_val_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_3001_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec_ref(v_config_2491_);
v_val_2962_ = lean_ctor_get(v_a_2961_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v_a_2961_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2964_ = v_a_2961_;
v_isShared_2965_ = v_isSharedCheck_3001_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_val_2962_);
lean_dec(v_a_2961_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_3001_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2966_; 
lean_inc(v_mvarId_2492_);
v___x_2966_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
v___x_2968_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_2969_ = l_Lean_Meta_mkAbsurd(v_a_2967_, v_val_2962_, v___x_2968_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2971_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
lean_inc(v_a_2970_);
lean_dec_ref_known(v___x_2969_, 1);
v___x_2971_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_2970_, v___y_2957_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v___x_2972_; lean_object* v___x_2974_; 
lean_dec_ref_known(v___x_2971_, 1);
v___x_2972_ = lean_box(v___x_2502_);
if (v_isShared_2965_ == 0)
{
lean_ctor_set(v___x_2964_, 0, v___x_2972_);
v___x_2974_ = v___x_2964_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v___x_2972_);
v___x_2974_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; 
v___x_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
lean_ctor_set(v___x_2975_, 1, v___x_2527_);
v_a_2509_ = v___x_2975_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2984_; 
lean_del_object(v___x_2964_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2977_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2979_ = v___x_2971_;
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2971_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2982_; 
if (v_isShared_2980_ == 0)
{
v___x_2982_ = v___x_2979_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_del_object(v___x_2964_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2985_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2969_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2969_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_del_object(v___x_2964_);
lean_dec(v_val_2962_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2993_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2966_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2966_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
}
else
{
lean_object* v___x_3002_; 
lean_dec(v_a_2961_);
lean_inc_ref(v___x_2640_);
v___x_3002_ = l_Lean_Meta_matchNe_x3f(v___x_2640_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
if (lean_obj_tag(v_a_3003_) == 1)
{
lean_object* v_val_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3073_; 
v_val_3004_ = lean_ctor_get(v_a_3003_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_a_3003_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3006_ = v_a_3003_;
v_isShared_3007_ = v_isSharedCheck_3073_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_val_3004_);
lean_dec(v_a_3003_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3073_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v_snd_3008_; lean_object* v_fst_3009_; lean_object* v_snd_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3072_; 
v_snd_3008_ = lean_ctor_get(v_val_3004_, 1);
lean_inc(v_snd_3008_);
lean_dec(v_val_3004_);
v_fst_3009_ = lean_ctor_get(v_snd_3008_, 0);
v_snd_3010_ = lean_ctor_get(v_snd_3008_, 1);
v_isSharedCheck_3072_ = !lean_is_exclusive(v_snd_3008_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3012_ = v_snd_3008_;
v_isShared_3013_ = v_isSharedCheck_3072_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_snd_3010_);
lean_inc(v_fst_3009_);
lean_dec(v_snd_3008_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3072_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3014_; 
lean_inc(v_fst_3009_);
v___x_3014_ = l_Lean_Meta_isExprDefEq(v_fst_3009_, v_snd_3010_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; uint8_t v___x_3016_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
lean_dec_ref_known(v___x_3014_, 1);
v___x_3016_ = lean_unbox(v_a_3015_);
lean_dec(v_a_3015_);
if (v___x_3016_ == 0)
{
lean_del_object(v___x_3012_);
lean_dec(v_fst_3009_);
lean_del_object(v___x_3006_);
v___y_2910_ = v___y_2956_;
v___y_2911_ = v___y_2957_;
v___y_2912_ = v___y_2958_;
v___y_2913_ = v___y_2959_;
goto v___jp_2909_;
}
else
{
lean_object* v___x_3017_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec_ref(v_config_2491_);
lean_inc(v_mvarId_2492_);
v___x_3017_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3019_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref_known(v___x_3017_, 1);
v___x_3019_ = l_Lean_Meta_mkEqRefl(v_fst_3009_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v___x_3021_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_3022_ = l_Lean_Meta_mkAbsurd(v_a_3018_, v_a_3020_, v___x_3021_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_3023_, v___y_2957_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3027_; 
lean_dec_ref_known(v___x_3024_, 1);
v___x_3025_ = lean_box(v___x_2502_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v___x_3025_);
v___x_3027_ = v___x_3006_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3029_; 
if (v_isShared_3013_ == 0)
{
lean_ctor_set(v___x_3012_, 1, v___x_2527_);
lean_ctor_set(v___x_3012_, 0, v___x_3027_);
v___x_3029_ = v___x_3012_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v___x_3027_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_2527_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
v_a_2509_ = v___x_3029_;
goto v___jp_2508_;
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3039_; 
lean_del_object(v___x_3012_);
lean_del_object(v___x_3006_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_3032_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3034_ = v___x_3024_;
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_a_3032_);
lean_dec(v___x_3024_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3039_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3037_; 
if (v_isShared_3035_ == 0)
{
v___x_3037_ = v___x_3034_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3032_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_del_object(v___x_3012_);
lean_del_object(v___x_3006_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_3040_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3022_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3022_);
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
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec(v_a_3018_);
lean_del_object(v___x_3012_);
lean_del_object(v___x_3006_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_3048_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_3019_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_3019_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_del_object(v___x_3012_);
lean_dec(v_fst_3009_);
lean_del_object(v___x_3006_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_3056_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_3017_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3017_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_del_object(v___x_3012_);
lean_dec(v_fst_3009_);
lean_del_object(v___x_3006_);
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_3064_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_3014_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_3014_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3003_);
v___y_2910_ = v___y_2956_;
v___y_2911_ = v___y_2957_;
v___y_2912_ = v___y_2958_;
v___y_2913_ = v___y_2959_;
goto v___jp_2909_;
}
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_3074_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3002_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3002_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
lean_dec_ref(v___x_2640_);
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_3082_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___x_2960_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___x_2960_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
else
{
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2517_ = v___x_2568_;
goto v___jp_2516_;
}
v___jp_2528_:
{
lean_object* v___x_2533_; 
lean_inc(v_mvarId_2492_);
v___x_2533_ = l_Lean_MVarId_getType(v_mvarId_2492_, v___y_2532_, v___y_2531_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2535_ = l_Lean_LocalDecl_toExpr(v_val_2523_);
v___x_2536_ = l_Lean_Meta_mkNoConfusion(v_a_2534_, v___x_2535_, v___y_2532_, v___y_2531_, v___y_2529_, v___y_2530_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v___x_2538_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2492_, v_a_2537_, v___y_2531_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2541_; 
lean_dec_ref_known(v___x_2538_, 1);
v___x_2539_ = lean_box(v___x_2502_);
if (v_isShared_2526_ == 0)
{
lean_ctor_set(v___x_2525_, 0, v___x_2539_);
v___x_2541_ = v___x_2525_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2539_);
v___x_2541_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
lean_object* v___x_2542_; 
v___x_2542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
lean_ctor_set(v___x_2542_, 1, v___x_2527_);
v_a_2509_ = v___x_2542_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_del_object(v___x_2525_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2544_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2538_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2538_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
else
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2559_; 
lean_del_object(v___x_2525_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2552_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2554_ = v___x_2536_;
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2536_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2559_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_del_object(v___x_2525_);
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
v_a_2560_ = lean_ctor_get(v___x_2533_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2533_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2533_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
v___jp_2569_:
{
lean_object* v_searchFuel_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v_searchFuel_2574_ = lean_ctor_get(v_config_2491_, 0);
v___x_2575_ = l_Lean_LocalDecl_fvarId(v_val_2523_);
lean_dec(v_val_2523_);
lean_inc(v_searchFuel_2574_);
lean_inc(v_mvarId_2492_);
v___x_2576_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_2492_, v___x_2575_, v_searchFuel_2574_, v___y_2571_, v___y_2570_, v___y_2572_, v___y_2573_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; uint8_t v___x_2578_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v___x_2576_, 1);
v___x_2578_ = lean_unbox(v_a_2577_);
lean_dec(v_a_2577_);
if (v___x_2578_ == 0)
{
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2517_ = v___x_2568_;
goto v___jp_2516_;
}
else
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v___x_2579_ = lean_box(v___x_2502_);
v___x_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v___x_2527_);
v_a_2509_ = v___x_2581_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2582_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2576_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2576_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2582_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
v___jp_2590_:
{
if (v___y_2595_ == 0)
{
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
v_a_2517_ = v___x_2568_;
goto v___jp_2516_;
}
else
{
v___y_2570_ = v___y_2591_;
v___y_2571_ = v___y_2592_;
v___y_2572_ = v___y_2593_;
v___y_2573_ = v___y_2594_;
goto v___jp_2569_;
}
}
v___jp_2597_:
{
if (v___y_2600_ == 0)
{
v___y_2570_ = v___y_2598_;
v___y_2571_ = v___y_2599_;
v___y_2572_ = v___y_2601_;
v___y_2573_ = v___y_2602_;
goto v___jp_2569_;
}
else
{
v___y_2591_ = v___y_2598_;
v___y_2592_ = v___y_2599_;
v___y_2593_ = v___y_2601_;
v___y_2594_ = v___y_2602_;
v___y_2595_ = v___x_2596_;
goto v___jp_2590_;
}
}
v___jp_2603_:
{
if (v___y_2609_ == 0)
{
v___y_2591_ = v___y_2604_;
v___y_2592_ = v___y_2605_;
v___y_2593_ = v___y_2607_;
v___y_2594_ = v___y_2608_;
v___y_2595_ = v___x_2596_;
goto v___jp_2590_;
}
else
{
v___y_2598_ = v___y_2604_;
v___y_2599_ = v___y_2605_;
v___y_2600_ = v___y_2606_;
v___y_2601_ = v___y_2607_;
v___y_2602_ = v___y_2608_;
goto v___jp_2597_;
}
}
v___jp_2610_:
{
uint8_t v_emptyType_2617_; 
v_emptyType_2617_ = lean_ctor_get_uint8(v_config_2491_, sizeof(void*)*1 + 1);
if (v_emptyType_2617_ == 0)
{
v___y_2604_ = v___y_2614_;
v___y_2605_ = v___y_2613_;
v___y_2606_ = v___y_2611_;
v___y_2607_ = v___y_2615_;
v___y_2608_ = v___y_2616_;
v___y_2609_ = v___x_2596_;
goto v___jp_2603_;
}
else
{
if (v___y_2612_ == 0)
{
v___y_2598_ = v___y_2614_;
v___y_2599_ = v___y_2613_;
v___y_2600_ = v___y_2611_;
v___y_2601_ = v___y_2615_;
v___y_2602_ = v___y_2616_;
goto v___jp_2597_;
}
else
{
v___y_2604_ = v___y_2614_;
v___y_2605_ = v___y_2613_;
v___y_2606_ = v___y_2611_;
v___y_2607_ = v___y_2615_;
v___y_2608_ = v___y_2616_;
v___y_2609_ = v___x_2596_;
goto v___jp_2603_;
}
}
}
v___jp_2618_:
{
if (v___y_2625_ == 0)
{
v___y_2611_ = v___y_2619_;
v___y_2612_ = v___y_2620_;
v___y_2613_ = v___y_2622_;
v___y_2614_ = v___y_2623_;
v___y_2615_ = v___y_2624_;
v___y_2616_ = v___y_2621_;
goto v___jp_2610_;
}
else
{
lean_object* v___x_2626_; 
lean_inc(v_val_2523_);
lean_inc(v_mvarId_2492_);
v___x_2626_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_2492_, v_val_2523_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2621_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; uint8_t v___x_2628_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref_known(v___x_2626_, 1);
v___x_2628_ = lean_unbox(v_a_2627_);
lean_dec(v_a_2627_);
if (v___x_2628_ == 0)
{
v___y_2611_ = v___y_2619_;
v___y_2612_ = v___y_2620_;
v___y_2613_ = v___y_2622_;
v___y_2614_ = v___y_2623_;
v___y_2615_ = v___y_2624_;
v___y_2616_ = v___y_2621_;
goto v___jp_2610_;
}
else
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
lean_dec(v_val_2523_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v___x_2629_ = lean_box(v___x_2502_);
v___x_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
v___x_2631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
lean_ctor_set(v___x_2631_, 1, v___x_2527_);
v_a_2509_ = v___x_2631_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
lean_dec(v_val_2523_);
lean_del_object(v___x_2506_);
lean_dec(v_snd_2504_);
lean_dec(v_mvarId_2492_);
lean_dec_ref(v_config_2491_);
v_a_2632_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2626_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2626_);
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
}
}
v___jp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_a_2509_);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2510_);
v___x_2512_ = v___x_2506_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2510_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v_snd_2504_);
v___x_2512_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
lean_object* v___x_2513_; 
v___x_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
return v___x_2513_;
}
}
v___jp_2516_:
{
lean_object* v___x_2518_; size_t v___x_2519_; size_t v___x_2520_; lean_object* v___x_2521_; 
v___x_2518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2515_);
lean_ctor_set(v___x_2518_, 1, v_a_2517_);
v___x_2519_ = ((size_t)1ULL);
v___x_2520_ = lean_usize_add(v_i_2495_, v___x_2519_);
v___x_2521_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2491_, v_mvarId_2492_, v_as_2493_, v_sz_2494_, v___x_2520_, v___x_2518_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
return v___x_2521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object* v_config_3156_, lean_object* v_mvarId_3157_, lean_object* v_as_3158_, lean_object* v_sz_3159_, lean_object* v_i_3160_, lean_object* v_b_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_){
_start:
{
size_t v_sz_boxed_3167_; size_t v_i_boxed_3168_; lean_object* v_res_3169_; 
v_sz_boxed_3167_ = lean_unbox_usize(v_sz_3159_);
lean_dec(v_sz_3159_);
v_i_boxed_3168_ = lean_unbox_usize(v_i_3160_);
lean_dec(v_i_3160_);
v_res_3169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_3156_, v_mvarId_3157_, v_as_3158_, v_sz_boxed_3167_, v_i_boxed_3168_, v_b_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v_as_3158_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object* v_config_3173_, lean_object* v_mvarId_3174_, lean_object* v_as_3175_, size_t v_sz_3176_, size_t v_i_3177_, lean_object* v_b_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
uint8_t v___x_3184_; 
v___x_3184_ = lean_usize_dec_lt(v_i_3177_, v_sz_3176_);
if (v___x_3184_ == 0)
{
lean_object* v___x_3185_; 
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v___x_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3185_, 0, v_b_3178_);
return v___x_3185_;
}
else
{
lean_object* v_snd_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3856_; 
v_snd_3186_ = lean_ctor_get(v_b_3178_, 1);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_b_3178_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; 
v_unused_3857_ = lean_ctor_get(v_b_3178_, 0);
lean_dec(v_unused_3857_);
v___x_3188_ = v_b_3178_;
v_isShared_3189_ = v_isSharedCheck_3856_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_snd_3186_);
lean_dec(v_b_3178_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3856_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v_a_3191_; lean_object* v___x_3197_; lean_object* v_a_3199_; lean_object* v_a_3204_; 
v___x_3197_ = lean_box(0);
v_a_3204_ = lean_array_uget(v_as_3175_, v_i_3177_);
if (lean_obj_tag(v_a_3204_) == 0)
{
lean_del_object(v___x_3188_);
v_a_3199_ = v_snd_3186_;
goto v___jp_3198_;
}
else
{
lean_object* v_val_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3855_; 
v_val_3205_ = lean_ctor_get(v_a_3204_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v_a_3204_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3207_ = v_a_3204_;
v_isShared_3208_ = v_isSharedCheck_3855_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_val_3205_);
lean_dec(v_a_3204_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3855_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3209_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___x_3251_; lean_object* v___y_3253_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; uint8_t v___y_3279_; uint8_t v___x_3280_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; uint8_t v___y_3286_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; uint8_t v___y_3292_; uint8_t v___y_3293_; uint8_t v___y_3295_; uint8_t v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3303_; uint8_t v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; uint8_t v___y_3308_; uint8_t v___y_3309_; 
v___x_3209_ = lean_box(0);
v___x_3251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3280_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3205_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3325_; uint8_t v___y_3327_; uint8_t v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3336_; lean_object* v___y_3337_; uint8_t v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; uint8_t v___y_3341_; lean_object* v___y_3342_; uint8_t v___y_3343_; lean_object* v___y_3346_; lean_object* v___y_3347_; uint8_t v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; uint8_t v___y_3351_; lean_object* v_a_3352_; lean_object* v___y_3356_; lean_object* v___y_3357_; uint8_t v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3360_; uint8_t v___y_3361_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3407_; lean_object* v___y_3408_; uint8_t v___y_3409_; lean_object* v___y_3410_; uint8_t v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3436_; lean_object* v___y_3437_; uint8_t v___y_3438_; lean_object* v___y_3439_; uint8_t v___y_3440_; lean_object* v___y_3441_; uint8_t v___y_3442_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; uint8_t v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; uint8_t v___y_3450_; uint8_t v___y_3451_; lean_object* v___y_3454_; lean_object* v___y_3455_; uint8_t v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; uint8_t v___y_3459_; uint8_t v___y_3460_; lean_object* v___y_3473_; lean_object* v___y_3474_; uint8_t v___y_3475_; lean_object* v___y_3476_; uint8_t v___y_3477_; lean_object* v___y_3478_; uint8_t v___y_3479_; uint8_t v___y_3481_; uint8_t v_isHEq_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; uint8_t v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; uint8_t v_isEq_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___x_3785_; 
v___x_3325_ = l_Lean_LocalDecl_type(v_val_3205_);
lean_inc_ref(v___x_3325_);
v___x_3785_ = l_Lean_Meta_matchNot_x3f(v___x_3325_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3785_) == 0)
{
lean_object* v_a_3786_; 
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
lean_inc(v_a_3786_);
lean_dec_ref_known(v___x_3785_, 1);
if (lean_obj_tag(v_a_3786_) == 1)
{
lean_object* v_val_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3846_; 
v_val_3787_ = lean_ctor_get(v_a_3786_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_a_3786_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3789_ = v_a_3786_;
v_isShared_3790_ = v_isSharedCheck_3846_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_val_3787_);
lean_dec(v_a_3786_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3846_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3791_; 
v___x_3791_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3787_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3791_) == 0)
{
lean_object* v_a_3792_; 
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3792_);
lean_dec_ref_known(v___x_3791_, 1);
if (lean_obj_tag(v_a_3792_) == 1)
{
lean_object* v_val_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3837_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec_ref(v_config_3173_);
v_val_3793_ = lean_ctor_get(v_a_3792_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v_a_3792_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3795_ = v_a_3792_;
v_isShared_3796_ = v_isSharedCheck_3837_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_val_3793_);
lean_dec(v_a_3792_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3837_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3797_; 
lean_inc(v_mvarId_3174_);
v___x_3797_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
lean_inc(v_a_3798_);
lean_dec_ref_known(v___x_3797_, 1);
v___x_3799_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3800_ = l_Lean_mkFVar(v_val_3793_);
v___x_3801_ = l_Lean_Expr_app___override(v___x_3799_, v___x_3800_);
v___x_3802_ = l_Lean_Meta_mkFalseElim(v_a_3798_, v___x_3801_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3804_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3802_, 1);
v___x_3804_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3803_, v___y_3180_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v___x_3805_; lean_object* v___x_3807_; 
lean_dec_ref_known(v___x_3804_, 1);
v___x_3805_ = lean_box(v___x_3184_);
if (v_isShared_3796_ == 0)
{
lean_ctor_set(v___x_3795_, 0, v___x_3805_);
v___x_3807_ = v___x_3795_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; lean_object* v___x_3810_; 
v___x_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
lean_ctor_set(v___x_3808_, 1, v___x_3209_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set_tag(v___x_3789_, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3808_);
v___x_3810_ = v___x_3789_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3808_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
v_a_3191_ = v___x_3810_;
goto v___jp_3190_;
}
}
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_del_object(v___x_3795_);
lean_del_object(v___x_3789_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3813_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3804_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3804_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_del_object(v___x_3795_);
lean_del_object(v___x_3789_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3821_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3802_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3802_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
else
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
lean_del_object(v___x_3795_);
lean_dec(v_val_3793_);
lean_del_object(v___x_3789_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3829_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3831_ = v___x_3797_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3797_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3829_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
}
}
else
{
lean_dec(v_a_3792_);
lean_del_object(v___x_3789_);
v___y_3649_ = v___y_3179_;
v___y_3650_ = v___y_3180_;
v___y_3651_ = v___y_3181_;
v___y_3652_ = v___y_3182_;
goto v___jp_3648_;
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
lean_del_object(v___x_3789_);
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3838_ = lean_ctor_get(v___x_3791_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3791_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3791_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3791_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
else
{
lean_dec(v_a_3786_);
v___y_3649_ = v___y_3179_;
v___y_3650_ = v___y_3180_;
v___y_3651_ = v___y_3181_;
v___y_3652_ = v___y_3182_;
goto v___jp_3648_;
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3847_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3785_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3785_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
v___jp_3326_:
{
uint8_t v_genDiseq_3333_; 
v_genDiseq_3333_ = lean_ctor_get_uint8(v_config_3173_, sizeof(void*)*1 + 2);
if (v_genDiseq_3333_ == 0)
{
lean_dec_ref(v___x_3325_);
v___y_3303_ = v___y_3331_;
v___y_3304_ = v___y_3327_;
v___y_3305_ = v___y_3332_;
v___y_3306_ = v___y_3330_;
v___y_3307_ = v___y_3329_;
v___y_3308_ = v___y_3328_;
v___y_3309_ = v___x_3280_;
goto v___jp_3302_;
}
else
{
uint8_t v___x_3334_; 
v___x_3334_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3325_);
v___y_3303_ = v___y_3331_;
v___y_3304_ = v___y_3327_;
v___y_3305_ = v___y_3332_;
v___y_3306_ = v___y_3330_;
v___y_3307_ = v___y_3329_;
v___y_3308_ = v___y_3328_;
v___y_3309_ = v___x_3334_;
goto v___jp_3302_;
}
}
v___jp_3335_:
{
if (v___y_3343_ == 0)
{
lean_dec_ref(v___y_3340_);
v___y_3327_ = v___y_3338_;
v___y_3328_ = v___y_3341_;
v___y_3329_ = v___y_3339_;
v___y_3330_ = v___y_3337_;
v___y_3331_ = v___y_3342_;
v___y_3332_ = v___y_3336_;
goto v___jp_3326_;
}
else
{
lean_object* v___x_3344_; 
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v___x_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3344_, 0, v___y_3340_);
return v___x_3344_;
}
}
v___jp_3345_:
{
uint8_t v___x_3353_; 
v___x_3353_ = l_Lean_Exception_isInterrupt(v_a_3352_);
if (v___x_3353_ == 0)
{
uint8_t v___x_3354_; 
lean_inc_ref(v_a_3352_);
v___x_3354_ = l_Lean_Exception_isRuntime(v_a_3352_);
v___y_3336_ = v___y_3346_;
v___y_3337_ = v___y_3347_;
v___y_3338_ = v___y_3348_;
v___y_3339_ = v___y_3349_;
v___y_3340_ = v_a_3352_;
v___y_3341_ = v___y_3351_;
v___y_3342_ = v___y_3350_;
v___y_3343_ = v___x_3354_;
goto v___jp_3335_;
}
else
{
v___y_3336_ = v___y_3346_;
v___y_3337_ = v___y_3347_;
v___y_3338_ = v___y_3348_;
v___y_3339_ = v___y_3349_;
v___y_3340_ = v_a_3352_;
v___y_3341_ = v___y_3351_;
v___y_3342_ = v___y_3350_;
v___y_3343_ = v___x_3353_;
goto v___jp_3335_;
}
}
v___jp_3355_:
{
if (lean_obj_tag(v___y_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3365_; uint8_t v___x_3366_; 
v_a_3364_ = lean_ctor_get(v___y_3363_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___y_3363_, 1);
v___x_3365_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3366_ = l_Lean_Expr_isConstOf(v_a_3364_, v___x_3365_);
lean_dec(v_a_3364_);
if (v___x_3366_ == 0)
{
lean_dec_ref(v___y_3360_);
v___y_3327_ = v___y_3358_;
v___y_3328_ = v___y_3361_;
v___y_3329_ = v___y_3359_;
v___y_3330_ = v___y_3357_;
v___y_3331_ = v___y_3362_;
v___y_3332_ = v___y_3356_;
goto v___jp_3326_;
}
else
{
lean_object* v___x_3367_; 
lean_inc_ref(v___y_3360_);
v___x_3367_ = l_Lean_Meta_mkEqRefl(v___y_3360_, v___y_3359_, v___y_3357_, v___y_3362_, v___y_3356_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; lean_object* v___x_3369_; lean_object* v_dummy_3370_; lean_object* v_nargs_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3367_, 1);
v___x_3369_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3370_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
v_nargs_3371_ = l_Lean_Expr_getAppNumArgs(v___y_3360_);
lean_inc(v_nargs_3371_);
v___x_3372_ = lean_mk_array(v_nargs_3371_, v_dummy_3370_);
v___x_3373_ = lean_unsigned_to_nat(1u);
v___x_3374_ = lean_nat_sub(v_nargs_3371_, v___x_3373_);
lean_dec(v_nargs_3371_);
v___x_3375_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3360_, v___x_3372_, v___x_3374_);
v___x_3376_ = lean_array_push(v___x_3375_, v_a_3368_);
v___x_3377_ = l_Lean_mkAppN(v___x_3369_, v___x_3376_);
lean_dec_ref(v___x_3376_);
lean_inc(v_mvarId_3174_);
v___x_3378_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3359_, v___y_3357_, v___y_3362_, v___y_3356_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3378_, 1);
lean_inc(v_val_3205_);
v___x_3380_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3381_ = l_Lean_Meta_mkAbsurd(v_a_3379_, v___x_3380_, v___x_3377_, v___y_3359_, v___y_3357_, v___y_3362_, v___y_3356_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3401_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3401_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3401_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; 
lean_inc(v_mvarId_3174_);
v___x_3386_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3382_, v___y_3357_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3398_; 
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3398_ == 0)
{
lean_object* v_unused_3399_; 
v_unused_3399_ = lean_ctor_get(v___x_3386_, 0);
lean_dec(v_unused_3399_);
v___x_3388_ = v___x_3386_;
v_isShared_3389_ = v_isSharedCheck_3398_;
goto v_resetjp_3387_;
}
else
{
lean_dec(v___x_3386_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3398_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3390_; lean_object* v___x_3392_; 
v___x_3390_ = lean_box(v___x_3184_);
if (v_isShared_3389_ == 0)
{
lean_ctor_set_tag(v___x_3388_, 1);
lean_ctor_set(v___x_3388_, 0, v___x_3390_);
v___x_3392_ = v___x_3388_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; lean_object* v___x_3395_; 
v___x_3393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
lean_ctor_set(v___x_3393_, 1, v___x_3209_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3393_);
v___x_3395_ = v___x_3384_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
v_a_3191_ = v___x_3395_;
goto v___jp_3190_;
}
}
}
}
else
{
lean_object* v_a_3400_; 
lean_del_object(v___x_3384_);
v_a_3400_ = lean_ctor_get(v___x_3386_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3386_, 1);
v___y_3346_ = v___y_3356_;
v___y_3347_ = v___y_3357_;
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___y_3359_;
v___y_3350_ = v___y_3362_;
v___y_3351_ = v___y_3361_;
v_a_3352_ = v_a_3400_;
goto v___jp_3345_;
}
}
}
else
{
lean_object* v_a_3402_; 
v_a_3402_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3381_, 1);
v___y_3346_ = v___y_3356_;
v___y_3347_ = v___y_3357_;
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___y_3359_;
v___y_3350_ = v___y_3362_;
v___y_3351_ = v___y_3361_;
v_a_3352_ = v_a_3402_;
goto v___jp_3345_;
}
}
else
{
lean_object* v_a_3403_; 
lean_dec_ref(v___x_3377_);
v_a_3403_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3403_);
lean_dec_ref_known(v___x_3378_, 1);
v___y_3346_ = v___y_3356_;
v___y_3347_ = v___y_3357_;
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___y_3359_;
v___y_3350_ = v___y_3362_;
v___y_3351_ = v___y_3361_;
v_a_3352_ = v_a_3403_;
goto v___jp_3345_;
}
}
else
{
lean_object* v_a_3404_; 
lean_dec_ref(v___y_3360_);
v_a_3404_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3367_, 1);
v___y_3346_ = v___y_3356_;
v___y_3347_ = v___y_3357_;
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___y_3359_;
v___y_3350_ = v___y_3362_;
v___y_3351_ = v___y_3361_;
v_a_3352_ = v_a_3404_;
goto v___jp_3345_;
}
}
}
else
{
lean_object* v_a_3405_; 
lean_dec_ref(v___y_3360_);
v_a_3405_ = lean_ctor_get(v___y_3363_, 0);
lean_inc(v_a_3405_);
lean_dec_ref_known(v___y_3363_, 1);
v___y_3346_ = v___y_3356_;
v___y_3347_ = v___y_3357_;
v___y_3348_ = v___y_3358_;
v___y_3349_ = v___y_3359_;
v___y_3350_ = v___y_3362_;
v___y_3351_ = v___y_3361_;
v_a_3352_ = v_a_3405_;
goto v___jp_3345_;
}
}
v___jp_3406_:
{
lean_object* v___x_3413_; 
lean_inc_ref(v___x_3325_);
v___x_3413_ = l_Lean_Meta_mkDecide(v___x_3325_, v___y_3410_, v___y_3408_, v___y_3412_, v___y_3407_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_object* v_a_3414_; lean_object* v___x_3415_; uint8_t v_transparency_3416_; uint8_t v___x_3417_; uint8_t v___x_3418_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
v___x_3415_ = l_Lean_Meta_Context_config(v___y_3410_);
v_transparency_3416_ = lean_ctor_get_uint8(v___x_3415_, 9);
lean_dec_ref(v___x_3415_);
v___x_3417_ = 1;
v___x_3418_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3416_, v___x_3417_);
if (v___x_3418_ == 0)
{
lean_object* v_keyedConfig_3419_; uint8_t v_trackZetaDelta_3420_; lean_object* v_zetaDeltaSet_3421_; lean_object* v_lctx_3422_; lean_object* v_localInstances_3423_; lean_object* v_defEqCtx_x3f_3424_; lean_object* v_synthPendingDepth_3425_; lean_object* v_customCanUnfoldPredicate_x3f_3426_; uint8_t v_univApprox_3427_; uint8_t v_inTypeClassResolution_3428_; uint8_t v_cacheInferType_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v_keyedConfig_3419_ = lean_ctor_get(v___y_3410_, 0);
v_trackZetaDelta_3420_ = lean_ctor_get_uint8(v___y_3410_, sizeof(void*)*7);
v_zetaDeltaSet_3421_ = lean_ctor_get(v___y_3410_, 1);
v_lctx_3422_ = lean_ctor_get(v___y_3410_, 2);
v_localInstances_3423_ = lean_ctor_get(v___y_3410_, 3);
v_defEqCtx_x3f_3424_ = lean_ctor_get(v___y_3410_, 4);
v_synthPendingDepth_3425_ = lean_ctor_get(v___y_3410_, 5);
v_customCanUnfoldPredicate_x3f_3426_ = lean_ctor_get(v___y_3410_, 6);
v_univApprox_3427_ = lean_ctor_get_uint8(v___y_3410_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3428_ = lean_ctor_get_uint8(v___y_3410_, sizeof(void*)*7 + 2);
v_cacheInferType_3429_ = lean_ctor_get_uint8(v___y_3410_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3419_);
v___x_3430_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3417_, v_keyedConfig_3419_);
lean_inc(v_customCanUnfoldPredicate_x3f_3426_);
lean_inc(v_synthPendingDepth_3425_);
lean_inc(v_defEqCtx_x3f_3424_);
lean_inc_ref(v_localInstances_3423_);
lean_inc_ref(v_lctx_3422_);
lean_inc(v_zetaDeltaSet_3421_);
v___x_3431_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3431_, 0, v___x_3430_);
lean_ctor_set(v___x_3431_, 1, v_zetaDeltaSet_3421_);
lean_ctor_set(v___x_3431_, 2, v_lctx_3422_);
lean_ctor_set(v___x_3431_, 3, v_localInstances_3423_);
lean_ctor_set(v___x_3431_, 4, v_defEqCtx_x3f_3424_);
lean_ctor_set(v___x_3431_, 5, v_synthPendingDepth_3425_);
lean_ctor_set(v___x_3431_, 6, v_customCanUnfoldPredicate_x3f_3426_);
lean_ctor_set_uint8(v___x_3431_, sizeof(void*)*7, v_trackZetaDelta_3420_);
lean_ctor_set_uint8(v___x_3431_, sizeof(void*)*7 + 1, v_univApprox_3427_);
lean_ctor_set_uint8(v___x_3431_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3428_);
lean_ctor_set_uint8(v___x_3431_, sizeof(void*)*7 + 3, v_cacheInferType_3429_);
lean_inc(v___y_3407_);
lean_inc_ref(v___y_3412_);
lean_inc(v___y_3408_);
lean_inc(v_a_3414_);
v___x_3432_ = lean_whnf(v_a_3414_, v___x_3431_, v___y_3408_, v___y_3412_, v___y_3407_);
v___y_3356_ = v___y_3407_;
v___y_3357_ = v___y_3408_;
v___y_3358_ = v___y_3409_;
v___y_3359_ = v___y_3410_;
v___y_3360_ = v_a_3414_;
v___y_3361_ = v___y_3411_;
v___y_3362_ = v___y_3412_;
v___y_3363_ = v___x_3432_;
goto v___jp_3355_;
}
else
{
lean_object* v___x_3433_; 
lean_inc(v___y_3407_);
lean_inc_ref(v___y_3412_);
lean_inc(v___y_3408_);
lean_inc_ref(v___y_3410_);
lean_inc(v_a_3414_);
v___x_3433_ = lean_whnf(v_a_3414_, v___y_3410_, v___y_3408_, v___y_3412_, v___y_3407_);
v___y_3356_ = v___y_3407_;
v___y_3357_ = v___y_3408_;
v___y_3358_ = v___y_3409_;
v___y_3359_ = v___y_3410_;
v___y_3360_ = v_a_3414_;
v___y_3361_ = v___y_3411_;
v___y_3362_ = v___y_3412_;
v___y_3363_ = v___x_3433_;
goto v___jp_3355_;
}
}
else
{
lean_object* v_a_3434_; 
v_a_3434_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v___x_3413_, 1);
v___y_3346_ = v___y_3407_;
v___y_3347_ = v___y_3408_;
v___y_3348_ = v___y_3409_;
v___y_3349_ = v___y_3410_;
v___y_3350_ = v___y_3412_;
v___y_3351_ = v___y_3411_;
v_a_3352_ = v_a_3434_;
goto v___jp_3345_;
}
}
v___jp_3435_:
{
if (v___y_3442_ == 0)
{
v___y_3327_ = v___y_3438_;
v___y_3328_ = v___y_3440_;
v___y_3329_ = v___y_3439_;
v___y_3330_ = v___y_3437_;
v___y_3331_ = v___y_3441_;
v___y_3332_ = v___y_3436_;
goto v___jp_3326_;
}
else
{
v___y_3407_ = v___y_3436_;
v___y_3408_ = v___y_3437_;
v___y_3409_ = v___y_3438_;
v___y_3410_ = v___y_3439_;
v___y_3411_ = v___y_3440_;
v___y_3412_ = v___y_3441_;
goto v___jp_3406_;
}
}
v___jp_3443_:
{
if (v___y_3451_ == 0)
{
lean_dec_ref(v___y_3444_);
v___y_3436_ = v___y_3445_;
v___y_3437_ = v___y_3446_;
v___y_3438_ = v___y_3447_;
v___y_3439_ = v___y_3448_;
v___y_3440_ = v___y_3450_;
v___y_3441_ = v___y_3449_;
v___y_3442_ = v___x_3280_;
goto v___jp_3435_;
}
else
{
uint8_t v___x_3452_; 
v___x_3452_ = l_Lean_Expr_hasFVar(v___y_3444_);
lean_dec_ref(v___y_3444_);
if (v___x_3452_ == 0)
{
v___y_3407_ = v___y_3445_;
v___y_3408_ = v___y_3446_;
v___y_3409_ = v___y_3447_;
v___y_3410_ = v___y_3448_;
v___y_3411_ = v___y_3450_;
v___y_3412_ = v___y_3449_;
goto v___jp_3406_;
}
else
{
v___y_3436_ = v___y_3445_;
v___y_3437_ = v___y_3446_;
v___y_3438_ = v___y_3447_;
v___y_3439_ = v___y_3448_;
v___y_3440_ = v___y_3450_;
v___y_3441_ = v___y_3449_;
v___y_3442_ = v___x_3280_;
goto v___jp_3435_;
}
}
}
v___jp_3453_:
{
lean_object* v___x_3461_; 
lean_inc_ref(v___x_3325_);
v___x_3461_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3325_, v___y_3455_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; uint8_t v___x_3463_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3463_ = l_Lean_Expr_hasMVar(v_a_3462_);
if (v___x_3463_ == 0)
{
v___y_3444_ = v_a_3462_;
v___y_3445_ = v___y_3454_;
v___y_3446_ = v___y_3455_;
v___y_3447_ = v___y_3456_;
v___y_3448_ = v___y_3457_;
v___y_3449_ = v___y_3458_;
v___y_3450_ = v___y_3459_;
v___y_3451_ = v___y_3460_;
goto v___jp_3443_;
}
else
{
v___y_3444_ = v_a_3462_;
v___y_3445_ = v___y_3454_;
v___y_3446_ = v___y_3455_;
v___y_3447_ = v___y_3456_;
v___y_3448_ = v___y_3457_;
v___y_3449_ = v___y_3458_;
v___y_3450_ = v___y_3459_;
v___y_3451_ = v___x_3280_;
goto v___jp_3443_;
}
}
else
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3464_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3461_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3461_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_a_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
v___jp_3472_:
{
if (v___y_3479_ == 0)
{
v___y_3327_ = v___y_3475_;
v___y_3328_ = v___y_3477_;
v___y_3329_ = v___y_3476_;
v___y_3330_ = v___y_3474_;
v___y_3331_ = v___y_3478_;
v___y_3332_ = v___y_3473_;
goto v___jp_3326_;
}
else
{
v___y_3454_ = v___y_3473_;
v___y_3455_ = v___y_3474_;
v___y_3456_ = v___y_3475_;
v___y_3457_ = v___y_3476_;
v___y_3458_ = v___y_3478_;
v___y_3459_ = v___y_3477_;
v___y_3460_ = v___y_3479_;
goto v___jp_3453_;
}
}
v___jp_3480_:
{
uint8_t v_useDecide_3487_; 
v_useDecide_3487_ = lean_ctor_get_uint8(v_config_3173_, sizeof(void*)*1);
if (v_useDecide_3487_ == 0)
{
v___y_3473_ = v___y_3486_;
v___y_3474_ = v___y_3484_;
v___y_3475_ = v___y_3481_;
v___y_3476_ = v___y_3483_;
v___y_3477_ = v_isHEq_3482_;
v___y_3478_ = v___y_3485_;
v___y_3479_ = v___x_3280_;
goto v___jp_3472_;
}
else
{
uint8_t v___x_3488_; 
v___x_3488_ = l_Lean_Expr_hasFVar(v___x_3325_);
if (v___x_3488_ == 0)
{
v___y_3454_ = v___y_3486_;
v___y_3455_ = v___y_3484_;
v___y_3456_ = v___y_3481_;
v___y_3457_ = v___y_3483_;
v___y_3458_ = v___y_3485_;
v___y_3459_ = v_isHEq_3482_;
v___y_3460_ = v_useDecide_3487_;
goto v___jp_3453_;
}
else
{
v___y_3473_ = v___y_3486_;
v___y_3474_ = v___y_3484_;
v___y_3475_ = v___y_3481_;
v___y_3476_ = v___y_3483_;
v___y_3477_ = v_isHEq_3482_;
v___y_3478_ = v___y_3485_;
v___y_3479_ = v___x_3280_;
goto v___jp_3472_;
}
}
}
v___jp_3489_:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_Lean_Meta_isExprDefEq(v___y_3491_, v___y_3492_, v___y_3494_, v___y_3490_, v___y_3496_, v___y_3495_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; uint8_t v___x_3499_; 
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___x_3499_ = lean_unbox(v_a_3498_);
lean_dec(v_a_3498_);
if (v___x_3499_ == 0)
{
v___y_3481_ = v___y_3493_;
v_isHEq_3482_ = v___x_3184_;
v___y_3483_ = v___y_3494_;
v___y_3484_ = v___y_3490_;
v___y_3485_ = v___y_3496_;
v___y_3486_ = v___y_3495_;
goto v___jp_3480_;
}
else
{
lean_object* v___x_3500_; 
lean_dec_ref(v___x_3325_);
lean_dec_ref(v_config_3173_);
lean_inc(v_mvarId_3174_);
v___x_3500_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3494_, v___y_3490_, v___y_3496_, v___y_3495_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_a_3501_);
lean_dec_ref_known(v___x_3500_, 1);
v___x_3502_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3503_ = l_Lean_Meta_mkEqOfHEq(v___x_3502_, v___x_3184_, v___y_3494_, v___y_3490_, v___y_3496_, v___y_3495_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___x_3505_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v___x_3505_ = l_Lean_Meta_mkNoConfusion(v_a_3501_, v_a_3504_, v___y_3494_, v___y_3490_, v___y_3496_, v___y_3495_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v___x_3507_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v___x_3507_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3506_, v___y_3490_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; 
lean_dec_ref_known(v___x_3507_, 1);
v___x_3508_ = lean_box(v___x_3184_);
v___x_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
v___x_3510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
lean_ctor_set(v___x_3510_, 1, v___x_3209_);
v___x_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3510_);
v_a_3191_ = v___x_3511_;
goto v___jp_3190_;
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3519_; 
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3512_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3514_ = v___x_3507_;
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3507_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3512_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3520_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3505_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3505_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_dec(v_a_3501_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3528_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3503_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3503_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3536_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3500_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3500_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
else
{
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3544_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___x_3497_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___x_3497_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
v___jp_3552_:
{
lean_object* v___x_3558_; 
lean_inc_ref(v___x_3325_);
v___x_3558_ = l_Lean_Meta_matchHEq_x3f(v___x_3325_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v___x_3558_, 1);
if (lean_obj_tag(v_a_3559_) == 1)
{
lean_object* v_val_3560_; lean_object* v_snd_3561_; lean_object* v_snd_3562_; lean_object* v_fst_3563_; lean_object* v_fst_3564_; lean_object* v_fst_3565_; lean_object* v_snd_3566_; lean_object* v___x_3567_; 
v_val_3560_ = lean_ctor_get(v_a_3559_, 0);
lean_inc(v_val_3560_);
lean_dec_ref_known(v_a_3559_, 1);
v_snd_3561_ = lean_ctor_get(v_val_3560_, 1);
lean_inc(v_snd_3561_);
v_snd_3562_ = lean_ctor_get(v_snd_3561_, 1);
lean_inc(v_snd_3562_);
v_fst_3563_ = lean_ctor_get(v_val_3560_, 0);
lean_inc(v_fst_3563_);
lean_dec(v_val_3560_);
v_fst_3564_ = lean_ctor_get(v_snd_3561_, 0);
lean_inc(v_fst_3564_);
lean_dec(v_snd_3561_);
v_fst_3565_ = lean_ctor_get(v_snd_3562_, 0);
lean_inc(v_fst_3565_);
v_snd_3566_ = lean_ctor_get(v_snd_3562_, 1);
lean_inc(v_snd_3566_);
lean_dec(v_snd_3562_);
v___x_3567_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3564_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
if (lean_obj_tag(v___x_3567_) == 0)
{
lean_object* v_a_3568_; 
v_a_3568_ = lean_ctor_get(v___x_3567_, 0);
lean_inc(v_a_3568_);
lean_dec_ref_known(v___x_3567_, 1);
if (lean_obj_tag(v_a_3568_) == 1)
{
lean_object* v_val_3569_; lean_object* v___x_3570_; 
v_val_3569_ = lean_ctor_get(v_a_3568_, 0);
lean_inc(v_val_3569_);
lean_dec_ref_known(v_a_3568_, 1);
v___x_3570_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3566_, v___y_3554_, v___y_3555_, v___y_3556_, v___y_3557_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v_a_3571_; 
v_a_3571_ = lean_ctor_get(v___x_3570_, 0);
lean_inc(v_a_3571_);
lean_dec_ref_known(v___x_3570_, 1);
if (lean_obj_tag(v_a_3571_) == 1)
{
lean_object* v_toConstantVal_3572_; lean_object* v_val_3573_; lean_object* v_toConstantVal_3574_; lean_object* v_name_3575_; lean_object* v_name_3576_; uint8_t v___x_3577_; 
v_toConstantVal_3572_ = lean_ctor_get(v_val_3569_, 0);
lean_inc_ref(v_toConstantVal_3572_);
lean_dec(v_val_3569_);
v_val_3573_ = lean_ctor_get(v_a_3571_, 0);
lean_inc(v_val_3573_);
lean_dec_ref_known(v_a_3571_, 1);
v_toConstantVal_3574_ = lean_ctor_get(v_val_3573_, 0);
lean_inc_ref(v_toConstantVal_3574_);
lean_dec(v_val_3573_);
v_name_3575_ = lean_ctor_get(v_toConstantVal_3572_, 0);
lean_inc(v_name_3575_);
lean_dec_ref(v_toConstantVal_3572_);
v_name_3576_ = lean_ctor_get(v_toConstantVal_3574_, 0);
lean_inc(v_name_3576_);
lean_dec_ref(v_toConstantVal_3574_);
v___x_3577_ = lean_name_eq(v_name_3575_, v_name_3576_);
lean_dec(v_name_3576_);
lean_dec(v_name_3575_);
if (v___x_3577_ == 0)
{
v___y_3490_ = v___y_3555_;
v___y_3491_ = v_fst_3563_;
v___y_3492_ = v_fst_3565_;
v___y_3493_ = v_isEq_3553_;
v___y_3494_ = v___y_3554_;
v___y_3495_ = v___y_3557_;
v___y_3496_ = v___y_3556_;
goto v___jp_3489_;
}
else
{
if (v___x_3280_ == 0)
{
lean_dec(v_fst_3565_);
lean_dec(v_fst_3563_);
v___y_3481_ = v_isEq_3553_;
v_isHEq_3482_ = v___x_3184_;
v___y_3483_ = v___y_3554_;
v___y_3484_ = v___y_3555_;
v___y_3485_ = v___y_3556_;
v___y_3486_ = v___y_3557_;
goto v___jp_3480_;
}
else
{
v___y_3490_ = v___y_3555_;
v___y_3491_ = v_fst_3563_;
v___y_3492_ = v_fst_3565_;
v___y_3493_ = v_isEq_3553_;
v___y_3494_ = v___y_3554_;
v___y_3495_ = v___y_3557_;
v___y_3496_ = v___y_3556_;
goto v___jp_3489_;
}
}
}
else
{
lean_dec(v_a_3571_);
lean_dec(v_val_3569_);
lean_dec(v_fst_3565_);
lean_dec(v_fst_3563_);
v___y_3481_ = v_isEq_3553_;
v_isHEq_3482_ = v___x_3184_;
v___y_3483_ = v___y_3554_;
v___y_3484_ = v___y_3555_;
v___y_3485_ = v___y_3556_;
v___y_3486_ = v___y_3557_;
goto v___jp_3480_;
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec(v_val_3569_);
lean_dec(v_fst_3565_);
lean_dec(v_fst_3563_);
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3578_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3570_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3570_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
else
{
lean_dec(v_a_3568_);
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec(v_fst_3563_);
v___y_3481_ = v_isEq_3553_;
v_isHEq_3482_ = v___x_3184_;
v___y_3483_ = v___y_3554_;
v___y_3484_ = v___y_3555_;
v___y_3485_ = v___y_3556_;
v___y_3486_ = v___y_3557_;
goto v___jp_3480_;
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec(v_fst_3563_);
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3586_ = lean_ctor_get(v___x_3567_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3567_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___x_3567_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3567_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
else
{
lean_dec(v_a_3559_);
v___y_3481_ = v_isEq_3553_;
v_isHEq_3482_ = v___x_3280_;
v___y_3483_ = v___y_3554_;
v___y_3484_ = v___y_3555_;
v___y_3485_ = v___y_3556_;
v___y_3486_ = v___y_3557_;
goto v___jp_3480_;
}
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec_ref(v___x_3325_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3594_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3558_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3558_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
v___jp_3602_:
{
lean_object* v___x_3607_; 
lean_inc_ref(v___x_3325_);
v___x_3607_ = l_Lean_Meta_matchEq_x3f(v___x_3325_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
if (lean_obj_tag(v_a_3608_) == 1)
{
lean_object* v_val_3609_; lean_object* v_snd_3610_; lean_object* v_fst_3611_; lean_object* v_snd_3612_; lean_object* v___x_3613_; 
v_val_3609_ = lean_ctor_get(v_a_3608_, 0);
lean_inc(v_val_3609_);
lean_dec_ref_known(v_a_3608_, 1);
v_snd_3610_ = lean_ctor_get(v_val_3609_, 1);
lean_inc(v_snd_3610_);
lean_dec(v_val_3609_);
v_fst_3611_ = lean_ctor_get(v_snd_3610_, 0);
lean_inc(v_fst_3611_);
v_snd_3612_ = lean_ctor_get(v_snd_3610_, 1);
lean_inc(v_snd_3612_);
lean_dec(v_snd_3610_);
v___x_3613_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3611_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3613_, 1);
if (lean_obj_tag(v_a_3614_) == 1)
{
lean_object* v_val_3615_; lean_object* v___x_3616_; 
v_val_3615_ = lean_ctor_get(v_a_3614_, 0);
lean_inc(v_val_3615_);
lean_dec_ref_known(v_a_3614_, 1);
v___x_3616_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3612_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
if (lean_obj_tag(v_a_3617_) == 1)
{
lean_object* v_toConstantVal_3618_; lean_object* v_val_3619_; lean_object* v_toConstantVal_3620_; lean_object* v_name_3621_; lean_object* v_name_3622_; uint8_t v___x_3623_; 
v_toConstantVal_3618_ = lean_ctor_get(v_val_3615_, 0);
lean_inc_ref(v_toConstantVal_3618_);
lean_dec(v_val_3615_);
v_val_3619_ = lean_ctor_get(v_a_3617_, 0);
lean_inc(v_val_3619_);
lean_dec_ref_known(v_a_3617_, 1);
v_toConstantVal_3620_ = lean_ctor_get(v_val_3619_, 0);
lean_inc_ref(v_toConstantVal_3620_);
lean_dec(v_val_3619_);
v_name_3621_ = lean_ctor_get(v_toConstantVal_3618_, 0);
lean_inc(v_name_3621_);
lean_dec_ref(v_toConstantVal_3618_);
v_name_3622_ = lean_ctor_get(v_toConstantVal_3620_, 0);
lean_inc(v_name_3622_);
lean_dec_ref(v_toConstantVal_3620_);
v___x_3623_ = lean_name_eq(v_name_3621_, v_name_3622_);
lean_dec(v_name_3622_);
lean_dec(v_name_3621_);
if (v___x_3623_ == 0)
{
lean_dec_ref(v___x_3325_);
lean_dec_ref(v_config_3173_);
v___y_3211_ = v___y_3605_;
v___y_3212_ = v___y_3606_;
v___y_3213_ = v___y_3603_;
v___y_3214_ = v___y_3604_;
goto v___jp_3210_;
}
else
{
if (v___x_3280_ == 0)
{
lean_del_object(v___x_3207_);
v_isEq_3553_ = v___x_3184_;
v___y_3554_ = v___y_3603_;
v___y_3555_ = v___y_3604_;
v___y_3556_ = v___y_3605_;
v___y_3557_ = v___y_3606_;
goto v___jp_3552_;
}
else
{
lean_dec_ref(v___x_3325_);
lean_dec_ref(v_config_3173_);
v___y_3211_ = v___y_3605_;
v___y_3212_ = v___y_3606_;
v___y_3213_ = v___y_3603_;
v___y_3214_ = v___y_3604_;
goto v___jp_3210_;
}
}
}
else
{
lean_dec(v_a_3617_);
lean_dec(v_val_3615_);
lean_del_object(v___x_3207_);
v_isEq_3553_ = v___x_3184_;
v___y_3554_ = v___y_3603_;
v___y_3555_ = v___y_3604_;
v___y_3556_ = v___y_3605_;
v___y_3557_ = v___y_3606_;
goto v___jp_3552_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3631_; 
lean_dec(v_val_3615_);
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3624_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3626_ = v___x_3616_;
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3616_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3627_ == 0)
{
v___x_3629_ = v___x_3626_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
}
else
{
lean_dec(v_a_3614_);
lean_dec(v_snd_3612_);
lean_del_object(v___x_3207_);
v_isEq_3553_ = v___x_3184_;
v___y_3554_ = v___y_3603_;
v___y_3555_ = v___y_3604_;
v___y_3556_ = v___y_3605_;
v___y_3557_ = v___y_3606_;
goto v___jp_3552_;
}
}
else
{
lean_object* v_a_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3639_; 
lean_dec(v_snd_3612_);
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3632_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3634_ = v___x_3613_;
v_isShared_3635_ = v_isSharedCheck_3639_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_a_3632_);
lean_dec(v___x_3613_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3639_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3637_; 
if (v_isShared_3635_ == 0)
{
v___x_3637_ = v___x_3634_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v_a_3632_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
}
else
{
lean_dec(v_a_3608_);
lean_del_object(v___x_3207_);
v_isEq_3553_ = v___x_3280_;
v___y_3554_ = v___y_3603_;
v___y_3555_ = v___y_3604_;
v___y_3556_ = v___y_3605_;
v___y_3557_ = v___y_3606_;
goto v___jp_3552_;
}
}
else
{
lean_object* v_a_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3640_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3642_ = v___x_3607_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_a_3640_);
lean_dec(v___x_3607_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_a_3640_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
}
v___jp_3648_:
{
lean_object* v___x_3653_; 
lean_inc_ref(v___x_3325_);
v___x_3653_ = l_Lean_refutableHasNotBit_x3f(v___x_3325_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref_known(v___x_3653_, 1);
if (lean_obj_tag(v_a_3654_) == 1)
{
lean_object* v_val_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3695_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec_ref(v_config_3173_);
v_val_3655_ = lean_ctor_get(v_a_3654_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_a_3654_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3657_ = v_a_3654_;
v_isShared_3658_ = v_isSharedCheck_3695_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_val_3655_);
lean_dec(v_a_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3695_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3659_; 
lean_inc(v_mvarId_3174_);
v___x_3659_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
v___x_3661_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3662_ = l_Lean_Meta_mkAbsurd(v_a_3660_, v_val_3655_, v___x_3661_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3664_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v___x_3662_, 1);
v___x_3664_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3663_, v___y_3650_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v___x_3665_; lean_object* v___x_3667_; 
lean_dec_ref_known(v___x_3664_, 1);
v___x_3665_ = lean_box(v___x_3184_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 0, v___x_3665_);
v___x_3667_ = v___x_3657_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3665_);
v___x_3667_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
lean_ctor_set(v___x_3668_, 1, v___x_3209_);
v___x_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
v_a_3191_ = v___x_3669_;
goto v___jp_3190_;
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
lean_del_object(v___x_3657_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3671_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3664_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3664_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
lean_del_object(v___x_3657_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3679_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3662_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3662_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
else
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3694_; 
lean_del_object(v___x_3657_);
lean_dec(v_val_3655_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3687_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3689_ = v___x_3659_;
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3659_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3692_; 
if (v_isShared_3690_ == 0)
{
v___x_3692_ = v___x_3689_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_a_3687_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
}
else
{
lean_object* v___x_3696_; 
lean_dec(v_a_3654_);
lean_inc_ref(v___x_3325_);
v___x_3696_ = l_Lean_Meta_matchNe_x3f(v___x_3325_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v___x_3696_, 1);
if (lean_obj_tag(v_a_3697_) == 1)
{
lean_object* v_val_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3768_; 
v_val_3698_ = lean_ctor_get(v_a_3697_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_a_3697_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3700_ = v_a_3697_;
v_isShared_3701_ = v_isSharedCheck_3768_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_val_3698_);
lean_dec(v_a_3697_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3768_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v_snd_3702_; lean_object* v_fst_3703_; lean_object* v_snd_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3767_; 
v_snd_3702_ = lean_ctor_get(v_val_3698_, 1);
lean_inc(v_snd_3702_);
lean_dec(v_val_3698_);
v_fst_3703_ = lean_ctor_get(v_snd_3702_, 0);
v_snd_3704_ = lean_ctor_get(v_snd_3702_, 1);
v_isSharedCheck_3767_ = !lean_is_exclusive(v_snd_3702_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3706_ = v_snd_3702_;
v_isShared_3707_ = v_isSharedCheck_3767_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_snd_3704_);
lean_inc(v_fst_3703_);
lean_dec(v_snd_3702_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3767_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; 
lean_inc(v_fst_3703_);
v___x_3708_ = l_Lean_Meta_isExprDefEq(v_fst_3703_, v_snd_3704_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3708_) == 0)
{
lean_object* v_a_3709_; uint8_t v___x_3710_; 
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
lean_inc(v_a_3709_);
lean_dec_ref_known(v___x_3708_, 1);
v___x_3710_ = lean_unbox(v_a_3709_);
lean_dec(v_a_3709_);
if (v___x_3710_ == 0)
{
lean_del_object(v___x_3706_);
lean_dec(v_fst_3703_);
lean_del_object(v___x_3700_);
v___y_3603_ = v___y_3649_;
v___y_3604_ = v___y_3650_;
v___y_3605_ = v___y_3651_;
v___y_3606_ = v___y_3652_;
goto v___jp_3602_;
}
else
{
lean_object* v___x_3711_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec_ref(v_config_3173_);
lean_inc(v_mvarId_3174_);
v___x_3711_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; lean_object* v___x_3713_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3711_, 1);
v___x_3713_ = l_Lean_Meta_mkEqRefl(v_fst_3703_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_a_3714_);
lean_dec_ref_known(v___x_3713_, 1);
v___x_3715_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3716_ = l_Lean_Meta_mkAbsurd(v_a_3712_, v_a_3714_, v___x_3715_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3718_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
lean_inc(v_a_3717_);
lean_dec_ref_known(v___x_3716_, 1);
v___x_3718_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3717_, v___y_3650_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3719_; lean_object* v___x_3721_; 
lean_dec_ref_known(v___x_3718_, 1);
v___x_3719_ = lean_box(v___x_3184_);
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v___x_3719_);
v___x_3721_ = v___x_3700_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v___x_3719_);
v___x_3721_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3723_; 
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 1, v___x_3209_);
lean_ctor_set(v___x_3706_, 0, v___x_3721_);
v___x_3723_ = v___x_3706_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3721_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v___x_3209_);
v___x_3723_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3724_; 
v___x_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
v_a_3191_ = v___x_3724_;
goto v___jp_3190_;
}
}
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
lean_del_object(v___x_3706_);
lean_del_object(v___x_3700_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3727_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3718_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3718_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_del_object(v___x_3706_);
lean_del_object(v___x_3700_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3735_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3716_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3716_);
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
lean_dec(v_a_3712_);
lean_del_object(v___x_3706_);
lean_del_object(v___x_3700_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3743_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3713_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3713_);
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
lean_del_object(v___x_3706_);
lean_dec(v_fst_3703_);
lean_del_object(v___x_3700_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3751_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3711_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3711_);
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
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_del_object(v___x_3706_);
lean_dec(v_fst_3703_);
lean_del_object(v___x_3700_);
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3759_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3708_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3708_);
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
}
}
else
{
lean_dec(v_a_3697_);
v___y_3603_ = v___y_3649_;
v___y_3604_ = v___y_3650_;
v___y_3605_ = v___y_3651_;
v___y_3606_ = v___y_3652_;
goto v___jp_3602_;
}
}
else
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3776_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3769_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3771_ = v___x_3696_;
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3696_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_a_3769_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
}
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec_ref(v___x_3325_);
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3777_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3653_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3653_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
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
}
else
{
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3199_ = v___x_3251_;
goto v___jp_3198_;
}
v___jp_3210_:
{
lean_object* v___x_3215_; 
lean_inc(v_mvarId_3174_);
v___x_3215_ = l_Lean_MVarId_getType(v_mvarId_3174_, v___y_3213_, v___y_3214_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
v___x_3217_ = l_Lean_LocalDecl_toExpr(v_val_3205_);
v___x_3218_ = l_Lean_Meta_mkNoConfusion(v_a_3216_, v___x_3217_, v___y_3213_, v___y_3214_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v___x_3220_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3218_, 1);
v___x_3220_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3174_, v_a_3219_, v___y_3214_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3223_; 
lean_dec_ref_known(v___x_3220_, 1);
v___x_3221_ = lean_box(v___x_3184_);
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 0, v___x_3221_);
v___x_3223_ = v___x_3207_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3221_);
v___x_3223_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
lean_ctor_set(v___x_3224_, 1, v___x_3209_);
v___x_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3224_);
v_a_3191_ = v___x_3225_;
goto v___jp_3190_;
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_del_object(v___x_3207_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3227_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3220_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3220_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_del_object(v___x_3207_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3235_ = lean_ctor_get(v___x_3218_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3218_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3218_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3218_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
lean_del_object(v___x_3207_);
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
v_a_3243_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3215_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3215_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
v___jp_3252_:
{
lean_object* v_searchFuel_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v_searchFuel_3257_ = lean_ctor_get(v_config_3173_, 0);
v___x_3258_ = l_Lean_LocalDecl_fvarId(v_val_3205_);
lean_dec(v_val_3205_);
lean_inc(v_searchFuel_3257_);
lean_inc(v_mvarId_3174_);
v___x_3259_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3174_, v___x_3258_, v_searchFuel_3257_, v___y_3255_, v___y_3253_, v___y_3256_, v___y_3254_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; uint8_t v___x_3261_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3259_, 1);
v___x_3261_ = lean_unbox(v_a_3260_);
lean_dec(v_a_3260_);
if (v___x_3261_ == 0)
{
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3199_ = v___x_3251_;
goto v___jp_3198_;
}
else
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v___x_3262_ = lean_box(v___x_3184_);
v___x_3263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
v___x_3264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set(v___x_3264_, 1, v___x_3209_);
v___x_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3264_);
v_a_3191_ = v___x_3265_;
goto v___jp_3190_;
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3266_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3259_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3259_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
v___jp_3274_:
{
if (v___y_3279_ == 0)
{
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
v_a_3199_ = v___x_3251_;
goto v___jp_3198_;
}
else
{
v___y_3253_ = v___y_3275_;
v___y_3254_ = v___y_3276_;
v___y_3255_ = v___y_3277_;
v___y_3256_ = v___y_3278_;
goto v___jp_3252_;
}
}
v___jp_3281_:
{
if (v___y_3286_ == 0)
{
v___y_3253_ = v___y_3282_;
v___y_3254_ = v___y_3283_;
v___y_3255_ = v___y_3284_;
v___y_3256_ = v___y_3285_;
goto v___jp_3252_;
}
else
{
v___y_3275_ = v___y_3282_;
v___y_3276_ = v___y_3283_;
v___y_3277_ = v___y_3284_;
v___y_3278_ = v___y_3285_;
v___y_3279_ = v___x_3280_;
goto v___jp_3274_;
}
}
v___jp_3287_:
{
if (v___y_3293_ == 0)
{
v___y_3275_ = v___y_3288_;
v___y_3276_ = v___y_3289_;
v___y_3277_ = v___y_3290_;
v___y_3278_ = v___y_3291_;
v___y_3279_ = v___x_3280_;
goto v___jp_3274_;
}
else
{
v___y_3282_ = v___y_3288_;
v___y_3283_ = v___y_3289_;
v___y_3284_ = v___y_3290_;
v___y_3285_ = v___y_3291_;
v___y_3286_ = v___y_3292_;
goto v___jp_3281_;
}
}
v___jp_3294_:
{
uint8_t v_emptyType_3301_; 
v_emptyType_3301_ = lean_ctor_get_uint8(v_config_3173_, sizeof(void*)*1 + 1);
if (v_emptyType_3301_ == 0)
{
v___y_3288_ = v___y_3298_;
v___y_3289_ = v___y_3300_;
v___y_3290_ = v___y_3297_;
v___y_3291_ = v___y_3299_;
v___y_3292_ = v___y_3296_;
v___y_3293_ = v___x_3280_;
goto v___jp_3287_;
}
else
{
if (v___y_3295_ == 0)
{
v___y_3282_ = v___y_3298_;
v___y_3283_ = v___y_3300_;
v___y_3284_ = v___y_3297_;
v___y_3285_ = v___y_3299_;
v___y_3286_ = v___y_3296_;
goto v___jp_3281_;
}
else
{
v___y_3288_ = v___y_3298_;
v___y_3289_ = v___y_3300_;
v___y_3290_ = v___y_3297_;
v___y_3291_ = v___y_3299_;
v___y_3292_ = v___y_3296_;
v___y_3293_ = v___x_3280_;
goto v___jp_3287_;
}
}
}
v___jp_3302_:
{
if (v___y_3309_ == 0)
{
v___y_3295_ = v___y_3304_;
v___y_3296_ = v___y_3308_;
v___y_3297_ = v___y_3307_;
v___y_3298_ = v___y_3306_;
v___y_3299_ = v___y_3303_;
v___y_3300_ = v___y_3305_;
goto v___jp_3294_;
}
else
{
lean_object* v___x_3310_; 
lean_inc(v_val_3205_);
lean_inc(v_mvarId_3174_);
v___x_3310_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3174_, v_val_3205_, v___y_3307_, v___y_3306_, v___y_3303_, v___y_3305_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; uint8_t v___x_3312_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v___x_3312_ = lean_unbox(v_a_3311_);
lean_dec(v_a_3311_);
if (v___x_3312_ == 0)
{
v___y_3295_ = v___y_3304_;
v___y_3296_ = v___y_3308_;
v___y_3297_ = v___y_3307_;
v___y_3298_ = v___y_3306_;
v___y_3299_ = v___y_3303_;
v___y_3300_ = v___y_3305_;
goto v___jp_3294_;
}
else
{
lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
lean_dec(v_val_3205_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v___x_3313_ = lean_box(v___x_3184_);
v___x_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
v___x_3315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3314_);
lean_ctor_set(v___x_3315_, 1, v___x_3209_);
v___x_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3315_);
v_a_3191_ = v___x_3316_;
goto v___jp_3190_;
}
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
lean_dec(v_val_3205_);
lean_del_object(v___x_3188_);
lean_dec(v_snd_3186_);
lean_dec(v_mvarId_3174_);
lean_dec_ref(v_config_3173_);
v_a_3317_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_3310_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3310_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3317_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
}
}
}
v___jp_3190_:
{
lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3192_, 0, v_a_3191_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3192_);
v___x_3194_ = v___x_3188_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_3192_);
lean_ctor_set(v_reuseFailAlloc_3196_, 1, v_snd_3186_);
v___x_3194_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___x_3195_; 
v___x_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
return v___x_3195_;
}
}
v___jp_3198_:
{
lean_object* v___x_3200_; size_t v___x_3201_; size_t v___x_3202_; 
v___x_3200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3197_);
lean_ctor_set(v___x_3200_, 1, v_a_3199_);
v___x_3201_ = ((size_t)1ULL);
v___x_3202_ = lean_usize_add(v_i_3177_, v___x_3201_);
v_i_3177_ = v___x_3202_;
v_b_3178_ = v___x_3200_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_config_3858_, lean_object* v_mvarId_3859_, lean_object* v_as_3860_, lean_object* v_sz_3861_, lean_object* v_i_3862_, lean_object* v_b_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_){
_start:
{
size_t v_sz_boxed_3869_; size_t v_i_boxed_3870_; lean_object* v_res_3871_; 
v_sz_boxed_3869_ = lean_unbox_usize(v_sz_3861_);
lean_dec(v_sz_3861_);
v_i_boxed_3870_ = lean_unbox_usize(v_i_3862_);
lean_dec(v_i_3862_);
v_res_3871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3858_, v_mvarId_3859_, v_as_3860_, v_sz_boxed_3869_, v_i_boxed_3870_, v_b_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec_ref(v_as_3860_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object* v_config_3872_, lean_object* v_mvarId_3873_, lean_object* v_as_3874_, size_t v_sz_3875_, size_t v_i_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_){
_start:
{
uint8_t v___x_3883_; 
v___x_3883_ = lean_usize_dec_lt(v_i_3876_, v_sz_3875_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; 
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v___x_3884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3884_, 0, v_b_3877_);
return v___x_3884_;
}
else
{
lean_object* v_snd_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_4555_; 
v_snd_3885_ = lean_ctor_get(v_b_3877_, 1);
v_isSharedCheck_4555_ = !lean_is_exclusive(v_b_3877_);
if (v_isSharedCheck_4555_ == 0)
{
lean_object* v_unused_4556_; 
v_unused_4556_ = lean_ctor_get(v_b_3877_, 0);
lean_dec(v_unused_4556_);
v___x_3887_ = v_b_3877_;
v_isShared_3888_ = v_isSharedCheck_4555_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_snd_3885_);
lean_dec(v_b_3877_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_4555_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
lean_object* v_a_3890_; lean_object* v___x_3896_; lean_object* v_a_3898_; lean_object* v_a_3903_; 
v___x_3896_ = lean_box(0);
v_a_3903_ = lean_array_uget(v_as_3874_, v_i_3876_);
if (lean_obj_tag(v_a_3903_) == 0)
{
lean_del_object(v___x_3887_);
v_a_3898_ = v_snd_3885_;
goto v___jp_3897_;
}
else
{
lean_object* v_val_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_4554_; 
v_val_3904_ = lean_ctor_get(v_a_3903_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v_a_3903_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_3906_ = v_a_3903_;
v_isShared_3907_ = v_isSharedCheck_4554_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_val_3904_);
lean_dec(v_a_3903_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_4554_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3908_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; lean_object* v___x_3950_; lean_object* v___y_3952_; lean_object* v___y_3953_; lean_object* v___y_3954_; lean_object* v___y_3955_; lean_object* v___y_3974_; lean_object* v___y_3975_; lean_object* v___y_3976_; lean_object* v___y_3977_; uint8_t v___y_3978_; uint8_t v___x_3979_; lean_object* v___y_3981_; lean_object* v___y_3982_; uint8_t v___y_3983_; lean_object* v___y_3984_; lean_object* v___y_3985_; uint8_t v___y_3987_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; lean_object* v___y_3991_; uint8_t v___y_3992_; uint8_t v___y_3994_; uint8_t v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; uint8_t v___y_4006_; uint8_t v___y_4007_; uint8_t v___y_4008_; 
v___x_3908_ = lean_box(0);
v___x_3950_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3979_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3904_);
if (v___x_3979_ == 0)
{
lean_object* v___x_4024_; uint8_t v___y_4026_; uint8_t v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4035_; lean_object* v___y_4036_; uint8_t v___y_4037_; lean_object* v___y_4038_; uint8_t v___y_4039_; lean_object* v___y_4040_; lean_object* v___y_4041_; uint8_t v___y_4042_; lean_object* v___y_4045_; lean_object* v___y_4046_; uint8_t v___y_4047_; lean_object* v___y_4048_; uint8_t v___y_4049_; lean_object* v___y_4050_; lean_object* v_a_4051_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; uint8_t v___y_4058_; uint8_t v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4106_; lean_object* v___y_4107_; uint8_t v___y_4108_; uint8_t v___y_4109_; lean_object* v___y_4110_; lean_object* v___y_4111_; lean_object* v___y_4135_; lean_object* v___y_4136_; uint8_t v___y_4137_; uint8_t v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; uint8_t v___y_4141_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; uint8_t v___y_4146_; lean_object* v___y_4147_; uint8_t v___y_4148_; lean_object* v___y_4149_; uint8_t v___y_4150_; lean_object* v___y_4153_; lean_object* v___y_4154_; uint8_t v___y_4155_; uint8_t v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; uint8_t v___y_4159_; lean_object* v___y_4172_; lean_object* v___y_4173_; uint8_t v___y_4174_; uint8_t v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; uint8_t v___y_4178_; uint8_t v___y_4180_; uint8_t v_isHEq_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; uint8_t v___y_4195_; uint8_t v_isEq_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___x_4484_; 
v___x_4024_ = l_Lean_LocalDecl_type(v_val_3904_);
lean_inc_ref(v___x_4024_);
v___x_4484_ = l_Lean_Meta_matchNot_x3f(v___x_4024_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_4484_) == 0)
{
lean_object* v_a_4485_; 
v_a_4485_ = lean_ctor_get(v___x_4484_, 0);
lean_inc(v_a_4485_);
lean_dec_ref_known(v___x_4484_, 1);
if (lean_obj_tag(v_a_4485_) == 1)
{
lean_object* v_val_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4545_; 
v_val_4486_ = lean_ctor_get(v_a_4485_, 0);
v_isSharedCheck_4545_ = !lean_is_exclusive(v_a_4485_);
if (v_isSharedCheck_4545_ == 0)
{
v___x_4488_ = v_a_4485_;
v_isShared_4489_ = v_isSharedCheck_4545_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_val_4486_);
lean_dec(v_a_4485_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4545_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4490_; 
v___x_4490_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_4486_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_4490_) == 0)
{
lean_object* v_a_4491_; 
v_a_4491_ = lean_ctor_get(v___x_4490_, 0);
lean_inc(v_a_4491_);
lean_dec_ref_known(v___x_4490_, 1);
if (lean_obj_tag(v_a_4491_) == 1)
{
lean_object* v_val_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4536_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec_ref(v_config_3872_);
v_val_4492_ = lean_ctor_get(v_a_4491_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v_a_4491_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4494_ = v_a_4491_;
v_isShared_4495_ = v_isSharedCheck_4536_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_val_4492_);
lean_dec(v_a_4491_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4536_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4496_; 
lean_inc(v_mvarId_3873_);
v___x_4496_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_4496_) == 0)
{
lean_object* v_a_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v_a_4497_ = lean_ctor_get(v___x_4496_, 0);
lean_inc(v_a_4497_);
lean_dec_ref_known(v___x_4496_, 1);
v___x_4498_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_4499_ = l_Lean_mkFVar(v_val_4492_);
v___x_4500_ = l_Lean_Expr_app___override(v___x_4498_, v___x_4499_);
v___x_4501_ = l_Lean_Meta_mkFalseElim(v_a_4497_, v___x_4500_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; lean_object* v___x_4503_; 
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref_known(v___x_4501_, 1);
v___x_4503_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_4502_, v___y_3879_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v___x_4504_; lean_object* v___x_4506_; 
lean_dec_ref_known(v___x_4503_, 1);
v___x_4504_ = lean_box(v___x_3883_);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v___x_4504_);
v___x_4506_ = v___x_4494_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4511_; 
v_reuseFailAlloc_4511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4511_, 0, v___x_4504_);
v___x_4506_ = v_reuseFailAlloc_4511_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
lean_object* v___x_4507_; lean_object* v___x_4509_; 
v___x_4507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
lean_ctor_set(v___x_4507_, 1, v___x_3908_);
if (v_isShared_4489_ == 0)
{
lean_ctor_set_tag(v___x_4488_, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4507_);
v___x_4509_ = v___x_4488_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v___x_4507_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
v_a_3890_ = v___x_4509_;
goto v___jp_3889_;
}
}
}
else
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
lean_del_object(v___x_4494_);
lean_del_object(v___x_4488_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_4512_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4503_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4503_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_a_4512_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
}
else
{
lean_object* v_a_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4527_; 
lean_del_object(v___x_4494_);
lean_del_object(v___x_4488_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4520_ = lean_ctor_get(v___x_4501_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4522_ = v___x_4501_;
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_a_4520_);
lean_dec(v___x_4501_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4525_; 
if (v_isShared_4523_ == 0)
{
v___x_4525_ = v___x_4522_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v_a_4520_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
return v___x_4525_;
}
}
}
}
else
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4535_; 
lean_del_object(v___x_4494_);
lean_dec(v_val_4492_);
lean_del_object(v___x_4488_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4528_ = lean_ctor_get(v___x_4496_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4530_ = v___x_4496_;
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4496_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v___x_4533_; 
if (v_isShared_4531_ == 0)
{
v___x_4533_ = v___x_4530_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4528_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
}
}
}
else
{
lean_dec(v_a_4491_);
lean_del_object(v___x_4488_);
v___y_4348_ = v___y_3878_;
v___y_4349_ = v___y_3879_;
v___y_4350_ = v___y_3880_;
v___y_4351_ = v___y_3881_;
goto v___jp_4347_;
}
}
else
{
lean_object* v_a_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4544_; 
lean_del_object(v___x_4488_);
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4537_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4544_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4544_ == 0)
{
v___x_4539_ = v___x_4490_;
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_a_4537_);
lean_dec(v___x_4490_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v___x_4542_; 
if (v_isShared_4540_ == 0)
{
v___x_4542_ = v___x_4539_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v_a_4537_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
}
else
{
lean_dec(v_a_4485_);
v___y_4348_ = v___y_3878_;
v___y_4349_ = v___y_3879_;
v___y_4350_ = v___y_3880_;
v___y_4351_ = v___y_3881_;
goto v___jp_4347_;
}
}
else
{
lean_object* v_a_4546_; lean_object* v___x_4548_; uint8_t v_isShared_4549_; uint8_t v_isSharedCheck_4553_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4546_ = lean_ctor_get(v___x_4484_, 0);
v_isSharedCheck_4553_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4548_ = v___x_4484_;
v_isShared_4549_ = v_isSharedCheck_4553_;
goto v_resetjp_4547_;
}
else
{
lean_inc(v_a_4546_);
lean_dec(v___x_4484_);
v___x_4548_ = lean_box(0);
v_isShared_4549_ = v_isSharedCheck_4553_;
goto v_resetjp_4547_;
}
v_resetjp_4547_:
{
lean_object* v___x_4551_; 
if (v_isShared_4549_ == 0)
{
v___x_4551_ = v___x_4548_;
goto v_reusejp_4550_;
}
else
{
lean_object* v_reuseFailAlloc_4552_; 
v_reuseFailAlloc_4552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4552_, 0, v_a_4546_);
v___x_4551_ = v_reuseFailAlloc_4552_;
goto v_reusejp_4550_;
}
v_reusejp_4550_:
{
return v___x_4551_;
}
}
}
v___jp_4025_:
{
uint8_t v_genDiseq_4032_; 
v_genDiseq_4032_ = lean_ctor_get_uint8(v_config_3872_, sizeof(void*)*1 + 2);
if (v_genDiseq_4032_ == 0)
{
lean_dec_ref(v___x_4024_);
v___y_4002_ = v___y_4031_;
v___y_4003_ = v___y_4030_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___y_4028_;
v___y_4006_ = v___y_4026_;
v___y_4007_ = v___y_4027_;
v___y_4008_ = v___x_3979_;
goto v___jp_4001_;
}
else
{
uint8_t v___x_4033_; 
v___x_4033_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_4024_);
v___y_4002_ = v___y_4031_;
v___y_4003_ = v___y_4030_;
v___y_4004_ = v___y_4029_;
v___y_4005_ = v___y_4028_;
v___y_4006_ = v___y_4026_;
v___y_4007_ = v___y_4027_;
v___y_4008_ = v___x_4033_;
goto v___jp_4001_;
}
}
v___jp_4034_:
{
if (v___y_4042_ == 0)
{
lean_dec_ref(v___y_4038_);
v___y_4026_ = v___y_4037_;
v___y_4027_ = v___y_4039_;
v___y_4028_ = v___y_4036_;
v___y_4029_ = v___y_4040_;
v___y_4030_ = v___y_4041_;
v___y_4031_ = v___y_4035_;
goto v___jp_4025_;
}
else
{
lean_object* v___x_4043_; 
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v___x_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___y_4038_);
return v___x_4043_;
}
}
v___jp_4044_:
{
uint8_t v___x_4052_; 
v___x_4052_ = l_Lean_Exception_isInterrupt(v_a_4051_);
if (v___x_4052_ == 0)
{
uint8_t v___x_4053_; 
lean_inc_ref(v_a_4051_);
v___x_4053_ = l_Lean_Exception_isRuntime(v_a_4051_);
v___y_4035_ = v___y_4045_;
v___y_4036_ = v___y_4046_;
v___y_4037_ = v___y_4047_;
v___y_4038_ = v_a_4051_;
v___y_4039_ = v___y_4049_;
v___y_4040_ = v___y_4048_;
v___y_4041_ = v___y_4050_;
v___y_4042_ = v___x_4053_;
goto v___jp_4034_;
}
else
{
v___y_4035_ = v___y_4045_;
v___y_4036_ = v___y_4046_;
v___y_4037_ = v___y_4047_;
v___y_4038_ = v_a_4051_;
v___y_4039_ = v___y_4049_;
v___y_4040_ = v___y_4048_;
v___y_4041_ = v___y_4050_;
v___y_4042_ = v___x_4052_;
goto v___jp_4034_;
}
}
v___jp_4054_:
{
if (lean_obj_tag(v___y_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4064_; uint8_t v___x_4065_; 
v_a_4063_ = lean_ctor_get(v___y_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref_known(v___y_4062_, 1);
v___x_4064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_4065_ = l_Lean_Expr_isConstOf(v_a_4063_, v___x_4064_);
lean_dec(v_a_4063_);
if (v___x_4065_ == 0)
{
lean_dec_ref(v___y_4056_);
v___y_4026_ = v___y_4058_;
v___y_4027_ = v___y_4059_;
v___y_4028_ = v___y_4057_;
v___y_4029_ = v___y_4060_;
v___y_4030_ = v___y_4061_;
v___y_4031_ = v___y_4055_;
goto v___jp_4025_;
}
else
{
lean_object* v___x_4066_; 
lean_inc_ref(v___y_4056_);
v___x_4066_ = l_Lean_Meta_mkEqRefl(v___y_4056_, v___y_4057_, v___y_4060_, v___y_4061_, v___y_4055_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v___x_4068_; lean_object* v_dummy_4069_; lean_object* v_nargs_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4066_, 1);
v___x_4068_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_4069_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
v_nargs_4070_ = l_Lean_Expr_getAppNumArgs(v___y_4056_);
lean_inc(v_nargs_4070_);
v___x_4071_ = lean_mk_array(v_nargs_4070_, v_dummy_4069_);
v___x_4072_ = lean_unsigned_to_nat(1u);
v___x_4073_ = lean_nat_sub(v_nargs_4070_, v___x_4072_);
lean_dec(v_nargs_4070_);
v___x_4074_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_4056_, v___x_4071_, v___x_4073_);
v___x_4075_ = lean_array_push(v___x_4074_, v_a_4067_);
v___x_4076_ = l_Lean_mkAppN(v___x_4068_, v___x_4075_);
lean_dec_ref(v___x_4075_);
lean_inc(v_mvarId_3873_);
v___x_4077_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_4057_, v___y_4060_, v___y_4061_, v___y_4055_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_a_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
lean_inc(v_a_4078_);
lean_dec_ref_known(v___x_4077_, 1);
lean_inc(v_val_3904_);
v___x_4079_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_4080_ = l_Lean_Meta_mkAbsurd(v_a_4078_, v___x_4079_, v___x_4076_, v___y_4057_, v___y_4060_, v___y_4061_, v___y_4055_);
if (lean_obj_tag(v___x_4080_) == 0)
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4100_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4083_ = v___x_4080_;
v_isShared_4084_ = v_isSharedCheck_4100_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4080_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4100_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4085_; 
lean_inc(v_mvarId_3873_);
v___x_4085_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_4081_, v___y_4060_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4097_; 
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4097_ == 0)
{
lean_object* v_unused_4098_; 
v_unused_4098_ = lean_ctor_get(v___x_4085_, 0);
lean_dec(v_unused_4098_);
v___x_4087_ = v___x_4085_;
v_isShared_4088_ = v_isSharedCheck_4097_;
goto v_resetjp_4086_;
}
else
{
lean_dec(v___x_4085_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4097_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4089_; lean_object* v___x_4091_; 
v___x_4089_ = lean_box(v___x_3883_);
if (v_isShared_4088_ == 0)
{
lean_ctor_set_tag(v___x_4087_, 1);
lean_ctor_set(v___x_4087_, 0, v___x_4089_);
v___x_4091_ = v___x_4087_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
lean_object* v___x_4092_; lean_object* v___x_4094_; 
v___x_4092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4092_, 0, v___x_4091_);
lean_ctor_set(v___x_4092_, 1, v___x_3908_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 0, v___x_4092_);
v___x_4094_ = v___x_4083_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
v_a_3890_ = v___x_4094_;
goto v___jp_3889_;
}
}
}
}
else
{
lean_object* v_a_4099_; 
lean_del_object(v___x_4083_);
v_a_4099_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4099_);
lean_dec_ref_known(v___x_4085_, 1);
v___y_4045_ = v___y_4055_;
v___y_4046_ = v___y_4057_;
v___y_4047_ = v___y_4058_;
v___y_4048_ = v___y_4060_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4061_;
v_a_4051_ = v_a_4099_;
goto v___jp_4044_;
}
}
}
else
{
lean_object* v_a_4101_; 
v_a_4101_ = lean_ctor_get(v___x_4080_, 0);
lean_inc(v_a_4101_);
lean_dec_ref_known(v___x_4080_, 1);
v___y_4045_ = v___y_4055_;
v___y_4046_ = v___y_4057_;
v___y_4047_ = v___y_4058_;
v___y_4048_ = v___y_4060_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4061_;
v_a_4051_ = v_a_4101_;
goto v___jp_4044_;
}
}
else
{
lean_object* v_a_4102_; 
lean_dec_ref(v___x_4076_);
v_a_4102_ = lean_ctor_get(v___x_4077_, 0);
lean_inc(v_a_4102_);
lean_dec_ref_known(v___x_4077_, 1);
v___y_4045_ = v___y_4055_;
v___y_4046_ = v___y_4057_;
v___y_4047_ = v___y_4058_;
v___y_4048_ = v___y_4060_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4061_;
v_a_4051_ = v_a_4102_;
goto v___jp_4044_;
}
}
else
{
lean_object* v_a_4103_; 
lean_dec_ref(v___y_4056_);
v_a_4103_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4066_, 1);
v___y_4045_ = v___y_4055_;
v___y_4046_ = v___y_4057_;
v___y_4047_ = v___y_4058_;
v___y_4048_ = v___y_4060_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4061_;
v_a_4051_ = v_a_4103_;
goto v___jp_4044_;
}
}
}
else
{
lean_object* v_a_4104_; 
lean_dec_ref(v___y_4056_);
v_a_4104_ = lean_ctor_get(v___y_4062_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___y_4062_, 1);
v___y_4045_ = v___y_4055_;
v___y_4046_ = v___y_4057_;
v___y_4047_ = v___y_4058_;
v___y_4048_ = v___y_4060_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4061_;
v_a_4051_ = v_a_4104_;
goto v___jp_4044_;
}
}
v___jp_4105_:
{
lean_object* v___x_4112_; 
lean_inc_ref(v___x_4024_);
v___x_4112_ = l_Lean_Meta_mkDecide(v___x_4024_, v___y_4107_, v___y_4110_, v___y_4111_, v___y_4106_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4114_; uint8_t v_transparency_4115_; uint8_t v___x_4116_; uint8_t v___x_4117_; 
v_a_4113_ = lean_ctor_get(v___x_4112_, 0);
lean_inc(v_a_4113_);
lean_dec_ref_known(v___x_4112_, 1);
v___x_4114_ = l_Lean_Meta_Context_config(v___y_4107_);
v_transparency_4115_ = lean_ctor_get_uint8(v___x_4114_, 9);
lean_dec_ref(v___x_4114_);
v___x_4116_ = 1;
v___x_4117_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4115_, v___x_4116_);
if (v___x_4117_ == 0)
{
lean_object* v_keyedConfig_4118_; uint8_t v_trackZetaDelta_4119_; lean_object* v_zetaDeltaSet_4120_; lean_object* v_lctx_4121_; lean_object* v_localInstances_4122_; lean_object* v_defEqCtx_x3f_4123_; lean_object* v_synthPendingDepth_4124_; lean_object* v_customCanUnfoldPredicate_x3f_4125_; uint8_t v_univApprox_4126_; uint8_t v_inTypeClassResolution_4127_; uint8_t v_cacheInferType_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
v_keyedConfig_4118_ = lean_ctor_get(v___y_4107_, 0);
v_trackZetaDelta_4119_ = lean_ctor_get_uint8(v___y_4107_, sizeof(void*)*7);
v_zetaDeltaSet_4120_ = lean_ctor_get(v___y_4107_, 1);
v_lctx_4121_ = lean_ctor_get(v___y_4107_, 2);
v_localInstances_4122_ = lean_ctor_get(v___y_4107_, 3);
v_defEqCtx_x3f_4123_ = lean_ctor_get(v___y_4107_, 4);
v_synthPendingDepth_4124_ = lean_ctor_get(v___y_4107_, 5);
v_customCanUnfoldPredicate_x3f_4125_ = lean_ctor_get(v___y_4107_, 6);
v_univApprox_4126_ = lean_ctor_get_uint8(v___y_4107_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4127_ = lean_ctor_get_uint8(v___y_4107_, sizeof(void*)*7 + 2);
v_cacheInferType_4128_ = lean_ctor_get_uint8(v___y_4107_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4118_);
v___x_4129_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4116_, v_keyedConfig_4118_);
lean_inc(v_customCanUnfoldPredicate_x3f_4125_);
lean_inc(v_synthPendingDepth_4124_);
lean_inc(v_defEqCtx_x3f_4123_);
lean_inc_ref(v_localInstances_4122_);
lean_inc_ref(v_lctx_4121_);
lean_inc(v_zetaDeltaSet_4120_);
v___x_4130_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
lean_ctor_set(v___x_4130_, 1, v_zetaDeltaSet_4120_);
lean_ctor_set(v___x_4130_, 2, v_lctx_4121_);
lean_ctor_set(v___x_4130_, 3, v_localInstances_4122_);
lean_ctor_set(v___x_4130_, 4, v_defEqCtx_x3f_4123_);
lean_ctor_set(v___x_4130_, 5, v_synthPendingDepth_4124_);
lean_ctor_set(v___x_4130_, 6, v_customCanUnfoldPredicate_x3f_4125_);
lean_ctor_set_uint8(v___x_4130_, sizeof(void*)*7, v_trackZetaDelta_4119_);
lean_ctor_set_uint8(v___x_4130_, sizeof(void*)*7 + 1, v_univApprox_4126_);
lean_ctor_set_uint8(v___x_4130_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4127_);
lean_ctor_set_uint8(v___x_4130_, sizeof(void*)*7 + 3, v_cacheInferType_4128_);
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4111_);
lean_inc(v___y_4110_);
lean_inc(v_a_4113_);
v___x_4131_ = lean_whnf(v_a_4113_, v___x_4130_, v___y_4110_, v___y_4111_, v___y_4106_);
v___y_4055_ = v___y_4106_;
v___y_4056_ = v_a_4113_;
v___y_4057_ = v___y_4107_;
v___y_4058_ = v___y_4108_;
v___y_4059_ = v___y_4109_;
v___y_4060_ = v___y_4110_;
v___y_4061_ = v___y_4111_;
v___y_4062_ = v___x_4131_;
goto v___jp_4054_;
}
else
{
lean_object* v___x_4132_; 
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4111_);
lean_inc(v___y_4110_);
lean_inc_ref(v___y_4107_);
lean_inc(v_a_4113_);
v___x_4132_ = lean_whnf(v_a_4113_, v___y_4107_, v___y_4110_, v___y_4111_, v___y_4106_);
v___y_4055_ = v___y_4106_;
v___y_4056_ = v_a_4113_;
v___y_4057_ = v___y_4107_;
v___y_4058_ = v___y_4108_;
v___y_4059_ = v___y_4109_;
v___y_4060_ = v___y_4110_;
v___y_4061_ = v___y_4111_;
v___y_4062_ = v___x_4132_;
goto v___jp_4054_;
}
}
else
{
lean_object* v_a_4133_; 
v_a_4133_ = lean_ctor_get(v___x_4112_, 0);
lean_inc(v_a_4133_);
lean_dec_ref_known(v___x_4112_, 1);
v___y_4045_ = v___y_4106_;
v___y_4046_ = v___y_4107_;
v___y_4047_ = v___y_4108_;
v___y_4048_ = v___y_4110_;
v___y_4049_ = v___y_4109_;
v___y_4050_ = v___y_4111_;
v_a_4051_ = v_a_4133_;
goto v___jp_4044_;
}
}
v___jp_4134_:
{
if (v___y_4141_ == 0)
{
v___y_4026_ = v___y_4137_;
v___y_4027_ = v___y_4138_;
v___y_4028_ = v___y_4136_;
v___y_4029_ = v___y_4139_;
v___y_4030_ = v___y_4140_;
v___y_4031_ = v___y_4135_;
goto v___jp_4025_;
}
else
{
v___y_4106_ = v___y_4135_;
v___y_4107_ = v___y_4136_;
v___y_4108_ = v___y_4137_;
v___y_4109_ = v___y_4138_;
v___y_4110_ = v___y_4139_;
v___y_4111_ = v___y_4140_;
goto v___jp_4105_;
}
}
v___jp_4142_:
{
if (v___y_4150_ == 0)
{
lean_dec_ref(v___y_4144_);
v___y_4135_ = v___y_4143_;
v___y_4136_ = v___y_4145_;
v___y_4137_ = v___y_4146_;
v___y_4138_ = v___y_4148_;
v___y_4139_ = v___y_4147_;
v___y_4140_ = v___y_4149_;
v___y_4141_ = v___x_3979_;
goto v___jp_4134_;
}
else
{
uint8_t v___x_4151_; 
v___x_4151_ = l_Lean_Expr_hasFVar(v___y_4144_);
lean_dec_ref(v___y_4144_);
if (v___x_4151_ == 0)
{
v___y_4106_ = v___y_4143_;
v___y_4107_ = v___y_4145_;
v___y_4108_ = v___y_4146_;
v___y_4109_ = v___y_4148_;
v___y_4110_ = v___y_4147_;
v___y_4111_ = v___y_4149_;
goto v___jp_4105_;
}
else
{
v___y_4135_ = v___y_4143_;
v___y_4136_ = v___y_4145_;
v___y_4137_ = v___y_4146_;
v___y_4138_ = v___y_4148_;
v___y_4139_ = v___y_4147_;
v___y_4140_ = v___y_4149_;
v___y_4141_ = v___x_3979_;
goto v___jp_4134_;
}
}
}
v___jp_4152_:
{
lean_object* v___x_4160_; 
lean_inc_ref(v___x_4024_);
v___x_4160_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_4024_, v___y_4157_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; uint8_t v___x_4162_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
lean_inc(v_a_4161_);
lean_dec_ref_known(v___x_4160_, 1);
v___x_4162_ = l_Lean_Expr_hasMVar(v_a_4161_);
if (v___x_4162_ == 0)
{
v___y_4143_ = v___y_4153_;
v___y_4144_ = v_a_4161_;
v___y_4145_ = v___y_4154_;
v___y_4146_ = v___y_4155_;
v___y_4147_ = v___y_4157_;
v___y_4148_ = v___y_4156_;
v___y_4149_ = v___y_4158_;
v___y_4150_ = v___y_4159_;
goto v___jp_4142_;
}
else
{
v___y_4143_ = v___y_4153_;
v___y_4144_ = v_a_4161_;
v___y_4145_ = v___y_4154_;
v___y_4146_ = v___y_4155_;
v___y_4147_ = v___y_4157_;
v___y_4148_ = v___y_4156_;
v___y_4149_ = v___y_4158_;
v___y_4150_ = v___x_3979_;
goto v___jp_4142_;
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; uint8_t v_isShared_4166_; uint8_t v_isSharedCheck_4170_; 
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4163_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4165_ = v___x_4160_;
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
else
{
lean_inc(v_a_4163_);
lean_dec(v___x_4160_);
v___x_4165_ = lean_box(0);
v_isShared_4166_ = v_isSharedCheck_4170_;
goto v_resetjp_4164_;
}
v_resetjp_4164_:
{
lean_object* v___x_4168_; 
if (v_isShared_4166_ == 0)
{
v___x_4168_ = v___x_4165_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4163_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
v___jp_4171_:
{
if (v___y_4178_ == 0)
{
v___y_4026_ = v___y_4174_;
v___y_4027_ = v___y_4175_;
v___y_4028_ = v___y_4173_;
v___y_4029_ = v___y_4176_;
v___y_4030_ = v___y_4177_;
v___y_4031_ = v___y_4172_;
goto v___jp_4025_;
}
else
{
v___y_4153_ = v___y_4172_;
v___y_4154_ = v___y_4173_;
v___y_4155_ = v___y_4174_;
v___y_4156_ = v___y_4175_;
v___y_4157_ = v___y_4176_;
v___y_4158_ = v___y_4177_;
v___y_4159_ = v___y_4178_;
goto v___jp_4152_;
}
}
v___jp_4179_:
{
uint8_t v_useDecide_4186_; 
v_useDecide_4186_ = lean_ctor_get_uint8(v_config_3872_, sizeof(void*)*1);
if (v_useDecide_4186_ == 0)
{
v___y_4172_ = v___y_4185_;
v___y_4173_ = v___y_4182_;
v___y_4174_ = v_isHEq_4181_;
v___y_4175_ = v___y_4180_;
v___y_4176_ = v___y_4183_;
v___y_4177_ = v___y_4184_;
v___y_4178_ = v___x_3979_;
goto v___jp_4171_;
}
else
{
uint8_t v___x_4187_; 
v___x_4187_ = l_Lean_Expr_hasFVar(v___x_4024_);
if (v___x_4187_ == 0)
{
v___y_4153_ = v___y_4185_;
v___y_4154_ = v___y_4182_;
v___y_4155_ = v_isHEq_4181_;
v___y_4156_ = v___y_4180_;
v___y_4157_ = v___y_4183_;
v___y_4158_ = v___y_4184_;
v___y_4159_ = v_useDecide_4186_;
goto v___jp_4152_;
}
else
{
v___y_4172_ = v___y_4185_;
v___y_4173_ = v___y_4182_;
v___y_4174_ = v_isHEq_4181_;
v___y_4175_ = v___y_4180_;
v___y_4176_ = v___y_4183_;
v___y_4177_ = v___y_4184_;
v___y_4178_ = v___x_3979_;
goto v___jp_4171_;
}
}
}
v___jp_4188_:
{
lean_object* v___x_4196_; 
v___x_4196_ = l_Lean_Meta_isExprDefEq(v___y_4194_, v___y_4193_, v___y_4192_, v___y_4191_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; uint8_t v___x_4198_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4196_, 1);
v___x_4198_ = lean_unbox(v_a_4197_);
lean_dec(v_a_4197_);
if (v___x_4198_ == 0)
{
v___y_4180_ = v___y_4195_;
v_isHEq_4181_ = v___x_3883_;
v___y_4182_ = v___y_4192_;
v___y_4183_ = v___y_4191_;
v___y_4184_ = v___y_4189_;
v___y_4185_ = v___y_4190_;
goto v___jp_4179_;
}
else
{
lean_object* v___x_4199_; 
lean_dec_ref(v___x_4024_);
lean_dec_ref(v_config_3872_);
lean_inc(v_mvarId_3873_);
v___x_4199_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_4192_, v___y_4191_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4200_);
lean_dec_ref_known(v___x_4199_, 1);
v___x_4201_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_4202_ = l_Lean_Meta_mkEqOfHEq(v___x_4201_, v___x_3883_, v___y_4192_, v___y_4191_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4204_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
lean_inc(v_a_4203_);
lean_dec_ref_known(v___x_4202_, 1);
v___x_4204_ = l_Lean_Meta_mkNoConfusion(v_a_4200_, v_a_4203_, v___y_4192_, v___y_4191_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4206_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4204_, 1);
v___x_4206_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_4205_, v___y_4191_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
lean_dec_ref_known(v___x_4206_, 1);
v___x_4207_ = lean_box(v___x_3883_);
v___x_4208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4207_);
v___x_4209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
lean_ctor_set(v___x_4209_, 1, v___x_3908_);
v___x_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4209_);
v_a_3890_ = v___x_4210_;
goto v___jp_3889_;
}
else
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4218_; 
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_4211_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4213_ = v___x_4206_;
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4206_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4218_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4216_; 
if (v_isShared_4214_ == 0)
{
v___x_4216_ = v___x_4213_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4211_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
return v___x_4216_;
}
}
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4219_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4204_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4204_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4224_; 
if (v_isShared_4222_ == 0)
{
v___x_4224_ = v___x_4221_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v_a_4219_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
lean_dec(v_a_4200_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4227_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4202_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4202_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4235_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_4199_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4199_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
}
}
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4250_; 
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4243_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4245_ = v___x_4196_;
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4196_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
return v___x_4248_;
}
}
}
}
v___jp_4251_:
{
lean_object* v___x_4257_; 
lean_inc_ref(v___x_4024_);
v___x_4257_ = l_Lean_Meta_matchHEq_x3f(v___x_4024_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
if (lean_obj_tag(v___x_4257_) == 0)
{
lean_object* v_a_4258_; 
v_a_4258_ = lean_ctor_get(v___x_4257_, 0);
lean_inc(v_a_4258_);
lean_dec_ref_known(v___x_4257_, 1);
if (lean_obj_tag(v_a_4258_) == 1)
{
lean_object* v_val_4259_; lean_object* v_snd_4260_; lean_object* v_snd_4261_; lean_object* v_fst_4262_; lean_object* v_fst_4263_; lean_object* v_fst_4264_; lean_object* v_snd_4265_; lean_object* v___x_4266_; 
v_val_4259_ = lean_ctor_get(v_a_4258_, 0);
lean_inc(v_val_4259_);
lean_dec_ref_known(v_a_4258_, 1);
v_snd_4260_ = lean_ctor_get(v_val_4259_, 1);
lean_inc(v_snd_4260_);
v_snd_4261_ = lean_ctor_get(v_snd_4260_, 1);
lean_inc(v_snd_4261_);
v_fst_4262_ = lean_ctor_get(v_val_4259_, 0);
lean_inc(v_fst_4262_);
lean_dec(v_val_4259_);
v_fst_4263_ = lean_ctor_get(v_snd_4260_, 0);
lean_inc(v_fst_4263_);
lean_dec(v_snd_4260_);
v_fst_4264_ = lean_ctor_get(v_snd_4261_, 0);
lean_inc(v_fst_4264_);
v_snd_4265_ = lean_ctor_get(v_snd_4261_, 1);
lean_inc(v_snd_4265_);
lean_dec(v_snd_4261_);
v___x_4266_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4263_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
lean_dec_ref_known(v___x_4266_, 1);
if (lean_obj_tag(v_a_4267_) == 1)
{
lean_object* v_val_4268_; lean_object* v___x_4269_; 
v_val_4268_ = lean_ctor_get(v_a_4267_, 0);
lean_inc(v_val_4268_);
lean_dec_ref_known(v_a_4267_, 1);
v___x_4269_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4265_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v_a_4270_; 
v_a_4270_ = lean_ctor_get(v___x_4269_, 0);
lean_inc(v_a_4270_);
lean_dec_ref_known(v___x_4269_, 1);
if (lean_obj_tag(v_a_4270_) == 1)
{
lean_object* v_toConstantVal_4271_; lean_object* v_val_4272_; lean_object* v_toConstantVal_4273_; lean_object* v_name_4274_; lean_object* v_name_4275_; uint8_t v___x_4276_; 
v_toConstantVal_4271_ = lean_ctor_get(v_val_4268_, 0);
lean_inc_ref(v_toConstantVal_4271_);
lean_dec(v_val_4268_);
v_val_4272_ = lean_ctor_get(v_a_4270_, 0);
lean_inc(v_val_4272_);
lean_dec_ref_known(v_a_4270_, 1);
v_toConstantVal_4273_ = lean_ctor_get(v_val_4272_, 0);
lean_inc_ref(v_toConstantVal_4273_);
lean_dec(v_val_4272_);
v_name_4274_ = lean_ctor_get(v_toConstantVal_4271_, 0);
lean_inc(v_name_4274_);
lean_dec_ref(v_toConstantVal_4271_);
v_name_4275_ = lean_ctor_get(v_toConstantVal_4273_, 0);
lean_inc(v_name_4275_);
lean_dec_ref(v_toConstantVal_4273_);
v___x_4276_ = lean_name_eq(v_name_4274_, v_name_4275_);
lean_dec(v_name_4275_);
lean_dec(v_name_4274_);
if (v___x_4276_ == 0)
{
v___y_4189_ = v___y_4255_;
v___y_4190_ = v___y_4256_;
v___y_4191_ = v___y_4254_;
v___y_4192_ = v___y_4253_;
v___y_4193_ = v_fst_4264_;
v___y_4194_ = v_fst_4262_;
v___y_4195_ = v_isEq_4252_;
goto v___jp_4188_;
}
else
{
if (v___x_3979_ == 0)
{
lean_dec(v_fst_4264_);
lean_dec(v_fst_4262_);
v___y_4180_ = v_isEq_4252_;
v_isHEq_4181_ = v___x_3883_;
v___y_4182_ = v___y_4253_;
v___y_4183_ = v___y_4254_;
v___y_4184_ = v___y_4255_;
v___y_4185_ = v___y_4256_;
goto v___jp_4179_;
}
else
{
v___y_4189_ = v___y_4255_;
v___y_4190_ = v___y_4256_;
v___y_4191_ = v___y_4254_;
v___y_4192_ = v___y_4253_;
v___y_4193_ = v_fst_4264_;
v___y_4194_ = v_fst_4262_;
v___y_4195_ = v_isEq_4252_;
goto v___jp_4188_;
}
}
}
else
{
lean_dec(v_a_4270_);
lean_dec(v_val_4268_);
lean_dec(v_fst_4264_);
lean_dec(v_fst_4262_);
v___y_4180_ = v_isEq_4252_;
v_isHEq_4181_ = v___x_3883_;
v___y_4182_ = v___y_4253_;
v___y_4183_ = v___y_4254_;
v___y_4184_ = v___y_4255_;
v___y_4185_ = v___y_4256_;
goto v___jp_4179_;
}
}
else
{
lean_object* v_a_4277_; lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4284_; 
lean_dec(v_val_4268_);
lean_dec(v_fst_4264_);
lean_dec(v_fst_4262_);
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4277_ = lean_ctor_get(v___x_4269_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4269_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4279_ = v___x_4269_;
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
else
{
lean_inc(v_a_4277_);
lean_dec(v___x_4269_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4282_; 
if (v_isShared_4280_ == 0)
{
v___x_4282_ = v___x_4279_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4277_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
}
else
{
lean_dec(v_a_4267_);
lean_dec(v_snd_4265_);
lean_dec(v_fst_4264_);
lean_dec(v_fst_4262_);
v___y_4180_ = v_isEq_4252_;
v_isHEq_4181_ = v___x_3883_;
v___y_4182_ = v___y_4253_;
v___y_4183_ = v___y_4254_;
v___y_4184_ = v___y_4255_;
v___y_4185_ = v___y_4256_;
goto v___jp_4179_;
}
}
else
{
lean_object* v_a_4285_; lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4292_; 
lean_dec(v_snd_4265_);
lean_dec(v_fst_4264_);
lean_dec(v_fst_4262_);
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4285_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4292_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4292_ == 0)
{
v___x_4287_ = v___x_4266_;
v_isShared_4288_ = v_isSharedCheck_4292_;
goto v_resetjp_4286_;
}
else
{
lean_inc(v_a_4285_);
lean_dec(v___x_4266_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4292_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
lean_object* v___x_4290_; 
if (v_isShared_4288_ == 0)
{
v___x_4290_ = v___x_4287_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v_a_4285_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
return v___x_4290_;
}
}
}
}
else
{
lean_dec(v_a_4258_);
v___y_4180_ = v_isEq_4252_;
v_isHEq_4181_ = v___x_3979_;
v___y_4182_ = v___y_4253_;
v___y_4183_ = v___y_4254_;
v___y_4184_ = v___y_4255_;
v___y_4185_ = v___y_4256_;
goto v___jp_4179_;
}
}
else
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4300_; 
lean_dec_ref(v___x_4024_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4293_ = lean_ctor_get(v___x_4257_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4257_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4295_ = v___x_4257_;
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4257_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
v___jp_4301_:
{
lean_object* v___x_4306_; 
lean_inc_ref(v___x_4024_);
v___x_4306_ = l_Lean_Meta_matchEq_x3f(v___x_4024_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v___x_4306_, 1);
if (lean_obj_tag(v_a_4307_) == 1)
{
lean_object* v_val_4308_; lean_object* v_snd_4309_; lean_object* v_fst_4310_; lean_object* v_snd_4311_; lean_object* v___x_4312_; 
v_val_4308_ = lean_ctor_get(v_a_4307_, 0);
lean_inc(v_val_4308_);
lean_dec_ref_known(v_a_4307_, 1);
v_snd_4309_ = lean_ctor_get(v_val_4308_, 1);
lean_inc(v_snd_4309_);
lean_dec(v_val_4308_);
v_fst_4310_ = lean_ctor_get(v_snd_4309_, 0);
lean_inc(v_fst_4310_);
v_snd_4311_ = lean_ctor_get(v_snd_4309_, 1);
lean_inc(v_snd_4311_);
lean_dec(v_snd_4309_);
v___x_4312_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4310_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 0);
lean_inc(v_a_4313_);
lean_dec_ref_known(v___x_4312_, 1);
if (lean_obj_tag(v_a_4313_) == 1)
{
lean_object* v_val_4314_; lean_object* v___x_4315_; 
v_val_4314_ = lean_ctor_get(v_a_4313_, 0);
lean_inc(v_val_4314_);
lean_dec_ref_known(v_a_4313_, 1);
v___x_4315_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4311_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
lean_inc(v_a_4316_);
lean_dec_ref_known(v___x_4315_, 1);
if (lean_obj_tag(v_a_4316_) == 1)
{
lean_object* v_toConstantVal_4317_; lean_object* v_val_4318_; lean_object* v_toConstantVal_4319_; lean_object* v_name_4320_; lean_object* v_name_4321_; uint8_t v___x_4322_; 
v_toConstantVal_4317_ = lean_ctor_get(v_val_4314_, 0);
lean_inc_ref(v_toConstantVal_4317_);
lean_dec(v_val_4314_);
v_val_4318_ = lean_ctor_get(v_a_4316_, 0);
lean_inc(v_val_4318_);
lean_dec_ref_known(v_a_4316_, 1);
v_toConstantVal_4319_ = lean_ctor_get(v_val_4318_, 0);
lean_inc_ref(v_toConstantVal_4319_);
lean_dec(v_val_4318_);
v_name_4320_ = lean_ctor_get(v_toConstantVal_4317_, 0);
lean_inc(v_name_4320_);
lean_dec_ref(v_toConstantVal_4317_);
v_name_4321_ = lean_ctor_get(v_toConstantVal_4319_, 0);
lean_inc(v_name_4321_);
lean_dec_ref(v_toConstantVal_4319_);
v___x_4322_ = lean_name_eq(v_name_4320_, v_name_4321_);
lean_dec(v_name_4321_);
lean_dec(v_name_4320_);
if (v___x_4322_ == 0)
{
lean_dec_ref(v___x_4024_);
lean_dec_ref(v_config_3872_);
v___y_3910_ = v___y_4304_;
v___y_3911_ = v___y_4302_;
v___y_3912_ = v___y_4303_;
v___y_3913_ = v___y_4305_;
goto v___jp_3909_;
}
else
{
if (v___x_3979_ == 0)
{
lean_del_object(v___x_3906_);
v_isEq_4252_ = v___x_3883_;
v___y_4253_ = v___y_4302_;
v___y_4254_ = v___y_4303_;
v___y_4255_ = v___y_4304_;
v___y_4256_ = v___y_4305_;
goto v___jp_4251_;
}
else
{
lean_dec_ref(v___x_4024_);
lean_dec_ref(v_config_3872_);
v___y_3910_ = v___y_4304_;
v___y_3911_ = v___y_4302_;
v___y_3912_ = v___y_4303_;
v___y_3913_ = v___y_4305_;
goto v___jp_3909_;
}
}
}
else
{
lean_dec(v_a_4316_);
lean_dec(v_val_4314_);
lean_del_object(v___x_3906_);
v_isEq_4252_ = v___x_3883_;
v___y_4253_ = v___y_4302_;
v___y_4254_ = v___y_4303_;
v___y_4255_ = v___y_4304_;
v___y_4256_ = v___y_4305_;
goto v___jp_4251_;
}
}
else
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
lean_dec(v_val_4314_);
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4323_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v___x_4315_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4315_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
}
}
else
{
lean_dec(v_a_4313_);
lean_dec(v_snd_4311_);
lean_del_object(v___x_3906_);
v_isEq_4252_ = v___x_3883_;
v___y_4253_ = v___y_4302_;
v___y_4254_ = v___y_4303_;
v___y_4255_ = v___y_4304_;
v___y_4256_ = v___y_4305_;
goto v___jp_4251_;
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
lean_dec(v_snd_4311_);
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4331_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4312_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4312_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
else
{
lean_dec(v_a_4307_);
lean_del_object(v___x_3906_);
v_isEq_4252_ = v___x_3979_;
v___y_4253_ = v___y_4302_;
v___y_4254_ = v___y_4303_;
v___y_4255_ = v___y_4304_;
v___y_4256_ = v___y_4305_;
goto v___jp_4251_;
}
}
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4346_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4339_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4341_ = v___x_4306_;
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4306_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4346_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4344_; 
if (v_isShared_4342_ == 0)
{
v___x_4344_ = v___x_4341_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_a_4339_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
v___jp_4347_:
{
lean_object* v___x_4352_; 
lean_inc_ref(v___x_4024_);
v___x_4352_ = l_Lean_refutableHasNotBit_x3f(v___x_4024_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v_a_4353_; 
v_a_4353_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4353_);
lean_dec_ref_known(v___x_4352_, 1);
if (lean_obj_tag(v_a_4353_) == 1)
{
lean_object* v_val_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4394_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec_ref(v_config_3872_);
v_val_4354_ = lean_ctor_get(v_a_4353_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v_a_4353_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4356_ = v_a_4353_;
v_isShared_4357_ = v_isSharedCheck_4394_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_val_4354_);
lean_dec(v_a_4353_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4394_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4358_; 
lean_inc(v_mvarId_3873_);
v___x_4358_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v_a_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4358_, 1);
v___x_4360_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_4361_ = l_Lean_Meta_mkAbsurd(v_a_4359_, v_val_4354_, v___x_4360_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4362_; lean_object* v___x_4363_; 
v_a_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_a_4362_);
lean_dec_ref_known(v___x_4361_, 1);
v___x_4363_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_4362_, v___y_4349_);
if (lean_obj_tag(v___x_4363_) == 0)
{
lean_object* v___x_4364_; lean_object* v___x_4366_; 
lean_dec_ref_known(v___x_4363_, 1);
v___x_4364_ = lean_box(v___x_3883_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 0, v___x_4364_);
v___x_4366_ = v___x_4356_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v___x_4364_);
v___x_4366_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4366_);
lean_ctor_set(v___x_4367_, 1, v___x_3908_);
v___x_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4367_);
v_a_3890_ = v___x_4368_;
goto v___jp_3889_;
}
}
else
{
lean_object* v_a_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
lean_del_object(v___x_4356_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_4370_ = lean_ctor_get(v___x_4363_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4363_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4372_ = v___x_4363_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_a_4370_);
lean_dec(v___x_4363_);
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
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_del_object(v___x_4356_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4378_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4361_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4361_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
else
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
lean_del_object(v___x_4356_);
lean_dec(v_val_4354_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4386_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4388_ = v___x_4358_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4358_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4391_; 
if (v_isShared_4389_ == 0)
{
v___x_4391_ = v___x_4388_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_a_4386_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
}
else
{
lean_object* v___x_4395_; 
lean_dec(v_a_4353_);
lean_inc_ref(v___x_4024_);
v___x_4395_ = l_Lean_Meta_matchNe_x3f(v___x_4024_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref_known(v___x_4395_, 1);
if (lean_obj_tag(v_a_4396_) == 1)
{
lean_object* v_val_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4467_; 
v_val_4397_ = lean_ctor_get(v_a_4396_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v_a_4396_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4399_ = v_a_4396_;
v_isShared_4400_ = v_isSharedCheck_4467_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_val_4397_);
lean_dec(v_a_4396_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4467_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v_snd_4401_; lean_object* v_fst_4402_; lean_object* v_snd_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4466_; 
v_snd_4401_ = lean_ctor_get(v_val_4397_, 1);
lean_inc(v_snd_4401_);
lean_dec(v_val_4397_);
v_fst_4402_ = lean_ctor_get(v_snd_4401_, 0);
v_snd_4403_ = lean_ctor_get(v_snd_4401_, 1);
v_isSharedCheck_4466_ = !lean_is_exclusive(v_snd_4401_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4405_ = v_snd_4401_;
v_isShared_4406_ = v_isSharedCheck_4466_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_snd_4403_);
lean_inc(v_fst_4402_);
lean_dec(v_snd_4401_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4466_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4407_; 
lean_inc(v_fst_4402_);
v___x_4407_ = l_Lean_Meta_isExprDefEq(v_fst_4402_, v_snd_4403_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; uint8_t v___x_4409_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4407_, 1);
v___x_4409_ = lean_unbox(v_a_4408_);
lean_dec(v_a_4408_);
if (v___x_4409_ == 0)
{
lean_del_object(v___x_4405_);
lean_dec(v_fst_4402_);
lean_del_object(v___x_4399_);
v___y_4302_ = v___y_4348_;
v___y_4303_ = v___y_4349_;
v___y_4304_ = v___y_4350_;
v___y_4305_ = v___y_4351_;
goto v___jp_4301_;
}
else
{
lean_object* v___x_4410_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec_ref(v_config_3872_);
lean_inc(v_mvarId_3873_);
v___x_4410_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v_a_4411_; lean_object* v___x_4412_; 
v_a_4411_ = lean_ctor_get(v___x_4410_, 0);
lean_inc(v_a_4411_);
lean_dec_ref_known(v___x_4410_, 1);
v___x_4412_ = l_Lean_Meta_mkEqRefl(v_fst_4402_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v___x_4414_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_4415_ = l_Lean_Meta_mkAbsurd(v_a_4411_, v_a_4413_, v___x_4414_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4415_) == 0)
{
lean_object* v_a_4416_; lean_object* v___x_4417_; 
v_a_4416_ = lean_ctor_get(v___x_4415_, 0);
lean_inc(v_a_4416_);
lean_dec_ref_known(v___x_4415_, 1);
v___x_4417_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_4416_, v___y_4349_);
if (lean_obj_tag(v___x_4417_) == 0)
{
lean_object* v___x_4418_; lean_object* v___x_4420_; 
lean_dec_ref_known(v___x_4417_, 1);
v___x_4418_ = lean_box(v___x_3883_);
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 0, v___x_4418_);
v___x_4420_ = v___x_4399_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v___x_4418_);
v___x_4420_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
lean_object* v___x_4422_; 
if (v_isShared_4406_ == 0)
{
lean_ctor_set(v___x_4405_, 1, v___x_3908_);
lean_ctor_set(v___x_4405_, 0, v___x_4420_);
v___x_4422_ = v___x_4405_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4420_);
lean_ctor_set(v_reuseFailAlloc_4424_, 1, v___x_3908_);
v___x_4422_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
lean_object* v___x_4423_; 
v___x_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
v_a_3890_ = v___x_4423_;
goto v___jp_3889_;
}
}
}
else
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
lean_del_object(v___x_4405_);
lean_del_object(v___x_4399_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_4426_ = lean_ctor_get(v___x_4417_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4417_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4428_ = v___x_4417_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4417_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4426_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4441_; 
lean_del_object(v___x_4405_);
lean_del_object(v___x_4399_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4434_ = lean_ctor_get(v___x_4415_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4415_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4436_ = v___x_4415_;
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4415_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v___x_4439_; 
if (v_isShared_4437_ == 0)
{
v___x_4439_ = v___x_4436_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v_a_4434_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
return v___x_4439_;
}
}
}
}
else
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4449_; 
lean_dec(v_a_4411_);
lean_del_object(v___x_4405_);
lean_del_object(v___x_4399_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4442_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4444_ = v___x_4412_;
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v___x_4412_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4447_; 
if (v_isShared_4445_ == 0)
{
v___x_4447_ = v___x_4444_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4442_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
return v___x_4447_;
}
}
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
lean_del_object(v___x_4405_);
lean_dec(v_fst_4402_);
lean_del_object(v___x_4399_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_4450_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4410_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4410_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
}
else
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4465_; 
lean_del_object(v___x_4405_);
lean_dec(v_fst_4402_);
lean_del_object(v___x_4399_);
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4458_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4460_ = v___x_4407_;
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4407_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4463_; 
if (v_isShared_4461_ == 0)
{
v___x_4463_ = v___x_4460_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v_a_4458_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
}
}
}
}
}
}
else
{
lean_dec(v_a_4396_);
v___y_4302_ = v___y_4348_;
v___y_4303_ = v___y_4349_;
v___y_4304_ = v___y_4350_;
v___y_4305_ = v___y_4351_;
goto v___jp_4301_;
}
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4468_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4395_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4395_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_a_4468_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
}
else
{
lean_object* v_a_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
lean_dec_ref(v___x_4024_);
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4476_ = lean_ctor_get(v___x_4352_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4352_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4352_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_a_4476_);
lean_dec(v___x_4352_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4476_);
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
}
else
{
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_3898_ = v___x_3950_;
goto v___jp_3897_;
}
v___jp_3909_:
{
lean_object* v___x_3914_; 
lean_inc(v_mvarId_3873_);
v___x_3914_ = l_Lean_MVarId_getType(v_mvarId_3873_, v___y_3911_, v___y_3912_, v___y_3910_, v___y_3913_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3914_, 1);
v___x_3916_ = l_Lean_LocalDecl_toExpr(v_val_3904_);
v___x_3917_ = l_Lean_Meta_mkNoConfusion(v_a_3915_, v___x_3916_, v___y_3911_, v___y_3912_, v___y_3910_, v___y_3913_);
if (lean_obj_tag(v___x_3917_) == 0)
{
lean_object* v_a_3918_; lean_object* v___x_3919_; 
v_a_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3918_);
lean_dec_ref_known(v___x_3917_, 1);
v___x_3919_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3873_, v_a_3918_, v___y_3912_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v___x_3920_; lean_object* v___x_3922_; 
lean_dec_ref_known(v___x_3919_, 1);
v___x_3920_ = lean_box(v___x_3883_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v___x_3920_);
v___x_3922_ = v___x_3906_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3920_);
v___x_3922_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
lean_ctor_set(v___x_3923_, 1, v___x_3908_);
v___x_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
v_a_3890_ = v___x_3924_;
goto v___jp_3889_;
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_3926_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3919_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3919_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
}
else
{
lean_object* v_a_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3941_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_3934_ = lean_ctor_get(v___x_3917_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v___x_3917_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3936_ = v___x_3917_;
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_a_3934_);
lean_dec(v___x_3917_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3939_; 
if (v_isShared_3937_ == 0)
{
v___x_3939_ = v___x_3936_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3934_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
}
else
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
lean_del_object(v___x_3906_);
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
v_a_3942_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3914_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3914_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
v___jp_3951_:
{
lean_object* v_searchFuel_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v_searchFuel_3956_ = lean_ctor_get(v_config_3872_, 0);
v___x_3957_ = l_Lean_LocalDecl_fvarId(v_val_3904_);
lean_dec(v_val_3904_);
lean_inc(v_searchFuel_3956_);
lean_inc(v_mvarId_3873_);
v___x_3958_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3873_, v___x_3957_, v_searchFuel_3956_, v___y_3955_, v___y_3954_, v___y_3953_, v___y_3952_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v_a_3959_; uint8_t v___x_3960_; 
v_a_3959_ = lean_ctor_get(v___x_3958_, 0);
lean_inc(v_a_3959_);
lean_dec_ref_known(v___x_3958_, 1);
v___x_3960_ = lean_unbox(v_a_3959_);
lean_dec(v_a_3959_);
if (v___x_3960_ == 0)
{
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_3898_ = v___x_3950_;
goto v___jp_3897_;
}
else
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v___x_3961_ = lean_box(v___x_3883_);
v___x_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
v___x_3963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
lean_ctor_set(v___x_3963_, 1, v___x_3908_);
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
v_a_3890_ = v___x_3964_;
goto v___jp_3889_;
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_3965_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3958_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3958_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
v___jp_3973_:
{
if (v___y_3978_ == 0)
{
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
v_a_3898_ = v___x_3950_;
goto v___jp_3897_;
}
else
{
v___y_3952_ = v___y_3975_;
v___y_3953_ = v___y_3974_;
v___y_3954_ = v___y_3976_;
v___y_3955_ = v___y_3977_;
goto v___jp_3951_;
}
}
v___jp_3980_:
{
if (v___y_3983_ == 0)
{
v___y_3952_ = v___y_3982_;
v___y_3953_ = v___y_3981_;
v___y_3954_ = v___y_3984_;
v___y_3955_ = v___y_3985_;
goto v___jp_3951_;
}
else
{
v___y_3974_ = v___y_3981_;
v___y_3975_ = v___y_3982_;
v___y_3976_ = v___y_3984_;
v___y_3977_ = v___y_3985_;
v___y_3978_ = v___x_3979_;
goto v___jp_3973_;
}
}
v___jp_3986_:
{
if (v___y_3992_ == 0)
{
v___y_3974_ = v___y_3989_;
v___y_3975_ = v___y_3988_;
v___y_3976_ = v___y_3990_;
v___y_3977_ = v___y_3991_;
v___y_3978_ = v___x_3979_;
goto v___jp_3973_;
}
else
{
v___y_3981_ = v___y_3989_;
v___y_3982_ = v___y_3988_;
v___y_3983_ = v___y_3987_;
v___y_3984_ = v___y_3990_;
v___y_3985_ = v___y_3991_;
goto v___jp_3980_;
}
}
v___jp_3993_:
{
uint8_t v_emptyType_4000_; 
v_emptyType_4000_ = lean_ctor_get_uint8(v_config_3872_, sizeof(void*)*1 + 1);
if (v_emptyType_4000_ == 0)
{
v___y_3987_ = v___y_3994_;
v___y_3988_ = v___y_3999_;
v___y_3989_ = v___y_3998_;
v___y_3990_ = v___y_3997_;
v___y_3991_ = v___y_3996_;
v___y_3992_ = v___x_3979_;
goto v___jp_3986_;
}
else
{
if (v___y_3995_ == 0)
{
v___y_3981_ = v___y_3998_;
v___y_3982_ = v___y_3999_;
v___y_3983_ = v___y_3994_;
v___y_3984_ = v___y_3997_;
v___y_3985_ = v___y_3996_;
goto v___jp_3980_;
}
else
{
v___y_3987_ = v___y_3994_;
v___y_3988_ = v___y_3999_;
v___y_3989_ = v___y_3998_;
v___y_3990_ = v___y_3997_;
v___y_3991_ = v___y_3996_;
v___y_3992_ = v___x_3979_;
goto v___jp_3986_;
}
}
}
v___jp_4001_:
{
if (v___y_4008_ == 0)
{
v___y_3994_ = v___y_4006_;
v___y_3995_ = v___y_4007_;
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4004_;
v___y_3998_ = v___y_4003_;
v___y_3999_ = v___y_4002_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4009_; 
lean_inc(v_val_3904_);
lean_inc(v_mvarId_3873_);
v___x_4009_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3873_, v_val_3904_, v___y_4005_, v___y_4004_, v___y_4003_, v___y_4002_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; uint8_t v___x_4011_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_a_4010_);
lean_dec_ref_known(v___x_4009_, 1);
v___x_4011_ = lean_unbox(v_a_4010_);
lean_dec(v_a_4010_);
if (v___x_4011_ == 0)
{
v___y_3994_ = v___y_4006_;
v___y_3995_ = v___y_4007_;
v___y_3996_ = v___y_4005_;
v___y_3997_ = v___y_4004_;
v___y_3998_ = v___y_4003_;
v___y_3999_ = v___y_4002_;
goto v___jp_3993_;
}
else
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; 
lean_dec(v_val_3904_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v___x_4012_ = lean_box(v___x_3883_);
v___x_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
v___x_4014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
lean_ctor_set(v___x_4014_, 1, v___x_3908_);
v___x_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
v_a_3890_ = v___x_4015_;
goto v___jp_3889_;
}
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_dec(v_val_3904_);
lean_del_object(v___x_3887_);
lean_dec(v_snd_3885_);
lean_dec(v_mvarId_3873_);
lean_dec_ref(v_config_3872_);
v_a_4016_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_4009_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4009_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
}
}
}
}
v___jp_3889_:
{
lean_object* v___x_3891_; lean_object* v___x_3893_; 
v___x_3891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3891_, 0, v_a_3890_);
if (v_isShared_3888_ == 0)
{
lean_ctor_set(v___x_3887_, 0, v___x_3891_);
v___x_3893_ = v___x_3887_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v___x_3891_);
lean_ctor_set(v_reuseFailAlloc_3895_, 1, v_snd_3885_);
v___x_3893_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
lean_object* v___x_3894_; 
v___x_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3893_);
return v___x_3894_;
}
}
v___jp_3897_:
{
lean_object* v___x_3899_; size_t v___x_3900_; size_t v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3896_);
lean_ctor_set(v___x_3899_, 1, v_a_3898_);
v___x_3900_ = ((size_t)1ULL);
v___x_3901_ = lean_usize_add(v_i_3876_, v___x_3900_);
v___x_3902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3872_, v_mvarId_3873_, v_as_3874_, v_sz_3875_, v___x_3901_, v___x_3899_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
return v___x_3902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_config_4557_, lean_object* v_mvarId_4558_, lean_object* v_as_4559_, lean_object* v_sz_4560_, lean_object* v_i_4561_, lean_object* v_b_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
size_t v_sz_boxed_4568_; size_t v_i_boxed_4569_; lean_object* v_res_4570_; 
v_sz_boxed_4568_ = lean_unbox_usize(v_sz_4560_);
lean_dec(v_sz_4560_);
v_i_boxed_4569_ = lean_unbox_usize(v_i_4561_);
lean_dec(v_i_4561_);
v_res_4570_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4557_, v_mvarId_4558_, v_as_4559_, v_sz_boxed_4568_, v_i_boxed_4569_, v_b_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
lean_dec_ref(v_as_4559_);
return v_res_4570_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object* v_init_4571_, lean_object* v_config_4572_, lean_object* v_mvarId_4573_, lean_object* v_n_4574_, lean_object* v_b_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_){
_start:
{
if (lean_obj_tag(v_n_4574_) == 0)
{
lean_object* v_cs_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; size_t v_sz_4584_; size_t v___x_4585_; lean_object* v___x_4586_; 
v_cs_4581_ = lean_ctor_get(v_n_4574_, 0);
v___x_4582_ = lean_box(0);
v___x_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4583_, 0, v___x_4582_);
lean_ctor_set(v___x_4583_, 1, v_b_4575_);
v_sz_4584_ = lean_array_size(v_cs_4581_);
v___x_4585_ = ((size_t)0ULL);
v___x_4586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4571_, v_config_4572_, v_mvarId_4573_, v_cs_4581_, v_sz_4584_, v___x_4585_, v___x_4583_, v___y_4576_, v___y_4577_, v___y_4578_, v___y_4579_);
if (lean_obj_tag(v___x_4586_) == 0)
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4601_; 
v_a_4587_ = lean_ctor_get(v___x_4586_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4586_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4589_ = v___x_4586_;
v_isShared_4590_ = v_isSharedCheck_4601_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4586_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4601_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v_fst_4591_; 
v_fst_4591_ = lean_ctor_get(v_a_4587_, 0);
if (lean_obj_tag(v_fst_4591_) == 0)
{
lean_object* v_snd_4592_; lean_object* v___x_4593_; lean_object* v___x_4595_; 
v_snd_4592_ = lean_ctor_get(v_a_4587_, 1);
lean_inc(v_snd_4592_);
lean_dec(v_a_4587_);
v___x_4593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4593_, 0, v_snd_4592_);
if (v_isShared_4590_ == 0)
{
lean_ctor_set(v___x_4589_, 0, v___x_4593_);
v___x_4595_ = v___x_4589_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v___x_4593_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
else
{
lean_object* v_val_4597_; lean_object* v___x_4599_; 
lean_inc_ref(v_fst_4591_);
lean_dec(v_a_4587_);
v_val_4597_ = lean_ctor_get(v_fst_4591_, 0);
lean_inc(v_val_4597_);
lean_dec_ref_known(v_fst_4591_, 1);
if (v_isShared_4590_ == 0)
{
lean_ctor_set(v___x_4589_, 0, v_val_4597_);
v___x_4599_ = v___x_4589_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_val_4597_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
}
else
{
lean_object* v_a_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4609_; 
v_a_4602_ = lean_ctor_get(v___x_4586_, 0);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4586_);
if (v_isSharedCheck_4609_ == 0)
{
v___x_4604_ = v___x_4586_;
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_a_4602_);
lean_dec(v___x_4586_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4607_; 
if (v_isShared_4605_ == 0)
{
v___x_4607_ = v___x_4604_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v_a_4602_);
v___x_4607_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
return v___x_4607_;
}
}
}
}
else
{
lean_object* v_vs_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; size_t v_sz_4613_; size_t v___x_4614_; lean_object* v___x_4615_; 
v_vs_4610_ = lean_ctor_get(v_n_4574_, 0);
v___x_4611_ = lean_box(0);
v___x_4612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4612_, 0, v___x_4611_);
lean_ctor_set(v___x_4612_, 1, v_b_4575_);
v_sz_4613_ = lean_array_size(v_vs_4610_);
v___x_4614_ = ((size_t)0ULL);
v___x_4615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4572_, v_mvarId_4573_, v_vs_4610_, v_sz_4613_, v___x_4614_, v___x_4612_, v___y_4576_, v___y_4577_, v___y_4578_, v___y_4579_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4630_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4630_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4630_ == 0)
{
v___x_4618_ = v___x_4615_;
v_isShared_4619_ = v_isSharedCheck_4630_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4615_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4630_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v_fst_4620_; 
v_fst_4620_ = lean_ctor_get(v_a_4616_, 0);
if (lean_obj_tag(v_fst_4620_) == 0)
{
lean_object* v_snd_4621_; lean_object* v___x_4622_; lean_object* v___x_4624_; 
v_snd_4621_ = lean_ctor_get(v_a_4616_, 1);
lean_inc(v_snd_4621_);
lean_dec(v_a_4616_);
v___x_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4622_, 0, v_snd_4621_);
if (v_isShared_4619_ == 0)
{
lean_ctor_set(v___x_4618_, 0, v___x_4622_);
v___x_4624_ = v___x_4618_;
goto v_reusejp_4623_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4622_);
v___x_4624_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4623_;
}
v_reusejp_4623_:
{
return v___x_4624_;
}
}
else
{
lean_object* v_val_4626_; lean_object* v___x_4628_; 
lean_inc_ref(v_fst_4620_);
lean_dec(v_a_4616_);
v_val_4626_ = lean_ctor_get(v_fst_4620_, 0);
lean_inc(v_val_4626_);
lean_dec_ref_known(v_fst_4620_, 1);
if (v_isShared_4619_ == 0)
{
lean_ctor_set(v___x_4618_, 0, v_val_4626_);
v___x_4628_ = v___x_4618_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4629_; 
v_reuseFailAlloc_4629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4629_, 0, v_val_4626_);
v___x_4628_ = v_reuseFailAlloc_4629_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
return v___x_4628_;
}
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
v_a_4631_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4615_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4615_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object* v_init_4639_, lean_object* v_config_4640_, lean_object* v_mvarId_4641_, lean_object* v_as_4642_, size_t v_sz_4643_, size_t v_i_4644_, lean_object* v_b_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_){
_start:
{
uint8_t v___x_4651_; 
v___x_4651_ = lean_usize_dec_lt(v_i_4644_, v_sz_4643_);
if (v___x_4651_ == 0)
{
lean_object* v___x_4652_; 
lean_dec(v_mvarId_4641_);
lean_dec_ref(v_config_4640_);
v___x_4652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4652_, 0, v_b_4645_);
return v___x_4652_;
}
else
{
lean_object* v_snd_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4687_; 
v_snd_4653_ = lean_ctor_get(v_b_4645_, 1);
v_isSharedCheck_4687_ = !lean_is_exclusive(v_b_4645_);
if (v_isSharedCheck_4687_ == 0)
{
lean_object* v_unused_4688_; 
v_unused_4688_ = lean_ctor_get(v_b_4645_, 0);
lean_dec(v_unused_4688_);
v___x_4655_ = v_b_4645_;
v_isShared_4656_ = v_isSharedCheck_4687_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_snd_4653_);
lean_dec(v_b_4645_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4687_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
lean_object* v___x_4657_; lean_object* v_a_4658_; lean_object* v___x_4659_; 
v___x_4657_ = lean_box(0);
v_a_4658_ = lean_array_uget_borrowed(v_as_4642_, v_i_4644_);
lean_inc(v_snd_4653_);
lean_inc(v_mvarId_4641_);
lean_inc_ref(v_config_4640_);
v___x_4659_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4639_, v_config_4640_, v_mvarId_4641_, v_a_4658_, v_snd_4653_, v___y_4646_, v___y_4647_, v___y_4648_, v___y_4649_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; lean_object* v___x_4662_; uint8_t v_isShared_4663_; uint8_t v_isSharedCheck_4678_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4662_ = v___x_4659_;
v_isShared_4663_ = v_isSharedCheck_4678_;
goto v_resetjp_4661_;
}
else
{
lean_inc(v_a_4660_);
lean_dec(v___x_4659_);
v___x_4662_ = lean_box(0);
v_isShared_4663_ = v_isSharedCheck_4678_;
goto v_resetjp_4661_;
}
v_resetjp_4661_:
{
if (lean_obj_tag(v_a_4660_) == 0)
{
lean_object* v___x_4664_; lean_object* v___x_4666_; 
lean_dec(v_mvarId_4641_);
lean_dec_ref(v_config_4640_);
v___x_4664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4664_, 0, v_a_4660_);
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 0, v___x_4664_);
v___x_4666_ = v___x_4655_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4664_);
lean_ctor_set(v_reuseFailAlloc_4670_, 1, v_snd_4653_);
v___x_4666_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
lean_object* v___x_4668_; 
if (v_isShared_4663_ == 0)
{
lean_ctor_set(v___x_4662_, 0, v___x_4666_);
v___x_4668_ = v___x_4662_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v___x_4666_);
v___x_4668_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
return v___x_4668_;
}
}
}
else
{
lean_object* v_a_4671_; lean_object* v___x_4673_; 
lean_del_object(v___x_4662_);
lean_dec(v_snd_4653_);
v_a_4671_ = lean_ctor_get(v_a_4660_, 0);
lean_inc(v_a_4671_);
lean_dec_ref_known(v_a_4660_, 1);
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 1, v_a_4671_);
lean_ctor_set(v___x_4655_, 0, v___x_4657_);
v___x_4673_ = v___x_4655_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v___x_4657_);
lean_ctor_set(v_reuseFailAlloc_4677_, 1, v_a_4671_);
v___x_4673_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
size_t v___x_4674_; size_t v___x_4675_; 
v___x_4674_ = ((size_t)1ULL);
v___x_4675_ = lean_usize_add(v_i_4644_, v___x_4674_);
v_i_4644_ = v___x_4675_;
v_b_4645_ = v___x_4673_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
lean_del_object(v___x_4655_);
lean_dec(v_snd_4653_);
lean_dec(v_mvarId_4641_);
lean_dec_ref(v_config_4640_);
v_a_4679_ = lean_ctor_get(v___x_4659_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4659_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4681_ = v___x_4659_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4659_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4689_, lean_object* v_config_4690_, lean_object* v_mvarId_4691_, lean_object* v_as_4692_, lean_object* v_sz_4693_, lean_object* v_i_4694_, lean_object* v_b_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
size_t v_sz_boxed_4701_; size_t v_i_boxed_4702_; lean_object* v_res_4703_; 
v_sz_boxed_4701_ = lean_unbox_usize(v_sz_4693_);
lean_dec(v_sz_4693_);
v_i_boxed_4702_ = lean_unbox_usize(v_i_4694_);
lean_dec(v_i_4694_);
v_res_4703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4689_, v_config_4690_, v_mvarId_4691_, v_as_4692_, v_sz_boxed_4701_, v_i_boxed_4702_, v_b_4695_, v___y_4696_, v___y_4697_, v___y_4698_, v___y_4699_);
lean_dec(v___y_4699_);
lean_dec_ref(v___y_4698_);
lean_dec(v___y_4697_);
lean_dec_ref(v___y_4696_);
lean_dec_ref(v_as_4692_);
lean_dec_ref(v_init_4689_);
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object* v_init_4704_, lean_object* v_config_4705_, lean_object* v_mvarId_4706_, lean_object* v_n_4707_, lean_object* v_b_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v_res_4714_; 
v_res_4714_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4704_, v_config_4705_, v_mvarId_4706_, v_n_4707_, v_b_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_);
lean_dec(v___y_4712_);
lean_dec_ref(v___y_4711_);
lean_dec(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref(v_n_4707_);
lean_dec_ref(v_init_4704_);
return v_res_4714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object* v_config_4715_, lean_object* v_mvarId_4716_, lean_object* v_t_4717_, lean_object* v_init_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_){
_start:
{
lean_object* v_root_4724_; lean_object* v_tail_4725_; lean_object* v___x_4726_; 
v_root_4724_ = lean_ctor_get(v_t_4717_, 0);
v_tail_4725_ = lean_ctor_get(v_t_4717_, 1);
lean_inc(v_mvarId_4716_);
lean_inc_ref(v_config_4715_);
lean_inc_ref(v_init_4718_);
v___x_4726_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4718_, v_config_4715_, v_mvarId_4716_, v_root_4724_, v_init_4718_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_);
lean_dec_ref(v_init_4718_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4763_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4729_ = v___x_4726_;
v_isShared_4730_ = v_isSharedCheck_4763_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4726_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4763_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
if (lean_obj_tag(v_a_4727_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4733_; 
lean_dec(v_mvarId_4716_);
lean_dec_ref(v_config_4715_);
v_a_4731_ = lean_ctor_get(v_a_4727_, 0);
lean_inc(v_a_4731_);
lean_dec_ref_known(v_a_4727_, 1);
if (v_isShared_4730_ == 0)
{
lean_ctor_set(v___x_4729_, 0, v_a_4731_);
v___x_4733_ = v___x_4729_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_a_4731_);
v___x_4733_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
return v___x_4733_;
}
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; size_t v_sz_4738_; size_t v___x_4739_; lean_object* v___x_4740_; 
lean_del_object(v___x_4729_);
v_a_4735_ = lean_ctor_get(v_a_4727_, 0);
lean_inc(v_a_4735_);
lean_dec_ref_known(v_a_4727_, 1);
v___x_4736_ = lean_box(0);
v___x_4737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4737_, 0, v___x_4736_);
lean_ctor_set(v___x_4737_, 1, v_a_4735_);
v_sz_4738_ = lean_array_size(v_tail_4725_);
v___x_4739_ = ((size_t)0ULL);
v___x_4740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_4715_, v_mvarId_4716_, v_tail_4725_, v_sz_4738_, v___x_4739_, v___x_4737_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4754_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4743_ = v___x_4740_;
v_isShared_4744_ = v_isSharedCheck_4754_;
goto v_resetjp_4742_;
}
else
{
lean_inc(v_a_4741_);
lean_dec(v___x_4740_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4754_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v_fst_4745_; 
v_fst_4745_ = lean_ctor_get(v_a_4741_, 0);
if (lean_obj_tag(v_fst_4745_) == 0)
{
lean_object* v_snd_4746_; lean_object* v___x_4748_; 
v_snd_4746_ = lean_ctor_get(v_a_4741_, 1);
lean_inc(v_snd_4746_);
lean_dec(v_a_4741_);
if (v_isShared_4744_ == 0)
{
lean_ctor_set(v___x_4743_, 0, v_snd_4746_);
v___x_4748_ = v___x_4743_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_snd_4746_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
}
}
else
{
lean_object* v_val_4750_; lean_object* v___x_4752_; 
lean_inc_ref(v_fst_4745_);
lean_dec(v_a_4741_);
v_val_4750_ = lean_ctor_get(v_fst_4745_, 0);
lean_inc(v_val_4750_);
lean_dec_ref_known(v_fst_4745_, 1);
if (v_isShared_4744_ == 0)
{
lean_ctor_set(v___x_4743_, 0, v_val_4750_);
v___x_4752_ = v___x_4743_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_val_4750_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
v_a_4755_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4740_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4740_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4771_; 
lean_dec(v_mvarId_4716_);
lean_dec_ref(v_config_4715_);
v_a_4764_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4766_ = v___x_4726_;
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___x_4726_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4764_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
return v___x_4769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object* v_config_4772_, lean_object* v_mvarId_4773_, lean_object* v_t_4774_, lean_object* v_init_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_){
_start:
{
lean_object* v_res_4781_; 
v_res_4781_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4772_, v_mvarId_4773_, v_t_4774_, v_init_4775_, v___y_4776_, v___y_4777_, v___y_4778_, v___y_4779_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___y_4777_);
lean_dec_ref(v___y_4776_);
lean_dec_ref(v_t_4774_);
return v_res_4781_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object* v_mvarId_4782_, lean_object* v___x_4783_, lean_object* v_config_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_){
_start:
{
lean_object* v___x_4790_; 
lean_inc(v_mvarId_4782_);
v___x_4790_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4782_, v___x_4783_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v___x_4791_; 
lean_dec_ref_known(v___x_4790_, 1);
lean_inc(v_mvarId_4782_);
v___x_4791_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_4782_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_);
if (lean_obj_tag(v___x_4791_) == 0)
{
lean_object* v_a_4792_; lean_object* v___x_4794_; uint8_t v_isShared_4795_; uint8_t v_isSharedCheck_4825_; 
v_a_4792_ = lean_ctor_get(v___x_4791_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4791_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4794_ = v___x_4791_;
v_isShared_4795_ = v_isSharedCheck_4825_;
goto v_resetjp_4793_;
}
else
{
lean_inc(v_a_4792_);
lean_dec(v___x_4791_);
v___x_4794_ = lean_box(0);
v_isShared_4795_ = v_isSharedCheck_4825_;
goto v_resetjp_4793_;
}
v_resetjp_4793_:
{
uint8_t v___x_4796_; 
v___x_4796_ = lean_unbox(v_a_4792_);
if (v___x_4796_ == 0)
{
lean_object* v_lctx_4797_; lean_object* v_decls_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
lean_del_object(v___x_4794_);
v_lctx_4797_ = lean_ctor_get(v___y_4785_, 2);
v_decls_4798_ = lean_ctor_get(v_lctx_4797_, 1);
v___x_4799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_4800_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4784_, v_mvarId_4782_, v_decls_4798_, v___x_4799_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_);
if (lean_obj_tag(v___x_4800_) == 0)
{
lean_object* v_a_4801_; lean_object* v___x_4803_; uint8_t v_isShared_4804_; uint8_t v_isSharedCheck_4813_; 
v_a_4801_ = lean_ctor_get(v___x_4800_, 0);
v_isSharedCheck_4813_ = !lean_is_exclusive(v___x_4800_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4803_ = v___x_4800_;
v_isShared_4804_ = v_isSharedCheck_4813_;
goto v_resetjp_4802_;
}
else
{
lean_inc(v_a_4801_);
lean_dec(v___x_4800_);
v___x_4803_ = lean_box(0);
v_isShared_4804_ = v_isSharedCheck_4813_;
goto v_resetjp_4802_;
}
v_resetjp_4802_:
{
lean_object* v_fst_4805_; 
v_fst_4805_ = lean_ctor_get(v_a_4801_, 0);
lean_inc(v_fst_4805_);
lean_dec(v_a_4801_);
if (lean_obj_tag(v_fst_4805_) == 0)
{
lean_object* v___x_4807_; 
if (v_isShared_4804_ == 0)
{
lean_ctor_set(v___x_4803_, 0, v_a_4792_);
v___x_4807_ = v___x_4803_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4792_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
else
{
lean_object* v_val_4809_; lean_object* v___x_4811_; 
lean_dec(v_a_4792_);
v_val_4809_ = lean_ctor_get(v_fst_4805_, 0);
lean_inc(v_val_4809_);
lean_dec_ref_known(v_fst_4805_, 1);
if (v_isShared_4804_ == 0)
{
lean_ctor_set(v___x_4803_, 0, v_val_4809_);
v___x_4811_ = v___x_4803_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v_val_4809_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
else
{
lean_object* v_a_4814_; lean_object* v___x_4816_; uint8_t v_isShared_4817_; uint8_t v_isSharedCheck_4821_; 
lean_dec(v_a_4792_);
v_a_4814_ = lean_ctor_get(v___x_4800_, 0);
v_isSharedCheck_4821_ = !lean_is_exclusive(v___x_4800_);
if (v_isSharedCheck_4821_ == 0)
{
v___x_4816_ = v___x_4800_;
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
else
{
lean_inc(v_a_4814_);
lean_dec(v___x_4800_);
v___x_4816_ = lean_box(0);
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
v_resetjp_4815_:
{
lean_object* v___x_4819_; 
if (v_isShared_4817_ == 0)
{
v___x_4819_ = v___x_4816_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v_a_4814_);
v___x_4819_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
return v___x_4819_;
}
}
}
}
else
{
lean_object* v___x_4823_; 
lean_dec_ref(v_config_4784_);
lean_dec(v_mvarId_4782_);
if (v_isShared_4795_ == 0)
{
v___x_4823_ = v___x_4794_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4792_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
else
{
lean_dec_ref(v_config_4784_);
lean_dec(v_mvarId_4782_);
return v___x_4791_;
}
}
else
{
lean_object* v_a_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4833_; 
lean_dec_ref(v_config_4784_);
lean_dec(v_mvarId_4782_);
v_a_4826_ = lean_ctor_get(v___x_4790_, 0);
v_isSharedCheck_4833_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4833_ == 0)
{
v___x_4828_ = v___x_4790_;
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_a_4826_);
lean_dec(v___x_4790_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v___x_4831_; 
if (v_isShared_4829_ == 0)
{
v___x_4831_ = v___x_4828_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v_a_4826_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
return v___x_4831_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object* v_mvarId_4834_, lean_object* v___x_4835_, lean_object* v_config_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l_Lean_MVarId_contradictionCore___lam__0(v_mvarId_4834_, v___x_4835_, v_config_4836_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_);
lean_dec(v___y_4840_);
lean_dec_ref(v___y_4839_);
lean_dec(v___y_4838_);
lean_dec_ref(v___y_4837_);
return v_res_4842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object* v_mvarId_4845_, lean_object* v_config_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_){
_start:
{
lean_object* v___x_4852_; lean_object* v___f_4853_; lean_object* v___x_4854_; 
v___x_4852_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
lean_inc(v_mvarId_4845_);
v___f_4853_ = lean_alloc_closure((void*)(l_Lean_MVarId_contradictionCore___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4853_, 0, v_mvarId_4845_);
lean_closure_set(v___f_4853_, 1, v___x_4852_);
lean_closure_set(v___f_4853_, 2, v_config_4846_);
v___x_4854_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_4845_, v___f_4853_, v_a_4847_, v_a_4848_, v_a_4849_, v_a_4850_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object* v_mvarId_4855_, lean_object* v_config_4856_, lean_object* v_a_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_){
_start:
{
lean_object* v_res_4862_; 
v_res_4862_ = l_Lean_MVarId_contradictionCore(v_mvarId_4855_, v_config_4856_, v_a_4857_, v_a_4858_, v_a_4859_, v_a_4860_);
lean_dec(v_a_4860_);
lean_dec_ref(v_a_4859_);
lean_dec(v_a_4858_);
lean_dec_ref(v_a_4857_);
return v_res_4862_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object* v_mvarId_4863_, lean_object* v_config_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_, lean_object* v_a_4868_){
_start:
{
lean_object* v___x_4870_; 
lean_inc(v_mvarId_4863_);
v___x_4870_ = l_Lean_MVarId_contradictionCore(v_mvarId_4863_, v_config_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
if (lean_obj_tag(v___x_4870_) == 0)
{
lean_object* v_a_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4883_; 
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4873_ = v___x_4870_;
v_isShared_4874_ = v_isSharedCheck_4883_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_a_4871_);
lean_dec(v___x_4870_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4883_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
uint8_t v___x_4875_; 
v___x_4875_ = lean_unbox(v_a_4871_);
lean_dec(v_a_4871_);
if (v___x_4875_ == 0)
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; 
lean_del_object(v___x_4873_);
v___x_4876_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
v___x_4877_ = lean_box(0);
v___x_4878_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4876_, v_mvarId_4863_, v___x_4877_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_);
return v___x_4878_;
}
else
{
lean_object* v___x_4879_; lean_object* v___x_4881_; 
lean_dec(v_mvarId_4863_);
v___x_4879_ = lean_box(0);
if (v_isShared_4874_ == 0)
{
lean_ctor_set(v___x_4873_, 0, v___x_4879_);
v___x_4881_ = v___x_4873_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4882_; 
v_reuseFailAlloc_4882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4882_, 0, v___x_4879_);
v___x_4881_ = v_reuseFailAlloc_4882_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
return v___x_4881_;
}
}
}
}
else
{
lean_object* v_a_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4891_; 
lean_dec(v_mvarId_4863_);
v_a_4884_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4891_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4891_ == 0)
{
v___x_4886_ = v___x_4870_;
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4870_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4889_; 
if (v_isShared_4887_ == 0)
{
v___x_4889_ = v___x_4886_;
goto v_reusejp_4888_;
}
else
{
lean_object* v_reuseFailAlloc_4890_; 
v_reuseFailAlloc_4890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4890_, 0, v_a_4884_);
v___x_4889_ = v_reuseFailAlloc_4890_;
goto v_reusejp_4888_;
}
v_reusejp_4888_:
{
return v___x_4889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object* v_mvarId_4892_, lean_object* v_config_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_, lean_object* v_a_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_){
_start:
{
lean_object* v_res_4899_; 
v_res_4899_ = l_Lean_MVarId_contradiction(v_mvarId_4892_, v_config_4893_, v_a_4894_, v_a_4895_, v_a_4896_, v_a_4897_);
lean_dec(v_a_4897_);
lean_dec_ref(v_a_4896_);
lean_dec(v_a_4895_);
lean_dec_ref(v_a_4894_);
return v_res_4899_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4900_ = lean_box(0);
v___x_4901_ = l_unsafeCast___redArg(v___x_4900_);
return v___x_4901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4903_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4904_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4905_ = l_Lean_Name_str___override(v___x_4904_, v___x_4903_);
return v___x_4905_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; 
v___x_4907_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4908_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4909_ = l_Lean_Name_str___override(v___x_4908_, v___x_4907_);
return v___x_4909_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4910_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__1));
v___x_4911_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4912_ = l_Lean_Name_str___override(v___x_4911_, v___x_4910_);
return v___x_4912_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4913_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__2));
v___x_4914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4915_ = l_Lean_Name_str___override(v___x_4914_, v___x_4913_);
return v___x_4915_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v___x_4917_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4918_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4919_ = l_Lean_Name_str___override(v___x_4918_, v___x_4917_);
return v___x_4919_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; 
v___x_4920_ = lean_unsigned_to_nat(0u);
v___x_4921_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4922_ = l_Lean_Name_num___override(v___x_4921_, v___x_4920_);
return v___x_4922_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
v___x_4923_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4924_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4925_ = l_Lean_Name_str___override(v___x_4924_, v___x_4923_);
return v___x_4925_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4926_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__1));
v___x_4927_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4928_ = l_Lean_Name_str___override(v___x_4927_, v___x_4926_);
return v___x_4928_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4930_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4931_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4932_ = l_Lean_Name_str___override(v___x_4931_, v___x_4930_);
return v___x_4932_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; 
v___x_4934_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4935_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4936_ = l_Lean_Name_str___override(v___x_4935_, v___x_4934_);
return v___x_4936_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4938_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4939_ = l_Lean_Name_str___override(v___x_4938_, v___x_4937_);
return v___x_4939_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4940_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__1));
v___x_4941_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4942_ = l_Lean_Name_str___override(v___x_4941_, v___x_4940_);
return v___x_4942_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4943_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__2));
v___x_4944_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4945_ = l_Lean_Name_str___override(v___x_4944_, v___x_4943_);
return v___x_4945_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4946_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4948_ = l_Lean_Name_str___override(v___x_4947_, v___x_4946_);
return v___x_4948_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4949_ = lean_unsigned_to_nat(911661800u);
v___x_4950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4951_ = l_Lean_Name_num___override(v___x_4950_, v___x_4949_);
return v___x_4951_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v___x_4953_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4954_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4955_ = l_Lean_Name_str___override(v___x_4954_, v___x_4953_);
return v___x_4955_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4957_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4958_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4959_ = l_Lean_Name_str___override(v___x_4958_, v___x_4957_);
return v___x_4959_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4960_ = lean_unsigned_to_nat(2u);
v___x_4961_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4962_ = l_Lean_Name_num___override(v___x_4961_, v___x_4960_);
return v___x_4962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4964_; uint8_t v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; 
v___x_4964_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_4965_ = 0;
v___x_4966_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_);
v___x_4967_ = l_Lean_registerTraceClass(v___x_4964_, v___x_4965_, v___x_4966_);
return v___x_4967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object* v_a_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
return v_res_4969_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Contradiction(builtin);
}
#ifdef __cplusplus
}
#endif

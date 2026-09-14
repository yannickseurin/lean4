// Lean compiler output
// Module: Lean.Meta.Tactic.Induction
// Imports: public import Lean.Meta.RecursorInfo public import Lean.Meta.SynthInstance public import Lean.Meta.Tactic.Revert public import Lean.Meta.Tactic.Intro public import Lean.Meta.Tactic.FVarSubst import Lean.Meta.WHNF import Init.Omega
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_whnfUntil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_mkTacticExMsg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkRecursorInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_instInhabitedMVarId_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 130, 81, 169, 97, 77, 195, 126)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "failed to generate type class instance parameter"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ill-formed recursor"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedInductionSubgoal;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_instInhabitedAltVarNames_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedAltVarNames_default = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedAltVarNames = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 58, 44, 222, 146, 107, 234, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "finalize loop is done, "};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " subgoals"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "name of major premise: "};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.Tactic.Induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Tactic.Induction.0.Lean.Meta.finalize.loop"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unexpected major premise type"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "' is an index in major premise, but it depends on index occurring at position #"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "' is an index in major premise, but it occurs in previous arguments"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "' is an index in major premise, but it occurs more than once"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "major premise type index "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " is not a variable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "major premise type is ill-formed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getMajorTypeIndices___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getMajorTypeIndices___closed__0;
static lean_once_cell_t l_Lean_Meta_getMajorTypeIndices___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getMajorTypeIndices___closed__1;
static const lean_ctor_object l_Lean_Meta_getMajorTypeIndices___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_getMajorTypeIndices___boxed__const__1 = (const lean_object*)&l_Lean_Meta_getMajorTypeIndices___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "propRecLargeElim"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(43, 31, 155, 49, 49, 182, 172, 127)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(247, 150, 90, 37, 93, 225, 222, 61)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recursor `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` can only eliminate into `Prop`"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "major premise is not of the form (C ...)"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "after revert&intro\n"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recursor '"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "' does not support dependent elimination, but conclusion depends on major premise"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_induction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "initial\n"};
static const lean_object* l_Lean_MVarId_induction___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_induction___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_induction___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_induction___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 10:
{
lean_object* v_expr_2_; 
v_expr_2_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_expr_2_);
lean_dec_ref_known(v_x_1_, 2);
v_x_1_ = v_expr_2_;
goto _start;
}
case 7:
{
lean_object* v_body_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_body_4_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_body_4_);
lean_dec_ref_known(v_x_1_, 3);
v___x_5_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v_body_4_);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_nat_add(v___x_5_, v___x_6_);
lean_dec(v___x_5_);
return v___x_7_;
}
default: 
{
uint8_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 0;
v___x_9_ = l_Lean_Expr_isHeadBetaTarget(v_x_1_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
lean_dec_ref(v_x_1_);
v___x_10_ = lean_unsigned_to_nat(0u);
return v___x_10_;
}
else
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Expr_headBeta(v_x_1_);
v_x_1_ = v___x_11_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3));
v___x_20_ = l_Lean_MessageData_ofFormat(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4);
v___x_22_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7));
v___x_27_ = l_Lean_MessageData_ofFormat(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8);
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(lean_object* v_mvarId_30_, lean_object* v_majorTypeArgs_31_, lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
lean_object* v___x_39_; 
lean_dec(v_mvarId_30_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_33_);
return v___x_39_;
}
else
{
lean_object* v_head_40_; lean_object* v_tail_41_; lean_object* v___y_43_; 
v_head_40_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_head_40_);
v_tail_41_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_tail_41_);
lean_dec_ref_known(v_x_32_, 2);
if (lean_obj_tag(v_head_40_) == 0)
{
lean_object* v___x_47_; 
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
lean_inc(v_a_35_);
lean_inc_ref(v_a_34_);
lean_inc_ref(v_x_33_);
v___x_47_ = lean_infer_type(v_x_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_49_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_a_48_);
lean_dec_ref_known(v___x_47_, 1);
v___x_49_ = l_Lean_Meta_whnfForall(v_a_48_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_object* v_a_50_; 
v_a_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_a_50_);
lean_dec_ref_known(v___x_49_, 1);
if (lean_obj_tag(v_a_50_) == 7)
{
lean_object* v_binderType_51_; lean_object* v___x_52_; 
v_binderType_51_ = lean_ctor_get(v_a_50_, 1);
lean_inc_ref(v_binderType_51_);
lean_dec_ref_known(v_a_50_, 3);
v___x_52_ = l_Lean_Meta_synthInstance(v_binderType_51_, v_head_40_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_52_) == 0)
{
v___y_43_ = v___x_52_;
goto v___jp_42_;
}
else
{
lean_object* v_a_53_; uint8_t v___y_55_; uint8_t v___x_59_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_a_53_);
v___x_59_ = l_Lean_Exception_isInterrupt(v_a_53_);
if (v___x_59_ == 0)
{
uint8_t v___x_60_; 
v___x_60_ = l_Lean_Exception_isRuntime(v_a_53_);
v___y_55_ = v___x_60_;
goto v___jp_54_;
}
else
{
lean_dec(v_a_53_);
v___y_55_ = v___x_59_;
goto v___jp_54_;
}
v___jp_54_:
{
if (v___y_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec_ref_known(v___x_52_, 1);
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5);
lean_inc(v_mvarId_30_);
v___x_58_ = l_Lean_Meta_throwTacticEx___redArg(v___x_56_, v_mvarId_30_, v___x_57_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
v___y_43_ = v___x_58_;
goto v___jp_42_;
}
else
{
v___y_43_ = v___x_52_;
goto v___jp_42_;
}
}
}
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
lean_dec(v_a_50_);
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
v___x_61_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_62_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_63_ = l_Lean_Meta_throwTacticEx___redArg(v___x_61_, v_mvarId_30_, v___x_62_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
return v___x_63_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_49_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_47_;
}
}
else
{
lean_object* v_val_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v_val_64_ = lean_ctor_get(v_head_40_, 0);
lean_inc(v_val_64_);
lean_dec_ref_known(v_head_40_, 1);
v___x_65_ = lean_array_get_size(v_majorTypeArgs_31_);
v___x_66_ = lean_nat_dec_lt(v_val_64_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_val_64_);
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_68_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_69_ = l_Lean_Meta_throwTacticEx___redArg(v___x_67_, v_mvarId_30_, v___x_68_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_array_fget_borrowed(v_majorTypeArgs_31_, v_val_64_);
lean_dec(v_val_64_);
lean_inc(v___x_70_);
v___x_71_ = l_Lean_Expr_app___override(v_x_33_, v___x_70_);
v_x_32_ = v_tail_41_;
v_x_33_ = v___x_71_;
goto _start;
}
}
v___jp_42_:
{
if (lean_obj_tag(v___y_43_) == 0)
{
lean_object* v_a_44_; lean_object* v___x_45_; 
v_a_44_ = lean_ctor_get(v___y_43_, 0);
lean_inc(v_a_44_);
lean_dec_ref_known(v___y_43_, 1);
v___x_45_ = l_Lean_Expr_app___override(v_x_33_, v_a_44_);
v_x_32_ = v_tail_41_;
v_x_33_ = v___x_45_;
goto _start;
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___y_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___boxed(lean_object* v_mvarId_73_, lean_object* v_majorTypeArgs_74_, lean_object* v_x_75_, lean_object* v_x_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_73_, v_majorTypeArgs_74_, v_x_75_, v_x_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec_ref(v_majorTypeArgs_74_);
return v_res_82_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = lean_box(0);
v___x_86_ = ((lean_object*)(l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0));
v___x_87_ = l_Lean_instInhabitedMVarId_default;
v___x_88_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_85_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInductionSubgoal_default(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1, &l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_once, _init_l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedInductionSubgoal(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Meta_instInhabitedInductionSubgoal_default;
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(lean_object* v_mvarId_91_, lean_object* v_type_92_, lean_object* v_x_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Meta_whnfForall(v_type_92_, v_a_94_, v_a_95_, v_a_96_, v_a_97_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_112_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_112_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_112_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_112_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
if (lean_obj_tag(v_a_100_) == 7)
{
lean_object* v_body_104_; lean_object* v___x_105_; lean_object* v___x_107_; 
lean_dec(v_mvarId_91_);
v_body_104_ = lean_ctor_get(v_a_100_, 2);
lean_inc_ref(v_body_104_);
lean_dec_ref_known(v_a_100_, 3);
v___x_105_ = lean_expr_instantiate1(v_body_104_, v_x_93_);
lean_dec_ref(v_body_104_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_105_);
v___x_107_ = v___x_102_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
lean_del_object(v___x_102_);
lean_dec(v_a_100_);
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_110_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_111_ = l_Lean_Meta_throwTacticEx___redArg(v___x_109_, v_mvarId_91_, v___x_110_, v_a_94_, v_a_95_, v_a_96_, v_a_97_);
return v___x_111_;
}
}
}
else
{
lean_dec(v_mvarId_91_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody___boxed(lean_object* v_mvarId_113_, lean_object* v_type_114_, lean_object* v_x_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_113_, v_type_114_, v_x_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec(v_a_117_);
lean_dec_ref(v_a_116_);
lean_dec_ref(v_x_115_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(lean_object* v_msg_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___f_134_; lean_object* v___x_6373__overap_135_; lean_object* v___x_136_; 
v___f_134_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0));
v___x_6373__overap_135_ = lean_panic_fn_borrowed(v___f_134_, v_msg_128_);
lean_inc(v___y_132_);
lean_inc_ref(v___y_131_);
lean_inc(v___y_130_);
lean_inc_ref(v___y_129_);
v___x_136_ = lean_apply_5(v___x_6373__overap_135_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, lean_box(0));
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___boxed(lean_object* v_msg_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(v_msg_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(lean_object* v___x_144_, lean_object* v_reverted_145_, lean_object* v_fst_146_, lean_object* v_n_147_, lean_object* v_j_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_zero_150_; uint8_t v_isZero_151_; 
v_zero_150_ = lean_unsigned_to_nat(0u);
v_isZero_151_ = lean_nat_dec_eq(v_j_148_, v_zero_150_);
if (v_isZero_151_ == 1)
{
lean_dec(v_j_148_);
return v_a_149_;
}
else
{
lean_object* v___x_152_; lean_object* v_n_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_152_ = lean_unsigned_to_nat(1u);
v_n_153_ = lean_nat_sub(v_j_148_, v___x_152_);
v___x_154_ = lean_nat_sub(v_n_147_, v_j_148_);
lean_dec(v_j_148_);
v___x_155_ = lean_nat_add(v___x_144_, v___x_152_);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
lean_dec(v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_157_ = l_Lean_instInhabitedFVarId_default;
v___x_158_ = lean_array_fget_borrowed(v_reverted_145_, v___x_154_);
v___x_159_ = lean_nat_sub(v___x_154_, v___x_144_);
lean_dec(v___x_154_);
v___x_160_ = lean_nat_sub(v___x_159_, v___x_152_);
lean_dec(v___x_159_);
v___x_161_ = lean_array_get_borrowed(v___x_157_, v_fst_146_, v___x_160_);
lean_dec(v___x_160_);
lean_inc(v___x_161_);
v___x_162_ = l_Lean_mkFVar(v___x_161_);
lean_inc(v___x_158_);
v___x_163_ = l_Lean_Meta_FVarSubst_insert(v_a_149_, v___x_158_, v___x_162_);
v_j_148_ = v_n_153_;
v_a_149_ = v___x_163_;
goto _start;
}
else
{
lean_dec(v___x_154_);
v_j_148_ = v_n_153_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg___boxed(lean_object* v___x_166_, lean_object* v_reverted_167_, lean_object* v_fst_168_, lean_object* v_n_169_, lean_object* v_j_170_, lean_object* v_a_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___x_166_, v_reverted_167_, v_fst_168_, v_n_169_, v_j_170_, v_a_171_);
lean_dec(v_n_169_);
lean_dec_ref(v_fst_168_);
lean_dec_ref(v_reverted_167_);
lean_dec(v___x_166_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(lean_object* v_mvarId_173_, lean_object* v_as_174_, size_t v_i_175_, size_t v_stop_176_, lean_object* v_b_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_eq(v_i_175_, v_stop_176_);
if (v___x_183_ == 0)
{
lean_object* v_fst_184_; lean_object* v_snd_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_207_; 
v_fst_184_ = lean_ctor_get(v_b_177_, 0);
v_snd_185_ = lean_ctor_get(v_b_177_, 1);
v_isSharedCheck_207_ = !lean_is_exclusive(v_b_177_);
if (v_isSharedCheck_207_ == 0)
{
v___x_187_ = v_b_177_;
v_isShared_188_ = v_isSharedCheck_207_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_snd_185_);
lean_inc(v_fst_184_);
lean_dec(v_b_177_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_207_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_array_uget_borrowed(v_as_174_, v_i_175_);
lean_inc(v___x_189_);
v___x_190_ = l_Lean_Expr_app___override(v_fst_184_, v___x_189_);
lean_inc(v_mvarId_173_);
v___x_191_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_173_, v_snd_185_, v___x_189_, v___y_178_, v___y_179_, v___y_180_, v___y_181_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_194_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v_a_192_);
lean_ctor_set(v___x_187_, 0, v___x_190_);
v___x_194_ = v___x_187_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_190_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_a_192_);
v___x_194_ = v_reuseFailAlloc_198_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
size_t v___x_195_; size_t v___x_196_; 
v___x_195_ = ((size_t)1ULL);
v___x_196_ = lean_usize_add(v_i_175_, v___x_195_);
v_i_175_ = v___x_196_;
v_b_177_ = v___x_194_;
goto _start;
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec_ref(v___x_190_);
lean_del_object(v___x_187_);
lean_dec(v_mvarId_173_);
v_a_199_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_191_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_191_);
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
}
else
{
lean_object* v___x_208_; 
lean_dec(v_mvarId_173_);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v_b_177_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5___boxed(lean_object* v_mvarId_209_, lean_object* v_as_210_, lean_object* v_i_211_, lean_object* v_stop_212_, lean_object* v_b_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
size_t v_i_boxed_219_; size_t v_stop_boxed_220_; lean_object* v_res_221_; 
v_i_boxed_219_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_stop_boxed_220_ = lean_unbox_usize(v_stop_212_);
lean_dec(v_stop_212_);
v_res_221_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(v_mvarId_209_, v_as_210_, v_i_boxed_219_, v_stop_boxed_220_, v_b_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec_ref(v_as_210_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(lean_object* v_x_222_, lean_object* v_x_223_, lean_object* v_x_224_, lean_object* v_x_225_){
_start:
{
lean_object* v_ks_226_; lean_object* v_vs_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_251_; 
v_ks_226_ = lean_ctor_get(v_x_222_, 0);
v_vs_227_ = lean_ctor_get(v_x_222_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_222_);
if (v_isSharedCheck_251_ == 0)
{
v___x_229_ = v_x_222_;
v_isShared_230_ = v_isSharedCheck_251_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_vs_227_);
lean_inc(v_ks_226_);
lean_dec(v_x_222_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_251_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_array_get_size(v_ks_226_);
v___x_232_ = lean_nat_dec_lt(v_x_223_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
lean_dec(v_x_223_);
v___x_233_ = lean_array_push(v_ks_226_, v_x_224_);
v___x_234_ = lean_array_push(v_vs_227_, v_x_225_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___x_234_);
lean_ctor_set(v___x_229_, 0, v___x_233_);
v___x_236_ = v___x_229_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
else
{
lean_object* v_k_x27_238_; uint8_t v___x_239_; 
v_k_x27_238_ = lean_array_fget_borrowed(v_ks_226_, v_x_223_);
v___x_239_ = l_Lean_instBEqMVarId_beq(v_x_224_, v_k_x27_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_241_; 
if (v_isShared_230_ == 0)
{
v___x_241_ = v___x_229_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_ks_226_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_vs_227_);
v___x_241_ = v_reuseFailAlloc_245_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(1u);
v___x_243_ = lean_nat_add(v_x_223_, v___x_242_);
lean_dec(v_x_223_);
v_x_222_ = v___x_241_;
v_x_223_ = v___x_243_;
goto _start;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = lean_array_fset(v_ks_226_, v_x_223_, v_x_224_);
v___x_247_ = lean_array_fset(v_vs_227_, v_x_223_, v_x_225_);
lean_dec(v_x_223_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 1, v___x_247_);
lean_ctor_set(v___x_229_, 0, v___x_246_);
v___x_249_ = v___x_229_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(lean_object* v_n_252_, lean_object* v_k_253_, lean_object* v_v_254_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(v_n_252_, v___x_255_, v_k_253_, v_v_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_box(0);
v___x_258_ = l_unsafeCast___redArg(v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(lean_object* v_x_260_, size_t v_x_261_, size_t v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v_es_265_; size_t v___x_266_; size_t v___x_267_; lean_object* v_j_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_es_265_ = lean_ctor_get(v_x_260_, 0);
v___x_266_ = ((size_t)31ULL);
v___x_267_ = lean_usize_land(v_x_261_, v___x_266_);
v_j_268_ = lean_usize_to_nat(v___x_267_);
v___x_269_ = lean_array_get_size(v_es_265_);
v___x_270_ = lean_nat_dec_lt(v_j_268_, v___x_269_);
if (v___x_270_ == 0)
{
lean_dec(v_j_268_);
lean_dec(v_x_264_);
lean_dec(v_x_263_);
return v_x_260_;
}
else
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_309_; 
lean_inc_ref(v_es_265_);
v_isSharedCheck_309_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v_x_260_, 0);
lean_dec(v_unused_310_);
v___x_272_ = v_x_260_;
v_isShared_273_ = v_isSharedCheck_309_;
goto v_resetjp_271_;
}
else
{
lean_dec(v_x_260_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_309_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_v_274_; lean_object* v___x_275_; lean_object* v_xs_x27_276_; lean_object* v___y_278_; 
v_v_274_ = lean_array_fget(v_es_265_, v_j_268_);
v___x_275_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0);
v_xs_x27_276_ = lean_array_fset(v_es_265_, v_j_268_, v___x_275_);
switch(lean_obj_tag(v_v_274_))
{
case 0:
{
lean_object* v_key_283_; lean_object* v_val_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_294_; 
v_key_283_ = lean_ctor_get(v_v_274_, 0);
v_val_284_ = lean_ctor_get(v_v_274_, 1);
v_isSharedCheck_294_ = !lean_is_exclusive(v_v_274_);
if (v_isSharedCheck_294_ == 0)
{
v___x_286_ = v_v_274_;
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_val_284_);
lean_inc(v_key_283_);
lean_dec(v_v_274_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
uint8_t v___x_288_; 
v___x_288_ = l_Lean_instBEqMVarId_beq(v_x_263_, v_key_283_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_del_object(v___x_286_);
v___x_289_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_283_, v_val_284_, v_x_263_, v_x_264_);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
v___y_278_ = v___x_290_;
goto v___jp_277_;
}
else
{
lean_object* v___x_292_; 
lean_dec(v_val_284_);
lean_dec(v_key_283_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 1, v_x_264_);
lean_ctor_set(v___x_286_, 0, v_x_263_);
v___x_292_ = v___x_286_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_x_263_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_x_264_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
v___y_278_ = v___x_292_;
goto v___jp_277_;
}
}
}
}
case 1:
{
lean_object* v_node_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_307_; 
v_node_295_ = lean_ctor_get(v_v_274_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_v_274_);
if (v_isSharedCheck_307_ == 0)
{
v___x_297_ = v_v_274_;
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_node_295_);
lean_dec(v_v_274_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_299_ = ((size_t)5ULL);
v___x_300_ = lean_usize_shift_right(v_x_261_, v___x_299_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_add(v_x_262_, v___x_301_);
v___x_303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_node_295_, v___x_300_, v___x_302_, v_x_263_, v_x_264_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_303_);
v___x_305_ = v___x_297_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
v___y_278_ = v___x_305_;
goto v___jp_277_;
}
}
}
default: 
{
lean_object* v___x_308_; 
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_x_263_);
lean_ctor_set(v___x_308_, 1, v_x_264_);
v___y_278_ = v___x_308_;
goto v___jp_277_;
}
}
v___jp_277_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_array_fset(v_xs_x27_276_, v_j_268_, v___y_278_);
lean_dec(v_j_268_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_279_);
v___x_281_ = v___x_272_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
else
{
lean_object* v_ks_311_; lean_object* v_vs_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_330_; 
v_ks_311_ = lean_ctor_get(v_x_260_, 0);
v_vs_312_ = lean_ctor_get(v_x_260_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_330_ == 0)
{
v___x_314_ = v_x_260_;
v_isShared_315_ = v_isSharedCheck_330_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_vs_312_);
lean_inc(v_ks_311_);
lean_dec(v_x_260_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_330_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_ks_311_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_vs_312_);
v___x_317_ = v_reuseFailAlloc_329_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v_newNode_318_; size_t v___x_319_; uint8_t v___x_320_; 
v_newNode_318_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(v___x_317_, v_x_263_, v_x_264_);
v___x_319_ = ((size_t)7ULL);
v___x_320_ = lean_usize_dec_le(v___x_319_, v_x_262_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_318_);
v___x_322_ = lean_unsigned_to_nat(4u);
v___x_323_ = lean_nat_dec_lt(v___x_321_, v___x_322_);
lean_dec(v___x_321_);
if (v___x_323_ == 0)
{
lean_object* v_ks_324_; lean_object* v_vs_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_ks_324_ = lean_ctor_get(v_newNode_318_, 0);
lean_inc_ref(v_ks_324_);
v_vs_325_ = lean_ctor_get(v_newNode_318_, 1);
lean_inc_ref(v_vs_325_);
lean_dec_ref(v_newNode_318_);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_328_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_x_262_, v_ks_324_, v_vs_325_, v___x_326_, v___x_327_);
lean_dec_ref(v_vs_325_);
lean_dec_ref(v_ks_324_);
return v___x_328_;
}
else
{
return v_newNode_318_;
}
}
else
{
return v_newNode_318_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(size_t v_depth_331_, lean_object* v_keys_332_, lean_object* v_vals_333_, lean_object* v_i_334_, lean_object* v_entries_335_){
_start:
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_array_get_size(v_keys_332_);
v___x_337_ = lean_nat_dec_lt(v_i_334_, v___x_336_);
if (v___x_337_ == 0)
{
lean_dec(v_i_334_);
return v_entries_335_;
}
else
{
lean_object* v_k_338_; lean_object* v_v_339_; uint64_t v___x_340_; size_t v_h_341_; size_t v___x_342_; lean_object* v___x_343_; size_t v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v_h_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_k_338_ = lean_array_fget_borrowed(v_keys_332_, v_i_334_);
v_v_339_ = lean_array_fget_borrowed(v_vals_333_, v_i_334_);
v___x_340_ = l_Lean_instHashableMVarId_hash(v_k_338_);
v_h_341_ = lean_uint64_to_usize(v___x_340_);
v___x_342_ = ((size_t)5ULL);
v___x_343_ = lean_unsigned_to_nat(1u);
v___x_344_ = ((size_t)1ULL);
v___x_345_ = lean_usize_sub(v_depth_331_, v___x_344_);
v___x_346_ = lean_usize_mul(v___x_342_, v___x_345_);
v_h_347_ = lean_usize_shift_right(v_h_341_, v___x_346_);
v___x_348_ = lean_nat_add(v_i_334_, v___x_343_);
lean_dec(v_i_334_);
lean_inc(v_v_339_);
lean_inc(v_k_338_);
v___x_349_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_entries_335_, v_h_347_, v_depth_331_, v_k_338_, v_v_339_);
v_i_334_ = v___x_348_;
v_entries_335_ = v___x_349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg___boxed(lean_object* v_depth_351_, lean_object* v_keys_352_, lean_object* v_vals_353_, lean_object* v_i_354_, lean_object* v_entries_355_){
_start:
{
size_t v_depth_boxed_356_; lean_object* v_res_357_; 
v_depth_boxed_356_ = lean_unbox_usize(v_depth_351_);
lean_dec(v_depth_351_);
v_res_357_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_depth_boxed_356_, v_keys_352_, v_vals_353_, v_i_354_, v_entries_355_);
lean_dec_ref(v_vals_353_);
lean_dec_ref(v_keys_352_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_358_, lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
size_t v_x_7679__boxed_363_; size_t v_x_7680__boxed_364_; lean_object* v_res_365_; 
v_x_7679__boxed_363_ = lean_unbox_usize(v_x_359_);
lean_dec(v_x_359_);
v_x_7680__boxed_364_ = lean_unbox_usize(v_x_360_);
lean_dec(v_x_360_);
v_res_365_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_358_, v_x_7679__boxed_363_, v_x_7680__boxed_364_, v_x_361_, v_x_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(lean_object* v_x_366_, lean_object* v_x_367_, lean_object* v_x_368_){
_start:
{
uint64_t v___x_369_; size_t v___x_370_; size_t v___x_371_; lean_object* v___x_372_; 
v___x_369_ = l_Lean_instHashableMVarId_hash(v_x_367_);
v___x_370_ = lean_uint64_to_usize(v___x_369_);
v___x_371_ = ((size_t)1ULL);
v___x_372_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_366_, v___x_370_, v___x_371_, v_x_367_, v_x_368_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(lean_object* v_mvarId_373_, lean_object* v_val_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; lean_object* v_mctx_378_; lean_object* v_cache_379_; lean_object* v_zetaDeltaFVarIds_380_; lean_object* v_postponed_381_; lean_object* v_diag_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_411_; 
v___x_377_ = lean_st_ref_take(v___y_375_);
v_mctx_378_ = lean_ctor_get(v___x_377_, 0);
v_cache_379_ = lean_ctor_get(v___x_377_, 1);
v_zetaDeltaFVarIds_380_ = lean_ctor_get(v___x_377_, 2);
v_postponed_381_ = lean_ctor_get(v___x_377_, 3);
v_diag_382_ = lean_ctor_get(v___x_377_, 4);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_411_ == 0)
{
v___x_384_ = v___x_377_;
v_isShared_385_ = v_isSharedCheck_411_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_diag_382_);
lean_inc(v_postponed_381_);
lean_inc(v_zetaDeltaFVarIds_380_);
lean_inc(v_cache_379_);
lean_inc(v_mctx_378_);
lean_dec(v___x_377_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_411_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v_depth_386_; lean_object* v_levelAssignDepth_387_; lean_object* v_lmvarCounter_388_; lean_object* v_mvarCounter_389_; lean_object* v_lDecls_390_; lean_object* v_decls_391_; lean_object* v_userNames_392_; lean_object* v_lAssignment_393_; lean_object* v_eAssignment_394_; lean_object* v_dAssignment_395_; lean_object* v_instanceTypedMVars_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_410_; 
v_depth_386_ = lean_ctor_get(v_mctx_378_, 0);
v_levelAssignDepth_387_ = lean_ctor_get(v_mctx_378_, 1);
v_lmvarCounter_388_ = lean_ctor_get(v_mctx_378_, 2);
v_mvarCounter_389_ = lean_ctor_get(v_mctx_378_, 3);
v_lDecls_390_ = lean_ctor_get(v_mctx_378_, 4);
v_decls_391_ = lean_ctor_get(v_mctx_378_, 5);
v_userNames_392_ = lean_ctor_get(v_mctx_378_, 6);
v_lAssignment_393_ = lean_ctor_get(v_mctx_378_, 7);
v_eAssignment_394_ = lean_ctor_get(v_mctx_378_, 8);
v_dAssignment_395_ = lean_ctor_get(v_mctx_378_, 9);
v_instanceTypedMVars_396_ = lean_ctor_get(v_mctx_378_, 10);
v_isSharedCheck_410_ = !lean_is_exclusive(v_mctx_378_);
if (v_isSharedCheck_410_ == 0)
{
v___x_398_ = v_mctx_378_;
v_isShared_399_ = v_isSharedCheck_410_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_instanceTypedMVars_396_);
lean_inc(v_dAssignment_395_);
lean_inc(v_eAssignment_394_);
lean_inc(v_lAssignment_393_);
lean_inc(v_userNames_392_);
lean_inc(v_decls_391_);
lean_inc(v_lDecls_390_);
lean_inc(v_mvarCounter_389_);
lean_inc(v_lmvarCounter_388_);
lean_inc(v_levelAssignDepth_387_);
lean_inc(v_depth_386_);
lean_dec(v_mctx_378_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_410_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_400_ = lean_box(0);
v___x_401_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(v_eAssignment_394_, v_mvarId_373_, v_val_374_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 8, v___x_401_);
v___x_403_ = v___x_398_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_depth_386_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_levelAssignDepth_387_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_lmvarCounter_388_);
lean_ctor_set(v_reuseFailAlloc_409_, 3, v_mvarCounter_389_);
lean_ctor_set(v_reuseFailAlloc_409_, 4, v_lDecls_390_);
lean_ctor_set(v_reuseFailAlloc_409_, 5, v_decls_391_);
lean_ctor_set(v_reuseFailAlloc_409_, 6, v_userNames_392_);
lean_ctor_set(v_reuseFailAlloc_409_, 7, v_lAssignment_393_);
lean_ctor_set(v_reuseFailAlloc_409_, 8, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_409_, 9, v_dAssignment_395_);
lean_ctor_set(v_reuseFailAlloc_409_, 10, v_instanceTypedMVars_396_);
v___x_403_ = v_reuseFailAlloc_409_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_405_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_403_);
v___x_405_ = v___x_384_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_cache_379_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_zetaDeltaFVarIds_380_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_postponed_381_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v_diag_382_);
v___x_405_ = v_reuseFailAlloc_408_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_st_ref_put(v___y_375_, v___x_405_);
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_400_);
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg___boxed(lean_object* v_mvarId_412_, lean_object* v_val_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_412_, v_val_413_, v___y_414_);
lean_dec(v___y_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(lean_object* v_msgData_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; lean_object* v_env_424_; lean_object* v___x_425_; lean_object* v_toCold_426_; lean_object* v_mctx_427_; lean_object* v_lctx_428_; lean_object* v_options_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_423_ = lean_st_ref_get(v___y_421_);
v_env_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc_ref(v_env_424_);
lean_dec(v___x_423_);
v___x_425_ = lean_st_ref_get(v___y_419_);
v_toCold_426_ = lean_ctor_get(v___y_420_, 0);
v_mctx_427_ = lean_ctor_get(v___x_425_, 0);
lean_inc_ref(v_mctx_427_);
lean_dec(v___x_425_);
v_lctx_428_ = lean_ctor_get(v___y_418_, 2);
v_options_429_ = lean_ctor_get(v_toCold_426_, 2);
lean_inc_ref(v_options_429_);
lean_inc_ref(v_lctx_428_);
v___x_430_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_430_, 0, v_env_424_);
lean_ctor_set(v___x_430_, 1, v_mctx_427_);
lean_ctor_set(v___x_430_, 2, v_lctx_428_);
lean_ctor_set(v___x_430_, 3, v_options_429_);
v___x_431_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
lean_ctor_set(v___x_431_, 1, v_msgData_417_);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2___boxed(lean_object* v_msgData_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msgData_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
return v_res_439_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0(void){
_start:
{
lean_object* v___x_440_; double v___x_441_; 
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_float_of_nat(v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(lean_object* v_cls_445_, lean_object* v_msg_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_ref_452_; lean_object* v___x_453_; lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_498_; 
v_ref_452_ = lean_ctor_get(v___y_449_, 2);
v___x_453_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msg_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_498_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_498_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_498_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; lean_object* v_traceState_459_; lean_object* v_env_460_; lean_object* v_nextMacroScope_461_; lean_object* v_ngen_462_; lean_object* v_auxDeclNGen_463_; lean_object* v_cache_464_; lean_object* v_messages_465_; lean_object* v_infoState_466_; lean_object* v_snapshotTasks_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_497_; 
v___x_458_ = lean_st_ref_take(v___y_450_);
v_traceState_459_ = lean_ctor_get(v___x_458_, 4);
v_env_460_ = lean_ctor_get(v___x_458_, 0);
v_nextMacroScope_461_ = lean_ctor_get(v___x_458_, 1);
v_ngen_462_ = lean_ctor_get(v___x_458_, 2);
v_auxDeclNGen_463_ = lean_ctor_get(v___x_458_, 3);
v_cache_464_ = lean_ctor_get(v___x_458_, 5);
v_messages_465_ = lean_ctor_get(v___x_458_, 6);
v_infoState_466_ = lean_ctor_get(v___x_458_, 7);
v_snapshotTasks_467_ = lean_ctor_get(v___x_458_, 8);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_497_ == 0)
{
v___x_469_ = v___x_458_;
v_isShared_470_ = v_isSharedCheck_497_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_snapshotTasks_467_);
lean_inc(v_infoState_466_);
lean_inc(v_messages_465_);
lean_inc(v_cache_464_);
lean_inc(v_traceState_459_);
lean_inc(v_auxDeclNGen_463_);
lean_inc(v_ngen_462_);
lean_inc(v_nextMacroScope_461_);
lean_inc(v_env_460_);
lean_dec(v___x_458_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_497_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
uint64_t v_tid_471_; lean_object* v_traces_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_496_; 
v_tid_471_ = lean_ctor_get_uint64(v_traceState_459_, sizeof(void*)*1);
v_traces_472_ = lean_ctor_get(v_traceState_459_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_traceState_459_);
if (v_isSharedCheck_496_ == 0)
{
v___x_474_ = v_traceState_459_;
v_isShared_475_ = v_isSharedCheck_496_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_traces_472_);
lean_dec(v_traceState_459_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_496_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; double v___x_478_; uint8_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_476_ = lean_box(0);
v___x_477_ = lean_box(0);
v___x_478_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0);
v___x_479_ = 0;
v___x_480_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1));
v___x_481_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_481_, 0, v_cls_445_);
lean_ctor_set(v___x_481_, 1, v___x_477_);
lean_ctor_set(v___x_481_, 2, v___x_480_);
lean_ctor_set_float(v___x_481_, sizeof(void*)*3, v___x_478_);
lean_ctor_set_float(v___x_481_, sizeof(void*)*3 + 8, v___x_478_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*3 + 16, v___x_479_);
v___x_482_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2));
v___x_483_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v_a_454_);
lean_ctor_set(v___x_483_, 2, v___x_482_);
lean_inc(v_ref_452_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v_ref_452_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = l_Lean_PersistentArray_push___redArg(v_traces_472_, v___x_484_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_485_);
v___x_487_ = v___x_474_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_485_);
lean_ctor_set_uint64(v_reuseFailAlloc_495_, sizeof(void*)*1, v_tid_471_);
v___x_487_ = v_reuseFailAlloc_495_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_489_; 
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v___x_487_);
v___x_489_ = v___x_469_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_env_460_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_nextMacroScope_461_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v_ngen_462_);
lean_ctor_set(v_reuseFailAlloc_494_, 3, v_auxDeclNGen_463_);
lean_ctor_set(v_reuseFailAlloc_494_, 4, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_494_, 5, v_cache_464_);
lean_ctor_set(v_reuseFailAlloc_494_, 6, v_messages_465_);
lean_ctor_set(v_reuseFailAlloc_494_, 7, v_infoState_466_);
lean_ctor_set(v_reuseFailAlloc_494_, 8, v_snapshotTasks_467_);
v___x_489_ = v_reuseFailAlloc_494_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_490_ = lean_st_ref_put(v___y_450_, v___x_489_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_476_);
v___x_492_ = v___x_456_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_476_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___boxed(lean_object* v_cls_499_, lean_object* v_msg_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_499_, v_msg_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(size_t v_sz_507_, size_t v_i_508_, lean_object* v_bs_509_){
_start:
{
uint8_t v___x_510_; 
v___x_510_ = lean_usize_dec_lt(v_i_508_, v_sz_507_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; 
v___x_511_ = l_unsafeCast___redArg(v_bs_509_);
lean_dec_ref(v_bs_509_);
return v___x_511_;
}
else
{
lean_object* v_v_512_; lean_object* v___x_513_; lean_object* v_bs_x27_514_; lean_object* v___x_515_; lean_object* v___x_516_; size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_v_512_ = lean_array_uget(v_bs_509_, v_i_508_);
v___x_513_ = lean_unsigned_to_nat(0u);
v_bs_x27_514_ = lean_array_uset(v_bs_509_, v_i_508_, v___x_513_);
v___x_515_ = l_unsafeCast___redArg(v_v_512_);
lean_dec(v_v_512_);
v___x_516_ = l_Lean_mkFVar(v___x_515_);
v___x_517_ = ((size_t)1ULL);
v___x_518_ = lean_usize_add(v_i_508_, v___x_517_);
v___x_519_ = l_unsafeCast___redArg(v___x_516_);
lean_dec_ref(v___x_516_);
v___x_520_ = lean_array_uset(v_bs_x27_514_, v_i_508_, v___x_519_);
v_i_508_ = v___x_518_;
v_bs_509_ = v___x_520_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3___boxed(lean_object* v_sz_522_, lean_object* v_i_523_, lean_object* v_bs_524_){
_start:
{
size_t v_sz_boxed_525_; size_t v_i_boxed_526_; lean_object* v_res_527_; 
v_sz_boxed_525_ = lean_unbox_usize(v_sz_522_);
lean_dec(v_sz_522_);
v_i_boxed_526_ = lean_unbox_usize(v_i_523_);
lean_dec(v_i_523_);
v_res_527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_boxed_525_, v_i_boxed_526_, v_bs_524_);
return v_res_527_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_538_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4));
v___x_539_ = l_Lean_Name_append(v___x_538_, v___x_537_);
return v___x_539_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6));
v___x_542_ = l_Lean_stringToMessageData(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8));
v___x_545_ = l_Lean_stringToMessageData(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10));
v___x_548_ = l_Lean_stringToMessageData(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_552_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14));
v___x_553_ = lean_unsigned_to_nat(15u);
v___x_554_ = lean_unsigned_to_nat(120u);
v___x_555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13));
v___x_556_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12));
v___x_557_ = l_mkPanicMessageWithDecl(v___x_556_, v___x_555_, v___x_554_, v___x_553_, v___x_552_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(lean_object* v_mvarId_558_, lean_object* v_givenNames_559_, lean_object* v_recursorInfo_560_, lean_object* v_reverted_561_, lean_object* v_major_562_, lean_object* v_indices_563_, lean_object* v_baseSubst_564_, lean_object* v_initialArity_565_, lean_object* v_numMinors_566_, lean_object* v_pos_567_, lean_object* v_minorIdx_568_, lean_object* v_recursor_569_, lean_object* v_recursorType_570_, uint8_t v_consumedMajor_571_, lean_object* v_subgoals_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_636_; uint8_t v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; uint8_t v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; lean_object* v___y_689_; uint8_t v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; uint8_t v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_721_; uint8_t v___y_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___y_741_; uint8_t v___y_742_; lean_object* v___y_743_; lean_object* v___x_755_; 
v___x_755_ = l_Lean_Meta_whnfForall(v_recursorType_570_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; uint8_t v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; uint8_t v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_815_; uint8_t v___y_816_; uint8_t v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; uint8_t v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; uint8_t v___y_844_; lean_object* v___y_914_; uint8_t v___y_915_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; uint8_t v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; uint8_t v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; uint8_t v___y_945_; uint8_t v___x_992_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
v___x_992_ = l_Lean_Expr_isForall(v_a_756_);
if (v___x_992_ == 0)
{
v___y_945_ = v___x_992_;
goto v___jp_944_;
}
else
{
lean_object* v_numArgs_993_; uint8_t v___x_994_; 
v_numArgs_993_ = lean_ctor_get(v_recursorInfo_560_, 3);
v___x_994_ = lean_nat_dec_lt(v_pos_567_, v_numArgs_993_);
v___y_945_ = v___x_994_;
goto v___jp_944_;
}
v___jp_757_:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_766_, v___y_770_, v___y_762_, v___y_769_, v___y_764_, v___y_759_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc_n(v_a_773_, 2);
lean_dec_ref_known(v___x_772_, 1);
v___x_774_ = l_Lean_Expr_app___override(v_recursor_569_, v_a_773_);
lean_inc(v_mvarId_558_);
v___x_775_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_558_, v_a_756_, v_a_773_, v___y_762_, v___y_769_, v___y_764_, v___y_759_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_toCold_776_; lean_object* v_options_777_; uint8_t v_hasTrace_778_; 
v_toCold_776_ = lean_ctor_get(v___y_764_, 0);
v_options_777_ = lean_ctor_get(v_toCold_776_, 2);
v_hasTrace_778_ = lean_ctor_get_uint8(v_options_777_, sizeof(void*)*1);
if (v_hasTrace_778_ == 0)
{
lean_object* v_a_779_; 
v_a_779_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_775_, 1);
v___y_689_ = v_a_773_;
v___y_690_ = v___y_758_;
v___y_691_ = v___y_771_;
v___y_692_ = v___y_760_;
v___y_693_ = v___y_767_;
v___y_694_ = v___y_761_;
v___y_695_ = v___y_768_;
v___y_696_ = v___x_774_;
v___y_697_ = v___y_765_;
v___y_698_ = v___y_763_;
v___y_699_ = v_a_779_;
v___y_700_ = v___y_762_;
v___y_701_ = v___y_769_;
v___y_702_ = v___y_764_;
v___y_703_ = v___y_759_;
goto v___jp_688_;
}
else
{
lean_object* v_a_780_; lean_object* v_inheritedTraceOptions_781_; lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; 
v_a_780_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_775_, 1);
v_inheritedTraceOptions_781_ = lean_ctor_get(v_toCold_776_, 11);
v___x_782_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_783_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_784_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_781_, v_options_777_, v___x_783_);
if (v___x_784_ == 0)
{
v___y_689_ = v_a_773_;
v___y_690_ = v___y_758_;
v___y_691_ = v___y_771_;
v___y_692_ = v___y_760_;
v___y_693_ = v___y_767_;
v___y_694_ = v___y_761_;
v___y_695_ = v___y_768_;
v___y_696_ = v___x_774_;
v___y_697_ = v___y_765_;
v___y_698_ = v___y_763_;
v___y_699_ = v_a_780_;
v___y_700_ = v___y_762_;
v___y_701_ = v___y_769_;
v___y_702_ = v___y_764_;
v___y_703_ = v___y_759_;
goto v___jp_688_;
}
else
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_785_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11);
v___x_786_ = l_Lean_Expr_fvarId_x21(v_major_562_);
v___x_787_ = l_Lean_MessageData_ofName(v___x_786_);
v___x_788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_785_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v___x_782_, v___x_788_, v___y_762_, v___y_769_, v___y_764_, v___y_759_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_dec_ref_known(v___x_789_, 1);
v___y_689_ = v_a_773_;
v___y_690_ = v___y_758_;
v___y_691_ = v___y_771_;
v___y_692_ = v___y_760_;
v___y_693_ = v___y_767_;
v___y_694_ = v___y_761_;
v___y_695_ = v___y_768_;
v___y_696_ = v___x_774_;
v___y_697_ = v___y_765_;
v___y_698_ = v___y_763_;
v___y_699_ = v_a_780_;
v___y_700_ = v___y_762_;
v___y_701_ = v___y_769_;
v___y_702_ = v___y_764_;
v___y_703_ = v___y_759_;
goto v___jp_688_;
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_780_);
lean_dec_ref(v___x_774_);
lean_dec(v_a_773_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_768_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_760_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
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
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v___x_774_);
lean_dec(v_a_773_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_768_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_760_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_798_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_775_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_775_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
else
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec_ref(v___y_771_);
lean_dec(v___y_768_);
lean_dec(v___y_765_);
lean_dec(v___y_763_);
lean_dec(v___y_760_);
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_806_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_772_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_772_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
v___jp_814_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_825_ = lean_nat_sub(v___y_820_, v_initialArity_565_);
lean_dec(v___y_820_);
v___x_826_ = lean_array_get_size(v_reverted_561_);
v___x_827_ = lean_array_get_size(v_indices_563_);
v___x_828_ = lean_nat_sub(v___x_826_, v___x_827_);
v___x_829_ = lean_nat_sub(v___x_828_, v___y_818_);
lean_dec(v___x_828_);
v___x_830_ = lean_array_get_size(v_givenNames_559_);
v___x_831_ = lean_nat_dec_lt(v_minorIdx_568_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_box(0);
v___x_833_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set_uint8(v___x_833_, sizeof(void*)*1, v___x_831_);
v___y_758_ = v___y_816_;
v___y_759_ = v___y_824_;
v___y_760_ = v___x_827_;
v___y_761_ = v___y_818_;
v___y_762_ = v___y_821_;
v___y_763_ = v___x_825_;
v___y_764_ = v___y_823_;
v___y_765_ = v___x_829_;
v___y_766_ = v___y_815_;
v___y_767_ = v___y_817_;
v___y_768_ = v___x_826_;
v___y_769_ = v___y_822_;
v___y_770_ = v___y_819_;
v___y_771_ = v___x_833_;
goto v___jp_757_;
}
else
{
lean_object* v___x_834_; 
v___x_834_ = lean_array_fget_borrowed(v_givenNames_559_, v_minorIdx_568_);
lean_inc(v___x_834_);
v___y_758_ = v___y_816_;
v___y_759_ = v___y_824_;
v___y_760_ = v___x_827_;
v___y_761_ = v___y_818_;
v___y_762_ = v___y_821_;
v___y_763_ = v___x_825_;
v___y_764_ = v___y_823_;
v___y_765_ = v___x_829_;
v___y_766_ = v___y_815_;
v___y_767_ = v___y_817_;
v___y_768_ = v___x_826_;
v___y_769_ = v___y_822_;
v___y_770_ = v___y_819_;
v___y_771_ = v___x_834_;
goto v___jp_757_;
}
}
v___jp_835_:
{
if (v___y_844_ == 0)
{
lean_object* v___x_845_; uint8_t v___x_846_; 
lean_inc_ref(v___y_837_);
v___x_845_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v___y_837_);
v___x_846_ = lean_nat_dec_lt(v___x_845_, v_initialArity_565_);
if (v___x_846_ == 0)
{
v___y_815_ = v___y_837_;
v___y_816_ = v___y_836_;
v___y_817_ = v___y_844_;
v___y_818_ = v___y_839_;
v___y_819_ = v___y_842_;
v___y_820_ = v___x_845_;
v___y_821_ = v___y_843_;
v___y_822_ = v___y_838_;
v___y_823_ = v___y_841_;
v___y_824_ = v___y_840_;
goto v___jp_814_;
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_848_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_558_);
v___x_849_ = l_Lean_Meta_throwTacticEx___redArg(v___x_847_, v_mvarId_558_, v___x_848_, v___y_843_, v___y_838_, v___y_841_, v___y_840_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_dec_ref_known(v___x_849_, 1);
v___y_815_ = v___y_837_;
v___y_816_ = v___y_836_;
v___y_817_ = v___y_844_;
v___y_818_ = v___y_839_;
v___y_819_ = v___y_842_;
v___y_820_ = v___x_845_;
v___y_821_ = v___y_843_;
v___y_822_ = v___y_838_;
v___y_823_ = v___y_841_;
v___y_824_ = v___y_840_;
goto v___jp_814_;
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec(v___x_845_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_837_);
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_box(0);
lean_inc_ref(v___y_837_);
v___x_859_ = l_Lean_Meta_synthInstance_x3f(v___y_837_, v___x_858_, v___y_843_, v___y_838_, v___y_841_, v___y_840_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_859_, 1);
if (lean_obj_tag(v_a_860_) == 0)
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_837_, v___y_842_, v___y_843_, v___y_838_, v___y_841_, v___y_840_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc_n(v_a_862_, 2);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = l_Lean_Expr_app___override(v_recursor_569_, v_a_862_);
lean_inc(v_mvarId_558_);
v___x_864_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_558_, v_a_756_, v_a_862_, v___y_843_, v___y_838_, v___y_841_, v___y_840_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = lean_nat_add(v_pos_567_, v___y_839_);
lean_dec(v_pos_567_);
v___x_867_ = lean_nat_add(v_minorIdx_568_, v___y_839_);
lean_dec(v_minorIdx_568_);
v___x_868_ = l_Lean_Expr_mvarId_x21(v_a_862_);
lean_dec(v_a_862_);
v___x_869_ = ((lean_object*)(l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0));
v___x_870_ = lean_box(0);
v___x_871_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_871_, 0, v___x_868_);
lean_ctor_set(v___x_871_, 1, v___x_869_);
lean_ctor_set(v___x_871_, 2, v___x_870_);
v___x_872_ = lean_array_push(v_subgoals_572_, v___x_871_);
v_pos_567_ = v___x_866_;
v_minorIdx_568_ = v___x_867_;
v_recursor_569_ = v___x_863_;
v_recursorType_570_ = v_a_865_;
v_subgoals_572_ = v___x_872_;
v_a_573_ = v___y_843_;
v_a_574_ = v___y_838_;
v_a_575_ = v___y_841_;
v_a_576_ = v___y_840_;
goto _start;
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
lean_dec_ref(v___x_863_);
lean_dec(v_a_862_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_874_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_864_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_864_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_882_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_861_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_861_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
lean_object* v_val_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_837_);
v_val_890_ = lean_ctor_get(v_a_860_, 0);
lean_inc_n(v_val_890_, 2);
lean_dec_ref_known(v_a_860_, 1);
v___x_891_ = l_Lean_Expr_app___override(v_recursor_569_, v_val_890_);
lean_inc(v_mvarId_558_);
v___x_892_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_558_, v_a_756_, v_val_890_, v___y_843_, v___y_838_, v___y_841_, v___y_840_);
lean_dec(v_val_890_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = lean_nat_add(v_pos_567_, v___y_839_);
lean_dec(v_pos_567_);
v___x_895_ = lean_nat_add(v_minorIdx_568_, v___y_839_);
lean_dec(v_minorIdx_568_);
v_pos_567_ = v___x_894_;
v_minorIdx_568_ = v___x_895_;
v_recursor_569_ = v___x_891_;
v_recursorType_570_ = v_a_893_;
v_a_573_ = v___y_843_;
v_a_574_ = v___y_838_;
v_a_575_ = v___y_841_;
v_a_576_ = v___y_840_;
goto _start;
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec_ref(v___x_891_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_897_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_892_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_892_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_837_);
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_905_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_859_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_859_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
v___jp_913_:
{
uint8_t v___x_923_; 
v___x_923_ = l_Lean_BinderInfo_isInstImplicit(v___y_919_);
if (v___x_923_ == 0)
{
v___y_836_ = v___y_915_;
v___y_837_ = v___y_914_;
v___y_838_ = v___y_916_;
v___y_839_ = v___y_917_;
v___y_840_ = v___y_918_;
v___y_841_ = v___y_920_;
v___y_842_ = v___y_922_;
v___y_843_ = v___y_921_;
v___y_844_ = v___x_923_;
goto v___jp_835_;
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_924_ = lean_array_get_size(v_givenNames_559_);
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_926_ = lean_nat_dec_eq(v___x_924_, v___x_925_);
v___y_836_ = v___y_915_;
v___y_837_ = v___y_914_;
v___y_838_ = v___y_916_;
v___y_839_ = v___y_917_;
v___y_840_ = v___y_918_;
v___y_841_ = v___y_920_;
v___y_842_ = v___y_922_;
v___y_843_ = v___y_921_;
v___y_844_ = v___x_926_;
goto v___jp_835_;
}
}
v___jp_927_:
{
if (lean_obj_tag(v_a_756_) == 7)
{
lean_object* v_binderName_934_; lean_object* v_binderType_935_; uint8_t v_binderInfo_936_; lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_binderName_934_ = lean_ctor_get(v_a_756_, 0);
v_binderType_935_ = lean_ctor_get(v_a_756_, 1);
v_binderInfo_936_ = lean_ctor_get_uint8(v_a_756_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_935_);
v___x_937_ = l_Lean_Expr_headBeta(v_binderType_935_);
v___x_938_ = lean_unsigned_to_nat(1u);
v___x_939_ = lean_nat_dec_eq(v_numMinors_566_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = l_Lean_Name_eraseMacroScopes(v_binderName_934_);
v___x_941_ = l_Lean_Name_append(v___y_929_, v___x_940_);
v___y_914_ = v___x_937_;
v___y_915_ = v___y_928_;
v___y_916_ = v___y_931_;
v___y_917_ = v___x_938_;
v___y_918_ = v___y_933_;
v___y_919_ = v_binderInfo_936_;
v___y_920_ = v___y_932_;
v___y_921_ = v___y_930_;
v___y_922_ = v___x_941_;
goto v___jp_913_;
}
else
{
v___y_914_ = v___x_937_;
v___y_915_ = v___y_928_;
v___y_916_ = v___y_931_;
v___y_917_ = v___x_938_;
v___y_918_ = v___y_933_;
v___y_919_ = v_binderInfo_936_;
v___y_920_ = v___y_932_;
v___y_921_ = v___y_930_;
v___y_922_ = v___y_929_;
goto v___jp_913_;
}
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec(v___y_929_);
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v___x_942_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15);
v___x_943_ = l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(v___x_942_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_943_;
}
}
v___jp_944_:
{
if (v___y_945_ == 0)
{
lean_dec(v_a_756_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
if (v_consumedMajor_571_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_946_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_558_);
v___x_948_ = l_Lean_Meta_throwTacticEx___redArg(v___x_946_, v_mvarId_558_, v___x_947_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_dec_ref_known(v___x_948_, 1);
v___y_579_ = v_a_573_;
v___y_580_ = v_a_574_;
v___y_581_ = v_a_575_;
v___y_582_ = v_a_576_;
goto v___jp_578_;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_mvarId_558_);
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
v___y_579_ = v_a_573_;
v___y_580_ = v_a_574_;
v___y_581_ = v_a_575_;
v___y_582_ = v_a_576_;
goto v___jp_578_;
}
}
else
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = l_Lean_Meta_RecursorInfo_firstIndexPos(v_recursorInfo_560_);
v___x_958_ = lean_nat_dec_eq(v_pos_567_, v___x_957_);
lean_dec(v___x_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
lean_inc(v_mvarId_558_);
v___x_959_ = l_Lean_MVarId_getTag(v_mvarId_558_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; uint8_t v___x_961_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = lean_nat_dec_le(v_numMinors_566_, v_minorIdx_568_);
if (v___x_961_ == 0)
{
v___y_928_ = v___y_945_;
v___y_929_ = v_a_960_;
v___y_930_ = v_a_573_;
v___y_931_ = v_a_574_;
v___y_932_ = v_a_575_;
v___y_933_ = v_a_576_;
goto v___jp_927_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_962_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_963_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_558_);
v___x_964_ = l_Lean_Meta_throwTacticEx___redArg(v___x_962_, v_mvarId_558_, v___x_963_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_dec_ref_known(v___x_964_, 1);
v___y_928_ = v___y_945_;
v___y_929_ = v_a_960_;
v___y_930_ = v_a_573_;
v___y_931_ = v_a_574_;
v___y_932_ = v_a_575_;
v___y_933_ = v_a_576_;
goto v___jp_927_;
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec(v_a_960_);
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec(v_a_756_);
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_973_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_959_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_959_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_array_get_size(v_indices_563_);
v___x_983_ = lean_nat_dec_lt(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
v___y_721_ = v___x_982_;
v___y_722_ = v___x_958_;
v_fst_723_ = v_recursor_569_;
v_snd_724_ = v_a_756_;
goto v___jp_720_;
}
else
{
lean_object* v___x_984_; uint8_t v___x_985_; 
lean_inc(v_a_756_);
lean_inc_ref(v_recursor_569_);
v___x_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_984_, 0, v_recursor_569_);
lean_ctor_set(v___x_984_, 1, v_a_756_);
v___x_985_ = lean_nat_dec_le(v___x_982_, v___x_982_);
if (v___x_985_ == 0)
{
if (v___x_983_ == 0)
{
lean_dec_ref_known(v___x_984_, 2);
v___y_721_ = v___x_982_;
v___y_722_ = v___x_958_;
v_fst_723_ = v_recursor_569_;
v_snd_724_ = v_a_756_;
goto v___jp_720_;
}
else
{
size_t v___x_986_; size_t v___x_987_; lean_object* v___x_988_; 
lean_dec(v_a_756_);
lean_dec_ref(v_recursor_569_);
v___x_986_ = ((size_t)0ULL);
v___x_987_ = lean_usize_of_nat(v___x_982_);
lean_inc(v_mvarId_558_);
v___x_988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(v_mvarId_558_, v_indices_563_, v___x_986_, v___x_987_, v___x_984_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
v___y_741_ = v___x_982_;
v___y_742_ = v___x_958_;
v___y_743_ = v___x_988_;
goto v___jp_740_;
}
}
else
{
size_t v___x_989_; size_t v___x_990_; lean_object* v___x_991_; 
lean_dec(v_a_756_);
lean_dec_ref(v_recursor_569_);
v___x_989_ = ((size_t)0ULL);
v___x_990_ = lean_usize_of_nat(v___x_982_);
lean_inc(v_mvarId_558_);
v___x_991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(v_mvarId_558_, v_indices_563_, v___x_989_, v___x_990_, v___x_984_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
v___y_741_ = v___x_982_;
v___y_742_ = v___x_958_;
v___y_743_ = v___x_991_;
goto v___jp_740_;
}
}
}
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec_ref(v_subgoals_572_);
lean_dec_ref(v_recursor_569_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_995_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_755_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_755_);
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
v___jp_578_:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_558_, v_recursor_569_, v___y_580_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_625_; 
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; 
v_unused_626_ = lean_ctor_get(v___x_583_, 0);
lean_dec(v_unused_626_);
v___x_585_ = v___x_583_;
v_isShared_586_ = v_isSharedCheck_625_;
goto v_resetjp_584_;
}
else
{
lean_dec(v___x_583_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_625_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v_toCold_587_; lean_object* v_options_588_; uint8_t v_hasTrace_589_; 
v_toCold_587_ = lean_ctor_get(v___y_581_, 0);
v_options_588_ = lean_ctor_get(v_toCold_587_, 2);
v_hasTrace_589_ = lean_ctor_get_uint8(v_options_588_, sizeof(void*)*1);
if (v_hasTrace_589_ == 0)
{
lean_object* v___x_591_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v_subgoals_572_);
v___x_591_ = v___x_585_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_subgoals_572_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
else
{
lean_object* v_inheritedTraceOptions_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_inheritedTraceOptions_593_ = lean_ctor_get(v_toCold_587_, 11);
v___x_594_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_595_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_596_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_593_, v_options_588_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_598_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v_subgoals_572_);
v___x_598_ = v___x_585_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_subgoals_572_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
lean_del_object(v___x_585_);
v___x_600_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7);
v___x_601_ = lean_array_get_size(v_subgoals_572_);
v___x_602_ = l_Nat_reprFast(v___x_601_);
v___x_603_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
v___x_604_ = l_Lean_MessageData_ofFormat(v___x_603_);
v___x_605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_600_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9);
v___x_607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_605_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v___x_594_, v___x_607_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_608_, 0);
lean_dec(v_unused_616_);
v___x_610_ = v___x_608_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_dec(v___x_608_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v_subgoals_572_);
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_subgoals_572_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_dec_ref(v_subgoals_572_);
v_a_617_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_608_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref(v_subgoals_572_);
v_a_627_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_583_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_583_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
v___jp_635_:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lean_Meta_introNCore(v___y_639_, v___y_644_, v___y_649_, v___y_651_, v___y_646_, v___y_643_, v___y_647_, v___y_636_, v___y_638_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v_fst_654_; lean_object* v_snd_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_652_, 1);
v_fst_654_ = lean_ctor_get(v_a_653_, 0);
lean_inc(v_fst_654_);
v_snd_655_ = lean_ctor_get(v_a_653_, 1);
lean_inc(v_snd_655_);
lean_dec(v_a_653_);
v___x_656_ = lean_box(0);
v___x_657_ = l_Lean_Meta_introNCore(v_snd_655_, v___y_645_, v___x_656_, v___y_646_, v___y_637_, v___y_643_, v___y_647_, v___y_636_, v___y_638_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_661_; size_t v_sz_662_; size_t v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
v_fst_659_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_fst_659_);
v_snd_660_ = lean_ctor_get(v_a_658_, 1);
lean_inc(v_snd_660_);
lean_dec(v_a_658_);
lean_inc(v_baseSubst_564_);
lean_inc(v___y_648_);
v___x_661_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___y_640_, v_reverted_561_, v_fst_659_, v___y_648_, v___y_648_, v_baseSubst_564_);
lean_dec(v___y_648_);
lean_dec(v_fst_659_);
lean_dec(v___y_640_);
v_sz_662_ = lean_array_size(v_fst_654_);
v___x_663_ = ((size_t)0ULL);
v___x_664_ = l_unsafeCast___redArg(v_fst_654_);
lean_dec(v_fst_654_);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_662_, v___x_663_, v___x_664_);
v___x_666_ = l_unsafeCast___redArg(v___x_665_);
lean_dec_ref(v___x_665_);
v___x_667_ = lean_nat_add(v_pos_567_, v___y_641_);
lean_dec(v_pos_567_);
v___x_668_ = lean_nat_add(v_minorIdx_568_, v___y_641_);
lean_dec(v_minorIdx_568_);
v___x_669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_669_, 0, v_snd_660_);
lean_ctor_set(v___x_669_, 1, v___x_666_);
lean_ctor_set(v___x_669_, 2, v___x_661_);
v___x_670_ = lean_array_push(v_subgoals_572_, v___x_669_);
v_pos_567_ = v___x_667_;
v_minorIdx_568_ = v___x_668_;
v_recursor_569_ = v___y_642_;
v_recursorType_570_ = v___y_650_;
v_subgoals_572_ = v___x_670_;
v_a_573_ = v___y_643_;
v_a_574_ = v___y_647_;
v_a_575_ = v___y_636_;
v_a_576_ = v___y_638_;
goto _start;
}
else
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec(v_fst_654_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_640_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_672_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_657_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_657_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec_ref(v___y_650_);
lean_dec(v___y_648_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_640_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_680_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_652_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_652_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
v___jp_688_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = l_Lean_Expr_mvarId_x21(v___y_689_);
lean_dec_ref(v___y_689_);
v___x_705_ = l_Lean_Expr_fvarId_x21(v_major_562_);
v___x_706_ = l_Lean_MVarId_tryClear(v___x_704_, v___x_705_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
if (lean_obj_tag(v___x_706_) == 0)
{
uint8_t v_explicit_707_; 
v_explicit_707_ = lean_ctor_get_uint8(v___y_691_, sizeof(void*)*1);
if (v_explicit_707_ == 0)
{
lean_object* v_a_708_; lean_object* v_varNames_709_; 
v_a_708_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_706_, 1);
v_varNames_709_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_varNames_709_);
lean_dec_ref(v___y_691_);
v___y_636_ = v___y_702_;
v___y_637_ = v___y_690_;
v___y_638_ = v___y_703_;
v___y_639_ = v_a_708_;
v___y_640_ = v___y_692_;
v___y_641_ = v___y_694_;
v___y_642_ = v___y_696_;
v___y_643_ = v___y_700_;
v___y_644_ = v___y_698_;
v___y_645_ = v___y_697_;
v___y_646_ = v___y_693_;
v___y_647_ = v___y_701_;
v___y_648_ = v___y_695_;
v___y_649_ = v_varNames_709_;
v___y_650_ = v___y_699_;
v___y_651_ = v___y_690_;
goto v___jp_635_;
}
else
{
lean_object* v_a_710_; lean_object* v_varNames_711_; 
v_a_710_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_706_, 1);
v_varNames_711_ = lean_ctor_get(v___y_691_, 0);
lean_inc(v_varNames_711_);
lean_dec_ref(v___y_691_);
v___y_636_ = v___y_702_;
v___y_637_ = v___y_690_;
v___y_638_ = v___y_703_;
v___y_639_ = v_a_710_;
v___y_640_ = v___y_692_;
v___y_641_ = v___y_694_;
v___y_642_ = v___y_696_;
v___y_643_ = v___y_700_;
v___y_644_ = v___y_698_;
v___y_645_ = v___y_697_;
v___y_646_ = v___y_693_;
v___y_647_ = v___y_701_;
v___y_648_ = v___y_695_;
v___y_649_ = v_varNames_711_;
v___y_650_ = v___y_699_;
v___y_651_ = v___y_693_;
goto v___jp_635_;
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_712_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_706_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_706_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
v___jp_720_:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_inc_ref(v_major_562_);
v___x_725_ = l_Lean_Expr_app___override(v_fst_723_, v_major_562_);
lean_inc(v_mvarId_558_);
v___x_726_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_558_, v_snd_724_, v_major_562_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = lean_nat_add(v_pos_567_, v___x_728_);
lean_dec(v_pos_567_);
v___x_730_ = lean_nat_add(v___x_729_, v___y_721_);
lean_dec(v___y_721_);
lean_dec(v___x_729_);
v_pos_567_ = v___x_730_;
v_recursor_569_ = v___x_725_;
v_recursorType_570_ = v_a_727_;
v_consumedMajor_571_ = v___y_722_;
goto _start;
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec_ref(v___x_725_);
lean_dec(v___y_721_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_732_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_726_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_726_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
v___jp_740_:
{
if (lean_obj_tag(v___y_743_) == 0)
{
lean_object* v_a_744_; lean_object* v_fst_745_; lean_object* v_snd_746_; 
v_a_744_ = lean_ctor_get(v___y_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___y_743_, 1);
v_fst_745_ = lean_ctor_get(v_a_744_, 0);
lean_inc(v_fst_745_);
v_snd_746_ = lean_ctor_get(v_a_744_, 1);
lean_inc(v_snd_746_);
lean_dec(v_a_744_);
v___y_721_ = v___y_741_;
v___y_722_ = v___y_742_;
v_fst_723_ = v_fst_745_;
v_snd_724_ = v_snd_746_;
goto v___jp_720_;
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v___y_741_);
lean_dec_ref(v_subgoals_572_);
lean_dec(v_minorIdx_568_);
lean_dec(v_pos_567_);
lean_dec(v_baseSubst_564_);
lean_dec_ref(v_major_562_);
lean_dec(v_mvarId_558_);
v_a_747_ = lean_ctor_get(v___y_743_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___y_743_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___y_743_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___y_743_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___boxed(lean_object** _args){
lean_object* v_mvarId_1003_ = _args[0];
lean_object* v_givenNames_1004_ = _args[1];
lean_object* v_recursorInfo_1005_ = _args[2];
lean_object* v_reverted_1006_ = _args[3];
lean_object* v_major_1007_ = _args[4];
lean_object* v_indices_1008_ = _args[5];
lean_object* v_baseSubst_1009_ = _args[6];
lean_object* v_initialArity_1010_ = _args[7];
lean_object* v_numMinors_1011_ = _args[8];
lean_object* v_pos_1012_ = _args[9];
lean_object* v_minorIdx_1013_ = _args[10];
lean_object* v_recursor_1014_ = _args[11];
lean_object* v_recursorType_1015_ = _args[12];
lean_object* v_consumedMajor_1016_ = _args[13];
lean_object* v_subgoals_1017_ = _args[14];
lean_object* v_a_1018_ = _args[15];
lean_object* v_a_1019_ = _args[16];
lean_object* v_a_1020_ = _args[17];
lean_object* v_a_1021_ = _args[18];
lean_object* v_a_1022_ = _args[19];
_start:
{
uint8_t v_consumedMajor_boxed_1023_; lean_object* v_res_1024_; 
v_consumedMajor_boxed_1023_ = lean_unbox(v_consumedMajor_1016_);
v_res_1024_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(v_mvarId_1003_, v_givenNames_1004_, v_recursorInfo_1005_, v_reverted_1006_, v_major_1007_, v_indices_1008_, v_baseSubst_1009_, v_initialArity_1010_, v_numMinors_1011_, v_pos_1012_, v_minorIdx_1013_, v_recursor_1014_, v_recursorType_1015_, v_consumedMajor_boxed_1023_, v_subgoals_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec(v_a_1019_);
lean_dec_ref(v_a_1018_);
lean_dec(v_numMinors_1011_);
lean_dec(v_initialArity_1010_);
lean_dec_ref(v_indices_1008_);
lean_dec_ref(v_reverted_1006_);
lean_dec_ref(v_recursorInfo_1005_);
lean_dec_ref(v_givenNames_1004_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(lean_object* v_mvarId_1025_, lean_object* v_val_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_1025_, v_val_1026_, v___y_1028_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___boxed(lean_object* v_mvarId_1033_, lean_object* v_val_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(v_mvarId_1033_, v_val_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(lean_object* v___x_1041_, lean_object* v_reverted_1042_, lean_object* v_fst_1043_, lean_object* v_n_1044_, lean_object* v_j_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___x_1041_, v_reverted_1042_, v_fst_1043_, v_n_1044_, v_j_1045_, v_a_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___boxed(lean_object* v___x_1049_, lean_object* v_reverted_1050_, lean_object* v_fst_1051_, lean_object* v_n_1052_, lean_object* v_j_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(v___x_1049_, v_reverted_1050_, v_fst_1051_, v_n_1052_, v_j_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_n_1052_);
lean_dec_ref(v_fst_1051_);
lean_dec_ref(v_reverted_1050_);
lean_dec(v___x_1049_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0(lean_object* v_00_u03b2_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(v_x_1058_, v_x_1059_, v_x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1062_, lean_object* v_x_1063_, size_t v_x_1064_, size_t v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_1063_, v_x_1064_, v_x_1065_, v_x_1066_, v_x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1069_, lean_object* v_x_1070_, lean_object* v_x_1071_, lean_object* v_x_1072_, lean_object* v_x_1073_, lean_object* v_x_1074_){
_start:
{
size_t v_x_9045__boxed_1075_; size_t v_x_9046__boxed_1076_; lean_object* v_res_1077_; 
v_x_9045__boxed_1075_ = lean_unbox_usize(v_x_1071_);
lean_dec(v_x_1071_);
v_x_9046__boxed_1076_ = lean_unbox_usize(v_x_1072_);
lean_dec(v_x_1072_);
v_res_1077_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(v_00_u03b2_1069_, v_x_1070_, v_x_9045__boxed_1075_, v_x_9046__boxed_1076_, v_x_1073_, v_x_1074_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8(lean_object* v_00_u03b2_1078_, lean_object* v_n_1079_, lean_object* v_k_1080_, lean_object* v_v_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(v_n_1079_, v_k_1080_, v_v_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(lean_object* v_00_u03b2_1083_, size_t v_depth_1084_, lean_object* v_keys_1085_, lean_object* v_vals_1086_, lean_object* v_heq_1087_, lean_object* v_i_1088_, lean_object* v_entries_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_depth_1084_, v_keys_1085_, v_vals_1086_, v_i_1088_, v_entries_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___boxed(lean_object* v_00_u03b2_1091_, lean_object* v_depth_1092_, lean_object* v_keys_1093_, lean_object* v_vals_1094_, lean_object* v_heq_1095_, lean_object* v_i_1096_, lean_object* v_entries_1097_){
_start:
{
size_t v_depth_boxed_1098_; lean_object* v_res_1099_; 
v_depth_boxed_1098_ = lean_unbox_usize(v_depth_1092_);
lean_dec(v_depth_1092_);
v_res_1099_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(v_00_u03b2_1091_, v_depth_boxed_1098_, v_keys_1093_, v_vals_1094_, v_heq_1095_, v_i_1096_, v_entries_1097_);
lean_dec_ref(v_vals_1094_);
lean_dec_ref(v_keys_1093_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9(lean_object* v_00_u03b2_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_, lean_object* v_x_1104_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(v_x_1101_, v_x_1102_, v_x_1103_, v_x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(lean_object* v_mvarId_1108_, lean_object* v_givenNames_1109_, lean_object* v_recursorInfo_1110_, lean_object* v_reverted_1111_, lean_object* v_major_1112_, lean_object* v_indices_1113_, lean_object* v_baseSubst_1114_, lean_object* v_recursor_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v___x_1121_; 
lean_inc(v_mvarId_1108_);
v___x_1121_ = l_Lean_MVarId_getType(v_mvarId_1108_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1123_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v_a_1122_);
lean_inc(v_a_1119_);
lean_inc_ref(v_a_1118_);
lean_inc(v_a_1117_);
lean_inc_ref(v_a_1116_);
lean_inc_ref(v_recursor_1115_);
v___x_1124_ = lean_infer_type(v_recursor_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v_paramsPos_1126_; lean_object* v_produceMotive_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v_paramsPos_1126_ = lean_ctor_get(v_recursorInfo_1110_, 5);
v_produceMotive_1127_ = lean_ctor_get(v_recursorInfo_1110_, 7);
v___x_1128_ = l_List_lengthTR___redArg(v_produceMotive_1127_);
v___x_1129_ = l_List_lengthTR___redArg(v_paramsPos_1126_);
v___x_1130_ = lean_unsigned_to_nat(1u);
v___x_1131_ = lean_nat_add(v___x_1129_, v___x_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_unsigned_to_nat(0u);
v___x_1133_ = 0;
v___x_1134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0));
v___x_1135_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(v_mvarId_1108_, v_givenNames_1109_, v_recursorInfo_1110_, v_reverted_1111_, v_major_1112_, v_indices_1113_, v_baseSubst_1114_, v___x_1123_, v___x_1128_, v___x_1131_, v___x_1132_, v_recursor_1115_, v_a_1125_, v___x_1133_, v___x_1134_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_);
lean_dec(v___x_1128_);
lean_dec(v___x_1123_);
return v___x_1135_;
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec(v___x_1123_);
lean_dec_ref(v_recursor_1115_);
lean_dec(v_baseSubst_1114_);
lean_dec_ref(v_major_1112_);
lean_dec(v_mvarId_1108_);
v_a_1136_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1124_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1124_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_dec_ref(v_recursor_1115_);
lean_dec(v_baseSubst_1114_);
lean_dec_ref(v_major_1112_);
lean_dec(v_mvarId_1108_);
v_a_1144_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1121_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1121_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___boxed(lean_object* v_mvarId_1152_, lean_object* v_givenNames_1153_, lean_object* v_recursorInfo_1154_, lean_object* v_reverted_1155_, lean_object* v_major_1156_, lean_object* v_indices_1157_, lean_object* v_baseSubst_1158_, lean_object* v_recursor_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(v_mvarId_1152_, v_givenNames_1153_, v_recursorInfo_1154_, v_reverted_1155_, v_major_1156_, v_indices_1157_, v_baseSubst_1158_, v_recursor_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_);
lean_dec(v_a_1163_);
lean_dec_ref(v_a_1162_);
lean_dec(v_a_1161_);
lean_dec_ref(v_a_1160_);
lean_dec_ref(v_indices_1157_);
lean_dec_ref(v_reverted_1155_);
lean_dec_ref(v_recursorInfo_1154_);
lean_dec_ref(v_givenNames_1153_);
return v_res_1165_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(lean_object* v_tacticName_1169_, lean_object* v_mvarId_1170_, lean_object* v_majorType_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1177_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1);
v___x_1178_ = l_Lean_indentExpr(v_majorType_1171_);
v___x_1179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
v___x_1181_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1169_, v_mvarId_1170_, v___x_1180_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___boxed(lean_object* v_tacticName_1182_, lean_object* v_mvarId_1183_, lean_object* v_majorType_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_1182_, v_mvarId_1183_, v_majorType_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_);
lean_dec(v_a_1188_);
lean_dec_ref(v_a_1187_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(lean_object* v_00_u03b1_1191_, lean_object* v_tacticName_1192_, lean_object* v_mvarId_1193_, lean_object* v_majorType_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_1192_, v_mvarId_1193_, v_majorType_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___boxed(lean_object* v_00_u03b1_1201_, lean_object* v_tacticName_1202_, lean_object* v_mvarId_1203_, lean_object* v_majorType_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(v_00_u03b1_1201_, v_tacticName_1202_, v_mvarId_1203_, v_majorType_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
return v_res_1210_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(lean_object* v_fvarId_1211_, lean_object* v_x_1212_){
_start:
{
uint8_t v___x_1213_; 
v___x_1213_ = l_Lean_instBEqFVarId_beq(v_fvarId_1211_, v_x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed(lean_object* v_fvarId_1214_, lean_object* v_x_1215_){
_start:
{
uint8_t v_res_1216_; lean_object* v_r_1217_; 
v_res_1216_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(v_fvarId_1214_, v_x_1215_);
lean_dec(v_x_1215_);
lean_dec(v_fvarId_1214_);
v_r_1217_ = lean_box(v_res_1216_);
return v_r_1217_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(lean_object* v_x_1218_){
_start:
{
uint8_t v___x_1219_; 
v___x_1219_ = 0;
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed(lean_object* v_x_1220_){
_start:
{
uint8_t v_res_1221_; lean_object* v_r_1222_; 
v_res_1221_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(v_x_1220_);
lean_dec(v_x_1220_);
v_r_1222_ = lean_box(v_res_1221_);
return v_r_1222_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_unsigned_to_nat(16u);
v___x_1226_ = lean_mk_array(v___x_1225_, v___x_1224_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1);
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
lean_ctor_set(v___x_1229_, 1, v___x_1227_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(lean_object* v_localDecl_1230_, lean_object* v_fvarId_1231_, uint8_t v_generalizeNondepLet_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_fst_1236_; lean_object* v_snd_1237_; lean_object* v___y_1256_; lean_object* v___f_1260_; lean_object* v___f_1261_; 
v___f_1260_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1260_, 0, v_fvarId_1231_);
v___f_1261_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0));
if (lean_obj_tag(v_localDecl_1230_) == 0)
{
lean_object* v_type_1262_; lean_object* v___x_1263_; uint8_t v_fst_1265_; lean_object* v_mctx_1266_; lean_object* v___y_1284_; lean_object* v_mctx_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_type_1262_ = lean_ctor_get(v_localDecl_1230_, 3);
lean_inc_ref(v_type_1262_);
lean_dec_ref_known(v_localDecl_1230_, 4);
v___x_1263_ = lean_st_ref_get(v___y_1233_);
v_mctx_1289_ = lean_ctor_get(v___x_1263_, 0);
lean_inc_ref_n(v_mctx_1289_, 2);
lean_dec(v___x_1263_);
v___x_1290_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v_mctx_1289_);
v___x_1292_ = l_Lean_Expr_hasFVar(v_type_1262_);
if (v___x_1292_ == 0)
{
uint8_t v___x_1293_; 
v___x_1293_ = l_Lean_Expr_hasMVar(v_type_1262_);
if (v___x_1293_ == 0)
{
lean_dec_ref_known(v___x_1291_, 2);
lean_dec_ref(v_type_1262_);
lean_dec_ref(v___f_1260_);
v_fst_1265_ = v___x_1293_;
v_mctx_1266_ = v_mctx_1289_;
goto v___jp_1264_;
}
else
{
lean_object* v___x_1294_; 
lean_dec_ref(v_mctx_1289_);
v___x_1294_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1262_, v___x_1291_);
v___y_1284_ = v___x_1294_;
goto v___jp_1283_;
}
}
else
{
lean_object* v___x_1295_; 
lean_dec_ref(v_mctx_1289_);
v___x_1295_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1262_, v___x_1291_);
v___y_1284_ = v___x_1295_;
goto v___jp_1283_;
}
v___jp_1264_:
{
lean_object* v___x_1267_; lean_object* v_cache_1268_; lean_object* v_zetaDeltaFVarIds_1269_; lean_object* v_postponed_1270_; lean_object* v_diag_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1281_; 
v___x_1267_ = lean_st_ref_take(v___y_1233_);
v_cache_1268_ = lean_ctor_get(v___x_1267_, 1);
v_zetaDeltaFVarIds_1269_ = lean_ctor_get(v___x_1267_, 2);
v_postponed_1270_ = lean_ctor_get(v___x_1267_, 3);
v_diag_1271_ = lean_ctor_get(v___x_1267_, 4);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1281_ == 0)
{
lean_object* v_unused_1282_; 
v_unused_1282_ = lean_ctor_get(v___x_1267_, 0);
lean_dec(v_unused_1282_);
v___x_1273_ = v___x_1267_;
v_isShared_1274_ = v_isSharedCheck_1281_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_diag_1271_);
lean_inc(v_postponed_1270_);
lean_inc(v_zetaDeltaFVarIds_1269_);
lean_inc(v_cache_1268_);
lean_dec(v___x_1267_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1281_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v_mctx_1266_);
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_mctx_1266_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_cache_1268_);
lean_ctor_set(v_reuseFailAlloc_1280_, 2, v_zetaDeltaFVarIds_1269_);
lean_ctor_set(v_reuseFailAlloc_1280_, 3, v_postponed_1270_);
lean_ctor_set(v_reuseFailAlloc_1280_, 4, v_diag_1271_);
v___x_1276_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = lean_st_ref_put(v___y_1233_, v___x_1276_);
v___x_1278_ = lean_box(v_fst_1265_);
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
}
}
v___jp_1283_:
{
lean_object* v_snd_1285_; lean_object* v_fst_1286_; lean_object* v_mctx_1287_; uint8_t v___x_1288_; 
v_snd_1285_ = lean_ctor_get(v___y_1284_, 1);
lean_inc(v_snd_1285_);
v_fst_1286_ = lean_ctor_get(v___y_1284_, 0);
lean_inc(v_fst_1286_);
lean_dec_ref(v___y_1284_);
v_mctx_1287_ = lean_ctor_get(v_snd_1285_, 1);
lean_inc_ref(v_mctx_1287_);
lean_dec(v_snd_1285_);
v___x_1288_ = lean_unbox(v_fst_1286_);
lean_dec(v_fst_1286_);
v_fst_1265_ = v___x_1288_;
v_mctx_1266_ = v_mctx_1287_;
goto v___jp_1264_;
}
}
else
{
lean_object* v_type_1296_; lean_object* v_value_1297_; uint8_t v_nondep_1298_; uint8_t v_fst_1300_; lean_object* v_snd_1301_; lean_object* v___y_1307_; 
v_type_1296_ = lean_ctor_get(v_localDecl_1230_, 3);
lean_inc_ref(v_type_1296_);
v_value_1297_ = lean_ctor_get(v_localDecl_1230_, 4);
lean_inc_ref(v_value_1297_);
v_nondep_1298_ = lean_ctor_get_uint8(v_localDecl_1230_, sizeof(void*)*5);
lean_dec_ref_known(v_localDecl_1230_, 5);
if (v_generalizeNondepLet_1232_ == 0)
{
goto v___jp_1311_;
}
else
{
if (v_nondep_1298_ == 0)
{
goto v___jp_1311_;
}
else
{
lean_object* v___x_1320_; uint8_t v_fst_1322_; lean_object* v_mctx_1323_; lean_object* v___y_1341_; lean_object* v_mctx_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
lean_dec_ref(v_value_1297_);
v___x_1320_ = lean_st_ref_get(v___y_1233_);
v_mctx_1346_ = lean_ctor_get(v___x_1320_, 0);
lean_inc_ref_n(v_mctx_1346_, 2);
lean_dec(v___x_1320_);
v___x_1347_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set(v___x_1348_, 1, v_mctx_1346_);
v___x_1349_ = l_Lean_Expr_hasFVar(v_type_1296_);
if (v___x_1349_ == 0)
{
uint8_t v___x_1350_; 
v___x_1350_ = l_Lean_Expr_hasMVar(v_type_1296_);
if (v___x_1350_ == 0)
{
lean_dec_ref_known(v___x_1348_, 2);
lean_dec_ref(v_type_1296_);
lean_dec_ref(v___f_1260_);
v_fst_1322_ = v___x_1350_;
v_mctx_1323_ = v_mctx_1346_;
goto v___jp_1321_;
}
else
{
lean_object* v___x_1351_; 
lean_dec_ref(v_mctx_1346_);
v___x_1351_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1296_, v___x_1348_);
v___y_1341_ = v___x_1351_;
goto v___jp_1340_;
}
}
else
{
lean_object* v___x_1352_; 
lean_dec_ref(v_mctx_1346_);
v___x_1352_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1296_, v___x_1348_);
v___y_1341_ = v___x_1352_;
goto v___jp_1340_;
}
v___jp_1321_:
{
lean_object* v___x_1324_; lean_object* v_cache_1325_; lean_object* v_zetaDeltaFVarIds_1326_; lean_object* v_postponed_1327_; lean_object* v_diag_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1338_; 
v___x_1324_ = lean_st_ref_take(v___y_1233_);
v_cache_1325_ = lean_ctor_get(v___x_1324_, 1);
v_zetaDeltaFVarIds_1326_ = lean_ctor_get(v___x_1324_, 2);
v_postponed_1327_ = lean_ctor_get(v___x_1324_, 3);
v_diag_1328_ = lean_ctor_get(v___x_1324_, 4);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1338_ == 0)
{
lean_object* v_unused_1339_; 
v_unused_1339_ = lean_ctor_get(v___x_1324_, 0);
lean_dec(v_unused_1339_);
v___x_1330_ = v___x_1324_;
v_isShared_1331_ = v_isSharedCheck_1338_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_diag_1328_);
lean_inc(v_postponed_1327_);
lean_inc(v_zetaDeltaFVarIds_1326_);
lean_inc(v_cache_1325_);
lean_dec(v___x_1324_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1338_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v_mctx_1323_);
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_mctx_1323_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_cache_1325_);
lean_ctor_set(v_reuseFailAlloc_1337_, 2, v_zetaDeltaFVarIds_1326_);
lean_ctor_set(v_reuseFailAlloc_1337_, 3, v_postponed_1327_);
lean_ctor_set(v_reuseFailAlloc_1337_, 4, v_diag_1328_);
v___x_1333_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = lean_st_ref_put(v___y_1233_, v___x_1333_);
v___x_1335_ = lean_box(v_fst_1322_);
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
}
v___jp_1340_:
{
lean_object* v_snd_1342_; lean_object* v_fst_1343_; lean_object* v_mctx_1344_; uint8_t v___x_1345_; 
v_snd_1342_ = lean_ctor_get(v___y_1341_, 1);
lean_inc(v_snd_1342_);
v_fst_1343_ = lean_ctor_get(v___y_1341_, 0);
lean_inc(v_fst_1343_);
lean_dec_ref(v___y_1341_);
v_mctx_1344_ = lean_ctor_get(v_snd_1342_, 1);
lean_inc_ref(v_mctx_1344_);
lean_dec(v_snd_1342_);
v___x_1345_ = lean_unbox(v_fst_1343_);
lean_dec(v_fst_1343_);
v_fst_1322_ = v___x_1345_;
v_mctx_1323_ = v_mctx_1344_;
goto v___jp_1321_;
}
}
}
v___jp_1299_:
{
if (v_fst_1300_ == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = l_Lean_Expr_hasFVar(v_value_1297_);
if (v___x_1302_ == 0)
{
uint8_t v___x_1303_; 
v___x_1303_ = l_Lean_Expr_hasMVar(v_value_1297_);
if (v___x_1303_ == 0)
{
lean_dec_ref(v_value_1297_);
lean_dec_ref(v___f_1260_);
v_fst_1236_ = v___x_1303_;
v_snd_1237_ = v_snd_1301_;
goto v___jp_1235_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_value_1297_, v_snd_1301_);
v___y_1256_ = v___x_1304_;
goto v___jp_1255_;
}
}
else
{
lean_object* v___x_1305_; 
v___x_1305_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_value_1297_, v_snd_1301_);
v___y_1256_ = v___x_1305_;
goto v___jp_1255_;
}
}
else
{
lean_dec_ref(v_value_1297_);
lean_dec_ref(v___f_1260_);
v_fst_1236_ = v_fst_1300_;
v_snd_1237_ = v_snd_1301_;
goto v___jp_1235_;
}
}
v___jp_1306_:
{
lean_object* v_fst_1308_; lean_object* v_snd_1309_; uint8_t v___x_1310_; 
v_fst_1308_ = lean_ctor_get(v___y_1307_, 0);
lean_inc(v_fst_1308_);
v_snd_1309_ = lean_ctor_get(v___y_1307_, 1);
lean_inc(v_snd_1309_);
lean_dec_ref(v___y_1307_);
v___x_1310_ = lean_unbox(v_fst_1308_);
lean_dec(v_fst_1308_);
v_fst_1300_ = v___x_1310_;
v_snd_1301_ = v_snd_1309_;
goto v___jp_1299_;
}
v___jp_1311_:
{
lean_object* v___x_1312_; lean_object* v_mctx_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1312_ = lean_st_ref_get(v___y_1233_);
v_mctx_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc_ref(v_mctx_1313_);
lean_dec(v___x_1312_);
v___x_1314_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
lean_ctor_set(v___x_1315_, 1, v_mctx_1313_);
v___x_1316_ = l_Lean_Expr_hasFVar(v_type_1296_);
if (v___x_1316_ == 0)
{
uint8_t v___x_1317_; 
v___x_1317_ = l_Lean_Expr_hasMVar(v_type_1296_);
if (v___x_1317_ == 0)
{
lean_dec_ref(v_type_1296_);
v_fst_1300_ = v___x_1317_;
v_snd_1301_ = v___x_1315_;
goto v___jp_1299_;
}
else
{
lean_object* v___x_1318_; 
lean_inc_ref(v___f_1260_);
v___x_1318_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1296_, v___x_1315_);
v___y_1307_ = v___x_1318_;
goto v___jp_1306_;
}
}
else
{
lean_object* v___x_1319_; 
lean_inc_ref(v___f_1260_);
v___x_1319_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1260_, v___f_1261_, v_type_1296_, v___x_1315_);
v___y_1307_ = v___x_1319_;
goto v___jp_1306_;
}
}
}
v___jp_1235_:
{
lean_object* v_mctx_1238_; lean_object* v___x_1239_; lean_object* v_cache_1240_; lean_object* v_zetaDeltaFVarIds_1241_; lean_object* v_postponed_1242_; lean_object* v_diag_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1253_; 
v_mctx_1238_ = lean_ctor_get(v_snd_1237_, 1);
lean_inc_ref(v_mctx_1238_);
lean_dec_ref(v_snd_1237_);
v___x_1239_ = lean_st_ref_take(v___y_1233_);
v_cache_1240_ = lean_ctor_get(v___x_1239_, 1);
v_zetaDeltaFVarIds_1241_ = lean_ctor_get(v___x_1239_, 2);
v_postponed_1242_ = lean_ctor_get(v___x_1239_, 3);
v_diag_1243_ = lean_ctor_get(v___x_1239_, 4);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1253_ == 0)
{
lean_object* v_unused_1254_; 
v_unused_1254_ = lean_ctor_get(v___x_1239_, 0);
lean_dec(v_unused_1254_);
v___x_1245_ = v___x_1239_;
v_isShared_1246_ = v_isSharedCheck_1253_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_diag_1243_);
lean_inc(v_postponed_1242_);
lean_inc(v_zetaDeltaFVarIds_1241_);
lean_inc(v_cache_1240_);
lean_dec(v___x_1239_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1253_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v_mctx_1238_);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_mctx_1238_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_cache_1240_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_zetaDeltaFVarIds_1241_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v_postponed_1242_);
lean_ctor_set(v_reuseFailAlloc_1252_, 4, v_diag_1243_);
v___x_1248_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_st_ref_put(v___y_1233_, v___x_1248_);
v___x_1250_ = lean_box(v_fst_1236_);
v___x_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
}
v___jp_1255_:
{
lean_object* v_fst_1257_; lean_object* v_snd_1258_; uint8_t v___x_1259_; 
v_fst_1257_ = lean_ctor_get(v___y_1256_, 0);
lean_inc(v_fst_1257_);
v_snd_1258_ = lean_ctor_get(v___y_1256_, 1);
lean_inc(v_snd_1258_);
lean_dec_ref(v___y_1256_);
v___x_1259_ = lean_unbox(v_fst_1257_);
lean_dec(v_fst_1257_);
v_fst_1236_ = v___x_1259_;
v_snd_1237_ = v_snd_1258_;
goto v___jp_1235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___boxed(lean_object* v_localDecl_1353_, lean_object* v_fvarId_1354_, lean_object* v_generalizeNondepLet_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_1358_; lean_object* v_res_1359_; 
v_generalizeNondepLet_boxed_1358_ = lean_unbox(v_generalizeNondepLet_1355_);
v_res_1359_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_localDecl_1353_, v_fvarId_1354_, v_generalizeNondepLet_boxed_1358_, v___y_1356_);
lean_dec(v___y_1356_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(lean_object* v_localDecl_1360_, lean_object* v_fvarId_1361_, uint8_t v_generalizeNondepLet_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_localDecl_1360_, v_fvarId_1361_, v_generalizeNondepLet_1362_, v___y_1364_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___boxed(lean_object* v_localDecl_1369_, lean_object* v_fvarId_1370_, lean_object* v_generalizeNondepLet_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_1377_; lean_object* v_res_1378_; 
v_generalizeNondepLet_boxed_1377_ = lean_unbox(v_generalizeNondepLet_1371_);
v_res_1378_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(v_localDecl_1369_, v_fvarId_1370_, v_generalizeNondepLet_boxed_1377_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(lean_object* v_e_1379_, lean_object* v_fvarId_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___f_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; uint8_t v_fst_1387_; lean_object* v_mctx_1388_; lean_object* v___y_1406_; lean_object* v_mctx_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; 
v___f_1383_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0));
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1384_, 0, v_fvarId_1380_);
v___x_1385_ = lean_st_ref_get(v___y_1381_);
v_mctx_1411_ = lean_ctor_get(v___x_1385_, 0);
lean_inc_ref_n(v_mctx_1411_, 2);
lean_dec(v___x_1385_);
v___x_1412_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v_mctx_1411_);
v___x_1414_ = l_Lean_Expr_hasFVar(v_e_1379_);
if (v___x_1414_ == 0)
{
uint8_t v___x_1415_; 
v___x_1415_ = l_Lean_Expr_hasMVar(v_e_1379_);
if (v___x_1415_ == 0)
{
lean_dec_ref_known(v___x_1413_, 2);
lean_dec_ref(v___f_1384_);
lean_dec_ref(v_e_1379_);
v_fst_1387_ = v___x_1415_;
v_mctx_1388_ = v_mctx_1411_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1416_; 
lean_dec_ref(v_mctx_1411_);
v___x_1416_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1384_, v___f_1383_, v_e_1379_, v___x_1413_);
v___y_1406_ = v___x_1416_;
goto v___jp_1405_;
}
}
else
{
lean_object* v___x_1417_; 
lean_dec_ref(v_mctx_1411_);
v___x_1417_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1384_, v___f_1383_, v_e_1379_, v___x_1413_);
v___y_1406_ = v___x_1417_;
goto v___jp_1405_;
}
v___jp_1386_:
{
lean_object* v___x_1389_; lean_object* v_cache_1390_; lean_object* v_zetaDeltaFVarIds_1391_; lean_object* v_postponed_1392_; lean_object* v_diag_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1403_; 
v___x_1389_ = lean_st_ref_take(v___y_1381_);
v_cache_1390_ = lean_ctor_get(v___x_1389_, 1);
v_zetaDeltaFVarIds_1391_ = lean_ctor_get(v___x_1389_, 2);
v_postponed_1392_ = lean_ctor_get(v___x_1389_, 3);
v_diag_1393_ = lean_ctor_get(v___x_1389_, 4);
v_isSharedCheck_1403_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1403_ == 0)
{
lean_object* v_unused_1404_; 
v_unused_1404_ = lean_ctor_get(v___x_1389_, 0);
lean_dec(v_unused_1404_);
v___x_1395_ = v___x_1389_;
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_diag_1393_);
lean_inc(v_postponed_1392_);
lean_inc(v_zetaDeltaFVarIds_1391_);
lean_inc(v_cache_1390_);
lean_dec(v___x_1389_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1403_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v_mctx_1388_);
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_mctx_1388_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_cache_1390_);
lean_ctor_set(v_reuseFailAlloc_1402_, 2, v_zetaDeltaFVarIds_1391_);
lean_ctor_set(v_reuseFailAlloc_1402_, 3, v_postponed_1392_);
lean_ctor_set(v_reuseFailAlloc_1402_, 4, v_diag_1393_);
v___x_1398_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = lean_st_ref_put(v___y_1381_, v___x_1398_);
v___x_1400_ = lean_box(v_fst_1387_);
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
return v___x_1401_;
}
}
}
v___jp_1405_:
{
lean_object* v_snd_1407_; lean_object* v_fst_1408_; lean_object* v_mctx_1409_; uint8_t v___x_1410_; 
v_snd_1407_ = lean_ctor_get(v___y_1406_, 1);
lean_inc(v_snd_1407_);
v_fst_1408_ = lean_ctor_get(v___y_1406_, 0);
lean_inc(v_fst_1408_);
lean_dec_ref(v___y_1406_);
v_mctx_1409_ = lean_ctor_get(v_snd_1407_, 1);
lean_inc_ref(v_mctx_1409_);
lean_dec(v_snd_1407_);
v___x_1410_ = lean_unbox(v_fst_1408_);
lean_dec(v_fst_1408_);
v_fst_1387_ = v___x_1410_;
v_mctx_1388_ = v_mctx_1409_;
goto v___jp_1386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg___boxed(lean_object* v_e_1418_, lean_object* v_fvarId_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_e_1418_, v_fvarId_1419_, v___y_1420_);
lean_dec(v___y_1420_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(lean_object* v_e_1423_, lean_object* v_fvarId_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_e_1423_, v_fvarId_1424_, v___y_1426_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___boxed(lean_object* v_e_1431_, lean_object* v_fvarId_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(v_e_1431_, v_fvarId_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
return v_res_1438_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(lean_object* v_a_1439_, lean_object* v_x_1440_){
_start:
{
if (lean_obj_tag(v_x_1440_) == 0)
{
uint8_t v___x_1441_; 
v___x_1441_ = 0;
return v___x_1441_;
}
else
{
lean_object* v_head_1442_; lean_object* v_tail_1443_; uint8_t v___x_1444_; 
v_head_1442_ = lean_ctor_get(v_x_1440_, 0);
v_tail_1443_ = lean_ctor_get(v_x_1440_, 1);
v___x_1444_ = lean_nat_dec_eq(v_a_1439_, v_head_1442_);
if (v___x_1444_ == 0)
{
v_x_1440_ = v_tail_1443_;
goto _start;
}
else
{
return v___x_1444_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0___boxed(lean_object* v_a_1446_, lean_object* v_x_1447_){
_start:
{
uint8_t v_res_1448_; lean_object* v_r_1449_; 
v_res_1448_ = l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(v_a_1446_, v_x_1447_);
lean_dec(v_x_1447_);
lean_dec(v_a_1446_);
v_r_1449_ = lean_box(v_res_1448_);
return v_r_1449_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0));
v___x_1452_ = l_Lean_stringToMessageData(v___x_1451_);
return v___x_1452_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2));
v___x_1455_ = l_Lean_stringToMessageData(v___x_1454_);
return v___x_1455_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4));
v___x_1458_ = l_Lean_stringToMessageData(v___x_1457_);
return v___x_1458_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6));
v___x_1461_ = l_Lean_stringToMessageData(v___x_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(lean_object* v_majorTypeArgs_1462_, lean_object* v_idxPos_1463_, lean_object* v_recursorInfo_1464_, lean_object* v_idx_1465_, lean_object* v_tacticName_1466_, lean_object* v_mvarId_1467_, lean_object* v_majorType_1468_, lean_object* v_n_1469_, lean_object* v_i_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_zero_1476_; uint8_t v_isZero_1477_; 
v_zero_1476_ = lean_unsigned_to_nat(0u);
v_isZero_1477_ = lean_nat_dec_eq(v_i_1470_, v_zero_1476_);
if (v_isZero_1477_ == 1)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_dec(v_i_1470_);
lean_dec_ref(v_majorType_1468_);
lean_dec(v_mvarId_1467_);
lean_dec(v_tacticName_1466_);
lean_dec_ref(v_idx_1465_);
v___x_1478_ = lean_box(0);
v___x_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
return v___x_1479_;
}
else
{
lean_object* v_one_1480_; lean_object* v_n_1481_; lean_object* v___y_1483_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v_arg_1487_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; uint8_t v___x_1559_; 
v_one_1480_ = lean_unsigned_to_nat(1u);
v_n_1481_ = lean_nat_sub(v_i_1470_, v_one_1480_);
lean_dec(v_i_1470_);
v___x_1485_ = lean_nat_sub(v_n_1469_, v_n_1481_);
v___x_1486_ = lean_nat_sub(v___x_1485_, v_one_1480_);
lean_dec(v___x_1485_);
v_arg_1487_ = lean_array_fget_borrowed(v_majorTypeArgs_1462_, v___x_1486_);
v___x_1559_ = lean_nat_dec_eq(v___x_1486_, v_idxPos_1463_);
if (v___x_1559_ == 0)
{
uint8_t v___x_1560_; 
v___x_1560_ = lean_expr_eqv(v_arg_1487_, v_idx_1465_);
if (v___x_1560_ == 0)
{
v___y_1535_ = v___y_1471_;
v___y_1536_ = v___y_1472_;
v___y_1537_ = v___y_1473_;
v___y_1538_ = v___y_1474_;
goto v___jp_1534_;
}
else
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1561_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1465_);
v___x_1562_ = l_Lean_MessageData_ofExpr(v_idx_1465_);
v___x_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7);
v___x_1565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
lean_inc_ref(v_majorType_1468_);
v___x_1566_ = l_Lean_indentExpr(v_majorType_1468_);
v___x_1567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1565_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
lean_inc(v_mvarId_1467_);
lean_inc(v_tacticName_1466_);
v___x_1569_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1466_, v_mvarId_1467_, v___x_1568_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_dec_ref_known(v___x_1569_, 1);
v___y_1535_ = v___y_1471_;
v___y_1536_ = v___y_1472_;
v___y_1537_ = v___y_1473_;
v___y_1538_ = v___y_1474_;
goto v___jp_1534_;
}
else
{
lean_dec(v___x_1486_);
v___y_1483_ = v___x_1569_;
goto v___jp_1482_;
}
}
}
else
{
v___y_1535_ = v___y_1471_;
v___y_1536_ = v___y_1472_;
v___y_1537_ = v___y_1473_;
v___y_1538_ = v___y_1474_;
goto v___jp_1534_;
}
v___jp_1482_:
{
if (lean_obj_tag(v___y_1483_) == 0)
{
lean_dec_ref_known(v___y_1483_, 1);
v_i_1470_ = v_n_1481_;
goto _start;
}
else
{
lean_dec(v_n_1481_);
lean_dec_ref(v_majorType_1468_);
lean_dec(v_mvarId_1467_);
lean_dec(v_tacticName_1466_);
lean_dec_ref(v_idx_1465_);
return v___y_1483_;
}
}
v___jp_1488_:
{
uint8_t v___x_1493_; 
v___x_1493_ = lean_nat_dec_lt(v_idxPos_1463_, v___x_1486_);
if (v___x_1493_ == 0)
{
lean_dec(v___x_1486_);
v_i_1470_ = v_n_1481_;
goto _start;
}
else
{
lean_object* v_indicesPos_1495_; uint8_t v___x_1496_; 
v_indicesPos_1495_ = lean_ctor_get(v_recursorInfo_1464_, 6);
v___x_1496_ = l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(v___x_1486_, v_indicesPos_1495_);
if (v___x_1496_ == 0)
{
lean_dec(v___x_1486_);
v_i_1470_ = v_n_1481_;
goto _start;
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Expr_isFVar(v_arg_1487_);
if (v___x_1498_ == 0)
{
lean_dec(v___x_1486_);
v_i_1470_ = v_n_1481_;
goto _start;
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = l_Lean_Expr_fvarId_x21(v_idx_1465_);
v___x_1501_ = l_Lean_FVarId_getDecl___redArg(v___x_1500_, v___y_1489_, v___y_1491_, v___y_1492_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1525_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = l_Lean_Expr_fvarId_x21(v_arg_1487_);
v___x_1504_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_a_1502_, v___x_1503_, v___x_1496_, v___y_1490_);
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1507_ = v___x_1504_;
v_isShared_1508_ = v_isSharedCheck_1525_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1504_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1525_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
uint8_t v___x_1509_; 
v___x_1509_ = lean_unbox(v_a_1505_);
lean_dec(v_a_1505_);
if (v___x_1509_ == 0)
{
lean_del_object(v___x_1507_);
lean_dec(v___x_1486_);
v_i_1470_ = v_n_1481_;
goto _start;
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1511_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1465_);
v___x_1512_ = l_Lean_MessageData_ofExpr(v_idx_1465_);
v___x_1513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1511_);
lean_ctor_set(v___x_1513_, 1, v___x_1512_);
v___x_1514_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3);
v___x_1515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_nat_add(v___x_1486_, v_one_1480_);
lean_dec(v___x_1486_);
v___x_1517_ = l_Nat_reprFast(v___x_1516_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set_tag(v___x_1507_, 3);
lean_ctor_set(v___x_1507_, 0, v___x_1517_);
v___x_1519_ = v___x_1507_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1520_ = l_Lean_MessageData_ofFormat(v___x_1519_);
v___x_1521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1515_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
lean_inc(v_mvarId_1467_);
lean_inc(v_tacticName_1466_);
v___x_1523_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1466_, v_mvarId_1467_, v___x_1522_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
v___y_1483_ = v___x_1523_;
goto v___jp_1482_;
}
}
}
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
lean_dec(v___x_1486_);
lean_dec(v_n_1481_);
lean_dec_ref(v_majorType_1468_);
lean_dec(v_mvarId_1467_);
lean_dec(v_tacticName_1466_);
lean_dec_ref(v_idx_1465_);
v_a_1526_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1501_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1501_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
}
}
v___jp_1534_:
{
uint8_t v___x_1539_; 
v___x_1539_ = lean_nat_dec_lt(v___x_1486_, v_idxPos_1463_);
if (v___x_1539_ == 0)
{
v___y_1489_ = v___y_1535_;
v___y_1490_ = v___y_1536_;
v___y_1491_ = v___y_1537_;
v___y_1492_ = v___y_1538_;
goto v___jp_1488_;
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1558_; 
v___x_1540_ = l_Lean_Expr_fvarId_x21(v_idx_1465_);
lean_inc(v_arg_1487_);
v___x_1541_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_arg_1487_, v___x_1540_, v___y_1536_);
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1558_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1558_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
uint8_t v___x_1546_; 
v___x_1546_ = lean_unbox(v_a_1542_);
lean_dec(v_a_1542_);
if (v___x_1546_ == 0)
{
lean_del_object(v___x_1544_);
v___y_1489_ = v___y_1535_;
v___y_1490_ = v___y_1536_;
v___y_1491_ = v___y_1537_;
v___y_1492_ = v___y_1538_;
goto v___jp_1488_;
}
else
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v___x_1547_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1465_);
v___x_1548_ = l_Lean_MessageData_ofExpr(v_idx_1465_);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
lean_inc_ref(v_majorType_1468_);
v___x_1552_ = l_Lean_indentExpr(v_majorType_1468_);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set_tag(v___x_1544_, 1);
lean_ctor_set(v___x_1544_, 0, v___x_1553_);
v___x_1555_ = v___x_1544_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; 
lean_inc(v_mvarId_1467_);
lean_inc(v_tacticName_1466_);
v___x_1556_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1466_, v_mvarId_1467_, v___x_1555_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_dec_ref_known(v___x_1556_, 1);
v___y_1489_ = v___y_1535_;
v___y_1490_ = v___y_1536_;
v___y_1491_ = v___y_1537_;
v___y_1492_ = v___y_1538_;
goto v___jp_1488_;
}
else
{
lean_dec(v___x_1486_);
v___y_1483_ = v___x_1556_;
goto v___jp_1482_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___boxed(lean_object* v_majorTypeArgs_1570_, lean_object* v_idxPos_1571_, lean_object* v_recursorInfo_1572_, lean_object* v_idx_1573_, lean_object* v_tacticName_1574_, lean_object* v_mvarId_1575_, lean_object* v_majorType_1576_, lean_object* v_n_1577_, lean_object* v_i_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1570_, v_idxPos_1571_, v_recursorInfo_1572_, v_idx_1573_, v_tacticName_1574_, v_mvarId_1575_, v_majorType_1576_, v_n_1577_, v_i_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v_n_1577_);
lean_dec_ref(v_recursorInfo_1572_);
lean_dec(v_idxPos_1571_);
lean_dec_ref(v_majorTypeArgs_1570_);
return v_res_1584_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5(void){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4));
v___x_1593_ = l_Lean_stringToMessageData(v___x_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(lean_object* v_majorTypeArgs_1594_, lean_object* v_recursorInfo_1595_, lean_object* v_tacticName_1596_, lean_object* v_mvarId_1597_, lean_object* v_majorType_1598_, size_t v_sz_1599_, size_t v_i_1600_, lean_object* v_bs_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v___x_1607_; 
v___x_1607_ = lean_usize_dec_lt(v_i_1600_, v_sz_1599_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
lean_dec_ref(v_majorType_1598_);
lean_dec(v_mvarId_1597_);
lean_dec(v_tacticName_1596_);
v___x_1608_ = l_unsafeCast___redArg(v_bs_1601_);
lean_dec_ref(v_bs_1601_);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
return v___x_1609_;
}
else
{
lean_object* v_v_1610_; lean_object* v___x_1611_; lean_object* v_bs_x27_1612_; lean_object* v_a_1614_; lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v_v_1610_ = lean_array_uget(v_bs_1601_, v_i_1600_);
v___x_1611_ = lean_unsigned_to_nat(0u);
v_bs_x27_1612_ = lean_array_uset(v_bs_1601_, v_i_1600_, v___x_1611_);
v___x_1620_ = l_unsafeCast___redArg(v_v_1610_);
lean_dec(v_v_1610_);
v___x_1621_ = lean_array_get_size(v_majorTypeArgs_1594_);
v___x_1622_ = lean_nat_dec_le(v___x_1621_, v___x_1620_);
if (v___x_1622_ == 0)
{
lean_object* v_idx_1623_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; uint8_t v___x_1638_; 
v_idx_1623_ = lean_array_fget_borrowed(v_majorTypeArgs_1594_, v___x_1620_);
v___x_1638_ = l_Lean_Expr_isFVar(v_idx_1623_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1639_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1);
lean_inc(v_idx_1623_);
v___x_1640_ = l_Lean_MessageData_ofExpr(v_idx_1623_);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3);
v___x_1643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
lean_inc_ref(v_majorType_1598_);
v___x_1644_ = l_Lean_indentExpr(v_majorType_1598_);
v___x_1645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1643_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
lean_inc(v_mvarId_1597_);
lean_inc(v_tacticName_1596_);
v___x_1647_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1596_, v_mvarId_1597_, v___x_1646_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_dec_ref_known(v___x_1647_, 1);
v___y_1625_ = v___y_1602_;
v___y_1626_ = v___y_1603_;
v___y_1627_ = v___y_1604_;
v___y_1628_ = v___y_1605_;
goto v___jp_1624_;
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_dec(v___x_1620_);
lean_dec_ref(v_bs_x27_1612_);
lean_dec_ref(v_majorType_1598_);
lean_dec(v_mvarId_1597_);
lean_dec(v_tacticName_1596_);
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1647_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1647_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
else
{
v___y_1625_ = v___y_1602_;
v___y_1626_ = v___y_1603_;
v___y_1627_ = v___y_1604_;
v___y_1628_ = v___y_1605_;
goto v___jp_1624_;
}
v___jp_1624_:
{
lean_object* v___x_1629_; 
lean_inc_ref(v_majorType_1598_);
lean_inc(v_mvarId_1597_);
lean_inc(v_tacticName_1596_);
lean_inc(v_idx_1623_);
v___x_1629_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1594_, v___x_1620_, v_recursorInfo_1595_, v_idx_1623_, v_tacticName_1596_, v_mvarId_1597_, v_majorType_1598_, v___x_1621_, v___x_1621_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___x_1620_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_dec_ref_known(v___x_1629_, 1);
lean_inc(v_idx_1623_);
v_a_1614_ = v_idx_1623_;
goto v___jp_1613_;
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec_ref(v_bs_x27_1612_);
lean_dec_ref(v_majorType_1598_);
lean_dec(v_mvarId_1597_);
lean_dec(v_tacticName_1596_);
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1629_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1629_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
}
else
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
lean_dec(v___x_1620_);
v___x_1656_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5);
lean_inc_ref(v_majorType_1598_);
v___x_1657_ = l_Lean_indentExpr(v_majorType_1598_);
v___x_1658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
lean_inc(v_mvarId_1597_);
lean_inc(v_tacticName_1596_);
v___x_1660_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1596_, v_mvarId_1597_, v___x_1659_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1660_, 1);
v_a_1614_ = v_a_1661_;
goto v___jp_1613_;
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec_ref(v_bs_x27_1612_);
lean_dec_ref(v_majorType_1598_);
lean_dec(v_mvarId_1597_);
lean_dec(v_tacticName_1596_);
v_a_1662_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1660_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1660_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
v___jp_1613_:
{
size_t v___x_1615_; size_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1615_ = ((size_t)1ULL);
v___x_1616_ = lean_usize_add(v_i_1600_, v___x_1615_);
v___x_1617_ = l_unsafeCast___redArg(v_a_1614_);
lean_dec_ref(v_a_1614_);
v___x_1618_ = lean_array_uset(v_bs_x27_1612_, v_i_1600_, v___x_1617_);
v_i_1600_ = v___x_1616_;
v_bs_1601_ = v___x_1618_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___boxed(lean_object* v_majorTypeArgs_1670_, lean_object* v_recursorInfo_1671_, lean_object* v_tacticName_1672_, lean_object* v_mvarId_1673_, lean_object* v_majorType_1674_, lean_object* v_sz_1675_, lean_object* v_i_1676_, lean_object* v_bs_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
size_t v_sz_boxed_1683_; size_t v_i_boxed_1684_; lean_object* v_res_1685_; 
v_sz_boxed_1683_ = lean_unbox_usize(v_sz_1675_);
lean_dec(v_sz_1675_);
v_i_boxed_1684_ = lean_unbox_usize(v_i_1676_);
lean_dec(v_i_1676_);
v_res_1685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(v_majorTypeArgs_1670_, v_recursorInfo_1671_, v_tacticName_1672_, v_mvarId_1673_, v_majorType_1674_, v_sz_boxed_1683_, v_i_boxed_1684_, v_bs_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
lean_dec_ref(v_recursorInfo_1671_);
lean_dec_ref(v_majorTypeArgs_1670_);
return v_res_1685_;
}
}
static lean_object* _init_l_Lean_Meta_getMajorTypeIndices___closed__0(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_box(0);
v___x_1687_ = l_unsafeCast___redArg(v___x_1686_);
return v___x_1687_;
}
}
static lean_object* _init_l_Lean_Meta_getMajorTypeIndices___closed__1(void){
_start:
{
lean_object* v___x_1688_; lean_object* v_dummy_1689_; 
v___x_1688_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__0, &l_Lean_Meta_getMajorTypeIndices___closed__0_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__0);
v_dummy_1689_ = l_Lean_Expr_sort___override(v___x_1688_);
return v_dummy_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices(lean_object* v_mvarId_1692_, lean_object* v_tacticName_1693_, lean_object* v_recursorInfo_1694_, lean_object* v_majorType_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v_indicesPos_1701_; lean_object* v_nargs_1702_; lean_object* v_dummy_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v_majorTypeArgs_1707_; lean_object* v___x_1708_; size_t v_sz_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_3930__overap_1714_; lean_object* v___x_1715_; 
v_indicesPos_1701_ = lean_ctor_get(v_recursorInfo_1694_, 6);
v_nargs_1702_ = l_Lean_Expr_getAppNumArgs(v_majorType_1695_);
v_dummy_1703_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__1, &l_Lean_Meta_getMajorTypeIndices___closed__1_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__1);
lean_inc(v_nargs_1702_);
v___x_1704_ = lean_mk_array(v_nargs_1702_, v_dummy_1703_);
v___x_1705_ = lean_unsigned_to_nat(1u);
v___x_1706_ = lean_nat_sub(v_nargs_1702_, v___x_1705_);
lean_dec(v_nargs_1702_);
lean_inc_ref(v_majorType_1695_);
v_majorTypeArgs_1707_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_majorType_1695_, v___x_1704_, v___x_1706_);
lean_inc(v_indicesPos_1701_);
v___x_1708_ = lean_array_mk(v_indicesPos_1701_);
v_sz_1709_ = lean_array_size(v___x_1708_);
v___x_1710_ = l_unsafeCast___redArg(v___x_1708_);
lean_dec_ref(v___x_1708_);
v___x_1711_ = lean_box_usize(v_sz_1709_);
v___x_1712_ = ((lean_object*)(l_Lean_Meta_getMajorTypeIndices___boxed__const__1));
v___x_1713_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___boxed), 13, 8);
lean_closure_set(v___x_1713_, 0, v_majorTypeArgs_1707_);
lean_closure_set(v___x_1713_, 1, v_recursorInfo_1694_);
lean_closure_set(v___x_1713_, 2, v_tacticName_1693_);
lean_closure_set(v___x_1713_, 3, v_mvarId_1692_);
lean_closure_set(v___x_1713_, 4, v_majorType_1695_);
lean_closure_set(v___x_1713_, 5, v___x_1711_);
lean_closure_set(v___x_1713_, 6, v___x_1712_);
lean_closure_set(v___x_1713_, 7, v___x_1710_);
v___x_3930__overap_1714_ = l_unsafeCast___redArg(v___x_1713_);
lean_dec_ref(v___x_1713_);
lean_inc(v_a_1699_);
lean_inc_ref(v_a_1698_);
lean_inc(v_a_1697_);
lean_inc_ref(v_a_1696_);
v___x_1715_ = lean_apply_5(v___x_3930__overap_1714_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, lean_box(0));
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices___boxed(lean_object* v_mvarId_1716_, lean_object* v_tacticName_1717_, lean_object* v_recursorInfo_1718_, lean_object* v_majorType_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_1716_, v_tacticName_1717_, v_recursorInfo_1718_, v_majorType_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
lean_dec(v_a_1723_);
lean_dec_ref(v_a_1722_);
lean_dec(v_a_1721_);
lean_dec_ref(v_a_1720_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(lean_object* v_majorTypeArgs_1726_, lean_object* v_idxPos_1727_, lean_object* v_recursorInfo_1728_, lean_object* v_idx_1729_, lean_object* v_tacticName_1730_, lean_object* v_mvarId_1731_, lean_object* v_majorType_1732_, lean_object* v_n_1733_, lean_object* v_i_1734_, lean_object* v_a_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1726_, v_idxPos_1727_, v_recursorInfo_1728_, v_idx_1729_, v_tacticName_1730_, v_mvarId_1731_, v_majorType_1732_, v_n_1733_, v_i_1734_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___boxed(lean_object* v_majorTypeArgs_1742_, lean_object* v_idxPos_1743_, lean_object* v_recursorInfo_1744_, lean_object* v_idx_1745_, lean_object* v_tacticName_1746_, lean_object* v_mvarId_1747_, lean_object* v_majorType_1748_, lean_object* v_n_1749_, lean_object* v_i_1750_, lean_object* v_a_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(v_majorTypeArgs_1742_, v_idxPos_1743_, v_recursorInfo_1744_, v_idx_1745_, v_tacticName_1746_, v_mvarId_1747_, v_majorType_1748_, v_n_1749_, v_i_1750_, v_a_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
lean_dec(v___y_1753_);
lean_dec_ref(v___y_1752_);
lean_dec(v_n_1749_);
lean_dec_ref(v_recursorInfo_1744_);
lean_dec(v_idxPos_1743_);
lean_dec_ref(v_majorTypeArgs_1742_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(lean_object* v_name_1758_, lean_object* v_msg_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v_ref_1765_; lean_object* v_msg_1766_; lean_object* v___x_1767_; lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1776_; 
v_ref_1765_ = lean_ctor_get(v___y_1762_, 2);
v_msg_1766_ = l_Lean_MessageData_tagWithErrorName(v_msg_1759_, v_name_1758_);
v___x_1767_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msg_1766_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1770_ = v___x_1767_;
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1767_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1776_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
lean_inc(v_ref_1765_);
v___x_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1772_, 0, v_ref_1765_);
lean_ctor_set(v___x_1772_, 1, v_a_1768_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set_tag(v___x_1770_, 1);
lean_ctor_set(v___x_1770_, 0, v___x_1772_);
v___x_1774_ = v___x_1770_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
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
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg___boxed(lean_object* v_name_1777_, lean_object* v_msg_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v_name_1777_, v_msg_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(lean_object* v_a_1785_, lean_object* v___x_1786_, lean_object* v_tacticName_1787_, lean_object* v_mvarId_1788_, lean_object* v_x_1789_, lean_object* v_x_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
if (lean_obj_tag(v_x_1790_) == 0)
{
lean_object* v___x_1796_; 
lean_dec(v_mvarId_1788_);
lean_dec(v_tacticName_1787_);
lean_dec(v_a_1785_);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v_x_1789_);
return v___x_1796_;
}
else
{
lean_object* v_head_1797_; 
v_head_1797_ = lean_ctor_get(v_x_1790_, 0);
if (lean_obj_tag(v_head_1797_) == 0)
{
lean_object* v_tail_1798_; lean_object* v_fst_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1810_; 
v_tail_1798_ = lean_ctor_get(v_x_1790_, 1);
v_fst_1799_ = lean_ctor_get(v_x_1789_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1810_ == 0)
{
lean_object* v_unused_1811_; 
v_unused_1811_ = lean_ctor_get(v_x_1789_, 1);
lean_dec(v_unused_1811_);
v___x_1801_ = v_x_1789_;
v_isShared_1802_ = v_isSharedCheck_1810_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_fst_1799_);
lean_dec(v_x_1789_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1810_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1803_; uint8_t v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; 
lean_inc(v_a_1785_);
v___x_1803_ = lean_array_push(v_fst_1799_, v_a_1785_);
v___x_1804_ = 1;
v___x_1805_ = lean_box(v___x_1804_);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v___x_1805_);
lean_ctor_set(v___x_1801_, 0, v___x_1803_);
v___x_1807_ = v___x_1801_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1809_, 1, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
v_x_1789_ = v___x_1807_;
v_x_1790_ = v_tail_1798_;
goto _start;
}
}
}
else
{
lean_object* v_tail_1812_; lean_object* v_fst_1813_; lean_object* v_snd_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1831_; 
v_tail_1812_ = lean_ctor_get(v_x_1790_, 1);
v_fst_1813_ = lean_ctor_get(v_x_1789_, 0);
v_snd_1814_ = lean_ctor_get(v_x_1789_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1816_ = v_x_1789_;
v_isShared_1817_ = v_isSharedCheck_1831_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_snd_1814_);
lean_inc(v_fst_1813_);
lean_dec(v_x_1789_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1831_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v_idx_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
v_idx_1818_ = lean_ctor_get(v_head_1797_, 0);
v___x_1819_ = lean_array_get_size(v___x_1786_);
v___x_1820_ = lean_nat_dec_le(v___x_1819_, v_idx_1818_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
v___x_1821_ = lean_array_fget_borrowed(v___x_1786_, v_idx_1818_);
lean_inc(v___x_1821_);
v___x_1822_ = lean_array_push(v_fst_1813_, v___x_1821_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v___x_1822_);
v___x_1824_ = v___x_1816_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1822_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_snd_1814_);
v___x_1824_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v_x_1789_ = v___x_1824_;
v_x_1790_ = v_tail_1812_;
goto _start;
}
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_del_object(v___x_1816_);
lean_dec(v_snd_1814_);
lean_dec(v_fst_1813_);
v___x_1827_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_1788_);
lean_inc(v_tacticName_1787_);
v___x_1828_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1787_, v_mvarId_1788_, v___x_1827_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v_x_1789_ = v_a_1829_;
v_x_1790_ = v_tail_1812_;
goto _start;
}
else
{
lean_dec(v_mvarId_1788_);
lean_dec(v_tacticName_1787_);
lean_dec(v_a_1785_);
return v___x_1828_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0___boxed(lean_object* v_a_1832_, lean_object* v___x_1833_, lean_object* v_tacticName_1834_, lean_object* v_mvarId_1835_, lean_object* v_x_1836_, lean_object* v_x_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1832_, v___x_1833_, v_tacticName_1834_, v_mvarId_1835_, v_x_1836_, v_x_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v_x_1837_);
lean_dec_ref(v___x_1833_);
return v_res_1843_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7));
v___x_1860_ = l_Lean_stringToMessageData(v___x_1859_);
return v___x_1860_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9));
v___x_1863_ = l_Lean_stringToMessageData(v___x_1862_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12));
v___x_1868_ = l_Lean_MessageData_ofFormat(v___x_1867_);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13);
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(lean_object* v_recursorInfo_1871_, lean_object* v_a_1872_, lean_object* v_tacticName_1873_, lean_object* v_mvarId_1874_, lean_object* v_indices_1875_, lean_object* v_a_1876_, lean_object* v_major_1877_, lean_object* v_x_1878_, lean_object* v_x_1879_, lean_object* v_x_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
if (lean_obj_tag(v_x_1878_) == 5)
{
lean_object* v_fn_1886_; lean_object* v_arg_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_fn_1886_ = lean_ctor_get(v_x_1878_, 0);
lean_inc_ref(v_fn_1886_);
v_arg_1887_ = lean_ctor_get(v_x_1878_, 1);
lean_inc_ref(v_arg_1887_);
lean_dec_ref_known(v_x_1878_, 2);
v___x_1888_ = lean_array_set(v_x_1879_, v_x_1880_, v_arg_1887_);
v___x_1889_ = lean_unsigned_to_nat(1u);
v___x_1890_ = lean_nat_sub(v_x_1880_, v___x_1889_);
lean_dec(v_x_1880_);
v_x_1878_ = v_fn_1886_;
v_x_1879_ = v___x_1888_;
v_x_1880_ = v___x_1890_;
goto _start;
}
else
{
lean_dec(v_x_1880_);
if (lean_obj_tag(v_x_1878_) == 4)
{
lean_object* v_us_1892_; lean_object* v_recursorName_1893_; lean_object* v_univLevelPos_1894_; uint8_t v_depElim_1895_; lean_object* v_paramsPos_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; lean_object* v___y_1900_; lean_object* v_motive_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_us_1892_ = lean_ctor_get(v_x_1878_, 1);
lean_inc(v_us_1892_);
lean_dec_ref_known(v_x_1878_, 2);
v_recursorName_1893_ = lean_ctor_get(v_recursorInfo_1871_, 0);
lean_inc(v_recursorName_1893_);
v_univLevelPos_1894_ = lean_ctor_get(v_recursorInfo_1871_, 2);
lean_inc(v_univLevelPos_1894_);
v_depElim_1895_ = lean_ctor_get_uint8(v_recursorInfo_1871_, sizeof(void*)*8);
v_paramsPos_1896_ = lean_ctor_get(v_recursorInfo_1871_, 5);
lean_inc(v_paramsPos_1896_);
lean_dec_ref(v_recursorInfo_1871_);
v___x_1897_ = lean_array_mk(v_us_1892_);
v___x_1898_ = 0;
v___x_1918_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1));
lean_inc(v_mvarId_1874_);
lean_inc(v_tacticName_1873_);
lean_inc(v_a_1872_);
v___x_1919_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1872_, v___x_1897_, v_tacticName_1873_, v_mvarId_1874_, v___x_1918_, v_univLevelPos_1894_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
lean_dec(v_univLevelPos_1894_);
lean_dec_ref(v___x_1897_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v_fst_1921_; lean_object* v_snd_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1966_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v_fst_1921_ = lean_ctor_get(v_a_1920_, 0);
v_snd_1922_ = lean_ctor_get(v_a_1920_, 1);
v_isSharedCheck_1966_ = !lean_is_exclusive(v_a_1920_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1924_ = v_a_1920_;
v_isShared_1925_ = v_isSharedCheck_1966_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_snd_1922_);
lean_inc(v_fst_1921_);
lean_dec(v_a_1920_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1966_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; uint8_t v___x_1946_; 
v___x_1946_ = lean_unbox(v_snd_1922_);
lean_dec(v_snd_1922_);
if (v___x_1946_ == 0)
{
uint8_t v___x_1947_; 
v___x_1947_ = l_Lean_Level_isZero(v_a_1872_);
lean_dec(v_a_1872_);
if (v___x_1947_ == 0)
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
lean_dec(v_fst_1921_);
lean_dec(v_paramsPos_1896_);
lean_dec_ref(v_x_1879_);
lean_dec_ref(v_major_1877_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_indices_1875_);
v___x_1948_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6));
v___x_1949_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8);
v___x_1950_ = l_Lean_MessageData_ofName(v_recursorName_1893_);
if (v_isShared_1925_ == 0)
{
lean_ctor_set_tag(v___x_1924_, 7);
lean_ctor_set(v___x_1924_, 1, v___x_1950_);
lean_ctor_set(v___x_1924_, 0, v___x_1949_);
v___x_1952_ = v___x_1924_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v___x_1949_);
lean_ctor_set(v_reuseFailAlloc_1965_, 1, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
v___x_1953_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10);
v___x_1954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
v___x_1955_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_1873_, v_mvarId_1874_, v___x_1954_);
v___x_1956_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v___x_1948_, v___x_1955_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
else
{
lean_del_object(v___x_1924_);
lean_dec(v_tacticName_1873_);
v___y_1927_ = v___y_1881_;
v___y_1928_ = v___y_1882_;
v___y_1929_ = v___y_1883_;
v___y_1930_ = v___y_1884_;
goto v___jp_1926_;
}
}
else
{
lean_del_object(v___x_1924_);
lean_dec(v_tacticName_1873_);
lean_dec(v_a_1872_);
v___y_1927_ = v___y_1881_;
v___y_1928_ = v___y_1882_;
v___y_1929_ = v___y_1883_;
v___y_1930_ = v___y_1884_;
goto v___jp_1926_;
}
v___jp_1926_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1931_ = lean_array_to_list(v_fst_1921_);
v___x_1932_ = l_Lean_mkConst(v_recursorName_1893_, v___x_1931_);
v___x_1933_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_1874_, v_x_1879_, v_paramsPos_1896_, v___x_1932_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec_ref(v_x_1879_);
if (lean_obj_tag(v___x_1933_) == 0)
{
if (v_depElim_1895_ == 0)
{
lean_object* v_a_1934_; 
lean_dec_ref(v_major_1877_);
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1933_, 1);
v___y_1900_ = v_a_1934_;
v_motive_1901_ = v_a_1876_;
v___y_1902_ = v___y_1927_;
v___y_1903_ = v___y_1928_;
v___y_1904_ = v___y_1929_;
v___y_1905_ = v___y_1930_;
goto v___jp_1899_;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1936_; 
v_a_1935_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1935_);
lean_dec_ref_known(v___x_1933_, 1);
lean_inc(v___y_1930_);
lean_inc_ref(v___y_1929_);
lean_inc(v___y_1928_);
lean_inc_ref(v___y_1927_);
lean_inc_ref(v_major_1877_);
v___x_1936_ = lean_infer_type(v_major_1877_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref_known(v___x_1936_, 1);
v___x_1938_ = lean_unsigned_to_nat(1u);
v___x_1939_ = lean_mk_empty_array_with_capacity(v___x_1938_);
v___x_1940_ = lean_array_push(v___x_1939_, v_major_1877_);
v___x_1941_ = l_Lean_Expr_abstractM(v_a_1876_, v___x_1940_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; lean_object* v___x_1945_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3));
v___x_1944_ = 0;
v___x_1945_ = l_Lean_mkLambda(v___x_1943_, v___x_1944_, v_a_1937_, v_a_1942_);
v___y_1900_ = v_a_1935_;
v_motive_1901_ = v___x_1945_;
v___y_1902_ = v___y_1927_;
v___y_1903_ = v___y_1928_;
v___y_1904_ = v___y_1929_;
v___y_1905_ = v___y_1930_;
goto v___jp_1899_;
}
else
{
lean_dec(v_a_1937_);
lean_dec(v_a_1935_);
lean_dec_ref(v_indices_1875_);
return v___x_1941_;
}
}
else
{
lean_dec(v_a_1935_);
lean_dec_ref(v_major_1877_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_indices_1875_);
return v___x_1936_;
}
}
}
else
{
lean_dec_ref(v_major_1877_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_indices_1875_);
return v___x_1933_;
}
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_paramsPos_1896_);
lean_dec(v_recursorName_1893_);
lean_dec_ref(v_x_1879_);
lean_dec_ref(v_major_1877_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_indices_1875_);
lean_dec(v_mvarId_1874_);
lean_dec(v_tacticName_1873_);
lean_dec(v_a_1872_);
v_a_1967_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1919_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1919_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
v___jp_1899_:
{
uint8_t v___x_1906_; uint8_t v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = 1;
v___x_1907_ = 1;
v___x_1908_ = l_Lean_Meta_mkLambdaFVars(v_indices_1875_, v_motive_1901_, v___x_1898_, v___x_1906_, v___x_1898_, v___x_1906_, v___x_1907_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1917_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_1917_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1917_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1913_ = l_Lean_Expr_app___override(v___y_1900_, v_a_1909_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 0, v___x_1913_);
v___x_1915_ = v___x_1911_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
else
{
lean_dec_ref(v___y_1900_);
return v___x_1908_;
}
}
}
else
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
lean_dec_ref(v_x_1879_);
lean_dec_ref(v_x_1878_);
lean_dec_ref(v_major_1877_);
lean_dec_ref(v_a_1876_);
lean_dec_ref(v_indices_1875_);
lean_dec(v_a_1872_);
lean_dec_ref(v_recursorInfo_1871_);
v___x_1975_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14);
v___x_1976_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1873_, v_mvarId_1874_, v___x_1975_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
return v___x_1976_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___boxed(lean_object* v_recursorInfo_1977_, lean_object* v_a_1978_, lean_object* v_tacticName_1979_, lean_object* v_mvarId_1980_, lean_object* v_indices_1981_, lean_object* v_a_1982_, lean_object* v_major_1983_, lean_object* v_x_1984_, lean_object* v_x_1985_, lean_object* v_x_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(v_recursorInfo_1977_, v_a_1978_, v_tacticName_1979_, v_mvarId_1980_, v_indices_1981_, v_a_1982_, v_major_1983_, v_x_1984_, v_x_1985_, v_x_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(lean_object* v_a_1993_, lean_object* v_tacticName_1994_, lean_object* v_mvarId_1995_, lean_object* v_recursorInfo_1996_, lean_object* v_indices_1997_, lean_object* v_a_1998_, lean_object* v_major_1999_, lean_object* v_x_2000_, lean_object* v_x_2001_, lean_object* v_x_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
if (lean_obj_tag(v_x_2000_) == 5)
{
lean_object* v_fn_2008_; lean_object* v_arg_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_fn_2008_ = lean_ctor_get(v_x_2000_, 0);
lean_inc_ref(v_fn_2008_);
v_arg_2009_ = lean_ctor_get(v_x_2000_, 1);
lean_inc_ref(v_arg_2009_);
lean_dec_ref_known(v_x_2000_, 2);
v___x_2010_ = lean_array_set(v_x_2001_, v_x_2002_, v_arg_2009_);
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = lean_nat_sub(v_x_2002_, v___x_2011_);
v___x_2013_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(v_recursorInfo_1996_, v_a_1993_, v_tacticName_1994_, v_mvarId_1995_, v_indices_1997_, v_a_1998_, v_major_1999_, v_fn_2008_, v___x_2010_, v___x_2012_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
return v___x_2013_;
}
else
{
if (lean_obj_tag(v_x_2000_) == 4)
{
lean_object* v_us_2014_; lean_object* v_recursorName_2015_; lean_object* v_univLevelPos_2016_; uint8_t v_depElim_2017_; lean_object* v_paramsPos_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; lean_object* v___y_2022_; lean_object* v_motive_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v_us_2014_ = lean_ctor_get(v_x_2000_, 1);
lean_inc(v_us_2014_);
lean_dec_ref_known(v_x_2000_, 2);
v_recursorName_2015_ = lean_ctor_get(v_recursorInfo_1996_, 0);
lean_inc(v_recursorName_2015_);
v_univLevelPos_2016_ = lean_ctor_get(v_recursorInfo_1996_, 2);
lean_inc(v_univLevelPos_2016_);
v_depElim_2017_ = lean_ctor_get_uint8(v_recursorInfo_1996_, sizeof(void*)*8);
v_paramsPos_2018_ = lean_ctor_get(v_recursorInfo_1996_, 5);
lean_inc(v_paramsPos_2018_);
lean_dec_ref(v_recursorInfo_1996_);
v___x_2019_ = lean_array_mk(v_us_2014_);
v___x_2020_ = 0;
v___x_2040_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1));
lean_inc(v_mvarId_1995_);
lean_inc(v_tacticName_1994_);
lean_inc(v_a_1993_);
v___x_2041_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1993_, v___x_2019_, v_tacticName_1994_, v_mvarId_1995_, v___x_2040_, v_univLevelPos_2016_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
lean_dec(v_univLevelPos_2016_);
lean_dec_ref(v___x_2019_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v_fst_2043_; lean_object* v_snd_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2088_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v_fst_2043_ = lean_ctor_get(v_a_2042_, 0);
v_snd_2044_ = lean_ctor_get(v_a_2042_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_a_2042_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2046_ = v_a_2042_;
v_isShared_2047_ = v_isSharedCheck_2088_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_snd_2044_);
lean_inc(v_fst_2043_);
lean_dec(v_a_2042_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2088_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; uint8_t v___x_2068_; 
v___x_2068_ = lean_unbox(v_snd_2044_);
lean_dec(v_snd_2044_);
if (v___x_2068_ == 0)
{
uint8_t v___x_2069_; 
v___x_2069_ = l_Lean_Level_isZero(v_a_1993_);
lean_dec(v_a_1993_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2074_; 
lean_dec(v_fst_2043_);
lean_dec(v_paramsPos_2018_);
lean_dec_ref(v_x_2001_);
lean_dec_ref(v_major_1999_);
lean_dec_ref(v_a_1998_);
lean_dec_ref(v_indices_1997_);
v___x_2070_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6));
v___x_2071_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8);
v___x_2072_ = l_Lean_MessageData_ofName(v_recursorName_2015_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set_tag(v___x_2046_, 7);
lean_ctor_set(v___x_2046_, 1, v___x_2072_);
lean_ctor_set(v___x_2046_, 0, v___x_2071_);
v___x_2074_ = v___x_2046_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
v___x_2075_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10);
v___x_2076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2074_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v___x_2077_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_1994_, v_mvarId_1995_, v___x_2076_);
v___x_2078_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v___x_2070_, v___x_2077_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2078_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2078_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
lean_del_object(v___x_2046_);
lean_dec(v_tacticName_1994_);
v___y_2049_ = v___y_2003_;
v___y_2050_ = v___y_2004_;
v___y_2051_ = v___y_2005_;
v___y_2052_ = v___y_2006_;
goto v___jp_2048_;
}
}
else
{
lean_del_object(v___x_2046_);
lean_dec(v_tacticName_1994_);
lean_dec(v_a_1993_);
v___y_2049_ = v___y_2003_;
v___y_2050_ = v___y_2004_;
v___y_2051_ = v___y_2005_;
v___y_2052_ = v___y_2006_;
goto v___jp_2048_;
}
v___jp_2048_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2053_ = lean_array_to_list(v_fst_2043_);
v___x_2054_ = l_Lean_mkConst(v_recursorName_2015_, v___x_2053_);
v___x_2055_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_1995_, v_x_2001_, v_paramsPos_2018_, v___x_2054_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
lean_dec_ref(v_x_2001_);
if (lean_obj_tag(v___x_2055_) == 0)
{
if (v_depElim_2017_ == 0)
{
lean_object* v_a_2056_; 
lean_dec_ref(v_major_1999_);
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_a_2056_);
lean_dec_ref_known(v___x_2055_, 1);
v___y_2022_ = v_a_2056_;
v_motive_2023_ = v_a_1998_;
v___y_2024_ = v___y_2049_;
v___y_2025_ = v___y_2050_;
v___y_2026_ = v___y_2051_;
v___y_2027_ = v___y_2052_;
goto v___jp_2021_;
}
else
{
lean_object* v_a_2057_; lean_object* v___x_2058_; 
v_a_2057_ = lean_ctor_get(v___x_2055_, 0);
lean_inc(v_a_2057_);
lean_dec_ref_known(v___x_2055_, 1);
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc_ref(v_major_1999_);
v___x_2058_ = lean_infer_type(v_major_1999_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v___x_2060_ = lean_unsigned_to_nat(1u);
v___x_2061_ = lean_mk_empty_array_with_capacity(v___x_2060_);
v___x_2062_ = lean_array_push(v___x_2061_, v_major_1999_);
v___x_2063_ = l_Lean_Expr_abstractM(v_a_1998_, v___x_2062_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; lean_object* v___x_2067_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3));
v___x_2066_ = 0;
v___x_2067_ = l_Lean_mkLambda(v___x_2065_, v___x_2066_, v_a_2059_, v_a_2064_);
v___y_2022_ = v_a_2057_;
v_motive_2023_ = v___x_2067_;
v___y_2024_ = v___y_2049_;
v___y_2025_ = v___y_2050_;
v___y_2026_ = v___y_2051_;
v___y_2027_ = v___y_2052_;
goto v___jp_2021_;
}
else
{
lean_dec(v_a_2059_);
lean_dec(v_a_2057_);
lean_dec_ref(v_indices_1997_);
return v___x_2063_;
}
}
else
{
lean_dec(v_a_2057_);
lean_dec_ref(v_major_1999_);
lean_dec_ref(v_a_1998_);
lean_dec_ref(v_indices_1997_);
return v___x_2058_;
}
}
}
else
{
lean_dec_ref(v_major_1999_);
lean_dec_ref(v_a_1998_);
lean_dec_ref(v_indices_1997_);
return v___x_2055_;
}
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v_paramsPos_2018_);
lean_dec(v_recursorName_2015_);
lean_dec_ref(v_x_2001_);
lean_dec_ref(v_major_1999_);
lean_dec_ref(v_a_1998_);
lean_dec_ref(v_indices_1997_);
lean_dec(v_mvarId_1995_);
lean_dec(v_tacticName_1994_);
lean_dec(v_a_1993_);
v_a_2089_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2041_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2041_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
v___jp_2021_:
{
uint8_t v___x_2028_; uint8_t v___x_2029_; lean_object* v___x_2030_; 
v___x_2028_ = 1;
v___x_2029_ = 1;
v___x_2030_ = l_Lean_Meta_mkLambdaFVars(v_indices_1997_, v_motive_2023_, v___x_2020_, v___x_2028_, v___x_2020_, v___x_2028_, v___x_2029_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2039_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2033_ = v___x_2030_;
v_isShared_2034_ = v_isSharedCheck_2039_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2039_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2035_ = l_Lean_Expr_app___override(v___y_2022_, v_a_2031_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2035_);
v___x_2037_ = v___x_2033_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
lean_dec_ref(v___y_2022_);
return v___x_2030_;
}
}
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
lean_dec_ref(v_x_2001_);
lean_dec_ref(v_x_2000_);
lean_dec_ref(v_major_1999_);
lean_dec_ref(v_a_1998_);
lean_dec_ref(v_indices_1997_);
lean_dec_ref(v_recursorInfo_1996_);
lean_dec(v_a_1993_);
v___x_2097_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14);
v___x_2098_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1994_, v_mvarId_1995_, v___x_2097_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
return v___x_2098_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2___boxed(lean_object* v_a_2099_, lean_object* v_tacticName_2100_, lean_object* v_mvarId_2101_, lean_object* v_recursorInfo_2102_, lean_object* v_indices_2103_, lean_object* v_a_2104_, lean_object* v_major_2105_, lean_object* v_x_2106_, lean_object* v_x_2107_, lean_object* v_x_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(v_a_2099_, v_tacticName_2100_, v_mvarId_2101_, v_recursorInfo_2102_, v_indices_2103_, v_a_2104_, v_major_2105_, v_x_2106_, v_x_2107_, v_x_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v_x_2108_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object* v_mvarId_2115_, lean_object* v_tacticName_2116_, lean_object* v_majorFVarId_2117_, lean_object* v_recursorInfo_2118_, lean_object* v_indices_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v_major_2125_; lean_object* v___x_2126_; 
lean_inc(v_majorFVarId_2117_);
v_major_2125_ = l_Lean_mkFVar(v_majorFVarId_2117_);
lean_inc(v_mvarId_2115_);
v___x_2126_ = l_Lean_MVarId_getType(v_mvarId_2115_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2128_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc_n(v_a_2127_, 2);
lean_dec_ref_known(v___x_2126_, 1);
v___x_2128_ = l_Lean_Meta_getLevel(v_a_2127_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2130_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v___x_2130_ = l_Lean_Meta_normalizeLevel(v_a_2129_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2132_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_2117_, v_a_2120_, v_a_2122_, v_a_2123_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v_typeName_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2132_, 1);
v_typeName_2134_ = lean_ctor_get(v_recursorInfo_2118_, 1);
v___x_2135_ = l_Lean_LocalDecl_type(v_a_2133_);
lean_dec(v_a_2133_);
lean_inc_ref(v___x_2135_);
v___x_2136_ = l_Lean_Meta_whnfUntil(v___x_2135_, v_typeName_2134_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref_known(v___x_2136_, 1);
if (lean_obj_tag(v_a_2137_) == 1)
{
lean_object* v_val_2138_; lean_object* v_dummy_2139_; lean_object* v_nargs_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
lean_dec_ref(v___x_2135_);
v_val_2138_ = lean_ctor_get(v_a_2137_, 0);
lean_inc(v_val_2138_);
lean_dec_ref_known(v_a_2137_, 1);
v_dummy_2139_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__1, &l_Lean_Meta_getMajorTypeIndices___closed__1_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__1);
v_nargs_2140_ = l_Lean_Expr_getAppNumArgs(v_val_2138_);
lean_inc(v_nargs_2140_);
v___x_2141_ = lean_mk_array(v_nargs_2140_, v_dummy_2139_);
v___x_2142_ = lean_unsigned_to_nat(1u);
v___x_2143_ = lean_nat_sub(v_nargs_2140_, v___x_2142_);
lean_dec(v_nargs_2140_);
v___x_2144_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(v_a_2131_, v_tacticName_2116_, v_mvarId_2115_, v_recursorInfo_2118_, v_indices_2119_, v_a_2127_, v_major_2125_, v_val_2138_, v___x_2141_, v___x_2143_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
lean_dec(v___x_2143_);
return v___x_2144_;
}
else
{
lean_object* v___x_2145_; 
lean_dec(v_a_2137_);
lean_dec(v_a_2131_);
lean_dec(v_a_2127_);
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
v___x_2145_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_2116_, v_mvarId_2115_, v___x_2135_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2145_;
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec_ref(v___x_2135_);
lean_dec(v_a_2131_);
lean_dec(v_a_2127_);
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
lean_dec(v_tacticName_2116_);
lean_dec(v_mvarId_2115_);
v_a_2146_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2136_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2136_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v_a_2131_);
lean_dec(v_a_2127_);
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
lean_dec(v_tacticName_2116_);
lean_dec(v_mvarId_2115_);
v_a_2154_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2132_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2132_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
lean_dec(v_a_2127_);
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
lean_dec(v_majorFVarId_2117_);
lean_dec(v_tacticName_2116_);
lean_dec(v_mvarId_2115_);
v_a_2162_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2130_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2130_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_dec(v_a_2127_);
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
lean_dec(v_majorFVarId_2117_);
lean_dec(v_tacticName_2116_);
lean_dec(v_mvarId_2115_);
v_a_2170_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2128_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2128_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
else
{
lean_dec_ref(v_major_2125_);
lean_dec_ref(v_indices_2119_);
lean_dec_ref(v_recursorInfo_2118_);
lean_dec(v_majorFVarId_2117_);
lean_dec(v_tacticName_2116_);
lean_dec(v_mvarId_2115_);
return v___x_2126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix___boxed(lean_object* v_mvarId_2178_, lean_object* v_tacticName_2179_, lean_object* v_majorFVarId_2180_, lean_object* v_recursorInfo_2181_, lean_object* v_indices_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l_Lean_Meta_mkRecursorAppPrefix(v_mvarId_2178_, v_tacticName_2179_, v_majorFVarId_2180_, v_recursorInfo_2181_, v_indices_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
lean_dec(v_a_2186_);
lean_dec_ref(v_a_2185_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(lean_object* v_00_u03b1_2189_, lean_object* v_name_2190_, lean_object* v_msg_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v_name_2190_, v_msg_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___boxed(lean_object* v_00_u03b1_2198_, lean_object* v_name_2199_, lean_object* v_msg_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(v_00_u03b1_2198_, v_name_2199_, v_msg_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(lean_object* v_mvarId_2207_, lean_object* v_x_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2207_, v_x_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2223_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2214_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2214_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg___boxed(lean_object* v_mvarId_2231_, lean_object* v_x_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2231_, v_x_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(lean_object* v_00_u03b1_2239_, lean_object* v_mvarId_2240_, lean_object* v_x_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2240_, v_x_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___boxed(lean_object* v_00_u03b1_2248_, lean_object* v_mvarId_2249_, lean_object* v_x_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(v_00_u03b1_2248_, v_mvarId_2249_, v_x_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(lean_object* v_fst_2257_, lean_object* v_as_2258_, size_t v_sz_2259_, size_t v_i_2260_, lean_object* v_b_2261_){
_start:
{
uint8_t v___x_2262_; 
v___x_2262_ = lean_usize_dec_lt(v_i_2260_, v_sz_2259_);
if (v___x_2262_ == 0)
{
return v_b_2261_;
}
else
{
lean_object* v_fst_2263_; lean_object* v_snd_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2282_; 
v_fst_2263_ = lean_ctor_get(v_b_2261_, 0);
v_snd_2264_ = lean_ctor_get(v_b_2261_, 1);
v_isSharedCheck_2282_ = !lean_is_exclusive(v_b_2261_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2266_ = v_b_2261_;
v_isShared_2267_ = v_isSharedCheck_2282_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_snd_2264_);
lean_inc(v_fst_2263_);
lean_dec(v_b_2261_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2282_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2277_; 
v___x_2268_ = l_Lean_instInhabitedFVarId_default;
v_a_2269_ = lean_array_uget_borrowed(v_as_2258_, v_i_2260_);
v___x_2270_ = l_Lean_Expr_fvarId_x21(v_a_2269_);
v___x_2271_ = lean_array_get_borrowed(v___x_2268_, v_fst_2257_, v_snd_2264_);
lean_inc(v___x_2271_);
v___x_2272_ = l_Lean_mkFVar(v___x_2271_);
v___x_2273_ = l_Lean_Meta_FVarSubst_insert(v_fst_2263_, v___x_2270_, v___x_2272_);
v___x_2274_ = lean_unsigned_to_nat(1u);
v___x_2275_ = lean_nat_add(v_snd_2264_, v___x_2274_);
lean_dec(v_snd_2264_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 1, v___x_2275_);
lean_ctor_set(v___x_2266_, 0, v___x_2273_);
v___x_2277_ = v___x_2266_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2273_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
size_t v___x_2278_; size_t v___x_2279_; 
v___x_2278_ = ((size_t)1ULL);
v___x_2279_ = lean_usize_add(v_i_2260_, v___x_2278_);
v_i_2260_ = v___x_2279_;
v_b_2261_ = v___x_2277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2___boxed(lean_object* v_fst_2283_, lean_object* v_as_2284_, lean_object* v_sz_2285_, lean_object* v_i_2286_, lean_object* v_b_2287_){
_start:
{
size_t v_sz_boxed_2288_; size_t v_i_boxed_2289_; lean_object* v_res_2290_; 
v_sz_boxed_2288_ = lean_unbox_usize(v_sz_2285_);
lean_dec(v_sz_2285_);
v_i_boxed_2289_ = lean_unbox_usize(v_i_2286_);
lean_dec(v_i_2286_);
v_res_2290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2283_, v_as_2284_, v_sz_boxed_2288_, v_i_boxed_2289_, v_b_2287_);
lean_dec_ref(v_as_2284_);
lean_dec_ref(v_fst_2283_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(lean_object* v_snd_2291_, lean_object* v___x_2292_, lean_object* v_fst_2293_, lean_object* v_a_2294_, lean_object* v___x_2295_, lean_object* v_givenNames_2296_, lean_object* v_fst_2297_, lean_object* v___x_2298_, lean_object* v_fst_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; 
lean_inc(v___x_2295_);
lean_inc_ref(v_a_2294_);
lean_inc(v_snd_2291_);
v___x_2305_ = l_Lean_Meta_mkRecursorAppPrefix(v_snd_2291_, v___x_2292_, v_fst_2293_, v_a_2294_, v___x_2295_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2307_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2307_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(v_snd_2291_, v_givenNames_2296_, v_a_2294_, v_fst_2297_, v___x_2298_, v___x_2295_, v_fst_2299_, v_a_2306_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___x_2295_);
lean_dec_ref(v_a_2294_);
return v___x_2307_;
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_fst_2299_);
lean_dec_ref(v___x_2298_);
lean_dec(v___x_2295_);
lean_dec_ref(v_a_2294_);
lean_dec(v_snd_2291_);
v_a_2308_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2305_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2305_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed(lean_object* v_snd_2316_, lean_object* v___x_2317_, lean_object* v_fst_2318_, lean_object* v_a_2319_, lean_object* v___x_2320_, lean_object* v_givenNames_2321_, lean_object* v_fst_2322_, lean_object* v___x_2323_, lean_object* v_fst_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(v_snd_2316_, v___x_2317_, v_fst_2318_, v_a_2319_, v___x_2320_, v_givenNames_2321_, v_fst_2322_, v___x_2323_, v_fst_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec_ref(v_fst_2322_);
lean_dec_ref(v_givenNames_2321_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(size_t v_sz_2331_, size_t v_i_2332_, lean_object* v_bs_2333_){
_start:
{
uint8_t v___x_2334_; 
v___x_2334_ = lean_usize_dec_lt(v_i_2332_, v_sz_2331_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; 
v___x_2335_ = l_unsafeCast___redArg(v_bs_2333_);
lean_dec_ref(v_bs_2333_);
return v___x_2335_;
}
else
{
lean_object* v_v_2336_; lean_object* v___x_2337_; lean_object* v_bs_x27_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; size_t v___x_2341_; size_t v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_v_2336_ = lean_array_uget(v_bs_2333_, v_i_2332_);
v___x_2337_ = lean_unsigned_to_nat(0u);
v_bs_x27_2338_ = lean_array_uset(v_bs_2333_, v_i_2332_, v___x_2337_);
v___x_2339_ = l_unsafeCast___redArg(v_v_2336_);
lean_dec(v_v_2336_);
v___x_2340_ = l_Lean_Expr_fvarId_x21(v___x_2339_);
lean_dec(v___x_2339_);
v___x_2341_ = ((size_t)1ULL);
v___x_2342_ = lean_usize_add(v_i_2332_, v___x_2341_);
v___x_2343_ = l_unsafeCast___redArg(v___x_2340_);
lean_dec(v___x_2340_);
v___x_2344_ = lean_array_uset(v_bs_x27_2338_, v_i_2332_, v___x_2343_);
v_i_2332_ = v___x_2342_;
v_bs_2333_ = v___x_2344_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1___boxed(lean_object* v_sz_2346_, lean_object* v_i_2347_, lean_object* v_bs_2348_){
_start:
{
size_t v_sz_boxed_2349_; size_t v_i_boxed_2350_; lean_object* v_res_2351_; 
v_sz_boxed_2349_ = lean_unbox_usize(v_sz_2346_);
lean_dec(v_sz_2346_);
v_i_boxed_2350_ = lean_unbox_usize(v_i_2347_);
lean_dec(v_i_2347_);
v_res_2351_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_boxed_2349_, v_i_boxed_2350_, v_bs_2348_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0(lean_object* v_majorTypeArgs_2352_, lean_object* v_val_2353_, lean_object* v_mvarId_2354_, lean_object* v_as_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
if (lean_obj_tag(v_as_2355_) == 0)
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
lean_dec(v_mvarId_2354_);
lean_dec_ref(v_val_2353_);
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
else
{
lean_object* v_head_2363_; 
v_head_2363_ = lean_ctor_get(v_as_2355_, 0);
lean_inc(v_head_2363_);
if (lean_obj_tag(v_head_2363_) == 0)
{
lean_object* v_tail_2364_; 
v_tail_2364_ = lean_ctor_get(v_as_2355_, 1);
lean_inc(v_tail_2364_);
lean_dec_ref_known(v_as_2355_, 2);
v_as_2355_ = v_tail_2364_;
goto _start;
}
else
{
lean_object* v_tail_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2389_; 
v_tail_2366_ = lean_ctor_get(v_as_2355_, 1);
v_isSharedCheck_2389_ = !lean_is_exclusive(v_as_2355_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v_as_2355_, 0);
lean_dec(v_unused_2390_);
v___x_2368_ = v_as_2355_;
v_isShared_2369_ = v_isSharedCheck_2389_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_tail_2366_);
lean_dec(v_as_2355_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2389_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v_val_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2388_; 
v_val_2370_ = lean_ctor_get(v_head_2363_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v_head_2363_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2372_ = v_head_2363_;
v_isShared_2373_ = v_isSharedCheck_2388_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_val_2370_);
lean_dec(v_head_2363_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2388_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; uint8_t v___x_2375_; 
v___x_2374_ = lean_array_get_size(v_majorTypeArgs_2352_);
v___x_2375_ = lean_nat_dec_le(v___x_2374_, v_val_2370_);
lean_dec(v_val_2370_);
if (v___x_2375_ == 0)
{
lean_del_object(v___x_2372_);
lean_del_object(v___x_2368_);
v_as_2355_ = v_tail_2366_;
goto _start;
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2381_; 
v___x_2377_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_2378_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5);
lean_inc_ref(v_val_2353_);
v___x_2379_ = l_Lean_indentExpr(v_val_2353_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set_tag(v___x_2368_, 7);
lean_ctor_set(v___x_2368_, 1, v___x_2379_);
lean_ctor_set(v___x_2368_, 0, v___x_2378_);
v___x_2381_ = v___x_2368_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2378_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
lean_object* v___x_2383_; 
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 0, v___x_2381_);
v___x_2383_ = v___x_2372_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
lean_object* v___x_2384_; 
lean_inc(v_mvarId_2354_);
v___x_2384_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2377_, v_mvarId_2354_, v___x_2383_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_dec_ref_known(v___x_2384_, 1);
v_as_2355_ = v_tail_2366_;
goto _start;
}
else
{
lean_dec(v_tail_2366_);
lean_dec(v_mvarId_2354_);
lean_dec_ref(v_val_2353_);
return v___x_2384_;
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
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0___boxed(lean_object* v_majorTypeArgs_2391_, lean_object* v_val_2392_, lean_object* v_mvarId_2393_, lean_object* v_as_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_majorTypeArgs_2391_, v_val_2392_, v_mvarId_2393_, v_as_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec_ref(v_majorTypeArgs_2391_);
return v_res_2400_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0));
v___x_2403_ = l_Lean_stringToMessageData(v___x_2402_);
return v___x_2403_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2));
v___x_2406_ = l_Lean_stringToMessageData(v___x_2405_);
return v___x_2406_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4));
v___x_2409_ = l_Lean_stringToMessageData(v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(lean_object* v_a_2410_, lean_object* v_val_2411_, lean_object* v_mvarId_2412_, lean_object* v_majorFVarId_2413_, lean_object* v_givenNames_2414_, lean_object* v_recursorName_2415_, lean_object* v_x_2416_, lean_object* v_x_2417_, lean_object* v_x_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
if (lean_obj_tag(v_x_2416_) == 5)
{
lean_object* v_fn_2424_; lean_object* v_arg_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_fn_2424_ = lean_ctor_get(v_x_2416_, 0);
lean_inc_ref(v_fn_2424_);
v_arg_2425_ = lean_ctor_get(v_x_2416_, 1);
lean_inc_ref(v_arg_2425_);
lean_dec_ref_known(v_x_2416_, 2);
v___x_2426_ = lean_array_set(v_x_2417_, v_x_2418_, v_arg_2425_);
v___x_2427_ = lean_unsigned_to_nat(1u);
v___x_2428_ = lean_nat_sub(v_x_2418_, v___x_2427_);
lean_dec(v_x_2418_);
v_x_2416_ = v_fn_2424_;
v_x_2417_ = v___x_2426_;
v_x_2418_ = v___x_2428_;
goto _start;
}
else
{
uint8_t v_depElim_2430_; lean_object* v_paramsPos_2431_; lean_object* v___x_2432_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; size_t v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v_cls_2452_; lean_object* v___x_2453_; 
lean_dec(v_x_2418_);
lean_dec_ref(v_x_2416_);
v_depElim_2430_ = lean_ctor_get_uint8(v_a_2410_, sizeof(void*)*8);
v_paramsPos_2431_ = lean_ctor_get(v_a_2410_, 5);
v___x_2432_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v_cls_2452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_paramsPos_2431_);
lean_inc(v_mvarId_2412_);
lean_inc_ref(v_val_2411_);
v___x_2453_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_x_2417_, v_val_2411_, v_mvarId_2412_, v_paramsPos_2431_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec_ref(v_x_2417_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v___x_2454_; 
lean_dec_ref_known(v___x_2453_, 1);
lean_inc_ref(v_a_2410_);
lean_inc(v_mvarId_2412_);
v___x_2454_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_2412_, v___x_2432_, v_a_2410_, v_val_2411_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v___y_2457_; lean_object* v___y_2458_; lean_object* v___y_2459_; lean_object* v___y_2460_; lean_object* v___x_2546_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2455_);
lean_dec_ref_known(v___x_2454_, 1);
lean_inc(v_mvarId_2412_);
v___x_2546_ = l_Lean_MVarId_getType(v_mvarId_2412_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2546_) == 0)
{
if (v_depElim_2430_ == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2548_; lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2571_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
lean_inc(v_majorFVarId_2413_);
v___x_2548_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_a_2547_, v_majorFVarId_2413_, v___y_2420_);
v_a_2549_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2551_ = v___x_2548_;
v_isShared_2552_ = v_isSharedCheck_2571_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2548_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2571_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
uint8_t v___x_2553_; 
v___x_2553_ = lean_unbox(v_a_2549_);
lean_dec(v_a_2549_);
if (v___x_2553_ == 0)
{
lean_del_object(v___x_2551_);
lean_dec(v_recursorName_2415_);
v___y_2457_ = v___y_2419_;
v___y_2458_ = v___y_2420_;
v___y_2459_ = v___y_2421_;
v___y_2460_ = v___y_2422_;
goto v___jp_2456_;
}
else
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2554_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3);
v___x_2555_ = l_Lean_MessageData_ofName(v_recursorName_2415_);
v___x_2556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2554_);
lean_ctor_set(v___x_2556_, 1, v___x_2555_);
v___x_2557_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5);
v___x_2558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2556_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
if (v_isShared_2552_ == 0)
{
lean_ctor_set_tag(v___x_2551_, 1);
lean_ctor_set(v___x_2551_, 0, v___x_2558_);
v___x_2560_ = v___x_2551_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v___x_2558_);
v___x_2560_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
lean_object* v___x_2561_; 
lean_inc(v_mvarId_2412_);
v___x_2561_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2432_, v_mvarId_2412_, v___x_2560_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_dec_ref_known(v___x_2561_, 1);
v___y_2457_ = v___y_2419_;
v___y_2458_ = v___y_2420_;
v___y_2459_ = v___y_2421_;
v___y_2460_ = v___y_2422_;
goto v___jp_2456_;
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v_a_2455_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec(v_mvarId_2412_);
lean_dec_ref(v_a_2410_);
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2561_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2561_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2546_, 1);
lean_dec(v_recursorName_2415_);
v___y_2457_ = v___y_2419_;
v___y_2458_ = v___y_2420_;
v___y_2459_ = v___y_2421_;
v___y_2460_ = v___y_2422_;
goto v___jp_2456_;
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec(v_a_2455_);
lean_dec(v_recursorName_2415_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec(v_mvarId_2412_);
lean_dec_ref(v_a_2410_);
v_a_2572_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2546_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2546_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
v___jp_2456_:
{
size_t v_sz_2461_; size_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; uint8_t v___x_2467_; uint8_t v___x_2468_; lean_object* v___x_2469_; 
v_sz_2461_ = lean_array_size(v_a_2455_);
v___x_2462_ = ((size_t)0ULL);
v___x_2463_ = l_unsafeCast___redArg(v_a_2455_);
v___x_2464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_2461_, v___x_2462_, v___x_2463_);
v___x_2465_ = l_unsafeCast___redArg(v___x_2464_);
lean_dec_ref(v___x_2464_);
lean_inc(v_majorFVarId_2413_);
v___x_2466_ = lean_array_push(v___x_2465_, v_majorFVarId_2413_);
v___x_2467_ = 1;
v___x_2468_ = 0;
v___x_2469_ = l_Lean_MVarId_revert(v_mvarId_2412_, v___x_2466_, v___x_2467_, v___x_2468_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v_a_2470_; lean_object* v_fst_2471_; lean_object* v_snd_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2469_, 1);
v_fst_2471_ = lean_ctor_get(v_a_2470_, 0);
lean_inc(v_fst_2471_);
v_snd_2472_ = lean_ctor_get(v_a_2470_, 1);
lean_inc(v_snd_2472_);
lean_dec(v_a_2470_);
v___x_2473_ = lean_array_get_size(v_a_2455_);
v___x_2474_ = lean_box(0);
v___x_2475_ = l_Lean_Meta_introNCore(v_snd_2472_, v___x_2473_, v___x_2474_, v___x_2468_, v___x_2467_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v_fst_2477_; lean_object* v_snd_2478_; lean_object* v___x_2479_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2475_, 1);
v_fst_2477_ = lean_ctor_get(v_a_2476_, 0);
lean_inc(v_fst_2477_);
v_snd_2478_ = lean_ctor_get(v_a_2476_, 1);
lean_inc(v_snd_2478_);
lean_dec(v_a_2476_);
v___x_2479_ = l_Lean_Meta_intro1Core(v_snd_2478_, v___x_2467_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; lean_object* v_fst_2481_; lean_object* v_snd_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2521_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v_fst_2481_ = lean_ctor_get(v_a_2480_, 0);
v_snd_2482_ = lean_ctor_get(v_a_2480_, 1);
v_isSharedCheck_2521_ = !lean_is_exclusive(v_a_2480_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2484_ = v_a_2480_;
v_isShared_2485_ = v_isSharedCheck_2521_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_snd_2482_);
lean_inc(v_fst_2481_);
lean_dec(v_a_2480_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2521_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2491_; 
v___x_2486_ = lean_box(0);
lean_inc(v_fst_2481_);
v___x_2487_ = l_Lean_mkFVar(v_fst_2481_);
lean_inc_ref(v___x_2487_);
v___x_2488_ = l_Lean_Meta_FVarSubst_insert(v___x_2486_, v_majorFVarId_2413_, v___x_2487_);
v___x_2489_ = lean_unsigned_to_nat(0u);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 1, v___x_2489_);
lean_ctor_set(v___x_2484_, 0, v___x_2488_);
v___x_2491_ = v___x_2484_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2488_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v___x_2489_);
v___x_2491_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
lean_object* v___x_2492_; lean_object* v_toCold_2493_; lean_object* v_options_2494_; uint8_t v_hasTrace_2495_; 
v___x_2492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2477_, v_a_2455_, v_sz_2461_, v___x_2462_, v___x_2491_);
lean_dec(v_a_2455_);
v_toCold_2493_ = lean_ctor_get(v___y_2459_, 0);
v_options_2494_ = lean_ctor_get(v_toCold_2493_, 2);
v_hasTrace_2495_ = lean_ctor_get_uint8(v_options_2494_, sizeof(void*)*1);
if (v_hasTrace_2495_ == 0)
{
lean_object* v_fst_2496_; 
v_fst_2496_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_fst_2496_);
lean_dec_ref(v___x_2492_);
lean_inc(v_snd_2482_);
v___y_2434_ = v_fst_2471_;
v___y_2435_ = v___x_2487_;
v___y_2436_ = v_snd_2482_;
v___y_2437_ = v_fst_2496_;
v___y_2438_ = v_fst_2481_;
v___y_2439_ = v_snd_2482_;
v___y_2440_ = v___x_2462_;
v___y_2441_ = v_fst_2477_;
v___y_2442_ = v___y_2457_;
v___y_2443_ = v___y_2458_;
v___y_2444_ = v___y_2459_;
v___y_2445_ = v___y_2460_;
goto v___jp_2433_;
}
else
{
lean_object* v_fst_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2518_; 
v_fst_2497_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2518_ == 0)
{
lean_object* v_unused_2519_; 
v_unused_2519_ = lean_ctor_get(v___x_2492_, 1);
lean_dec(v_unused_2519_);
v___x_2499_ = v___x_2492_;
v_isShared_2500_ = v_isSharedCheck_2518_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_fst_2497_);
lean_dec(v___x_2492_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2518_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v_inheritedTraceOptions_2501_; lean_object* v___x_2502_; uint8_t v___x_2503_; 
v_inheritedTraceOptions_2501_ = lean_ctor_get(v_toCold_2493_, 11);
v___x_2502_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_2503_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2501_, v_options_2494_, v___x_2502_);
if (v___x_2503_ == 0)
{
lean_del_object(v___x_2499_);
lean_inc(v_snd_2482_);
v___y_2434_ = v_fst_2471_;
v___y_2435_ = v___x_2487_;
v___y_2436_ = v_snd_2482_;
v___y_2437_ = v_fst_2497_;
v___y_2438_ = v_fst_2481_;
v___y_2439_ = v_snd_2482_;
v___y_2440_ = v___x_2462_;
v___y_2441_ = v_fst_2477_;
v___y_2442_ = v___y_2457_;
v___y_2443_ = v___y_2458_;
v___y_2444_ = v___y_2459_;
v___y_2445_ = v___y_2460_;
goto v___jp_2433_;
}
else
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2504_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1);
lean_inc(v_snd_2482_);
v___x_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2505_, 0, v_snd_2482_);
if (v_isShared_2500_ == 0)
{
lean_ctor_set_tag(v___x_2499_, 7);
lean_ctor_set(v___x_2499_, 1, v___x_2505_);
lean_ctor_set(v___x_2499_, 0, v___x_2504_);
v___x_2507_ = v___x_2499_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2504_);
lean_ctor_set(v_reuseFailAlloc_2517_, 1, v___x_2505_);
v___x_2507_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; 
v___x_2508_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2452_, v___x_2507_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_dec_ref_known(v___x_2508_, 1);
lean_inc(v_snd_2482_);
v___y_2434_ = v_fst_2471_;
v___y_2435_ = v___x_2487_;
v___y_2436_ = v_snd_2482_;
v___y_2437_ = v_fst_2497_;
v___y_2438_ = v_fst_2481_;
v___y_2439_ = v_snd_2482_;
v___y_2440_ = v___x_2462_;
v___y_2441_ = v_fst_2477_;
v___y_2442_ = v___y_2457_;
v___y_2443_ = v___y_2458_;
v___y_2444_ = v___y_2459_;
v___y_2445_ = v___y_2460_;
goto v___jp_2433_;
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
lean_dec(v_fst_2497_);
lean_dec_ref(v___x_2487_);
lean_dec(v_snd_2482_);
lean_dec(v_fst_2481_);
lean_dec(v_fst_2477_);
lean_dec(v_fst_2471_);
lean_dec_ref(v_givenNames_2414_);
lean_dec_ref(v_a_2410_);
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2508_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
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
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec(v_fst_2477_);
lean_dec(v_fst_2471_);
lean_dec(v_a_2455_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec_ref(v_a_2410_);
v_a_2522_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2479_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2479_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec(v_fst_2471_);
lean_dec(v_a_2455_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec_ref(v_a_2410_);
v_a_2530_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2475_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2475_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2545_; 
lean_dec(v_a_2455_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec_ref(v_a_2410_);
v_a_2538_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2540_ = v___x_2469_;
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2469_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2543_; 
if (v_isShared_2541_ == 0)
{
v___x_2543_ = v___x_2540_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_a_2538_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
}
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
lean_dec(v_recursorName_2415_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec(v_mvarId_2412_);
lean_dec_ref(v_a_2410_);
v_a_2580_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2454_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2454_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec(v_recursorName_2415_);
lean_dec_ref(v_givenNames_2414_);
lean_dec(v_majorFVarId_2413_);
lean_dec(v_mvarId_2412_);
lean_dec_ref(v_val_2411_);
lean_dec_ref(v_a_2410_);
v_a_2588_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2453_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2453_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
v___jp_2433_:
{
size_t v_sz_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; 
v_sz_2446_ = lean_array_size(v___y_2441_);
v___x_2447_ = l_unsafeCast___redArg(v___y_2441_);
lean_dec_ref(v___y_2441_);
v___x_2448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_2446_, v___y_2440_, v___x_2447_);
v___x_2449_ = l_unsafeCast___redArg(v___x_2448_);
lean_dec_ref(v___x_2448_);
v___f_2450_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2450_, 0, v___y_2436_);
lean_closure_set(v___f_2450_, 1, v___x_2432_);
lean_closure_set(v___f_2450_, 2, v___y_2438_);
lean_closure_set(v___f_2450_, 3, v_a_2410_);
lean_closure_set(v___f_2450_, 4, v___x_2449_);
lean_closure_set(v___f_2450_, 5, v_givenNames_2414_);
lean_closure_set(v___f_2450_, 6, v___y_2434_);
lean_closure_set(v___f_2450_, 7, v___y_2435_);
lean_closure_set(v___f_2450_, 8, v___y_2437_);
v___x_2451_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v___y_2439_, v___f_2450_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
return v___x_2451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___boxed(lean_object* v_a_2596_, lean_object* v_val_2597_, lean_object* v_mvarId_2598_, lean_object* v_majorFVarId_2599_, lean_object* v_givenNames_2600_, lean_object* v_recursorName_2601_, lean_object* v_x_2602_, lean_object* v_x_2603_, lean_object* v_x_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(v_a_2596_, v_val_2597_, v_mvarId_2598_, v_majorFVarId_2599_, v_givenNames_2600_, v_recursorName_2601_, v_x_2602_, v_x_2603_, v_x_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(lean_object* v_val_2611_, lean_object* v_mvarId_2612_, lean_object* v_a_2613_, lean_object* v_majorFVarId_2614_, lean_object* v_givenNames_2615_, lean_object* v_recursorName_2616_, lean_object* v_x_2617_, lean_object* v_x_2618_, lean_object* v_x_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
if (lean_obj_tag(v_x_2617_) == 5)
{
lean_object* v_fn_2625_; lean_object* v_arg_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v_fn_2625_ = lean_ctor_get(v_x_2617_, 0);
lean_inc_ref(v_fn_2625_);
v_arg_2626_ = lean_ctor_get(v_x_2617_, 1);
lean_inc_ref(v_arg_2626_);
lean_dec_ref_known(v_x_2617_, 2);
v___x_2627_ = lean_array_set(v_x_2618_, v_x_2619_, v_arg_2626_);
v___x_2628_ = lean_unsigned_to_nat(1u);
v___x_2629_ = lean_nat_sub(v_x_2619_, v___x_2628_);
v___x_2630_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(v_a_2613_, v_val_2611_, v_mvarId_2612_, v_majorFVarId_2614_, v_givenNames_2615_, v_recursorName_2616_, v_fn_2625_, v___x_2627_, v___x_2629_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
return v___x_2630_;
}
else
{
uint8_t v_depElim_2631_; lean_object* v_paramsPos_2632_; lean_object* v___x_2633_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; size_t v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v_cls_2653_; lean_object* v___x_2654_; 
lean_dec_ref(v_x_2617_);
v_depElim_2631_ = lean_ctor_get_uint8(v_a_2613_, sizeof(void*)*8);
v_paramsPos_2632_ = lean_ctor_get(v_a_2613_, 5);
v___x_2633_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v_cls_2653_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_paramsPos_2632_);
lean_inc(v_mvarId_2612_);
lean_inc_ref(v_val_2611_);
v___x_2654_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_x_2618_, v_val_2611_, v_mvarId_2612_, v_paramsPos_2632_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
lean_dec_ref(v_x_2618_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v___x_2655_; 
lean_dec_ref_known(v___x_2654_, 1);
lean_inc_ref(v_a_2613_);
lean_inc(v_mvarId_2612_);
v___x_2655_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_2612_, v___x_2633_, v_a_2613_, v_val_2611_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___x_2747_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
lean_inc(v_mvarId_2612_);
v___x_2747_ = l_Lean_MVarId_getType(v_mvarId_2612_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
if (lean_obj_tag(v___x_2747_) == 0)
{
if (v_depElim_2631_ == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2749_; lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2772_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc(v_a_2748_);
lean_dec_ref_known(v___x_2747_, 1);
lean_inc(v_majorFVarId_2614_);
v___x_2749_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_a_2748_, v_majorFVarId_2614_, v___y_2621_);
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2772_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2772_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
uint8_t v___x_2754_; 
v___x_2754_ = lean_unbox(v_a_2750_);
lean_dec(v_a_2750_);
if (v___x_2754_ == 0)
{
lean_del_object(v___x_2752_);
lean_dec(v_recursorName_2616_);
v___y_2658_ = v___y_2620_;
v___y_2659_ = v___y_2621_;
v___y_2660_ = v___y_2622_;
v___y_2661_ = v___y_2623_;
goto v___jp_2657_;
}
else
{
lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v___x_2755_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3);
v___x_2756_ = l_Lean_MessageData_ofName(v_recursorName_2616_);
v___x_2757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2755_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5);
v___x_2759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set_tag(v___x_2752_, 1);
lean_ctor_set(v___x_2752_, 0, v___x_2759_);
v___x_2761_ = v___x_2752_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
lean_object* v___x_2762_; 
lean_inc(v_mvarId_2612_);
v___x_2762_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2633_, v_mvarId_2612_, v___x_2761_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_dec_ref_known(v___x_2762_, 1);
v___y_2658_ = v___y_2620_;
v___y_2659_ = v___y_2621_;
v___y_2660_ = v___y_2622_;
v___y_2661_ = v___y_2623_;
goto v___jp_2657_;
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec(v_a_2656_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_mvarId_2612_);
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2762_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2762_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2747_, 1);
lean_dec(v_recursorName_2616_);
v___y_2658_ = v___y_2620_;
v___y_2659_ = v___y_2621_;
v___y_2660_ = v___y_2622_;
v___y_2661_ = v___y_2623_;
goto v___jp_2657_;
}
}
else
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
lean_dec(v_a_2656_);
lean_dec(v_recursorName_2616_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_mvarId_2612_);
v_a_2773_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v___x_2747_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2747_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
v___jp_2657_:
{
size_t v_sz_2662_; size_t v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; 
v_sz_2662_ = lean_array_size(v_a_2656_);
v___x_2663_ = ((size_t)0ULL);
v___x_2664_ = l_unsafeCast___redArg(v_a_2656_);
v___x_2665_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_2662_, v___x_2663_, v___x_2664_);
v___x_2666_ = l_unsafeCast___redArg(v___x_2665_);
lean_dec_ref(v___x_2665_);
lean_inc(v_majorFVarId_2614_);
v___x_2667_ = lean_array_push(v___x_2666_, v_majorFVarId_2614_);
v___x_2668_ = 1;
v___x_2669_ = 0;
v___x_2670_ = l_Lean_MVarId_revert(v_mvarId_2612_, v___x_2667_, v___x_2668_, v___x_2669_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v_fst_2672_; lean_object* v_snd_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref_known(v___x_2670_, 1);
v_fst_2672_ = lean_ctor_get(v_a_2671_, 0);
lean_inc(v_fst_2672_);
v_snd_2673_ = lean_ctor_get(v_a_2671_, 1);
lean_inc(v_snd_2673_);
lean_dec(v_a_2671_);
v___x_2674_ = lean_array_get_size(v_a_2656_);
v___x_2675_ = lean_box(0);
v___x_2676_ = l_Lean_Meta_introNCore(v_snd_2673_, v___x_2674_, v___x_2675_, v___x_2669_, v___x_2668_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v_a_2677_; lean_object* v_fst_2678_; lean_object* v_snd_2679_; lean_object* v___x_2680_; 
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2676_, 1);
v_fst_2678_ = lean_ctor_get(v_a_2677_, 0);
lean_inc(v_fst_2678_);
v_snd_2679_ = lean_ctor_get(v_a_2677_, 1);
lean_inc(v_snd_2679_);
lean_dec(v_a_2677_);
v___x_2680_ = l_Lean_Meta_intro1Core(v_snd_2679_, v___x_2668_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2722_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2680_, 1);
v_fst_2682_ = lean_ctor_get(v_a_2681_, 0);
v_snd_2683_ = lean_ctor_get(v_a_2681_, 1);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_a_2681_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2685_ = v_a_2681_;
v_isShared_2686_ = v_isSharedCheck_2722_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_snd_2683_);
lean_inc(v_fst_2682_);
lean_dec(v_a_2681_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2722_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v___x_2687_ = lean_box(0);
lean_inc(v_fst_2682_);
v___x_2688_ = l_Lean_mkFVar(v_fst_2682_);
lean_inc_ref(v___x_2688_);
v___x_2689_ = l_Lean_Meta_FVarSubst_insert(v___x_2687_, v_majorFVarId_2614_, v___x_2688_);
v___x_2690_ = lean_unsigned_to_nat(0u);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 1, v___x_2690_);
lean_ctor_set(v___x_2685_, 0, v___x_2689_);
v___x_2692_ = v___x_2685_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2689_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2693_; lean_object* v_toCold_2694_; lean_object* v_options_2695_; uint8_t v_hasTrace_2696_; 
v___x_2693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2678_, v_a_2656_, v_sz_2662_, v___x_2663_, v___x_2692_);
lean_dec(v_a_2656_);
v_toCold_2694_ = lean_ctor_get(v___y_2660_, 0);
v_options_2695_ = lean_ctor_get(v_toCold_2694_, 2);
v_hasTrace_2696_ = lean_ctor_get_uint8(v_options_2695_, sizeof(void*)*1);
if (v_hasTrace_2696_ == 0)
{
lean_object* v_fst_2697_; 
v_fst_2697_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_fst_2697_);
lean_dec_ref(v___x_2693_);
lean_inc(v_snd_2683_);
v___y_2635_ = v_fst_2682_;
v___y_2636_ = v_fst_2697_;
v___y_2637_ = v___x_2688_;
v___y_2638_ = v_fst_2672_;
v___y_2639_ = v_snd_2683_;
v___y_2640_ = v___x_2663_;
v___y_2641_ = v_snd_2683_;
v___y_2642_ = v_fst_2678_;
v___y_2643_ = v___y_2658_;
v___y_2644_ = v___y_2659_;
v___y_2645_ = v___y_2660_;
v___y_2646_ = v___y_2661_;
goto v___jp_2634_;
}
else
{
lean_object* v_fst_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2719_; 
v_fst_2698_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; 
v_unused_2720_ = lean_ctor_get(v___x_2693_, 1);
lean_dec(v_unused_2720_);
v___x_2700_ = v___x_2693_;
v_isShared_2701_ = v_isSharedCheck_2719_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_fst_2698_);
lean_dec(v___x_2693_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2719_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v_inheritedTraceOptions_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; 
v_inheritedTraceOptions_2702_ = lean_ctor_get(v_toCold_2694_, 11);
v___x_2703_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_2704_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2702_, v_options_2695_, v___x_2703_);
if (v___x_2704_ == 0)
{
lean_del_object(v___x_2700_);
lean_inc(v_snd_2683_);
v___y_2635_ = v_fst_2682_;
v___y_2636_ = v_fst_2698_;
v___y_2637_ = v___x_2688_;
v___y_2638_ = v_fst_2672_;
v___y_2639_ = v_snd_2683_;
v___y_2640_ = v___x_2663_;
v___y_2641_ = v_snd_2683_;
v___y_2642_ = v_fst_2678_;
v___y_2643_ = v___y_2658_;
v___y_2644_ = v___y_2659_;
v___y_2645_ = v___y_2660_;
v___y_2646_ = v___y_2661_;
goto v___jp_2634_;
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
v___x_2705_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1);
lean_inc(v_snd_2683_);
v___x_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2706_, 0, v_snd_2683_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 7);
lean_ctor_set(v___x_2700_, 1, v___x_2706_);
lean_ctor_set(v___x_2700_, 0, v___x_2705_);
v___x_2708_ = v___x_2700_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2705_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2709_; 
v___x_2709_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2653_, v___x_2708_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_dec_ref_known(v___x_2709_, 1);
lean_inc(v_snd_2683_);
v___y_2635_ = v_fst_2682_;
v___y_2636_ = v_fst_2698_;
v___y_2637_ = v___x_2688_;
v___y_2638_ = v_fst_2672_;
v___y_2639_ = v_snd_2683_;
v___y_2640_ = v___x_2663_;
v___y_2641_ = v_snd_2683_;
v___y_2642_ = v_fst_2678_;
v___y_2643_ = v___y_2658_;
v___y_2644_ = v___y_2659_;
v___y_2645_ = v___y_2660_;
v___y_2646_ = v___y_2661_;
goto v___jp_2634_;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_fst_2698_);
lean_dec_ref(v___x_2688_);
lean_dec(v_snd_2683_);
lean_dec(v_fst_2682_);
lean_dec(v_fst_2678_);
lean_dec(v_fst_2672_);
lean_dec_ref(v_givenNames_2615_);
lean_dec_ref(v_a_2613_);
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
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
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v_fst_2678_);
lean_dec(v_fst_2672_);
lean_dec(v_a_2656_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
v_a_2723_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2680_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2680_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec(v_fst_2672_);
lean_dec(v_a_2656_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
v_a_2731_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2676_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2676_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec(v_a_2656_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
v_a_2739_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2670_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2670_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
lean_dec(v_recursorName_2616_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_mvarId_2612_);
v_a_2781_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2655_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2655_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
lean_dec(v_recursorName_2616_);
lean_dec_ref(v_givenNames_2615_);
lean_dec(v_majorFVarId_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_mvarId_2612_);
lean_dec_ref(v_val_2611_);
v_a_2789_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2654_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2654_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
v___jp_2634_:
{
size_t v_sz_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___f_2651_; lean_object* v___x_2652_; 
v_sz_2647_ = lean_array_size(v___y_2642_);
v___x_2648_ = l_unsafeCast___redArg(v___y_2642_);
lean_dec_ref(v___y_2642_);
v___x_2649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_2647_, v___y_2640_, v___x_2648_);
v___x_2650_ = l_unsafeCast___redArg(v___x_2649_);
lean_dec_ref(v___x_2649_);
v___f_2651_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2651_, 0, v___y_2639_);
lean_closure_set(v___f_2651_, 1, v___x_2633_);
lean_closure_set(v___f_2651_, 2, v___y_2635_);
lean_closure_set(v___f_2651_, 3, v_a_2613_);
lean_closure_set(v___f_2651_, 4, v___x_2650_);
lean_closure_set(v___f_2651_, 5, v_givenNames_2615_);
lean_closure_set(v___f_2651_, 6, v___y_2638_);
lean_closure_set(v___f_2651_, 7, v___y_2637_);
lean_closure_set(v___f_2651_, 8, v___y_2636_);
v___x_2652_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v___y_2641_, v___f_2651_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
return v___x_2652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___boxed(lean_object* v_val_2797_, lean_object* v_mvarId_2798_, lean_object* v_a_2799_, lean_object* v_majorFVarId_2800_, lean_object* v_givenNames_2801_, lean_object* v_recursorName_2802_, lean_object* v_x_2803_, lean_object* v_x_2804_, lean_object* v_x_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(v_val_2797_, v_mvarId_2798_, v_a_2799_, v_majorFVarId_2800_, v_givenNames_2801_, v_recursorName_2802_, v_x_2803_, v_x_2804_, v_x_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v_x_2805_);
return v_res_2811_;
}
}
static lean_object* _init_l_Lean_MVarId_induction___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = ((lean_object*)(l_Lean_MVarId_induction___lam__0___closed__0));
v___x_2814_ = l_Lean_stringToMessageData(v___x_2813_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0(lean_object* v___x_2815_, lean_object* v_mvarId_2816_, lean_object* v_majorFVarId_2817_, lean_object* v_recursorName_2818_, lean_object* v_givenNames_2819_, lean_object* v_cls_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v_toCold_2882_; lean_object* v_options_2883_; uint8_t v_hasTrace_2884_; 
v_toCold_2882_ = lean_ctor_get(v___y_2823_, 0);
v_options_2883_ = lean_ctor_get(v_toCold_2882_, 2);
v_hasTrace_2884_ = lean_ctor_get_uint8(v_options_2883_, sizeof(void*)*1);
if (v_hasTrace_2884_ == 0)
{
lean_dec(v_cls_2820_);
v___y_2827_ = v___y_2821_;
v___y_2828_ = v___y_2822_;
v___y_2829_ = v___y_2823_;
v___y_2830_ = v___y_2824_;
goto v___jp_2826_;
}
else
{
lean_object* v_inheritedTraceOptions_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; 
v_inheritedTraceOptions_2885_ = lean_ctor_get(v_toCold_2882_, 11);
v___x_2886_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4));
lean_inc(v_cls_2820_);
v___x_2887_ = l_Lean_Name_append(v___x_2886_, v_cls_2820_);
v___x_2888_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2885_, v_options_2883_, v___x_2887_);
lean_dec(v___x_2887_);
if (v___x_2888_ == 0)
{
lean_dec(v_cls_2820_);
v___y_2827_ = v___y_2821_;
v___y_2828_ = v___y_2822_;
v___y_2829_ = v___y_2823_;
v___y_2830_ = v___y_2824_;
goto v___jp_2826_;
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2889_ = lean_obj_once(&l_Lean_MVarId_induction___lam__0___closed__1, &l_Lean_MVarId_induction___lam__0___closed__1_once, _init_l_Lean_MVarId_induction___lam__0___closed__1);
lean_inc(v_mvarId_2816_);
v___x_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2890_, 0, v_mvarId_2816_);
v___x_2891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2820_, v___x_2891_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_dec_ref_known(v___x_2892_, 1);
v___y_2827_ = v___y_2821_;
v___y_2828_ = v___y_2822_;
v___y_2829_ = v___y_2823_;
v___y_2830_ = v___y_2824_;
goto v___jp_2826_;
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
lean_dec(v_mvarId_2816_);
lean_dec_ref(v___x_2815_);
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2892_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2892_);
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
}
v___jp_2826_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2831_ = l_Lean_Name_mkStr1(v___x_2815_);
lean_inc(v___x_2831_);
lean_inc(v_mvarId_2816_);
v___x_2832_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2816_, v___x_2831_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v___x_2833_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_inc(v_majorFVarId_2817_);
v___x_2833_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_2817_, v___y_2827_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___x_2833_, 1);
v___x_2835_ = lean_box(0);
lean_inc(v_recursorName_2818_);
v___x_2836_ = l_Lean_Meta_mkRecursorInfo(v_recursorName_2818_, v___x_2835_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v_typeName_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v_typeName_2838_ = lean_ctor_get(v_a_2837_, 1);
v___x_2839_ = l_Lean_LocalDecl_type(v_a_2834_);
lean_dec(v_a_2834_);
lean_inc_ref(v___x_2839_);
v___x_2840_ = l_Lean_Meta_whnfUntil(v___x_2839_, v_typeName_2838_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2840_, 1);
if (lean_obj_tag(v_a_2841_) == 1)
{
lean_object* v_val_2842_; lean_object* v_dummy_2843_; lean_object* v_nargs_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec_ref(v___x_2839_);
lean_dec(v___x_2831_);
v_val_2842_ = lean_ctor_get(v_a_2841_, 0);
lean_inc_n(v_val_2842_, 2);
lean_dec_ref_known(v_a_2841_, 1);
v_dummy_2843_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__1, &l_Lean_Meta_getMajorTypeIndices___closed__1_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__1);
v_nargs_2844_ = l_Lean_Expr_getAppNumArgs(v_val_2842_);
lean_inc(v_nargs_2844_);
v___x_2845_ = lean_mk_array(v_nargs_2844_, v_dummy_2843_);
v___x_2846_ = lean_unsigned_to_nat(1u);
v___x_2847_ = lean_nat_sub(v_nargs_2844_, v___x_2846_);
lean_dec(v_nargs_2844_);
v___x_2848_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(v_val_2842_, v_mvarId_2816_, v_a_2837_, v_majorFVarId_2817_, v_givenNames_2819_, v_recursorName_2818_, v_val_2842_, v___x_2845_, v___x_2847_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___x_2847_);
return v___x_2848_;
}
else
{
lean_object* v___x_2849_; 
lean_dec(v_a_2841_);
lean_dec(v_a_2837_);
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
v___x_2849_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v___x_2831_, v_mvarId_2816_, v___x_2839_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
return v___x_2849_;
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec_ref(v___x_2839_);
lean_dec(v_a_2837_);
lean_dec(v___x_2831_);
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
lean_dec(v_mvarId_2816_);
v_a_2850_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2840_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2840_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
else
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
lean_dec(v_a_2834_);
lean_dec(v___x_2831_);
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
lean_dec(v_mvarId_2816_);
v_a_2858_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2860_ = v___x_2836_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2836_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
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
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2858_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_dec(v___x_2831_);
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
lean_dec(v_mvarId_2816_);
v_a_2866_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2833_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2833_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_dec(v___x_2831_);
lean_dec_ref(v_givenNames_2819_);
lean_dec(v_recursorName_2818_);
lean_dec(v_majorFVarId_2817_);
lean_dec(v_mvarId_2816_);
v_a_2874_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2832_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2832_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0___boxed(lean_object* v___x_2901_, lean_object* v_mvarId_2902_, lean_object* v_majorFVarId_2903_, lean_object* v_recursorName_2904_, lean_object* v_givenNames_2905_, lean_object* v_cls_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l_Lean_MVarId_induction___lam__0(v___x_2901_, v_mvarId_2902_, v_majorFVarId_2903_, v_recursorName_2904_, v_givenNames_2905_, v_cls_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction(lean_object* v_mvarId_2913_, lean_object* v_majorFVarId_2914_, lean_object* v_recursorName_2915_, lean_object* v_givenNames_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_){
_start:
{
lean_object* v___x_2922_; lean_object* v_cls_2923_; lean_object* v___f_2924_; lean_object* v___x_2925_; 
v___x_2922_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0));
v_cls_2923_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_mvarId_2913_);
v___f_2924_ = lean_alloc_closure((void*)(l_Lean_MVarId_induction___lam__0___boxed), 11, 6);
lean_closure_set(v___f_2924_, 0, v___x_2922_);
lean_closure_set(v___f_2924_, 1, v_mvarId_2913_);
lean_closure_set(v___f_2924_, 2, v_majorFVarId_2914_);
lean_closure_set(v___f_2924_, 3, v_recursorName_2915_);
lean_closure_set(v___f_2924_, 4, v_givenNames_2916_);
lean_closure_set(v___f_2924_, 5, v_cls_2923_);
v___x_2925_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2913_, v___f_2924_, v_a_2917_, v_a_2918_, v_a_2919_, v_a_2920_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___boxed(lean_object* v_mvarId_2926_, lean_object* v_majorFVarId_2927_, lean_object* v_recursorName_2928_, lean_object* v_givenNames_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_){
_start:
{
lean_object* v_res_2935_; 
v_res_2935_ = l_Lean_MVarId_induction(v_mvarId_2926_, v_majorFVarId_2927_, v_recursorName_2928_, v_givenNames_2929_, v_a_2930_, v_a_2931_, v_a_2932_, v_a_2933_);
lean_dec(v_a_2933_);
lean_dec_ref(v_a_2932_);
lean_dec(v_a_2931_);
lean_dec_ref(v_a_2930_);
return v_res_2935_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = lean_box(0);
v___x_2937_ = l_unsafeCast___redArg(v___x_2936_);
return v___x_2937_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2939_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2940_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2941_ = l_Lean_Name_str___override(v___x_2940_, v___x_2939_);
return v___x_2941_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2944_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2945_ = l_Lean_Name_str___override(v___x_2944_, v___x_2943_);
return v___x_2945_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2946_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0));
v___x_2947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2948_ = l_Lean_Name_str___override(v___x_2947_, v___x_2946_);
return v___x_2948_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2949_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1));
v___x_2950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2951_ = l_Lean_Name_str___override(v___x_2950_, v___x_2949_);
return v___x_2951_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2953_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2954_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2955_ = l_Lean_Name_str___override(v___x_2954_, v___x_2953_);
return v___x_2955_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2958_ = l_Lean_Name_num___override(v___x_2957_, v___x_2956_);
return v___x_2958_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2959_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2960_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2961_ = l_Lean_Name_str___override(v___x_2960_, v___x_2959_);
return v___x_2961_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2962_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0));
v___x_2963_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2964_ = l_Lean_Name_str___override(v___x_2963_, v___x_2962_);
return v___x_2964_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2967_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2968_ = l_Lean_Name_str___override(v___x_2967_, v___x_2966_);
return v___x_2968_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2971_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2972_ = l_Lean_Name_str___override(v___x_2971_, v___x_2970_);
return v___x_2972_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2973_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2974_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2975_ = l_Lean_Name_str___override(v___x_2974_, v___x_2973_);
return v___x_2975_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0));
v___x_2977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2978_ = l_Lean_Name_str___override(v___x_2977_, v___x_2976_);
return v___x_2978_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2979_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1));
v___x_2980_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2981_ = l_Lean_Name_str___override(v___x_2980_, v___x_2979_);
return v___x_2981_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2982_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2983_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2984_ = l_Lean_Name_str___override(v___x_2983_, v___x_2982_);
return v___x_2984_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2985_ = lean_unsigned_to_nat(2221195325u);
v___x_2986_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2987_ = l_Lean_Name_num___override(v___x_2986_, v___x_2985_);
return v___x_2987_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2989_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2990_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2991_ = l_Lean_Name_str___override(v___x_2990_, v___x_2989_);
return v___x_2991_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2993_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2994_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2995_ = l_Lean_Name_str___override(v___x_2994_, v___x_2993_);
return v___x_2995_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2996_ = lean_unsigned_to_nat(2u);
v___x_2997_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2998_ = l_Lean_Name_num___override(v___x_2997_, v___x_2996_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3000_; uint8_t v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_3000_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_3001_ = 0;
v___x_3002_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_3003_ = l_Lean_registerTraceClass(v___x_3000_, v___x_3001_, v___x_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2____boxed(lean_object* v_a_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
return v_res_3005_;
}
}
lean_object* runtime_initialize_Lean_Meta_RecursorInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedInductionSubgoal_default = _init_l_Lean_Meta_instInhabitedInductionSubgoal_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedInductionSubgoal_default);
l_Lean_Meta_instInhabitedInductionSubgoal = _init_l_Lean_Meta_instInhabitedInductionSubgoal();
lean_mark_persistent(l_Lean_Meta_instInhabitedInductionSubgoal);
res = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_RecursorInfo(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Induction(builtin);
}
#ifdef __cplusplus
}
#endif

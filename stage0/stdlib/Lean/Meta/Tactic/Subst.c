// Lean compiler output
// Module: Lean.Meta.Tactic.Subst
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.Tactic.Assert
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_FVarSubst_empty;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_substCore_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_substCore_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "after intro rest "};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_h"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(32, 79, 207, 54, 208, 114, 216, 130)}};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__7_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Tactic.Subst"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__8_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.substCore"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__9_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 29, 29, 32, 53, 17, 69, 167)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid equality proof, it is not of the form "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nafter WHNF, variable expected, but obtained"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "argument must be an equality proof"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__7_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__8;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__9;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "reverted variables "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__11;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after intro2 "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__12 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__13;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after revert "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__14 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__14_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__15;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__16 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__17;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' occurs at"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__18 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__19;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__20 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__21 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 247, 229, 3, 213, 123, 220, 1)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__22 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value;
static const lean_closure_object l_Lean_Meta_substCore___lam__3___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_substCore___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value)} };
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__23 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__23_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "substituting "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__24 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__24_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__25;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " (id: "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__26 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__26_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__27;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") with "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__28 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__28_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__29;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(x = t)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__30 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__30_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(t = x)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__31 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__31_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_heqToEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_heqToEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "did not find equation for eliminating '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is a let-declaration"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "invalid equality proof, it is not of the form (x = t) or (t = x)"};
static const lean_object* l_Lean_Meta_substEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not an arrow type"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "variable "};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " has forward dependencies"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "equality rhs not a free variable"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not an equality"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__11_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "homo_ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 43, 236, 51, 159, 219, 21, 78)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "homo_ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(50, 157, 119, 52, 76, 119, 237, 183)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__15 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "hetereogenenous equality isn't homogeneous"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__17;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__18 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(115, 164, 251, 202, 217, 58, 77, 179)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__19 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__20 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 160, 179, 99, 219, 64, 47, 167)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__21 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "introSubstEq: now assigned\?"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "introSubstEq"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 191, 181, 66, 111, 91, 242, 60)}};
static const lean_object* l_Lean_Meta_introSubstEq___closed__1 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__2;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "introSubstEq falling back to intro\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__3 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__3_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__4;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__5 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Subst"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(lean_object* v_x_44_){
_start:
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed(lean_object* v_x_46_){
_start:
{
uint8_t v_res_47_; lean_object* v_r_48_; 
v_res_47_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(v_x_46_);
lean_dec(v_x_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(lean_object* v_fvarId_49_, lean_object* v_x_50_){
_start:
{
uint8_t v___x_51_; 
v___x_51_ = l_Lean_instBEqFVarId_beq(v_fvarId_49_, v_x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed(lean_object* v_fvarId_52_, lean_object* v_x_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(v_fvarId_52_, v_x_53_);
lean_dec(v_x_53_);
lean_dec(v_fvarId_52_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_box(0);
v___x_58_ = lean_unsigned_to_nat(16u);
v___x_59_ = lean_mk_array(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1);
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(lean_object* v_e_63_, lean_object* v_fvarId_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___x_69_; uint8_t v_fst_71_; lean_object* v_mctx_72_; lean_object* v___y_90_; lean_object* v_mctx_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___f_67_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0));
v___f_68_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_68_, 0, v_fvarId_64_);
v___x_69_ = lean_st_ref_get(v___y_65_);
v_mctx_95_ = lean_ctor_get(v___x_69_, 0);
lean_inc_ref_n(v_mctx_95_, 2);
lean_dec(v___x_69_);
v___x_96_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_mctx_95_);
v___x_98_ = l_Lean_Expr_hasFVar(v_e_63_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = l_Lean_Expr_hasMVar(v_e_63_);
if (v___x_99_ == 0)
{
lean_dec_ref_known(v___x_97_, 2);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_e_63_);
v_fst_71_ = v___x_99_;
v_mctx_72_ = v_mctx_95_;
goto v___jp_70_;
}
else
{
lean_object* v___x_100_; 
lean_dec_ref(v_mctx_95_);
v___x_100_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_68_, v___f_67_, v_e_63_, v___x_97_);
v___y_90_ = v___x_100_;
goto v___jp_89_;
}
}
else
{
lean_object* v___x_101_; 
lean_dec_ref(v_mctx_95_);
v___x_101_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_68_, v___f_67_, v_e_63_, v___x_97_);
v___y_90_ = v___x_101_;
goto v___jp_89_;
}
v___jp_70_:
{
lean_object* v___x_73_; lean_object* v_cache_74_; lean_object* v_zetaDeltaFVarIds_75_; lean_object* v_postponed_76_; lean_object* v_diag_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_87_; 
v___x_73_ = lean_st_ref_take(v___y_65_);
v_cache_74_ = lean_ctor_get(v___x_73_, 1);
v_zetaDeltaFVarIds_75_ = lean_ctor_get(v___x_73_, 2);
v_postponed_76_ = lean_ctor_get(v___x_73_, 3);
v_diag_77_ = lean_ctor_get(v___x_73_, 4);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v___x_73_, 0);
lean_dec(v_unused_88_);
v___x_79_ = v___x_73_;
v_isShared_80_ = v_isSharedCheck_87_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_diag_77_);
lean_inc(v_postponed_76_);
lean_inc(v_zetaDeltaFVarIds_75_);
lean_inc(v_cache_74_);
lean_dec(v___x_73_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_87_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v_mctx_72_);
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_mctx_72_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_cache_74_);
lean_ctor_set(v_reuseFailAlloc_86_, 2, v_zetaDeltaFVarIds_75_);
lean_ctor_set(v_reuseFailAlloc_86_, 3, v_postponed_76_);
lean_ctor_set(v_reuseFailAlloc_86_, 4, v_diag_77_);
v___x_82_ = v_reuseFailAlloc_86_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_st_ref_put(v___y_65_, v___x_82_);
v___x_84_ = lean_box(v_fst_71_);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
}
v___jp_89_:
{
lean_object* v_snd_91_; lean_object* v_fst_92_; lean_object* v_mctx_93_; uint8_t v___x_94_; 
v_snd_91_ = lean_ctor_get(v___y_90_, 1);
lean_inc(v_snd_91_);
v_fst_92_ = lean_ctor_get(v___y_90_, 0);
lean_inc(v_fst_92_);
lean_dec_ref(v___y_90_);
v_mctx_93_ = lean_ctor_get(v_snd_91_, 1);
lean_inc_ref(v_mctx_93_);
lean_dec(v_snd_91_);
v___x_94_ = lean_unbox(v_fst_92_);
lean_dec(v_fst_92_);
v_fst_71_ = v___x_94_;
v_mctx_72_ = v_mctx_93_;
goto v___jp_70_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___boxed(lean_object* v_e_102_, lean_object* v_fvarId_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_e_102_, v_fvarId_103_, v___y_104_);
lean_dec(v___y_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(lean_object* v_e_107_, lean_object* v_fvarId_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_e_107_, v_fvarId_108_, v___y_110_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___boxed(lean_object* v_e_115_, lean_object* v_fvarId_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(v_e_115_, v_fvarId_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6(lean_object* v_msg_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v___f_130_; lean_object* v___x_24732__overap_131_; lean_object* v___x_132_; 
v___f_130_ = ((lean_object*)(l_panic___at___00Lean_Meta_substCore_spec__6___closed__0));
v___x_24732__overap_131_ = lean_panic_fn_borrowed(v___f_130_, v_msg_124_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
lean_inc(v___y_126_);
lean_inc_ref(v___y_125_);
v___x_132_ = lean_apply_5(v___x_24732__overap_131_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, lean_box(0));
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___boxed(lean_object* v_msg_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_panic___at___00Lean_Meta_substCore_spec__6(v_msg_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object* v_mvarId_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_140_, v_x_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_147_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_147_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object* v_mvarId_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_164_, v_x_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object* v_00_u03b1_172_, lean_object* v_mvarId_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object* v_00_u03b1_181_, lean_object* v_mvarId_182_, lean_object* v_x_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(v_00_u03b1_181_, v_mvarId_182_, v_x_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object* v_type_190_, lean_object* v___x_191_, lean_object* v___x_192_, lean_object* v___x_193_, uint8_t v___x_194_, uint8_t v___x_195_, lean_object* v_hAux_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v___x_202_; 
lean_inc_ref(v_hAux_196_);
v___x_202_ = l_Lean_Meta_mkEqSymm(v_hAux_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v___x_204_ = l_Lean_Expr_replaceFVar(v_type_190_, v___x_191_, v_a_203_);
lean_dec(v_a_203_);
v___x_205_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_206_ = lean_array_push(v___x_205_, v___x_193_);
v___x_207_ = lean_array_push(v___x_206_, v_hAux_196_);
v___x_208_ = 1;
v___x_209_ = l_Lean_Meta_mkLambdaFVars(v___x_207_, v___x_204_, v___x_194_, v___x_195_, v___x_194_, v___x_195_, v___x_208_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
return v___x_209_;
}
else
{
lean_dec_ref(v_hAux_196_);
lean_dec_ref(v___x_193_);
lean_dec_ref(v___x_191_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object* v_type_210_, lean_object* v___x_211_, lean_object* v___x_212_, lean_object* v___x_213_, lean_object* v___x_214_, lean_object* v___x_215_, lean_object* v_hAux_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
uint8_t v___x_27183__boxed_222_; uint8_t v___x_27184__boxed_223_; lean_object* v_res_224_; 
v___x_27183__boxed_222_ = lean_unbox(v___x_214_);
v___x_27184__boxed_223_ = lean_unbox(v___x_215_);
v_res_224_ = l_Lean_Meta_substCore___lam__0(v_type_210_, v___x_211_, v___x_212_, v___x_213_, v___x_27183__boxed_222_, v___x_27184__boxed_223_, v_hAux_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___x_212_);
lean_dec_ref(v_type_210_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_, lean_object* v_x_228_){
_start:
{
lean_object* v_ks_229_; lean_object* v_vs_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_254_; 
v_ks_229_ = lean_ctor_get(v_x_225_, 0);
v_vs_230_ = lean_ctor_get(v_x_225_, 1);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_254_ == 0)
{
v___x_232_ = v_x_225_;
v_isShared_233_ = v_isSharedCheck_254_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_vs_230_);
lean_inc(v_ks_229_);
lean_dec(v_x_225_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_254_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_array_get_size(v_ks_229_);
v___x_235_ = lean_nat_dec_lt(v_x_226_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
lean_dec(v_x_226_);
v___x_236_ = lean_array_push(v_ks_229_, v_x_227_);
v___x_237_ = lean_array_push(v_vs_230_, v_x_228_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v___x_237_);
lean_ctor_set(v___x_232_, 0, v___x_236_);
v___x_239_ = v___x_232_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
else
{
lean_object* v_k_x27_241_; uint8_t v___x_242_; 
v_k_x27_241_ = lean_array_fget_borrowed(v_ks_229_, v_x_226_);
v___x_242_ = l_Lean_instBEqMVarId_beq(v_x_227_, v_k_x27_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_244_; 
if (v_isShared_233_ == 0)
{
v___x_244_ = v___x_232_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_ks_229_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_vs_230_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_add(v_x_226_, v___x_245_);
lean_dec(v_x_226_);
v_x_225_ = v___x_244_;
v_x_226_ = v___x_246_;
goto _start;
}
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_249_ = lean_array_fset(v_ks_229_, v_x_226_, v_x_227_);
v___x_250_ = lean_array_fset(v_vs_230_, v_x_226_, v_x_228_);
lean_dec(v_x_226_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v___x_250_);
lean_ctor_set(v___x_232_, 0, v___x_249_);
v___x_252_ = v___x_232_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_250_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(lean_object* v_n_255_, lean_object* v_k_256_, lean_object* v_v_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(v_n_255_, v___x_258_, v_k_256_, v_v_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_box(0);
v___x_261_ = l_unsafeCast___redArg(v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(lean_object* v_x_263_, size_t v_x_264_, size_t v_x_265_, lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
lean_object* v_es_268_; size_t v___x_269_; size_t v___x_270_; lean_object* v_j_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_es_268_ = lean_ctor_get(v_x_263_, 0);
v___x_269_ = ((size_t)31ULL);
v___x_270_ = lean_usize_land(v_x_264_, v___x_269_);
v_j_271_ = lean_usize_to_nat(v___x_270_);
v___x_272_ = lean_array_get_size(v_es_268_);
v___x_273_ = lean_nat_dec_lt(v_j_271_, v___x_272_);
if (v___x_273_ == 0)
{
lean_dec(v_j_271_);
lean_dec(v_x_267_);
lean_dec(v_x_266_);
return v_x_263_;
}
else
{
lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_312_; 
lean_inc_ref(v_es_268_);
v_isSharedCheck_312_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_312_ == 0)
{
lean_object* v_unused_313_; 
v_unused_313_ = lean_ctor_get(v_x_263_, 0);
lean_dec(v_unused_313_);
v___x_275_ = v_x_263_;
v_isShared_276_ = v_isSharedCheck_312_;
goto v_resetjp_274_;
}
else
{
lean_dec(v_x_263_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_312_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_v_277_; lean_object* v___x_278_; lean_object* v_xs_x27_279_; lean_object* v___y_281_; 
v_v_277_ = lean_array_fget(v_es_268_, v_j_271_);
v___x_278_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0);
v_xs_x27_279_ = lean_array_fset(v_es_268_, v_j_271_, v___x_278_);
switch(lean_obj_tag(v_v_277_))
{
case 0:
{
lean_object* v_key_286_; lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_297_; 
v_key_286_ = lean_ctor_get(v_v_277_, 0);
v_val_287_ = lean_ctor_get(v_v_277_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_v_277_);
if (v_isSharedCheck_297_ == 0)
{
v___x_289_ = v_v_277_;
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_inc(v_key_286_);
lean_dec(v_v_277_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
uint8_t v___x_291_; 
v___x_291_ = l_Lean_instBEqMVarId_beq(v_x_266_, v_key_286_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; 
lean_del_object(v___x_289_);
v___x_292_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_286_, v_val_287_, v_x_266_, v_x_267_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___y_281_ = v___x_293_;
goto v___jp_280_;
}
else
{
lean_object* v___x_295_; 
lean_dec(v_val_287_);
lean_dec(v_key_286_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 1, v_x_267_);
lean_ctor_set(v___x_289_, 0, v_x_266_);
v___x_295_ = v___x_289_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_x_266_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_x_267_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
v___y_281_ = v___x_295_;
goto v___jp_280_;
}
}
}
}
case 1:
{
lean_object* v_node_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_310_; 
v_node_298_ = lean_ctor_get(v_v_277_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v_v_277_);
if (v_isSharedCheck_310_ == 0)
{
v___x_300_ = v_v_277_;
v_isShared_301_ = v_isSharedCheck_310_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_node_298_);
lean_dec(v_v_277_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_310_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
size_t v___x_302_; size_t v___x_303_; size_t v___x_304_; size_t v___x_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v___x_302_ = ((size_t)5ULL);
v___x_303_ = lean_usize_shift_right(v_x_264_, v___x_302_);
v___x_304_ = ((size_t)1ULL);
v___x_305_ = lean_usize_add(v_x_265_, v___x_304_);
v___x_306_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_node_298_, v___x_303_, v___x_305_, v_x_266_, v_x_267_);
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_306_);
v___x_308_ = v___x_300_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
v___y_281_ = v___x_308_;
goto v___jp_280_;
}
}
}
default: 
{
lean_object* v___x_311_; 
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v_x_266_);
lean_ctor_set(v___x_311_, 1, v_x_267_);
v___y_281_ = v___x_311_;
goto v___jp_280_;
}
}
v___jp_280_:
{
lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_282_ = lean_array_fset(v_xs_x27_279_, v_j_271_, v___y_281_);
lean_dec(v_j_271_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_282_);
v___x_284_ = v___x_275_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
else
{
lean_object* v_ks_314_; lean_object* v_vs_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_333_; 
v_ks_314_ = lean_ctor_get(v_x_263_, 0);
v_vs_315_ = lean_ctor_get(v_x_263_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_333_ == 0)
{
v___x_317_ = v_x_263_;
v_isShared_318_ = v_isSharedCheck_333_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_vs_315_);
lean_inc(v_ks_314_);
lean_dec(v_x_263_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_333_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_ks_314_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_vs_315_);
v___x_320_ = v_reuseFailAlloc_332_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v_newNode_321_; size_t v___x_322_; uint8_t v___x_323_; 
v_newNode_321_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(v___x_320_, v_x_266_, v_x_267_);
v___x_322_ = ((size_t)7ULL);
v___x_323_ = lean_usize_dec_le(v___x_322_, v_x_265_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_324_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_321_);
v___x_325_ = lean_unsigned_to_nat(4u);
v___x_326_ = lean_nat_dec_lt(v___x_324_, v___x_325_);
lean_dec(v___x_324_);
if (v___x_326_ == 0)
{
lean_object* v_ks_327_; lean_object* v_vs_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_ks_327_ = lean_ctor_get(v_newNode_321_, 0);
lean_inc_ref(v_ks_327_);
v_vs_328_ = lean_ctor_get(v_newNode_321_, 1);
lean_inc_ref(v_vs_328_);
lean_dec_ref(v_newNode_321_);
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__1);
v___x_331_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_x_265_, v_ks_327_, v_vs_328_, v___x_329_, v___x_330_);
lean_dec_ref(v_vs_328_);
lean_dec_ref(v_ks_327_);
return v___x_331_;
}
else
{
return v_newNode_321_;
}
}
else
{
return v_newNode_321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(size_t v_depth_334_, lean_object* v_keys_335_, lean_object* v_vals_336_, lean_object* v_i_337_, lean_object* v_entries_338_){
_start:
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_array_get_size(v_keys_335_);
v___x_340_ = lean_nat_dec_lt(v_i_337_, v___x_339_);
if (v___x_340_ == 0)
{
lean_dec(v_i_337_);
return v_entries_338_;
}
else
{
lean_object* v_k_341_; lean_object* v_v_342_; uint64_t v___x_343_; size_t v_h_344_; size_t v___x_345_; lean_object* v___x_346_; size_t v___x_347_; size_t v___x_348_; size_t v___x_349_; size_t v_h_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_k_341_ = lean_array_fget_borrowed(v_keys_335_, v_i_337_);
v_v_342_ = lean_array_fget_borrowed(v_vals_336_, v_i_337_);
v___x_343_ = l_Lean_instHashableMVarId_hash(v_k_341_);
v_h_344_ = lean_uint64_to_usize(v___x_343_);
v___x_345_ = ((size_t)5ULL);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_sub(v_depth_334_, v___x_347_);
v___x_349_ = lean_usize_mul(v___x_345_, v___x_348_);
v_h_350_ = lean_usize_shift_right(v_h_344_, v___x_349_);
v___x_351_ = lean_nat_add(v_i_337_, v___x_346_);
lean_dec(v_i_337_);
lean_inc(v_v_342_);
lean_inc(v_k_341_);
v___x_352_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_entries_338_, v_h_350_, v_depth_334_, v_k_341_, v_v_342_);
v_i_337_ = v___x_351_;
v_entries_338_ = v___x_352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
size_t v_depth_boxed_359_; lean_object* v_res_360_; 
v_depth_boxed_359_ = lean_unbox_usize(v_depth_354_);
lean_dec(v_depth_354_);
v_res_360_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_depth_boxed_359_, v_keys_355_, v_vals_356_, v_i_357_, v_entries_358_);
lean_dec_ref(v_vals_356_);
lean_dec_ref(v_keys_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___boxed(lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
size_t v_x_27308__boxed_366_; size_t v_x_27309__boxed_367_; lean_object* v_res_368_; 
v_x_27308__boxed_366_ = lean_unbox_usize(v_x_362_);
lean_dec(v_x_362_);
v_x_27309__boxed_367_ = lean_unbox_usize(v_x_363_);
lean_dec(v_x_363_);
v_res_368_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_361_, v_x_27308__boxed_366_, v_x_27309__boxed_367_, v_x_364_, v_x_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
uint64_t v___x_372_; size_t v___x_373_; size_t v___x_374_; lean_object* v___x_375_; 
v___x_372_ = l_Lean_instHashableMVarId_hash(v_x_370_);
v___x_373_ = lean_uint64_to_usize(v___x_372_);
v___x_374_ = ((size_t)1ULL);
v___x_375_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_369_, v___x_373_, v___x_374_, v_x_370_, v_x_371_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(lean_object* v_mvarId_376_, lean_object* v_val_377_, lean_object* v___y_378_){
_start:
{
lean_object* v___x_380_; lean_object* v_mctx_381_; lean_object* v_cache_382_; lean_object* v_zetaDeltaFVarIds_383_; lean_object* v_postponed_384_; lean_object* v_diag_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_414_; 
v___x_380_ = lean_st_ref_take(v___y_378_);
v_mctx_381_ = lean_ctor_get(v___x_380_, 0);
v_cache_382_ = lean_ctor_get(v___x_380_, 1);
v_zetaDeltaFVarIds_383_ = lean_ctor_get(v___x_380_, 2);
v_postponed_384_ = lean_ctor_get(v___x_380_, 3);
v_diag_385_ = lean_ctor_get(v___x_380_, 4);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_414_ == 0)
{
v___x_387_ = v___x_380_;
v_isShared_388_ = v_isSharedCheck_414_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_diag_385_);
lean_inc(v_postponed_384_);
lean_inc(v_zetaDeltaFVarIds_383_);
lean_inc(v_cache_382_);
lean_inc(v_mctx_381_);
lean_dec(v___x_380_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_414_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v_depth_389_; lean_object* v_levelAssignDepth_390_; lean_object* v_lmvarCounter_391_; lean_object* v_mvarCounter_392_; lean_object* v_lDecls_393_; lean_object* v_decls_394_; lean_object* v_userNames_395_; lean_object* v_lAssignment_396_; lean_object* v_eAssignment_397_; lean_object* v_dAssignment_398_; lean_object* v_instanceTypedMVars_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_413_; 
v_depth_389_ = lean_ctor_get(v_mctx_381_, 0);
v_levelAssignDepth_390_ = lean_ctor_get(v_mctx_381_, 1);
v_lmvarCounter_391_ = lean_ctor_get(v_mctx_381_, 2);
v_mvarCounter_392_ = lean_ctor_get(v_mctx_381_, 3);
v_lDecls_393_ = lean_ctor_get(v_mctx_381_, 4);
v_decls_394_ = lean_ctor_get(v_mctx_381_, 5);
v_userNames_395_ = lean_ctor_get(v_mctx_381_, 6);
v_lAssignment_396_ = lean_ctor_get(v_mctx_381_, 7);
v_eAssignment_397_ = lean_ctor_get(v_mctx_381_, 8);
v_dAssignment_398_ = lean_ctor_get(v_mctx_381_, 9);
v_instanceTypedMVars_399_ = lean_ctor_get(v_mctx_381_, 10);
v_isSharedCheck_413_ = !lean_is_exclusive(v_mctx_381_);
if (v_isSharedCheck_413_ == 0)
{
v___x_401_ = v_mctx_381_;
v_isShared_402_ = v_isSharedCheck_413_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_instanceTypedMVars_399_);
lean_inc(v_dAssignment_398_);
lean_inc(v_eAssignment_397_);
lean_inc(v_lAssignment_396_);
lean_inc(v_userNames_395_);
lean_inc(v_decls_394_);
lean_inc(v_lDecls_393_);
lean_inc(v_mvarCounter_392_);
lean_inc(v_lmvarCounter_391_);
lean_inc(v_levelAssignDepth_390_);
lean_inc(v_depth_389_);
lean_dec(v_mctx_381_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_413_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_403_ = lean_box(0);
v___x_404_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(v_eAssignment_397_, v_mvarId_376_, v_val_377_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 8, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_depth_389_);
lean_ctor_set(v_reuseFailAlloc_412_, 1, v_levelAssignDepth_390_);
lean_ctor_set(v_reuseFailAlloc_412_, 2, v_lmvarCounter_391_);
lean_ctor_set(v_reuseFailAlloc_412_, 3, v_mvarCounter_392_);
lean_ctor_set(v_reuseFailAlloc_412_, 4, v_lDecls_393_);
lean_ctor_set(v_reuseFailAlloc_412_, 5, v_decls_394_);
lean_ctor_set(v_reuseFailAlloc_412_, 6, v_userNames_395_);
lean_ctor_set(v_reuseFailAlloc_412_, 7, v_lAssignment_396_);
lean_ctor_set(v_reuseFailAlloc_412_, 8, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_412_, 9, v_dAssignment_398_);
lean_ctor_set(v_reuseFailAlloc_412_, 10, v_instanceTypedMVars_399_);
v___x_406_ = v_reuseFailAlloc_412_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_408_; 
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_406_);
v___x_408_ = v___x_387_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_cache_382_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_zetaDeltaFVarIds_383_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v_postponed_384_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v_diag_385_);
v___x_408_ = v_reuseFailAlloc_411_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_st_ref_put(v___y_378_, v___x_408_);
v___x_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_403_);
return v___x_410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object* v_mvarId_415_, lean_object* v_val_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_mvarId_415_, v_val_416_, v___y_417_);
lean_dec(v___y_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(lean_object* v_fst_420_, lean_object* v_fst_421_, lean_object* v_n_422_, lean_object* v_i_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_zero_426_; uint8_t v_isZero_427_; 
v_zero_426_ = lean_unsigned_to_nat(0u);
v_isZero_427_ = lean_nat_dec_eq(v_i_423_, v_zero_426_);
if (v_isZero_427_ == 1)
{
lean_object* v___x_428_; 
lean_dec(v_i_423_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v_a_424_);
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v_one_431_; lean_object* v_n_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_429_ = lean_unsigned_to_nat(2u);
v___x_430_ = l_Lean_instInhabitedFVarId_default;
v_one_431_ = lean_unsigned_to_nat(1u);
v_n_432_ = lean_nat_sub(v_i_423_, v_one_431_);
lean_dec(v_i_423_);
v___x_433_ = lean_nat_sub(v_n_422_, v_n_432_);
v___x_434_ = lean_nat_sub(v___x_433_, v_one_431_);
lean_dec(v___x_433_);
v___x_435_ = lean_nat_add(v___x_434_, v___x_429_);
v___x_436_ = lean_array_get_borrowed(v___x_430_, v_fst_420_, v___x_435_);
lean_dec(v___x_435_);
v___x_437_ = lean_array_fget_borrowed(v_fst_421_, v___x_434_);
lean_dec(v___x_434_);
lean_inc(v___x_437_);
v___x_438_ = l_Lean_mkFVar(v___x_437_);
lean_inc(v___x_436_);
v___x_439_ = l_Lean_Meta_FVarSubst_insert(v_a_424_, v___x_436_, v___x_438_);
v_i_423_ = v_n_432_;
v_a_424_ = v___x_439_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg___boxed(lean_object* v_fst_441_, lean_object* v_fst_442_, lean_object* v_n_443_, lean_object* v_i_444_, lean_object* v_a_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_441_, v_fst_442_, v_n_443_, v_i_444_, v_a_445_);
lean_dec(v_n_443_);
lean_dec_ref(v_fst_442_);
lean_dec_ref(v_fst_441_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(lean_object* v_k_448_, lean_object* v_b_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___x_455_; 
lean_inc(v___y_453_);
lean_inc_ref(v___y_452_);
lean_inc(v___y_451_);
lean_inc_ref(v___y_450_);
v___x_455_ = lean_apply_6(v_k_448_, v_b_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, lean_box(0));
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed(lean_object* v_k_456_, lean_object* v_b_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(v_k_456_, v_b_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(lean_object* v_name_464_, uint8_t v_bi_465_, lean_object* v_type_466_, lean_object* v_k_467_, uint8_t v_kind_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___f_474_; lean_object* v___x_475_; 
v___f_474_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_474_, 0, v_k_467_);
v___x_475_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_464_, v_bi_465_, v_type_466_, v___f_474_, v_kind_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_a_484_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_475_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_475_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___boxed(lean_object* v_name_492_, lean_object* v_bi_493_, lean_object* v_type_494_, lean_object* v_k_495_, lean_object* v_kind_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
uint8_t v_bi_boxed_502_; uint8_t v_kind_boxed_503_; lean_object* v_res_504_; 
v_bi_boxed_502_ = lean_unbox(v_bi_493_);
v_kind_boxed_503_ = lean_unbox(v_kind_496_);
v_res_504_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_492_, v_bi_boxed_502_, v_type_494_, v_k_495_, v_kind_boxed_503_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(lean_object* v_name_505_, lean_object* v_type_506_, lean_object* v_k_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
uint8_t v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; 
v___x_513_ = 0;
v___x_514_ = 0;
v___x_515_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_505_, v___x_513_, v_type_506_, v_k_507_, v___x_514_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object* v_name_516_, lean_object* v_type_517_, lean_object* v_k_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v_name_516_, v_type_517_, v_k_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(lean_object* v_msgData_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; lean_object* v_env_532_; lean_object* v___x_533_; lean_object* v_toCold_534_; lean_object* v_mctx_535_; lean_object* v_lctx_536_; lean_object* v_options_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_531_ = lean_st_ref_get(v___y_529_);
v_env_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc_ref(v_env_532_);
lean_dec(v___x_531_);
v___x_533_ = lean_st_ref_get(v___y_527_);
v_toCold_534_ = lean_ctor_get(v___y_528_, 0);
v_mctx_535_ = lean_ctor_get(v___x_533_, 0);
lean_inc_ref(v_mctx_535_);
lean_dec(v___x_533_);
v_lctx_536_ = lean_ctor_get(v___y_526_, 2);
v_options_537_ = lean_ctor_get(v_toCold_534_, 2);
lean_inc_ref(v_options_537_);
lean_inc_ref(v_lctx_536_);
v___x_538_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_538_, 0, v_env_532_);
lean_ctor_set(v___x_538_, 1, v_mctx_535_);
lean_ctor_set(v___x_538_, 2, v_lctx_536_);
lean_ctor_set(v___x_538_, 3, v_options_537_);
v___x_539_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v_msgData_525_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2___boxed(lean_object* v_msgData_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msgData_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_547_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0(void){
_start:
{
lean_object* v___x_548_; double v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = lean_float_of_nat(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(lean_object* v_cls_553_, lean_object* v_msg_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_ref_560_; lean_object* v___x_561_; lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_606_; 
v_ref_560_ = lean_ctor_get(v___y_557_, 2);
v___x_561_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msg_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_606_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_606_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_606_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v_traceState_567_; lean_object* v_env_568_; lean_object* v_nextMacroScope_569_; lean_object* v_ngen_570_; lean_object* v_auxDeclNGen_571_; lean_object* v_cache_572_; lean_object* v_messages_573_; lean_object* v_infoState_574_; lean_object* v_snapshotTasks_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_605_; 
v___x_566_ = lean_st_ref_take(v___y_558_);
v_traceState_567_ = lean_ctor_get(v___x_566_, 4);
v_env_568_ = lean_ctor_get(v___x_566_, 0);
v_nextMacroScope_569_ = lean_ctor_get(v___x_566_, 1);
v_ngen_570_ = lean_ctor_get(v___x_566_, 2);
v_auxDeclNGen_571_ = lean_ctor_get(v___x_566_, 3);
v_cache_572_ = lean_ctor_get(v___x_566_, 5);
v_messages_573_ = lean_ctor_get(v___x_566_, 6);
v_infoState_574_ = lean_ctor_get(v___x_566_, 7);
v_snapshotTasks_575_ = lean_ctor_get(v___x_566_, 8);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_605_ == 0)
{
v___x_577_ = v___x_566_;
v_isShared_578_ = v_isSharedCheck_605_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_snapshotTasks_575_);
lean_inc(v_infoState_574_);
lean_inc(v_messages_573_);
lean_inc(v_cache_572_);
lean_inc(v_traceState_567_);
lean_inc(v_auxDeclNGen_571_);
lean_inc(v_ngen_570_);
lean_inc(v_nextMacroScope_569_);
lean_inc(v_env_568_);
lean_dec(v___x_566_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_605_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
uint64_t v_tid_579_; lean_object* v_traces_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_604_; 
v_tid_579_ = lean_ctor_get_uint64(v_traceState_567_, sizeof(void*)*1);
v_traces_580_ = lean_ctor_get(v_traceState_567_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v_traceState_567_);
if (v_isSharedCheck_604_ == 0)
{
v___x_582_ = v_traceState_567_;
v_isShared_583_ = v_isSharedCheck_604_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_traces_580_);
lean_dec(v_traceState_567_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_604_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_585_; double v___x_586_; uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v___x_584_ = lean_box(0);
v___x_585_ = lean_box(0);
v___x_586_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0);
v___x_587_ = 0;
v___x_588_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1));
v___x_589_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_589_, 0, v_cls_553_);
lean_ctor_set(v___x_589_, 1, v___x_585_);
lean_ctor_set(v___x_589_, 2, v___x_588_);
lean_ctor_set_float(v___x_589_, sizeof(void*)*3, v___x_586_);
lean_ctor_set_float(v___x_589_, sizeof(void*)*3 + 8, v___x_586_);
lean_ctor_set_uint8(v___x_589_, sizeof(void*)*3 + 16, v___x_587_);
v___x_590_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2));
v___x_591_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set(v___x_591_, 1, v_a_562_);
lean_ctor_set(v___x_591_, 2, v___x_590_);
lean_inc(v_ref_560_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v_ref_560_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = l_Lean_PersistentArray_push___redArg(v_traces_580_, v___x_592_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_593_);
v___x_595_ = v___x_582_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_593_);
lean_ctor_set_uint64(v_reuseFailAlloc_603_, sizeof(void*)*1, v_tid_579_);
v___x_595_ = v_reuseFailAlloc_603_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_597_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 4, v___x_595_);
v___x_597_ = v___x_577_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_env_568_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v_nextMacroScope_569_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_ngen_570_);
lean_ctor_set(v_reuseFailAlloc_602_, 3, v_auxDeclNGen_571_);
lean_ctor_set(v_reuseFailAlloc_602_, 4, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_602_, 5, v_cache_572_);
lean_ctor_set(v_reuseFailAlloc_602_, 6, v_messages_573_);
lean_ctor_set(v_reuseFailAlloc_602_, 7, v_infoState_574_);
lean_ctor_set(v_reuseFailAlloc_602_, 8, v_snapshotTasks_575_);
v___x_597_ = v_reuseFailAlloc_602_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_st_ref_put(v___y_558_, v___x_597_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_584_);
v___x_600_ = v___x_564_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v___x_584_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___boxed(lean_object* v_cls_607_, lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v_cls_607_, v_msg_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
return v_res_614_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__2));
v___x_620_ = l_Lean_stringToMessageData(v___x_619_);
return v___x_620_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__4));
v___x_623_ = l_Lean_stringToMessageData(v___x_622_);
return v___x_623_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__11(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_630_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__10));
v___x_631_ = lean_unsigned_to_nat(22u);
v___x_632_ = lean_unsigned_to_nat(64u);
v___x_633_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__9));
v___x_634_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__8));
v___x_635_ = l_mkPanicMessageWithDecl(v___x_634_, v___x_633_, v___x_632_, v___x_631_, v___x_630_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object* v_fvarId_636_, lean_object* v_hFVarId_637_, lean_object* v___x_638_, lean_object* v_fst_639_, lean_object* v_fvarSubst_640_, uint8_t v_clearH_641_, lean_object* v___x_642_, lean_object* v___x_643_, lean_object* v___x_644_, uint8_t v_skip_645_, uint8_t v___x_646_, lean_object* v___x_647_, lean_object* v_snd_648_, lean_object* v___x_649_, lean_object* v___x_650_, lean_object* v_a_651_, uint8_t v_symm_652_, uint8_t v___x_653_, lean_object* v___x_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_677_; lean_object* v_mvarId_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v_newVal_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_761_; lean_object* v___y_762_; uint8_t v___y_763_; lean_object* v___y_764_; lean_object* v_major_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_802_; uint8_t v___y_803_; lean_object* v_motive_804_; lean_object* v_newType_805_; lean_object* v___x_816_; 
lean_inc(v_snd_648_);
v___x_816_ = l_Lean_MVarId_getDecl(v_snd_648_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v_type_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___f_821_; lean_object* v___x_822_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v_type_818_ = lean_ctor_get(v_a_817_, 2);
lean_inc_ref_n(v_type_818_, 2);
lean_dec(v_a_817_);
v___x_819_ = lean_box(v___x_653_);
v___x_820_ = lean_box(v___x_646_);
lean_inc_ref(v___x_642_);
lean_inc(v___x_643_);
lean_inc_ref(v___x_638_);
v___f_821_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__0___boxed), 12, 6);
lean_closure_set(v___f_821_, 0, v_type_818_);
lean_closure_set(v___f_821_, 1, v___x_638_);
lean_closure_set(v___f_821_, 2, v___x_643_);
lean_closure_set(v___f_821_, 3, v___x_642_);
lean_closure_set(v___f_821_, 4, v___x_819_);
lean_closure_set(v___f_821_, 5, v___x_820_);
lean_inc(v___x_649_);
v___x_822_ = l_Lean_FVarId_getDecl___redArg(v___x_649_, v___y_655_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
v___x_824_ = l_Lean_LocalDecl_type(v_a_823_);
lean_dec(v_a_823_);
v___x_825_ = l_Lean_Meta_matchEq_x3f(v___x_824_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___y_828_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
if (lean_obj_tag(v_a_826_) == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec_ref(v___f_821_);
lean_dec_ref(v_type_818_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v___x_898_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__11, &l_Lean_Meta_substCore___lam__1___closed__11_once, _init_l_Lean_Meta_substCore___lam__1___closed__11);
v___x_899_ = l_panic___at___00Lean_Meta_substCore_spec__6(v___x_898_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
return v___x_899_;
}
else
{
lean_object* v_val_900_; lean_object* v_snd_901_; 
v_val_900_ = lean_ctor_get(v_a_826_, 0);
lean_inc(v_val_900_);
lean_dec_ref_known(v_a_826_, 1);
v_snd_901_ = lean_ctor_get(v_val_900_, 1);
lean_inc(v_snd_901_);
lean_dec(v_val_900_);
if (v_symm_652_ == 0)
{
lean_object* v_snd_902_; 
v_snd_902_ = lean_ctor_get(v_snd_901_, 1);
lean_inc(v_snd_902_);
lean_dec(v_snd_901_);
v___y_828_ = v_snd_902_;
goto v___jp_827_;
}
else
{
lean_object* v_fst_903_; 
v_fst_903_ = lean_ctor_get(v_snd_901_, 0);
lean_inc(v_fst_903_);
lean_dec(v_snd_901_);
v___y_828_ = v_fst_903_;
goto v___jp_827_;
}
}
v___jp_827_:
{
lean_object* v___x_829_; lean_object* v_a_830_; lean_object* v___x_831_; lean_object* v_a_832_; uint8_t v___x_833_; 
v___x_829_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_828_, v___y_656_);
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref(v___x_829_);
lean_inc(v___x_649_);
lean_inc_ref(v_type_818_);
v___x_831_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_type_818_, v___x_649_, v___y_656_);
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref(v___x_831_);
v___x_833_ = lean_unbox(v_a_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v___x_837_; 
lean_dec_ref(v___f_821_);
v___x_834_ = lean_mk_empty_array_with_capacity(v___x_654_);
lean_inc_ref(v___x_642_);
v___x_835_ = lean_array_push(v___x_834_, v___x_642_);
v___x_836_ = 1;
lean_inc_ref(v_type_818_);
v___x_837_ = l_Lean_Meta_mkLambdaFVars(v___x_835_, v_type_818_, v___x_653_, v___x_646_, v___x_653_, v___x_646_, v___x_836_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
lean_inc_ref(v___x_642_);
v___x_839_ = l_Lean_Expr_replaceFVar(v_type_818_, v___x_642_, v_a_830_);
lean_dec_ref(v_type_818_);
v___x_840_ = lean_unbox(v_a_832_);
lean_dec(v_a_832_);
v___y_802_ = v_a_830_;
v___y_803_ = v___x_840_;
v_motive_804_ = v_a_838_;
v_newType_805_ = v___x_839_;
goto v___jp_801_;
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec(v_a_832_);
lean_dec(v_a_830_);
lean_dec_ref(v_type_818_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_841_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_837_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
else
{
lean_object* v___x_849_; lean_object* v___x_850_; 
lean_inc_ref(v___x_642_);
v___x_849_ = l_Lean_Expr_replaceFVar(v_type_818_, v___x_642_, v_a_830_);
lean_inc(v_a_830_);
v___x_850_ = l_Lean_Meta_mkEqRefl(v_a_830_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_852_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_a_851_);
lean_dec_ref_known(v___x_850_, 1);
lean_inc_ref(v___x_638_);
v___x_852_ = l_Lean_Expr_replaceFVar(v___x_849_, v___x_638_, v_a_851_);
lean_dec(v_a_851_);
lean_dec_ref(v___x_849_);
if (v_symm_652_ == 0)
{
lean_object* v___x_853_; 
lean_dec_ref(v_type_818_);
lean_inc_ref(v___x_642_);
lean_inc(v_a_830_);
v___x_853_ = l_Lean_Meta_mkEq(v_a_830_, v___x_642_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v___x_855_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__7));
v___x_856_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v___x_855_, v_a_854_, v___f_821_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; uint8_t v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = lean_unbox(v_a_832_);
lean_dec(v_a_832_);
v___y_802_ = v_a_830_;
v___y_803_ = v___x_858_;
v_motive_804_ = v_a_857_;
v_newType_805_ = v___x_852_;
goto v___jp_801_;
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref(v___x_852_);
lean_dec(v_a_832_);
lean_dec(v_a_830_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_859_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_856_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_856_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec_ref(v___x_852_);
lean_dec(v_a_832_);
lean_dec(v_a_830_);
lean_dec_ref(v___f_821_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_867_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_853_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_853_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; lean_object* v___x_879_; 
lean_dec_ref(v___f_821_);
v___x_875_ = lean_mk_empty_array_with_capacity(v___x_643_);
lean_inc_ref(v___x_642_);
v___x_876_ = lean_array_push(v___x_875_, v___x_642_);
lean_inc_ref(v___x_638_);
v___x_877_ = lean_array_push(v___x_876_, v___x_638_);
v___x_878_ = 1;
v___x_879_ = l_Lean_Meta_mkLambdaFVars(v___x_877_, v_type_818_, v___x_653_, v___x_646_, v___x_653_, v___x_646_, v___x_878_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; uint8_t v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = lean_unbox(v_a_832_);
lean_dec(v_a_832_);
v___y_802_ = v_a_830_;
v___y_803_ = v___x_881_;
v_motive_804_ = v_a_880_;
v_newType_805_ = v___x_852_;
goto v___jp_801_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v___x_852_);
lean_dec(v_a_832_);
lean_dec(v_a_830_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_882_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_879_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_879_);
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
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec_ref(v___x_849_);
lean_dec(v_a_832_);
lean_dec(v_a_830_);
lean_dec_ref(v___f_821_);
lean_dec_ref(v_type_818_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_890_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_850_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_850_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v___f_821_);
lean_dec_ref(v_type_818_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_904_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_825_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_825_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v___f_821_);
lean_dec_ref(v_type_818_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_912_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_822_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_822_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_920_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_816_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_816_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
v___jp_660_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_664_ = l_Lean_Meta_FVarSubst_insert(v___y_662_, v_fvarId_636_, v___y_663_);
v___x_665_ = l_Lean_Meta_FVarSubst_insert(v___x_664_, v_hFVarId_637_, v___x_638_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
lean_ctor_set(v___x_666_, 1, v___y_661_);
v___x_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
return v___x_667_;
}
v___jp_668_:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_array_get_size(v___y_671_);
v___x_673_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_639_, v___y_671_, v___x_672_, v___x_672_, v_fvarSubst_640_);
lean_dec_ref(v___y_671_);
if (v_clearH_641_ == 0)
{
lean_object* v_a_674_; 
lean_dec_ref(v___y_670_);
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref(v___x_673_);
v___y_661_ = v___y_669_;
v___y_662_ = v_a_674_;
v___y_663_ = v___x_642_;
goto v___jp_660_;
}
else
{
lean_object* v_a_675_; 
lean_dec_ref(v___x_642_);
v_a_675_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_675_);
lean_dec_ref(v___x_673_);
v___y_661_ = v___y_669_;
v___y_662_ = v_a_675_;
v___y_663_ = v___y_670_;
goto v___jp_660_;
}
}
v___jp_676_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = lean_array_get_size(v_fst_639_);
v___x_684_ = lean_nat_sub(v___x_683_, v___x_643_);
lean_dec(v___x_643_);
lean_inc(v___x_684_);
v___x_685_ = l_Lean_Meta_introNCore(v_mvarId_678_, v___x_684_, v___x_644_, v_skip_645_, v___x_646_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v_toCold_687_; lean_object* v_options_688_; uint8_t v_hasTrace_689_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_685_, 1);
v_toCold_687_ = lean_ctor_get(v___y_681_, 0);
v_options_688_ = lean_ctor_get(v_toCold_687_, 2);
v_hasTrace_689_ = lean_ctor_get_uint8(v_options_688_, sizeof(void*)*1);
if (v_hasTrace_689_ == 0)
{
lean_object* v_fst_690_; lean_object* v_snd_691_; 
lean_dec(v___x_684_);
lean_dec(v___x_647_);
v_fst_690_ = lean_ctor_get(v_a_686_, 0);
lean_inc(v_fst_690_);
v_snd_691_ = lean_ctor_get(v_a_686_, 1);
lean_inc(v_snd_691_);
lean_dec(v_a_686_);
v___y_669_ = v_snd_691_;
v___y_670_ = v___y_677_;
v___y_671_ = v_fst_690_;
goto v___jp_668_;
}
else
{
lean_object* v_fst_692_; lean_object* v_snd_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_721_; 
v_fst_692_ = lean_ctor_get(v_a_686_, 0);
v_snd_693_ = lean_ctor_get(v_a_686_, 1);
v_isSharedCheck_721_ = !lean_is_exclusive(v_a_686_);
if (v_isSharedCheck_721_ == 0)
{
v___x_695_ = v_a_686_;
v_isShared_696_ = v_isSharedCheck_721_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_snd_693_);
lean_inc(v_fst_692_);
lean_dec(v_a_686_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_721_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v_inheritedTraceOptions_697_; lean_object* v___x_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v_inheritedTraceOptions_697_ = lean_ctor_get(v_toCold_687_, 11);
v___x_698_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
lean_inc(v___x_647_);
v___x_699_ = l_Lean_Name_append(v___x_698_, v___x_647_);
v___x_700_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_697_, v_options_688_, v___x_699_);
lean_dec(v___x_699_);
if (v___x_700_ == 0)
{
lean_del_object(v___x_695_);
lean_dec(v___x_684_);
lean_dec(v___x_647_);
v___y_669_ = v_snd_693_;
v___y_670_ = v___y_677_;
v___y_671_ = v_fst_692_;
goto v___jp_668_;
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; 
v___x_701_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__3, &l_Lean_Meta_substCore___lam__1___closed__3_once, _init_l_Lean_Meta_substCore___lam__1___closed__3);
v___x_702_ = l_Nat_reprFast(v___x_684_);
v___x_703_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
v___x_704_ = l_Lean_MessageData_ofFormat(v___x_703_);
if (v_isShared_696_ == 0)
{
lean_ctor_set_tag(v___x_695_, 7);
lean_ctor_set(v___x_695_, 1, v___x_704_);
lean_ctor_set(v___x_695_, 0, v___x_701_);
v___x_706_ = v___x_695_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v___x_704_);
v___x_706_ = v_reuseFailAlloc_720_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_707_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__5, &l_Lean_Meta_substCore___lam__1___closed__5_once, _init_l_Lean_Meta_substCore___lam__1___closed__5);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
lean_inc(v_snd_693_);
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v_snd_693_);
v___x_710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_647_, v___x_710_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_dec_ref_known(v___x_711_, 1);
v___y_669_ = v_snd_693_;
v___y_670_ = v___y_677_;
v___y_671_ = v_fst_692_;
goto v___jp_668_;
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec(v_snd_693_);
lean_dec(v_fst_692_);
lean_dec_ref(v___y_677_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
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
}
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v___x_684_);
lean_dec_ref(v___y_677_);
lean_dec(v___x_647_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_722_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_685_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_685_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
v___jp_730_:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_snd_648_, v_newVal_733_, v___y_735_);
lean_dec_ref(v___x_738_);
v___x_739_ = l_Lean_Expr_mvarId_x21(v___y_731_);
lean_dec_ref(v___y_731_);
if (v_clearH_641_ == 0)
{
lean_dec(v___x_650_);
lean_dec(v___x_649_);
v___y_677_ = v___y_732_;
v_mvarId_678_ = v___x_739_;
v___y_679_ = v___y_734_;
v___y_680_ = v___y_735_;
v___y_681_ = v___y_736_;
v___y_682_ = v___y_737_;
goto v___jp_676_;
}
else
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_MVarId_clear(v___x_739_, v___x_649_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = l_Lean_MVarId_clear(v_a_741_, v___x_650_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
v___y_677_ = v___y_732_;
v_mvarId_678_ = v_a_743_;
v___y_679_ = v___y_734_;
v___y_680_ = v___y_735_;
v___y_681_ = v___y_736_;
v___y_682_ = v___y_737_;
goto v___jp_676_;
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec_ref(v___y_732_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_744_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_742_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_742_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec_ref(v___y_732_);
lean_dec(v___x_650_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_752_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_740_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_740_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
v___jp_760_:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_764_, v_a_651_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
if (v___y_763_ == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc_n(v_a_771_, 2);
lean_dec_ref_known(v___x_770_, 1);
v___x_772_ = l_Lean_Meta_mkEqNDRec(v___y_761_, v_a_771_, v_major_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v___y_731_ = v_a_771_;
v___y_732_ = v___y_762_;
v_newVal_733_ = v_a_773_;
v___y_734_ = v___y_766_;
v___y_735_ = v___y_767_;
v___y_736_ = v___y_768_;
v___y_737_ = v___y_769_;
goto v___jp_730_;
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec(v_a_771_);
lean_dec_ref(v___y_762_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_774_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_772_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
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
else
{
lean_object* v_a_782_; lean_object* v___x_783_; 
v_a_782_ = lean_ctor_get(v___x_770_, 0);
lean_inc_n(v_a_782_, 2);
lean_dec_ref_known(v___x_770_, 1);
v___x_783_ = l_Lean_Meta_mkEqRec(v___y_761_, v_a_782_, v_major_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
v___y_731_ = v_a_782_;
v___y_732_ = v___y_762_;
v_newVal_733_ = v_a_784_;
v___y_734_ = v___y_766_;
v___y_735_ = v___y_767_;
v___y_736_ = v___y_768_;
v___y_737_ = v___y_769_;
goto v___jp_730_;
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec(v_a_782_);
lean_dec_ref(v___y_762_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_785_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_783_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_783_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_dec_ref(v_major_765_);
lean_dec_ref(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_793_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_770_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_770_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
v___jp_801_:
{
if (v_symm_652_ == 0)
{
lean_object* v___x_806_; 
lean_inc_ref(v___x_638_);
v___x_806_ = l_Lean_Meta_mkEqSymm(v___x_638_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_806_, 1);
v___y_761_ = v_motive_804_;
v___y_762_ = v___y_802_;
v___y_763_ = v___y_803_;
v___y_764_ = v_newType_805_;
v_major_765_ = v_a_807_;
v___y_766_ = v___y_655_;
v___y_767_ = v___y_656_;
v___y_768_ = v___y_657_;
v___y_769_ = v___y_658_;
goto v___jp_760_;
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref(v_newType_805_);
lean_dec_ref(v_motive_804_);
lean_dec_ref(v___y_802_);
lean_dec(v_a_651_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
lean_dec(v_snd_648_);
lean_dec(v___x_647_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
lean_dec_ref(v___x_642_);
lean_dec(v_fvarSubst_640_);
lean_dec_ref(v___x_638_);
lean_dec(v_hFVarId_637_);
lean_dec(v_fvarId_636_);
v_a_808_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_806_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_806_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_inc_ref(v___x_638_);
v___y_761_ = v_motive_804_;
v___y_762_ = v___y_802_;
v___y_763_ = v___y_803_;
v___y_764_ = v_newType_805_;
v_major_765_ = v___x_638_;
v___y_766_ = v___y_655_;
v___y_767_ = v___y_656_;
v___y_768_ = v___y_657_;
v___y_769_ = v___y_658_;
goto v___jp_760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object** _args){
lean_object* v_fvarId_928_ = _args[0];
lean_object* v_hFVarId_929_ = _args[1];
lean_object* v___x_930_ = _args[2];
lean_object* v_fst_931_ = _args[3];
lean_object* v_fvarSubst_932_ = _args[4];
lean_object* v_clearH_933_ = _args[5];
lean_object* v___x_934_ = _args[6];
lean_object* v___x_935_ = _args[7];
lean_object* v___x_936_ = _args[8];
lean_object* v_skip_937_ = _args[9];
lean_object* v___x_938_ = _args[10];
lean_object* v___x_939_ = _args[11];
lean_object* v_snd_940_ = _args[12];
lean_object* v___x_941_ = _args[13];
lean_object* v___x_942_ = _args[14];
lean_object* v_a_943_ = _args[15];
lean_object* v_symm_944_ = _args[16];
lean_object* v___x_945_ = _args[17];
lean_object* v___x_946_ = _args[18];
lean_object* v___y_947_ = _args[19];
lean_object* v___y_948_ = _args[20];
lean_object* v___y_949_ = _args[21];
lean_object* v___y_950_ = _args[22];
lean_object* v___y_951_ = _args[23];
_start:
{
uint8_t v_clearH_boxed_952_; uint8_t v_skip_boxed_953_; uint8_t v___x_27818__boxed_954_; uint8_t v_symm_boxed_955_; uint8_t v___x_27824__boxed_956_; lean_object* v_res_957_; 
v_clearH_boxed_952_ = lean_unbox(v_clearH_933_);
v_skip_boxed_953_ = lean_unbox(v_skip_937_);
v___x_27818__boxed_954_ = lean_unbox(v___x_938_);
v_symm_boxed_955_ = lean_unbox(v_symm_944_);
v___x_27824__boxed_956_ = lean_unbox(v___x_945_);
v_res_957_ = l_Lean_Meta_substCore___lam__1(v_fvarId_928_, v_hFVarId_929_, v___x_930_, v_fst_931_, v_fvarSubst_932_, v_clearH_boxed_952_, v___x_934_, v___x_935_, v___x_936_, v_skip_boxed_953_, v___x_27818__boxed_954_, v___x_939_, v_snd_940_, v___x_941_, v___x_942_, v_a_943_, v_symm_boxed_955_, v___x_27824__boxed_956_, v___x_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___x_946_);
lean_dec_ref(v_fst_931_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* v___x_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_toCold_964_; lean_object* v_options_965_; uint8_t v_hasTrace_966_; 
v_toCold_964_ = lean_ctor_get(v___y_961_, 0);
v_options_965_ = lean_ctor_get(v_toCold_964_, 2);
v_hasTrace_966_ = lean_ctor_get_uint8(v_options_965_, sizeof(void*)*1);
if (v_hasTrace_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v___x_958_);
v___x_967_ = lean_box(v_hasTrace_966_);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
else
{
lean_object* v_inheritedTraceOptions_969_; lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_inheritedTraceOptions_969_ = lean_ctor_get(v_toCold_964_, 11);
v___x_970_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_971_ = l_Lean_Name_append(v___x_970_, v___x_958_);
v___x_972_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_969_, v_options_965_, v___x_971_);
lean_dec(v___x_971_);
v___x_973_ = lean_box(v___x_972_);
v___x_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object* v___x_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lean_Meta_substCore___lam__2(v___x_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
if (lean_obj_tag(v_a_982_) == 0)
{
lean_object* v___x_984_; 
v___x_984_ = l_List_reverse___redArg(v_a_983_);
return v___x_984_;
}
else
{
lean_object* v_head_985_; lean_object* v_tail_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_995_; 
v_head_985_ = lean_ctor_get(v_a_982_, 0);
v_tail_986_ = lean_ctor_get(v_a_982_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v_a_982_);
if (v_isSharedCheck_995_ == 0)
{
v___x_988_ = v_a_982_;
v_isShared_989_ = v_isSharedCheck_995_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_tail_986_);
lean_inc(v_head_985_);
lean_dec(v_a_982_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_995_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_992_; 
v___x_990_ = l_Lean_MessageData_ofName(v_head_985_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v_a_983_);
lean_ctor_set(v___x_988_, 0, v___x_990_);
v___x_992_ = v___x_988_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_a_983_);
v___x_992_ = v_reuseFailAlloc_994_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
v_a_982_ = v_tail_986_;
v_a_983_ = v___x_992_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t v_sz_996_, size_t v_i_997_, lean_object* v_bs_998_){
_start:
{
uint8_t v___x_999_; 
v___x_999_ = lean_usize_dec_lt(v_i_997_, v_sz_996_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; 
v___x_1000_ = l_unsafeCast___redArg(v_bs_998_);
lean_dec_ref(v_bs_998_);
return v___x_1000_;
}
else
{
lean_object* v_v_1001_; lean_object* v___x_1002_; lean_object* v_bs_x27_1003_; lean_object* v___x_1004_; size_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_v_1001_ = lean_array_uget(v_bs_998_, v_i_997_);
v___x_1002_ = lean_unsigned_to_nat(0u);
v_bs_x27_1003_ = lean_array_uset(v_bs_998_, v_i_997_, v___x_1002_);
v___x_1004_ = l_unsafeCast___redArg(v_v_1001_);
lean_dec(v_v_1001_);
v___x_1005_ = ((size_t)1ULL);
v___x_1006_ = lean_usize_add(v_i_997_, v___x_1005_);
v___x_1007_ = l_unsafeCast___redArg(v___x_1004_);
lean_dec(v___x_1004_);
v___x_1008_ = lean_array_uset(v_bs_x27_1003_, v_i_997_, v___x_1007_);
v_i_997_ = v___x_1006_;
v_bs_998_ = v___x_1008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object* v_sz_1010_, lean_object* v_i_1011_, lean_object* v_bs_1012_){
_start:
{
size_t v_sz_boxed_1013_; size_t v_i_boxed_1014_; lean_object* v_res_1015_; 
v_sz_boxed_1013_ = lean_unbox_usize(v_sz_1010_);
lean_dec(v_sz_1010_);
v_i_boxed_1014_ = lean_unbox_usize(v_i_1011_);
lean_dec(v_i_1011_);
v_res_1015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_boxed_1013_, v_i_boxed_1014_, v_bs_1012_);
return v_res_1015_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__2));
v___x_1021_ = l_Lean_stringToMessageData(v___x_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__4));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_1029_ = l_Lean_MessageData_ofFormat(v___x_1028_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__8, &l_Lean_Meta_substCore___lam__3___closed__8_once, _init_l_Lean_Meta_substCore___lam__3___closed__8);
v___x_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__11(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__10));
v___x_1034_ = l_Lean_stringToMessageData(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__12));
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__15(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__14));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__17(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__16));
v___x_1043_ = l_Lean_stringToMessageData(v___x_1042_);
return v___x_1043_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__19(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__25(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__24));
v___x_1057_ = l_Lean_stringToMessageData(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__27(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__26));
v___x_1060_ = l_Lean_stringToMessageData(v___x_1059_);
return v___x_1060_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__29(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__28));
v___x_1063_ = l_Lean_stringToMessageData(v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object* v_mvarId_1066_, lean_object* v_hFVarId_1067_, lean_object* v___x_1068_, uint8_t v_clearH_1069_, lean_object* v_fvarSubst_1070_, uint8_t v_symm_1071_, uint8_t v_tryToSkip_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___x_1116_; 
lean_inc(v_mvarId_1066_);
v___x_1116_ = l_Lean_MVarId_getTag(v_mvarId_1066_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
lean_inc(v_mvarId_1066_);
v___x_1119_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1066_, v___x_1118_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v___x_1120_; 
lean_dec_ref_known(v___x_1119_, 1);
lean_inc(v_hFVarId_1067_);
v___x_1120_ = l_Lean_FVarId_getDecl___redArg(v_hFVarId_1067_, v___y_1073_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1122_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___x_1137_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = l_Lean_LocalDecl_type(v_a_1121_);
lean_dec(v_a_1121_);
lean_inc_ref(v___x_1122_);
v___x_1137_ = l_Lean_Meta_matchEq_x3f(v___x_1122_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1137_, 1);
if (lean_obj_tag(v_a_1138_) == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref(v___x_1122_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v___x_1139_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_1140_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1118_, v_mvarId_1066_, v___x_1139_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v___x_1140_;
}
else
{
lean_object* v_val_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1461_; 
v_val_1141_ = lean_ctor_get(v_a_1138_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_a_1138_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1143_ = v_a_1138_;
v_isShared_1144_ = v_isSharedCheck_1461_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_val_1141_);
lean_dec(v_a_1138_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1461_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_snd_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1459_; 
v_snd_1145_ = lean_ctor_get(v_val_1141_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_val_1141_);
if (v_isSharedCheck_1459_ == 0)
{
lean_object* v_unused_1460_; 
v_unused_1460_ = lean_ctor_get(v_val_1141_, 0);
lean_dec(v_unused_1460_);
v___x_1147_ = v_val_1141_;
v_isShared_1148_ = v_isSharedCheck_1459_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_snd_1145_);
lean_dec(v_val_1141_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1459_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v_fst_1149_; lean_object* v_snd_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1458_; 
v_fst_1149_ = lean_ctor_get(v_snd_1145_, 0);
v_snd_1150_ = lean_ctor_get(v_snd_1145_, 1);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_snd_1145_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1152_ = v_snd_1145_;
v_isShared_1153_ = v_isSharedCheck_1458_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snd_1150_);
lean_inc(v_fst_1149_);
lean_dec(v_snd_1145_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1458_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
uint8_t v___x_1154_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; uint8_t v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; uint8_t v_skip_1173_; lean_object* v___y_1182_; uint8_t v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; uint8_t v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; uint8_t v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; uint8_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; uint8_t v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; uint8_t v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1454_; 
v___x_1154_ = 1;
if (v_symm_1071_ == 0)
{
lean_inc(v_fst_1149_);
v___y_1454_ = v_fst_1149_;
goto v___jp_1453_;
}
else
{
lean_inc(v_snd_1150_);
v___y_1454_ = v_snd_1150_;
goto v___jp_1453_;
}
v___jp_1155_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___f_1179_; lean_object* v___x_1180_; 
v___x_1174_ = lean_box(v_clearH_1069_);
v___x_1175_ = lean_box(v_skip_1173_);
v___x_1176_ = lean_box(v___x_1154_);
v___x_1177_ = lean_box(v_symm_1071_);
v___x_1178_ = lean_box(v___y_1159_);
v___f_1179_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 24, 19);
lean_closure_set(v___f_1179_, 0, v___y_1169_);
lean_closure_set(v___f_1179_, 1, v_hFVarId_1067_);
lean_closure_set(v___f_1179_, 2, v___y_1162_);
lean_closure_set(v___f_1179_, 3, v___y_1161_);
lean_closure_set(v___f_1179_, 4, v_fvarSubst_1070_);
lean_closure_set(v___f_1179_, 5, v___x_1174_);
lean_closure_set(v___f_1179_, 6, v___y_1164_);
lean_closure_set(v___f_1179_, 7, v___y_1165_);
lean_closure_set(v___f_1179_, 8, v___y_1170_);
lean_closure_set(v___f_1179_, 9, v___x_1175_);
lean_closure_set(v___f_1179_, 10, v___x_1176_);
lean_closure_set(v___f_1179_, 11, v___y_1172_);
lean_closure_set(v___f_1179_, 12, v___y_1158_);
lean_closure_set(v___f_1179_, 13, v___y_1168_);
lean_closure_set(v___f_1179_, 14, v___y_1166_);
lean_closure_set(v___f_1179_, 15, v_a_1117_);
lean_closure_set(v___f_1179_, 16, v___x_1177_);
lean_closure_set(v___f_1179_, 17, v___x_1178_);
lean_closure_set(v___f_1179_, 18, v___y_1156_);
v___x_1180_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v___y_1167_, v___f_1179_, v___y_1157_, v___y_1171_, v___y_1160_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1157_);
return v___x_1180_;
}
v___jp_1181_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = lean_array_get(v___x_1068_, v___y_1189_, v___x_1198_);
lean_inc(v___x_1199_);
v___x_1200_ = l_Lean_mkFVar(v___x_1199_);
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = lean_array_get(v___x_1068_, v___y_1189_, v___x_1201_);
lean_dec_ref(v___y_1189_);
lean_inc(v___x_1202_);
v___x_1203_ = l_Lean_mkFVar(v___x_1202_);
if (v_tryToSkip_1072_ == 0)
{
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1190_);
v___y_1156_ = v___x_1201_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1184_;
v___y_1159_ = v___y_1183_;
v___y_1160_ = v___y_1196_;
v___y_1161_ = v___y_1185_;
v___y_1162_ = v___x_1203_;
v___y_1163_ = v___y_1197_;
v___y_1164_ = v___x_1200_;
v___y_1165_ = v___y_1182_;
v___y_1166_ = v___x_1199_;
v___y_1167_ = v___y_1192_;
v___y_1168_ = v___x_1202_;
v___y_1169_ = v___y_1186_;
v___y_1170_ = v___y_1187_;
v___y_1171_ = v___y_1195_;
v___y_1172_ = v___y_1188_;
v_skip_1173_ = v___y_1191_;
goto v___jp_1155_;
}
else
{
lean_object* v___x_1204_; uint8_t v___x_1205_; 
v___x_1204_ = lean_array_get_size(v___y_1193_);
lean_dec_ref(v___y_1193_);
v___x_1205_ = lean_nat_dec_eq(v___x_1204_, v___y_1190_);
lean_dec(v___y_1190_);
if (v___x_1205_ == 0)
{
v___y_1156_ = v___x_1201_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1184_;
v___y_1159_ = v___y_1183_;
v___y_1160_ = v___y_1196_;
v___y_1161_ = v___y_1185_;
v___y_1162_ = v___x_1203_;
v___y_1163_ = v___y_1197_;
v___y_1164_ = v___x_1200_;
v___y_1165_ = v___y_1182_;
v___y_1166_ = v___x_1199_;
v___y_1167_ = v___y_1192_;
v___y_1168_ = v___x_1202_;
v___y_1169_ = v___y_1186_;
v___y_1170_ = v___y_1187_;
v___y_1171_ = v___y_1195_;
v___y_1172_ = v___y_1188_;
v_skip_1173_ = v___y_1191_;
goto v___jp_1155_;
}
else
{
lean_object* v___x_1206_; 
lean_inc(v___y_1192_);
v___x_1206_ = l_Lean_MVarId_getType(v___y_1192_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; lean_object* v_a_1209_; uint8_t v___x_1210_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc_n(v_a_1207_, 2);
lean_dec_ref_known(v___x_1206_, 1);
lean_inc(v___x_1199_);
v___x_1208_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1207_, v___x_1199_, v___y_1195_);
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref(v___x_1208_);
v___x_1210_ = lean_unbox(v_a_1209_);
lean_dec(v_a_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v_a_1212_; uint8_t v___x_1213_; 
lean_inc(v___x_1202_);
v___x_1211_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1207_, v___x_1202_, v___y_1195_);
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref(v___x_1211_);
v___x_1213_ = lean_unbox(v_a_1212_);
lean_dec(v_a_1212_);
if (v___x_1213_ == 0)
{
lean_dec_ref(v___x_1203_);
lean_dec_ref(v___x_1200_);
lean_dec(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec(v___y_1182_);
lean_dec(v_a_1117_);
lean_dec(v_hFVarId_1067_);
v___y_1079_ = v___y_1197_;
v___y_1080_ = v___y_1194_;
v___y_1081_ = v___y_1196_;
v___y_1082_ = v___x_1199_;
v___y_1083_ = v___y_1192_;
v___y_1084_ = v___x_1202_;
v___y_1085_ = v___y_1195_;
goto v___jp_1078_;
}
else
{
v___y_1156_ = v___x_1201_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1184_;
v___y_1159_ = v___y_1183_;
v___y_1160_ = v___y_1196_;
v___y_1161_ = v___y_1185_;
v___y_1162_ = v___x_1203_;
v___y_1163_ = v___y_1197_;
v___y_1164_ = v___x_1200_;
v___y_1165_ = v___y_1182_;
v___y_1166_ = v___x_1199_;
v___y_1167_ = v___y_1192_;
v___y_1168_ = v___x_1202_;
v___y_1169_ = v___y_1186_;
v___y_1170_ = v___y_1187_;
v___y_1171_ = v___y_1195_;
v___y_1172_ = v___y_1188_;
v_skip_1173_ = v___y_1191_;
goto v___jp_1155_;
}
}
else
{
lean_dec(v_a_1207_);
v___y_1156_ = v___x_1201_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1184_;
v___y_1159_ = v___y_1183_;
v___y_1160_ = v___y_1196_;
v___y_1161_ = v___y_1185_;
v___y_1162_ = v___x_1203_;
v___y_1163_ = v___y_1197_;
v___y_1164_ = v___x_1200_;
v___y_1165_ = v___y_1182_;
v___y_1166_ = v___x_1199_;
v___y_1167_ = v___y_1192_;
v___y_1168_ = v___x_1202_;
v___y_1169_ = v___y_1186_;
v___y_1170_ = v___y_1187_;
v___y_1171_ = v___y_1195_;
v___y_1172_ = v___y_1188_;
v_skip_1173_ = v___y_1191_;
goto v___jp_1155_;
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec_ref(v___x_1203_);
lean_dec(v___x_1202_);
lean_dec_ref(v___x_1200_);
lean_dec(v___x_1199_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1192_);
lean_dec(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec(v___y_1182_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1214_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1206_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1206_);
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
}
}
v___jp_1222_:
{
lean_object* v___x_1240_; 
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1239_);
lean_inc_ref(v___y_1238_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
v___x_1240_ = lean_apply_5(v___y_1232_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, lean_box(0));
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; uint8_t v___x_1242_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v___x_1242_ = lean_unbox(v_a_1241_);
lean_dec(v_a_1241_);
if (v___x_1242_ == 0)
{
lean_dec(v___y_1231_);
lean_del_object(v___x_1152_);
lean_inc(v___y_1225_);
v___y_1182_ = v___y_1224_;
v___y_1183_ = v___y_1223_;
v___y_1184_ = v___y_1225_;
v___y_1185_ = v___y_1227_;
v___y_1186_ = v___y_1228_;
v___y_1187_ = v___y_1229_;
v___y_1188_ = v___y_1230_;
v___y_1189_ = v___y_1226_;
v___y_1190_ = v___y_1233_;
v___y_1191_ = v___y_1234_;
v___y_1192_ = v___y_1225_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1237_;
v___y_1196_ = v___y_1238_;
v___y_1197_ = v___y_1239_;
goto v___jp_1181_;
}
else
{
lean_object* v___x_1243_; size_t v_sz_1244_; size_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1243_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__11, &l_Lean_Meta_substCore___lam__3___closed__11_once, _init_l_Lean_Meta_substCore___lam__3___closed__11);
v_sz_1244_ = lean_array_size(v___y_1235_);
v___x_1245_ = ((size_t)0ULL);
v___x_1246_ = l_unsafeCast___redArg(v___y_1235_);
v___x_1247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_1244_, v___x_1245_, v___x_1246_);
v___x_1248_ = l_unsafeCast___redArg(v___x_1247_);
lean_dec_ref(v___x_1247_);
v___x_1249_ = lean_array_to_list(v___x_1248_);
v___x_1250_ = lean_box(0);
v___x_1251_ = l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(v___x_1249_, v___x_1250_);
v___x_1252_ = l_Lean_MessageData_ofList(v___x_1251_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 7);
lean_ctor_set(v___x_1152_, 1, v___x_1252_);
lean_ctor_set(v___x_1152_, 0, v___x_1243_);
v___x_1254_ = v___x_1152_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1231_, v___x_1254_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_dec_ref_known(v___x_1255_, 1);
lean_inc(v___y_1225_);
v___y_1182_ = v___y_1224_;
v___y_1183_ = v___y_1223_;
v___y_1184_ = v___y_1225_;
v___y_1185_ = v___y_1227_;
v___y_1186_ = v___y_1228_;
v___y_1187_ = v___y_1229_;
v___y_1188_ = v___y_1230_;
v___y_1189_ = v___y_1226_;
v___y_1190_ = v___y_1233_;
v___y_1191_ = v___y_1234_;
v___y_1192_ = v___y_1225_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1237_;
v___y_1196_ = v___y_1238_;
v___y_1197_ = v___y_1239_;
goto v___jp_1181_;
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1233_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
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
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1233_);
lean_dec(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec(v___y_1224_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1265_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1240_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1240_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
v___jp_1273_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_box(0);
lean_inc(v___y_1282_);
v___x_1289_ = l_Lean_Meta_introNCore(v___y_1276_, v___y_1282_, v___x_1288_, v___y_1283_, v___x_1154_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v_fst_1291_; lean_object* v_snd_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1321_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v_fst_1291_ = lean_ctor_get(v_a_1290_, 0);
v_snd_1292_ = lean_ctor_get(v_a_1290_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_a_1290_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1294_ = v_a_1290_;
v_isShared_1295_ = v_isSharedCheck_1321_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_snd_1292_);
lean_inc(v_fst_1291_);
lean_dec(v_a_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1321_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; 
lean_inc_ref(v___y_1280_);
lean_inc(v___y_1287_);
lean_inc_ref(v___y_1286_);
lean_inc(v___y_1285_);
lean_inc_ref(v___y_1284_);
v___x_1296_ = lean_apply_5(v___y_1280_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, lean_box(0));
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; uint8_t v___x_1298_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1298_ = lean_unbox(v_a_1297_);
lean_dec(v_a_1297_);
if (v___x_1298_ == 0)
{
lean_del_object(v___x_1294_);
lean_inc_ref(v___y_1277_);
v___y_1223_ = v___y_1274_;
v___y_1224_ = v___y_1275_;
v___y_1225_ = v_snd_1292_;
v___y_1226_ = v_fst_1291_;
v___y_1227_ = v___y_1277_;
v___y_1228_ = v___y_1278_;
v___y_1229_ = v___x_1288_;
v___y_1230_ = v___y_1279_;
v___y_1231_ = v___y_1281_;
v___y_1232_ = v___y_1280_;
v___y_1233_ = v___y_1282_;
v___y_1234_ = v___y_1283_;
v___y_1235_ = v___y_1277_;
v___y_1236_ = v___y_1284_;
v___y_1237_ = v___y_1285_;
v___y_1238_ = v___y_1286_;
v___y_1239_ = v___y_1287_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1299_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__13, &l_Lean_Meta_substCore___lam__3___closed__13_once, _init_l_Lean_Meta_substCore___lam__3___closed__13);
lean_inc(v_snd_1292_);
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v_snd_1292_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 7);
lean_ctor_set(v___x_1294_, 1, v___x_1300_);
lean_ctor_set(v___x_1294_, 0, v___x_1299_);
v___x_1302_ = v___x_1294_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1299_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; 
lean_inc(v___y_1281_);
v___x_1303_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1281_, v___x_1302_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_dec_ref_known(v___x_1303_, 1);
lean_inc_ref(v___y_1277_);
v___y_1223_ = v___y_1274_;
v___y_1224_ = v___y_1275_;
v___y_1225_ = v_snd_1292_;
v___y_1226_ = v_fst_1291_;
v___y_1227_ = v___y_1277_;
v___y_1228_ = v___y_1278_;
v___y_1229_ = v___x_1288_;
v___y_1230_ = v___y_1279_;
v___y_1231_ = v___y_1281_;
v___y_1232_ = v___y_1280_;
v___y_1233_ = v___y_1282_;
v___y_1234_ = v___y_1283_;
v___y_1235_ = v___y_1277_;
v___y_1236_ = v___y_1284_;
v___y_1237_ = v___y_1285_;
v___y_1238_ = v___y_1286_;
v___y_1239_ = v___y_1287_;
goto v___jp_1222_;
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
lean_dec(v_snd_1292_);
lean_dec(v_fst_1291_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1275_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_del_object(v___x_1294_);
lean_dec(v_snd_1292_);
lean_dec(v_fst_1291_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1275_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1313_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1296_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1296_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1275_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1322_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1289_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1289_);
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
v___jp_1330_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; lean_object* v___x_1345_; 
v___x_1340_ = lean_unsigned_to_nat(2u);
v___x_1341_ = lean_mk_empty_array_with_capacity(v___x_1340_);
v___x_1342_ = lean_array_push(v___x_1341_, v___y_1335_);
lean_inc(v_hFVarId_1067_);
v___x_1343_ = lean_array_push(v___x_1342_, v_hFVarId_1067_);
v___x_1344_ = 0;
v___x_1345_ = l_Lean_MVarId_revert(v_mvarId_1066_, v___x_1343_, v___x_1154_, v___x_1344_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v_fst_1347_; lean_object* v_snd_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1377_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
v_fst_1347_ = lean_ctor_get(v_a_1346_, 0);
v_snd_1348_ = lean_ctor_get(v_a_1346_, 1);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_a_1346_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1350_ = v_a_1346_;
v_isShared_1351_ = v_isSharedCheck_1377_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_snd_1348_);
lean_inc(v_fst_1347_);
lean_dec(v_a_1346_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1377_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; 
lean_inc_ref(v___y_1334_);
lean_inc(v___y_1339_);
lean_inc_ref(v___y_1338_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
v___x_1352_ = lean_apply_5(v___y_1334_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, lean_box(0));
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; uint8_t v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v___x_1352_, 1);
v___x_1354_ = lean_unbox(v_a_1353_);
lean_dec(v_a_1353_);
if (v___x_1354_ == 0)
{
lean_del_object(v___x_1350_);
v___y_1274_ = v___x_1344_;
v___y_1275_ = v___x_1340_;
v___y_1276_ = v_snd_1348_;
v___y_1277_ = v_fst_1347_;
v___y_1278_ = v___y_1331_;
v___y_1279_ = v___y_1332_;
v___y_1280_ = v___y_1334_;
v___y_1281_ = v___y_1333_;
v___y_1282_ = v___x_1340_;
v___y_1283_ = v___x_1344_;
v___y_1284_ = v___y_1336_;
v___y_1285_ = v___y_1337_;
v___y_1286_ = v___y_1338_;
v___y_1287_ = v___y_1339_;
goto v___jp_1273_;
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1355_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__15, &l_Lean_Meta_substCore___lam__3___closed__15_once, _init_l_Lean_Meta_substCore___lam__3___closed__15);
lean_inc(v_snd_1348_);
v___x_1356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1356_, 0, v_snd_1348_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 7);
lean_ctor_set(v___x_1350_, 1, v___x_1356_);
lean_ctor_set(v___x_1350_, 0, v___x_1355_);
v___x_1358_ = v___x_1350_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1355_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1359_; 
lean_inc(v___y_1333_);
v___x_1359_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1333_, v___x_1358_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_dec_ref_known(v___x_1359_, 1);
v___y_1274_ = v___x_1344_;
v___y_1275_ = v___x_1340_;
v___y_1276_ = v_snd_1348_;
v___y_1277_ = v_fst_1347_;
v___y_1278_ = v___y_1331_;
v___y_1279_ = v___y_1332_;
v___y_1280_ = v___y_1334_;
v___y_1281_ = v___y_1333_;
v___y_1282_ = v___x_1340_;
v___y_1283_ = v___x_1344_;
v___y_1284_ = v___y_1336_;
v___y_1285_ = v___y_1337_;
v___y_1286_ = v___y_1338_;
v___y_1287_ = v___y_1339_;
goto v___jp_1273_;
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec(v_snd_1348_);
lean_dec(v_fst_1347_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec(v___y_1331_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_del_object(v___x_1350_);
lean_dec(v_snd_1348_);
lean_dec(v_fst_1347_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec(v___y_1331_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1369_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1352_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1352_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec(v___y_1331_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
v_a_1378_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1345_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1345_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
v___jp_1386_:
{
lean_object* v___x_1396_; lean_object* v_a_1397_; uint8_t v___x_1398_; 
lean_inc(v___y_1387_);
lean_inc_ref(v___y_1389_);
v___x_1396_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v___y_1389_, v___y_1387_, v___y_1393_);
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref(v___x_1396_);
v___x_1398_ = lean_unbox(v_a_1397_);
lean_dec(v_a_1397_);
if (v___x_1398_ == 0)
{
lean_dec_ref(v___y_1391_);
lean_dec_ref(v___y_1389_);
lean_del_object(v___x_1147_);
lean_del_object(v___x_1143_);
lean_inc(v___y_1388_);
lean_inc(v___y_1387_);
v___y_1331_ = v___y_1387_;
v___y_1332_ = v___y_1388_;
v___y_1333_ = v___y_1388_;
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1387_;
v___y_1336_ = v___y_1392_;
v___y_1337_ = v___y_1393_;
v___y_1338_ = v___y_1394_;
v___y_1339_ = v___y_1395_;
goto v___jp_1330_;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1402_; 
v___x_1399_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_1400_ = l_Lean_MessageData_ofExpr(v___y_1391_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set_tag(v___x_1147_, 7);
lean_ctor_set(v___x_1147_, 1, v___x_1400_);
lean_ctor_set(v___x_1147_, 0, v___x_1399_);
v___x_1402_ = v___x_1147_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1399_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v___x_1400_);
v___x_1402_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1403_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__19, &l_Lean_Meta_substCore___lam__3___closed__19_once, _init_l_Lean_Meta_substCore___lam__3___closed__19);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l_Lean_indentExpr(v___y_1389_);
v___x_1406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1404_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1406_);
v___x_1408_ = v___x_1143_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1409_; 
lean_inc(v_mvarId_1066_);
v___x_1409_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1118_, v_mvarId_1066_, v___x_1408_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_dec_ref_known(v___x_1409_, 1);
lean_inc(v___y_1388_);
lean_inc(v___y_1387_);
v___y_1331_ = v___y_1387_;
v___y_1332_ = v___y_1388_;
v___y_1333_ = v___y_1388_;
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1387_;
v___y_1336_ = v___y_1392_;
v___y_1337_ = v___y_1393_;
v___y_1338_ = v___y_1394_;
v___y_1339_ = v___y_1395_;
goto v___jp_1330_;
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1388_);
lean_dec(v___y_1387_);
lean_del_object(v___x_1152_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
}
}
v___jp_1420_:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1422_, v___y_1074_);
if (lean_obj_tag(v___y_1421_) == 1)
{
lean_object* v_a_1424_; lean_object* v_fvarId_1425_; lean_object* v___x_1426_; lean_object* v___f_1427_; lean_object* v___x_1428_; lean_object* v_a_1429_; uint8_t v___x_1430_; 
lean_dec_ref(v___x_1122_);
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref(v___x_1423_);
v_fvarId_1425_ = lean_ctor_get(v___y_1421_, 0);
lean_inc(v_fvarId_1425_);
v___x_1426_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___f_1427_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__23));
v___x_1428_ = l_Lean_Meta_substCore___lam__2(v___x_1426_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref(v___x_1428_);
v___x_1430_ = lean_unbox(v_a_1429_);
lean_dec(v_a_1429_);
if (v___x_1430_ == 0)
{
v___y_1387_ = v_fvarId_1425_;
v___y_1388_ = v___x_1426_;
v___y_1389_ = v_a_1424_;
v___y_1390_ = v___f_1427_;
v___y_1391_ = v___y_1421_;
v___y_1392_ = v___y_1073_;
v___y_1393_ = v___y_1074_;
v___y_1394_ = v___y_1075_;
v___y_1395_ = v___y_1076_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1431_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__25, &l_Lean_Meta_substCore___lam__3___closed__25_once, _init_l_Lean_Meta_substCore___lam__3___closed__25);
lean_inc_ref(v___y_1421_);
v___x_1432_ = l_Lean_MessageData_ofExpr(v___y_1421_);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__27, &l_Lean_Meta_substCore___lam__3___closed__27_once, _init_l_Lean_Meta_substCore___lam__3___closed__27);
v___x_1435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
lean_inc(v_fvarId_1425_);
v___x_1436_ = l_Lean_MessageData_ofName(v_fvarId_1425_);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__29, &l_Lean_Meta_substCore___lam__3___closed__29_once, _init_l_Lean_Meta_substCore___lam__3___closed__29);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
lean_inc(v_a_1424_);
v___x_1440_ = l_Lean_MessageData_ofExpr(v_a_1424_);
v___x_1441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1439_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_1426_, v___x_1441_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_dec_ref_known(v___x_1442_, 1);
v___y_1387_ = v_fvarId_1425_;
v___y_1388_ = v___x_1426_;
v___y_1389_ = v_a_1424_;
v___y_1390_ = v___f_1427_;
v___y_1391_ = v___y_1421_;
v___y_1392_ = v___y_1073_;
v___y_1393_ = v___y_1074_;
v___y_1394_ = v___y_1075_;
v___y_1395_ = v___y_1076_;
goto v___jp_1386_;
}
else
{
lean_object* v_a_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1450_; 
lean_dec(v_fvarId_1425_);
lean_dec_ref_known(v___y_1421_, 1);
lean_dec(v_a_1424_);
lean_del_object(v___x_1152_);
lean_del_object(v___x_1147_);
lean_del_object(v___x_1143_);
lean_dec(v_a_1117_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1445_ = v___x_1442_;
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_a_1443_);
lean_dec(v___x_1442_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1450_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_a_1443_);
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
}
else
{
lean_dec_ref(v___x_1423_);
lean_del_object(v___x_1152_);
lean_del_object(v___x_1147_);
lean_del_object(v___x_1143_);
lean_dec(v_a_1117_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
if (v_symm_1071_ == 0)
{
lean_object* v___x_1451_; 
v___x_1451_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__30));
v___y_1124_ = v___y_1421_;
v___y_1125_ = v___x_1451_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__31));
v___y_1124_ = v___y_1421_;
v___y_1125_ = v___x_1452_;
goto v___jp_1123_;
}
}
}
v___jp_1453_:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1454_, v___y_1074_);
if (v_symm_1071_ == 0)
{
lean_object* v_a_1456_; 
lean_dec(v_fst_1149_);
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref(v___x_1455_);
v___y_1421_ = v_a_1456_;
v___y_1422_ = v_snd_1150_;
goto v___jp_1420_;
}
else
{
lean_object* v_a_1457_; 
lean_dec(v_snd_1150_);
v_a_1457_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1457_);
lean_dec_ref(v___x_1455_);
v___y_1421_ = v_a_1457_;
v___y_1422_ = v_fst_1149_;
goto v___jp_1420_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v___x_1122_);
lean_dec(v_a_1117_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1462_ = lean_ctor_get(v___x_1137_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1137_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1137_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
v___jp_1123_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1126_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__3, &l_Lean_Meta_substCore___lam__3___closed__3_once, _init_l_Lean_Meta_substCore___lam__3___closed__3);
lean_inc_ref(v___y_1125_);
v___x_1127_ = l_Lean_stringToMessageData(v___y_1125_);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = l_Lean_indentExpr(v___x_1122_);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__5, &l_Lean_Meta_substCore___lam__3___closed__5_once, _init_l_Lean_Meta_substCore___lam__3___closed__5);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = l_Lean_indentExpr(v___y_1124_);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
v___x_1136_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1118_, v_mvarId_1066_, v___x_1135_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v___x_1136_;
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec(v_a_1117_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1470_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1120_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1120_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v_a_1117_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1478_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1119_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1119_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_fvarSubst_1070_);
lean_dec(v_hFVarId_1067_);
lean_dec(v_mvarId_1066_);
v_a_1486_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1116_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1116_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
v___jp_1078_:
{
if (v_clearH_1069_ == 0)
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
lean_dec(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v_fvarSubst_1070_);
lean_ctor_set(v___x_1086_, 1, v___y_1083_);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
else
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lean_MVarId_clear(v___y_1083_, v___y_1084_, v___y_1080_, v___y_1085_, v___y_1081_, v___y_1079_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___x_1090_ = l_Lean_MVarId_clear(v_a_1089_, v___y_1082_, v___y_1080_, v___y_1085_, v___y_1081_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1080_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1099_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_fvarSubst_1070_);
lean_ctor_set(v___x_1095_, 1, v_a_1091_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1095_);
v___x_1097_ = v___x_1093_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
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
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec(v_fvarSubst_1070_);
v_a_1100_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1090_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1090_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v___y_1085_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec(v_fvarSubst_1070_);
v_a_1108_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1088_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1088_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object* v_mvarId_1494_, lean_object* v_hFVarId_1495_, lean_object* v___x_1496_, lean_object* v_clearH_1497_, lean_object* v_fvarSubst_1498_, lean_object* v_symm_1499_, lean_object* v_tryToSkip_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
uint8_t v_clearH_boxed_1506_; uint8_t v_symm_boxed_1507_; uint8_t v_tryToSkip_boxed_1508_; lean_object* v_res_1509_; 
v_clearH_boxed_1506_ = lean_unbox(v_clearH_1497_);
v_symm_boxed_1507_ = lean_unbox(v_symm_1499_);
v_tryToSkip_boxed_1508_ = lean_unbox(v_tryToSkip_1500_);
v_res_1509_ = l_Lean_Meta_substCore___lam__3(v_mvarId_1494_, v_hFVarId_1495_, v___x_1496_, v_clearH_boxed_1506_, v_fvarSubst_1498_, v_symm_boxed_1507_, v_tryToSkip_boxed_1508_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___x_1496_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* v_mvarId_1510_, lean_object* v_hFVarId_1511_, uint8_t v_symm_1512_, lean_object* v_fvarSubst_1513_, uint8_t v_clearH_1514_, uint8_t v_tryToSkip_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; 
v___x_1521_ = l_Lean_instInhabitedFVarId_default;
v___x_1522_ = lean_box(v_clearH_1514_);
v___x_1523_ = lean_box(v_symm_1512_);
v___x_1524_ = lean_box(v_tryToSkip_1515_);
lean_inc(v_mvarId_1510_);
v___f_1525_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__3___boxed), 12, 7);
lean_closure_set(v___f_1525_, 0, v_mvarId_1510_);
lean_closure_set(v___f_1525_, 1, v_hFVarId_1511_);
lean_closure_set(v___f_1525_, 2, v___x_1521_);
lean_closure_set(v___f_1525_, 3, v___x_1522_);
lean_closure_set(v___f_1525_, 4, v_fvarSubst_1513_);
lean_closure_set(v___f_1525_, 5, v___x_1523_);
lean_closure_set(v___f_1525_, 6, v___x_1524_);
v___x_1526_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1510_, v___f_1525_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* v_mvarId_1527_, lean_object* v_hFVarId_1528_, lean_object* v_symm_1529_, lean_object* v_fvarSubst_1530_, lean_object* v_clearH_1531_, lean_object* v_tryToSkip_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_){
_start:
{
uint8_t v_symm_boxed_1538_; uint8_t v_clearH_boxed_1539_; uint8_t v_tryToSkip_boxed_1540_; lean_object* v_res_1541_; 
v_symm_boxed_1538_ = lean_unbox(v_symm_1529_);
v_clearH_boxed_1539_ = lean_unbox(v_clearH_1531_);
v_tryToSkip_boxed_1540_ = lean_unbox(v_tryToSkip_1532_);
v_res_1541_ = l_Lean_Meta_substCore(v_mvarId_1527_, v_hFVarId_1528_, v_symm_boxed_1538_, v_fvarSubst_1530_, v_clearH_boxed_1539_, v_tryToSkip_boxed_1540_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
lean_dec(v_a_1536_);
lean_dec_ref(v_a_1535_);
lean_dec(v_a_1534_);
lean_dec_ref(v_a_1533_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(lean_object* v_fst_1542_, lean_object* v_fst_1543_, lean_object* v_n_1544_, lean_object* v_i_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_1542_, v_fst_1543_, v_n_1544_, v_i_1545_, v_a_1547_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___boxed(lean_object* v_fst_1554_, lean_object* v_fst_1555_, lean_object* v_n_1556_, lean_object* v_i_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(v_fst_1554_, v_fst_1555_, v_n_1556_, v_i_1557_, v_a_1558_, v_a_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v_n_1556_);
lean_dec_ref(v_fst_1555_);
lean_dec_ref(v_fst_1554_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(lean_object* v_mvarId_1566_, lean_object* v_val_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_mvarId_1566_, v_val_1567_, v___y_1569_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___boxed(lean_object* v_mvarId_1574_, lean_object* v_val_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(v_mvarId_1574_, v_val_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(lean_object* v_00_u03b1_1582_, lean_object* v_name_1583_, uint8_t v_bi_1584_, lean_object* v_type_1585_, lean_object* v_k_1586_, uint8_t v_kind_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_1583_, v_bi_1584_, v_type_1585_, v_k_1586_, v_kind_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1594_, lean_object* v_name_1595_, lean_object* v_bi_1596_, lean_object* v_type_1597_, lean_object* v_k_1598_, lean_object* v_kind_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
uint8_t v_bi_boxed_1605_; uint8_t v_kind_boxed_1606_; lean_object* v_res_1607_; 
v_bi_boxed_1605_ = lean_unbox(v_bi_1596_);
v_kind_boxed_1606_ = lean_unbox(v_kind_1599_);
v_res_1607_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(v_00_u03b1_1594_, v_name_1595_, v_bi_boxed_1605_, v_type_1597_, v_k_1598_, v_kind_boxed_1606_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(lean_object* v_00_u03b1_1608_, lean_object* v_name_1609_, lean_object* v_type_1610_, lean_object* v_k_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v_name_1609_, v_type_1610_, v_k_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___boxed(lean_object* v_00_u03b1_1618_, lean_object* v_name_1619_, lean_object* v_type_1620_, lean_object* v_k_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(v_00_u03b1_1618_, v_name_1619_, v_type_1620_, v_k_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5(lean_object* v_00_u03b2_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(v_x_1629_, v_x_1630_, v_x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(lean_object* v_00_u03b2_1633_, lean_object* v_x_1634_, size_t v_x_1635_, size_t v_x_1636_, lean_object* v_x_1637_, lean_object* v_x_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_1634_, v_x_1635_, v_x_1636_, v_x_1637_, v_x_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1640_, lean_object* v_x_1641_, lean_object* v_x_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_, lean_object* v_x_1645_){
_start:
{
size_t v_x_29655__boxed_1646_; size_t v_x_29656__boxed_1647_; lean_object* v_res_1648_; 
v_x_29655__boxed_1646_ = lean_unbox_usize(v_x_1642_);
lean_dec(v_x_1642_);
v_x_29656__boxed_1647_ = lean_unbox_usize(v_x_1643_);
lean_dec(v_x_1643_);
v_res_1648_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(v_00_u03b2_1640_, v_x_1641_, v_x_29655__boxed_1646_, v_x_29656__boxed_1647_, v_x_1644_, v_x_1645_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13(lean_object* v_00_u03b2_1649_, lean_object* v_n_1650_, lean_object* v_k_1651_, lean_object* v_v_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(v_n_1650_, v_k_1651_, v_v_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1654_, size_t v_depth_1655_, lean_object* v_keys_1656_, lean_object* v_vals_1657_, lean_object* v_heq_1658_, lean_object* v_i_1659_, lean_object* v_entries_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_depth_1655_, v_keys_1656_, v_vals_1657_, v_i_1659_, v_entries_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1662_, lean_object* v_depth_1663_, lean_object* v_keys_1664_, lean_object* v_vals_1665_, lean_object* v_heq_1666_, lean_object* v_i_1667_, lean_object* v_entries_1668_){
_start:
{
size_t v_depth_boxed_1669_; lean_object* v_res_1670_; 
v_depth_boxed_1669_ = lean_unbox_usize(v_depth_1663_);
lean_dec(v_depth_1663_);
v_res_1670_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(v_00_u03b2_1662_, v_depth_boxed_1669_, v_keys_1664_, v_vals_1665_, v_heq_1666_, v_i_1667_, v_entries_1668_);
lean_dec_ref(v_vals_1665_);
lean_dec_ref(v_keys_1664_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14(lean_object* v_00_u03b2_1671_, lean_object* v_x_1672_, lean_object* v_x_1673_, lean_object* v_x_1674_, lean_object* v_x_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(v_x_1672_, v_x_1673_, v_x_1674_, v_x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* v_fvarId_1680_, lean_object* v_mvarId_1681_, uint8_t v_tryToClear_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v___x_1688_; 
lean_inc(v_fvarId_1680_);
v___x_1688_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1680_, v___y_1683_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v___x_1690_ = l_Lean_LocalDecl_type(v_a_1689_);
lean_inc(v___y_1686_);
lean_inc_ref(v___y_1685_);
lean_inc(v___y_1684_);
lean_inc_ref(v___y_1683_);
v___x_1691_ = lean_whnf(v___x_1690_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1776_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1694_ = v___x_1691_;
v_isShared_1695_ = v_isSharedCheck_1776_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1691_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1776_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1696_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_1697_ = lean_unsigned_to_nat(4u);
v___x_1698_ = l_Lean_Expr_isAppOfArity(v_a_1692_, v___x_1696_, v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
lean_dec(v_a_1692_);
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v_fvarId_1680_);
lean_ctor_set(v___x_1699_, 1, v_mvarId_1681_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1699_);
v___x_1701_ = v___x_1694_;
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
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
lean_del_object(v___x_1694_);
v___x_1703_ = l_Lean_Expr_appFn_x21(v_a_1692_);
v___x_1704_ = l_Lean_Expr_appFn_x21(v___x_1703_);
v___x_1705_ = l_Lean_Expr_appFn_x21(v___x_1704_);
v___x_1706_ = l_Lean_Expr_appArg_x21(v___x_1705_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_Lean_Expr_appArg_x21(v___x_1704_);
lean_dec_ref(v___x_1704_);
v___x_1708_ = l_Lean_Expr_appArg_x21(v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1709_ = l_Lean_Expr_appArg_x21(v_a_1692_);
lean_dec(v_a_1692_);
v___x_1710_ = l_Lean_Meta_isExprDefEq(v___x_1706_, v___x_1708_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1767_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1767_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1767_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
uint8_t v___x_1715_; 
v___x_1715_ = lean_unbox(v_a_1711_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
lean_dec(v_a_1711_);
lean_dec_ref(v___x_1709_);
lean_dec_ref(v___x_1707_);
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
v___x_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1716_, 0, v_fvarId_1680_);
lean_ctor_set(v___x_1716_, 1, v_mvarId_1681_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1716_);
v___x_1718_ = v___x_1713_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
lean_del_object(v___x_1713_);
lean_inc(v_fvarId_1680_);
v___x_1720_ = l_Lean_mkFVar(v_fvarId_1680_);
v___x_1721_ = l_Lean_Meta_mkEqOfHEq(v___x_1720_, v___x_1698_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1723_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref_known(v___x_1721_, 1);
v___x_1723_ = l_Lean_Meta_mkEq(v___x_1707_, v___x_1709_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = l_Lean_LocalDecl_userName(v_a_1689_);
lean_dec(v_a_1689_);
v___x_1726_ = l_Lean_MVarId_assert(v_mvarId_1681_, v___x_1725_, v_a_1724_, v_a_1722_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1726_) == 0)
{
if (v_tryToClear_1682_ == 0)
{
lean_object* v_a_1727_; uint8_t v___x_1728_; lean_object* v___x_1729_; 
lean_dec(v_fvarId_1680_);
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = lean_unbox(v_a_1711_);
lean_dec(v_a_1711_);
v___x_1729_ = l_Lean_Meta_intro1Core(v_a_1727_, v___x_1728_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
return v___x_1729_;
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1731_; 
v_a_1730_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1731_ = l_Lean_MVarId_tryClear(v_a_1730_, v_fvarId_1680_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; uint8_t v___x_1733_; lean_object* v___x_1734_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1733_ = lean_unbox(v_a_1711_);
lean_dec(v_a_1711_);
v___x_1734_ = l_Lean_Meta_intro1Core(v_a_1732_, v___x_1733_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
return v___x_1734_;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
lean_dec(v_a_1711_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
v_a_1735_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v___x_1731_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1731_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec(v_a_1711_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_fvarId_1680_);
v_a_1743_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1726_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1726_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
lean_dec(v_a_1722_);
lean_dec(v_a_1711_);
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_mvarId_1681_);
lean_dec(v_fvarId_1680_);
v_a_1751_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1723_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1723_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v_a_1711_);
lean_dec_ref(v___x_1709_);
lean_dec_ref(v___x_1707_);
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_mvarId_1681_);
lean_dec(v_fvarId_1680_);
v_a_1759_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1721_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1721_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec_ref(v___x_1709_);
lean_dec_ref(v___x_1707_);
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_mvarId_1681_);
lean_dec(v_fvarId_1680_);
v_a_1768_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1710_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1710_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_a_1689_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_mvarId_1681_);
lean_dec(v_fvarId_1680_);
v_a_1777_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1691_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1691_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_mvarId_1681_);
lean_dec(v_fvarId_1680_);
v_a_1785_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1688_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1688_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* v_fvarId_1793_, lean_object* v_mvarId_1794_, lean_object* v_tryToClear_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
uint8_t v_tryToClear_boxed_1801_; lean_object* v_res_1802_; 
v_tryToClear_boxed_1801_ = lean_unbox(v_tryToClear_1795_);
v_res_1802_ = l_Lean_Meta_heqToEq___lam__0(v_fvarId_1793_, v_mvarId_1794_, v_tryToClear_boxed_1801_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* v_mvarId_1803_, lean_object* v_fvarId_1804_, uint8_t v_tryToClear_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___f_1812_; lean_object* v___x_1813_; 
v___x_1811_ = lean_box(v_tryToClear_1805_);
lean_inc(v_mvarId_1803_);
v___f_1812_ = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1812_, 0, v_fvarId_1804_);
lean_closure_set(v___f_1812_, 1, v_mvarId_1803_);
lean_closure_set(v___f_1812_, 2, v___x_1811_);
v___x_1813_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1803_, v___f_1812_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* v_mvarId_1814_, lean_object* v_fvarId_1815_, lean_object* v_tryToClear_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
uint8_t v_tryToClear_boxed_1822_; lean_object* v_res_1823_; 
v_tryToClear_boxed_1822_ = lean_unbox(v_tryToClear_1816_);
v_res_1823_ = l_Lean_Meta_heqToEq(v_mvarId_1814_, v_fvarId_1815_, v_tryToClear_boxed_1822_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1827_, lean_object* v_as_1828_, size_t v_sz_1829_, size_t v_i_1830_, lean_object* v_b_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_a_1838_; uint8_t v___x_1842_; 
v___x_1842_ = lean_usize_dec_lt(v_i_1830_, v_sz_1829_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; 
lean_dec(v_x_1827_);
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_b_1831_);
return v___x_1843_;
}
else
{
lean_object* v___x_1844_; lean_object* v_a_1846_; lean_object* v___x_1850_; lean_object* v_a_1851_; 
lean_dec_ref(v_b_1831_);
v___x_1844_ = lean_box(0);
v___x_1850_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1851_ = lean_array_uget(v_as_1828_, v_i_1830_);
if (lean_obj_tag(v_a_1851_) == 0)
{
v_a_1838_ = v___x_1850_;
goto v___jp_1837_;
}
else
{
lean_object* v_val_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1939_; 
v_val_1852_ = lean_ctor_get(v_a_1851_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v_a_1851_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1854_ = v_a_1851_;
v_isShared_1855_ = v_isSharedCheck_1939_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_val_1852_);
lean_dec(v_a_1851_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1939_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
uint8_t v___x_1863_; 
v___x_1863_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1852_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = l_Lean_LocalDecl_type(v_val_1852_);
v___x_1870_ = l_Lean_Meta_matchEq_x3f(v___x_1869_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1870_, 1);
if (lean_obj_tag(v_a_1871_) == 1)
{
lean_object* v_val_1872_; lean_object* v_snd_1873_; lean_object* v_fst_1874_; lean_object* v_snd_1875_; lean_object* v___x_1876_; 
v_val_1872_ = lean_ctor_get(v_a_1871_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v_a_1871_, 1);
v_snd_1873_ = lean_ctor_get(v_val_1872_, 1);
lean_inc(v_snd_1873_);
lean_dec(v_val_1872_);
v_fst_1874_ = lean_ctor_get(v_snd_1873_, 0);
lean_inc(v_fst_1874_);
v_snd_1875_ = lean_ctor_get(v_snd_1873_, 1);
lean_inc(v_snd_1875_);
lean_dec(v_snd_1873_);
v___x_1876_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1874_, v___y_1833_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1878_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
v___x_1878_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1875_, v___y_1833_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___y_1881_; uint8_t v___y_1882_; lean_object* v___y_1895_; uint8_t v___y_1900_; uint8_t v___x_1912_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1879_);
lean_dec_ref_known(v___x_1878_, 1);
v___x_1912_ = l_Lean_Expr_isFVar(v_a_1879_);
if (v___x_1912_ == 0)
{
v___y_1900_ = v___x_1863_;
goto v___jp_1899_;
}
else
{
lean_object* v___x_1913_; uint8_t v___x_1914_; 
v___x_1913_ = l_Lean_Expr_fvarId_x21(v_a_1879_);
v___x_1914_ = l_Lean_instBEqFVarId_beq(v___x_1913_, v_x_1827_);
lean_dec(v___x_1913_);
v___y_1900_ = v___x_1914_;
goto v___jp_1899_;
}
v___jp_1880_:
{
if (v___y_1882_ == 0)
{
lean_dec(v_a_1879_);
lean_dec(v_val_1852_);
v_a_1838_ = v___x_1850_;
goto v___jp_1837_;
}
else
{
lean_object* v___x_1883_; 
lean_inc(v_x_1827_);
v___x_1883_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1879_, v_x_1827_, v___y_1881_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; uint8_t v___x_1885_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = lean_unbox(v_a_1884_);
lean_dec(v_a_1884_);
if (v___x_1885_ == 0)
{
lean_dec(v_x_1827_);
goto v___jp_1864_;
}
else
{
if (v___x_1863_ == 0)
{
lean_dec(v_val_1852_);
v_a_1838_ = v___x_1850_;
goto v___jp_1837_;
}
else
{
lean_dec(v_x_1827_);
goto v___jp_1864_;
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_val_1852_);
lean_dec(v_x_1827_);
v_a_1886_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1883_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1883_);
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
}
v___jp_1894_:
{
uint8_t v___x_1896_; 
v___x_1896_ = l_Lean_Expr_isFVar(v_a_1877_);
if (v___x_1896_ == 0)
{
lean_dec(v_a_1877_);
v___y_1881_ = v___y_1895_;
v___y_1882_ = v___x_1863_;
goto v___jp_1880_;
}
else
{
lean_object* v___x_1897_; uint8_t v___x_1898_; 
v___x_1897_ = l_Lean_Expr_fvarId_x21(v_a_1877_);
lean_dec(v_a_1877_);
v___x_1898_ = l_Lean_instBEqFVarId_beq(v___x_1897_, v_x_1827_);
lean_dec(v___x_1897_);
v___y_1881_ = v___y_1895_;
v___y_1882_ = v___x_1898_;
goto v___jp_1880_;
}
}
v___jp_1899_:
{
if (v___y_1900_ == 0)
{
lean_del_object(v___x_1854_);
v___y_1895_ = v___y_1833_;
goto v___jp_1894_;
}
else
{
lean_object* v___x_1901_; 
lean_inc(v_x_1827_);
lean_inc(v_a_1877_);
v___x_1901_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1877_, v_x_1827_, v___y_1833_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; uint8_t v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = lean_unbox(v_a_1902_);
lean_dec(v_a_1902_);
if (v___x_1903_ == 0)
{
lean_dec(v_a_1879_);
lean_dec(v_a_1877_);
lean_dec(v_x_1827_);
goto v___jp_1856_;
}
else
{
if (v___x_1863_ == 0)
{
lean_del_object(v___x_1854_);
v___y_1895_ = v___y_1833_;
goto v___jp_1894_;
}
else
{
lean_dec(v_a_1879_);
lean_dec(v_a_1877_);
lean_dec(v_x_1827_);
goto v___jp_1856_;
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_a_1879_);
lean_dec(v_a_1877_);
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
lean_dec(v_x_1827_);
v_a_1904_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1901_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1901_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_dec(v_a_1877_);
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
lean_dec(v_x_1827_);
v_a_1915_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1878_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1878_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec(v_snd_1875_);
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
lean_dec(v_x_1827_);
v_a_1923_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1876_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1876_);
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
lean_dec(v_a_1871_);
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
v_a_1838_ = v___x_1850_;
goto v___jp_1837_;
}
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
lean_dec(v_x_1827_);
v_a_1931_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1870_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1870_);
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
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
v_a_1838_ = v___x_1850_;
goto v___jp_1837_;
}
v___jp_1856_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1857_ = l_Lean_LocalDecl_fvarId(v_val_1852_);
lean_dec(v_val_1852_);
v___x_1858_ = lean_box(v___x_1842_);
v___x_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1857_);
lean_ctor_set(v___x_1859_, 1, v___x_1858_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v___x_1859_);
v___x_1861_ = v___x_1854_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
v_a_1846_ = v___x_1861_;
goto v___jp_1845_;
}
}
v___jp_1864_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1865_ = l_Lean_LocalDecl_fvarId(v_val_1852_);
lean_dec(v_val_1852_);
v___x_1866_ = lean_box(v___x_1863_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1865_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
v_a_1846_ = v___x_1868_;
goto v___jp_1845_;
}
}
}
v___jp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_a_1846_);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v___x_1844_);
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
}
v___jp_1837_:
{
size_t v___x_1839_; size_t v___x_1840_; 
v___x_1839_ = ((size_t)1ULL);
v___x_1840_ = lean_usize_add(v_i_1830_, v___x_1839_);
lean_inc_ref(v_a_1838_);
v_i_1830_ = v___x_1840_;
v_b_1831_ = v_a_1838_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_1940_, lean_object* v_as_1941_, lean_object* v_sz_1942_, lean_object* v_i_1943_, lean_object* v_b_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
size_t v_sz_boxed_1950_; size_t v_i_boxed_1951_; lean_object* v_res_1952_; 
v_sz_boxed_1950_ = lean_unbox_usize(v_sz_1942_);
lean_dec(v_sz_1942_);
v_i_boxed_1951_ = lean_unbox_usize(v_i_1943_);
lean_dec(v_i_1943_);
v_res_1952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1940_, v_as_1941_, v_sz_boxed_1950_, v_i_boxed_1951_, v_b_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec_ref(v_as_1941_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object* v_x_1953_, lean_object* v_as_1954_, size_t v_sz_1955_, size_t v_i_1956_, lean_object* v_b_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_a_1964_; uint8_t v___x_1968_; 
v___x_1968_ = lean_usize_dec_lt(v_i_1956_, v_sz_1955_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; 
lean_dec(v_x_1953_);
v___x_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1969_, 0, v_b_1957_);
return v___x_1969_;
}
else
{
lean_object* v___x_1970_; lean_object* v_a_1972_; lean_object* v___x_1976_; lean_object* v_a_1977_; 
lean_dec_ref(v_b_1957_);
v___x_1970_ = lean_box(0);
v___x_1976_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1977_ = lean_array_uget(v_as_1954_, v_i_1956_);
if (lean_obj_tag(v_a_1977_) == 0)
{
v_a_1964_ = v___x_1976_;
goto v___jp_1963_;
}
else
{
lean_object* v_val_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_2065_; 
v_val_1978_ = lean_ctor_get(v_a_1977_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_a_1977_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_1980_ = v_a_1977_;
v_isShared_1981_ = v_isSharedCheck_2065_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_val_1978_);
lean_dec(v_a_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_2065_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
uint8_t v___x_1989_; 
v___x_1989_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1978_);
if (v___x_1989_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = l_Lean_LocalDecl_type(v_val_1978_);
v___x_1996_ = l_Lean_Meta_matchEq_x3f(v___x_1995_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
if (lean_obj_tag(v_a_1997_) == 1)
{
lean_object* v_val_1998_; lean_object* v_snd_1999_; lean_object* v_fst_2000_; lean_object* v_snd_2001_; lean_object* v___x_2002_; 
v_val_1998_ = lean_ctor_get(v_a_1997_, 0);
lean_inc(v_val_1998_);
lean_dec_ref_known(v_a_1997_, 1);
v_snd_1999_ = lean_ctor_get(v_val_1998_, 1);
lean_inc(v_snd_1999_);
lean_dec(v_val_1998_);
v_fst_2000_ = lean_ctor_get(v_snd_1999_, 0);
lean_inc(v_fst_2000_);
v_snd_2001_ = lean_ctor_get(v_snd_1999_, 1);
lean_inc(v_snd_2001_);
lean_dec(v_snd_1999_);
v___x_2002_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_2000_, v___y_1959_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2004_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_a_2003_);
lean_dec_ref_known(v___x_2002_, 1);
v___x_2004_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_2001_, v___y_1959_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___y_2007_; uint8_t v___y_2008_; lean_object* v___y_2021_; uint8_t v___y_2026_; uint8_t v___x_2038_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
lean_inc(v_a_2005_);
lean_dec_ref_known(v___x_2004_, 1);
v___x_2038_ = l_Lean_Expr_isFVar(v_a_2005_);
if (v___x_2038_ == 0)
{
v___y_2026_ = v___x_1989_;
goto v___jp_2025_;
}
else
{
lean_object* v___x_2039_; uint8_t v___x_2040_; 
v___x_2039_ = l_Lean_Expr_fvarId_x21(v_a_2005_);
v___x_2040_ = l_Lean_instBEqFVarId_beq(v___x_2039_, v_x_1953_);
lean_dec(v___x_2039_);
v___y_2026_ = v___x_2040_;
goto v___jp_2025_;
}
v___jp_2006_:
{
if (v___y_2008_ == 0)
{
lean_dec(v_a_2005_);
lean_dec(v_val_1978_);
v_a_1964_ = v___x_1976_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_2009_; 
lean_inc(v_x_1953_);
v___x_2009_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_2005_, v_x_1953_, v___y_2007_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; uint8_t v___x_2011_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
v___x_2011_ = lean_unbox(v_a_2010_);
lean_dec(v_a_2010_);
if (v___x_2011_ == 0)
{
lean_dec(v_x_1953_);
goto v___jp_1990_;
}
else
{
if (v___x_1989_ == 0)
{
lean_dec(v_val_1978_);
v_a_1964_ = v___x_1976_;
goto v___jp_1963_;
}
else
{
lean_dec(v_x_1953_);
goto v___jp_1990_;
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec(v_val_1978_);
lean_dec(v_x_1953_);
v_a_2012_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_2009_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_2009_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
v___jp_2020_:
{
uint8_t v___x_2022_; 
v___x_2022_ = l_Lean_Expr_isFVar(v_a_2003_);
if (v___x_2022_ == 0)
{
lean_dec(v_a_2003_);
v___y_2007_ = v___y_2021_;
v___y_2008_ = v___x_1989_;
goto v___jp_2006_;
}
else
{
lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = l_Lean_Expr_fvarId_x21(v_a_2003_);
lean_dec(v_a_2003_);
v___x_2024_ = l_Lean_instBEqFVarId_beq(v___x_2023_, v_x_1953_);
lean_dec(v___x_2023_);
v___y_2007_ = v___y_2021_;
v___y_2008_ = v___x_2024_;
goto v___jp_2006_;
}
}
v___jp_2025_:
{
if (v___y_2026_ == 0)
{
lean_del_object(v___x_1980_);
v___y_2021_ = v___y_1959_;
goto v___jp_2020_;
}
else
{
lean_object* v___x_2027_; 
lean_inc(v_x_1953_);
lean_inc(v_a_2003_);
v___x_2027_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_2003_, v_x_1953_, v___y_1959_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; uint8_t v___x_2029_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v___x_2027_, 1);
v___x_2029_ = lean_unbox(v_a_2028_);
lean_dec(v_a_2028_);
if (v___x_2029_ == 0)
{
lean_dec(v_a_2005_);
lean_dec(v_a_2003_);
lean_dec(v_x_1953_);
goto v___jp_1982_;
}
else
{
if (v___x_1989_ == 0)
{
lean_del_object(v___x_1980_);
v___y_2021_ = v___y_1959_;
goto v___jp_2020_;
}
else
{
lean_dec(v_a_2005_);
lean_dec(v_a_2003_);
lean_dec(v_x_1953_);
goto v___jp_1982_;
}
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_a_2005_);
lean_dec(v_a_2003_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
lean_dec(v_x_1953_);
v_a_2030_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2027_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2027_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_dec(v_a_2003_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
lean_dec(v_x_1953_);
v_a_2041_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2004_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2004_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec(v_snd_2001_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
lean_dec(v_x_1953_);
v_a_2049_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2002_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2002_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
else
{
lean_dec(v_a_1997_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
v_a_1964_ = v___x_1976_;
goto v___jp_1963_;
}
}
else
{
lean_object* v_a_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
lean_dec(v_x_1953_);
v_a_2057_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2059_ = v___x_1996_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_a_2057_);
lean_dec(v___x_1996_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2057_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
else
{
lean_del_object(v___x_1980_);
lean_dec(v_val_1978_);
v_a_1964_ = v___x_1976_;
goto v___jp_1963_;
}
v___jp_1982_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1983_ = l_Lean_LocalDecl_fvarId(v_val_1978_);
lean_dec(v_val_1978_);
v___x_1984_ = lean_box(v___x_1968_);
v___x_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1983_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_1985_);
v___x_1987_ = v___x_1980_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v_a_1972_ = v___x_1987_;
goto v___jp_1971_;
}
}
v___jp_1990_:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = l_Lean_LocalDecl_fvarId(v_val_1978_);
lean_dec(v_val_1978_);
v___x_1992_ = lean_box(v___x_1989_);
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1991_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
v___x_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
v_a_1972_ = v___x_1994_;
goto v___jp_1971_;
}
}
}
v___jp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v_a_1972_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
lean_ctor_set(v___x_1974_, 1, v___x_1970_);
v___x_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
}
v___jp_1963_:
{
size_t v___x_1965_; size_t v___x_1966_; lean_object* v___x_1967_; 
v___x_1965_ = ((size_t)1ULL);
v___x_1966_ = lean_usize_add(v_i_1956_, v___x_1965_);
lean_inc_ref(v_a_1964_);
v___x_1967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1953_, v_as_1954_, v_sz_1955_, v___x_1966_, v_a_1964_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_);
return v___x_1967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2066_, lean_object* v_as_2067_, lean_object* v_sz_2068_, lean_object* v_i_2069_, lean_object* v_b_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
size_t v_sz_boxed_2076_; size_t v_i_boxed_2077_; lean_object* v_res_2078_; 
v_sz_boxed_2076_ = lean_unbox_usize(v_sz_2068_);
lean_dec(v_sz_2068_);
v_i_boxed_2077_ = lean_unbox_usize(v_i_2069_);
lean_dec(v_i_2069_);
v_res_2078_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2066_, v_as_2067_, v_sz_boxed_2076_, v_i_boxed_2077_, v_b_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec_ref(v_as_2067_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object* v_x_2079_, lean_object* v_x_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
if (lean_obj_tag(v_x_2080_) == 0)
{
lean_object* v_cs_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; size_t v_sz_2089_; size_t v___x_2090_; lean_object* v___x_2091_; 
v_cs_2086_ = lean_ctor_get(v_x_2080_, 0);
v___x_2087_ = lean_box(0);
v___x_2088_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2089_ = lean_array_size(v_cs_2086_);
v___x_2090_ = ((size_t)0ULL);
v___x_2091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2079_, v_cs_2086_, v_sz_2089_, v___x_2090_, v___x_2088_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2104_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2104_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2104_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v_fst_2096_; 
v_fst_2096_ = lean_ctor_get(v_a_2092_, 0);
lean_inc(v_fst_2096_);
lean_dec(v_a_2092_);
if (lean_obj_tag(v_fst_2096_) == 0)
{
lean_object* v___x_2098_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2087_);
v___x_2098_ = v___x_2094_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2087_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
else
{
lean_object* v_val_2100_; lean_object* v___x_2102_; 
v_val_2100_ = lean_ctor_get(v_fst_2096_, 0);
lean_inc(v_val_2100_);
lean_dec_ref_known(v_fst_2096_, 1);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v_val_2100_);
v___x_2102_ = v___x_2094_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_val_2100_);
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
lean_object* v_vs_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; size_t v_sz_2116_; size_t v___x_2117_; lean_object* v___x_2118_; 
v_vs_2113_ = lean_ctor_get(v_x_2080_, 0);
v___x_2114_ = lean_box(0);
v___x_2115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2116_ = lean_array_size(v_vs_2113_);
v___x_2117_ = ((size_t)0ULL);
v___x_2118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2079_, v_vs_2113_, v_sz_2116_, v___x_2117_, v___x_2115_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2131_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2131_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2131_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v_fst_2123_; 
v_fst_2123_ = lean_ctor_get(v_a_2119_, 0);
lean_inc(v_fst_2123_);
lean_dec(v_a_2119_);
if (lean_obj_tag(v_fst_2123_) == 0)
{
lean_object* v___x_2125_; 
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2114_);
v___x_2125_ = v___x_2121_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2114_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
else
{
lean_object* v_val_2127_; lean_object* v___x_2129_; 
v_val_2127_ = lean_ctor_get(v_fst_2123_, 0);
lean_inc(v_val_2127_);
lean_dec_ref_known(v_fst_2123_, 1);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v_val_2127_);
v___x_2129_ = v___x_2121_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_val_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
v_a_2132_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2118_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2118_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2140_, lean_object* v_as_2141_, size_t v_sz_2142_, size_t v_i_2143_, lean_object* v_b_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
uint8_t v___x_2150_; 
v___x_2150_ = lean_usize_dec_lt(v_i_2143_, v_sz_2142_);
if (v___x_2150_ == 0)
{
lean_object* v___x_2151_; 
lean_dec(v_x_2140_);
v___x_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_b_2144_);
return v___x_2151_;
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v_a_2154_; lean_object* v___x_2155_; 
lean_dec_ref(v_b_2144_);
v___x_2152_ = lean_box(0);
v___x_2153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_2154_ = lean_array_uget_borrowed(v_as_2141_, v_i_2143_);
lean_inc(v_x_2140_);
v___x_2155_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2140_, v_a_2154_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2168_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2158_ = v___x_2155_;
v_isShared_2159_ = v_isSharedCheck_2168_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2168_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
if (lean_obj_tag(v_a_2156_) == 1)
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2163_; 
lean_dec(v_x_2140_);
v___x_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_a_2156_);
v___x_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
lean_ctor_set(v___x_2161_, 1, v___x_2152_);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2161_);
v___x_2163_ = v___x_2158_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2161_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
else
{
size_t v___x_2165_; size_t v___x_2166_; 
lean_del_object(v___x_2158_);
lean_dec(v_a_2156_);
v___x_2165_ = ((size_t)1ULL);
v___x_2166_ = lean_usize_add(v_i_2143_, v___x_2165_);
v_i_2143_ = v___x_2166_;
v_b_2144_ = v___x_2153_;
goto _start;
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec(v_x_2140_);
v_a_2169_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2155_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2155_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_x_2177_, lean_object* v_as_2178_, lean_object* v_sz_2179_, lean_object* v_i_2180_, lean_object* v_b_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
size_t v_sz_boxed_2187_; size_t v_i_boxed_2188_; lean_object* v_res_2189_; 
v_sz_boxed_2187_ = lean_unbox_usize(v_sz_2179_);
lean_dec(v_sz_2179_);
v_i_boxed_2188_ = lean_unbox_usize(v_i_2180_);
lean_dec(v_i_2180_);
v_res_2189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2177_, v_as_2178_, v_sz_boxed_2187_, v_i_boxed_2188_, v_b_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec_ref(v_as_2178_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2190_, lean_object* v_x_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2190_, v_x_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec_ref(v_x_2191_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object* v_x_2198_, lean_object* v_t_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_root_2205_; lean_object* v_tail_2206_; lean_object* v___x_2207_; 
v_root_2205_ = lean_ctor_get(v_t_2199_, 0);
v_tail_2206_ = lean_ctor_get(v_t_2199_, 1);
lean_inc(v_x_2198_);
v___x_2207_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2198_, v_root_2205_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2208_);
if (lean_obj_tag(v_a_2208_) == 0)
{
lean_object* v___x_2209_; size_t v_sz_2210_; size_t v___x_2211_; lean_object* v___x_2212_; 
lean_dec_ref_known(v___x_2207_, 1);
v___x_2209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2210_ = lean_array_size(v_tail_2206_);
v___x_2211_ = ((size_t)0ULL);
v___x_2212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2198_, v_tail_2206_, v_sz_2210_, v___x_2211_, v___x_2209_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2225_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2215_ = v___x_2212_;
v_isShared_2216_ = v_isSharedCheck_2225_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2225_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v_fst_2217_; 
v_fst_2217_ = lean_ctor_get(v_a_2213_, 0);
lean_inc(v_fst_2217_);
lean_dec(v_a_2213_);
if (lean_obj_tag(v_fst_2217_) == 0)
{
lean_object* v___x_2219_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v_a_2208_);
v___x_2219_ = v___x_2215_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2208_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
else
{
lean_object* v_val_2221_; lean_object* v___x_2223_; 
v_val_2221_ = lean_ctor_get(v_fst_2217_, 0);
lean_inc(v_val_2221_);
lean_dec_ref_known(v_fst_2217_, 1);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v_val_2221_);
v___x_2223_ = v___x_2215_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_val_2221_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
v_a_2226_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2212_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2212_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_2208_, 1);
lean_dec(v_x_2198_);
return v___x_2207_;
}
}
else
{
lean_dec(v_x_2198_);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* v_x_2234_, lean_object* v_t_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2234_, v_t_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec_ref(v_t_2235_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object* v_x_2242_, lean_object* v_lctx_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
lean_object* v_decls_2249_; lean_object* v___x_2250_; 
v_decls_2249_ = lean_ctor_get(v_lctx_2243_, 1);
v___x_2250_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2242_, v_decls_2249_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object* v_x_2251_, lean_object* v_lctx_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2251_, v_lctx_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec_ref(v_lctx_2252_);
return v_res_2258_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2260_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__0));
v___x_2261_ = l_Lean_stringToMessageData(v___x_2260_);
return v___x_2261_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2263_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__2));
v___x_2264_ = l_Lean_stringToMessageData(v___x_2263_);
return v___x_2264_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__4));
v___x_2267_ = l_Lean_stringToMessageData(v___x_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* v_x_2268_, lean_object* v_mvarId_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2320_; 
lean_inc(v_x_2268_);
v___x_2320_ = l_Lean_FVarId_getDecl___redArg(v_x_2268_, v___y_2270_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; uint8_t v___x_2322_; uint8_t v___x_2323_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v___x_2322_ = 0;
v___x_2323_ = l_Lean_LocalDecl_isLet(v_a_2321_, v___x_2322_);
lean_dec(v_a_2321_);
if (v___x_2323_ == 0)
{
goto v___jp_2275_;
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2324_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2325_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__3, &l_Lean_Meta_substVar___lam__0___closed__3_once, _init_l_Lean_Meta_substVar___lam__0___closed__3);
lean_inc(v_x_2268_);
v___x_2326_ = l_Lean_mkFVar(v_x_2268_);
v___x_2327_ = l_Lean_MessageData_ofExpr(v___x_2326_);
v___x_2328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2325_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__5, &l_Lean_Meta_substVar___lam__0___closed__5_once, _init_l_Lean_Meta_substVar___lam__0___closed__5);
v___x_2330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2330_);
lean_inc(v_mvarId_2269_);
v___x_2332_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2324_, v_mvarId_2269_, v___x_2331_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_dec_ref_known(v___x_2332_, 1);
goto v___jp_2275_;
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_mvarId_2269_);
lean_dec(v_x_2268_);
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2332_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2332_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2336_ == 0)
{
v___x_2338_ = v___x_2335_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2333_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_mvarId_2269_);
lean_dec(v_x_2268_);
v_a_2341_ = lean_ctor_get(v___x_2320_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2320_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2320_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2320_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
v___jp_2275_:
{
lean_object* v_lctx_2276_; lean_object* v___x_2277_; 
v_lctx_2276_ = lean_ctor_get(v___y_2270_, 2);
lean_inc(v_x_2268_);
v___x_2277_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2268_, v_lctx_2276_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
if (lean_obj_tag(v_a_2278_) == 1)
{
lean_object* v_val_2279_; lean_object* v_fst_2280_; lean_object* v_snd_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; uint8_t v___x_2284_; lean_object* v___x_2285_; 
lean_dec(v_x_2268_);
v_val_2279_ = lean_ctor_get(v_a_2278_, 0);
lean_inc(v_val_2279_);
lean_dec_ref_known(v_a_2278_, 1);
v_fst_2280_ = lean_ctor_get(v_val_2279_, 0);
lean_inc(v_fst_2280_);
v_snd_2281_ = lean_ctor_get(v_val_2279_, 1);
lean_inc(v_snd_2281_);
lean_dec(v_val_2279_);
v___x_2282_ = lean_box(0);
v___x_2283_ = 1;
v___x_2284_ = lean_unbox(v_snd_2281_);
lean_dec(v_snd_2281_);
v___x_2285_ = l_Lean_Meta_substCore(v_mvarId_2269_, v_fst_2280_, v___x_2284_, v___x_2282_, v___x_2283_, v___x_2283_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2294_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2294_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2294_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v_snd_2290_; lean_object* v___x_2292_; 
v_snd_2290_ = lean_ctor_get(v_a_2286_, 1);
lean_inc(v_snd_2290_);
lean_dec(v_a_2286_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v_snd_2290_);
v___x_2292_ = v___x_2288_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_snd_2290_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
return v___x_2292_;
}
}
}
else
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_a_2295_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2285_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2285_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec(v_a_2278_);
v___x_2303_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2304_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__1, &l_Lean_Meta_substVar___lam__0___closed__1_once, _init_l_Lean_Meta_substVar___lam__0___closed__1);
v___x_2305_ = l_Lean_mkFVar(v_x_2268_);
v___x_2306_ = l_Lean_MessageData_ofExpr(v___x_2305_);
v___x_2307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2304_);
lean_ctor_set(v___x_2307_, 1, v___x_2306_);
v___x_2308_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_2309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
v___x_2311_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2303_, v_mvarId_2269_, v___x_2310_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
return v___x_2311_;
}
}
else
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
lean_dec(v_mvarId_2269_);
lean_dec(v_x_2268_);
v_a_2312_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2314_ = v___x_2277_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2277_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_a_2312_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object* v_x_2349_, lean_object* v_mvarId_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Lean_Meta_substVar___lam__0(v_x_2349_, v_mvarId_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* v_mvarId_2357_, lean_object* v_x_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v___f_2364_; lean_object* v___x_2365_; 
lean_inc(v_mvarId_2357_);
v___f_2364_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2364_, 0, v_x_2358_);
lean_closure_set(v___f_2364_, 1, v_mvarId_2357_);
v___x_2365_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2357_, v___f_2364_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object* v_mvarId_2366_, lean_object* v_x_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_Lean_Meta_substVar(v_mvarId_2366_, v_x_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_);
lean_dec(v_a_2371_);
lean_dec_ref(v_a_2370_);
lean_dec(v_a_2369_);
lean_dec_ref(v_a_2368_);
return v_res_2373_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_Meta_substEq___lam__0___closed__0));
v___x_2376_ = l_Lean_stringToMessageData(v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object* v_fst_2377_, lean_object* v_snd_2378_, uint8_t v___x_2379_, lean_object* v_fvarSubst_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v___x_2386_; 
lean_inc(v_fst_2377_);
v___x_2386_ = l_Lean_FVarId_getDecl___redArg(v_fst_2377_, v___y_2381_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v_newType_2401_; uint8_t v_symm_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2386_, 1);
v___x_2442_ = l_Lean_LocalDecl_type(v_a_2387_);
v___x_2443_ = l_Lean_Meta_matchEq_x3f(v___x_2442_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2443_, 1);
if (lean_obj_tag(v_a_2444_) == 1)
{
lean_object* v_val_2445_; lean_object* v_snd_2446_; lean_object* v_fst_2447_; lean_object* v_snd_2448_; lean_object* v___x_2449_; 
v_val_2445_ = lean_ctor_get(v_a_2444_, 0);
lean_inc(v_val_2445_);
lean_dec_ref_known(v_a_2444_, 1);
v_snd_2446_ = lean_ctor_get(v_val_2445_, 1);
lean_inc(v_snd_2446_);
lean_dec(v_val_2445_);
v_fst_2447_ = lean_ctor_get(v_snd_2446_, 0);
lean_inc(v_fst_2447_);
v_snd_2448_ = lean_ctor_get(v_snd_2446_, 1);
lean_inc_n(v_snd_2448_, 2);
lean_dec(v_snd_2446_);
lean_inc(v___y_2384_);
lean_inc_ref(v___y_2383_);
lean_inc(v___y_2382_);
lean_inc_ref(v___y_2381_);
v___x_2449_ = lean_whnf(v_snd_2448_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; uint8_t v___x_2451_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_a_2450_);
lean_dec_ref_known(v___x_2449_, 1);
v___x_2451_ = l_Lean_Expr_isFVar(v_a_2450_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; 
lean_dec(v_a_2450_);
lean_inc(v___y_2384_);
lean_inc_ref(v___y_2383_);
lean_inc(v___y_2382_);
lean_inc_ref(v___y_2381_);
lean_inc(v_fst_2447_);
v___x_2452_ = lean_whnf(v_fst_2447_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; uint8_t v___y_2455_; uint8_t v___x_2467_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
v___x_2467_ = l_Lean_Expr_isFVar(v_a_2453_);
if (v___x_2467_ == 0)
{
lean_dec(v_a_2453_);
lean_dec(v_snd_2448_);
lean_dec(v_fst_2447_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_fst_2377_);
v___y_2389_ = v___y_2381_;
v___y_2390_ = v___y_2382_;
v___y_2391_ = v___y_2383_;
v___y_2392_ = v___y_2384_;
goto v___jp_2388_;
}
else
{
uint8_t v___x_2468_; 
v___x_2468_ = lean_expr_eqv(v_fst_2447_, v_a_2453_);
lean_dec(v_fst_2447_);
if (v___x_2468_ == 0)
{
v___y_2455_ = v___x_2467_;
goto v___jp_2454_;
}
else
{
v___y_2455_ = v___x_2451_;
goto v___jp_2454_;
}
}
v___jp_2454_:
{
if (v___y_2455_ == 0)
{
lean_object* v___x_2456_; 
lean_dec(v_a_2453_);
lean_dec(v_snd_2448_);
lean_dec(v_a_2387_);
v___x_2456_ = l_Lean_Meta_substCore(v_snd_2378_, v_fst_2377_, v___y_2455_, v_fvarSubst_2380_, v___x_2379_, v___x_2379_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
return v___x_2456_;
}
else
{
lean_object* v___x_2457_; 
v___x_2457_ = l_Lean_Meta_mkEq(v_a_2453_, v_snd_2448_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v_newType_2401_ = v_a_2458_;
v_symm_2402_ = v___x_2451_;
v___y_2403_ = v___y_2381_;
v___y_2404_ = v___y_2382_;
v___y_2405_ = v___y_2383_;
v___y_2406_ = v___y_2384_;
goto v___jp_2400_;
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec(v_a_2387_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2459_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2457_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2457_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
lean_dec(v_snd_2448_);
lean_dec(v_fst_2447_);
lean_dec(v_a_2387_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2469_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2452_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2452_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
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
uint8_t v___x_2477_; 
v___x_2477_ = lean_expr_eqv(v_snd_2448_, v_a_2450_);
lean_dec(v_snd_2448_);
if (v___x_2477_ == 0)
{
if (v___x_2451_ == 0)
{
lean_object* v___x_2478_; 
lean_dec(v_a_2450_);
lean_dec(v_fst_2447_);
lean_dec(v_a_2387_);
v___x_2478_ = l_Lean_Meta_substCore(v_snd_2378_, v_fst_2377_, v___x_2379_, v_fvarSubst_2380_, v___x_2379_, v___x_2379_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
return v___x_2478_;
}
else
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Lean_Meta_mkEq(v_fst_2447_, v_a_2450_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v_newType_2401_ = v_a_2480_;
v_symm_2402_ = v___x_2379_;
v___y_2403_ = v___y_2381_;
v___y_2404_ = v___y_2382_;
v___y_2405_ = v___y_2383_;
v___y_2406_ = v___y_2384_;
goto v___jp_2400_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_dec(v_a_2387_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2481_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___x_2479_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___x_2479_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
}
else
{
lean_object* v___x_2489_; 
lean_dec(v_a_2450_);
lean_dec(v_fst_2447_);
lean_dec(v_a_2387_);
v___x_2489_ = l_Lean_Meta_substCore(v_snd_2378_, v_fst_2377_, v___x_2379_, v_fvarSubst_2380_, v___x_2379_, v___x_2379_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
return v___x_2489_;
}
}
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec(v_snd_2448_);
lean_dec(v_fst_2447_);
lean_dec(v_a_2387_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2490_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2449_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2449_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
else
{
lean_dec(v_a_2444_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_fst_2377_);
v___y_2389_ = v___y_2381_;
v___y_2390_ = v___y_2382_;
v___y_2391_ = v___y_2383_;
v___y_2392_ = v___y_2384_;
goto v___jp_2388_;
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec(v_a_2387_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2498_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2443_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2443_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
v___jp_2388_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2393_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2394_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__1, &l_Lean_Meta_substEq___lam__0___closed__1_once, _init_l_Lean_Meta_substEq___lam__0___closed__1);
v___x_2395_ = l_Lean_LocalDecl_type(v_a_2387_);
lean_dec(v_a_2387_);
v___x_2396_ = l_Lean_indentExpr(v___x_2395_);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2394_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2397_);
v___x_2399_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2393_, v_snd_2378_, v___x_2398_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
return v___x_2399_;
}
v___jp_2400_:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2407_ = l_Lean_LocalDecl_userName(v_a_2387_);
lean_dec(v_a_2387_);
lean_inc(v_fst_2377_);
v___x_2408_ = l_Lean_mkFVar(v_fst_2377_);
v___x_2409_ = l_Lean_MVarId_assert(v_snd_2378_, v___x_2407_, v_newType_2401_, v___x_2408_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; lean_object* v___x_2411_; 
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2409_, 1);
v___x_2411_ = l_Lean_Meta_intro1Core(v_a_2410_, v___x_2379_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v_fst_2413_; lean_object* v_snd_2414_; lean_object* v___x_2415_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
v_fst_2413_ = lean_ctor_get(v_a_2412_, 0);
lean_inc(v_fst_2413_);
v_snd_2414_ = lean_ctor_get(v_a_2412_, 1);
lean_inc(v_snd_2414_);
lean_dec(v_a_2412_);
v___x_2415_ = l_Lean_MVarId_clear(v_snd_2414_, v_fst_2377_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2417_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2415_, 1);
v___x_2417_ = l_Lean_Meta_substCore(v_a_2416_, v_fst_2413_, v_symm_2402_, v_fvarSubst_2380_, v___x_2379_, v___x_2379_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
return v___x_2417_;
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v_fst_2413_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v_fvarSubst_2380_);
v_a_2418_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2415_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2415_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_fst_2377_);
v_a_2426_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2411_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2411_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_fst_2377_);
v_a_2434_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2409_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2409_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v_fvarSubst_2380_);
lean_dec(v_snd_2378_);
lean_dec(v_fst_2377_);
v_a_2506_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2386_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2386_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object* v_fst_2514_, lean_object* v_snd_2515_, lean_object* v___x_2516_, lean_object* v_fvarSubst_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
uint8_t v___x_1437__boxed_2523_; lean_object* v_res_2524_; 
v___x_1437__boxed_2523_ = lean_unbox(v___x_2516_);
v_res_2524_ = l_Lean_Meta_substEq___lam__0(v_fst_2514_, v_snd_2515_, v___x_1437__boxed_2523_, v_fvarSubst_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object* v_mvarId_2525_, lean_object* v_hFVarId_2526_, lean_object* v_fvarSubst_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
uint8_t v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = 1;
v___x_2534_ = l_Lean_Meta_heqToEq(v_mvarId_2525_, v_hFVarId_2526_, v___x_2533_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; lean_object* v_fst_2536_; lean_object* v_snd_2537_; lean_object* v___x_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v_fst_2536_ = lean_ctor_get(v_a_2535_, 0);
lean_inc(v_fst_2536_);
v_snd_2537_ = lean_ctor_get(v_a_2535_, 1);
lean_inc_n(v_snd_2537_, 2);
lean_dec(v_a_2535_);
v___x_2538_ = lean_box(v___x_2533_);
v___f_2539_ = lean_alloc_closure((void*)(l_Lean_Meta_substEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2539_, 0, v_fst_2536_);
lean_closure_set(v___f_2539_, 1, v_snd_2537_);
lean_closure_set(v___f_2539_, 2, v___x_2538_);
lean_closure_set(v___f_2539_, 3, v_fvarSubst_2527_);
v___x_2540_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_snd_2537_, v___f_2539_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_);
return v___x_2540_;
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_fvarSubst_2527_);
v_a_2541_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2534_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2534_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object* v_mvarId_2549_, lean_object* v_hFVarId_2550_, lean_object* v_fvarSubst_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lean_Meta_substEq(v_mvarId_2549_, v_hFVarId_2550_, v_fvarSubst_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* v_h_2558_, lean_object* v_mvarId_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v___x_2565_; 
lean_inc(v_h_2558_);
v___x_2565_ = l_Lean_FVarId_getType___redArg(v_h_2558_, v___y_2560_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2567_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc_n(v_a_2566_, 2);
lean_dec_ref_known(v___x_2565_, 1);
v___x_2567_ = l_Lean_Meta_matchEq_x3f(v_a_2566_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
if (lean_obj_tag(v_a_2568_) == 0)
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lean_Meta_matchHEq_x3f(v_a_2566_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2569_, 1);
if (lean_obj_tag(v_a_2570_) == 0)
{
lean_object* v___x_2571_; 
v___x_2571_ = l_Lean_Meta_substVar(v_mvarId_2559_, v_h_2558_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2571_;
}
else
{
uint8_t v___x_2572_; lean_object* v___x_2573_; 
lean_dec_ref_known(v_a_2570_, 1);
v___x_2572_ = 1;
lean_inc(v_h_2558_);
lean_inc(v_mvarId_2559_);
v___x_2573_ = l_Lean_Meta_heqToEq(v_mvarId_2559_, v_h_2558_, v___x_2572_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v_fst_2575_; lean_object* v_snd_2576_; uint8_t v___x_2577_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
v_fst_2575_ = lean_ctor_get(v_a_2574_, 0);
lean_inc(v_fst_2575_);
v_snd_2576_ = lean_ctor_get(v_a_2574_, 1);
lean_inc(v_snd_2576_);
lean_dec(v_a_2574_);
v___x_2577_ = l_Lean_instBEqMVarId_beq(v_mvarId_2559_, v_snd_2576_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; 
lean_dec(v_mvarId_2559_);
lean_dec(v_h_2558_);
v___x_2578_ = l_Lean_Meta_subst(v_snd_2576_, v_fst_2575_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2578_;
}
else
{
lean_object* v___x_2579_; 
lean_dec(v_snd_2576_);
lean_dec(v_fst_2575_);
v___x_2579_ = l_Lean_Meta_substVar(v_mvarId_2559_, v_h_2558_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2579_;
}
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
lean_dec(v_mvarId_2559_);
lean_dec(v_h_2558_);
v_a_2580_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2573_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2573_);
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
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec(v_mvarId_2559_);
lean_dec(v_h_2558_);
v_a_2588_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2569_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2569_);
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
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
lean_dec_ref_known(v_a_2568_, 1);
lean_dec(v_a_2566_);
v___x_2596_ = lean_box(0);
v___x_2597_ = l_Lean_Meta_substEq(v_mvarId_2559_, v_h_2558_, v___x_2596_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2606_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2600_ = v___x_2597_;
v_isShared_2601_ = v_isSharedCheck_2606_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2597_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2606_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v_snd_2602_; lean_object* v___x_2604_; 
v_snd_2602_ = lean_ctor_get(v_a_2598_, 1);
lean_inc(v_snd_2602_);
lean_dec(v_a_2598_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 0, v_snd_2602_);
v___x_2604_ = v___x_2600_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_snd_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
v_a_2607_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2597_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2597_);
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
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v_a_2566_);
lean_dec(v_mvarId_2559_);
lean_dec(v_h_2558_);
v_a_2615_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2567_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2567_);
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
lean_dec(v_mvarId_2559_);
lean_dec(v_h_2558_);
v_a_2623_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2565_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2565_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object* v_h_2631_, lean_object* v_mvarId_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_Meta_subst___lam__0(v_h_2631_, v_mvarId_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* v_mvarId_2639_, lean_object* v_h_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_){
_start:
{
lean_object* v___f_2646_; lean_object* v___x_2647_; 
lean_inc(v_mvarId_2639_);
v___f_2646_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2646_, 0, v_h_2640_);
lean_closure_set(v___f_2646_, 1, v_mvarId_2639_);
v___x_2647_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2639_, v___f_2646_, v_a_2641_, v_a_2642_, v_a_2643_, v_a_2644_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object* v_mvarId_2648_, lean_object* v_h_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_Meta_subst(v_mvarId_2648_, v_h_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_);
lean_dec(v_a_2653_);
lean_dec_ref(v_a_2652_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2650_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object* v_x_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lean_Meta_saveState___redArg(v___y_2658_, v___y_2660_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v_a_2663_; lean_object* v___x_2664_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2662_, 1);
lean_inc(v___y_2660_);
lean_inc_ref(v___y_2659_);
lean_inc(v___y_2658_);
lean_inc_ref(v___y_2657_);
v___x_2664_ = lean_apply_5(v_x_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, lean_box(0));
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_dec(v_a_2663_);
return v___x_2664_;
}
else
{
lean_object* v_a_2665_; uint8_t v___y_2667_; uint8_t v___x_2685_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
v___x_2685_ = l_Lean_Exception_isInterrupt(v_a_2665_);
if (v___x_2685_ == 0)
{
uint8_t v___x_2686_; 
lean_inc(v_a_2665_);
v___x_2686_ = l_Lean_Exception_isRuntime(v_a_2665_);
v___y_2667_ = v___x_2686_;
goto v___jp_2666_;
}
else
{
v___y_2667_ = v___x_2685_;
goto v___jp_2666_;
}
v___jp_2666_:
{
if (v___y_2667_ == 0)
{
lean_object* v___x_2668_; 
lean_dec_ref_known(v___x_2664_, 1);
v___x_2668_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2663_, v___y_2658_, v___y_2660_);
lean_dec(v_a_2663_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2675_ == 0)
{
lean_object* v_unused_2676_; 
v_unused_2676_ = lean_ctor_get(v___x_2668_, 0);
lean_dec(v_unused_2676_);
v___x_2670_ = v___x_2668_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_dec(v___x_2668_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 1);
lean_ctor_set(v___x_2670_, 0, v_a_2665_);
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2665_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec(v_a_2665_);
v_a_2677_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2668_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2668_);
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
else
{
lean_dec(v_a_2665_);
lean_dec(v_a_2663_);
return v___x_2664_;
}
}
}
}
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
lean_dec_ref(v_x_2656_);
v_a_2687_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2662_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2662_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object* v_x_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
lean_dec(v___y_2697_);
lean_dec_ref(v___y_2696_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object* v_00_u03b1_2702_, lean_object* v_x_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
lean_object* v___x_2709_; 
v___x_2709_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object* v_00_u03b1_2710_, lean_object* v_x_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(v_00_u03b1_2710_, v_x_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object* v_msg_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v_ref_2724_; lean_object* v___x_2725_; lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2734_; 
v_ref_2724_ = lean_ctor_get(v___y_2721_, 2);
v___x_2725_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msg_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2734_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2734_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2730_; lean_object* v___x_2732_; 
lean_inc(v_ref_2724_);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v_ref_2724_);
lean_ctor_set(v___x_2730_, 1, v_a_2726_);
if (v_isShared_2729_ == 0)
{
lean_ctor_set_tag(v___x_2728_, 1);
lean_ctor_set(v___x_2728_, 0, v___x_2730_);
v___x_2732_ = v___x_2728_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object* v_msg_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
return v_res_2741_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__0));
v___x_2744_ = l_Lean_stringToMessageData(v___x_2743_);
return v___x_2744_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__2));
v___x_2747_ = l_Lean_stringToMessageData(v___x_2746_);
return v___x_2747_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__4));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__6));
v___x_2753_ = l_Lean_stringToMessageData(v___x_2752_);
return v___x_2753_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__8));
v___x_2756_ = l_Lean_stringToMessageData(v___x_2755_);
return v___x_2756_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2769_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__16));
v___x_2770_ = l_Lean_stringToMessageData(v___x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object* v_mvarId_2779_, uint8_t v_substLHS_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v___x_2786_; 
lean_inc(v_mvarId_2779_);
v___x_2786_ = l_Lean_MVarId_getType_x27(v_mvarId_2779_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v___x_2786_, 1);
if (lean_obj_tag(v_a_2787_) == 7)
{
lean_object* v_binderType_2791_; lean_object* v_body_2792_; uint8_t v___x_2793_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v_fst_2928_; lean_object* v_fst_2929_; lean_object* v_fst_2930_; lean_object* v_snd_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; 
v_binderType_2791_ = lean_ctor_get(v_a_2787_, 1);
lean_inc_ref(v_binderType_2791_);
v_body_2792_ = lean_ctor_get(v_a_2787_, 2);
lean_inc_ref(v_body_2792_);
lean_dec_ref_known(v_a_2787_, 3);
v___x_2793_ = l_Lean_Expr_hasLooseBVars(v_body_2792_);
if (v___x_2793_ == 0)
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_2791_, v___y_2782_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = l_Lean_Expr_cleanupAnnotations(v_a_2963_);
v___x_2965_ = l_Lean_Expr_isApp(v___x_2964_);
if (v___x_2965_ == 0)
{
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
v___y_2951_ = v___y_2784_;
goto v___jp_2947_;
}
else
{
lean_object* v_arg_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v_arg_2966_ = lean_ctor_get(v___x_2964_, 1);
lean_inc_ref(v_arg_2966_);
v___x_2967_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2964_);
v___x_2968_ = l_Lean_Expr_isApp(v___x_2967_);
if (v___x_2968_ == 0)
{
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
v___y_2951_ = v___y_2784_;
goto v___jp_2947_;
}
else
{
lean_object* v_arg_2969_; lean_object* v___x_2970_; uint8_t v___x_2971_; 
v_arg_2969_ = lean_ctor_get(v___x_2967_, 1);
lean_inc_ref(v_arg_2969_);
v___x_2970_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2967_);
v___x_2971_ = l_Lean_Expr_isApp(v___x_2970_);
if (v___x_2971_ == 0)
{
lean_dec_ref(v___x_2970_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
v___y_2951_ = v___y_2784_;
goto v___jp_2947_;
}
else
{
lean_object* v_arg_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; uint8_t v___x_2975_; 
v_arg_2972_ = lean_ctor_get(v___x_2970_, 1);
lean_inc_ref(v_arg_2972_);
v___x_2973_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2970_);
v___x_2974_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__11));
v___x_2975_ = l_Lean_Expr_isConstOf(v___x_2973_, v___x_2974_);
if (v___x_2975_ == 0)
{
uint8_t v___x_2976_; 
v___x_2976_ = l_Lean_Expr_isApp(v___x_2973_);
if (v___x_2976_ == 0)
{
lean_dec_ref(v___x_2973_);
lean_dec_ref(v_arg_2972_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
v___y_2951_ = v___y_2784_;
goto v___jp_2947_;
}
else
{
lean_object* v_arg_2977_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v_arg_2977_ = lean_ctor_get(v___x_2973_, 1);
lean_inc_ref(v_arg_2977_);
v___x_2985_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2973_);
v___x_2986_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_2987_ = l_Lean_Expr_isConstOf(v___x_2985_, v___x_2986_);
lean_dec_ref(v___x_2985_);
if (v___x_2987_ == 0)
{
lean_dec_ref(v_arg_2977_);
lean_dec_ref(v_arg_2972_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
v___y_2951_ = v___y_2784_;
goto v___jp_2947_;
}
else
{
lean_object* v___x_2988_; 
lean_inc_ref(v_arg_2977_);
v___x_2988_ = l_Lean_Meta_isExprDefEq(v_arg_2977_, v_arg_2969_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; uint8_t v___x_2990_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = lean_unbox(v_a_2989_);
lean_dec(v_a_2989_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec_ref(v_arg_2977_);
lean_dec_ref(v_arg_2972_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___x_2991_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__17, &l_Lean_Meta_introSubstEq___lam__0___closed__17_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__17);
v___x_2992_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2991_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2992_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2992_);
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
else
{
v___y_2979_ = v___y_2781_;
v___y_2980_ = v___y_2782_;
v___y_2981_ = v___y_2783_;
v___y_2982_ = v___y_2784_;
goto v___jp_2978_;
}
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec_ref(v_arg_2977_);
lean_dec_ref(v_arg_2972_);
lean_dec_ref(v_arg_2966_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v_a_3001_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2988_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_2988_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
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
v___jp_2978_:
{
if (v_substLHS_2780_ == 0)
{
lean_object* v___x_2983_; 
v___x_2983_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__13));
v_fst_2928_ = v_arg_2977_;
v_fst_2929_ = v_arg_2972_;
v_fst_2930_ = v_arg_2966_;
v_snd_2931_ = v___x_2983_;
v___y_2932_ = v___y_2979_;
v___y_2933_ = v___y_2980_;
v___y_2934_ = v___y_2981_;
v___y_2935_ = v___y_2982_;
goto v___jp_2927_;
}
else
{
lean_object* v___x_2984_; 
v___x_2984_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__15));
v_fst_2928_ = v_arg_2977_;
v_fst_2929_ = v_arg_2966_;
v_fst_2930_ = v_arg_2972_;
v_snd_2931_ = v___x_2984_;
v___y_2932_ = v___y_2979_;
v___y_2933_ = v___y_2980_;
v___y_2934_ = v___y_2981_;
v___y_2935_ = v___y_2982_;
goto v___jp_2927_;
}
}
}
}
else
{
lean_dec_ref(v___x_2973_);
if (v_substLHS_2780_ == 0)
{
lean_object* v___x_3009_; 
v___x_3009_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__19));
v_fst_2928_ = v_arg_2972_;
v_fst_2929_ = v_arg_2969_;
v_fst_2930_ = v_arg_2966_;
v_snd_2931_ = v___x_3009_;
v___y_2932_ = v___y_2781_;
v___y_2933_ = v___y_2782_;
v___y_2934_ = v___y_2783_;
v___y_2935_ = v___y_2784_;
goto v___jp_2927_;
}
else
{
lean_object* v___x_3010_; 
v___x_3010_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__21));
v_fst_2928_ = v_arg_2972_;
v_fst_2929_ = v_arg_2966_;
v_fst_2930_ = v_arg_2969_;
v_snd_2931_ = v___x_3010_;
v___y_2932_ = v___y_2781_;
v___y_2933_ = v___y_2782_;
v___y_2934_ = v___y_2783_;
v___y_2935_ = v___y_2784_;
goto v___jp_2927_;
}
}
}
}
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v_a_3011_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v___x_2962_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_2962_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
else
{
lean_dec_ref(v_body_2792_);
lean_dec_ref(v_binderType_2791_);
lean_dec(v_mvarId_2779_);
goto v___jp_2788_;
}
v___jp_2794_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; uint8_t v___x_2809_; lean_object* v___x_2810_; 
v___x_2806_ = lean_mk_empty_array_with_capacity(v___y_2798_);
lean_inc_ref(v___x_2806_);
v___x_2807_ = lean_array_push(v___x_2806_, v___y_2796_);
v___x_2808_ = 1;
v___x_2809_ = 1;
v___x_2810_ = l_Lean_Meta_mkLambdaFVars(v___x_2807_, v_body_2792_, v___x_2793_, v___x_2808_, v___x_2793_, v___x_2808_, v___x_2809_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc_n(v_a_2811_, 2);
lean_dec_ref_known(v___x_2810_, 1);
lean_inc_ref(v___y_2797_);
v___x_2812_ = lean_array_push(v___x_2806_, v___y_2797_);
v___x_2813_ = l_Lean_Expr_beta(v_a_2811_, v___x_2812_);
lean_inc(v___y_2800_);
v___x_2814_ = l_Lean_MVarId_getTag(v___y_2800_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2816_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2814_, 1);
lean_inc_ref(v___x_2813_);
v___x_2816_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2813_, v_a_2815_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
if (lean_obj_tag(v___x_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2818_; 
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2816_, 1);
v___x_2818_ = l_Lean_Meta_getLevel(v___x_2813_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
if (lean_obj_tag(v___x_2818_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2820_; 
v_a_2819_ = lean_ctor_get(v___x_2818_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2818_, 1);
lean_inc_ref(v___y_2801_);
v___x_2820_ = l_Lean_Meta_getLevel(v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v_a_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2838_; 
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2821_);
lean_dec_ref_known(v___x_2820_, 1);
v___x_2822_ = lean_box(0);
v___x_2823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2823_, 0, v_a_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2824_, 0, v_a_2819_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
lean_inc(v___y_2795_);
v___x_2825_ = l_Lean_mkConst(v___y_2795_, v___x_2824_);
lean_inc(v_a_2817_);
lean_inc_ref(v___y_2797_);
v___x_2826_ = l_Lean_mkApp4(v___x_2825_, v___y_2801_, v___y_2797_, v_a_2811_, v_a_2817_);
v___x_2827_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v___y_2800_, v___x_2826_, v___y_2803_);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2838_ == 0)
{
lean_object* v_unused_2839_; 
v_unused_2839_ = lean_ctor_get(v___x_2827_, 0);
lean_dec(v_unused_2839_);
v___x_2829_ = v___x_2827_;
v_isShared_2830_ = v_isSharedCheck_2838_;
goto v_resetjp_2828_;
}
else
{
lean_dec(v___x_2827_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2838_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2831_ = l_Lean_Meta_FVarSubst_empty;
v___x_2832_ = l_Lean_Meta_FVarSubst_insert(v___x_2831_, v___y_2799_, v___y_2797_);
v___x_2833_ = l_Lean_Expr_mvarId_x21(v_a_2817_);
lean_dec(v_a_2817_);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2832_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 0, v___x_2834_);
v___x_2836_ = v___x_2829_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v_a_2819_);
lean_dec(v_a_2817_);
lean_dec(v_a_2811_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2797_);
v_a_2840_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2820_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2820_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v_a_2817_);
lean_dec(v_a_2811_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2797_);
v_a_2848_ = lean_ctor_get(v___x_2818_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2818_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2818_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2818_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
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
lean_dec_ref(v___x_2813_);
lean_dec(v_a_2811_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2797_);
v_a_2856_ = lean_ctor_get(v___x_2816_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2816_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2816_);
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
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2871_; 
lean_dec_ref(v___x_2813_);
lean_dec(v_a_2811_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2797_);
v_a_2864_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2866_ = v___x_2814_;
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2814_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2867_ == 0)
{
v___x_2869_ = v___x_2866_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2864_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_dec_ref(v___x_2806_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2797_);
v_a_2872_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2810_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2810_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
v___jp_2880_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2889_ = l_Lean_Expr_fvarId_x21(v___y_2882_);
v___x_2890_ = lean_unsigned_to_nat(1u);
v___x_2891_ = lean_mk_empty_array_with_capacity(v___x_2890_);
lean_inc(v___x_2889_);
v___x_2892_ = lean_array_push(v___x_2891_, v___x_2889_);
v___x_2893_ = l_Lean_MVarId_revert(v_mvarId_2779_, v___x_2892_, v___x_2793_, v___x_2793_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v_fst_2895_; lean_object* v_snd_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2918_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2893_, 1);
v_fst_2895_ = lean_ctor_get(v_a_2894_, 0);
v_snd_2896_ = lean_ctor_get(v_a_2894_, 1);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_a_2894_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2898_ = v_a_2894_;
v_isShared_2899_ = v_isSharedCheck_2918_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_snd_2896_);
lean_inc(v_fst_2895_);
lean_dec(v_a_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2918_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; uint8_t v___x_2901_; 
v___x_2900_ = lean_array_get_size(v_fst_2895_);
lean_dec(v_fst_2895_);
v___x_2901_ = lean_nat_dec_eq(v___x_2900_, v___x_2890_);
if (v___x_2901_ == 0)
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2905_; 
lean_dec(v_snd_2896_);
lean_dec(v___x_2889_);
lean_dec_ref(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v_body_2792_);
v___x_2902_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__3, &l_Lean_Meta_introSubstEq___lam__0___closed__3_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__3);
v___x_2903_ = l_Lean_MessageData_ofExpr(v___y_2882_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set_tag(v___x_2898_, 7);
lean_ctor_set(v___x_2898_, 1, v___x_2903_);
lean_ctor_set(v___x_2898_, 0, v___x_2902_);
v___x_2905_ = v___x_2898_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v___x_2903_);
v___x_2905_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
v___x_2906_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__5, &l_Lean_Meta_introSubstEq___lam__0___closed__5_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__5);
v___x_2907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2905_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
v___x_2908_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2907_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
else
{
lean_del_object(v___x_2898_);
v___y_2795_ = v___y_2881_;
v___y_2796_ = v___y_2882_;
v___y_2797_ = v___y_2883_;
v___y_2798_ = v___x_2890_;
v___y_2799_ = v___x_2889_;
v___y_2800_ = v_snd_2896_;
v___y_2801_ = v___y_2884_;
v___y_2802_ = v___y_2885_;
v___y_2803_ = v___y_2886_;
v___y_2804_ = v___y_2887_;
v___y_2805_ = v___y_2888_;
goto v___jp_2794_;
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v___x_2889_);
lean_dec_ref(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec_ref(v_body_2792_);
v_a_2919_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2893_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2893_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
v___jp_2927_:
{
uint8_t v___x_2936_; 
v___x_2936_ = l_Lean_Expr_isFVar(v_fst_2930_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec_ref(v_fst_2930_);
lean_dec_ref(v_fst_2929_);
lean_dec_ref(v_fst_2928_);
lean_dec_ref(v_body_2792_);
lean_dec(v_mvarId_2779_);
v___x_2937_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__7, &l_Lean_Meta_introSubstEq___lam__0___closed__7_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__7);
v___x_2938_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2937_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2938_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2938_);
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
else
{
v___y_2881_ = v_snd_2931_;
v___y_2882_ = v_fst_2930_;
v___y_2883_ = v_fst_2929_;
v___y_2884_ = v_fst_2928_;
v___y_2885_ = v___y_2932_;
v___y_2886_ = v___y_2933_;
v___y_2887_ = v___y_2934_;
v___y_2888_ = v___y_2935_;
goto v___jp_2880_;
}
}
v___jp_2947_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v___x_2952_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__9, &l_Lean_Meta_introSubstEq___lam__0___closed__9_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__9);
v___x_2953_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2952_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_);
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2953_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2953_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
else
{
lean_dec(v_a_2787_);
lean_dec(v_mvarId_2779_);
goto v___jp_2788_;
}
v___jp_2788_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__1, &l_Lean_Meta_introSubstEq___lam__0___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__1);
v___x_2790_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2789_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
return v___x_2790_;
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec(v_mvarId_2779_);
v_a_3019_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_2786_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_2786_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object* v_mvarId_3027_, lean_object* v_substLHS_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
uint8_t v_substLHS_boxed_3034_; lean_object* v_res_3035_; 
v_substLHS_boxed_3034_ = lean_unbox(v_substLHS_3028_);
v_res_3035_ = l_Lean_Meta_introSubstEq___lam__0(v_mvarId_3027_, v_substLHS_boxed_3034_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
lean_dec(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
return v_res_3035_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object* v_keys_3036_, lean_object* v_i_3037_, lean_object* v_k_3038_){
_start:
{
lean_object* v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = lean_array_get_size(v_keys_3036_);
v___x_3040_ = lean_nat_dec_lt(v_i_3037_, v___x_3039_);
if (v___x_3040_ == 0)
{
lean_dec(v_i_3037_);
return v___x_3040_;
}
else
{
lean_object* v_k_x27_3041_; uint8_t v___x_3042_; 
v_k_x27_3041_ = lean_array_fget_borrowed(v_keys_3036_, v_i_3037_);
v___x_3042_ = l_Lean_instBEqMVarId_beq(v_k_3038_, v_k_x27_3041_);
if (v___x_3042_ == 0)
{
lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3043_ = lean_unsigned_to_nat(1u);
v___x_3044_ = lean_nat_add(v_i_3037_, v___x_3043_);
lean_dec(v_i_3037_);
v_i_3037_ = v___x_3044_;
goto _start;
}
else
{
lean_dec(v_i_3037_);
return v___x_3040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_keys_3046_, lean_object* v_i_3047_, lean_object* v_k_3048_){
_start:
{
uint8_t v_res_3049_; lean_object* v_r_3050_; 
v_res_3049_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3046_, v_i_3047_, v_k_3048_);
lean_dec(v_k_3048_);
lean_dec_ref(v_keys_3046_);
v_r_3050_ = lean_box(v_res_3049_);
return v_r_3050_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3051_, size_t v_x_3052_, lean_object* v_x_3053_){
_start:
{
if (lean_obj_tag(v_x_3051_) == 0)
{
lean_object* v_es_3054_; lean_object* v___x_3055_; size_t v___x_3056_; size_t v___x_3057_; lean_object* v_j_3058_; lean_object* v___x_3059_; 
v_es_3054_ = lean_ctor_get(v_x_3051_, 0);
v___x_3055_ = lean_box(2);
v___x_3056_ = ((size_t)31ULL);
v___x_3057_ = lean_usize_land(v_x_3052_, v___x_3056_);
v_j_3058_ = lean_usize_to_nat(v___x_3057_);
v___x_3059_ = lean_array_get_borrowed(v___x_3055_, v_es_3054_, v_j_3058_);
lean_dec(v_j_3058_);
switch(lean_obj_tag(v___x_3059_))
{
case 0:
{
lean_object* v_key_3060_; uint8_t v___x_3061_; 
v_key_3060_ = lean_ctor_get(v___x_3059_, 0);
v___x_3061_ = l_Lean_instBEqMVarId_beq(v_x_3053_, v_key_3060_);
return v___x_3061_;
}
case 1:
{
lean_object* v_node_3062_; size_t v___x_3063_; size_t v___x_3064_; 
v_node_3062_ = lean_ctor_get(v___x_3059_, 0);
v___x_3063_ = ((size_t)5ULL);
v___x_3064_ = lean_usize_shift_right(v_x_3052_, v___x_3063_);
v_x_3051_ = v_node_3062_;
v_x_3052_ = v___x_3064_;
goto _start;
}
default: 
{
uint8_t v___x_3066_; 
v___x_3066_ = 0;
return v___x_3066_;
}
}
}
else
{
lean_object* v_ks_3067_; lean_object* v___x_3068_; uint8_t v___x_3069_; 
v_ks_3067_ = lean_ctor_get(v_x_3051_, 0);
v___x_3068_ = lean_unsigned_to_nat(0u);
v___x_3069_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_ks_3067_, v___x_3068_, v_x_3053_);
return v___x_3069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3070_, lean_object* v_x_3071_, lean_object* v_x_3072_){
_start:
{
size_t v_x_10597__boxed_3073_; uint8_t v_res_3074_; lean_object* v_r_3075_; 
v_x_10597__boxed_3073_ = lean_unbox_usize(v_x_3071_);
lean_dec(v_x_3071_);
v_res_3074_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3070_, v_x_10597__boxed_3073_, v_x_3072_);
lean_dec(v_x_3072_);
lean_dec_ref(v_x_3070_);
v_r_3075_ = lean_box(v_res_3074_);
return v_r_3075_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object* v_x_3076_, lean_object* v_x_3077_){
_start:
{
uint64_t v___x_3078_; size_t v___x_3079_; uint8_t v___x_3080_; 
v___x_3078_ = l_Lean_instHashableMVarId_hash(v_x_3077_);
v___x_3079_ = lean_uint64_to_usize(v___x_3078_);
v___x_3080_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3076_, v___x_3079_, v_x_3077_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object* v_x_3081_, lean_object* v_x_3082_){
_start:
{
uint8_t v_res_3083_; lean_object* v_r_3084_; 
v_res_3083_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3081_, v_x_3082_);
lean_dec(v_x_3082_);
lean_dec_ref(v_x_3081_);
v_r_3084_ = lean_box(v_res_3083_);
return v_r_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object* v_mvarId_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v___x_3088_; lean_object* v_mctx_3089_; lean_object* v_eAssignment_3090_; uint8_t v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3088_ = lean_st_ref_get(v___y_3086_);
v_mctx_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_ref(v_mctx_3089_);
lean_dec(v___x_3088_);
v_eAssignment_3090_ = lean_ctor_get(v_mctx_3089_, 8);
lean_inc_ref(v_eAssignment_3090_);
lean_dec_ref(v_mctx_3089_);
v___x_3091_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_eAssignment_3090_, v_mvarId_3085_);
lean_dec_ref(v_eAssignment_3090_);
v___x_3092_ = lean_box(v___x_3091_);
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object* v_mvarId_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3094_, v___y_3095_);
lean_dec(v___y_3095_);
lean_dec(v_mvarId_3094_);
return v_res_3097_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__1___closed__0));
v___x_3100_ = l_Lean_stringToMessageData(v___x_3099_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object* v_mvarId_3101_, uint8_t v___y_3102_, lean_object* v_____r_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3141_; lean_object* v_a_3142_; uint8_t v___x_3143_; 
v___x_3141_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3101_, v___y_3105_);
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref(v___x_3141_);
v___x_3143_ = lean_unbox(v_a_3142_);
lean_dec(v_a_3142_);
if (v___x_3143_ == 0)
{
goto v___jp_3109_;
}
else
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec(v_mvarId_3101_);
v___x_3144_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__1, &l_Lean_Meta_introSubstEq___lam__1___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__1);
v___x_3145_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3144_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3145_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3145_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3145_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
v___jp_3109_:
{
lean_object* v___x_3110_; 
v___x_3110_ = l_Lean_Meta_intro1Core(v_mvarId_3101_, v___y_3102_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v_fst_3112_; lean_object* v_snd_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3110_, 1);
v_fst_3112_ = lean_ctor_get(v_a_3111_, 0);
lean_inc(v_fst_3112_);
v_snd_3113_ = lean_ctor_get(v_a_3111_, 1);
lean_inc(v_snd_3113_);
lean_dec(v_a_3111_);
v___x_3114_ = lean_box(0);
v___x_3115_ = l_Lean_Meta_substEq(v_snd_3113_, v_fst_3112_, v___x_3114_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3124_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3118_ = v___x_3115_;
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_3115_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3120_, 0, v_a_3116_);
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 0, v___x_3120_);
v___x_3122_ = v___x_3118_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_a_3125_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3115_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3115_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
v_a_3133_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3110_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3110_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object* v_mvarId_3154_, lean_object* v___y_3155_, lean_object* v_____r_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_){
_start:
{
uint8_t v___y_10669__boxed_3162_; lean_object* v_res_3163_; 
v___y_10669__boxed_3162_ = lean_unbox(v___y_3155_);
v_res_3163_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3154_, v___y_10669__boxed_3162_, v_____r_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
return v_res_3163_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__2(void){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3167_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3168_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_3169_ = l_Lean_Name_append(v___x_3168_, v___x_3167_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__4(void){
_start:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__3));
v___x_3172_ = l_Lean_stringToMessageData(v___x_3171_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__6(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__5));
v___x_3175_ = l_Lean_stringToMessageData(v___x_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object* v_mvarId_3176_, uint8_t v_substLHS_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v___y_3184_; lean_object* v___y_3203_; lean_object* v___x_3206_; lean_object* v___f_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3206_ = lean_box(v_substLHS_3177_);
lean_inc_n(v_mvarId_3176_, 2);
v___f_3207_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3207_, 0, v_mvarId_3176_);
lean_closure_set(v___f_3207_, 1, v___x_3206_);
v___x_3208_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__1));
v___x_3209_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3176_, v___x_3208_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_dec_ref_known(v___x_3209_, 1);
lean_inc(v_mvarId_3176_);
v___x_3210_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed), 8, 3);
lean_closure_set(v___x_3210_, 0, lean_box(0));
lean_closure_set(v___x_3210_, 1, v_mvarId_3176_);
lean_closure_set(v___x_3210_, 2, v___f_3207_);
v___x_3211_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v___x_3210_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_dec(v_mvarId_3176_);
return v___x_3211_;
}
else
{
lean_object* v_a_3212_; uint8_t v___y_3214_; uint8_t v___x_3249_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc(v_a_3212_);
v___x_3249_ = l_Lean_Exception_isInterrupt(v_a_3212_);
if (v___x_3249_ == 0)
{
uint8_t v___x_3250_; 
lean_inc(v_a_3212_);
v___x_3250_ = l_Lean_Exception_isRuntime(v_a_3212_);
v___y_3214_ = v___x_3250_;
goto v___jp_3213_;
}
else
{
v___y_3214_ = v___x_3249_;
goto v___jp_3213_;
}
v___jp_3213_:
{
if (v___y_3214_ == 0)
{
lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3247_; 
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3247_ == 0)
{
lean_object* v_unused_3248_; 
v_unused_3248_ = lean_ctor_get(v___x_3211_, 0);
lean_dec(v_unused_3248_);
v___x_3216_ = v___x_3211_;
v_isShared_3217_ = v_isSharedCheck_3247_;
goto v_resetjp_3215_;
}
else
{
lean_dec(v___x_3211_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3247_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v_toCold_3218_; lean_object* v_options_3219_; lean_object* v_inheritedTraceOptions_3220_; uint8_t v_hasTrace_3221_; lean_object* v___x_3222_; lean_object* v___f_3223_; 
v_toCold_3218_ = lean_ctor_get(v_a_3180_, 0);
v_options_3219_ = lean_ctor_get(v_toCold_3218_, 2);
v_inheritedTraceOptions_3220_ = lean_ctor_get(v_toCold_3218_, 11);
v_hasTrace_3221_ = lean_ctor_get_uint8(v_options_3219_, sizeof(void*)*1);
v___x_3222_ = lean_box(v___y_3214_);
lean_inc(v_mvarId_3176_);
v___f_3223_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__1___boxed), 8, 2);
lean_closure_set(v___f_3223_, 0, v_mvarId_3176_);
lean_closure_set(v___f_3223_, 1, v___x_3222_);
if (v_hasTrace_3221_ == 0)
{
lean_del_object(v___x_3216_);
lean_dec(v_a_3212_);
lean_dec(v_mvarId_3176_);
v___y_3203_ = v___f_3223_;
goto v___jp_3202_;
}
else
{
lean_object* v___x_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
v___x_3224_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3225_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__2, &l_Lean_Meta_introSubstEq___closed__2_once, _init_l_Lean_Meta_introSubstEq___closed__2);
v___x_3226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3220_, v_options_3219_, v___x_3225_);
if (v___x_3226_ == 0)
{
lean_del_object(v___x_3216_);
lean_dec(v_a_3212_);
lean_dec(v_mvarId_3176_);
v___y_3203_ = v___f_3223_;
goto v___jp_3202_;
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3233_; 
lean_dec_ref(v___f_3223_);
v___x_3227_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__4, &l_Lean_Meta_introSubstEq___closed__4_once, _init_l_Lean_Meta_introSubstEq___closed__4);
v___x_3228_ = l_Lean_Exception_toMessageData(v_a_3212_);
v___x_3229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3227_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__6, &l_Lean_Meta_introSubstEq___closed__6_once, _init_l_Lean_Meta_introSubstEq___closed__6);
v___x_3231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3229_);
lean_ctor_set(v___x_3231_, 1, v___x_3230_);
lean_inc(v_mvarId_3176_);
if (v_isShared_3217_ == 0)
{
lean_ctor_set(v___x_3216_, 0, v_mvarId_3176_);
v___x_3233_ = v___x_3216_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_mvarId_3176_);
v___x_3233_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3231_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
v___x_3235_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_3224_, v___x_3234_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3176_, v___y_3214_, v_a_3236_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
v___y_3184_ = v___x_3237_;
goto v___jp_3183_;
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec(v_mvarId_3176_);
v_a_3238_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3235_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3235_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
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
lean_dec(v_a_3212_);
lean_dec(v_mvarId_3176_);
return v___x_3211_;
}
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec_ref(v___f_3207_);
lean_dec(v_mvarId_3176_);
v_a_3251_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3209_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3209_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
v___jp_3183_:
{
if (lean_obj_tag(v___y_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3193_; 
v_a_3185_ = lean_ctor_get(v___y_3184_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___y_3184_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3187_ = v___y_3184_;
v_isShared_3188_ = v_isSharedCheck_3193_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___y_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3193_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v_a_3189_; lean_object* v___x_3191_; 
v_a_3189_ = lean_ctor_get(v_a_3185_, 0);
lean_inc(v_a_3189_);
lean_dec(v_a_3185_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v_a_3189_);
v___x_3191_ = v___x_3187_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_a_3189_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
else
{
lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
v_a_3194_ = lean_ctor_get(v___y_3184_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___y_3184_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___y_3184_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___y_3184_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
v___jp_3202_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3204_ = lean_box(0);
lean_inc(v_a_3181_);
lean_inc_ref(v_a_3180_);
lean_inc(v_a_3179_);
lean_inc_ref(v_a_3178_);
v___x_3205_ = lean_apply_6(v___y_3203_, v___x_3204_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_, lean_box(0));
v___y_3184_ = v___x_3205_;
goto v___jp_3183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object* v_mvarId_3259_, lean_object* v_substLHS_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_){
_start:
{
uint8_t v_substLHS_boxed_3266_; lean_object* v_res_3267_; 
v_substLHS_boxed_3266_ = lean_unbox(v_substLHS_3260_);
v_res_3267_ = l_Lean_Meta_introSubstEq(v_mvarId_3259_, v_substLHS_boxed_3266_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_);
lean_dec(v_a_3264_);
lean_dec_ref(v_a_3263_);
lean_dec(v_a_3262_);
lean_dec_ref(v_a_3261_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object* v_00_u03b1_3268_, lean_object* v_msg_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object* v_00_u03b1_3276_, lean_object* v_msg_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(v_00_u03b1_3276_, v_msg_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object* v_mvarId_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_){
_start:
{
lean_object* v___x_3290_; 
v___x_3290_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3284_, v___y_3286_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object* v_mvarId_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(v_mvarId_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v_mvarId_3291_);
return v_res_3297_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object* v_00_u03b2_3298_, lean_object* v_x_3299_, lean_object* v_x_3300_){
_start:
{
uint8_t v___x_3301_; 
v___x_3301_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3299_, v_x_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3302_, lean_object* v_x_3303_, lean_object* v_x_3304_){
_start:
{
uint8_t v_res_3305_; lean_object* v_r_3306_; 
v_res_3305_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(v_00_u03b2_3302_, v_x_3303_, v_x_3304_);
lean_dec(v_x_3304_);
lean_dec_ref(v_x_3303_);
v_r_3306_ = lean_box(v_res_3305_);
return v_r_3306_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_3307_, lean_object* v_x_3308_, size_t v_x_3309_, lean_object* v_x_3310_){
_start:
{
uint8_t v___x_3311_; 
v___x_3311_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3308_, v_x_3309_, v_x_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3312_, lean_object* v_x_3313_, lean_object* v_x_3314_, lean_object* v_x_3315_){
_start:
{
size_t v_x_11025__boxed_3316_; uint8_t v_res_3317_; lean_object* v_r_3318_; 
v_x_11025__boxed_3316_ = lean_unbox_usize(v_x_3314_);
lean_dec(v_x_3314_);
v_res_3317_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(v_00_u03b2_3312_, v_x_3313_, v_x_11025__boxed_3316_, v_x_3315_);
lean_dec(v_x_3315_);
lean_dec_ref(v_x_3313_);
v_r_3318_ = lean_box(v_res_3317_);
return v_r_3318_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3319_, lean_object* v_keys_3320_, lean_object* v_vals_3321_, lean_object* v_heq_3322_, lean_object* v_i_3323_, lean_object* v_k_3324_){
_start:
{
uint8_t v___x_3325_; 
v___x_3325_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3320_, v_i_3323_, v_k_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3326_, lean_object* v_keys_3327_, lean_object* v_vals_3328_, lean_object* v_heq_3329_, lean_object* v_i_3330_, lean_object* v_k_3331_){
_start:
{
uint8_t v_res_3332_; lean_object* v_r_3333_; 
v_res_3332_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(v_00_u03b2_3326_, v_keys_3327_, v_vals_3328_, v_heq_3329_, v_i_3330_, v_k_3331_);
lean_dec(v_k_3331_);
lean_dec_ref(v_vals_3328_);
lean_dec_ref(v_keys_3327_);
v_r_3333_ = lean_box(v_res_3332_);
return v_r_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* v_x_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v___x_3340_; 
v___x_3340_ = l_Lean_Meta_saveState___redArg(v___y_3336_, v___y_3338_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3342_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
lean_inc(v___y_3338_);
lean_inc_ref(v___y_3337_);
lean_inc(v___y_3336_);
lean_inc_ref(v___y_3335_);
v___x_3342_ = lean_apply_5(v_x_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, lean_box(0));
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3351_; 
lean_dec(v_a_3341_);
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3345_ = v___x_3342_;
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3342_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3347_; lean_object* v___x_3349_; 
v___x_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3347_, 0, v_a_3343_);
if (v_isShared_3346_ == 0)
{
lean_ctor_set(v___x_3345_, 0, v___x_3347_);
v___x_3349_ = v___x_3345_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v___x_3347_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3381_; 
v_a_3352_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3354_ = v___x_3342_;
v_isShared_3355_ = v_isSharedCheck_3381_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3342_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3381_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
uint8_t v___y_3357_; uint8_t v___x_3379_; 
v___x_3379_ = l_Lean_Exception_isInterrupt(v_a_3352_);
if (v___x_3379_ == 0)
{
uint8_t v___x_3380_; 
lean_inc(v_a_3352_);
v___x_3380_ = l_Lean_Exception_isRuntime(v_a_3352_);
v___y_3357_ = v___x_3380_;
goto v___jp_3356_;
}
else
{
v___y_3357_ = v___x_3379_;
goto v___jp_3356_;
}
v___jp_3356_:
{
if (v___y_3357_ == 0)
{
lean_object* v___x_3358_; 
lean_del_object(v___x_3354_);
lean_dec(v_a_3352_);
v___x_3358_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3341_, v___y_3336_, v___y_3338_);
lean_dec(v_a_3341_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3366_; 
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3366_ == 0)
{
lean_object* v_unused_3367_; 
v_unused_3367_ = lean_ctor_get(v___x_3358_, 0);
lean_dec(v_unused_3367_);
v___x_3360_ = v___x_3358_;
v_isShared_3361_ = v_isSharedCheck_3366_;
goto v_resetjp_3359_;
}
else
{
lean_dec(v___x_3358_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3366_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3362_; lean_object* v___x_3364_; 
v___x_3362_ = lean_box(0);
if (v_isShared_3361_ == 0)
{
lean_ctor_set(v___x_3360_, 0, v___x_3362_);
v___x_3364_ = v___x_3360_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3362_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
v_a_3368_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3358_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3358_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
else
{
lean_object* v___x_3377_; 
lean_dec(v_a_3341_);
if (v_isShared_3355_ == 0)
{
v___x_3377_ = v___x_3354_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3352_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v_x_3334_);
v_a_3382_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3340_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3340_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object* v_x_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object* v_00_u03b1_3397_, lean_object* v_x_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v___x_3404_; 
v___x_3404_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object* v_00_u03b1_3405_, lean_object* v_x_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(v_00_u03b1_3405_, v_x_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* v_mvarId_3413_, lean_object* v_hFVarId_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___boxed), 7, 2);
lean_closure_set(v___x_3420_, 0, v_mvarId_3413_);
lean_closure_set(v___x_3420_, 1, v_hFVarId_3414_);
v___x_3421_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3420_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object* v_mvarId_3422_, lean_object* v_hFVarId_3423_, lean_object* v_a_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lean_Meta_substVar_x3f(v_mvarId_3422_, v_hFVarId_3423_, v_a_3424_, v_a_3425_, v_a_3426_, v_a_3427_);
lean_dec(v_a_3427_);
lean_dec_ref(v_a_3426_);
lean_dec(v_a_3425_);
lean_dec_ref(v_a_3424_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* v_mvarId_3430_, lean_object* v_hFVarId_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_){
_start:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3437_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___boxed), 7, 2);
lean_closure_set(v___x_3437_, 0, v_mvarId_3430_);
lean_closure_set(v___x_3437_, 1, v_hFVarId_3431_);
v___x_3438_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3437_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object* v_mvarId_3439_, lean_object* v_hFVarId_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_Meta_subst_x3f(v_mvarId_3439_, v_hFVarId_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_);
lean_dec(v_a_3444_);
lean_dec_ref(v_a_3443_);
lean_dec(v_a_3442_);
lean_dec_ref(v_a_3441_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* v_mvarId_3447_, lean_object* v_hFVarId_3448_, uint8_t v_symm_3449_, lean_object* v_fvarSubst_3450_, uint8_t v_clearH_3451_, uint8_t v_tryToSkip_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3458_ = lean_box(v_symm_3449_);
v___x_3459_ = lean_box(v_clearH_3451_);
v___x_3460_ = lean_box(v_tryToSkip_3452_);
v___x_3461_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_3461_, 0, v_mvarId_3447_);
lean_closure_set(v___x_3461_, 1, v_hFVarId_3448_);
lean_closure_set(v___x_3461_, 2, v___x_3458_);
lean_closure_set(v___x_3461_, 3, v_fvarSubst_3450_);
lean_closure_set(v___x_3461_, 4, v___x_3459_);
lean_closure_set(v___x_3461_, 5, v___x_3460_);
v___x_3462_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3461_, v_a_3453_, v_a_3454_, v_a_3455_, v_a_3456_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* v_mvarId_3463_, lean_object* v_hFVarId_3464_, lean_object* v_symm_3465_, lean_object* v_fvarSubst_3466_, lean_object* v_clearH_3467_, lean_object* v_tryToSkip_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_){
_start:
{
uint8_t v_symm_boxed_3474_; uint8_t v_clearH_boxed_3475_; uint8_t v_tryToSkip_boxed_3476_; lean_object* v_res_3477_; 
v_symm_boxed_3474_ = lean_unbox(v_symm_3465_);
v_clearH_boxed_3475_ = lean_unbox(v_clearH_3467_);
v_tryToSkip_boxed_3476_ = lean_unbox(v_tryToSkip_3468_);
v_res_3477_ = l_Lean_Meta_substCore_x3f(v_mvarId_3463_, v_hFVarId_3464_, v_symm_boxed_3474_, v_fvarSubst_3466_, v_clearH_boxed_3475_, v_tryToSkip_boxed_3476_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_);
lean_dec(v_a_3472_);
lean_dec_ref(v_a_3471_);
lean_dec(v_a_3470_);
lean_dec_ref(v_a_3469_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* v_mvarId_3478_, lean_object* v_hFVarId_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_){
_start:
{
lean_object* v___x_3485_; 
lean_inc(v_mvarId_3478_);
v___x_3485_ = l_Lean_Meta_substVar_x3f(v_mvarId_3478_, v_hFVarId_3479_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_);
if (lean_obj_tag(v___x_3485_) == 0)
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3497_; 
v_a_3486_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3488_ = v___x_3485_;
v_isShared_3489_ = v_isSharedCheck_3497_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3485_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3497_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
if (lean_obj_tag(v_a_3486_) == 0)
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v_mvarId_3478_);
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_mvarId_3478_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
else
{
lean_object* v_val_3493_; lean_object* v___x_3495_; 
lean_dec(v_mvarId_3478_);
v_val_3493_ = lean_ctor_get(v_a_3486_, 0);
lean_inc(v_val_3493_);
lean_dec_ref_known(v_a_3486_, 1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v_val_3493_);
v___x_3495_ = v___x_3488_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_val_3493_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec(v_mvarId_3478_);
v_a_3498_ = lean_ctor_get(v___x_3485_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3485_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3485_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3485_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object* v_mvarId_3506_, lean_object* v_hFVarId_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_){
_start:
{
lean_object* v_res_3513_; 
v_res_3513_ = l_Lean_Meta_trySubstVar(v_mvarId_3506_, v_hFVarId_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_);
lean_dec(v_a_3511_);
lean_dec_ref(v_a_3510_);
lean_dec(v_a_3509_);
lean_dec_ref(v_a_3508_);
return v_res_3513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* v_mvarId_3514_, lean_object* v_hFVarId_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_){
_start:
{
lean_object* v___x_3521_; 
lean_inc(v_mvarId_3514_);
v___x_3521_ = l_Lean_Meta_subst_x3f(v_mvarId_3514_, v_hFVarId_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v_a_3519_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3533_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3524_ = v___x_3521_;
v_isShared_3525_ = v_isSharedCheck_3533_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3521_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3533_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
if (lean_obj_tag(v_a_3522_) == 0)
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 0, v_mvarId_3514_);
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_mvarId_3514_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
else
{
lean_object* v_val_3529_; lean_object* v___x_3531_; 
lean_dec(v_mvarId_3514_);
v_val_3529_ = lean_ctor_get(v_a_3522_, 0);
lean_inc(v_val_3529_);
lean_dec_ref_known(v_a_3522_, 1);
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 0, v_val_3529_);
v___x_3531_ = v___x_3524_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_val_3529_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
lean_dec(v_mvarId_3514_);
v_a_3534_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3521_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3521_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object* v_mvarId_3542_, lean_object* v_hFVarId_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l_Lean_Meta_trySubst(v_mvarId_3542_, v_hFVarId_3543_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
lean_dec(v_a_3545_);
lean_dec_ref(v_a_3544_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_mvarId_3553_, lean_object* v_as_3554_, size_t v_sz_3555_, size_t v_i_3556_, lean_object* v_b_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_){
_start:
{
uint8_t v___x_3563_; 
v___x_3563_ = lean_usize_dec_lt(v_i_3556_, v_sz_3555_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; 
lean_dec(v_mvarId_3553_);
v___x_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3564_, 0, v_b_3557_);
return v___x_3564_;
}
else
{
lean_object* v_snd_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3618_; 
v_snd_3565_ = lean_ctor_get(v_b_3557_, 1);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_b_3557_);
if (v_isSharedCheck_3618_ == 0)
{
lean_object* v_unused_3619_; 
v_unused_3619_ = lean_ctor_get(v_b_3557_, 0);
lean_dec(v_unused_3619_);
v___x_3567_ = v_b_3557_;
v_isShared_3568_ = v_isSharedCheck_3618_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_snd_3565_);
lean_dec(v_b_3557_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3618_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3569_; lean_object* v_a_3571_; lean_object* v_a_3578_; 
v___x_3569_ = lean_box(0);
v_a_3578_ = lean_array_uget(v_as_3554_, v_i_3556_);
if (lean_obj_tag(v_a_3578_) == 0)
{
v_a_3571_ = v_snd_3565_;
goto v___jp_3570_;
}
else
{
lean_object* v_val_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3617_; 
v_val_3579_ = lean_ctor_get(v_a_3578_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v_a_3578_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3581_ = v_a_3578_;
v_isShared_3582_ = v_isSharedCheck_3617_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_val_3579_);
lean_dec(v_a_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3617_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3583_ = lean_box(0);
v___x_3584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3585_ = l_Lean_LocalDecl_fvarId(v_val_3579_);
lean_dec(v_val_3579_);
lean_inc(v_mvarId_3553_);
v___x_3586_ = l_Lean_Meta_subst_x3f(v_mvarId_3553_, v___x_3585_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3608_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3589_ = v___x_3586_;
v_isShared_3590_ = v_isSharedCheck_3608_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3586_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3608_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
if (lean_obj_tag(v_a_3587_) == 1)
{
lean_object* v___x_3592_; 
lean_del_object(v___x_3567_);
lean_dec(v_mvarId_3553_);
lean_inc_ref(v_a_3587_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v_a_3587_);
v___x_3592_ = v___x_3581_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3587_);
v___x_3592_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3605_; 
v_isSharedCheck_3605_ = !lean_is_exclusive(v_a_3587_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; 
v_unused_3606_ = lean_ctor_get(v_a_3587_, 0);
lean_dec(v_unused_3606_);
v___x_3594_ = v_a_3587_;
v_isShared_3595_ = v_isSharedCheck_3605_;
goto v_resetjp_3593_;
}
else
{
lean_dec(v_a_3587_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3605_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3596_; lean_object* v___x_3598_; 
v___x_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3592_);
lean_ctor_set(v___x_3596_, 1, v___x_3583_);
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3596_);
v___x_3598_ = v___x_3594_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v___x_3596_);
v___x_3598_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3602_; 
v___x_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3598_);
v___x_3600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3599_);
lean_ctor_set(v___x_3600_, 1, v_snd_3565_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3600_);
v___x_3602_ = v___x_3589_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
}
else
{
lean_del_object(v___x_3589_);
lean_dec(v_a_3587_);
lean_del_object(v___x_3581_);
lean_dec(v_snd_3565_);
v_a_3571_ = v___x_3584_;
goto v___jp_3570_;
}
}
}
else
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3616_; 
lean_del_object(v___x_3581_);
lean_del_object(v___x_3567_);
lean_dec(v_snd_3565_);
lean_dec(v_mvarId_3553_);
v_a_3609_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3611_ = v___x_3586_;
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3586_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3614_; 
if (v_isShared_3612_ == 0)
{
v___x_3614_ = v___x_3611_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_a_3609_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
}
}
v___jp_3570_:
{
lean_object* v___x_3573_; 
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 1, v_a_3571_);
lean_ctor_set(v___x_3567_, 0, v___x_3569_);
v___x_3573_ = v___x_3567_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3569_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v_a_3571_);
v___x_3573_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
size_t v___x_3574_; size_t v___x_3575_; 
v___x_3574_ = ((size_t)1ULL);
v___x_3575_ = lean_usize_add(v_i_3556_, v___x_3574_);
v_i_3556_ = v___x_3575_;
v_b_3557_ = v___x_3573_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_mvarId_3620_, lean_object* v_as_3621_, lean_object* v_sz_3622_, lean_object* v_i_3623_, lean_object* v_b_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
size_t v_sz_boxed_3630_; size_t v_i_boxed_3631_; lean_object* v_res_3632_; 
v_sz_boxed_3630_ = lean_unbox_usize(v_sz_3622_);
lean_dec(v_sz_3622_);
v_i_boxed_3631_ = lean_unbox_usize(v_i_3623_);
lean_dec(v_i_3623_);
v_res_3632_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3620_, v_as_3621_, v_sz_boxed_3630_, v_i_boxed_3631_, v_b_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_);
lean_dec(v___y_3628_);
lean_dec_ref(v___y_3627_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec_ref(v_as_3621_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object* v_mvarId_3633_, lean_object* v_as_3634_, size_t v_sz_3635_, size_t v_i_3636_, lean_object* v_b_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_){
_start:
{
uint8_t v___x_3643_; 
v___x_3643_ = lean_usize_dec_lt(v_i_3636_, v_sz_3635_);
if (v___x_3643_ == 0)
{
lean_object* v___x_3644_; 
lean_dec(v_mvarId_3633_);
v___x_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3644_, 0, v_b_3637_);
return v___x_3644_;
}
else
{
lean_object* v_snd_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3698_; 
v_snd_3645_ = lean_ctor_get(v_b_3637_, 1);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_b_3637_);
if (v_isSharedCheck_3698_ == 0)
{
lean_object* v_unused_3699_; 
v_unused_3699_ = lean_ctor_get(v_b_3637_, 0);
lean_dec(v_unused_3699_);
v___x_3647_ = v_b_3637_;
v_isShared_3648_ = v_isSharedCheck_3698_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_snd_3645_);
lean_dec(v_b_3637_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3698_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3649_; lean_object* v_a_3651_; lean_object* v_a_3658_; 
v___x_3649_ = lean_box(0);
v_a_3658_ = lean_array_uget(v_as_3634_, v_i_3636_);
if (lean_obj_tag(v_a_3658_) == 0)
{
v_a_3651_ = v_snd_3645_;
goto v___jp_3650_;
}
else
{
lean_object* v_val_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3697_; 
v_val_3659_ = lean_ctor_get(v_a_3658_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_a_3658_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3661_ = v_a_3658_;
v_isShared_3662_ = v_isSharedCheck_3697_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_val_3659_);
lean_dec(v_a_3658_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3697_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3663_ = lean_box(0);
v___x_3664_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3665_ = l_Lean_LocalDecl_fvarId(v_val_3659_);
lean_dec(v_val_3659_);
lean_inc(v_mvarId_3633_);
v___x_3666_ = l_Lean_Meta_subst_x3f(v_mvarId_3633_, v___x_3665_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3688_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3669_ = v___x_3666_;
v_isShared_3670_ = v_isSharedCheck_3688_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3666_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3688_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
if (lean_obj_tag(v_a_3667_) == 1)
{
lean_object* v___x_3672_; 
lean_del_object(v___x_3647_);
lean_dec(v_mvarId_3633_);
lean_inc_ref(v_a_3667_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v_a_3667_);
v___x_3672_ = v___x_3661_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3685_; 
v_isSharedCheck_3685_ = !lean_is_exclusive(v_a_3667_);
if (v_isSharedCheck_3685_ == 0)
{
lean_object* v_unused_3686_; 
v_unused_3686_ = lean_ctor_get(v_a_3667_, 0);
lean_dec(v_unused_3686_);
v___x_3674_ = v_a_3667_;
v_isShared_3675_ = v_isSharedCheck_3685_;
goto v_resetjp_3673_;
}
else
{
lean_dec(v_a_3667_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3685_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3676_; lean_object* v___x_3678_; 
v___x_3676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3672_);
lean_ctor_set(v___x_3676_, 1, v___x_3663_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set_tag(v___x_3674_, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3676_);
v___x_3678_ = v___x_3674_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3676_);
v___x_3678_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3682_; 
v___x_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3678_);
v___x_3680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
lean_ctor_set(v___x_3680_, 1, v_snd_3645_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3680_);
v___x_3682_ = v___x_3669_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v___x_3680_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
}
else
{
lean_del_object(v___x_3669_);
lean_dec(v_a_3667_);
lean_del_object(v___x_3661_);
lean_dec(v_snd_3645_);
v_a_3651_ = v___x_3664_;
goto v___jp_3650_;
}
}
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_del_object(v___x_3661_);
lean_del_object(v___x_3647_);
lean_dec(v_snd_3645_);
lean_dec(v_mvarId_3633_);
v_a_3689_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3666_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3666_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
}
v___jp_3650_:
{
lean_object* v___x_3653_; 
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 1, v_a_3651_);
lean_ctor_set(v___x_3647_, 0, v___x_3649_);
v___x_3653_ = v___x_3647_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3657_, 1, v_a_3651_);
v___x_3653_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
size_t v___x_3654_; size_t v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = ((size_t)1ULL);
v___x_3655_ = lean_usize_add(v_i_3636_, v___x_3654_);
v___x_3656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3633_, v_as_3634_, v_sz_3635_, v___x_3655_, v___x_3653_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
return v___x_3656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_3700_, lean_object* v_as_3701_, lean_object* v_sz_3702_, lean_object* v_i_3703_, lean_object* v_b_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
size_t v_sz_boxed_3710_; size_t v_i_boxed_3711_; lean_object* v_res_3712_; 
v_sz_boxed_3710_ = lean_unbox_usize(v_sz_3702_);
lean_dec(v_sz_3702_);
v_i_boxed_3711_ = lean_unbox_usize(v_i_3703_);
lean_dec(v_i_3703_);
v_res_3712_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3700_, v_as_3701_, v_sz_boxed_3710_, v_i_boxed_3711_, v_b_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec_ref(v_as_3701_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* v_init_3713_, lean_object* v_mvarId_3714_, lean_object* v_n_3715_, lean_object* v_b_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
if (lean_obj_tag(v_n_3715_) == 0)
{
lean_object* v_cs_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; size_t v_sz_3725_; size_t v___x_3726_; lean_object* v___x_3727_; 
v_cs_3722_ = lean_ctor_get(v_n_3715_, 0);
v___x_3723_ = lean_box(0);
v___x_3724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
lean_ctor_set(v___x_3724_, 1, v_b_3716_);
v_sz_3725_ = lean_array_size(v_cs_3722_);
v___x_3726_ = ((size_t)0ULL);
v___x_3727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3713_, v_mvarId_3714_, v_cs_3722_, v_sz_3725_, v___x_3726_, v___x_3724_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3742_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3730_ = v___x_3727_;
v_isShared_3731_ = v_isSharedCheck_3742_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3727_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3742_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v_fst_3732_; 
v_fst_3732_ = lean_ctor_get(v_a_3728_, 0);
if (lean_obj_tag(v_fst_3732_) == 0)
{
lean_object* v_snd_3733_; lean_object* v___x_3734_; lean_object* v___x_3736_; 
v_snd_3733_ = lean_ctor_get(v_a_3728_, 1);
lean_inc(v_snd_3733_);
lean_dec(v_a_3728_);
v___x_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3734_, 0, v_snd_3733_);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 0, v___x_3734_);
v___x_3736_ = v___x_3730_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
else
{
lean_object* v_val_3738_; lean_object* v___x_3740_; 
lean_inc_ref(v_fst_3732_);
lean_dec(v_a_3728_);
v_val_3738_ = lean_ctor_get(v_fst_3732_, 0);
lean_inc(v_val_3738_);
lean_dec_ref_known(v_fst_3732_, 1);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 0, v_val_3738_);
v___x_3740_ = v___x_3730_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_val_3738_);
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
v_a_3743_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3745_ = v___x_3727_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_a_3743_);
lean_dec(v___x_3727_);
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
lean_object* v_vs_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; size_t v_sz_3754_; size_t v___x_3755_; lean_object* v___x_3756_; 
v_vs_3751_ = lean_ctor_get(v_n_3715_, 0);
v___x_3752_ = lean_box(0);
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set(v___x_3753_, 1, v_b_3716_);
v_sz_3754_ = lean_array_size(v_vs_3751_);
v___x_3755_ = ((size_t)0ULL);
v___x_3756_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3714_, v_vs_3751_, v_sz_3754_, v___x_3755_, v___x_3753_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3771_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3759_ = v___x_3756_;
v_isShared_3760_ = v_isSharedCheck_3771_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3756_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3771_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v_fst_3761_; 
v_fst_3761_ = lean_ctor_get(v_a_3757_, 0);
if (lean_obj_tag(v_fst_3761_) == 0)
{
lean_object* v_snd_3762_; lean_object* v___x_3763_; lean_object* v___x_3765_; 
v_snd_3762_ = lean_ctor_get(v_a_3757_, 1);
lean_inc(v_snd_3762_);
lean_dec(v_a_3757_);
v___x_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3763_, 0, v_snd_3762_);
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 0, v___x_3763_);
v___x_3765_ = v___x_3759_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3763_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
else
{
lean_object* v_val_3767_; lean_object* v___x_3769_; 
lean_inc_ref(v_fst_3761_);
lean_dec(v_a_3757_);
v_val_3767_ = lean_ctor_get(v_fst_3761_, 0);
lean_inc(v_val_3767_);
lean_dec_ref_known(v_fst_3761_, 1);
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 0, v_val_3767_);
v___x_3769_ = v___x_3759_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_val_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3779_; 
v_a_3772_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3774_ = v___x_3756_;
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3756_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3777_; 
if (v_isShared_3775_ == 0)
{
v___x_3777_ = v___x_3774_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3772_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* v_init_3780_, lean_object* v_mvarId_3781_, lean_object* v_as_3782_, size_t v_sz_3783_, size_t v_i_3784_, lean_object* v_b_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_){
_start:
{
uint8_t v___x_3791_; 
v___x_3791_ = lean_usize_dec_lt(v_i_3784_, v_sz_3783_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; 
lean_dec(v_mvarId_3781_);
v___x_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3792_, 0, v_b_3785_);
return v___x_3792_;
}
else
{
lean_object* v_snd_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3827_; 
v_snd_3793_ = lean_ctor_get(v_b_3785_, 1);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_b_3785_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; 
v_unused_3828_ = lean_ctor_get(v_b_3785_, 0);
lean_dec(v_unused_3828_);
v___x_3795_ = v_b_3785_;
v_isShared_3796_ = v_isSharedCheck_3827_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_snd_3793_);
lean_dec(v_b_3785_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3827_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3797_; lean_object* v_a_3798_; lean_object* v___x_3799_; 
v___x_3797_ = lean_box(0);
v_a_3798_ = lean_array_uget_borrowed(v_as_3782_, v_i_3784_);
lean_inc(v_snd_3793_);
lean_inc(v_mvarId_3781_);
v___x_3799_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3780_, v_mvarId_3781_, v_a_3798_, v_snd_3793_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3818_; 
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3802_ = v___x_3799_;
v_isShared_3803_ = v_isSharedCheck_3818_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_dec(v___x_3799_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3818_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
if (lean_obj_tag(v_a_3800_) == 0)
{
lean_object* v___x_3804_; lean_object* v___x_3806_; 
lean_dec(v_mvarId_3781_);
v___x_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3804_, 0, v_a_3800_);
if (v_isShared_3796_ == 0)
{
lean_ctor_set(v___x_3795_, 0, v___x_3804_);
v___x_3806_ = v___x_3795_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3804_);
lean_ctor_set(v_reuseFailAlloc_3810_, 1, v_snd_3793_);
v___x_3806_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
lean_object* v___x_3808_; 
if (v_isShared_3803_ == 0)
{
lean_ctor_set(v___x_3802_, 0, v___x_3806_);
v___x_3808_ = v___x_3802_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3806_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; 
lean_del_object(v___x_3802_);
lean_dec(v_snd_3793_);
v_a_3811_ = lean_ctor_get(v_a_3800_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v_a_3800_, 1);
if (v_isShared_3796_ == 0)
{
lean_ctor_set(v___x_3795_, 1, v_a_3811_);
lean_ctor_set(v___x_3795_, 0, v___x_3797_);
v___x_3813_ = v___x_3795_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v___x_3797_);
lean_ctor_set(v_reuseFailAlloc_3817_, 1, v_a_3811_);
v___x_3813_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
size_t v___x_3814_; size_t v___x_3815_; 
v___x_3814_ = ((size_t)1ULL);
v___x_3815_ = lean_usize_add(v_i_3784_, v___x_3814_);
v_i_3784_ = v___x_3815_;
v_b_3785_ = v___x_3813_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
lean_del_object(v___x_3795_);
lean_dec(v_snd_3793_);
lean_dec(v_mvarId_3781_);
v_a_3819_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3799_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3799_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3829_, lean_object* v_mvarId_3830_, lean_object* v_as_3831_, lean_object* v_sz_3832_, lean_object* v_i_3833_, lean_object* v_b_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
size_t v_sz_boxed_3840_; size_t v_i_boxed_3841_; lean_object* v_res_3842_; 
v_sz_boxed_3840_ = lean_unbox_usize(v_sz_3832_);
lean_dec(v_sz_3832_);
v_i_boxed_3841_ = lean_unbox_usize(v_i_3833_);
lean_dec(v_i_3833_);
v_res_3842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3829_, v_mvarId_3830_, v_as_3831_, v_sz_boxed_3840_, v_i_boxed_3841_, v_b_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec_ref(v_as_3831_);
lean_dec_ref(v_init_3829_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* v_init_3843_, lean_object* v_mvarId_3844_, lean_object* v_n_3845_, lean_object* v_b_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3843_, v_mvarId_3844_, v_n_3845_, v_b_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec_ref(v_n_3845_);
lean_dec_ref(v_init_3843_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object* v_mvarId_3856_, lean_object* v_as_3857_, size_t v_sz_3858_, size_t v_i_3859_, lean_object* v_b_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_){
_start:
{
uint8_t v___x_3866_; 
v___x_3866_ = lean_usize_dec_lt(v_i_3859_, v_sz_3858_);
if (v___x_3866_ == 0)
{
lean_object* v___x_3867_; 
lean_dec(v_mvarId_3856_);
v___x_3867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3867_, 0, v_b_3860_);
return v___x_3867_;
}
else
{
lean_object* v_snd_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3920_; 
v_snd_3868_ = lean_ctor_get(v_b_3860_, 1);
v_isSharedCheck_3920_ = !lean_is_exclusive(v_b_3860_);
if (v_isSharedCheck_3920_ == 0)
{
lean_object* v_unused_3921_; 
v_unused_3921_ = lean_ctor_get(v_b_3860_, 0);
lean_dec(v_unused_3921_);
v___x_3870_ = v_b_3860_;
v_isShared_3871_ = v_isSharedCheck_3920_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_snd_3868_);
lean_dec(v_b_3860_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3920_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3872_; lean_object* v_a_3874_; lean_object* v_a_3881_; 
v___x_3872_ = lean_box(0);
v_a_3881_ = lean_array_uget(v_as_3857_, v_i_3859_);
if (lean_obj_tag(v_a_3881_) == 0)
{
v_a_3874_ = v_snd_3868_;
goto v___jp_3873_;
}
else
{
lean_object* v_val_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3919_; 
v_val_3882_ = lean_ctor_get(v_a_3881_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v_a_3881_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3884_ = v_a_3881_;
v_isShared_3885_ = v_isSharedCheck_3919_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_val_3882_);
lean_dec(v_a_3881_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3919_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3886_ = lean_box(0);
v___x_3887_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3888_ = l_Lean_LocalDecl_fvarId(v_val_3882_);
lean_dec(v_val_3882_);
lean_inc(v_mvarId_3856_);
v___x_3889_ = l_Lean_Meta_subst_x3f(v_mvarId_3856_, v___x_3888_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3910_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3910_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3910_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3910_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
if (lean_obj_tag(v_a_3890_) == 1)
{
lean_object* v___x_3895_; 
lean_del_object(v___x_3870_);
lean_dec(v_mvarId_3856_);
lean_inc_ref(v_a_3890_);
if (v_isShared_3885_ == 0)
{
lean_ctor_set(v___x_3884_, 0, v_a_3890_);
v___x_3895_ = v___x_3884_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3907_; 
v_isSharedCheck_3907_ = !lean_is_exclusive(v_a_3890_);
if (v_isSharedCheck_3907_ == 0)
{
lean_object* v_unused_3908_; 
v_unused_3908_ = lean_ctor_get(v_a_3890_, 0);
lean_dec(v_unused_3908_);
v___x_3897_ = v_a_3890_;
v_isShared_3898_ = v_isSharedCheck_3907_;
goto v_resetjp_3896_;
}
else
{
lean_dec(v_a_3890_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3907_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; lean_object* v___x_3901_; 
v___x_3899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3895_);
lean_ctor_set(v___x_3899_, 1, v___x_3886_);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 0, v___x_3899_);
v___x_3901_ = v___x_3897_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v___x_3899_);
v___x_3901_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
lean_object* v___x_3902_; lean_object* v___x_3904_; 
v___x_3902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
lean_ctor_set(v___x_3902_, 1, v_snd_3868_);
if (v_isShared_3893_ == 0)
{
lean_ctor_set(v___x_3892_, 0, v___x_3902_);
v___x_3904_ = v___x_3892_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v___x_3902_);
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
}
else
{
lean_del_object(v___x_3892_);
lean_dec(v_a_3890_);
lean_del_object(v___x_3884_);
lean_dec(v_snd_3868_);
v_a_3874_ = v___x_3887_;
goto v___jp_3873_;
}
}
}
else
{
lean_object* v_a_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_3918_; 
lean_del_object(v___x_3884_);
lean_del_object(v___x_3870_);
lean_dec(v_snd_3868_);
lean_dec(v_mvarId_3856_);
v_a_3911_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3913_ = v___x_3889_;
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_a_3911_);
lean_dec(v___x_3889_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v___x_3916_; 
if (v_isShared_3914_ == 0)
{
v___x_3916_ = v___x_3913_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3911_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
}
}
v___jp_3873_:
{
lean_object* v___x_3876_; 
if (v_isShared_3871_ == 0)
{
lean_ctor_set(v___x_3870_, 1, v_a_3874_);
lean_ctor_set(v___x_3870_, 0, v___x_3872_);
v___x_3876_ = v___x_3870_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v___x_3872_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_a_3874_);
v___x_3876_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
size_t v___x_3877_; size_t v___x_3878_; 
v___x_3877_ = ((size_t)1ULL);
v___x_3878_ = lean_usize_add(v_i_3859_, v___x_3877_);
v_i_3859_ = v___x_3878_;
v_b_3860_ = v___x_3876_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mvarId_3922_, lean_object* v_as_3923_, lean_object* v_sz_3924_, lean_object* v_i_3925_, lean_object* v_b_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
size_t v_sz_boxed_3932_; size_t v_i_boxed_3933_; lean_object* v_res_3934_; 
v_sz_boxed_3932_ = lean_unbox_usize(v_sz_3924_);
lean_dec(v_sz_3924_);
v_i_boxed_3933_ = lean_unbox_usize(v_i_3925_);
lean_dec(v_i_3925_);
v_res_3934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3922_, v_as_3923_, v_sz_boxed_3932_, v_i_boxed_3933_, v_b_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec_ref(v_as_3923_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object* v_mvarId_3935_, lean_object* v_as_3936_, size_t v_sz_3937_, size_t v_i_3938_, lean_object* v_b_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_){
_start:
{
uint8_t v___x_3945_; 
v___x_3945_ = lean_usize_dec_lt(v_i_3938_, v_sz_3937_);
if (v___x_3945_ == 0)
{
lean_object* v___x_3946_; 
lean_dec(v_mvarId_3935_);
v___x_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3946_, 0, v_b_3939_);
return v___x_3946_;
}
else
{
lean_object* v_snd_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3999_; 
v_snd_3947_ = lean_ctor_get(v_b_3939_, 1);
v_isSharedCheck_3999_ = !lean_is_exclusive(v_b_3939_);
if (v_isSharedCheck_3999_ == 0)
{
lean_object* v_unused_4000_; 
v_unused_4000_ = lean_ctor_get(v_b_3939_, 0);
lean_dec(v_unused_4000_);
v___x_3949_ = v_b_3939_;
v_isShared_3950_ = v_isSharedCheck_3999_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_snd_3947_);
lean_dec(v_b_3939_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3999_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3951_; lean_object* v_a_3953_; lean_object* v_a_3960_; 
v___x_3951_ = lean_box(0);
v_a_3960_ = lean_array_uget(v_as_3936_, v_i_3938_);
if (lean_obj_tag(v_a_3960_) == 0)
{
v_a_3953_ = v_snd_3947_;
goto v___jp_3952_;
}
else
{
lean_object* v_val_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3998_; 
v_val_3961_ = lean_ctor_get(v_a_3960_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_a_3960_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3963_ = v_a_3960_;
v_isShared_3964_ = v_isSharedCheck_3998_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_val_3961_);
lean_dec(v_a_3960_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3998_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3965_ = lean_box(0);
v___x_3966_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3967_ = l_Lean_LocalDecl_fvarId(v_val_3961_);
lean_dec(v_val_3961_);
lean_inc(v_mvarId_3935_);
v___x_3968_ = l_Lean_Meta_subst_x3f(v_mvarId_3935_, v___x_3967_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3989_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3971_ = v___x_3968_;
v_isShared_3972_ = v_isSharedCheck_3989_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3968_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3989_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
if (lean_obj_tag(v_a_3969_) == 1)
{
lean_object* v___x_3974_; 
lean_del_object(v___x_3949_);
lean_dec(v_mvarId_3935_);
lean_inc_ref(v_a_3969_);
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 0, v_a_3969_);
v___x_3974_ = v___x_3963_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3986_; 
v_isSharedCheck_3986_ = !lean_is_exclusive(v_a_3969_);
if (v_isSharedCheck_3986_ == 0)
{
lean_object* v_unused_3987_; 
v_unused_3987_ = lean_ctor_get(v_a_3969_, 0);
lean_dec(v_unused_3987_);
v___x_3976_ = v_a_3969_;
v_isShared_3977_ = v_isSharedCheck_3986_;
goto v_resetjp_3975_;
}
else
{
lean_dec(v_a_3969_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3986_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3978_; lean_object* v___x_3980_; 
v___x_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3974_);
lean_ctor_set(v___x_3978_, 1, v___x_3965_);
if (v_isShared_3977_ == 0)
{
lean_ctor_set(v___x_3976_, 0, v___x_3978_);
v___x_3980_ = v___x_3976_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3981_; lean_object* v___x_3983_; 
v___x_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
lean_ctor_set(v___x_3981_, 1, v_snd_3947_);
if (v_isShared_3972_ == 0)
{
lean_ctor_set(v___x_3971_, 0, v___x_3981_);
v___x_3983_ = v___x_3971_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v___x_3981_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
}
else
{
lean_del_object(v___x_3971_);
lean_dec(v_a_3969_);
lean_del_object(v___x_3963_);
lean_dec(v_snd_3947_);
v_a_3953_ = v___x_3966_;
goto v___jp_3952_;
}
}
}
else
{
lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_3997_; 
lean_del_object(v___x_3963_);
lean_del_object(v___x_3949_);
lean_dec(v_snd_3947_);
lean_dec(v_mvarId_3935_);
v_a_3990_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3992_ = v___x_3968_;
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v___x_3968_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3995_; 
if (v_isShared_3993_ == 0)
{
v___x_3995_ = v___x_3992_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3990_);
v___x_3995_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
return v___x_3995_;
}
}
}
}
}
v___jp_3952_:
{
lean_object* v___x_3955_; 
if (v_isShared_3950_ == 0)
{
lean_ctor_set(v___x_3949_, 1, v_a_3953_);
lean_ctor_set(v___x_3949_, 0, v___x_3951_);
v___x_3955_ = v___x_3949_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3951_);
lean_ctor_set(v_reuseFailAlloc_3959_, 1, v_a_3953_);
v___x_3955_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
size_t v___x_3956_; size_t v___x_3957_; lean_object* v___x_3958_; 
v___x_3956_ = ((size_t)1ULL);
v___x_3957_ = lean_usize_add(v_i_3938_, v___x_3956_);
v___x_3958_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3935_, v_as_3936_, v_sz_3937_, v___x_3957_, v___x_3955_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_);
return v___x_3958_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object* v_mvarId_4001_, lean_object* v_as_4002_, lean_object* v_sz_4003_, lean_object* v_i_4004_, lean_object* v_b_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
size_t v_sz_boxed_4011_; size_t v_i_boxed_4012_; lean_object* v_res_4013_; 
v_sz_boxed_4011_ = lean_unbox_usize(v_sz_4003_);
lean_dec(v_sz_4003_);
v_i_boxed_4012_ = lean_unbox_usize(v_i_4004_);
lean_dec(v_i_4004_);
v_res_4013_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4001_, v_as_4002_, v_sz_boxed_4011_, v_i_boxed_4012_, v_b_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec_ref(v_as_4002_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object* v_mvarId_4014_, lean_object* v_t_4015_, lean_object* v_init_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
lean_object* v_root_4022_; lean_object* v_tail_4023_; lean_object* v___x_4024_; 
v_root_4022_ = lean_ctor_get(v_t_4015_, 0);
v_tail_4023_ = lean_ctor_get(v_t_4015_, 1);
lean_inc(v_mvarId_4014_);
lean_inc_ref(v_init_4016_);
v___x_4024_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4016_, v_mvarId_4014_, v_root_4022_, v_init_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
lean_dec_ref(v_init_4016_);
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4061_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4027_ = v___x_4024_;
v_isShared_4028_ = v_isSharedCheck_4061_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4024_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4061_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
if (lean_obj_tag(v_a_4025_) == 0)
{
lean_object* v_a_4029_; lean_object* v___x_4031_; 
lean_dec(v_mvarId_4014_);
v_a_4029_ = lean_ctor_get(v_a_4025_, 0);
lean_inc(v_a_4029_);
lean_dec_ref_known(v_a_4025_, 1);
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v_a_4029_);
v___x_4031_ = v___x_4027_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4029_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; size_t v_sz_4036_; size_t v___x_4037_; lean_object* v___x_4038_; 
lean_del_object(v___x_4027_);
v_a_4033_ = lean_ctor_get(v_a_4025_, 0);
lean_inc(v_a_4033_);
lean_dec_ref_known(v_a_4025_, 1);
v___x_4034_ = lean_box(0);
v___x_4035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4034_);
lean_ctor_set(v___x_4035_, 1, v_a_4033_);
v_sz_4036_ = lean_array_size(v_tail_4023_);
v___x_4037_ = ((size_t)0ULL);
v___x_4038_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4014_, v_tail_4023_, v_sz_4036_, v___x_4037_, v___x_4035_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4052_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4052_ == 0)
{
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4052_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4052_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v_fst_4043_; 
v_fst_4043_ = lean_ctor_get(v_a_4039_, 0);
if (lean_obj_tag(v_fst_4043_) == 0)
{
lean_object* v_snd_4044_; lean_object* v___x_4046_; 
v_snd_4044_ = lean_ctor_get(v_a_4039_, 1);
lean_inc(v_snd_4044_);
lean_dec(v_a_4039_);
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v_snd_4044_);
v___x_4046_ = v___x_4041_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_snd_4044_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
else
{
lean_object* v_val_4048_; lean_object* v___x_4050_; 
lean_inc_ref(v_fst_4043_);
lean_dec(v_a_4039_);
v_val_4048_ = lean_ctor_get(v_fst_4043_, 0);
lean_inc(v_val_4048_);
lean_dec_ref_known(v_fst_4043_, 1);
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v_val_4048_);
v___x_4050_ = v___x_4041_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v_val_4048_);
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
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
v_a_4053_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4038_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4038_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
}
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4069_; 
lean_dec(v_mvarId_4014_);
v_a_4062_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4064_ = v___x_4024_;
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v___x_4024_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4069_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object* v_mvarId_4070_, lean_object* v_t_4071_, lean_object* v_init_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4070_, v_t_4071_, v_init_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec_ref(v_t_4071_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* v_mvarId_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v_lctx_4088_; lean_object* v_decls_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v_lctx_4088_ = lean_ctor_get(v___y_4083_, 2);
v_decls_4089_ = lean_ctor_get(v_lctx_4088_, 1);
v___x_4090_ = lean_box(0);
v___x_4091_ = ((lean_object*)(l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0));
v___x_4092_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4082_, v_decls_4089_, v___x_4091_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4105_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4095_ = v___x_4092_;
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v_fst_4097_; 
v_fst_4097_ = lean_ctor_get(v_a_4093_, 0);
lean_inc(v_fst_4097_);
lean_dec(v_a_4093_);
if (lean_obj_tag(v_fst_4097_) == 0)
{
lean_object* v___x_4099_; 
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v___x_4090_);
v___x_4099_ = v___x_4095_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4090_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
else
{
lean_object* v_val_4101_; lean_object* v___x_4103_; 
v_val_4101_ = lean_ctor_get(v_fst_4097_, 0);
lean_inc(v_val_4101_);
lean_dec_ref_known(v_fst_4097_, 1);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v_val_4101_);
v___x_4103_ = v___x_4095_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_val_4101_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
v_a_4106_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4092_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4092_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object* v_mvarId_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v_res_4120_; 
v_res_4120_ = l_Lean_Meta_substSomeVar_x3f___lam__0(v_mvarId_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
return v_res_4120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* v_mvarId_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_){
_start:
{
lean_object* v___f_4127_; lean_object* v___x_4128_; 
lean_inc(v_mvarId_4121_);
v___f_4127_ = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4127_, 0, v_mvarId_4121_);
v___x_4128_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_4121_, v___f_4127_, v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object* v_mvarId_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4129_, v_a_4130_, v_a_4131_, v_a_4132_, v_a_4133_);
lean_dec(v_a_4133_);
lean_dec_ref(v_a_4132_);
lean_dec(v_a_4131_);
lean_dec_ref(v_a_4130_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* v_mvarId_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_){
_start:
{
lean_object* v___x_4142_; 
lean_inc(v_mvarId_4136_);
v___x_4142_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4136_, v_a_4137_, v_a_4138_, v_a_4139_, v_a_4140_);
if (lean_obj_tag(v___x_4142_) == 0)
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4152_; 
v_a_4143_ = lean_ctor_get(v___x_4142_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4142_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4145_ = v___x_4142_;
v_isShared_4146_ = v_isSharedCheck_4152_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4142_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4152_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
if (lean_obj_tag(v_a_4143_) == 1)
{
lean_object* v_val_4147_; 
lean_del_object(v___x_4145_);
lean_dec(v_mvarId_4136_);
v_val_4147_ = lean_ctor_get(v_a_4143_, 0);
lean_inc(v_val_4147_);
lean_dec_ref_known(v_a_4143_, 1);
v_mvarId_4136_ = v_val_4147_;
goto _start;
}
else
{
lean_object* v___x_4150_; 
lean_dec(v_a_4143_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 0, v_mvarId_4136_);
v___x_4150_ = v___x_4145_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_mvarId_4136_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
else
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4160_; 
lean_dec(v_mvarId_4136_);
v_a_4153_ = lean_ctor_get(v___x_4142_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4142_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4155_ = v___x_4142_;
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v___x_4142_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object* v_mvarId_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l_Lean_Meta_substVars(v_mvarId_4161_, v_a_4162_, v_a_4163_, v_a_4164_, v_a_4165_);
lean_dec(v_a_4165_);
lean_dec_ref(v_a_4164_);
lean_dec(v_a_4163_);
lean_dec_ref(v_a_4162_);
return v_res_4167_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = lean_box(0);
v___x_4169_ = l_unsafeCast___redArg(v___x_4168_);
return v___x_4169_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4171_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4172_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4173_ = l_Lean_Name_str___override(v___x_4172_, v___x_4171_);
return v___x_4173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v___x_4175_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4176_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4177_ = l_Lean_Name_str___override(v___x_4176_, v___x_4175_);
return v___x_4177_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4178_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__20));
v___x_4179_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4180_ = l_Lean_Name_str___override(v___x_4179_, v___x_4178_);
return v___x_4180_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4181_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__21));
v___x_4182_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4183_ = l_Lean_Name_str___override(v___x_4182_, v___x_4181_);
return v___x_4183_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
v___x_4185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4187_ = l_Lean_Name_str___override(v___x_4186_, v___x_4185_);
return v___x_4187_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4188_ = lean_unsigned_to_nat(0u);
v___x_4189_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4190_ = l_Lean_Name_num___override(v___x_4189_, v___x_4188_);
return v___x_4190_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4192_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4193_ = l_Lean_Name_str___override(v___x_4192_, v___x_4191_);
return v___x_4193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v___x_4194_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__20));
v___x_4195_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4196_ = l_Lean_Name_str___override(v___x_4195_, v___x_4194_);
return v___x_4196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4199_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4200_ = l_Lean_Name_str___override(v___x_4199_, v___x_4198_);
return v___x_4200_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4202_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4203_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4204_ = l_Lean_Name_str___override(v___x_4203_, v___x_4202_);
return v___x_4204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4206_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4207_ = l_Lean_Name_str___override(v___x_4206_, v___x_4205_);
return v___x_4207_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4208_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__20));
v___x_4209_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4210_ = l_Lean_Name_str___override(v___x_4209_, v___x_4208_);
return v___x_4210_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4211_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__21));
v___x_4212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4213_ = l_Lean_Name_str___override(v___x_4212_, v___x_4211_);
return v___x_4213_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4214_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4215_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4216_ = l_Lean_Name_str___override(v___x_4215_, v___x_4214_);
return v___x_4216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4217_ = lean_unsigned_to_nat(1630641459u);
v___x_4218_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4219_ = l_Lean_Name_num___override(v___x_4218_, v___x_4217_);
return v___x_4219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4221_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4222_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4223_ = l_Lean_Name_str___override(v___x_4222_, v___x_4221_);
return v___x_4223_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4226_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4227_ = l_Lean_Name_str___override(v___x_4226_, v___x_4225_);
return v___x_4227_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4228_ = lean_unsigned_to_nat(2u);
v___x_4229_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4230_ = l_Lean_Name_num___override(v___x_4229_, v___x_4228_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4232_; uint8_t v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4232_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_4233_ = 0;
v___x_4234_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_);
v___x_4235_ = l_Lean_registerTraceClass(v___x_4232_, v___x_4233_, v___x_4234_);
return v___x_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object* v_a_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
return v_res_4237_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Subst(builtin);
}
#ifdef __cplusplus
}
#endif

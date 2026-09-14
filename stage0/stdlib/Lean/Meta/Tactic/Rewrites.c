// Lean compiler output
// Module: Lean.Meta.Tactic.Rewrites
// Imports: public import Lean.Meta.LazyDiscrTree public import Lean.Meta.Tactic.Rewrite public import Lean.Meta.Tactic.Refl public import Lean.Meta.Tactic.SolveByElim public import Lean.Meta.Tactic.TryThis public import Lean.Util.Heartbeats
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
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_toLOption___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
uint8_t l_Lean_AsyncConstantInfo_isUnsafe(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isMetaprogramming(lean_object*);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rewrites"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 155, 40, 124, 249, 233, 147, 160)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Rewrites"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lemmas"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 155, 40, 124, 249, 233, 147, 160)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 2, 242, 27, 177, 68, 56, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_forwardWeight;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_backwardWeight;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sizeOf_spec"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_inj'"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_inj"};
static const lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0 = (const lean_object*)&l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_localHypotheses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_localHypotheses___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_localHypotheses___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__3_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__2_value),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__4_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__5 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__6 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_droppedKeys___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__0_value),((lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__6_value)}};
static const lean_object* l_Lean_Meta_Rewrites_droppedKeys___closed__7 = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Rewrites_droppedKeys = (const lean_object*)&l_Lean_Meta_Rewrites_droppedKeys___closed__7_value;
static const lean_closure_object l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_incPrio(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Rewrites_rwFindDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_incPrio, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_rwFindDecls___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rwFindDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__0_value;
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__1_value;
static const lean_closure_object l_Lean_Meta_Rewrites_solveByElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_solveByElim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__3_value;
static const lean_array_object l_Lean_Meta_Rewrites_solveByElim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_solveByElim___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_solveByElim___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "considering "};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "← "};
static const lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Rewrites_rewriteCandidates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__0 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteCandidates___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__1;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__2;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__3;
static const lean_string_object l_Lean_Meta_Rewrites_rewriteCandidates___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Candidate rewrite lemmas:\n"};
static const lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__4 = (const lean_object*)&l_Lean_Meta_Rewrites_rewriteCandidates___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Rewrites_rewriteCandidates___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Rewrites_findRewrites___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_findRewrites___closed__0;
static lean_once_cell_t l_Lean_Meta_Rewrites_findRewrites___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Rewrites_findRewrites___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_box(0);
v___x_7_ = l_unsafeCast___redArg(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_10_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_11_ = l_Lean_Name_str___override(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_14_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_15_ = l_Lean_Name_str___override(v___x_14_, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__7_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_19_ = l_Lean_Name_str___override(v___x_18_, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_21_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__9_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_22_ = l_Lean_Name_str___override(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_25_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__10_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_26_ = l_Lean_Name_str___override(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__12_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_29_ = l_Lean_Name_num___override(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_31_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__13_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Name_str___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_34_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__14_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_37_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__15_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_38_ = l_Lean_Name_str___override(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__17_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_41_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__16_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_42_ = l_Lean_Name_str___override(v___x_41_, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__19_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_45_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__18_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_46_ = l_Lean_Name_str___override(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__6_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_48_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__20_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_49_ = l_Lean_Name_str___override(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__8_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__21_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__0_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__22_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__11_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__23_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_unsigned_to_nat(2316440083u);
v___x_60_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_num___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_64_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__25_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_65_ = l_Lean_Name_str___override(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_68_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__27_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_69_ = l_Lean_Name_str___override(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_unsigned_to_nat(2u);
v___x_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__29_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_72_ = l_Lean_Name_num___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_75_ = 0;
v___x_76_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__30_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_77_ = l_Lean_registerTraceClass(v___x_74_, v___x_75_, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2____boxed(lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
return v_res_79_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_unsigned_to_nat(414759425u);
v___x_86_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__24_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_87_ = l_Lean_Name_num___override(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__26_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_);
v___x_90_ = l_Lean_Name_str___override(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__28_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_92_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_);
v___x_93_ = l_Lean_Name_str___override(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(2u);
v___x_95_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__4_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_);
v___x_96_ = l_Lean_Name_num___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_99_ = 0;
v___x_100_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__5_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_);
v___x_101_ = l_Lean_registerTraceClass(v___x_98_, v___x_99_, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2____boxed(lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma(lean_object* v_r_107_){
_start:
{
lean_object* v_eqProof_108_; lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v_eqProof_108_ = lean_ctor_get(v_r_107_, 1);
v___x_109_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteResultLemma___closed__1));
v___x_110_ = lean_unsigned_to_nat(6u);
v___x_111_ = l_Lean_Expr_isAppOfArity(v_eqProof_108_, v___x_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; 
v___x_112_ = lean_box(0);
return v___x_112_;
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_113_ = lean_unsigned_to_nat(5u);
v___x_114_ = l_Lean_Expr_getAppNumArgs(v_eqProof_108_);
v___x_115_ = lean_nat_sub(v___x_114_, v___x_113_);
lean_dec(v___x_114_);
v___x_116_ = lean_unsigned_to_nat(1u);
v___x_117_ = lean_nat_sub(v___x_115_, v___x_116_);
lean_dec(v___x_115_);
v___x_118_ = l_Lean_Expr_getRevArg_x21(v_eqProof_108_, v___x_117_);
v___x_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteResultLemma___boxed(lean_object* v_r_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Meta_Rewrites_rewriteResultLemma(v_r_120_);
lean_dec_ref(v_r_120_);
return v_res_121_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_forwardWeight(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lean_unsigned_to_nat(2u);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_backwardWeight(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_unsigned_to_nat(1u);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx(uint8_t v_x_124_){
_start:
{
if (v_x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_unsigned_to_nat(0u);
return v___x_125_;
}
else
{
lean_object* v___x_126_; 
v___x_126_ = lean_unsigned_to_nat(1u);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorIdx___boxed(lean_object* v_x_127_){
_start:
{
uint8_t v_x_boxed_128_; lean_object* v_res_129_; 
v_x_boxed_128_ = lean_unbox(v_x_127_);
v_res_129_ = l_Lean_Meta_Rewrites_RwDirection_ctorIdx(v_x_boxed_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(lean_object* v_k_130_){
_start:
{
lean_inc(v_k_130_);
return v_k_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg___boxed(lean_object* v_k_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_Meta_Rewrites_RwDirection_ctorElim___redArg(v_k_131_);
lean_dec(v_k_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim(lean_object* v_motive_133_, lean_object* v_ctorIdx_134_, uint8_t v_t_135_, lean_object* v_h_136_, lean_object* v_k_137_){
_start:
{
lean_inc(v_k_137_);
return v_k_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_ctorElim___boxed(lean_object* v_motive_138_, lean_object* v_ctorIdx_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_k_142_){
_start:
{
uint8_t v_t_boxed_143_; lean_object* v_res_144_; 
v_t_boxed_143_ = lean_unbox(v_t_140_);
v_res_144_ = l_Lean_Meta_Rewrites_RwDirection_ctorElim(v_motive_138_, v_ctorIdx_139_, v_t_boxed_143_, v_h_141_, v_k_142_);
lean_dec(v_k_142_);
lean_dec(v_ctorIdx_139_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(lean_object* v_forward_145_){
_start:
{
lean_inc(v_forward_145_);
return v_forward_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg___boxed(lean_object* v_forward_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_Meta_Rewrites_RwDirection_forward_elim___redArg(v_forward_146_);
lean_dec(v_forward_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim(lean_object* v_motive_148_, uint8_t v_t_149_, lean_object* v_h_150_, lean_object* v_forward_151_){
_start:
{
lean_inc(v_forward_151_);
return v_forward_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_forward_elim___boxed(lean_object* v_motive_152_, lean_object* v_t_153_, lean_object* v_h_154_, lean_object* v_forward_155_){
_start:
{
uint8_t v_t_boxed_156_; lean_object* v_res_157_; 
v_t_boxed_156_ = lean_unbox(v_t_153_);
v_res_157_ = l_Lean_Meta_Rewrites_RwDirection_forward_elim(v_motive_152_, v_t_boxed_156_, v_h_154_, v_forward_155_);
lean_dec(v_forward_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(lean_object* v_backward_158_){
_start:
{
lean_inc(v_backward_158_);
return v_backward_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg___boxed(lean_object* v_backward_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Meta_Rewrites_RwDirection_backward_elim___redArg(v_backward_159_);
lean_dec(v_backward_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim(lean_object* v_motive_161_, uint8_t v_t_162_, lean_object* v_h_163_, lean_object* v_backward_164_){
_start:
{
lean_inc(v_backward_164_);
return v_backward_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RwDirection_backward_elim___boxed(lean_object* v_motive_165_, lean_object* v_t_166_, lean_object* v_h_167_, lean_object* v_backward_168_){
_start:
{
uint8_t v_t_boxed_169_; lean_object* v_res_170_; 
v_t_boxed_169_ = lean_unbox(v_t_166_);
v_res_170_ = l_Lean_Meta_Rewrites_RwDirection_backward_elim(v_motive_165_, v_t_boxed_169_, v_h_167_, v_backward_168_);
lean_dec(v_backward_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(lean_object* v_k_171_, lean_object* v_b_172_, lean_object* v_c_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; 
lean_inc(v___y_177_);
lean_inc_ref(v___y_176_);
lean_inc(v___y_175_);
lean_inc_ref(v___y_174_);
v___x_179_ = lean_apply_7(v_k_171_, v_b_172_, v_c_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, lean_box(0));
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed(lean_object* v_k_180_, lean_object* v_b_181_, lean_object* v_c_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0(v_k_180_, v_b_181_, v_c_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(lean_object* v_type_189_, lean_object* v_k_190_, uint8_t v_cleanupAnnotations_191_, uint8_t v_whnfType_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v___f_198_; lean_object* v___x_199_; 
v___f_198_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_198_, 0, v_k_190_);
v___x_199_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_189_, v___f_198_, v_cleanupAnnotations_191_, v_whnfType_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
v_a_200_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_199_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_199_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
else
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
v_a_208_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_199_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_199_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___boxed(lean_object* v_type_216_, lean_object* v_k_217_, lean_object* v_cleanupAnnotations_218_, lean_object* v_whnfType_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_225_; uint8_t v_whnfType_boxed_226_; lean_object* v_res_227_; 
v_cleanupAnnotations_boxed_225_ = lean_unbox(v_cleanupAnnotations_218_);
v_whnfType_boxed_226_ = lean_unbox(v_whnfType_219_);
v_res_227_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_216_, v_k_217_, v_cleanupAnnotations_boxed_225_, v_whnfType_boxed_226_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(lean_object* v_00_u03b1_228_, lean_object* v_type_229_, lean_object* v_k_230_, uint8_t v_cleanupAnnotations_231_, uint8_t v_whnfType_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_229_, v_k_230_, v_cleanupAnnotations_231_, v_whnfType_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___boxed(lean_object* v_00_u03b1_239_, lean_object* v_type_240_, lean_object* v_k_241_, lean_object* v_cleanupAnnotations_242_, lean_object* v_whnfType_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_249_; uint8_t v_whnfType_boxed_250_; lean_object* v_res_251_; 
v_cleanupAnnotations_boxed_249_ = lean_unbox(v_cleanupAnnotations_242_);
v_whnfType_boxed_250_ = lean_unbox(v_whnfType_243_);
v_res_251_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0(v_00_u03b1_239_, v_type_240_, v_k_241_, v_cleanupAnnotations_boxed_249_, v_whnfType_boxed_250_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(lean_object* v_k_252_, uint8_t v_allowLevelAssignments_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_253_, v_k_252_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_267_; 
v_a_260_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_267_ == 0)
{
v___x_262_ = v___x_259_;
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v___x_259_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_267_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_265_; 
if (v_isShared_263_ == 0)
{
v___x_265_ = v___x_262_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_a_260_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_259_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_259_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg___boxed(lean_object* v_k_276_, lean_object* v_allowLevelAssignments_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_283_; lean_object* v_res_284_; 
v_allowLevelAssignments_boxed_283_ = lean_unbox(v_allowLevelAssignments_277_);
v_res_284_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v_k_276_, v_allowLevelAssignments_boxed_283_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(lean_object* v_00_u03b1_285_, lean_object* v_k_286_, uint8_t v_allowLevelAssignments_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v_k_286_, v_allowLevelAssignments_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___boxed(lean_object* v_00_u03b1_294_, lean_object* v_k_295_, lean_object* v_allowLevelAssignments_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_302_; lean_object* v_res_303_; 
v_allowLevelAssignments_boxed_302_ = lean_unbox(v_allowLevelAssignments_296_);
v_res_303_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1(v_00_u03b1_294_, v_k_295_, v_allowLevelAssignments_boxed_302_, v___y_297_, v___y_298_, v___y_299_, v___y_300_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(lean_object* v_name_308_, lean_object* v_x_309_, lean_object* v_type_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_319_; lean_object* v_fst_320_; 
v___x_319_ = l_Lean_Expr_getAppFnArgs(v_type_310_);
v_fst_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_fst_320_);
if (lean_obj_tag(v_fst_320_) == 1)
{
lean_object* v_pre_321_; 
v_pre_321_ = lean_ctor_get(v_fst_320_, 0);
if (lean_obj_tag(v_pre_321_) == 0)
{
lean_object* v_snd_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_421_; 
v_snd_322_ = lean_ctor_get(v___x_319_, 1);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_421_ == 0)
{
lean_object* v_unused_422_; 
v_unused_422_ = lean_ctor_get(v___x_319_, 0);
lean_dec(v_unused_422_);
v___x_324_ = v___x_319_;
v_isShared_325_ = v_isSharedCheck_421_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_snd_322_);
lean_dec(v___x_319_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_421_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v_str_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v_str_326_ = lean_ctor_get(v_fst_320_, 1);
lean_inc_ref(v_str_326_);
lean_dec_ref_known(v_fst_320_, 2);
v___x_327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1));
v___x_328_ = lean_string_dec_eq(v_str_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2));
v___x_330_ = lean_string_dec_eq(v_str_326_, v___x_329_);
lean_dec_ref(v_str_326_);
if (v___x_330_ == 0)
{
lean_del_object(v___x_324_);
lean_dec(v_snd_322_);
lean_dec(v_name_308_);
goto v___jp_316_;
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_array_get_size(v_snd_322_);
v___x_332_ = lean_unsigned_to_nat(2u);
v___x_333_ = lean_nat_dec_eq(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_del_object(v___x_324_);
lean_dec(v_snd_322_);
lean_dec(v_name_308_);
goto v___jp_316_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = lean_array_fget(v_snd_322_, v___x_334_);
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_array_fget(v_snd_322_, v___x_336_);
lean_dec(v_snd_322_);
v___x_338_ = lean_mk_empty_array_with_capacity(v___x_332_);
v___x_339_ = 0;
v___x_340_ = lean_box(v___x_339_);
lean_inc(v_name_308_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 1, v___x_340_);
lean_ctor_set(v___x_324_, 0, v_name_308_);
v___x_342_ = v___x_324_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_name_308_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v___x_340_);
v___x_342_ = v_reuseFailAlloc_375_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_335_, v___x_342_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = lean_array_push(v___x_338_, v_a_344_);
v___x_346_ = 1;
v___x_347_ = lean_box(v___x_346_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_name_308_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
v___x_349_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_337_, v___x_348_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_array_push(v___x_345_, v_a_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v___x_345_);
v_a_359_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_349_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_349_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
lean_dec_ref(v___x_338_);
lean_dec(v___x_337_);
lean_dec(v_name_308_);
v_a_367_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_343_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_343_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
lean_dec_ref(v_str_326_);
v___x_376_ = lean_array_get_size(v_snd_322_);
v___x_377_ = lean_unsigned_to_nat(3u);
v___x_378_ = lean_nat_dec_eq(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_del_object(v___x_324_);
lean_dec(v_snd_322_);
lean_dec(v_name_308_);
goto v___jp_316_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_379_ = lean_unsigned_to_nat(1u);
v___x_380_ = lean_array_fget(v_snd_322_, v___x_379_);
v___x_381_ = lean_unsigned_to_nat(2u);
v___x_382_ = lean_array_fget(v_snd_322_, v___x_381_);
lean_dec(v_snd_322_);
v___x_383_ = lean_mk_empty_array_with_capacity(v___x_381_);
v___x_384_ = 0;
v___x_385_ = lean_box(v___x_384_);
lean_inc(v_name_308_);
if (v_isShared_325_ == 0)
{
lean_ctor_set(v___x_324_, 1, v___x_385_);
lean_ctor_set(v___x_324_, 0, v_name_308_);
v___x_387_ = v___x_324_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_name_308_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v___x_385_);
v___x_387_ = v_reuseFailAlloc_420_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; 
v___x_388_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_380_, v___x_387_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; uint8_t v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = lean_array_push(v___x_383_, v_a_389_);
v___x_391_ = 1;
v___x_392_ = lean_box(v___x_391_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v_name_308_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v___x_382_, v___x_393_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_403_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_array_push(v___x_390_, v_a_395_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v___x_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_dec_ref(v___x_390_);
v_a_404_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_394_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_394_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec_ref(v___x_383_);
lean_dec(v___x_382_);
lean_dec(v_name_308_);
v_a_412_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_388_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_388_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
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
lean_dec_ref_known(v_fst_320_, 2);
lean_dec_ref(v___x_319_);
lean_dec(v_name_308_);
goto v___jp_316_;
}
}
else
{
lean_dec(v_fst_320_);
lean_dec_ref(v___x_319_);
lean_dec(v_name_308_);
goto v___jp_316_;
}
v___jp_316_:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed(lean_object* v_name_423_, lean_object* v_x_424_, lean_object* v_type_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0(v_name_423_, v_x_424_, v_type_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec_ref(v_x_424_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(uint8_t v___x_432_, lean_object* v_type_433_, lean_object* v___f_434_, uint8_t v___x_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___y_442_; lean_object* v___x_459_; uint8_t v_transparency_460_; uint8_t v___x_461_; 
v___x_459_ = l_Lean_Meta_Context_config(v___y_436_);
v_transparency_460_ = lean_ctor_get_uint8(v___x_459_, 9);
lean_dec_ref(v___x_459_);
v___x_461_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_460_, v___x_432_);
if (v___x_461_ == 0)
{
lean_object* v_keyedConfig_462_; uint8_t v_trackZetaDelta_463_; lean_object* v_zetaDeltaSet_464_; lean_object* v_lctx_465_; lean_object* v_localInstances_466_; lean_object* v_defEqCtx_x3f_467_; lean_object* v_synthPendingDepth_468_; lean_object* v_customCanUnfoldPredicate_x3f_469_; uint8_t v_univApprox_470_; uint8_t v_inTypeClassResolution_471_; uint8_t v_cacheInferType_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_481_; 
v_keyedConfig_462_ = lean_ctor_get(v___y_436_, 0);
v_trackZetaDelta_463_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*7);
v_zetaDeltaSet_464_ = lean_ctor_get(v___y_436_, 1);
v_lctx_465_ = lean_ctor_get(v___y_436_, 2);
v_localInstances_466_ = lean_ctor_get(v___y_436_, 3);
v_defEqCtx_x3f_467_ = lean_ctor_get(v___y_436_, 4);
v_synthPendingDepth_468_ = lean_ctor_get(v___y_436_, 5);
v_customCanUnfoldPredicate_x3f_469_ = lean_ctor_get(v___y_436_, 6);
v_univApprox_470_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_471_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*7 + 2);
v_cacheInferType_472_ = lean_ctor_get_uint8(v___y_436_, sizeof(void*)*7 + 3);
v_isSharedCheck_481_ = !lean_is_exclusive(v___y_436_);
if (v_isSharedCheck_481_ == 0)
{
v___x_474_ = v___y_436_;
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_469_);
lean_inc(v_synthPendingDepth_468_);
lean_inc(v_defEqCtx_x3f_467_);
lean_inc(v_localInstances_466_);
lean_inc(v_lctx_465_);
lean_inc(v_zetaDeltaSet_464_);
lean_inc(v_keyedConfig_462_);
lean_dec(v___y_436_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_481_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_476_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_432_, v_keyedConfig_462_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_476_);
v___x_478_ = v___x_474_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_zetaDeltaSet_464_);
lean_ctor_set(v_reuseFailAlloc_480_, 2, v_lctx_465_);
lean_ctor_set(v_reuseFailAlloc_480_, 3, v_localInstances_466_);
lean_ctor_set(v_reuseFailAlloc_480_, 4, v_defEqCtx_x3f_467_);
lean_ctor_set(v_reuseFailAlloc_480_, 5, v_synthPendingDepth_468_);
lean_ctor_set(v_reuseFailAlloc_480_, 6, v_customCanUnfoldPredicate_x3f_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*7, v_trackZetaDelta_463_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*7 + 1, v_univApprox_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*7 + 2, v_inTypeClassResolution_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_480_, sizeof(void*)*7 + 3, v_cacheInferType_472_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_433_, v___f_434_, v___x_435_, v___x_435_, v___x_478_, v___y_437_, v___y_438_, v___y_439_);
lean_dec_ref(v___x_478_);
v___y_442_ = v___x_479_;
goto v___jp_441_;
}
}
}
else
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg(v_type_433_, v___f_434_, v___x_435_, v___x_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec_ref(v___y_436_);
v___y_442_ = v___x_482_;
goto v___jp_441_;
}
v___jp_441_:
{
if (lean_obj_tag(v___y_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_a_443_ = lean_ctor_get(v___y_442_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___y_442_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___y_442_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___y_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_a_451_ = lean_ctor_get(v___y_442_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___y_442_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___y_442_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___y_442_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed(lean_object* v___x_483_, lean_object* v_type_484_, lean_object* v___f_485_, lean_object* v___x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
uint8_t v___x_4628__boxed_492_; uint8_t v___x_4630__boxed_493_; lean_object* v_res_494_; 
v___x_4628__boxed_492_ = lean_unbox(v___x_483_);
v___x_4630__boxed_493_ = lean_unbox(v___x_486_);
v_res_494_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1(v___x_4628__boxed_492_, v_type_484_, v___f_485_, v___x_4630__boxed_493_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
return v_res_494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2));
v___x_499_ = lean_string_utf8_byte_size(v___x_498_);
return v___x_499_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__4));
v___x_502_ = lean_string_utf8_byte_size(v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(lean_object* v_name_503_, lean_object* v_c_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
uint8_t v___x_510_; 
lean_inc_ref(v_c_504_);
v___x_510_ = l_Lean_AsyncConstantInfo_isUnsafe(v_c_504_);
if (v___x_510_ == 0)
{
lean_object* v___f_511_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___x_527_; lean_object* v_env_531_; uint8_t v___x_532_; 
lean_inc_n(v_name_503_, 2);
v___f_511_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___boxed), 8, 1);
lean_closure_set(v___f_511_, 0, v_name_503_);
v___x_527_ = lean_st_ref_get(v_a_508_);
v_env_531_ = lean_ctor_get(v___x_527_, 0);
lean_inc_ref(v_env_531_);
lean_dec(v___x_527_);
v___x_532_ = l_Lean_Meta_allowCompletion(v_env_531_, v_name_503_);
if (v___x_532_ == 0)
{
lean_dec_ref(v___f_511_);
lean_dec_ref(v_c_504_);
lean_dec(v_name_503_);
goto v___jp_528_;
}
else
{
if (v___x_510_ == 0)
{
lean_object* v___x_533_; uint8_t v___y_535_; lean_object* v_env_538_; uint8_t v___x_539_; 
v___x_533_ = lean_st_ref_get(v_a_508_);
v_env_538_ = lean_ctor_get(v___x_533_, 0);
lean_inc_ref(v_env_538_);
lean_dec(v___x_533_);
lean_inc(v_name_503_);
v___x_539_ = l_Lean_Linter_isDeprecated(v_env_538_, v_name_503_);
if (v___x_539_ == 0)
{
if (lean_obj_tag(v_name_503_) == 1)
{
lean_object* v_str_540_; lean_object* v___x_541_; uint8_t v___x_542_; uint8_t v___y_544_; lean_object* v___x_545_; uint8_t v___x_546_; uint8_t v___y_548_; uint8_t v___y_550_; uint8_t v___y_551_; uint8_t v___y_553_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v_str_540_ = lean_ctor_get(v_name_503_, 1);
v___x_541_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__0));
v___x_542_ = lean_string_dec_eq(v_str_540_, v___x_541_);
v___x_545_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__1));
v___x_546_ = lean_string_dec_eq(v_str_540_, v___x_545_);
v___x_561_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__4));
v___x_562_ = lean_string_utf8_byte_size(v_str_540_);
v___x_563_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5_once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__5);
v___x_564_ = lean_nat_dec_le(v___x_563_, v___x_562_);
if (v___x_564_ == 0)
{
v___y_553_ = v___x_564_;
goto v___jp_552_;
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = lean_nat_sub(v___x_562_, v___x_563_);
v___x_567_ = lean_string_memcmp(v_str_540_, v___x_561_, v___x_566_, v___x_565_, v___x_563_);
lean_dec(v___x_566_);
v___y_553_ = v___x_567_;
goto v___jp_552_;
}
v___jp_543_:
{
if (v___x_542_ == 0)
{
v___y_535_ = v___y_544_;
goto v___jp_534_;
}
else
{
v___y_535_ = v___x_542_;
goto v___jp_534_;
}
}
v___jp_547_:
{
if (v___x_546_ == 0)
{
v___y_544_ = v___y_548_;
goto v___jp_543_;
}
else
{
v___y_544_ = v___x_546_;
goto v___jp_543_;
}
}
v___jp_549_:
{
if (v___y_550_ == 0)
{
v___y_548_ = v___y_551_;
goto v___jp_547_;
}
else
{
v___y_548_ = v___y_550_;
goto v___jp_547_;
}
}
v___jp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_554_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__2));
v___x_555_ = lean_string_utf8_byte_size(v_str_540_);
v___x_556_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3_once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___closed__3);
v___x_557_ = lean_nat_dec_le(v___x_556_, v___x_555_);
if (v___x_557_ == 0)
{
v___y_550_ = v___y_553_;
v___y_551_ = v___x_557_;
goto v___jp_549_;
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = lean_nat_sub(v___x_555_, v___x_556_);
v___x_560_ = lean_string_memcmp(v_str_540_, v___x_554_, v___x_559_, v___x_558_, v___x_556_);
lean_dec(v___x_559_);
v___y_550_ = v___y_553_;
v___y_551_ = v___x_560_;
goto v___jp_549_;
}
}
}
else
{
v___y_513_ = v_a_505_;
v___y_514_ = v_a_506_;
v___y_515_ = v_a_507_;
v___y_516_ = v_a_508_;
goto v___jp_512_;
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; 
lean_dec_ref(v___f_511_);
lean_dec_ref(v_c_504_);
lean_dec(v_name_503_);
v___x_568_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
v___jp_534_:
{
if (v___y_535_ == 0)
{
v___y_513_ = v_a_505_;
v___y_514_ = v_a_506_;
v___y_515_ = v_a_507_;
v___y_516_ = v_a_508_;
goto v___jp_512_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v___f_511_);
lean_dec_ref(v_c_504_);
lean_dec(v_name_503_);
v___x_536_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
}
else
{
lean_dec_ref(v___f_511_);
lean_dec_ref(v_c_504_);
lean_dec(v_name_503_);
goto v___jp_528_;
}
}
v___jp_512_:
{
uint8_t v___x_517_; 
v___x_517_ = l_Lean_Name_isMetaprogramming(v_name_503_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v_type_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___f_523_; lean_object* v___x_524_; 
v___x_518_ = l_Lean_AsyncConstantInfo_toConstantVal(v_c_504_);
v_type_519_ = lean_ctor_get(v___x_518_, 2);
lean_inc_ref(v_type_519_);
lean_dec_ref(v___x_518_);
v___x_520_ = 2;
v___x_521_ = lean_box(v___x_520_);
v___x_522_ = lean_box(v___x_517_);
v___f_523_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__1___boxed), 9, 4);
lean_closure_set(v___f_523_, 0, v___x_521_);
lean_closure_set(v___f_523_, 1, v_type_519_);
lean_closure_set(v___f_523_, 2, v___f_511_);
lean_closure_set(v___f_523_, 3, v___x_522_);
v___x_524_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__1___redArg(v___f_523_, v___x_517_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec_ref(v___f_511_);
lean_dec_ref(v_c_504_);
v___x_525_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
v___jp_528_:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec_ref(v_c_504_);
lean_dec(v_name_503_);
v___x_570_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__0));
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___boxed(lean_object* v_name_572_, lean_object* v_c_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport(v_name_572_, v_c_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
return v_res_579_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(lean_object* v_a_580_, lean_object* v_x_581_){
_start:
{
if (lean_obj_tag(v_x_581_) == 0)
{
uint8_t v___x_582_; 
v___x_582_ = 0;
return v___x_582_;
}
else
{
lean_object* v_head_583_; lean_object* v_tail_584_; uint8_t v___x_585_; 
v_head_583_ = lean_ctor_get(v_x_581_, 0);
v_tail_584_ = lean_ctor_get(v_x_581_, 1);
v___x_585_ = l_Lean_instBEqFVarId_beq(v_a_580_, v_head_583_);
if (v___x_585_ == 0)
{
v_x_581_ = v_tail_584_;
goto _start;
}
else
{
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0___boxed(lean_object* v_a_587_, lean_object* v_x_588_){
_start:
{
uint8_t v_res_589_; lean_object* v_r_590_; 
v_res_589_ = l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(v_a_587_, v_x_588_);
lean_dec(v_x_588_);
lean_dec(v_a_587_);
v_r_590_ = lean_box(v_res_589_);
return v_r_590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(lean_object* v_except_591_, lean_object* v_as_592_, size_t v_sz_593_, size_t v_i_594_, lean_object* v_b_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_a_602_; uint8_t v___x_606_; 
v___x_606_ = lean_usize_dec_lt(v_i_594_, v_sz_593_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v_b_595_);
return v___x_607_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v_a_608_ = lean_array_uget_borrowed(v_as_592_, v_i_594_);
v___x_609_ = l_Lean_Expr_fvarId_x21(v_a_608_);
v___x_610_ = l_List_elem___at___00Lean_Meta_Rewrites_localHypotheses_spec__0(v___x_609_, v_except_591_);
lean_dec(v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
lean_inc(v___y_599_);
lean_inc_ref(v___y_598_);
lean_inc(v___y_597_);
lean_inc_ref(v___y_596_);
lean_inc(v_a_608_);
v___x_611_ = lean_infer_type(v_a_608_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = lean_box(0);
v___x_614_ = 0;
v___x_615_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_612_, v___x_613_, v___x_614_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v_snd_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_688_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___x_615_, 1);
v_snd_617_ = lean_ctor_get(v_a_616_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_a_616_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v_a_616_, 0);
lean_dec(v_unused_689_);
v___x_619_ = v_a_616_;
v_isShared_620_ = v_isSharedCheck_688_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snd_617_);
lean_dec(v_a_616_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_688_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v_snd_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_686_; 
v_snd_621_ = lean_ctor_get(v_snd_617_, 1);
v_isSharedCheck_686_ = !lean_is_exclusive(v_snd_617_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v_snd_617_, 0);
lean_dec(v_unused_687_);
v___x_623_ = v_snd_617_;
v_isShared_624_ = v_isSharedCheck_686_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_snd_621_);
lean_dec(v_snd_617_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_686_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_Meta_whnfR(v_snd_621_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_627_; lean_object* v_fst_628_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = l_Lean_Expr_getAppFnArgs(v_a_626_);
v_fst_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_fst_628_);
if (lean_obj_tag(v_fst_628_) == 1)
{
lean_object* v_pre_629_; 
v_pre_629_ = lean_ctor_get(v_fst_628_, 0);
if (lean_obj_tag(v_pre_629_) == 0)
{
lean_object* v_snd_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_676_; 
v_snd_630_ = lean_ctor_get(v___x_627_, 1);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_676_ == 0)
{
lean_object* v_unused_677_; 
v_unused_677_ = lean_ctor_get(v___x_627_, 0);
lean_dec(v_unused_677_);
v___x_632_ = v___x_627_;
v_isShared_633_ = v_isSharedCheck_676_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_snd_630_);
lean_dec(v___x_627_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_676_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v_str_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v_str_634_ = lean_ctor_get(v_fst_628_, 1);
lean_inc_ref(v_str_634_);
lean_dec_ref_known(v_fst_628_, 2);
v___x_635_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__1));
v___x_636_ = lean_string_dec_eq(v_str_634_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport___lam__0___closed__2));
v___x_638_ = lean_string_dec_eq(v_str_634_, v___x_637_);
lean_dec_ref(v_str_634_);
if (v___x_638_ == 0)
{
lean_del_object(v___x_632_);
lean_dec(v_snd_630_);
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_639_ = lean_array_get_size(v_snd_630_);
lean_dec(v_snd_630_);
v___x_640_ = lean_unsigned_to_nat(2u);
v___x_641_ = lean_nat_dec_eq(v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_del_object(v___x_632_);
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_642_ = lean_box(v___x_610_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_640_);
lean_ctor_set(v___x_632_, 0, v___x_642_);
v___x_644_ = v___x_632_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_640_);
v___x_644_ = v_reuseFailAlloc_656_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_646_; 
lean_inc(v_a_608_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 1, v___x_644_);
lean_ctor_set(v___x_623_, 0, v_a_608_);
v___x_646_ = v___x_623_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_608_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_644_);
v___x_646_ = v_reuseFailAlloc_655_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_651_; 
v___x_647_ = lean_array_push(v_b_595_, v___x_646_);
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_box(v___x_606_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_648_);
lean_ctor_set(v___x_619_, 0, v___x_649_);
v___x_651_ = v___x_619_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___x_648_);
v___x_651_ = v_reuseFailAlloc_654_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_inc(v_a_608_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v_a_608_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_array_push(v___x_647_, v___x_652_);
v_a_602_ = v___x_653_;
goto v___jp_601_;
}
}
}
}
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
lean_dec_ref(v_str_634_);
v___x_657_ = lean_array_get_size(v_snd_630_);
lean_dec(v_snd_630_);
v___x_658_ = lean_unsigned_to_nat(3u);
v___x_659_ = lean_nat_dec_eq(v___x_657_, v___x_658_);
if (v___x_659_ == 0)
{
lean_del_object(v___x_632_);
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
else
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_660_ = lean_unsigned_to_nat(2u);
v___x_661_ = lean_box(v___x_610_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_660_);
lean_ctor_set(v___x_632_, 0, v___x_661_);
v___x_663_ = v___x_632_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_660_);
v___x_663_ = v_reuseFailAlloc_675_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
lean_inc(v_a_608_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 1, v___x_663_);
lean_ctor_set(v___x_623_, 0, v_a_608_);
v___x_665_ = v___x_623_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_608_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___x_663_);
v___x_665_ = v_reuseFailAlloc_674_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_670_; 
v___x_666_ = lean_array_push(v_b_595_, v___x_665_);
v___x_667_ = lean_unsigned_to_nat(1u);
v___x_668_ = lean_box(v___x_606_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_667_);
lean_ctor_set(v___x_619_, 0, v___x_668_);
v___x_670_ = v___x_619_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___x_667_);
v___x_670_ = v_reuseFailAlloc_673_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_inc(v_a_608_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_a_608_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_array_push(v___x_666_, v___x_671_);
v_a_602_ = v___x_672_;
goto v___jp_601_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_fst_628_, 2);
lean_dec_ref(v___x_627_);
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
}
else
{
lean_dec(v_fst_628_);
lean_dec_ref(v___x_627_);
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_del_object(v___x_623_);
lean_del_object(v___x_619_);
lean_dec_ref(v_b_595_);
v_a_678_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_625_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_625_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_b_595_);
v_a_690_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_615_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_615_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec_ref(v_b_595_);
v_a_698_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_611_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_611_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
else
{
v_a_602_ = v_b_595_;
goto v___jp_601_;
}
}
v___jp_601_:
{
size_t v___x_603_; size_t v___x_604_; 
v___x_603_ = ((size_t)1ULL);
v___x_604_ = lean_usize_add(v_i_594_, v___x_603_);
v_i_594_ = v___x_604_;
v_b_595_ = v_a_602_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2___boxed(lean_object* v_except_706_, lean_object* v_as_707_, lean_object* v_sz_708_, lean_object* v_i_709_, lean_object* v_b_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
size_t v_sz_boxed_716_; size_t v_i_boxed_717_; lean_object* v_res_718_; 
v_sz_boxed_716_ = lean_unbox_usize(v_sz_708_);
lean_dec(v_sz_708_);
v_i_boxed_717_ = lean_unbox_usize(v_i_709_);
lean_dec(v_i_709_);
v_res_718_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(v_except_706_, v_as_707_, v_sz_boxed_716_, v_i_boxed_717_, v_b_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec_ref(v_as_707_);
lean_dec(v_except_706_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_as_719_, size_t v_sz_720_, size_t v_i_721_, lean_object* v_b_722_){
_start:
{
uint8_t v___x_724_; 
v___x_724_ = lean_usize_dec_lt(v_i_721_, v_sz_720_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
v___x_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_725_, 0, v_b_722_);
return v___x_725_;
}
else
{
lean_object* v_snd_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_744_; 
v_snd_726_ = lean_ctor_get(v_b_722_, 1);
v_isSharedCheck_744_ = !lean_is_exclusive(v_b_722_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; 
v_unused_745_ = lean_ctor_get(v_b_722_, 0);
lean_dec(v_unused_745_);
v___x_728_ = v_b_722_;
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_snd_726_);
lean_dec(v_b_722_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_744_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v_a_732_; lean_object* v_a_739_; 
v___x_730_ = lean_box(0);
v_a_739_ = lean_array_uget_borrowed(v_as_719_, v_i_721_);
if (lean_obj_tag(v_a_739_) == 0)
{
v_a_732_ = v_snd_726_;
goto v___jp_731_;
}
else
{
lean_object* v_val_740_; uint8_t v___x_741_; 
v_val_740_ = lean_ctor_get(v_a_739_, 0);
v___x_741_ = l_Lean_LocalDecl_isImplementationDetail(v_val_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; 
lean_inc(v_val_740_);
v___x_742_ = l_Lean_LocalDecl_toExpr(v_val_740_);
v___x_743_ = lean_array_push(v_snd_726_, v___x_742_);
v_a_732_ = v___x_743_;
goto v___jp_731_;
}
else
{
v_a_732_ = v_snd_726_;
goto v___jp_731_;
}
}
v___jp_731_:
{
lean_object* v___x_734_; 
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v_a_732_);
lean_ctor_set(v___x_728_, 0, v___x_730_);
v___x_734_ = v___x_728_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_a_732_);
v___x_734_ = v_reuseFailAlloc_738_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
size_t v___x_735_; size_t v___x_736_; 
v___x_735_ = ((size_t)1ULL);
v___x_736_ = lean_usize_add(v_i_721_, v___x_735_);
v_i_721_ = v___x_736_;
v_b_722_ = v___x_734_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg___boxed(lean_object* v_as_746_, lean_object* v_sz_747_, lean_object* v_i_748_, lean_object* v_b_749_, lean_object* v___y_750_){
_start:
{
size_t v_sz_boxed_751_; size_t v_i_boxed_752_; lean_object* v_res_753_; 
v_sz_boxed_751_ = lean_unbox_usize(v_sz_747_);
lean_dec(v_sz_747_);
v_i_boxed_752_ = lean_unbox_usize(v_i_748_);
lean_dec(v_i_748_);
v_res_753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_746_, v_sz_boxed_751_, v_i_boxed_752_, v_b_749_);
lean_dec_ref(v_as_746_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(lean_object* v_as_754_, size_t v_sz_755_, size_t v_i_756_, lean_object* v_b_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = lean_usize_dec_lt(v_i_756_, v_sz_755_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; 
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v_b_757_);
return v___x_764_;
}
else
{
lean_object* v_snd_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_783_; 
v_snd_765_ = lean_ctor_get(v_b_757_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_b_757_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_b_757_, 0);
lean_dec(v_unused_784_);
v___x_767_ = v_b_757_;
v_isShared_768_ = v_isSharedCheck_783_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_snd_765_);
lean_dec(v_b_757_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_783_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v_a_771_; lean_object* v_a_778_; 
v___x_769_ = lean_box(0);
v_a_778_ = lean_array_uget_borrowed(v_as_754_, v_i_756_);
if (lean_obj_tag(v_a_778_) == 0)
{
v_a_771_ = v_snd_765_;
goto v___jp_770_;
}
else
{
lean_object* v_val_779_; uint8_t v___x_780_; 
v_val_779_ = lean_ctor_get(v_a_778_, 0);
v___x_780_ = l_Lean_LocalDecl_isImplementationDetail(v_val_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_inc(v_val_779_);
v___x_781_ = l_Lean_LocalDecl_toExpr(v_val_779_);
v___x_782_ = lean_array_push(v_snd_765_, v___x_781_);
v_a_771_ = v___x_782_;
goto v___jp_770_;
}
else
{
v_a_771_ = v_snd_765_;
goto v___jp_770_;
}
}
v___jp_770_:
{
lean_object* v___x_773_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_a_771_);
lean_ctor_set(v___x_767_, 0, v___x_769_);
v___x_773_ = v___x_767_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_a_771_);
v___x_773_ = v_reuseFailAlloc_777_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
size_t v___x_774_; size_t v___x_775_; lean_object* v___x_776_; 
v___x_774_ = ((size_t)1ULL);
v___x_775_ = lean_usize_add(v_i_756_, v___x_774_);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_754_, v_sz_755_, v___x_775_, v___x_773_);
return v___x_776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_as_785_, lean_object* v_sz_786_, lean_object* v_i_787_, lean_object* v_b_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
size_t v_sz_boxed_794_; size_t v_i_boxed_795_; lean_object* v_res_796_; 
v_sz_boxed_794_ = lean_unbox_usize(v_sz_786_);
lean_dec(v_sz_786_);
v_i_boxed_795_ = lean_unbox_usize(v_i_787_);
lean_dec(v_i_787_);
v_res_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(v_as_785_, v_sz_boxed_794_, v_i_boxed_795_, v_b_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec_ref(v_as_785_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(lean_object* v_init_797_, lean_object* v_n_798_, lean_object* v_b_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
if (lean_obj_tag(v_n_798_) == 0)
{
lean_object* v_cs_805_; lean_object* v___x_806_; lean_object* v___x_807_; size_t v_sz_808_; size_t v___x_809_; lean_object* v___x_810_; 
v_cs_805_ = lean_ctor_get(v_n_798_, 0);
v___x_806_ = lean_box(0);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
lean_ctor_set(v___x_807_, 1, v_b_799_);
v_sz_808_ = lean_array_size(v_cs_805_);
v___x_809_ = ((size_t)0ULL);
v___x_810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(v_init_797_, v_cs_805_, v_sz_808_, v___x_809_, v___x_807_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_825_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_825_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_825_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_825_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_fst_815_; 
v_fst_815_ = lean_ctor_get(v_a_811_, 0);
if (lean_obj_tag(v_fst_815_) == 0)
{
lean_object* v_snd_816_; lean_object* v___x_817_; lean_object* v___x_819_; 
v_snd_816_ = lean_ctor_get(v_a_811_, 1);
lean_inc(v_snd_816_);
lean_dec(v_a_811_);
v___x_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_817_, 0, v_snd_816_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_817_);
v___x_819_ = v___x_813_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
else
{
lean_object* v_val_821_; lean_object* v___x_823_; 
lean_inc_ref(v_fst_815_);
lean_dec(v_a_811_);
v_val_821_ = lean_ctor_get(v_fst_815_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_fst_815_, 1);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_val_821_);
v___x_823_ = v___x_813_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_val_821_);
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
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
v_a_826_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_810_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_810_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
else
{
lean_object* v_vs_834_; lean_object* v___x_835_; lean_object* v___x_836_; size_t v_sz_837_; size_t v___x_838_; lean_object* v___x_839_; 
v_vs_834_ = lean_ctor_get(v_n_798_, 0);
v___x_835_ = lean_box(0);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
lean_ctor_set(v___x_836_, 1, v_b_799_);
v_sz_837_ = lean_array_size(v_vs_834_);
v___x_838_ = ((size_t)0ULL);
v___x_839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5(v_vs_834_, v_sz_837_, v___x_838_, v___x_836_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_854_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_854_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v_fst_844_; 
v_fst_844_ = lean_ctor_get(v_a_840_, 0);
if (lean_obj_tag(v_fst_844_) == 0)
{
lean_object* v_snd_845_; lean_object* v___x_846_; lean_object* v___x_848_; 
v_snd_845_ = lean_ctor_get(v_a_840_, 1);
lean_inc(v_snd_845_);
lean_dec(v_a_840_);
v___x_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_846_, 0, v_snd_845_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_846_);
v___x_848_ = v___x_842_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
else
{
lean_object* v_val_850_; lean_object* v___x_852_; 
lean_inc_ref(v_fst_844_);
lean_dec(v_a_840_);
v_val_850_ = lean_ctor_get(v_fst_844_, 0);
lean_inc(v_val_850_);
lean_dec_ref_known(v_fst_844_, 1);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v_val_850_);
v___x_852_ = v___x_842_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_val_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_839_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_839_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(lean_object* v_init_863_, lean_object* v_as_864_, size_t v_sz_865_, size_t v_i_866_, lean_object* v_b_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
uint8_t v___x_873_; 
v___x_873_ = lean_usize_dec_lt(v_i_866_, v_sz_865_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v_b_867_);
return v___x_874_;
}
else
{
lean_object* v_snd_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_909_; 
v_snd_875_ = lean_ctor_get(v_b_867_, 1);
v_isSharedCheck_909_ = !lean_is_exclusive(v_b_867_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v_b_867_, 0);
lean_dec(v_unused_910_);
v___x_877_ = v_b_867_;
v_isShared_878_ = v_isSharedCheck_909_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_snd_875_);
lean_dec(v_b_867_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_909_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v_a_880_; lean_object* v___x_881_; 
v___x_879_ = lean_box(0);
v_a_880_ = lean_array_uget_borrowed(v_as_864_, v_i_866_);
lean_inc(v_snd_875_);
v___x_881_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_863_, v_a_880_, v_snd_875_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_900_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_900_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_900_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_900_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
if (lean_obj_tag(v_a_882_) == 0)
{
lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_886_, 0, v_a_882_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_886_);
v___x_888_ = v___x_877_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_snd_875_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_890_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_888_);
v___x_890_ = v___x_884_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
else
{
lean_object* v_a_893_; lean_object* v___x_895_; 
lean_del_object(v___x_884_);
lean_dec(v_snd_875_);
v_a_893_ = lean_ctor_get(v_a_882_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v_a_882_, 1);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v_a_893_);
lean_ctor_set(v___x_877_, 0, v___x_879_);
v___x_895_ = v___x_877_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_a_893_);
v___x_895_ = v_reuseFailAlloc_899_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
size_t v___x_896_; size_t v___x_897_; 
v___x_896_ = ((size_t)1ULL);
v___x_897_ = lean_usize_add(v_i_866_, v___x_896_);
v_i_866_ = v___x_897_;
v_b_867_ = v___x_895_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_del_object(v___x_877_);
lean_dec(v_snd_875_);
v_a_901_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_881_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_881_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_init_911_, lean_object* v_as_912_, lean_object* v_sz_913_, lean_object* v_i_914_, lean_object* v_b_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
size_t v_sz_boxed_921_; size_t v_i_boxed_922_; lean_object* v_res_923_; 
v_sz_boxed_921_ = lean_unbox_usize(v_sz_913_);
lean_dec(v_sz_913_);
v_i_boxed_922_ = lean_unbox_usize(v_i_914_);
lean_dec(v_i_914_);
v_res_923_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__4(v_init_911_, v_as_912_, v_sz_boxed_921_, v_i_boxed_922_, v_b_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec_ref(v_as_912_);
lean_dec_ref(v_init_911_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2___boxed(lean_object* v_init_924_, lean_object* v_n_925_, lean_object* v_b_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_924_, v_n_925_, v_b_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec_ref(v_n_925_);
lean_dec_ref(v_init_924_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(lean_object* v_as_933_, size_t v_sz_934_, size_t v_i_935_, lean_object* v_b_936_){
_start:
{
uint8_t v___x_938_; 
v___x_938_ = lean_usize_dec_lt(v_i_935_, v_sz_934_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; 
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v_b_936_);
return v___x_939_;
}
else
{
lean_object* v_snd_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_958_; 
v_snd_940_ = lean_ctor_get(v_b_936_, 1);
v_isSharedCheck_958_ = !lean_is_exclusive(v_b_936_);
if (v_isSharedCheck_958_ == 0)
{
lean_object* v_unused_959_; 
v_unused_959_ = lean_ctor_get(v_b_936_, 0);
lean_dec(v_unused_959_);
v___x_942_ = v_b_936_;
v_isShared_943_ = v_isSharedCheck_958_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_snd_940_);
lean_dec(v_b_936_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_958_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v_a_946_; lean_object* v_a_953_; 
v___x_944_ = lean_box(0);
v_a_953_ = lean_array_uget_borrowed(v_as_933_, v_i_935_);
if (lean_obj_tag(v_a_953_) == 0)
{
v_a_946_ = v_snd_940_;
goto v___jp_945_;
}
else
{
lean_object* v_val_954_; uint8_t v___x_955_; 
v_val_954_ = lean_ctor_get(v_a_953_, 0);
v___x_955_ = l_Lean_LocalDecl_isImplementationDetail(v_val_954_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; lean_object* v___x_957_; 
lean_inc(v_val_954_);
v___x_956_ = l_Lean_LocalDecl_toExpr(v_val_954_);
v___x_957_ = lean_array_push(v_snd_940_, v___x_956_);
v_a_946_ = v___x_957_;
goto v___jp_945_;
}
else
{
v_a_946_ = v_snd_940_;
goto v___jp_945_;
}
}
v___jp_945_:
{
lean_object* v___x_948_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v_a_946_);
lean_ctor_set(v___x_942_, 0, v___x_944_);
v___x_948_ = v___x_942_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v_a_946_);
v___x_948_ = v_reuseFailAlloc_952_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
size_t v___x_949_; size_t v___x_950_; 
v___x_949_ = ((size_t)1ULL);
v___x_950_ = lean_usize_add(v_i_935_, v___x_949_);
v_i_935_ = v___x_950_;
v_b_936_ = v___x_948_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_as_960_, lean_object* v_sz_961_, lean_object* v_i_962_, lean_object* v_b_963_, lean_object* v___y_964_){
_start:
{
size_t v_sz_boxed_965_; size_t v_i_boxed_966_; lean_object* v_res_967_; 
v_sz_boxed_965_ = lean_unbox_usize(v_sz_961_);
lean_dec(v_sz_961_);
v_i_boxed_966_ = lean_unbox_usize(v_i_962_);
lean_dec(v_i_962_);
v_res_967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_960_, v_sz_boxed_965_, v_i_boxed_966_, v_b_963_);
lean_dec_ref(v_as_960_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(lean_object* v_as_968_, size_t v_sz_969_, size_t v_i_970_, lean_object* v_b_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
uint8_t v___x_977_; 
v___x_977_ = lean_usize_dec_lt(v_i_970_, v_sz_969_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
v___x_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_978_, 0, v_b_971_);
return v___x_978_;
}
else
{
lean_object* v_snd_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_997_; 
v_snd_979_ = lean_ctor_get(v_b_971_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_b_971_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_b_971_, 0);
lean_dec(v_unused_998_);
v___x_981_ = v_b_971_;
v_isShared_982_ = v_isSharedCheck_997_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_snd_979_);
lean_dec(v_b_971_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_997_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v_a_985_; lean_object* v_a_992_; 
v___x_983_ = lean_box(0);
v_a_992_ = lean_array_uget_borrowed(v_as_968_, v_i_970_);
if (lean_obj_tag(v_a_992_) == 0)
{
v_a_985_ = v_snd_979_;
goto v___jp_984_;
}
else
{
lean_object* v_val_993_; uint8_t v___x_994_; 
v_val_993_ = lean_ctor_get(v_a_992_, 0);
v___x_994_ = l_Lean_LocalDecl_isImplementationDetail(v_val_993_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; lean_object* v___x_996_; 
lean_inc(v_val_993_);
v___x_995_ = l_Lean_LocalDecl_toExpr(v_val_993_);
v___x_996_ = lean_array_push(v_snd_979_, v___x_995_);
v_a_985_ = v___x_996_;
goto v___jp_984_;
}
else
{
v_a_985_ = v_snd_979_;
goto v___jp_984_;
}
}
v___jp_984_:
{
lean_object* v___x_987_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v_a_985_);
lean_ctor_set(v___x_981_, 0, v___x_983_);
v___x_987_ = v___x_981_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_a_985_);
v___x_987_ = v_reuseFailAlloc_991_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
size_t v___x_988_; size_t v___x_989_; lean_object* v___x_990_; 
v___x_988_ = ((size_t)1ULL);
v___x_989_ = lean_usize_add(v_i_970_, v___x_988_);
v___x_990_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_968_, v_sz_969_, v___x_989_, v___x_987_);
return v___x_990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3___boxed(lean_object* v_as_999_, lean_object* v_sz_1000_, lean_object* v_i_1001_, lean_object* v_b_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
size_t v_sz_boxed_1008_; size_t v_i_boxed_1009_; lean_object* v_res_1010_; 
v_sz_boxed_1008_ = lean_unbox_usize(v_sz_1000_);
lean_dec(v_sz_1000_);
v_i_boxed_1009_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_res_1010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(v_as_999_, v_sz_boxed_1008_, v_i_boxed_1009_, v_b_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec_ref(v_as_999_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(lean_object* v_t_1011_, lean_object* v_init_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_root_1018_; lean_object* v_tail_1019_; lean_object* v___x_1020_; 
v_root_1018_ = lean_ctor_get(v_t_1011_, 0);
v_tail_1019_ = lean_ctor_get(v_t_1011_, 1);
lean_inc_ref(v_init_1012_);
v___x_1020_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2(v_init_1012_, v_root_1018_, v_init_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec_ref(v_init_1012_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1057_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1057_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1057_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
if (lean_obj_tag(v_a_1021_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; 
v_a_1025_ = lean_ctor_get(v_a_1021_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v_a_1021_, 1);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v_a_1025_);
v___x_1027_ = v___x_1023_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; size_t v_sz_1032_; size_t v___x_1033_; lean_object* v___x_1034_; 
lean_del_object(v___x_1023_);
v_a_1029_ = lean_ctor_get(v_a_1021_, 0);
lean_inc(v_a_1029_);
lean_dec_ref_known(v_a_1021_, 1);
v___x_1030_ = lean_box(0);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v_a_1029_);
v_sz_1032_ = lean_array_size(v_tail_1019_);
v___x_1033_ = ((size_t)0ULL);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3(v_tail_1019_, v_sz_1032_, v___x_1033_, v___x_1031_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1048_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1048_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1048_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v_fst_1039_; 
v_fst_1039_ = lean_ctor_get(v_a_1035_, 0);
if (lean_obj_tag(v_fst_1039_) == 0)
{
lean_object* v_snd_1040_; lean_object* v___x_1042_; 
v_snd_1040_ = lean_ctor_get(v_a_1035_, 1);
lean_inc(v_snd_1040_);
lean_dec(v_a_1035_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v_snd_1040_);
v___x_1042_ = v___x_1037_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_snd_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
else
{
lean_object* v_val_1044_; lean_object* v___x_1046_; 
lean_inc_ref(v_fst_1039_);
lean_dec(v_a_1035_);
v_val_1044_ = lean_ctor_get(v_fst_1039_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v_fst_1039_, 1);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v_val_1044_);
v___x_1046_ = v___x_1037_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_val_1044_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1034_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1034_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1020_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1020_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1___boxed(lean_object* v_t_1066_, lean_object* v_init_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(v_t_1066_, v_init_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec_ref(v_t_1066_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_lctx_1081_; lean_object* v_decls_1082_; lean_object* v_hs_1083_; lean_object* v___x_1084_; 
v_lctx_1081_ = lean_ctor_get(v___y_1076_, 2);
v_decls_1082_ = lean_ctor_get(v_lctx_1081_, 1);
v_hs_1083_ = ((lean_object*)(l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___closed__0));
v___x_1084_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1(v_decls_1082_, v_hs_1083_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1___boxed(lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses(lean_object* v_except_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1(v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; size_t v_sz_1102_; size_t v___x_1103_; lean_object* v___x_1104_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = ((lean_object*)(l_Lean_Meta_Rewrites_localHypotheses___closed__0));
v_sz_1102_ = lean_array_size(v_a_1100_);
v___x_1103_ = ((size_t)0ULL);
v___x_1104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_localHypotheses_spec__2(v_except_1093_, v_a_1100_, v_sz_1102_, v___x_1103_, v___x_1101_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1100_);
return v___x_1104_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_a_1105_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1099_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1099_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_localHypotheses___boxed(lean_object* v_except_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Meta_Rewrites_localHypotheses(v_except_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
lean_dec(v_except_1113_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(lean_object* v_as_1120_, size_t v_sz_1121_, size_t v_i_1122_, lean_object* v_b_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___redArg(v_as_1120_, v_sz_1121_, v_i_1122_, v_b_1123_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_as_1130_, lean_object* v_sz_1131_, lean_object* v_i_1132_, lean_object* v_b_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
size_t v_sz_boxed_1139_; size_t v_i_boxed_1140_; lean_object* v_res_1141_; 
v_sz_boxed_1139_ = lean_unbox_usize(v_sz_1131_);
lean_dec(v_sz_1131_);
v_i_boxed_1140_ = lean_unbox_usize(v_i_1132_);
lean_dec(v_i_1132_);
v_res_1141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__3_spec__7(v_as_1130_, v_sz_boxed_1139_, v_i_boxed_1140_, v_b_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec_ref(v_as_1130_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object* v_as_1142_, size_t v_sz_1143_, size_t v_i_1144_, lean_object* v_b_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_as_1142_, v_sz_1143_, v_i_1144_, v_b_1145_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6___boxed(lean_object* v_as_1152_, lean_object* v_sz_1153_, lean_object* v_i_1154_, lean_object* v_b_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
size_t v_sz_boxed_1161_; size_t v_i_boxed_1162_; lean_object* v_res_1163_; 
v_sz_boxed_1161_ = lean_unbox_usize(v_sz_1153_);
lean_dec(v_sz_1153_);
v_i_boxed_1162_ = lean_unbox_usize(v_i_1154_);
lean_dec(v_i_1154_);
v_res_1163_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_Meta_Rewrites_localHypotheses_spec__1_spec__1_spec__2_spec__5_spec__6(v_as_1152_, v_sz_boxed_1161_, v_i_boxed_1162_, v_b_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec_ref(v_as_1152_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef(lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1194_ = ((lean_object*)(l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0));
v___x_1195_ = ((lean_object*)(l_Lean_Meta_Rewrites_droppedKeys));
v___x_1196_ = lean_box(0);
v___x_1197_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v___x_1194_, v___x_1195_, v___x_1196_, v_a_1189_, v_a_1190_, v_a_1191_, v_a_1192_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_createModuleTreeRef___boxed(lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lean_Meta_Rewrites_createModuleTreeRef(v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec(v_a_1199_);
lean_dec_ref(v_a_1198_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1205_ = lean_box(0);
v___x_1206_ = lean_st_mk_ref(v___x_1205_);
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2____boxed(lean_object* v_a_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
return v_res_1209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask(void){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_unsigned_to_nat(6500u);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_incPrio(lean_object* v_x_1211_, lean_object* v_x_1212_){
_start:
{
lean_object* v_snd_1213_; uint8_t v___x_1214_; 
v_snd_1213_ = lean_ctor_get(v_x_1212_, 1);
v___x_1214_ = lean_unbox(v_snd_1213_);
if (v___x_1214_ == 0)
{
lean_object* v_fst_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1227_; 
v_fst_1215_ = lean_ctor_get(v_x_1212_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1227_ == 0)
{
lean_object* v_unused_1228_; 
v_unused_1228_ = lean_ctor_get(v_x_1212_, 1);
lean_dec(v_unused_1228_);
v___x_1217_ = v_x_1212_;
v_isShared_1218_ = v_isSharedCheck_1227_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_fst_1215_);
lean_dec(v_x_1212_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1227_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
uint8_t v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
v___x_1219_ = 0;
v___x_1220_ = lean_unsigned_to_nat(2u);
v___x_1221_ = lean_nat_mul(v___x_1220_, v_x_1211_);
lean_dec(v_x_1211_);
v___x_1222_ = lean_box(v___x_1219_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 1, v___x_1221_);
lean_ctor_set(v___x_1217_, 0, v___x_1222_);
v___x_1224_ = v___x_1217_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1221_);
v___x_1224_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v_fst_1215_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
return v___x_1225_;
}
}
}
else
{
lean_object* v_fst_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1239_; 
v_fst_1229_ = lean_ctor_get(v_x_1212_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1239_ == 0)
{
lean_object* v_unused_1240_; 
v_unused_1240_ = lean_ctor_get(v_x_1212_, 1);
lean_dec(v_unused_1240_);
v___x_1231_ = v_x_1212_;
v_isShared_1232_ = v_isSharedCheck_1239_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_fst_1229_);
lean_dec(v_x_1212_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1239_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1233_ = 1;
v___x_1234_ = lean_box(v___x_1233_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v_x_1211_);
lean_ctor_set(v___x_1231_, 0, v___x_1234_);
v___x_1236_ = v___x_1231_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1234_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_x_1211_);
v___x_1236_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; 
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v_fst_1229_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
return v___x_1237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls(lean_object* v_moduleRef_1242_, lean_object* v_ty_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1249_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext;
v___x_1250_ = ((lean_object*)(l_Lean_Meta_Rewrites_createModuleTreeRef___closed__0));
v___x_1251_ = ((lean_object*)(l_Lean_Meta_Rewrites_droppedKeys));
v___x_1252_ = lean_unsigned_to_nat(6500u);
v___x_1253_ = lean_box(0);
v___x_1254_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwFindDecls___closed__0));
v___x_1255_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleRef_1242_, v___x_1249_, v___x_1250_, v___x_1251_, v___x_1252_, v___x_1253_, v___x_1254_, v_ty_1243_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwFindDecls___boxed(lean_object* v_moduleRef_1256_, lean_object* v_ty_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lean_Meta_Rewrites_rwFindDecls(v_moduleRef_1256_, v_ty_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(lean_object* v_mctx_1264_, lean_object* v_x_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_box(0), v_mctx_1264_, v_x_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1271_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1271_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
v_a_1280_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1271_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1271_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg___boxed(lean_object* v_mctx_1288_, lean_object* v_x_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_mctx_1288_, v_x_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(lean_object* v_00_u03b1_1296_, lean_object* v_mctx_1297_, lean_object* v_x_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_mctx_1297_, v_x_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed(lean_object* v_00_u03b1_1305_, lean_object* v_mctx_1306_, lean_object* v_x_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0(v_00_u03b1_1305_, v_mctx_1306_, v_x_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(lean_object* v_x_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lean_Meta_saveState___redArg(v___y_1316_, v___y_1318_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v_r_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
lean_inc(v___y_1318_);
lean_inc_ref(v___y_1317_);
lean_inc(v___y_1316_);
lean_inc_ref(v___y_1315_);
v_r_1322_ = lean_apply_5(v_x_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, lean_box(0));
if (lean_obj_tag(v_r_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1324_; 
v_a_1323_ = lean_ctor_get(v_r_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v_r_1322_, 1);
v___x_1324_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1321_, v___y_1316_, v___y_1318_);
lean_dec(v_a_1321_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; 
v_unused_1332_ = lean_ctor_get(v___x_1324_, 0);
lean_dec(v_unused_1332_);
v___x_1326_ = v___x_1324_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_dec(v___x_1324_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 0, v_a_1323_);
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1323_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec(v_a_1323_);
v_a_1333_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1324_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1324_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1342_; 
v_a_1341_ = lean_ctor_get(v_r_1322_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v_r_1322_, 1);
v___x_1342_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1321_, v___y_1316_, v___y_1318_);
lean_dec(v_a_1321_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; 
v_unused_1350_ = lean_ctor_get(v___x_1342_, 0);
lean_dec(v_unused_1350_);
v___x_1344_ = v___x_1342_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_dec(v___x_1342_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
lean_ctor_set_tag(v___x_1344_, 1);
lean_ctor_set(v___x_1344_, 0, v_a_1341_);
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1341_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_a_1341_);
v_a_1351_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1342_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1342_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec_ref(v_x_1314_);
v_a_1359_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1320_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1320_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg___boxed(lean_object* v_x_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v_x_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(lean_object* v_00_u03b1_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v_x_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___boxed(lean_object* v_00_u03b1_1382_, lean_object* v_x_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1(v_00_u03b1_1382_, v_x_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(lean_object* v___x_1390_, uint8_t v___x_1391_, lean_object* v___x_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lean_Meta_mkFreshExprMVar(v___x_1390_, v___x_1391_, v___x_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; uint8_t v_transparency_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; lean_object* v___y_1405_; uint8_t v___x_1423_; uint8_t v___x_1424_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = l_Lean_Meta_Context_config(v___y_1393_);
v_transparency_1401_ = lean_ctor_get_uint8(v___x_1400_, 9);
lean_dec_ref(v___x_1400_);
v___x_1402_ = l_Lean_Expr_mvarId_x21(v_a_1399_);
lean_dec(v_a_1399_);
v___x_1403_ = 1;
v___x_1423_ = 2;
v___x_1424_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1401_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v_keyedConfig_1425_; uint8_t v_trackZetaDelta_1426_; lean_object* v_zetaDeltaSet_1427_; lean_object* v_lctx_1428_; lean_object* v_localInstances_1429_; lean_object* v_defEqCtx_x3f_1430_; lean_object* v_synthPendingDepth_1431_; lean_object* v_customCanUnfoldPredicate_x3f_1432_; uint8_t v_univApprox_1433_; uint8_t v_inTypeClassResolution_1434_; uint8_t v_cacheInferType_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1444_; 
v_keyedConfig_1425_ = lean_ctor_get(v___y_1393_, 0);
v_trackZetaDelta_1426_ = lean_ctor_get_uint8(v___y_1393_, sizeof(void*)*7);
v_zetaDeltaSet_1427_ = lean_ctor_get(v___y_1393_, 1);
v_lctx_1428_ = lean_ctor_get(v___y_1393_, 2);
v_localInstances_1429_ = lean_ctor_get(v___y_1393_, 3);
v_defEqCtx_x3f_1430_ = lean_ctor_get(v___y_1393_, 4);
v_synthPendingDepth_1431_ = lean_ctor_get(v___y_1393_, 5);
v_customCanUnfoldPredicate_x3f_1432_ = lean_ctor_get(v___y_1393_, 6);
v_univApprox_1433_ = lean_ctor_get_uint8(v___y_1393_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1434_ = lean_ctor_get_uint8(v___y_1393_, sizeof(void*)*7 + 2);
v_cacheInferType_1435_ = lean_ctor_get_uint8(v___y_1393_, sizeof(void*)*7 + 3);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___y_1393_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1437_ = v___y_1393_;
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1432_);
lean_inc(v_synthPendingDepth_1431_);
lean_inc(v_defEqCtx_x3f_1430_);
lean_inc(v_localInstances_1429_);
lean_inc(v_lctx_1428_);
lean_inc(v_zetaDeltaSet_1427_);
lean_inc(v_keyedConfig_1425_);
lean_dec(v___y_1393_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1423_, v_keyedConfig_1425_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1439_);
v___x_1441_ = v___x_1437_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_zetaDeltaSet_1427_);
lean_ctor_set(v_reuseFailAlloc_1443_, 2, v_lctx_1428_);
lean_ctor_set(v_reuseFailAlloc_1443_, 3, v_localInstances_1429_);
lean_ctor_set(v_reuseFailAlloc_1443_, 4, v_defEqCtx_x3f_1430_);
lean_ctor_set(v_reuseFailAlloc_1443_, 5, v_synthPendingDepth_1431_);
lean_ctor_set(v_reuseFailAlloc_1443_, 6, v_customCanUnfoldPredicate_x3f_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1443_, sizeof(void*)*7, v_trackZetaDelta_1426_);
lean_ctor_set_uint8(v_reuseFailAlloc_1443_, sizeof(void*)*7 + 1, v_univApprox_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1443_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1434_);
lean_ctor_set_uint8(v_reuseFailAlloc_1443_, sizeof(void*)*7 + 3, v_cacheInferType_1435_);
v___x_1441_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lean_MVarId_refl(v___x_1402_, v___x_1403_, v___x_1441_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec_ref(v___x_1441_);
v___y_1405_ = v___x_1442_;
goto v___jp_1404_;
}
}
}
else
{
lean_object* v___x_1445_; 
v___x_1445_ = l_Lean_MVarId_refl(v___x_1402_, v___x_1403_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec_ref(v___y_1393_);
v___y_1405_ = v___x_1445_;
goto v___jp_1404_;
}
v___jp_1404_:
{
if (lean_obj_tag(v___y_1405_) == 0)
{
lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1413_; 
v_isSharedCheck_1413_ = !lean_is_exclusive(v___y_1405_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; 
v_unused_1414_ = lean_ctor_get(v___y_1405_, 0);
lean_dec(v_unused_1414_);
v___x_1407_ = v___y_1405_;
v_isShared_1408_ = v_isSharedCheck_1413_;
goto v_resetjp_1406_;
}
else
{
lean_dec(v___y_1405_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1413_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1411_; 
v___x_1409_ = lean_box(v___x_1403_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1409_);
v___x_1411_ = v___x_1407_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
v_a_1415_ = lean_ctor_get(v___y_1405_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___y_1405_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___y_1405_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___y_1405_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
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
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v___y_1393_);
v_a_1446_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1398_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1398_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed(lean_object* v___x_1454_, lean_object* v___x_1455_, lean_object* v___x_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
uint8_t v___x_2262__boxed_1462_; lean_object* v_res_1463_; 
v___x_2262__boxed_1462_ = lean_unbox(v___x_1455_);
v_res_1463_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0(v___x_1454_, v___x_2262__boxed_1462_, v___x_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(lean_object* v_mctx_1464_, lean_object* v_e_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v___x_1471_; uint8_t v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___f_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1471_, 0, v_e_1465_);
v___x_1472_ = 0;
v___x_1473_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__3_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_);
v___x_1474_ = lean_box(v___x_1472_);
v___f_1475_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1475_, 0, v___x_1471_);
lean_closure_set(v___f_1475_, 1, v___x_1474_);
lean_closure_set(v___f_1475_, 2, v___x_1473_);
v___x_1476_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_1476_, 0, lean_box(0));
lean_closure_set(v___x_1476_, 1, v_mctx_1464_);
lean_closure_set(v___x_1476_, 2, v___f_1475_);
v___x_1477_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_1476_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
if (lean_obj_tag(v___x_1477_) == 0)
{
return v___x_1477_;
}
else
{
lean_object* v_a_1478_; uint8_t v___y_1480_; uint8_t v___x_1490_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
v___x_1490_ = l_Lean_Exception_isInterrupt(v_a_1478_);
if (v___x_1490_ == 0)
{
uint8_t v___x_1491_; 
v___x_1491_ = l_Lean_Exception_isRuntime(v_a_1478_);
v___y_1480_ = v___x_1491_;
goto v___jp_1479_;
}
else
{
lean_dec(v_a_1478_);
v___y_1480_ = v___x_1490_;
goto v___jp_1479_;
}
v___jp_1479_:
{
if (v___y_1480_ == 0)
{
lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1488_; 
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v___x_1477_, 0);
lean_dec(v_unused_1489_);
v___x_1482_ = v___x_1477_;
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
else
{
lean_dec(v___x_1477_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = lean_box(v___y_1480_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set_tag(v___x_1482_, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1484_);
v___x_1486_ = v___x_1482_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
else
{
return v___x_1477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_dischargableWithRfl_x3f___boxed(lean_object* v_mctx_1492_, lean_object* v_e_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_1492_, v_e_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec_ref(v_a_1494_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(lean_object* v_r_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_result_1506_; lean_object* v_eNew_1507_; lean_object* v___x_1508_; 
v_result_1506_ = lean_ctor_get(v_r_1500_, 2);
lean_inc_ref(v_result_1506_);
lean_dec_ref(v_r_1500_);
v_eNew_1507_ = lean_ctor_get(v_result_1506_, 0);
lean_inc_ref(v_eNew_1507_);
lean_dec_ref(v_result_1506_);
v___x_1508_ = l_Lean_Meta_ppExpr(v_eNew_1507_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1519_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1511_ = v___x_1508_;
v_isShared_1512_ = v_isSharedCheck_1519_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1508_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1519_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1513_ = l_Std_Format_defWidth;
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = l_Std_Format_pretty(v_a_1509_, v___x_1513_, v___x_1514_, v___x_1514_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 0, v___x_1515_);
v___x_1517_ = v___x_1511_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1508_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1508_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed(lean_object* v_r_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult(v_r_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx(uint8_t v_x_1535_){
_start:
{
switch(v_x_1535_)
{
case 0:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_unsigned_to_nat(0u);
return v___x_1536_;
}
case 1:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_unsigned_to_nat(1u);
return v___x_1537_;
}
default: 
{
lean_object* v___x_1538_; 
v___x_1538_ = lean_unsigned_to_nat(2u);
return v___x_1538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorIdx___boxed(lean_object* v_x_1539_){
_start:
{
uint8_t v_x_boxed_1540_; lean_object* v_res_1541_; 
v_x_boxed_1540_ = lean_unbox(v_x_1539_);
v_res_1541_ = l_Lean_Meta_Rewrites_SideConditions_ctorIdx(v_x_boxed_1540_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(lean_object* v_k_1542_){
_start:
{
lean_inc(v_k_1542_);
return v_k_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg___boxed(lean_object* v_k_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_Lean_Meta_Rewrites_SideConditions_ctorElim___redArg(v_k_1543_);
lean_dec(v_k_1543_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim(lean_object* v_motive_1545_, lean_object* v_ctorIdx_1546_, uint8_t v_t_1547_, lean_object* v_h_1548_, lean_object* v_k_1549_){
_start:
{
lean_inc(v_k_1549_);
return v_k_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_ctorElim___boxed(lean_object* v_motive_1550_, lean_object* v_ctorIdx_1551_, lean_object* v_t_1552_, lean_object* v_h_1553_, lean_object* v_k_1554_){
_start:
{
uint8_t v_t_boxed_1555_; lean_object* v_res_1556_; 
v_t_boxed_1555_ = lean_unbox(v_t_1552_);
v_res_1556_ = l_Lean_Meta_Rewrites_SideConditions_ctorElim(v_motive_1550_, v_ctorIdx_1551_, v_t_boxed_1555_, v_h_1553_, v_k_1554_);
lean_dec(v_k_1554_);
lean_dec(v_ctorIdx_1551_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(lean_object* v_none_1557_){
_start:
{
lean_inc(v_none_1557_);
return v_none_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg___boxed(lean_object* v_none_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_Meta_Rewrites_SideConditions_none_elim___redArg(v_none_1558_);
lean_dec(v_none_1558_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim(lean_object* v_motive_1560_, uint8_t v_t_1561_, lean_object* v_h_1562_, lean_object* v_none_1563_){
_start:
{
lean_inc(v_none_1563_);
return v_none_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_none_elim___boxed(lean_object* v_motive_1564_, lean_object* v_t_1565_, lean_object* v_h_1566_, lean_object* v_none_1567_){
_start:
{
uint8_t v_t_boxed_1568_; lean_object* v_res_1569_; 
v_t_boxed_1568_ = lean_unbox(v_t_1565_);
v_res_1569_ = l_Lean_Meta_Rewrites_SideConditions_none_elim(v_motive_1564_, v_t_boxed_1568_, v_h_1566_, v_none_1567_);
lean_dec(v_none_1567_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(lean_object* v_assumption_1570_){
_start:
{
lean_inc(v_assumption_1570_);
return v_assumption_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg___boxed(lean_object* v_assumption_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Meta_Rewrites_SideConditions_assumption_elim___redArg(v_assumption_1571_);
lean_dec(v_assumption_1571_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim(lean_object* v_motive_1573_, uint8_t v_t_1574_, lean_object* v_h_1575_, lean_object* v_assumption_1576_){
_start:
{
lean_inc(v_assumption_1576_);
return v_assumption_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_assumption_elim___boxed(lean_object* v_motive_1577_, lean_object* v_t_1578_, lean_object* v_h_1579_, lean_object* v_assumption_1580_){
_start:
{
uint8_t v_t_boxed_1581_; lean_object* v_res_1582_; 
v_t_boxed_1581_ = lean_unbox(v_t_1578_);
v_res_1582_ = l_Lean_Meta_Rewrites_SideConditions_assumption_elim(v_motive_1577_, v_t_boxed_1581_, v_h_1579_, v_assumption_1580_);
lean_dec(v_assumption_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(lean_object* v_solveByElim_1583_){
_start:
{
lean_inc(v_solveByElim_1583_);
return v_solveByElim_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg___boxed(lean_object* v_solveByElim_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___redArg(v_solveByElim_1584_);
lean_dec(v_solveByElim_1584_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(lean_object* v_motive_1586_, uint8_t v_t_1587_, lean_object* v_h_1588_, lean_object* v_solveByElim_1589_){
_start:
{
lean_inc(v_solveByElim_1589_);
return v_solveByElim_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim___boxed(lean_object* v_motive_1590_, lean_object* v_t_1591_, lean_object* v_h_1592_, lean_object* v_solveByElim_1593_){
_start:
{
uint8_t v_t_boxed_1594_; lean_object* v_res_1595_; 
v_t_boxed_1594_ = lean_unbox(v_t_1591_);
v_res_1595_ = l_Lean_Meta_Rewrites_SideConditions_solveByElim_elim(v_motive_1590_, v_t_boxed_1594_, v_h_1592_, v_solveByElim_1593_);
lean_dec(v_solveByElim_1593_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0(lean_object* v_x_1596_, lean_object* v_x_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__0___boxed(lean_object* v_x_1605_, lean_object* v_x_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lean_Meta_Rewrites_solveByElim___lam__0(v_x_1605_, v_x_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v_x_1606_);
lean_dec(v_x_1605_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1(lean_object* v_x_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1619_ = 0;
v___x_1620_ = lean_box(v___x_1619_);
v___x_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__1___boxed(lean_object* v_x_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_Lean_Meta_Rewrites_solveByElim___lam__1(v_x_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v_x_1622_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(lean_object* v_msgData_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v___x_1635_; lean_object* v_env_1636_; lean_object* v___x_1637_; lean_object* v_toCold_1638_; lean_object* v_mctx_1639_; lean_object* v_lctx_1640_; lean_object* v_options_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1635_ = lean_st_ref_get(v___y_1633_);
v_env_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc_ref(v_env_1636_);
lean_dec(v___x_1635_);
v___x_1637_ = lean_st_ref_get(v___y_1631_);
v_toCold_1638_ = lean_ctor_get(v___y_1632_, 0);
v_mctx_1639_ = lean_ctor_get(v___x_1637_, 0);
lean_inc_ref(v_mctx_1639_);
lean_dec(v___x_1637_);
v_lctx_1640_ = lean_ctor_get(v___y_1630_, 2);
v_options_1641_ = lean_ctor_get(v_toCold_1638_, 2);
lean_inc_ref(v_options_1641_);
lean_inc_ref(v_lctx_1640_);
v___x_1642_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1642_, 0, v_env_1636_);
lean_ctor_set(v___x_1642_, 1, v_mctx_1639_);
lean_ctor_set(v___x_1642_, 2, v_lctx_1640_);
lean_ctor_set(v___x_1642_, 3, v_options_1641_);
v___x_1643_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
lean_ctor_set(v___x_1643_, 1, v_msgData_1629_);
v___x_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0___boxed(lean_object* v_msgData_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msgData_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(lean_object* v_msg_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_ref_1658_; lean_object* v___x_1659_; lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1668_; 
v_ref_1658_ = lean_ctor_get(v___y_1655_, 2);
v___x_1659_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msg_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1668_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1668_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1666_; 
lean_inc(v_ref_1658_);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_ref_1658_);
lean_ctor_set(v___x_1664_, 1, v_a_1660_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 1);
lean_ctor_set(v___x_1662_, 0, v___x_1664_);
v___x_1666_ = v___x_1662_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg___boxed(lean_object* v_msg_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v_msg_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
return v_res_1675_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__0));
v___x_1678_ = l_Lean_stringToMessageData(v___x_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2(lean_object* v_x_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = lean_obj_once(&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1, &l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1);
v___x_1686_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v___x_1685_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___lam__2___boxed(lean_object* v_x_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Meta_Rewrites_solveByElim___lam__2(v_x_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v_x_1687_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim(lean_object* v_goals_1703_, lean_object* v_depth_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v___f_1710_; lean_object* v___f_1711_; lean_object* v___f_1712_; uint8_t v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; lean_object* v___x_1718_; lean_object* v_cfg_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___f_1710_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__0));
v___f_1711_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__1));
v___f_1712_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__2));
v___x_1713_ = 0;
v___x_1714_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1714_, 0, v_depth_1704_);
lean_ctor_set(v___x_1714_, 1, v___f_1710_);
lean_ctor_set(v___x_1714_, 2, v___f_1711_);
lean_ctor_set(v___x_1714_, 3, v___f_1712_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*4, v___x_1713_);
v___x_1715_ = 1;
v___x_1716_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__3));
v___x_1717_ = 1;
v___x_1718_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_1718_, 0, v___x_1714_);
lean_ctor_set(v___x_1718_, 1, v___x_1716_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*2, v___x_1717_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*2 + 1, v___x_1715_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*2 + 2, v___x_1713_);
v_cfg_1719_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_cfg_1719_, 0, v___x_1718_);
lean_ctor_set_uint8(v_cfg_1719_, sizeof(void*)*1, v___x_1715_);
lean_ctor_set_uint8(v_cfg_1719_, sizeof(void*)*1 + 1, v___x_1715_);
lean_ctor_set_uint8(v_cfg_1719_, sizeof(void*)*1 + 2, v___x_1715_);
lean_ctor_set_uint8(v_cfg_1719_, sizeof(void*)*1 + 3, v___x_1713_);
v___x_1720_ = lean_box(0);
v___x_1721_ = ((lean_object*)(l_Lean_Meta_Rewrites_solveByElim___closed__4));
v___x_1722_ = l_Lean_Meta_SolveByElim_mkAssumptionSet(v___x_1713_, v___x_1713_, v___x_1720_, v___x_1720_, v___x_1721_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v_fst_1724_; lean_object* v_snd_1725_; lean_object* v___x_1726_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v_fst_1724_ = lean_ctor_get(v_a_1723_, 0);
lean_inc(v_fst_1724_);
v_snd_1725_ = lean_ctor_get(v_a_1723_, 1);
lean_inc(v_snd_1725_);
lean_dec(v_a_1723_);
v___x_1726_ = l_Lean_Meta_SolveByElim_solveByElim(v_cfg_1719_, v_fst_1724_, v_snd_1725_, v_goals_1703_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1737_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
if (lean_obj_tag(v_a_1727_) == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = lean_box(0);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1731_);
v___x_1733_ = v___x_1729_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_del_object(v___x_1729_);
lean_dec(v_a_1727_);
v___x_1735_ = lean_obj_once(&l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1, &l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_Rewrites_solveByElim___lam__2___closed__1);
v___x_1736_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v___x_1735_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_);
return v___x_1736_;
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
v_a_1738_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1726_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1726_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref_known(v_cfg_1719_, 1);
lean_dec(v_goals_1703_);
v_a_1746_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1722_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1722_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_solveByElim___boxed(lean_object* v_goals_1754_, lean_object* v_depth_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Meta_Rewrites_solveByElim(v_goals_1754_, v_depth_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
lean_dec(v_a_1757_);
lean_dec_ref(v_a_1756_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(lean_object* v_00_u03b1_1762_, lean_object* v_msg_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___redArg(v_msg_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0___boxed(lean_object* v_00_u03b1_1770_, lean_object* v_msg_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0(v_00_u03b1_1770_, v_msg_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(lean_object* v_e_1778_, lean_object* v___y_1779_){
_start:
{
uint8_t v___x_1781_; 
v___x_1781_ = l_Lean_Expr_hasMVar(v_e_1778_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v_e_1778_);
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; lean_object* v_mctx_1784_; lean_object* v___x_1785_; lean_object* v_fst_1786_; lean_object* v_snd_1787_; lean_object* v___x_1788_; lean_object* v_cache_1789_; lean_object* v_zetaDeltaFVarIds_1790_; lean_object* v_postponed_1791_; lean_object* v_diag_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1801_; 
v___x_1783_ = lean_st_ref_get(v___y_1779_);
v_mctx_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc_ref(v_mctx_1784_);
lean_dec(v___x_1783_);
v___x_1785_ = l_Lean_instantiateMVarsCore(v_mctx_1784_, v_e_1778_);
v_fst_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_fst_1786_);
v_snd_1787_ = lean_ctor_get(v___x_1785_, 1);
lean_inc(v_snd_1787_);
lean_dec_ref(v___x_1785_);
v___x_1788_ = lean_st_ref_take(v___y_1779_);
v_cache_1789_ = lean_ctor_get(v___x_1788_, 1);
v_zetaDeltaFVarIds_1790_ = lean_ctor_get(v___x_1788_, 2);
v_postponed_1791_ = lean_ctor_get(v___x_1788_, 3);
v_diag_1792_ = lean_ctor_get(v___x_1788_, 4);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1801_ == 0)
{
lean_object* v_unused_1802_; 
v_unused_1802_ = lean_ctor_get(v___x_1788_, 0);
lean_dec(v_unused_1802_);
v___x_1794_ = v___x_1788_;
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_diag_1792_);
lean_inc(v_postponed_1791_);
lean_inc(v_zetaDeltaFVarIds_1790_);
lean_inc(v_cache_1789_);
lean_dec(v___x_1788_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1801_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v_snd_1787_);
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_snd_1787_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v_cache_1789_);
lean_ctor_set(v_reuseFailAlloc_1800_, 2, v_zetaDeltaFVarIds_1790_);
lean_ctor_set(v_reuseFailAlloc_1800_, 3, v_postponed_1791_);
lean_ctor_set(v_reuseFailAlloc_1800_, 4, v_diag_1792_);
v___x_1797_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = lean_st_ref_put(v___y_1779_, v___x_1797_);
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v_fst_1786_);
return v___x_1799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg___boxed(lean_object* v_e_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_e_1803_, v___y_1804_);
lean_dec(v___y_1804_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(lean_object* v_e_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_e_1807_, v___y_1809_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___boxed(lean_object* v_e_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0(v_e_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
return v_res_1820_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1821_; double v___x_1822_; 
v___x_1821_ = lean_unsigned_to_nat(0u);
v___x_1822_ = lean_float_of_nat(v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(lean_object* v_cls_1826_, lean_object* v_msg_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v_ref_1833_; lean_object* v___x_1834_; lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1879_; 
v_ref_1833_ = lean_ctor_get(v___y_1830_, 2);
v___x_1834_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Rewrites_solveByElim_spec__0_spec__0(v_msg_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_);
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1837_ = v___x_1834_;
v_isShared_1838_ = v_isSharedCheck_1879_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1879_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v_traceState_1840_; lean_object* v_env_1841_; lean_object* v_nextMacroScope_1842_; lean_object* v_ngen_1843_; lean_object* v_auxDeclNGen_1844_; lean_object* v_cache_1845_; lean_object* v_messages_1846_; lean_object* v_infoState_1847_; lean_object* v_snapshotTasks_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1878_; 
v___x_1839_ = lean_st_ref_take(v___y_1831_);
v_traceState_1840_ = lean_ctor_get(v___x_1839_, 4);
v_env_1841_ = lean_ctor_get(v___x_1839_, 0);
v_nextMacroScope_1842_ = lean_ctor_get(v___x_1839_, 1);
v_ngen_1843_ = lean_ctor_get(v___x_1839_, 2);
v_auxDeclNGen_1844_ = lean_ctor_get(v___x_1839_, 3);
v_cache_1845_ = lean_ctor_get(v___x_1839_, 5);
v_messages_1846_ = lean_ctor_get(v___x_1839_, 6);
v_infoState_1847_ = lean_ctor_get(v___x_1839_, 7);
v_snapshotTasks_1848_ = lean_ctor_get(v___x_1839_, 8);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1850_ = v___x_1839_;
v_isShared_1851_ = v_isSharedCheck_1878_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_snapshotTasks_1848_);
lean_inc(v_infoState_1847_);
lean_inc(v_messages_1846_);
lean_inc(v_cache_1845_);
lean_inc(v_traceState_1840_);
lean_inc(v_auxDeclNGen_1844_);
lean_inc(v_ngen_1843_);
lean_inc(v_nextMacroScope_1842_);
lean_inc(v_env_1841_);
lean_dec(v___x_1839_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1878_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
uint64_t v_tid_1852_; lean_object* v_traces_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1877_; 
v_tid_1852_ = lean_ctor_get_uint64(v_traceState_1840_, sizeof(void*)*1);
v_traces_1853_ = lean_ctor_get(v_traceState_1840_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v_traceState_1840_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1855_ = v_traceState_1840_;
v_isShared_1856_ = v_isSharedCheck_1877_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_traces_1853_);
lean_dec(v_traceState_1840_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1877_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; double v___x_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1868_; 
v___x_1857_ = lean_box(0);
v___x_1858_ = lean_box(0);
v___x_1859_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__0);
v___x_1860_ = 0;
v___x_1861_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1));
v___x_1862_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1862_, 0, v_cls_1826_);
lean_ctor_set(v___x_1862_, 1, v___x_1858_);
lean_ctor_set(v___x_1862_, 2, v___x_1861_);
lean_ctor_set_float(v___x_1862_, sizeof(void*)*3, v___x_1859_);
lean_ctor_set_float(v___x_1862_, sizeof(void*)*3 + 8, v___x_1859_);
lean_ctor_set_uint8(v___x_1862_, sizeof(void*)*3 + 16, v___x_1860_);
v___x_1863_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__2));
v___x_1864_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1862_);
lean_ctor_set(v___x_1864_, 1, v_a_1835_);
lean_ctor_set(v___x_1864_, 2, v___x_1863_);
lean_inc(v_ref_1833_);
v___x_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1865_, 0, v_ref_1833_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = l_Lean_PersistentArray_push___redArg(v_traces_1853_, v___x_1865_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1866_);
v___x_1868_ = v___x_1855_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1866_);
lean_ctor_set_uint64(v_reuseFailAlloc_1876_, sizeof(void*)*1, v_tid_1852_);
v___x_1868_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1870_; 
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 4, v___x_1868_);
v___x_1870_ = v___x_1850_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_env_1841_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v_nextMacroScope_1842_);
lean_ctor_set(v_reuseFailAlloc_1875_, 2, v_ngen_1843_);
lean_ctor_set(v_reuseFailAlloc_1875_, 3, v_auxDeclNGen_1844_);
lean_ctor_set(v_reuseFailAlloc_1875_, 4, v___x_1868_);
lean_ctor_set(v_reuseFailAlloc_1875_, 5, v_cache_1845_);
lean_ctor_set(v_reuseFailAlloc_1875_, 6, v_messages_1846_);
lean_ctor_set(v_reuseFailAlloc_1875_, 7, v_infoState_1847_);
lean_ctor_set(v_reuseFailAlloc_1875_, 8, v_snapshotTasks_1848_);
v___x_1870_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1871_ = lean_st_ref_put(v___y_1831_, v___x_1870_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1857_);
v___x_1873_ = v___x_1837_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1857_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___boxed(lean_object* v_cls_1880_, lean_object* v_msg_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v_cls_1880_, v_msg_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(lean_object* v_x_1888_, lean_object* v_x_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
if (lean_obj_tag(v_x_1888_) == 0)
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = l_List_reverse___redArg(v_x_1889_);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
else
{
lean_object* v_head_1897_; lean_object* v_tail_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1916_; 
v_head_1897_ = lean_ctor_get(v_x_1888_, 0);
v_tail_1898_ = lean_ctor_get(v_x_1888_, 1);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_x_1888_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1900_ = v_x_1888_;
v_isShared_1901_ = v_isSharedCheck_1916_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_tail_1898_);
lean_inc(v_head_1897_);
lean_dec(v_x_1888_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1916_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_MVarId_assumption(v_head_1897_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1905_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 1, v_x_1889_);
lean_ctor_set(v___x_1900_, 0, v_a_1903_);
v___x_1905_ = v___x_1900_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1903_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_x_1889_);
v___x_1905_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
v_x_1888_ = v_tail_1898_;
v_x_1889_ = v___x_1905_;
goto _start;
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_del_object(v___x_1900_);
lean_dec(v_tail_1898_);
lean_dec(v_x_1889_);
v_a_1908_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1902_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1902_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1___boxed(lean_object* v_x_1917_, lean_object* v_x_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(v_x_1917_, v_x_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1924_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_1938_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4));
v___x_1939_ = l_Lean_Name_append(v___x_1938_, v___x_1937_);
return v___x_1939_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__6));
v___x_1942_ = l_Lean_stringToMessageData(v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0(lean_object* v_weight_1944_, lean_object* v_goal_1945_, lean_object* v_target_1946_, uint8_t v_symm_1947_, uint8_t v_side_1948_, lean_object* v_lem_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; uint8_t v___y_1960_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v_fst_1986_; uint8_t v_snd_1987_; lean_object* v___y_2012_; uint8_t v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2034_; uint8_t v___y_2035_; uint8_t v_discharge_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; lean_object* v___y_2040_; uint8_t v___y_2044_; lean_object* v___y_2045_; uint8_t v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; uint8_t v___y_2053_; uint8_t v___y_2065_; lean_object* v___y_2066_; uint8_t v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2073_; uint8_t v___y_2074_; lean_object* v___y_2086_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; lean_object* v_val_2184_; 
if (lean_obj_tag(v_lem_1949_) == 0)
{
lean_object* v_val_2195_; 
v_val_2195_ = lean_ctor_get(v_lem_1949_, 0);
lean_inc(v_val_2195_);
lean_dec_ref_known(v_lem_1949_, 1);
v_val_2184_ = v_val_2195_;
goto v___jp_2183_;
}
else
{
lean_object* v_val_2196_; lean_object* v___x_2197_; 
v_val_2196_ = lean_ctor_get(v_lem_1949_, 0);
lean_inc(v_val_2196_);
lean_dec_ref_known(v_lem_1949_, 1);
v___x_2197_ = l_Lean_Meta_saveState___redArg(v___y_1951_, v___y_1953_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_val_2196_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; 
lean_dec(v_a_2198_);
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
lean_inc(v_a_2200_);
lean_dec_ref_known(v___x_2199_, 1);
v_val_2184_ = v_a_2200_;
goto v___jp_2183_;
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2230_; 
lean_dec_ref(v_target_1946_);
lean_dec(v_goal_1945_);
lean_dec(v_weight_1944_);
v_a_2201_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2203_ = v___x_2199_;
v_isShared_2204_ = v_isSharedCheck_2230_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2199_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2230_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
uint8_t v___y_2206_; uint8_t v___x_2228_; 
v___x_2228_ = l_Lean_Exception_isInterrupt(v_a_2201_);
if (v___x_2228_ == 0)
{
uint8_t v___x_2229_; 
lean_inc(v_a_2201_);
v___x_2229_ = l_Lean_Exception_isRuntime(v_a_2201_);
v___y_2206_ = v___x_2229_;
goto v___jp_2205_;
}
else
{
v___y_2206_ = v___x_2228_;
goto v___jp_2205_;
}
v___jp_2205_:
{
if (v___y_2206_ == 0)
{
lean_object* v___x_2207_; 
lean_del_object(v___x_2203_);
lean_dec(v_a_2201_);
v___x_2207_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2198_, v___y_1951_, v___y_1953_);
lean_dec(v_a_2198_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2215_; 
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; 
v_unused_2216_ = lean_ctor_get(v___x_2207_, 0);
lean_dec(v_unused_2216_);
v___x_2209_ = v___x_2207_;
v_isShared_2210_ = v_isSharedCheck_2215_;
goto v_resetjp_2208_;
}
else
{
lean_dec(v___x_2207_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2215_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v___x_2213_; 
v___x_2211_ = lean_box(0);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 0, v___x_2211_);
v___x_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
v_a_2217_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2207_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2207_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_object* v___x_2226_; 
lean_dec(v_a_2198_);
if (v_isShared_2204_ == 0)
{
v___x_2226_ = v___x_2203_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2201_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec(v_val_2196_);
lean_dec_ref(v_target_1946_);
lean_dec(v_goal_1945_);
lean_dec(v_weight_1944_);
v_a_2231_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2197_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2197_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
v___jp_1955_:
{
if (v___y_1960_ == 0)
{
lean_object* v___x_1961_; 
lean_dec_ref(v___y_1957_);
v___x_1961_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1956_, v___y_1959_, v___y_1958_);
lean_dec_ref(v___y_1956_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1969_; 
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; 
v_unused_1970_ = lean_ctor_get(v___x_1961_, 0);
lean_dec(v_unused_1970_);
v___x_1963_ = v___x_1961_;
v_isShared_1964_ = v_isSharedCheck_1969_;
goto v_resetjp_1962_;
}
else
{
lean_dec(v___x_1961_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1969_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1965_; lean_object* v___x_1967_; 
v___x_1965_ = lean_box(0);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1965_);
v___x_1967_ = v___x_1963_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
v_a_1971_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1961_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1961_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
else
{
lean_object* v___x_1979_; 
lean_dec_ref(v___y_1956_);
v___x_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___y_1957_);
return v___x_1979_;
}
}
v___jp_1980_:
{
lean_object* v___x_1988_; lean_object* v_mctx_1989_; lean_object* v_eNew_1990_; lean_object* v___x_1991_; 
v___x_1988_ = lean_st_ref_get(v___y_1985_);
v_mctx_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc_ref_n(v_mctx_1989_, 2);
lean_dec(v___x_1988_);
v_eNew_1990_ = lean_ctor_get(v___y_1981_, 0);
lean_inc_ref(v_eNew_1990_);
v___x_1991_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_1989_, v_eNew_1990_, v___y_1984_, v___y_1985_, v___y_1982_, v___y_1983_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2002_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2002_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; uint8_t v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_2000_; 
v___x_1996_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1996_, 0, v_fst_1986_);
lean_ctor_set(v___x_1996_, 1, v_weight_1944_);
lean_ctor_set(v___x_1996_, 2, v___y_1981_);
lean_ctor_set(v___x_1996_, 3, v_mctx_1989_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*4, v_snd_1987_);
v___x_1997_ = lean_unbox(v_a_1992_);
lean_dec(v_a_1992_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*4 + 1, v___x_1997_);
v___x_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1996_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_1998_);
v___x_2000_ = v___x_1994_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1998_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec_ref(v_mctx_1989_);
lean_dec_ref(v_fst_1986_);
lean_dec_ref(v___y_1981_);
lean_dec(v_weight_1944_);
v_a_2003_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1991_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1991_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
v___jp_2011_:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Lean_Meta_Rewrites_rewriteResultLemma(v___y_2012_);
if (lean_obj_tag(v___x_2018_) == 1)
{
lean_object* v_val_2019_; lean_object* v___x_2020_; lean_object* v_a_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; 
v_val_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_val_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v___x_2020_ = l_Lean_instantiateMVars___at___00Lean_Meta_Rewrites_rwLemma_spec__0___redArg(v_val_2019_, v___y_2015_);
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2021_);
lean_dec_ref(v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__1));
v___x_2023_ = lean_unsigned_to_nat(4u);
v___x_2024_ = l_Lean_Expr_isAppOfArity(v_a_2021_, v___x_2022_, v___x_2023_);
if (v___x_2024_ == 0)
{
v___y_1981_ = v___y_2012_;
v___y_1982_ = v___y_2016_;
v___y_1983_ = v___y_2017_;
v___y_1984_ = v___y_2014_;
v___y_1985_ = v___y_2015_;
v_fst_1986_ = v_a_2021_;
v_snd_1987_ = v___x_2024_;
goto v___jp_1980_;
}
else
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2025_ = lean_unsigned_to_nat(3u);
v___x_2026_ = l_Lean_Expr_getAppNumArgs(v_a_2021_);
v___x_2027_ = lean_nat_sub(v___x_2026_, v___x_2025_);
lean_dec(v___x_2026_);
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_sub(v___x_2027_, v___x_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = l_Lean_Expr_getRevArg_x21(v_a_2021_, v___x_2029_);
lean_dec(v_a_2021_);
v___y_1981_ = v___y_2012_;
v___y_1982_ = v___y_2016_;
v___y_1983_ = v___y_2017_;
v___y_1984_ = v___y_2014_;
v___y_1985_ = v___y_2015_;
v_fst_1986_ = v___x_2030_;
v_snd_1987_ = v___y_2013_;
goto v___jp_1980_;
}
}
else
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
lean_dec(v___x_2018_);
lean_dec_ref(v___y_2012_);
lean_dec(v_weight_1944_);
v___x_2031_ = lean_box(0);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2031_);
return v___x_2032_;
}
}
v___jp_2033_:
{
if (v_discharge_2036_ == 0)
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_dec_ref(v___y_2034_);
lean_dec(v_weight_1944_);
v___x_2041_ = lean_box(0);
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
return v___x_2042_;
}
else
{
v___y_2012_ = v___y_2034_;
v___y_2013_ = v___y_2035_;
v___y_2014_ = v___y_2037_;
v___y_2015_ = v___y_2038_;
v___y_2016_ = v___y_2039_;
v___y_2017_ = v___y_2040_;
goto v___jp_2011_;
}
}
v___jp_2043_:
{
if (v___y_2053_ == 0)
{
lean_object* v___x_2054_; 
lean_dec_ref(v___y_2048_);
v___x_2054_ = l_Lean_Meta_SavedState_restore___redArg(v___y_2051_, v___y_2052_, v___y_2050_);
lean_dec_ref(v___y_2051_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_dec_ref_known(v___x_2054_, 1);
v___y_2034_ = v___y_2045_;
v___y_2035_ = v___y_2046_;
v_discharge_2036_ = v___y_2044_;
v___y_2037_ = v___y_2047_;
v___y_2038_ = v___y_2052_;
v___y_2039_ = v___y_2049_;
v___y_2040_ = v___y_2050_;
goto v___jp_2033_;
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec_ref(v___y_2045_);
lean_dec(v_weight_1944_);
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v___x_2063_; 
lean_dec_ref(v___y_2051_);
lean_dec_ref(v___y_2045_);
lean_dec(v_weight_1944_);
v___x_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___y_2048_);
return v___x_2063_;
}
}
v___jp_2064_:
{
if (v___y_2074_ == 0)
{
lean_object* v___x_2075_; 
lean_dec_ref(v___y_2070_);
v___x_2075_ = l_Lean_Meta_SavedState_restore___redArg(v___y_2072_, v___y_2073_, v___y_2071_);
lean_dec_ref(v___y_2072_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_dec_ref_known(v___x_2075_, 1);
v___y_2034_ = v___y_2066_;
v___y_2035_ = v___y_2067_;
v_discharge_2036_ = v___y_2065_;
v___y_2037_ = v___y_2068_;
v___y_2038_ = v___y_2073_;
v___y_2039_ = v___y_2069_;
v___y_2040_ = v___y_2071_;
goto v___jp_2033_;
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
lean_dec_ref(v___y_2066_);
lean_dec(v_weight_1944_);
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2075_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2075_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
else
{
lean_object* v___x_2084_; 
lean_dec_ref(v___y_2072_);
lean_dec_ref(v___y_2066_);
lean_dec(v_weight_1944_);
v___x_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___y_2070_);
return v___x_2084_;
}
}
v___jp_2085_:
{
uint8_t v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = 1;
v___x_2088_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__2));
v___x_2089_ = l_Lean_Meta_saveState___redArg(v___y_1951_, v___y_1953_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
lean_inc_ref(v___y_2086_);
v___x_2091_ = l_Lean_MVarId_rewrite(v_goal_1945_, v_target_1946_, v___y_2086_, v_symm_1947_, v___x_2088_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2153_; 
lean_dec(v_a_2090_);
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2153_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2153_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v_eNew_2096_; lean_object* v_mvarIds_2097_; uint8_t v___x_2098_; 
v_eNew_2096_ = lean_ctor_get(v_a_2092_, 0);
v_mvarIds_2097_ = lean_ctor_get(v_a_2092_, 2);
v___x_2098_ = l_List_isEmpty___redArg(v_mvarIds_2097_);
if (v___x_2098_ == 0)
{
lean_del_object(v___x_2094_);
lean_dec_ref(v___y_2086_);
switch(v_side_1948_)
{
case 0:
{
v___y_2034_ = v_a_2092_;
v___y_2035_ = v___x_2087_;
v_discharge_2036_ = v___x_2098_;
v___y_2037_ = v___y_1950_;
v___y_2038_ = v___y_1951_;
v___y_2039_ = v___y_1952_;
v___y_2040_ = v___y_1953_;
goto v___jp_2033_;
}
case 1:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_box(0);
v___x_2100_ = l_Lean_Meta_saveState___redArg(v___y_1951_, v___y_1953_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
lean_inc(v_mvarIds_2097_);
v___x_2102_ = l_List_mapM_loop___at___00Lean_Meta_Rewrites_rwLemma_spec__1(v_mvarIds_2097_, v___x_2099_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_dec_ref_known(v___x_2102_, 1);
lean_dec(v_a_2101_);
v___y_2012_ = v_a_2092_;
v___y_2013_ = v___x_2087_;
v___y_2014_ = v___y_1950_;
v___y_2015_ = v___y_1951_;
v___y_2016_ = v___y_1952_;
v___y_2017_ = v___y_1953_;
goto v___jp_2011_;
}
else
{
lean_object* v_a_2103_; uint8_t v___x_2104_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___x_2102_, 1);
v___x_2104_ = l_Lean_Exception_isInterrupt(v_a_2103_);
if (v___x_2104_ == 0)
{
uint8_t v___x_2105_; 
lean_inc(v_a_2103_);
v___x_2105_ = l_Lean_Exception_isRuntime(v_a_2103_);
v___y_2065_ = v___x_2098_;
v___y_2066_ = v_a_2092_;
v___y_2067_ = v___x_2087_;
v___y_2068_ = v___y_1950_;
v___y_2069_ = v___y_1952_;
v___y_2070_ = v_a_2103_;
v___y_2071_ = v___y_1953_;
v___y_2072_ = v_a_2101_;
v___y_2073_ = v___y_1951_;
v___y_2074_ = v___x_2105_;
goto v___jp_2064_;
}
else
{
v___y_2065_ = v___x_2098_;
v___y_2066_ = v_a_2092_;
v___y_2067_ = v___x_2087_;
v___y_2068_ = v___y_1950_;
v___y_2069_ = v___y_1952_;
v___y_2070_ = v_a_2103_;
v___y_2071_ = v___y_1953_;
v___y_2072_ = v_a_2101_;
v___y_2073_ = v___y_1951_;
v___y_2074_ = v___x_2104_;
goto v___jp_2064_;
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_a_2092_);
lean_dec(v_weight_1944_);
v_a_2106_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2100_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2100_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
default: 
{
lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = lean_unsigned_to_nat(6u);
v___x_2115_ = l_Lean_Meta_saveState___redArg(v___y_1951_, v___y_1953_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2117_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
lean_inc(v_mvarIds_2097_);
v___x_2117_ = l_Lean_Meta_Rewrites_solveByElim(v_mvarIds_2097_, v___x_2114_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_dec_ref_known(v___x_2117_, 1);
lean_dec(v_a_2116_);
v___y_2012_ = v_a_2092_;
v___y_2013_ = v___x_2087_;
v___y_2014_ = v___y_1950_;
v___y_2015_ = v___y_1951_;
v___y_2016_ = v___y_1952_;
v___y_2017_ = v___y_1953_;
goto v___jp_2011_;
}
else
{
lean_object* v_a_2118_; uint8_t v___x_2119_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v___x_2119_ = l_Lean_Exception_isInterrupt(v_a_2118_);
if (v___x_2119_ == 0)
{
uint8_t v___x_2120_; 
lean_inc(v_a_2118_);
v___x_2120_ = l_Lean_Exception_isRuntime(v_a_2118_);
v___y_2044_ = v___x_2098_;
v___y_2045_ = v_a_2092_;
v___y_2046_ = v___x_2087_;
v___y_2047_ = v___y_1950_;
v___y_2048_ = v_a_2118_;
v___y_2049_ = v___y_1952_;
v___y_2050_ = v___y_1953_;
v___y_2051_ = v_a_2116_;
v___y_2052_ = v___y_1951_;
v___y_2053_ = v___x_2120_;
goto v___jp_2043_;
}
else
{
v___y_2044_ = v___x_2098_;
v___y_2045_ = v_a_2092_;
v___y_2046_ = v___x_2087_;
v___y_2047_ = v___y_1950_;
v___y_2048_ = v_a_2118_;
v___y_2049_ = v___y_1952_;
v___y_2050_ = v___y_1953_;
v___y_2051_ = v_a_2116_;
v___y_2052_ = v___y_1951_;
v___y_2053_ = v___x_2119_;
goto v___jp_2043_;
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_a_2092_);
lean_dec(v_weight_1944_);
v_a_2121_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2115_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2115_);
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
}
}
else
{
lean_object* v___x_2129_; lean_object* v_mctx_2130_; lean_object* v___x_2131_; 
v___x_2129_ = lean_st_ref_get(v___y_1951_);
v_mctx_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc_ref_n(v_mctx_2130_, 2);
lean_dec(v___x_2129_);
lean_inc_ref(v_eNew_2096_);
v___x_2131_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_2130_, v_eNew_2096_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2144_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2144_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2144_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2139_; 
v___x_2136_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2136_, 0, v___y_2086_);
lean_ctor_set(v___x_2136_, 1, v_weight_1944_);
lean_ctor_set(v___x_2136_, 2, v_a_2092_);
lean_ctor_set(v___x_2136_, 3, v_mctx_2130_);
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*4, v_symm_1947_);
v___x_2137_ = lean_unbox(v_a_2132_);
lean_dec(v_a_2132_);
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*4 + 1, v___x_2137_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set_tag(v___x_2094_, 1);
lean_ctor_set(v___x_2094_, 0, v___x_2136_);
v___x_2139_ = v___x_2094_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2136_);
v___x_2139_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2141_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v___x_2139_);
v___x_2141_ = v___x_2134_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_2139_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec_ref(v_mctx_2130_);
lean_del_object(v___x_2094_);
lean_dec(v_a_2092_);
lean_dec_ref(v___y_2086_);
lean_dec(v_weight_1944_);
v_a_2145_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2131_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2131_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
else
{
lean_object* v_a_2154_; uint8_t v___x_2155_; 
lean_dec_ref(v___y_2086_);
lean_dec(v_weight_1944_);
v_a_2154_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2155_ = l_Lean_Exception_isInterrupt(v_a_2154_);
if (v___x_2155_ == 0)
{
uint8_t v___x_2156_; 
lean_inc(v_a_2154_);
v___x_2156_ = l_Lean_Exception_isRuntime(v_a_2154_);
v___y_1956_ = v_a_2090_;
v___y_1957_ = v_a_2154_;
v___y_1958_ = v___y_1953_;
v___y_1959_ = v___y_1951_;
v___y_1960_ = v___x_2156_;
goto v___jp_1955_;
}
else
{
v___y_1956_ = v_a_2090_;
v___y_1957_ = v_a_2154_;
v___y_1958_ = v___y_1953_;
v___y_1959_ = v___y_1951_;
v___y_1960_ = v___x_2155_;
goto v___jp_1955_;
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_dec_ref(v___y_2086_);
lean_dec_ref(v_target_1946_);
lean_dec(v_goal_1945_);
lean_dec(v_weight_1944_);
v_a_2157_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2089_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2089_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
v___jp_2165_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_inc_ref(v___y_2169_);
v___x_2170_ = l_Lean_stringToMessageData(v___y_2169_);
lean_inc_ref(v___y_2166_);
v___x_2171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___y_2166_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
lean_inc_ref(v___y_2167_);
v___x_2172_ = l_Lean_MessageData_ofExpr(v___y_2167_);
v___x_2173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
lean_inc(v___y_2168_);
v___x_2174_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v___y_2168_, v___x_2173_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_dec_ref_known(v___x_2174_, 1);
v___y_2086_ = v___y_2167_;
goto v___jp_2085_;
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec_ref(v___y_2167_);
lean_dec_ref(v_target_1946_);
lean_dec(v_goal_1945_);
lean_dec(v_weight_1944_);
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
v___jp_2183_:
{
lean_object* v_toCold_2185_; lean_object* v_options_2186_; uint8_t v_hasTrace_2187_; 
v_toCold_2185_ = lean_ctor_get(v___y_1952_, 0);
v_options_2186_ = lean_ctor_get(v_toCold_2185_, 2);
v_hasTrace_2187_ = lean_ctor_get_uint8(v_options_2186_, sizeof(void*)*1);
if (v_hasTrace_2187_ == 0)
{
v___y_2086_ = v_val_2184_;
goto v___jp_2085_;
}
else
{
lean_object* v_inheritedTraceOptions_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v_inheritedTraceOptions_2188_ = lean_ctor_get(v_toCold_2185_, 11);
v___x_2189_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__2_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_));
v___x_2190_ = lean_obj_once(&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5, &l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5_once, _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__5);
v___x_2191_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2188_, v_options_2186_, v___x_2190_);
if (v___x_2191_ == 0)
{
v___y_2086_ = v_val_2184_;
goto v___jp_2085_;
}
else
{
lean_object* v___x_2192_; 
v___x_2192_ = lean_obj_once(&l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7, &l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7_once, _init_l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__7);
if (v_symm_1947_ == 0)
{
lean_object* v___x_2193_; 
v___x_2193_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2___closed__1));
v___y_2166_ = v___x_2192_;
v___y_2167_ = v_val_2184_;
v___y_2168_ = v___x_2189_;
v___y_2169_ = v___x_2193_;
goto v___jp_2165_;
}
else
{
lean_object* v___x_2194_; 
v___x_2194_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__8));
v___y_2166_ = v___x_2192_;
v___y_2167_ = v_val_2184_;
v___y_2168_ = v___x_2189_;
v___y_2169_ = v___x_2194_;
goto v___jp_2165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed(lean_object* v_weight_2239_, lean_object* v_goal_2240_, lean_object* v_target_2241_, lean_object* v_symm_2242_, lean_object* v_side_2243_, lean_object* v_lem_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
uint8_t v_symm_boxed_2250_; uint8_t v_side_boxed_2251_; lean_object* v_res_2252_; 
v_symm_boxed_2250_ = lean_unbox(v_symm_2242_);
v_side_boxed_2251_ = lean_unbox(v_side_2243_);
v_res_2252_ = l_Lean_Meta_Rewrites_rwLemma___lam__0(v_weight_2239_, v_goal_2240_, v_target_2241_, v_symm_boxed_2250_, v_side_boxed_2251_, v_lem_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma(lean_object* v_ctx_2253_, lean_object* v_goal_2254_, lean_object* v_target_2255_, uint8_t v_side_2256_, lean_object* v_lem_2257_, uint8_t v_symm_2258_, lean_object* v_weight_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___f_2267_; lean_object* v___x_2268_; 
v___x_2265_ = lean_box(v_symm_2258_);
v___x_2266_ = lean_box(v_side_2256_);
v___f_2267_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___boxed), 11, 6);
lean_closure_set(v___f_2267_, 0, v_weight_2259_);
lean_closure_set(v___f_2267_, 1, v_goal_2254_);
lean_closure_set(v___f_2267_, 2, v_target_2255_);
lean_closure_set(v___f_2267_, 3, v___x_2265_);
lean_closure_set(v___f_2267_, 4, v___x_2266_);
lean_closure_set(v___f_2267_, 5, v_lem_2257_);
v___x_2268_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___redArg(v_ctx_2253_, v___f_2267_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rwLemma___boxed(lean_object* v_ctx_2269_, lean_object* v_goal_2270_, lean_object* v_target_2271_, lean_object* v_side_2272_, lean_object* v_lem_2273_, lean_object* v_symm_2274_, lean_object* v_weight_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_){
_start:
{
uint8_t v_side_boxed_2281_; uint8_t v_symm_boxed_2282_; lean_object* v_res_2283_; 
v_side_boxed_2281_ = lean_unbox(v_side_2272_);
v_symm_boxed_2282_ = lean_unbox(v_symm_2274_);
v_res_2283_ = l_Lean_Meta_Rewrites_rwLemma(v_ctx_2269_, v_goal_2270_, v_target_2271_, v_side_boxed_2281_, v_lem_2273_, v_symm_boxed_2282_, v_weight_2275_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_);
lean_dec(v_a_2279_);
lean_dec_ref(v_a_2278_);
lean_dec(v_a_2277_);
lean_dec_ref(v_a_2276_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(lean_object* v_type_2284_, lean_object* v_k_2285_, uint8_t v_cleanupAnnotations_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v___f_2292_; uint8_t v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___f_2292_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2292_, 0, v_k_2285_);
v___x_2293_ = 0;
v___x_2294_ = lean_box(0);
v___x_2295_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2293_, v___x_2294_, v_type_2284_, v___f_2292_, v_cleanupAnnotations_2286_, v___x_2293_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2295_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2295_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
v_a_2304_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2295_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2295_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg___boxed(lean_object* v_type_2312_, lean_object* v_k_2313_, lean_object* v_cleanupAnnotations_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2320_; lean_object* v_res_2321_; 
v_cleanupAnnotations_boxed_2320_ = lean_unbox(v_cleanupAnnotations_2314_);
v_res_2321_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_type_2312_, v_k_2313_, v_cleanupAnnotations_boxed_2320_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(lean_object* v_00_u03b1_2322_, lean_object* v_type_2323_, lean_object* v_k_2324_, uint8_t v_cleanupAnnotations_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_type_2323_, v_k_2324_, v_cleanupAnnotations_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___boxed(lean_object* v_00_u03b1_2332_, lean_object* v_type_2333_, lean_object* v_k_2334_, lean_object* v_cleanupAnnotations_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2341_; lean_object* v_res_2342_; 
v_cleanupAnnotations_boxed_2341_ = lean_unbox(v_cleanupAnnotations_2335_);
v_res_2342_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1(v_00_u03b1_2332_, v_type_2333_, v_k_2334_, v_cleanupAnnotations_boxed_2341_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(lean_object* v_e_2343_, lean_object* v_k_2344_, uint8_t v_cleanupAnnotations_2345_, uint8_t v_preserveNondepLet_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v___f_2352_; uint8_t v___x_2353_; uint8_t v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___f_2352_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2352_, 0, v_k_2344_);
v___x_2353_ = 1;
v___x_2354_ = 0;
v___x_2355_ = lean_box(0);
v___x_2356_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2343_, v___x_2353_, v___x_2353_, v_preserveNondepLet_2346_, v___x_2354_, v___x_2355_, v___f_2352_, v_cleanupAnnotations_2345_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2356_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2356_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
v_a_2365_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2356_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2356_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg___boxed(lean_object* v_e_2373_, lean_object* v_k_2374_, lean_object* v_cleanupAnnotations_2375_, lean_object* v_preserveNondepLet_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2382_; uint8_t v_preserveNondepLet_boxed_2383_; lean_object* v_res_2384_; 
v_cleanupAnnotations_boxed_2382_ = lean_unbox(v_cleanupAnnotations_2375_);
v_preserveNondepLet_boxed_2383_ = lean_unbox(v_preserveNondepLet_2376_);
v_res_2384_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2373_, v_k_2374_, v_cleanupAnnotations_boxed_2382_, v_preserveNondepLet_boxed_2383_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(lean_object* v_00_u03b1_2385_, lean_object* v_e_2386_, lean_object* v_k_2387_, uint8_t v_cleanupAnnotations_2388_, uint8_t v_preserveNondepLet_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2386_, v_k_2387_, v_cleanupAnnotations_2388_, v_preserveNondepLet_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___boxed(lean_object* v_00_u03b1_2396_, lean_object* v_e_2397_, lean_object* v_k_2398_, lean_object* v_cleanupAnnotations_2399_, lean_object* v_preserveNondepLet_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2406_; uint8_t v_preserveNondepLet_boxed_2407_; lean_object* v_res_2408_; 
v_cleanupAnnotations_boxed_2406_ = lean_unbox(v_cleanupAnnotations_2399_);
v_preserveNondepLet_boxed_2407_ = lean_unbox(v_preserveNondepLet_2400_);
v_res_2408_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2(v_00_u03b1_2396_, v_e_2397_, v_k_2398_, v_cleanupAnnotations_boxed_2406_, v_preserveNondepLet_boxed_2407_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(lean_object* v_f_2409_, lean_object* v_e_x27_2410_, lean_object* v_a_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
lean_object* v___x_2417_; 
lean_inc(v___y_2415_);
lean_inc_ref(v___y_2414_);
lean_inc(v___y_2413_);
lean_inc_ref(v___y_2412_);
lean_inc_ref(v_e_x27_2410_);
v___x_2417_ = lean_apply_7(v_f_2409_, v_a_2411_, v_e_x27_2410_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, lean_box(0));
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2426_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2424_; 
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_e_x27_2410_);
lean_ctor_set(v___x_2422_, 1, v_a_2418_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2422_);
v___x_2424_ = v___x_2420_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2422_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
lean_dec_ref(v_e_x27_2410_);
v_a_2427_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2417_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2417_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0___boxed(lean_object* v_f_2435_, lean_object* v_e_x27_2436_, lean_object* v_a_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2435_, v_e_x27_2436_, v_a_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(lean_object* v_f_2444_, lean_object* v_x_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
switch(lean_obj_tag(v_x_2445_))
{
case 7:
{
lean_object* v_binderName_2452_; lean_object* v_binderType_2453_; lean_object* v_body_2454_; uint8_t v_binderInfo_2455_; lean_object* v___x_2456_; 
v_binderName_2452_ = lean_ctor_get(v_x_2445_, 0);
v_binderType_2453_ = lean_ctor_get(v_x_2445_, 1);
v_body_2454_ = lean_ctor_get(v_x_2445_, 2);
v_binderInfo_2455_ = lean_ctor_get_uint8(v_x_2445_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2453_);
lean_inc_ref(v_f_2444_);
v___x_2456_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_binderType_2453_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v_fst_2458_; lean_object* v_snd_2459_; lean_object* v___x_2460_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v_fst_2458_ = lean_ctor_get(v_a_2457_, 0);
lean_inc(v_fst_2458_);
v_snd_2459_ = lean_ctor_get(v_a_2457_, 1);
lean_inc(v_snd_2459_);
lean_dec(v_a_2457_);
lean_inc_ref(v_body_2454_);
v___x_2460_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_body_2454_, v_snd_2459_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2489_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2463_ = v___x_2460_;
v_isShared_2464_ = v_isSharedCheck_2489_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2489_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v_fst_2465_; lean_object* v_snd_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2488_; 
v_fst_2465_ = lean_ctor_get(v_a_2461_, 0);
v_snd_2466_ = lean_ctor_get(v_a_2461_, 1);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_a_2461_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2468_ = v_a_2461_;
v_isShared_2469_ = v_isSharedCheck_2488_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_snd_2466_);
lean_inc(v_fst_2465_);
lean_dec(v_a_2461_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2488_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___y_2471_; size_t v___x_2478_; size_t v___x_2479_; uint8_t v___x_2480_; 
v___x_2478_ = lean_ptr_addr(v_binderType_2453_);
v___x_2479_ = lean_ptr_addr(v_fst_2458_);
v___x_2480_ = lean_usize_dec_eq(v___x_2478_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; 
lean_inc(v_binderName_2452_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2481_ = l_Lean_Expr_forallE___override(v_binderName_2452_, v_fst_2458_, v_fst_2465_, v_binderInfo_2455_);
v___y_2471_ = v___x_2481_;
goto v___jp_2470_;
}
else
{
size_t v___x_2482_; size_t v___x_2483_; uint8_t v___x_2484_; 
v___x_2482_ = lean_ptr_addr(v_body_2454_);
v___x_2483_ = lean_ptr_addr(v_fst_2465_);
v___x_2484_ = lean_usize_dec_eq(v___x_2482_, v___x_2483_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; 
lean_inc(v_binderName_2452_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2485_ = l_Lean_Expr_forallE___override(v_binderName_2452_, v_fst_2458_, v_fst_2465_, v_binderInfo_2455_);
v___y_2471_ = v___x_2485_;
goto v___jp_2470_;
}
else
{
uint8_t v___x_2486_; 
v___x_2486_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2455_, v_binderInfo_2455_);
if (v___x_2486_ == 0)
{
lean_object* v___x_2487_; 
lean_inc(v_binderName_2452_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2487_ = l_Lean_Expr_forallE___override(v_binderName_2452_, v_fst_2458_, v_fst_2465_, v_binderInfo_2455_);
v___y_2471_ = v___x_2487_;
goto v___jp_2470_;
}
else
{
lean_dec(v_fst_2465_);
lean_dec(v_fst_2458_);
v___y_2471_ = v_x_2445_;
goto v___jp_2470_;
}
}
}
v___jp_2470_:
{
lean_object* v___x_2473_; 
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 0, v___y_2471_);
v___x_2473_ = v___x_2468_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___y_2471_);
lean_ctor_set(v_reuseFailAlloc_2477_, 1, v_snd_2466_);
v___x_2473_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
lean_object* v___x_2475_; 
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v___x_2473_);
v___x_2475_ = v___x_2463_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2473_);
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
}
}
else
{
lean_dec(v_fst_2458_);
lean_dec_ref_known(v_x_2445_, 3);
return v___x_2460_;
}
}
else
{
lean_dec_ref_known(v_x_2445_, 3);
lean_dec_ref(v_f_2444_);
return v___x_2456_;
}
}
case 6:
{
lean_object* v_binderName_2490_; lean_object* v_binderType_2491_; lean_object* v_body_2492_; uint8_t v_binderInfo_2493_; lean_object* v___x_2494_; 
v_binderName_2490_ = lean_ctor_get(v_x_2445_, 0);
v_binderType_2491_ = lean_ctor_get(v_x_2445_, 1);
v_body_2492_ = lean_ctor_get(v_x_2445_, 2);
v_binderInfo_2493_ = lean_ctor_get_uint8(v_x_2445_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2491_);
lean_inc_ref(v_f_2444_);
v___x_2494_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_binderType_2491_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v_fst_2496_; lean_object* v_snd_2497_; lean_object* v___x_2498_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
v_fst_2496_ = lean_ctor_get(v_a_2495_, 0);
lean_inc(v_fst_2496_);
v_snd_2497_ = lean_ctor_get(v_a_2495_, 1);
lean_inc(v_snd_2497_);
lean_dec(v_a_2495_);
lean_inc_ref(v_body_2492_);
v___x_2498_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_body_2492_, v_snd_2497_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2527_; 
v_a_2499_ = lean_ctor_get(v___x_2498_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2501_ = v___x_2498_;
v_isShared_2502_ = v_isSharedCheck_2527_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2498_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2527_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v_fst_2503_; lean_object* v_snd_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2526_; 
v_fst_2503_ = lean_ctor_get(v_a_2499_, 0);
v_snd_2504_ = lean_ctor_get(v_a_2499_, 1);
v_isSharedCheck_2526_ = !lean_is_exclusive(v_a_2499_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2506_ = v_a_2499_;
v_isShared_2507_ = v_isSharedCheck_2526_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_snd_2504_);
lean_inc(v_fst_2503_);
lean_dec(v_a_2499_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2526_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v___y_2509_; size_t v___x_2516_; size_t v___x_2517_; uint8_t v___x_2518_; 
v___x_2516_ = lean_ptr_addr(v_binderType_2491_);
v___x_2517_ = lean_ptr_addr(v_fst_2496_);
v___x_2518_ = lean_usize_dec_eq(v___x_2516_, v___x_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; 
lean_inc(v_binderName_2490_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2519_ = l_Lean_Expr_lam___override(v_binderName_2490_, v_fst_2496_, v_fst_2503_, v_binderInfo_2493_);
v___y_2509_ = v___x_2519_;
goto v___jp_2508_;
}
else
{
size_t v___x_2520_; size_t v___x_2521_; uint8_t v___x_2522_; 
v___x_2520_ = lean_ptr_addr(v_body_2492_);
v___x_2521_ = lean_ptr_addr(v_fst_2503_);
v___x_2522_ = lean_usize_dec_eq(v___x_2520_, v___x_2521_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; 
lean_inc(v_binderName_2490_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2523_ = l_Lean_Expr_lam___override(v_binderName_2490_, v_fst_2496_, v_fst_2503_, v_binderInfo_2493_);
v___y_2509_ = v___x_2523_;
goto v___jp_2508_;
}
else
{
uint8_t v___x_2524_; 
v___x_2524_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2493_, v_binderInfo_2493_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2525_; 
lean_inc(v_binderName_2490_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2525_ = l_Lean_Expr_lam___override(v_binderName_2490_, v_fst_2496_, v_fst_2503_, v_binderInfo_2493_);
v___y_2509_ = v___x_2525_;
goto v___jp_2508_;
}
else
{
lean_dec(v_fst_2503_);
lean_dec(v_fst_2496_);
v___y_2509_ = v_x_2445_;
goto v___jp_2508_;
}
}
}
v___jp_2508_:
{
lean_object* v___x_2511_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___y_2509_);
v___x_2511_ = v___x_2506_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v___y_2509_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v_snd_2504_);
v___x_2511_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
lean_object* v___x_2513_; 
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 0, v___x_2511_);
v___x_2513_ = v___x_2501_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2496_);
lean_dec_ref_known(v_x_2445_, 3);
return v___x_2498_;
}
}
else
{
lean_dec_ref_known(v_x_2445_, 3);
lean_dec_ref(v_f_2444_);
return v___x_2494_;
}
}
case 10:
{
lean_object* v_data_2528_; lean_object* v_expr_2529_; lean_object* v___x_2530_; 
v_data_2528_ = lean_ctor_get(v_x_2445_, 0);
v_expr_2529_ = lean_ctor_get(v_x_2445_, 1);
lean_inc_ref(v_expr_2529_);
v___x_2530_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_expr_2529_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2553_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2533_ = v___x_2530_;
v_isShared_2534_ = v_isSharedCheck_2553_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2530_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2553_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_fst_2535_; lean_object* v_snd_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2552_; 
v_fst_2535_ = lean_ctor_get(v_a_2531_, 0);
v_snd_2536_ = lean_ctor_get(v_a_2531_, 1);
v_isSharedCheck_2552_ = !lean_is_exclusive(v_a_2531_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2538_ = v_a_2531_;
v_isShared_2539_ = v_isSharedCheck_2552_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_snd_2536_);
lean_inc(v_fst_2535_);
lean_dec(v_a_2531_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2552_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___y_2541_; size_t v___x_2548_; size_t v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = lean_ptr_addr(v_expr_2529_);
v___x_2549_ = lean_ptr_addr(v_fst_2535_);
v___x_2550_ = lean_usize_dec_eq(v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
lean_inc(v_data_2528_);
lean_dec_ref_known(v_x_2445_, 2);
v___x_2551_ = l_Lean_Expr_mdata___override(v_data_2528_, v_fst_2535_);
v___y_2541_ = v___x_2551_;
goto v___jp_2540_;
}
else
{
lean_dec(v_fst_2535_);
v___y_2541_ = v_x_2445_;
goto v___jp_2540_;
}
v___jp_2540_:
{
lean_object* v___x_2543_; 
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___y_2541_);
v___x_2543_ = v___x_2538_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___y_2541_);
lean_ctor_set(v_reuseFailAlloc_2547_, 1, v_snd_2536_);
v___x_2543_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
lean_object* v___x_2545_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2543_);
v___x_2545_ = v___x_2533_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2543_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_x_2445_, 2);
return v___x_2530_;
}
}
case 8:
{
lean_object* v_declName_2554_; lean_object* v_type_2555_; lean_object* v_value_2556_; lean_object* v_body_2557_; uint8_t v_nondep_2558_; lean_object* v___x_2559_; 
v_declName_2554_ = lean_ctor_get(v_x_2445_, 0);
v_type_2555_ = lean_ctor_get(v_x_2445_, 1);
v_value_2556_ = lean_ctor_get(v_x_2445_, 2);
v_body_2557_ = lean_ctor_get(v_x_2445_, 3);
v_nondep_2558_ = lean_ctor_get_uint8(v_x_2445_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2555_);
lean_inc_ref(v_f_2444_);
v___x_2559_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_type_2555_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v_fst_2561_; lean_object* v_snd_2562_; lean_object* v___x_2563_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v_fst_2561_ = lean_ctor_get(v_a_2560_, 0);
lean_inc(v_fst_2561_);
v_snd_2562_ = lean_ctor_get(v_a_2560_, 1);
lean_inc(v_snd_2562_);
lean_dec(v_a_2560_);
lean_inc_ref(v_value_2556_);
lean_inc_ref(v_f_2444_);
v___x_2563_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_value_2556_, v_snd_2562_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v_fst_2565_; lean_object* v_snd_2566_; lean_object* v___x_2567_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v_fst_2565_ = lean_ctor_get(v_a_2564_, 0);
lean_inc(v_fst_2565_);
v_snd_2566_ = lean_ctor_get(v_a_2564_, 1);
lean_inc(v_snd_2566_);
lean_dec(v_a_2564_);
lean_inc_ref(v_body_2557_);
v___x_2567_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_body_2557_, v_snd_2566_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2598_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2570_ = v___x_2567_;
v_isShared_2571_ = v_isSharedCheck_2598_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2567_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2598_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v_fst_2572_; lean_object* v_snd_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2597_; 
v_fst_2572_ = lean_ctor_get(v_a_2568_, 0);
v_snd_2573_ = lean_ctor_get(v_a_2568_, 1);
v_isSharedCheck_2597_ = !lean_is_exclusive(v_a_2568_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2575_ = v_a_2568_;
v_isShared_2576_ = v_isSharedCheck_2597_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_snd_2573_);
lean_inc(v_fst_2572_);
lean_dec(v_a_2568_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2597_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___y_2578_; size_t v___x_2585_; size_t v___x_2586_; uint8_t v___x_2587_; 
v___x_2585_ = lean_ptr_addr(v_type_2555_);
v___x_2586_ = lean_ptr_addr(v_fst_2561_);
v___x_2587_ = lean_usize_dec_eq(v___x_2585_, v___x_2586_);
if (v___x_2587_ == 0)
{
lean_object* v___x_2588_; 
lean_inc(v_declName_2554_);
lean_dec_ref_known(v_x_2445_, 4);
v___x_2588_ = l_Lean_Expr_letE___override(v_declName_2554_, v_fst_2561_, v_fst_2565_, v_fst_2572_, v_nondep_2558_);
v___y_2578_ = v___x_2588_;
goto v___jp_2577_;
}
else
{
size_t v___x_2589_; size_t v___x_2590_; uint8_t v___x_2591_; 
v___x_2589_ = lean_ptr_addr(v_value_2556_);
v___x_2590_ = lean_ptr_addr(v_fst_2565_);
v___x_2591_ = lean_usize_dec_eq(v___x_2589_, v___x_2590_);
if (v___x_2591_ == 0)
{
lean_object* v___x_2592_; 
lean_inc(v_declName_2554_);
lean_dec_ref_known(v_x_2445_, 4);
v___x_2592_ = l_Lean_Expr_letE___override(v_declName_2554_, v_fst_2561_, v_fst_2565_, v_fst_2572_, v_nondep_2558_);
v___y_2578_ = v___x_2592_;
goto v___jp_2577_;
}
else
{
size_t v___x_2593_; size_t v___x_2594_; uint8_t v___x_2595_; 
v___x_2593_ = lean_ptr_addr(v_body_2557_);
v___x_2594_ = lean_ptr_addr(v_fst_2572_);
v___x_2595_ = lean_usize_dec_eq(v___x_2593_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; 
lean_inc(v_declName_2554_);
lean_dec_ref_known(v_x_2445_, 4);
v___x_2596_ = l_Lean_Expr_letE___override(v_declName_2554_, v_fst_2561_, v_fst_2565_, v_fst_2572_, v_nondep_2558_);
v___y_2578_ = v___x_2596_;
goto v___jp_2577_;
}
else
{
lean_dec(v_fst_2572_);
lean_dec(v_fst_2565_);
lean_dec(v_fst_2561_);
v___y_2578_ = v_x_2445_;
goto v___jp_2577_;
}
}
}
v___jp_2577_:
{
lean_object* v___x_2580_; 
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 0, v___y_2578_);
v___x_2580_ = v___x_2575_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___y_2578_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_snd_2573_);
v___x_2580_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
lean_object* v___x_2582_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2580_);
v___x_2582_ = v___x_2570_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
}
}
else
{
lean_dec(v_fst_2565_);
lean_dec(v_fst_2561_);
lean_dec_ref_known(v_x_2445_, 4);
return v___x_2567_;
}
}
else
{
lean_dec(v_fst_2561_);
lean_dec_ref_known(v_x_2445_, 4);
lean_dec_ref(v_f_2444_);
return v___x_2563_;
}
}
else
{
lean_dec_ref_known(v_x_2445_, 4);
lean_dec_ref(v_f_2444_);
return v___x_2559_;
}
}
case 5:
{
lean_object* v_fn_2599_; lean_object* v_arg_2600_; lean_object* v___x_2601_; 
v_fn_2599_ = lean_ctor_get(v_x_2445_, 0);
v_arg_2600_ = lean_ctor_get(v_x_2445_, 1);
lean_inc_ref(v_fn_2599_);
lean_inc_ref(v_f_2444_);
v___x_2601_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_fn_2599_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v_fst_2603_; lean_object* v_snd_2604_; lean_object* v___x_2605_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
v_fst_2603_ = lean_ctor_get(v_a_2602_, 0);
lean_inc(v_fst_2603_);
v_snd_2604_ = lean_ctor_get(v_a_2602_, 1);
lean_inc(v_snd_2604_);
lean_dec(v_a_2602_);
lean_inc_ref(v_arg_2600_);
v___x_2605_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_arg_2600_, v_snd_2604_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2632_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2632_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2632_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_fst_2610_; lean_object* v_snd_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2631_; 
v_fst_2610_ = lean_ctor_get(v_a_2606_, 0);
v_snd_2611_ = lean_ctor_get(v_a_2606_, 1);
v_isSharedCheck_2631_ = !lean_is_exclusive(v_a_2606_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2613_ = v_a_2606_;
v_isShared_2614_ = v_isSharedCheck_2631_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_snd_2611_);
lean_inc(v_fst_2610_);
lean_dec(v_a_2606_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2631_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___y_2616_; size_t v___x_2623_; size_t v___x_2624_; uint8_t v___x_2625_; 
v___x_2623_ = lean_ptr_addr(v_fn_2599_);
v___x_2624_ = lean_ptr_addr(v_fst_2603_);
v___x_2625_ = lean_usize_dec_eq(v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
lean_object* v___x_2626_; 
lean_dec_ref_known(v_x_2445_, 2);
v___x_2626_ = l_Lean_Expr_app___override(v_fst_2603_, v_fst_2610_);
v___y_2616_ = v___x_2626_;
goto v___jp_2615_;
}
else
{
size_t v___x_2627_; size_t v___x_2628_; uint8_t v___x_2629_; 
v___x_2627_ = lean_ptr_addr(v_arg_2600_);
v___x_2628_ = lean_ptr_addr(v_fst_2610_);
v___x_2629_ = lean_usize_dec_eq(v___x_2627_, v___x_2628_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; 
lean_dec_ref_known(v_x_2445_, 2);
v___x_2630_ = l_Lean_Expr_app___override(v_fst_2603_, v_fst_2610_);
v___y_2616_ = v___x_2630_;
goto v___jp_2615_;
}
else
{
lean_dec(v_fst_2610_);
lean_dec(v_fst_2603_);
v___y_2616_ = v_x_2445_;
goto v___jp_2615_;
}
}
v___jp_2615_:
{
lean_object* v___x_2618_; 
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 0, v___y_2616_);
v___x_2618_ = v___x_2613_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___y_2616_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_snd_2611_);
v___x_2618_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2620_; 
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 0, v___x_2618_);
v___x_2620_ = v___x_2608_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2618_);
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
}
}
else
{
lean_dec(v_fst_2603_);
lean_dec_ref_known(v_x_2445_, 2);
return v___x_2605_;
}
}
else
{
lean_dec_ref_known(v_x_2445_, 2);
lean_dec_ref(v_f_2444_);
return v___x_2601_;
}
}
case 11:
{
lean_object* v_typeName_2633_; lean_object* v_idx_2634_; lean_object* v_struct_2635_; lean_object* v___x_2636_; 
v_typeName_2633_ = lean_ctor_get(v_x_2445_, 0);
v_idx_2634_ = lean_ctor_get(v_x_2445_, 1);
v_struct_2635_ = lean_ctor_get(v_x_2445_, 2);
lean_inc_ref(v_struct_2635_);
v___x_2636_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___lam__0(v_f_2444_, v_struct_2635_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2659_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2659_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2659_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_fst_2641_; lean_object* v_snd_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2658_; 
v_fst_2641_ = lean_ctor_get(v_a_2637_, 0);
v_snd_2642_ = lean_ctor_get(v_a_2637_, 1);
v_isSharedCheck_2658_ = !lean_is_exclusive(v_a_2637_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2644_ = v_a_2637_;
v_isShared_2645_ = v_isSharedCheck_2658_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_snd_2642_);
lean_inc(v_fst_2641_);
lean_dec(v_a_2637_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2658_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___y_2647_; size_t v___x_2654_; size_t v___x_2655_; uint8_t v___x_2656_; 
v___x_2654_ = lean_ptr_addr(v_struct_2635_);
v___x_2655_ = lean_ptr_addr(v_fst_2641_);
v___x_2656_ = lean_usize_dec_eq(v___x_2654_, v___x_2655_);
if (v___x_2656_ == 0)
{
lean_object* v___x_2657_; 
lean_inc(v_idx_2634_);
lean_inc(v_typeName_2633_);
lean_dec_ref_known(v_x_2445_, 3);
v___x_2657_ = l_Lean_Expr_proj___override(v_typeName_2633_, v_idx_2634_, v_fst_2641_);
v___y_2647_ = v___x_2657_;
goto v___jp_2646_;
}
else
{
lean_dec(v_fst_2641_);
v___y_2647_ = v_x_2445_;
goto v___jp_2646_;
}
v___jp_2646_:
{
lean_object* v___x_2649_; 
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v___y_2647_);
v___x_2649_ = v___x_2644_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___y_2647_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_snd_2642_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2651_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2649_);
v___x_2651_ = v___x_2639_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_x_2445_, 3);
return v___x_2636_;
}
}
default: 
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
lean_dec_ref(v_f_2444_);
v___x_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2660_, 0, v_x_2445_);
lean_ctor_set(v___x_2660_, 1, v___y_2446_);
v___x_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
return v___x_2661_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg___boxed(lean_object* v_f_2662_, lean_object* v_x_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2662_, v_x_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(lean_object* v_f_2671_, lean_object* v_init_2672_, lean_object* v_e_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2671_, v_e_2673_, v_init_2672_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2688_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2688_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2688_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v_snd_2684_; lean_object* v___x_2686_; 
v_snd_2684_ = lean_ctor_get(v_a_2680_, 1);
lean_inc(v_snd_2684_);
lean_dec(v_a_2680_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v_snd_2684_);
v___x_2686_ = v___x_2682_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_snd_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
v_a_2689_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2679_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2679_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
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
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg___boxed(lean_object* v_f_2697_, lean_object* v_init_2698_, lean_object* v_e_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v_f_2697_, v_init_2698_, v_e_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(lean_object* v_op_2708_, lean_object* v_as_2709_, size_t v_i_2710_, size_t v_stop_2711_, lean_object* v_b_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v_a_2719_; uint8_t v___x_2723_; 
v___x_2723_ = lean_usize_dec_eq(v_i_2710_, v_stop_2711_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = lean_array_uget_borrowed(v_as_2709_, v_i_2710_);
lean_inc(v___y_2716_);
lean_inc_ref(v___y_2715_);
lean_inc(v___y_2714_);
lean_inc_ref(v___y_2713_);
lean_inc(v___x_2724_);
v___x_2725_ = lean_infer_type(v___x_2724_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2727_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc(v_a_2726_);
lean_dec_ref_known(v___x_2725_, 1);
lean_inc_ref(v_op_2708_);
v___x_2727_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2708_, v_a_2726_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2729_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2729_ = l_Array_append___redArg(v_b_2712_, v_a_2728_);
lean_dec(v_a_2728_);
v_a_2719_ = v___x_2729_;
goto v___jp_2718_;
}
else
{
lean_dec_ref(v_b_2712_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2730_; 
v_a_2730_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2727_, 1);
v_a_2719_ = v_a_2730_;
goto v___jp_2718_;
}
else
{
lean_dec_ref(v_op_2708_);
return v___x_2727_;
}
}
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec_ref(v_b_2712_);
lean_dec_ref(v_op_2708_);
v_a_2731_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2725_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2725_);
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
lean_object* v___x_2739_; 
lean_dec_ref(v_op_2708_);
v___x_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2739_, 0, v_b_2712_);
return v___x_2739_;
}
v___jp_2718_:
{
size_t v___x_2720_; size_t v___x_2721_; 
v___x_2720_ = ((size_t)1ULL);
v___x_2721_ = lean_usize_add(v_i_2710_, v___x_2720_);
v_i_2710_ = v___x_2721_;
v_b_2712_ = v_a_2719_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(lean_object* v_op_2740_, lean_object* v_args_2741_, lean_object* v_body_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v___x_2748_; 
lean_inc_ref(v_op_2740_);
v___x_2748_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2740_, v_body_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
if (lean_obj_tag(v___x_2748_) == 0)
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2770_; 
v_a_2749_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2751_ = v___x_2748_;
v_isShared_2752_ = v_isSharedCheck_2770_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2748_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2770_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; 
v___x_2753_ = l_Array_reverse___redArg(v_a_2749_);
v___x_2754_ = lean_unsigned_to_nat(0u);
v___x_2755_ = lean_array_get_size(v_args_2741_);
v___x_2756_ = lean_nat_dec_lt(v___x_2754_, v___x_2755_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2758_; 
lean_dec_ref(v_op_2740_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 0, v___x_2753_);
v___x_2758_ = v___x_2751_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
else
{
uint8_t v___x_2760_; 
v___x_2760_ = lean_nat_dec_le(v___x_2755_, v___x_2755_);
if (v___x_2760_ == 0)
{
if (v___x_2756_ == 0)
{
lean_object* v___x_2762_; 
lean_dec_ref(v_op_2740_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 0, v___x_2753_);
v___x_2762_ = v___x_2751_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v___x_2753_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
else
{
size_t v___x_2764_; size_t v___x_2765_; lean_object* v___x_2766_; 
lean_del_object(v___x_2751_);
v___x_2764_ = ((size_t)0ULL);
v___x_2765_ = lean_usize_of_nat(v___x_2755_);
v___x_2766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2740_, v_args_2741_, v___x_2764_, v___x_2765_, v___x_2753_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
return v___x_2766_;
}
}
else
{
size_t v___x_2767_; size_t v___x_2768_; lean_object* v___x_2769_; 
lean_del_object(v___x_2751_);
v___x_2767_ = ((size_t)0ULL);
v___x_2768_ = lean_usize_of_nat(v___x_2755_);
v___x_2769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2740_, v_args_2741_, v___x_2767_, v___x_2768_, v___x_2753_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
return v___x_2769_;
}
}
}
}
else
{
lean_dec_ref(v_op_2740_);
return v___x_2748_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed(lean_object* v_op_2771_, lean_object* v_args_2772_, lean_object* v_body_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0(v_op_2771_, v_args_2772_, v_body_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec_ref(v_args_2772_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed(lean_object* v_op_2780_, lean_object* v_a_2781_, lean_object* v_f_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(v_op_2780_, v_a_2781_, v_f_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(lean_object* v_op_2789_, lean_object* v_e_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_){
_start:
{
switch(lean_obj_tag(v_e_2790_))
{
case 0:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
lean_dec_ref_known(v_e_2790_, 1);
lean_dec_ref(v_op_2789_);
v___x_2796_ = ((lean_object*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___closed__0));
v___x_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2796_);
return v___x_2797_;
}
case 7:
{
lean_object* v___f_2798_; uint8_t v___x_2799_; lean_object* v___x_2800_; 
v___f_2798_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2798_, 0, v_op_2789_);
v___x_2799_ = 0;
v___x_2800_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__1___redArg(v_e_2790_, v___f_2798_, v___x_2799_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_);
return v___x_2800_;
}
case 6:
{
lean_object* v___f_2801_; uint8_t v___x_2802_; uint8_t v___x_2803_; lean_object* v___x_2804_; 
v___f_2801_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2801_, 0, v_op_2789_);
v___x_2802_ = 0;
v___x_2803_ = 1;
v___x_2804_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2790_, v___f_2801_, v___x_2802_, v___x_2803_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_);
return v___x_2804_;
}
case 8:
{
lean_object* v___f_2805_; uint8_t v___x_2806_; uint8_t v___x_2807_; lean_object* v___x_2808_; 
v___f_2805_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2805_, 0, v_op_2789_);
v___x_2806_ = 0;
v___x_2807_ = 1;
v___x_2808_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__2___redArg(v_e_2790_, v___f_2805_, v___x_2806_, v___x_2807_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_);
return v___x_2808_;
}
default: 
{
lean_object* v___f_2809_; lean_object* v___x_2810_; 
lean_inc_ref(v_op_2789_);
v___f_2809_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3___boxed), 8, 1);
lean_closure_set(v___f_2809_, 0, v_op_2789_);
lean_inc(v_a_2794_);
lean_inc_ref(v_a_2793_);
lean_inc(v_a_2792_);
lean_inc_ref(v_a_2791_);
lean_inc_ref(v_e_2790_);
v___x_2810_ = lean_apply_6(v_op_2789_, v_e_2790_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_, lean_box(0));
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = l_Array_reverse___redArg(v_a_2811_);
v___x_2813_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v___f_2809_, v___x_2812_, v_e_2790_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_);
return v___x_2813_;
}
else
{
lean_dec_ref(v___f_2809_);
lean_dec_ref(v_e_2790_);
return v___x_2810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___lam__3(lean_object* v_op_2814_, lean_object* v_a_2815_, lean_object* v_f_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2814_, v_f_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2822_) == 0)
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2831_; 
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2825_ = v___x_2822_;
v_isShared_2826_ = v_isSharedCheck_2831_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2822_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2831_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2827_ = l_Array_append___redArg(v_a_2815_, v_a_2823_);
lean_dec(v_a_2823_);
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v___x_2827_);
v___x_2829_ = v___x_2825_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
else
{
lean_dec_ref(v_a_2815_);
return v___x_2822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg___boxed(lean_object* v_op_2832_, lean_object* v_as_2833_, lean_object* v_i_2834_, lean_object* v_stop_2835_, lean_object* v_b_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_){
_start:
{
size_t v_i_boxed_2842_; size_t v_stop_boxed_2843_; lean_object* v_res_2844_; 
v_i_boxed_2842_ = lean_unbox_usize(v_i_2834_);
lean_dec(v_i_2834_);
v_stop_boxed_2843_ = lean_unbox_usize(v_stop_2835_);
lean_dec(v_stop_2835_);
v_res_2844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2832_, v_as_2833_, v_i_boxed_2842_, v_stop_boxed_2843_, v_b_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec_ref(v_as_2833_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg___boxed(lean_object* v_op_2845_, lean_object* v_e_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2845_, v_e_2846_, v_a_2847_, v_a_2848_, v_a_2849_, v_a_2850_);
lean_dec(v_a_2850_);
lean_dec_ref(v_a_2849_);
lean_dec(v_a_2848_);
lean_dec_ref(v_a_2847_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches(lean_object* v_00_u03b1_2853_, lean_object* v_op_2854_, lean_object* v_e_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v_op_2854_, v_e_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_getSubexpressionMatches___boxed(lean_object* v_00_u03b1_2862_, lean_object* v_op_2863_, lean_object* v_e_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_Meta_Rewrites_getSubexpressionMatches(v_00_u03b1_2862_, v_op_2863_, v_e_2864_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_);
lean_dec(v_a_2868_);
lean_dec_ref(v_a_2867_);
lean_dec(v_a_2866_);
lean_dec_ref(v_a_2865_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(lean_object* v_00_u03b1_2871_, lean_object* v_op_2872_, lean_object* v_as_2873_, size_t v_i_2874_, size_t v_stop_2875_, lean_object* v_b_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___redArg(v_op_2872_, v_as_2873_, v_i_2874_, v_stop_2875_, v_b_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0___boxed(lean_object* v_00_u03b1_2883_, lean_object* v_op_2884_, lean_object* v_as_2885_, lean_object* v_i_2886_, lean_object* v_stop_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
size_t v_i_boxed_2894_; size_t v_stop_boxed_2895_; lean_object* v_res_2896_; 
v_i_boxed_2894_ = lean_unbox_usize(v_i_2886_);
lean_dec(v_i_2886_);
v_stop_boxed_2895_ = lean_unbox_usize(v_stop_2887_);
lean_dec(v_stop_2887_);
v_res_2896_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__0(v_00_u03b1_2883_, v_op_2884_, v_as_2885_, v_i_boxed_2894_, v_stop_boxed_2895_, v_b_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec_ref(v_as_2885_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(lean_object* v_00_u03b1_2897_, lean_object* v_f_2898_, lean_object* v_x_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___redArg(v_f_2898_, v_x_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3___boxed(lean_object* v_00_u03b1_2907_, lean_object* v_f_2908_, lean_object* v_x_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lean_Expr_traverseChildren___at___00Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3_spec__3(v_00_u03b1_2907_, v_f_2908_, v_x_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(lean_object* v_00_u03b1_2917_, lean_object* v_f_2918_, lean_object* v_init_2919_, lean_object* v_e_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___redArg(v_f_2918_, v_init_2919_, v_e_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3___boxed(lean_object* v_00_u03b1_2927_, lean_object* v_f_2928_, lean_object* v_init_2929_, lean_object* v_e_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Lean_Expr_foldlM___at___00Lean_Meta_Rewrites_getSubexpressionMatches_spec__3(v_00_u03b1_2927_, v_f_2928_, v_init_2929_, v_e_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(size_t v_sz_2937_, size_t v_i_2938_, lean_object* v_bs_2939_){
_start:
{
uint8_t v___x_2940_; 
v___x_2940_ = lean_usize_dec_lt(v_i_2938_, v_sz_2937_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; 
v___x_2941_ = l_unsafeCast___redArg(v_bs_2939_);
lean_dec_ref(v_bs_2939_);
return v___x_2941_;
}
else
{
lean_object* v_v_2942_; lean_object* v___x_2943_; lean_object* v_fst_2944_; lean_object* v_snd_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2960_; 
v_v_2942_ = lean_array_uget_borrowed(v_bs_2939_, v_i_2938_);
v___x_2943_ = l_unsafeCast___redArg(v_v_2942_);
v_fst_2944_ = lean_ctor_get(v___x_2943_, 0);
v_snd_2945_ = lean_ctor_get(v___x_2943_, 1);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2947_ = v___x_2943_;
v_isShared_2948_ = v_isSharedCheck_2960_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_snd_2945_);
lean_inc(v_fst_2944_);
lean_dec(v___x_2943_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2960_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v_bs_x27_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2949_ = lean_unsigned_to_nat(0u);
v_bs_x27_2950_ = lean_array_uset(v_bs_2939_, v_i_2938_, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2951_, 0, v_fst_2944_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2951_);
v___x_2953_ = v___x_2947_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2951_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v_snd_2945_);
v___x_2953_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
size_t v___x_2954_; size_t v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2954_ = ((size_t)1ULL);
v___x_2955_ = lean_usize_add(v_i_2938_, v___x_2954_);
v___x_2956_ = l_unsafeCast___redArg(v___x_2953_);
lean_dec_ref(v___x_2953_);
v___x_2957_ = lean_array_uset(v_bs_x27_2950_, v_i_2938_, v___x_2956_);
v_i_2938_ = v___x_2955_;
v_bs_2939_ = v___x_2957_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3___boxed(lean_object* v_sz_2961_, lean_object* v_i_2962_, lean_object* v_bs_2963_){
_start:
{
size_t v_sz_boxed_2964_; size_t v_i_boxed_2965_; lean_object* v_res_2966_; 
v_sz_boxed_2964_ = lean_unbox_usize(v_sz_2961_);
lean_dec(v_sz_2961_);
v_i_boxed_2965_ = lean_unbox_usize(v_i_2962_);
lean_dec(v_i_2962_);
v_res_2966_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(v_sz_boxed_2964_, v_i_boxed_2965_, v_bs_2963_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(lean_object* v_xs_2967_, lean_object* v_j_2968_){
_start:
{
lean_object* v_zero_2969_; uint8_t v_isZero_2970_; 
v_zero_2969_ = lean_unsigned_to_nat(0u);
v_isZero_2970_ = lean_nat_dec_eq(v_j_2968_, v_zero_2969_);
if (v_isZero_2970_ == 1)
{
lean_dec(v_j_2968_);
return v_xs_2967_;
}
else
{
lean_object* v___x_2971_; lean_object* v_snd_2972_; lean_object* v_snd_2973_; lean_object* v_one_2974_; lean_object* v_n_2975_; lean_object* v___x_2976_; lean_object* v_snd_2977_; lean_object* v_snd_2978_; uint8_t v___x_2979_; 
v___x_2971_ = lean_array_fget_borrowed(v_xs_2967_, v_j_2968_);
v_snd_2972_ = lean_ctor_get(v___x_2971_, 1);
v_snd_2973_ = lean_ctor_get(v_snd_2972_, 1);
v_one_2974_ = lean_unsigned_to_nat(1u);
v_n_2975_ = lean_nat_sub(v_j_2968_, v_one_2974_);
v___x_2976_ = lean_array_fget_borrowed(v_xs_2967_, v_n_2975_);
v_snd_2977_ = lean_ctor_get(v___x_2976_, 1);
v_snd_2978_ = lean_ctor_get(v_snd_2977_, 1);
v___x_2979_ = lean_nat_dec_lt(v_snd_2978_, v_snd_2973_);
if (v___x_2979_ == 0)
{
lean_dec(v_n_2975_);
lean_dec(v_j_2968_);
return v_xs_2967_;
}
else
{
lean_object* v___x_2980_; 
v___x_2980_ = lean_array_fswap(v_xs_2967_, v_j_2968_, v_n_2975_);
lean_dec(v_j_2968_);
v_xs_2967_ = v___x_2980_;
v_j_2968_ = v_n_2975_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(lean_object* v_xs_2982_, lean_object* v_i_2983_, lean_object* v_fuel_2984_){
_start:
{
lean_object* v_zero_2985_; uint8_t v_isZero_2986_; 
v_zero_2985_ = lean_unsigned_to_nat(0u);
v_isZero_2986_ = lean_nat_dec_eq(v_fuel_2984_, v_zero_2985_);
if (v_isZero_2986_ == 1)
{
lean_dec(v_fuel_2984_);
lean_dec(v_i_2983_);
return v_xs_2982_;
}
else
{
lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = lean_array_get_size(v_xs_2982_);
v___x_2988_ = lean_nat_dec_lt(v_i_2983_, v___x_2987_);
if (v___x_2988_ == 0)
{
lean_dec(v_fuel_2984_);
lean_dec(v_i_2983_);
return v_xs_2982_;
}
else
{
lean_object* v_one_2989_; lean_object* v_n_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v_one_2989_ = lean_unsigned_to_nat(1u);
v_n_2990_ = lean_nat_sub(v_fuel_2984_, v_one_2989_);
lean_dec(v_fuel_2984_);
lean_inc(v_i_2983_);
v___x_2991_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(v_xs_2982_, v_i_2983_);
v___x_2992_ = lean_nat_add(v_i_2983_, v_one_2989_);
lean_dec(v_i_2983_);
v_xs_2982_ = v___x_2991_;
v_i_2983_ = v___x_2992_;
v_fuel_2984_ = v_n_2990_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(size_t v_sz_2994_, size_t v_i_2995_, lean_object* v_bs_2996_){
_start:
{
uint8_t v___x_2997_; 
v___x_2997_ = lean_usize_dec_lt(v_i_2995_, v_sz_2994_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2998_; 
v___x_2998_ = l_unsafeCast___redArg(v_bs_2996_);
lean_dec_ref(v_bs_2996_);
return v___x_2998_;
}
else
{
lean_object* v_v_2999_; lean_object* v___x_3000_; lean_object* v_fst_3001_; lean_object* v_snd_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3017_; 
v_v_2999_ = lean_array_uget_borrowed(v_bs_2996_, v_i_2995_);
v___x_3000_ = l_unsafeCast___redArg(v_v_2999_);
v_fst_3001_ = lean_ctor_get(v___x_3000_, 0);
v_snd_3002_ = lean_ctor_get(v___x_3000_, 1);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3004_ = v___x_3000_;
v_isShared_3005_ = v_isSharedCheck_3017_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_snd_3002_);
lean_inc(v_fst_3001_);
lean_dec(v___x_3000_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3017_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3006_; lean_object* v_bs_x27_3007_; lean_object* v___x_3008_; lean_object* v___x_3010_; 
v___x_3006_ = lean_unsigned_to_nat(0u);
v_bs_x27_3007_ = lean_array_uset(v_bs_2996_, v_i_2995_, v___x_3006_);
v___x_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3008_, 0, v_fst_3001_);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v___x_3008_);
v___x_3010_ = v___x_3004_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3008_);
lean_ctor_set(v_reuseFailAlloc_3016_, 1, v_snd_3002_);
v___x_3010_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
size_t v___x_3011_; size_t v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3011_ = ((size_t)1ULL);
v___x_3012_ = lean_usize_add(v_i_2995_, v___x_3011_);
v___x_3013_ = l_unsafeCast___redArg(v___x_3010_);
lean_dec_ref(v___x_3010_);
v___x_3014_ = lean_array_uset(v_bs_x27_3007_, v_i_2995_, v___x_3013_);
v_i_2995_ = v___x_3012_;
v_bs_2996_ = v___x_3014_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2___boxed(lean_object* v_sz_3018_, lean_object* v_i_3019_, lean_object* v_bs_3020_){
_start:
{
size_t v_sz_boxed_3021_; size_t v_i_boxed_3022_; lean_object* v_res_3023_; 
v_sz_boxed_3021_ = lean_unbox_usize(v_sz_3018_);
lean_dec(v_sz_3018_);
v_i_boxed_3022_ = lean_unbox_usize(v_i_3019_);
lean_dec(v_i_3019_);
v_res_3023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(v_sz_boxed_3021_, v_i_boxed_3022_, v_bs_3020_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(lean_object* v_forbidden_3024_, lean_object* v_as_3025_, size_t v_sz_3026_, size_t v_i_3027_, lean_object* v_b_3028_){
_start:
{
lean_object* v_a_3031_; uint8_t v___x_3035_; 
v___x_3035_ = lean_usize_dec_lt(v_i_3027_, v_sz_3026_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v_b_3028_);
return v___x_3036_;
}
else
{
lean_object* v_a_3037_; lean_object* v_snd_3038_; lean_object* v_snd_3039_; lean_object* v_fst_3040_; lean_object* v_fst_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3099_; 
v_a_3037_ = lean_array_uget(v_as_3025_, v_i_3027_);
v_snd_3038_ = lean_ctor_get(v_a_3037_, 1);
lean_inc(v_snd_3038_);
v_snd_3039_ = lean_ctor_get(v_b_3028_, 1);
lean_inc(v_snd_3039_);
v_fst_3040_ = lean_ctor_get(v_a_3037_, 0);
v_fst_3041_ = lean_ctor_get(v_snd_3038_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_snd_3038_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v_snd_3038_, 1);
lean_dec(v_unused_3100_);
v___x_3043_ = v_snd_3038_;
v_isShared_3044_ = v_isSharedCheck_3099_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_fst_3041_);
lean_dec(v_snd_3038_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3099_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v_fst_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3097_; 
v_fst_3045_ = lean_ctor_get(v_b_3028_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_b_3028_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v_b_3028_, 1);
lean_dec(v_unused_3098_);
v___x_3047_ = v_b_3028_;
v_isShared_3048_ = v_isSharedCheck_3097_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_fst_3045_);
lean_dec(v_b_3028_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3097_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v_fst_3049_; lean_object* v_snd_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3096_; 
v_fst_3049_ = lean_ctor_get(v_snd_3039_, 0);
v_snd_3050_ = lean_ctor_get(v_snd_3039_, 1);
v_isSharedCheck_3096_ = !lean_is_exclusive(v_snd_3039_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3052_ = v_snd_3039_;
v_isShared_3053_ = v_isSharedCheck_3096_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_snd_3050_);
lean_inc(v_fst_3049_);
lean_dec(v_snd_3039_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3096_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
uint8_t v___x_3068_; 
v___x_3068_ = l_Lean_NameSet_contains(v_forbidden_3024_, v_fst_3040_);
if (v___x_3068_ == 0)
{
uint8_t v___x_3069_; 
v___x_3069_ = lean_unbox(v_fst_3041_);
lean_dec(v_fst_3041_);
if (v___x_3069_ == 0)
{
uint8_t v___x_3070_; 
lean_inc(v_fst_3040_);
lean_del_object(v___x_3052_);
lean_del_object(v___x_3047_);
v___x_3070_ = l_Lean_NameSet_contains(v_fst_3045_, v_fst_3040_);
if (v___x_3070_ == 0)
{
if (v___x_3035_ == 0)
{
lean_dec(v_fst_3040_);
lean_dec(v_a_3037_);
goto v___jp_3063_;
}
else
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
lean_del_object(v___x_3043_);
v___x_3071_ = lean_array_push(v_snd_3050_, v_a_3037_);
v___x_3072_ = l_Lean_NameSet_insert(v_fst_3045_, v_fst_3040_);
v___x_3073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3073_, 0, v_fst_3049_);
lean_ctor_set(v___x_3073_, 1, v___x_3071_);
v___x_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3072_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v_a_3031_ = v___x_3074_;
goto v___jp_3030_;
}
}
else
{
lean_dec(v_fst_3040_);
lean_dec(v_a_3037_);
goto v___jp_3063_;
}
}
else
{
uint8_t v___x_3075_; 
lean_del_object(v___x_3043_);
v___x_3075_ = l_Lean_NameSet_contains(v_fst_3049_, v_fst_3040_);
if (v___x_3075_ == 0)
{
lean_inc(v_fst_3040_);
goto v___jp_3054_;
}
else
{
if (v___x_3068_ == 0)
{
lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3083_; 
lean_del_object(v___x_3052_);
lean_del_object(v___x_3047_);
v_isSharedCheck_3083_ = !lean_is_exclusive(v_a_3037_);
if (v_isSharedCheck_3083_ == 0)
{
lean_object* v_unused_3084_; lean_object* v_unused_3085_; 
v_unused_3084_ = lean_ctor_get(v_a_3037_, 1);
lean_dec(v_unused_3084_);
v_unused_3085_ = lean_ctor_get(v_a_3037_, 0);
lean_dec(v_unused_3085_);
v___x_3077_ = v_a_3037_;
v_isShared_3078_ = v_isSharedCheck_3083_;
goto v_resetjp_3076_;
}
else
{
lean_dec(v_a_3037_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3083_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
lean_ctor_set(v___x_3077_, 1, v_snd_3050_);
lean_ctor_set(v___x_3077_, 0, v_fst_3049_);
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_fst_3049_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v_snd_3050_);
v___x_3080_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; 
v___x_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3081_, 0, v_fst_3045_);
lean_ctor_set(v___x_3081_, 1, v___x_3080_);
v_a_3031_ = v___x_3081_;
goto v___jp_3030_;
}
}
}
else
{
lean_inc(v_fst_3040_);
goto v___jp_3054_;
}
}
}
}
else
{
lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3093_; 
lean_del_object(v___x_3052_);
lean_del_object(v___x_3047_);
lean_del_object(v___x_3043_);
lean_dec(v_fst_3041_);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_a_3037_);
if (v_isSharedCheck_3093_ == 0)
{
lean_object* v_unused_3094_; lean_object* v_unused_3095_; 
v_unused_3094_ = lean_ctor_get(v_a_3037_, 1);
lean_dec(v_unused_3094_);
v_unused_3095_ = lean_ctor_get(v_a_3037_, 0);
lean_dec(v_unused_3095_);
v___x_3087_ = v_a_3037_;
v_isShared_3088_ = v_isSharedCheck_3093_;
goto v_resetjp_3086_;
}
else
{
lean_dec(v_a_3037_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3093_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 1, v_snd_3050_);
lean_ctor_set(v___x_3087_, 0, v_fst_3049_);
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_fst_3049_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_snd_3050_);
v___x_3090_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
lean_object* v___x_3091_; 
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v_fst_3045_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v_a_3031_ = v___x_3091_;
goto v___jp_3030_;
}
}
}
v___jp_3054_:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3055_ = lean_array_push(v_snd_3050_, v_a_3037_);
v___x_3056_ = l_Lean_NameSet_insert(v_fst_3049_, v_fst_3040_);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 1, v___x_3055_);
lean_ctor_set(v___x_3052_, 0, v___x_3056_);
v___x_3058_ = v___x_3052_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3056_);
lean_ctor_set(v_reuseFailAlloc_3062_, 1, v___x_3055_);
v___x_3058_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 1, v___x_3058_);
v___x_3060_ = v___x_3047_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_fst_3045_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
v_a_3031_ = v___x_3060_;
goto v___jp_3030_;
}
}
}
v___jp_3063_:
{
lean_object* v___x_3065_; 
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v_snd_3050_);
lean_ctor_set(v___x_3043_, 0, v_fst_3049_);
v___x_3065_ = v___x_3043_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_fst_3049_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v_snd_3050_);
v___x_3065_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
lean_object* v___x_3066_; 
v___x_3066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3066_, 0, v_fst_3045_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v_a_3031_ = v___x_3066_;
goto v___jp_3030_;
}
}
}
}
}
}
v___jp_3030_:
{
size_t v___x_3032_; size_t v___x_3033_; 
v___x_3032_ = ((size_t)1ULL);
v___x_3033_ = lean_usize_add(v_i_3027_, v___x_3032_);
v_i_3027_ = v___x_3033_;
v_b_3028_ = v_a_3031_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg___boxed(lean_object* v_forbidden_3101_, lean_object* v_as_3102_, lean_object* v_sz_3103_, lean_object* v_i_3104_, lean_object* v_b_3105_, lean_object* v___y_3106_){
_start:
{
size_t v_sz_boxed_3107_; size_t v_i_boxed_3108_; lean_object* v_res_3109_; 
v_sz_boxed_3107_ = lean_unbox_usize(v_sz_3103_);
lean_dec(v_sz_3103_);
v_i_boxed_3108_ = lean_unbox_usize(v_i_3104_);
lean_dec(v_i_3104_);
v_res_3109_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3101_, v_as_3102_, v_sz_boxed_3107_, v_i_boxed_3108_, v_b_3105_);
lean_dec_ref(v_as_3102_);
lean_dec(v_forbidden_3101_);
return v_res_3109_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__1));
v___x_3114_ = l_Lean_MessageData_ofFormat(v___x_3113_);
return v___x_3114_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = lean_box(1);
v___x_3116_ = l_Lean_MessageData_ofFormat(v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(lean_object* v_a_3119_, lean_object* v_a_3120_){
_start:
{
if (lean_obj_tag(v_a_3119_) == 0)
{
lean_object* v___x_3121_; 
v___x_3121_ = l_List_reverse___redArg(v_a_3120_);
return v___x_3121_;
}
else
{
lean_object* v_head_3122_; lean_object* v_snd_3123_; lean_object* v_tail_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3169_; 
v_head_3122_ = lean_ctor_get(v_a_3119_, 0);
lean_inc(v_head_3122_);
v_snd_3123_ = lean_ctor_get(v_head_3122_, 1);
lean_inc(v_snd_3123_);
v_tail_3124_ = lean_ctor_get(v_a_3119_, 1);
v_isSharedCheck_3169_ = !lean_is_exclusive(v_a_3119_);
if (v_isSharedCheck_3169_ == 0)
{
lean_object* v_unused_3170_; 
v_unused_3170_ = lean_ctor_get(v_a_3119_, 0);
lean_dec(v_unused_3170_);
v___x_3126_ = v_a_3119_;
v_isShared_3127_ = v_isSharedCheck_3169_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_tail_3124_);
lean_dec(v_a_3119_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3169_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v_fst_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3167_; 
v_fst_3128_ = lean_ctor_get(v_head_3122_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v_head_3122_);
if (v_isSharedCheck_3167_ == 0)
{
lean_object* v_unused_3168_; 
v_unused_3168_ = lean_ctor_get(v_head_3122_, 1);
lean_dec(v_unused_3168_);
v___x_3130_ = v_head_3122_;
v_isShared_3131_ = v_isSharedCheck_3167_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_fst_3128_);
lean_dec(v_head_3122_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3167_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v_fst_3132_; lean_object* v_snd_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3166_; 
v_fst_3132_ = lean_ctor_get(v_snd_3123_, 0);
v_snd_3133_ = lean_ctor_get(v_snd_3123_, 1);
v_isSharedCheck_3166_ = !lean_is_exclusive(v_snd_3123_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3135_ = v_snd_3123_;
v_isShared_3136_ = v_isSharedCheck_3166_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_snd_3133_);
lean_inc(v_fst_3132_);
lean_dec(v_snd_3123_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3166_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3140_; 
v___x_3137_ = l_Lean_MessageData_ofName(v_fst_3128_);
v___x_3138_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2, &l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__2);
if (v_isShared_3136_ == 0)
{
lean_ctor_set_tag(v___x_3135_, 7);
lean_ctor_set(v___x_3135_, 1, v___x_3138_);
lean_ctor_set(v___x_3135_, 0, v___x_3137_);
v___x_3140_ = v___x_3135_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v___x_3137_);
lean_ctor_set(v_reuseFailAlloc_3165_, 1, v___x_3138_);
v___x_3140_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3141_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3, &l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__3);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 7);
lean_ctor_set(v___x_3130_, 1, v___x_3141_);
lean_ctor_set(v___x_3130_, 0, v___x_3140_);
v___x_3143_ = v___x_3130_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3140_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___y_3145_; uint8_t v___x_3161_; 
v___x_3161_ = lean_unbox(v_fst_3132_);
lean_dec(v_fst_3132_);
if (v___x_3161_ == 0)
{
lean_object* v___x_3162_; 
v___x_3162_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__4));
v___y_3145_ = v___x_3162_;
goto v___jp_3144_;
}
else
{
lean_object* v___x_3163_; 
v___x_3163_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4___closed__5));
v___y_3145_ = v___x_3163_;
goto v___jp_3144_;
}
v___jp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3158_; 
lean_inc_ref(v___y_3145_);
v___x_3146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3146_, 0, v___y_3145_);
v___x_3147_ = l_Lean_MessageData_ofFormat(v___x_3146_);
v___x_3148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
lean_ctor_set(v___x_3148_, 1, v___x_3138_);
v___x_3149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
lean_ctor_set(v___x_3149_, 1, v___x_3141_);
v___x_3150_ = l_Nat_reprFast(v_snd_3133_);
v___x_3151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3150_);
v___x_3152_ = l_Lean_MessageData_ofFormat(v___x_3151_);
v___x_3153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3149_);
lean_ctor_set(v___x_3153_, 1, v___x_3152_);
v___x_3154_ = l_Lean_MessageData_paren(v___x_3153_);
v___x_3155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3143_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = l_Lean_MessageData_paren(v___x_3155_);
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 1, v_a_3120_);
lean_ctor_set(v___x_3126_, 0, v___x_3156_);
v___x_3158_ = v___x_3126_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3156_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v_a_3120_);
v___x_3158_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
v_a_3119_ = v_tail_3124_;
v_a_3120_ = v___x_3158_;
goto _start;
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
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__1(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteCandidates___closed__0));
v___x_3174_ = l_Lean_NameSet_empty;
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3173_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__2(void){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__1, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__1_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__1);
v___x_3177_ = l_Lean_NameSet_empty;
v___x_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3176_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__3(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_3180_ = ((lean_object*)(l_Lean_Meta_Rewrites_rwLemma___lam__0___closed__4));
v___x_3181_ = l_Lean_Name_append(v___x_3180_, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__5(void){
_start:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3183_ = ((lean_object*)(l_Lean_Meta_Rewrites_rewriteCandidates___closed__4));
v___x_3184_ = l_Lean_stringToMessageData(v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates(lean_object* v_hyps_3185_, lean_object* v_moduleRef_3186_, lean_object* v_target_3187_, lean_object* v_forbidden_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3194_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwFindDecls___boxed), 7, 1);
lean_closure_set(v___x_3194_, 0, v_moduleRef_3186_);
v___x_3195_ = l_Lean_Meta_Rewrites_getSubexpressionMatches___redArg(v___x_3194_, v_target_3187_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; size_t v_sz_3201_; size_t v___x_3202_; lean_object* v___x_3203_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v___x_3197_ = lean_unsigned_to_nat(0u);
v___x_3198_ = lean_array_get_size(v_a_3196_);
v___x_3199_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0(v_a_3196_, v___x_3197_, v___x_3198_);
v___x_3200_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__2, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__2_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__2);
v_sz_3201_ = lean_array_size(v___x_3199_);
v___x_3202_ = ((size_t)0ULL);
v___x_3203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3188_, v___x_3199_, v_sz_3201_, v___x_3202_, v___x_3200_);
lean_dec_ref(v___x_3199_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3252_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3206_ = v___x_3203_;
v_isShared_3207_ = v_isSharedCheck_3252_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3203_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3252_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v_snd_3208_; lean_object* v_snd_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3250_; 
v_snd_3208_ = lean_ctor_get(v_a_3204_, 1);
lean_inc(v_snd_3208_);
lean_dec(v_a_3204_);
v_snd_3209_ = lean_ctor_get(v_snd_3208_, 1);
v_isSharedCheck_3250_ = !lean_is_exclusive(v_snd_3208_);
if (v_isSharedCheck_3250_ == 0)
{
lean_object* v_unused_3251_; 
v_unused_3251_ = lean_ctor_get(v_snd_3208_, 0);
lean_dec(v_unused_3251_);
v___x_3211_ = v_snd_3208_;
v_isShared_3212_ = v_isSharedCheck_3250_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_snd_3209_);
lean_dec(v_snd_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3250_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v_toCold_3226_; lean_object* v_options_3227_; uint8_t v_hasTrace_3228_; 
v_toCold_3226_ = lean_ctor_get(v_a_3191_, 0);
v_options_3227_ = lean_ctor_get(v_toCold_3226_, 2);
v_hasTrace_3228_ = lean_ctor_get_uint8(v_options_3227_, sizeof(void*)*1);
if (v_hasTrace_3228_ == 0)
{
lean_del_object(v___x_3211_);
goto v___jp_3213_;
}
else
{
lean_object* v_inheritedTraceOptions_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; uint8_t v___x_3232_; 
v_inheritedTraceOptions_3229_ = lean_ctor_get(v_toCold_3226_, 11);
v___x_3230_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn___closed__1_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_));
v___x_3231_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__3, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__3_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__3);
v___x_3232_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3229_, v_options_3227_, v___x_3231_);
if (v___x_3232_ == 0)
{
lean_del_object(v___x_3211_);
goto v___jp_3213_;
}
else
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3239_; 
v___x_3233_ = lean_obj_once(&l_Lean_Meta_Rewrites_rewriteCandidates___closed__5, &l_Lean_Meta_Rewrites_rewriteCandidates___closed__5_once, _init_l_Lean_Meta_Rewrites_rewriteCandidates___closed__5);
lean_inc(v_snd_3209_);
v___x_3234_ = lean_array_to_list(v_snd_3209_);
v___x_3235_ = lean_box(0);
v___x_3236_ = l_List_mapTR_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__4(v___x_3234_, v___x_3235_);
v___x_3237_ = l_Lean_MessageData_ofList(v___x_3236_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set_tag(v___x_3211_, 7);
lean_ctor_set(v___x_3211_, 1, v___x_3237_);
lean_ctor_set(v___x_3211_, 0, v___x_3233_);
v___x_3239_ = v___x_3211_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3233_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v___x_3237_);
v___x_3239_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3240_; 
v___x_3240_ = l_Lean_addTrace___at___00Lean_Meta_Rewrites_rwLemma_spec__2(v___x_3230_, v___x_3239_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_dec_ref_known(v___x_3240_, 1);
goto v___jp_3213_;
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec(v_snd_3209_);
lean_del_object(v___x_3206_);
v_a_3241_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_3240_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3240_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
}
v___jp_3213_:
{
size_t v_sz_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; size_t v_sz_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3224_; 
v_sz_3214_ = lean_array_size(v_hyps_3185_);
v___x_3215_ = l_unsafeCast___redArg(v_hyps_3185_);
v___x_3216_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__2(v_sz_3214_, v___x_3202_, v___x_3215_);
v___x_3217_ = l_unsafeCast___redArg(v___x_3216_);
lean_dec_ref(v___x_3216_);
v_sz_3218_ = lean_array_size(v_snd_3209_);
v___x_3219_ = l_unsafeCast___redArg(v_snd_3209_);
lean_dec(v_snd_3209_);
v___x_3220_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__3(v_sz_3218_, v___x_3202_, v___x_3219_);
v___x_3221_ = l_unsafeCast___redArg(v___x_3220_);
lean_dec_ref(v___x_3220_);
v___x_3222_ = l_Array_append___redArg(v___x_3217_, v___x_3221_);
lean_dec(v___x_3221_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3222_);
v___x_3224_ = v___x_3206_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
v_a_3253_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3203_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3203_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
v_a_3261_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3195_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3195_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_rewriteCandidates___boxed(lean_object* v_hyps_3269_, lean_object* v_moduleRef_3270_, lean_object* v_target_3271_, lean_object* v_forbidden_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Lean_Meta_Rewrites_rewriteCandidates(v_hyps_3269_, v_moduleRef_3270_, v_target_3271_, v_forbidden_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_);
lean_dec(v_a_3276_);
lean_dec_ref(v_a_3275_);
lean_dec(v_a_3274_);
lean_dec_ref(v_a_3273_);
lean_dec(v_forbidden_3272_);
lean_dec_ref(v_hyps_3269_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(lean_object* v_forbidden_3279_, lean_object* v_as_3280_, size_t v_sz_3281_, size_t v_i_3282_, lean_object* v_b_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_){
_start:
{
lean_object* v___x_3289_; 
v___x_3289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___redArg(v_forbidden_3279_, v_as_3280_, v_sz_3281_, v_i_3282_, v_b_3283_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1___boxed(lean_object* v_forbidden_3290_, lean_object* v_as_3291_, lean_object* v_sz_3292_, lean_object* v_i_3293_, lean_object* v_b_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
size_t v_sz_boxed_3300_; size_t v_i_boxed_3301_; lean_object* v_res_3302_; 
v_sz_boxed_3300_ = lean_unbox_usize(v_sz_3292_);
lean_dec(v_sz_3292_);
v_i_boxed_3301_ = lean_unbox_usize(v_i_3293_);
lean_dec(v_i_3293_);
v_res_3302_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__1(v_forbidden_3290_, v_as_3291_, v_sz_boxed_3300_, v_i_boxed_3301_, v_b_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
lean_dec(v___y_3298_);
lean_dec_ref(v___y_3297_);
lean_dec(v___y_3296_);
lean_dec_ref(v___y_3295_);
lean_dec_ref(v_as_3291_);
lean_dec(v_forbidden_3290_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0(lean_object* v_xs_3303_, lean_object* v_j_3304_, lean_object* v_h_3305_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_Rewrites_rewriteCandidates_spec__0_spec__0___redArg(v_xs_3303_, v_j_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal(lean_object* v_r_3307_){
_start:
{
uint8_t v_rfl_x3f_3308_; 
v_rfl_x3f_3308_ = lean_ctor_get_uint8(v_r_3307_, sizeof(void*)*4 + 1);
if (v_rfl_x3f_3308_ == 0)
{
lean_object* v_result_3309_; lean_object* v_eNew_3310_; lean_object* v___x_3311_; 
v_result_3309_ = lean_ctor_get(v_r_3307_, 2);
v_eNew_3310_ = lean_ctor_get(v_result_3309_, 0);
lean_inc_ref(v_eNew_3310_);
v___x_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3311_, 0, v_eNew_3310_);
return v___x_3311_;
}
else
{
lean_object* v___x_3312_; 
v___x_3312_ = lean_box(0);
return v___x_3312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_newGoal___boxed(lean_object* v_r_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_Meta_Rewrites_RewriteResult_newGoal(v_r_3313_);
lean_dec_ref(v_r_3313_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(lean_object* v_x_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v___x_3325_; 
lean_inc(v___y_3319_);
lean_inc_ref(v___y_3318_);
lean_inc(v___y_3317_);
lean_inc_ref(v___y_3316_);
v___x_3325_ = lean_apply_9(v_x_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, lean_box(0));
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed(lean_object* v_x_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0(v_x_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(lean_object* v_mctx_3337_, lean_object* v_x_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v___f_3348_; lean_object* v___x_3349_; 
lean_inc(v___y_3342_);
lean_inc_ref(v___y_3341_);
lean_inc(v___y_3340_);
lean_inc_ref(v___y_3339_);
v___f_3348_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3348_, 0, v_x_3338_);
lean_closure_set(v___f_3348_, 1, v___y_3339_);
lean_closure_set(v___f_3348_, 2, v___y_3340_);
lean_closure_set(v___f_3348_, 3, v___y_3341_);
lean_closure_set(v___f_3348_, 4, v___y_3342_);
v___x_3349_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMCtxImp(lean_box(0), v_mctx_3337_, v___f_3348_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
if (lean_obj_tag(v___x_3349_) == 0)
{
return v___x_3349_;
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3349_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3349_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg___boxed(lean_object* v_mctx_3358_, lean_object* v_x_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3358_, v_x_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(lean_object* v_00_u03b1_3370_, lean_object* v_mctx_3371_, lean_object* v_x_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3371_, v_x_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___boxed(lean_object* v_00_u03b1_3383_, lean_object* v_mctx_3384_, lean_object* v_x_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0(v_00_u03b1_3383_, v_mctx_3384_, v_x_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(lean_object* v_expr_3396_, uint8_t v_symm_3397_, lean_object* v_r_3398_, lean_object* v_ref_3399_, lean_object* v_checkState_x3f_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_ref_3410_; lean_object* v___x_3411_; 
v_ref_3410_ = lean_ctor_get(v___y_3407_, 2);
v___x_3411_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3402_, v___y_3404_, v___y_3406_, v___y_3408_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___y_3422_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3413_ = lean_box(v_symm_3397_);
v___x_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3414_, 0, v_expr_3396_);
lean_ctor_set(v___x_3414_, 1, v___x_3413_);
v___x_3415_ = lean_box(0);
v___x_3416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3414_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = l_Lean_Meta_Rewrites_RewriteResult_newGoal(v_r_3398_);
v___x_3418_ = l_Lean_Option_toLOption___redArg(v___x_3417_);
v___x_3419_ = lean_box(0);
lean_inc(v_ref_3410_);
v___x_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3420_, 0, v_ref_3410_);
if (lean_obj_tag(v_checkState_x3f_3400_) == 0)
{
v___y_3422_ = v_a_3412_;
goto v___jp_3421_;
}
else
{
lean_object* v_val_3425_; 
lean_dec(v_a_3412_);
v_val_3425_ = lean_ctor_get(v_checkState_x3f_3400_, 0);
lean_inc(v_val_3425_);
lean_dec_ref_known(v_checkState_x3f_3400_, 1);
v___y_3422_ = v_val_3425_;
goto v___jp_3421_;
}
v___jp_3421_:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___y_3422_);
v___x_3424_ = l_Lean_Meta_Tactic_TryThis_addRewriteSuggestion(v_ref_3399_, v___x_3416_, v___x_3418_, v___x_3419_, v___x_3420_, v___x_3423_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
return v___x_3424_;
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
lean_dec(v_checkState_x3f_3400_);
lean_dec(v_ref_3399_);
lean_dec_ref(v_expr_3396_);
v_a_3426_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3411_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3411_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed(lean_object* v_expr_3434_, lean_object* v_symm_3435_, lean_object* v_r_3436_, lean_object* v_ref_3437_, lean_object* v_checkState_x3f_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
uint8_t v_symm_boxed_3448_; lean_object* v_res_3449_; 
v_symm_boxed_3448_ = lean_unbox(v_symm_3435_);
v_res_3449_ = l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0(v_expr_3434_, v_symm_boxed_3448_, v_r_3436_, v_ref_3437_, v_checkState_x3f_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec_ref(v_r_3436_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(lean_object* v_ref_3450_, lean_object* v_r_3451_, lean_object* v_checkState_x3f_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_){
_start:
{
lean_object* v_expr_3462_; uint8_t v_symm_3463_; lean_object* v_mctx_3464_; lean_object* v___x_3465_; lean_object* v___f_3466_; lean_object* v___x_3467_; 
v_expr_3462_ = lean_ctor_get(v_r_3451_, 0);
lean_inc_ref(v_expr_3462_);
v_symm_3463_ = lean_ctor_get_uint8(v_r_3451_, sizeof(void*)*4);
v_mctx_3464_ = lean_ctor_get(v_r_3451_, 3);
lean_inc_ref(v_mctx_3464_);
v___x_3465_ = lean_box(v_symm_3463_);
v___f_3466_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3466_, 0, v_expr_3462_);
lean_closure_set(v___f_3466_, 1, v___x_3465_);
lean_closure_set(v___f_3466_, 2, v_r_3451_);
lean_closure_set(v___f_3466_, 3, v_ref_3450_);
lean_closure_set(v___f_3466_, 4, v_checkState_x3f_3452_);
v___x_3467_ = l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_RewriteResult_addSuggestion_spec__0___redArg(v_mctx_3464_, v___f_3466_, v_a_3453_, v_a_3454_, v_a_3455_, v_a_3456_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_RewriteResult_addSuggestion___boxed(lean_object* v_ref_3468_, lean_object* v_r_3469_, lean_object* v_checkState_x3f_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lean_Meta_Rewrites_RewriteResult_addSuggestion(v_ref_3468_, v_r_3469_, v_checkState_x3f_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_, v_a_3476_, v_a_3477_, v_a_3478_);
lean_dec(v_a_3478_);
lean_dec_ref(v_a_3477_);
lean_dec(v_a_3476_);
lean_dec_ref(v_a_3475_);
lean_dec(v_a_3474_);
lean_dec_ref(v_a_3473_);
lean_dec(v_a_3472_);
lean_dec_ref(v_a_3471_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(lean_object* v_a_3481_, lean_object* v_b_3482_, lean_object* v_x_3483_){
_start:
{
if (lean_obj_tag(v_x_3483_) == 0)
{
lean_dec(v_b_3482_);
lean_dec_ref(v_a_3481_);
return v_x_3483_;
}
else
{
lean_object* v_key_3484_; lean_object* v_value_3485_; lean_object* v_tail_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3498_; 
v_key_3484_ = lean_ctor_get(v_x_3483_, 0);
v_value_3485_ = lean_ctor_get(v_x_3483_, 1);
v_tail_3486_ = lean_ctor_get(v_x_3483_, 2);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_x_3483_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3488_ = v_x_3483_;
v_isShared_3489_ = v_isSharedCheck_3498_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_tail_3486_);
lean_inc(v_value_3485_);
lean_inc(v_key_3484_);
lean_dec(v_x_3483_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3498_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
uint8_t v___x_3490_; 
v___x_3490_ = lean_string_dec_eq(v_key_3484_, v_a_3481_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3493_; 
v___x_3491_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3481_, v_b_3482_, v_tail_3486_);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 2, v___x_3491_);
v___x_3493_ = v___x_3488_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_key_3484_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v_value_3485_);
lean_ctor_set(v_reuseFailAlloc_3494_, 2, v___x_3491_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
else
{
lean_object* v___x_3496_; 
lean_dec(v_value_3485_);
lean_dec(v_key_3484_);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 1, v_b_3482_);
lean_ctor_set(v___x_3488_, 0, v_a_3481_);
v___x_3496_ = v___x_3488_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3481_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_b_3482_);
lean_ctor_set(v_reuseFailAlloc_3497_, 2, v_tail_3486_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_3499_, lean_object* v_x_3500_){
_start:
{
if (lean_obj_tag(v_x_3500_) == 0)
{
return v_x_3499_;
}
else
{
lean_object* v_key_3501_; lean_object* v_value_3502_; lean_object* v_tail_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3526_; 
v_key_3501_ = lean_ctor_get(v_x_3500_, 0);
v_value_3502_ = lean_ctor_get(v_x_3500_, 1);
v_tail_3503_ = lean_ctor_get(v_x_3500_, 2);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_x_3500_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3505_ = v_x_3500_;
v_isShared_3506_ = v_isSharedCheck_3526_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_tail_3503_);
lean_inc(v_value_3502_);
lean_inc(v_key_3501_);
lean_dec(v_x_3500_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3526_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; uint64_t v___x_3508_; uint64_t v___x_3509_; uint64_t v___x_3510_; uint64_t v_fold_3511_; uint64_t v___x_3512_; uint64_t v___x_3513_; uint64_t v___x_3514_; size_t v___x_3515_; size_t v___x_3516_; size_t v___x_3517_; size_t v___x_3518_; size_t v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3522_; 
v___x_3507_ = lean_array_get_size(v_x_3499_);
v___x_3508_ = lean_string_hash(v_key_3501_);
v___x_3509_ = 32ULL;
v___x_3510_ = lean_uint64_shift_right(v___x_3508_, v___x_3509_);
v_fold_3511_ = lean_uint64_xor(v___x_3508_, v___x_3510_);
v___x_3512_ = 16ULL;
v___x_3513_ = lean_uint64_shift_right(v_fold_3511_, v___x_3512_);
v___x_3514_ = lean_uint64_xor(v_fold_3511_, v___x_3513_);
v___x_3515_ = lean_uint64_to_usize(v___x_3514_);
v___x_3516_ = lean_usize_of_nat(v___x_3507_);
v___x_3517_ = ((size_t)1ULL);
v___x_3518_ = lean_usize_sub(v___x_3516_, v___x_3517_);
v___x_3519_ = lean_usize_land(v___x_3515_, v___x_3518_);
v___x_3520_ = lean_array_uget_borrowed(v_x_3499_, v___x_3519_);
lean_inc(v___x_3520_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 2, v___x_3520_);
v___x_3522_ = v___x_3505_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_key_3501_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_value_3502_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v___x_3520_);
v___x_3522_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
lean_object* v___x_3523_; 
v___x_3523_ = lean_array_uset(v_x_3499_, v___x_3519_, v___x_3522_);
v_x_3499_ = v___x_3523_;
v_x_3500_ = v_tail_3503_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(lean_object* v_i_3527_, lean_object* v_source_3528_, lean_object* v_target_3529_){
_start:
{
lean_object* v___x_3530_; uint8_t v___x_3531_; 
v___x_3530_ = lean_array_get_size(v_source_3528_);
v___x_3531_ = lean_nat_dec_lt(v_i_3527_, v___x_3530_);
if (v___x_3531_ == 0)
{
lean_dec_ref(v_source_3528_);
lean_dec(v_i_3527_);
return v_target_3529_;
}
else
{
lean_object* v_es_3532_; lean_object* v___x_3533_; lean_object* v_source_3534_; lean_object* v_target_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v_es_3532_ = lean_array_fget(v_source_3528_, v_i_3527_);
v___x_3533_ = lean_box(0);
v_source_3534_ = lean_array_fset(v_source_3528_, v_i_3527_, v___x_3533_);
v_target_3535_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(v_target_3529_, v_es_3532_);
v___x_3536_ = lean_unsigned_to_nat(1u);
v___x_3537_ = lean_nat_add(v_i_3527_, v___x_3536_);
lean_dec(v_i_3527_);
v_i_3527_ = v___x_3537_;
v_source_3528_ = v_source_3534_;
v_target_3529_ = v_target_3535_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(lean_object* v_data_3539_){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v_nbuckets_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3540_ = lean_array_get_size(v_data_3539_);
v___x_3541_ = lean_unsigned_to_nat(2u);
v_nbuckets_3542_ = lean_nat_mul(v___x_3540_, v___x_3541_);
v___x_3543_ = lean_unsigned_to_nat(0u);
v___x_3544_ = lean_box(0);
v___x_3545_ = lean_mk_array(v_nbuckets_3542_, v___x_3544_);
v___x_3546_ = lean_array_propagate_mark(v_data_3539_, v___x_3545_);
v___x_3547_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(v___x_3543_, v_data_3539_, v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(lean_object* v_a_3548_, lean_object* v_x_3549_){
_start:
{
if (lean_obj_tag(v_x_3549_) == 0)
{
uint8_t v___x_3550_; 
v___x_3550_ = 0;
return v___x_3550_;
}
else
{
lean_object* v_key_3551_; lean_object* v_tail_3552_; uint8_t v___x_3553_; 
v_key_3551_ = lean_ctor_get(v_x_3549_, 0);
v_tail_3552_ = lean_ctor_get(v_x_3549_, 2);
v___x_3553_ = lean_string_dec_eq(v_key_3551_, v_a_3548_);
if (v___x_3553_ == 0)
{
v_x_3549_ = v_tail_3552_;
goto _start;
}
else
{
return v___x_3553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3555_, lean_object* v_x_3556_){
_start:
{
uint8_t v_res_3557_; lean_object* v_r_3558_; 
v_res_3557_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3555_, v_x_3556_);
lean_dec(v_x_3556_);
lean_dec_ref(v_a_3555_);
v_r_3558_ = lean_box(v_res_3557_);
return v_r_3558_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(lean_object* v_m_3559_, lean_object* v_a_3560_, lean_object* v_b_3561_){
_start:
{
lean_object* v_size_3562_; lean_object* v_buckets_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3606_; 
v_size_3562_ = lean_ctor_get(v_m_3559_, 0);
v_buckets_3563_ = lean_ctor_get(v_m_3559_, 1);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_m_3559_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3565_ = v_m_3559_;
v_isShared_3566_ = v_isSharedCheck_3606_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_buckets_3563_);
lean_inc(v_size_3562_);
lean_dec(v_m_3559_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3606_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; uint64_t v___x_3568_; uint64_t v___x_3569_; uint64_t v___x_3570_; uint64_t v_fold_3571_; uint64_t v___x_3572_; uint64_t v___x_3573_; uint64_t v___x_3574_; size_t v___x_3575_; size_t v___x_3576_; size_t v___x_3577_; size_t v___x_3578_; size_t v___x_3579_; lean_object* v_bkt_3580_; uint8_t v___x_3581_; 
v___x_3567_ = lean_array_get_size(v_buckets_3563_);
v___x_3568_ = lean_string_hash(v_a_3560_);
v___x_3569_ = 32ULL;
v___x_3570_ = lean_uint64_shift_right(v___x_3568_, v___x_3569_);
v_fold_3571_ = lean_uint64_xor(v___x_3568_, v___x_3570_);
v___x_3572_ = 16ULL;
v___x_3573_ = lean_uint64_shift_right(v_fold_3571_, v___x_3572_);
v___x_3574_ = lean_uint64_xor(v_fold_3571_, v___x_3573_);
v___x_3575_ = lean_uint64_to_usize(v___x_3574_);
v___x_3576_ = lean_usize_of_nat(v___x_3567_);
v___x_3577_ = ((size_t)1ULL);
v___x_3578_ = lean_usize_sub(v___x_3576_, v___x_3577_);
v___x_3579_ = lean_usize_land(v___x_3575_, v___x_3578_);
v_bkt_3580_ = lean_array_uget_borrowed(v_buckets_3563_, v___x_3579_);
v___x_3581_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3560_, v_bkt_3580_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; lean_object* v_size_x27_3583_; lean_object* v___x_3584_; lean_object* v_buckets_x27_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; uint8_t v___x_3591_; 
v___x_3582_ = lean_unsigned_to_nat(1u);
v_size_x27_3583_ = lean_nat_add(v_size_3562_, v___x_3582_);
lean_dec(v_size_3562_);
lean_inc(v_bkt_3580_);
v___x_3584_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3584_, 0, v_a_3560_);
lean_ctor_set(v___x_3584_, 1, v_b_3561_);
lean_ctor_set(v___x_3584_, 2, v_bkt_3580_);
v_buckets_x27_3585_ = lean_array_uset(v_buckets_3563_, v___x_3579_, v___x_3584_);
v___x_3586_ = lean_unsigned_to_nat(4u);
v___x_3587_ = lean_nat_mul(v_size_x27_3583_, v___x_3586_);
v___x_3588_ = lean_unsigned_to_nat(3u);
v___x_3589_ = lean_nat_div(v___x_3587_, v___x_3588_);
lean_dec(v___x_3587_);
v___x_3590_ = lean_array_get_size(v_buckets_x27_3585_);
v___x_3591_ = lean_nat_dec_le(v___x_3589_, v___x_3590_);
lean_dec(v___x_3589_);
if (v___x_3591_ == 0)
{
lean_object* v_val_3592_; lean_object* v___x_3594_; 
v_val_3592_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(v_buckets_x27_3585_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v_val_3592_);
lean_ctor_set(v___x_3565_, 0, v_size_x27_3583_);
v___x_3594_ = v___x_3565_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_size_x27_3583_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v_val_3592_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
else
{
lean_object* v___x_3597_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v_buckets_x27_3585_);
lean_ctor_set(v___x_3565_, 0, v_size_x27_3583_);
v___x_3597_ = v___x_3565_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_size_x27_3583_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v_buckets_x27_3585_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
else
{
lean_object* v___x_3599_; lean_object* v_buckets_x27_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3604_; 
lean_inc(v_bkt_3580_);
v___x_3599_ = lean_box(0);
v_buckets_x27_3600_ = lean_array_uset(v_buckets_3563_, v___x_3579_, v___x_3599_);
v___x_3601_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3560_, v_b_3561_, v_bkt_3580_);
v___x_3602_ = lean_array_uset(v_buckets_x27_3600_, v___x_3579_, v___x_3601_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v___x_3602_);
v___x_3604_ = v___x_3565_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_size_3562_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v___x_3602_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(lean_object* v_m_3607_, lean_object* v_a_3608_){
_start:
{
lean_object* v_buckets_3609_; lean_object* v___x_3610_; uint64_t v___x_3611_; uint64_t v___x_3612_; uint64_t v___x_3613_; uint64_t v_fold_3614_; uint64_t v___x_3615_; uint64_t v___x_3616_; uint64_t v___x_3617_; size_t v___x_3618_; size_t v___x_3619_; size_t v___x_3620_; size_t v___x_3621_; size_t v___x_3622_; lean_object* v___x_3623_; uint8_t v___x_3624_; 
v_buckets_3609_ = lean_ctor_get(v_m_3607_, 1);
v___x_3610_ = lean_array_get_size(v_buckets_3609_);
v___x_3611_ = lean_string_hash(v_a_3608_);
v___x_3612_ = 32ULL;
v___x_3613_ = lean_uint64_shift_right(v___x_3611_, v___x_3612_);
v_fold_3614_ = lean_uint64_xor(v___x_3611_, v___x_3613_);
v___x_3615_ = 16ULL;
v___x_3616_ = lean_uint64_shift_right(v_fold_3614_, v___x_3615_);
v___x_3617_ = lean_uint64_xor(v_fold_3614_, v___x_3616_);
v___x_3618_ = lean_uint64_to_usize(v___x_3617_);
v___x_3619_ = lean_usize_of_nat(v___x_3610_);
v___x_3620_ = ((size_t)1ULL);
v___x_3621_ = lean_usize_sub(v___x_3619_, v___x_3620_);
v___x_3622_ = lean_usize_land(v___x_3618_, v___x_3621_);
v___x_3623_ = lean_array_uget_borrowed(v_buckets_3609_, v___x_3622_);
v___x_3624_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3608_, v___x_3623_);
return v___x_3624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg___boxed(lean_object* v_m_3625_, lean_object* v_a_3626_){
_start:
{
uint8_t v_res_3627_; lean_object* v_r_3628_; 
v_res_3627_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_m_3625_, v_a_3626_);
lean_dec_ref(v_a_3626_);
lean_dec_ref(v_m_3625_);
v_r_3628_ = lean_box(v_res_3627_);
return v_r_3628_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(lean_object* v_cfg_3629_, lean_object* v_as_x27_3630_, lean_object* v_b_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
if (lean_obj_tag(v_as_x27_3630_) == 0)
{
lean_object* v___x_3637_; 
lean_dec_ref(v_cfg_3629_);
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v_b_3631_);
return v___x_3637_;
}
else
{
lean_object* v_head_3638_; lean_object* v_snd_3639_; lean_object* v_snd_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3797_; 
v_head_3638_ = lean_ctor_get(v_as_x27_3630_, 0);
v_snd_3639_ = lean_ctor_get(v_head_3638_, 1);
v_snd_3640_ = lean_ctor_get(v_b_3631_, 1);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_b_3631_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; 
v_unused_3798_ = lean_ctor_get(v_b_3631_, 0);
lean_dec(v_unused_3798_);
v___x_3642_ = v_b_3631_;
v_isShared_3643_ = v_isSharedCheck_3797_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_snd_3640_);
lean_dec(v_b_3631_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3797_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v_tail_3644_; lean_object* v_fst_3645_; lean_object* v_fst_3646_; lean_object* v_snd_3647_; lean_object* v_fst_3648_; lean_object* v_snd_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3796_; 
v_tail_3644_ = lean_ctor_get(v_as_x27_3630_, 1);
v_fst_3645_ = lean_ctor_get(v_head_3638_, 0);
v_fst_3646_ = lean_ctor_get(v_snd_3639_, 0);
v_snd_3647_ = lean_ctor_get(v_snd_3639_, 1);
v_fst_3648_ = lean_ctor_get(v_snd_3640_, 0);
v_snd_3649_ = lean_ctor_get(v_snd_3640_, 1);
v_isSharedCheck_3796_ = !lean_is_exclusive(v_snd_3640_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3651_ = v_snd_3640_;
v_isShared_3652_ = v_isSharedCheck_3796_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_snd_3649_);
lean_inc(v_fst_3648_);
lean_dec(v_snd_3640_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3796_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3653_ = lean_box(0);
v___x_3654_ = l_Lean_getRemainingHeartbeats___redArg(v___y_3634_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3787_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3657_ = v___x_3654_;
v_isShared_3658_ = v_isSharedCheck_3787_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3787_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
uint8_t v_stopAtRfl_3659_; lean_object* v_max_3660_; lean_object* v_minHeartbeats_3661_; lean_object* v_goal_3662_; lean_object* v_target_3663_; uint8_t v_side_3664_; lean_object* v_mctx_3665_; uint8_t v___x_3666_; 
v_stopAtRfl_3659_ = lean_ctor_get_uint8(v_cfg_3629_, sizeof(void*)*5);
v_max_3660_ = lean_ctor_get(v_cfg_3629_, 0);
v_minHeartbeats_3661_ = lean_ctor_get(v_cfg_3629_, 1);
v_goal_3662_ = lean_ctor_get(v_cfg_3629_, 2);
v_target_3663_ = lean_ctor_get(v_cfg_3629_, 3);
v_side_3664_ = lean_ctor_get_uint8(v_cfg_3629_, sizeof(void*)*5 + 1);
v_mctx_3665_ = lean_ctor_get(v_cfg_3629_, 4);
v___x_3666_ = lean_nat_dec_lt(v_a_3655_, v_minHeartbeats_3661_);
lean_dec(v_a_3655_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; uint8_t v___x_3668_; 
v___x_3667_ = lean_array_get_size(v_snd_3649_);
v___x_3668_ = lean_nat_dec_le(v_max_3660_, v___x_3667_);
if (v___x_3668_ == 0)
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
lean_del_object(v___x_3657_);
v___x_3669_ = lean_box(v_side_3664_);
lean_inc(v_snd_3647_);
lean_inc(v_fst_3646_);
lean_inc(v_fst_3645_);
lean_inc_ref(v_target_3663_);
lean_inc(v_goal_3662_);
lean_inc_ref_n(v_mctx_3665_, 2);
v___x_3670_ = lean_alloc_closure((void*)(l_Lean_Meta_Rewrites_rwLemma___boxed), 12, 7);
lean_closure_set(v___x_3670_, 0, v_mctx_3665_);
lean_closure_set(v___x_3670_, 1, v_goal_3662_);
lean_closure_set(v___x_3670_, 2, v_target_3663_);
lean_closure_set(v___x_3670_, 3, v___x_3669_);
lean_closure_set(v___x_3670_, 4, v_fst_3645_);
lean_closure_set(v___x_3670_, 5, v_fst_3646_);
lean_closure_set(v___x_3670_, 6, v_snd_3647_);
v___x_3671_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3671_, 0, lean_box(0));
lean_closure_set(v___x_3671_, 1, v_mctx_3665_);
lean_closure_set(v___x_3671_, 2, v___x_3670_);
v___x_3672_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_3671_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_a_3673_; 
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
lean_inc(v_a_3673_);
lean_dec_ref_known(v___x_3672_, 1);
if (lean_obj_tag(v_a_3673_) == 0)
{
lean_object* v___x_3675_; 
if (v_isShared_3652_ == 0)
{
v___x_3675_ = v___x_3651_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_fst_3648_);
lean_ctor_set(v_reuseFailAlloc_3680_, 1, v_snd_3649_);
v___x_3675_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3677_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3675_);
lean_ctor_set(v___x_3642_, 0, v___x_3653_);
v___x_3677_ = v___x_3642_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
v_as_x27_3630_ = v_tail_3644_;
v_b_3631_ = v___x_3677_;
goto _start;
}
}
}
else
{
lean_object* v_val_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3758_; 
v_val_3681_ = lean_ctor_get(v_a_3673_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v_a_3673_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3683_ = v_a_3673_;
v_isShared_3684_ = v_isSharedCheck_3758_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_val_3681_);
lean_dec(v_a_3673_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3758_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v_result_3685_; lean_object* v_mctx_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
v_result_3685_ = lean_ctor_get(v_val_3681_, 2);
v_mctx_3686_ = lean_ctor_get(v_val_3681_, 3);
lean_inc(v_val_3681_);
v___x_3687_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_RewriteResult_ppResult___boxed), 6, 1);
lean_closure_set(v___x_3687_, 0, v_val_3681_);
lean_inc_ref(v_mctx_3686_);
v___x_3688_ = lean_alloc_closure((void*)(l_Lean_Meta_withMCtx___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3688_, 0, lean_box(0));
lean_closure_set(v___x_3688_, 1, v_mctx_3686_);
lean_closure_set(v___x_3688_, 2, v___x_3687_);
v___x_3689_ = l_Lean_withoutModifyingState___at___00Lean_Meta_Rewrites_dischargableWithRfl_x3f_spec__1___redArg(v___x_3688_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; uint8_t v___x_3691_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref_known(v___x_3689_, 1);
v___x_3691_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_fst_3648_, v_a_3690_);
if (v___x_3691_ == 0)
{
lean_object* v_eNew_3692_; lean_object* v___x_3693_; 
v_eNew_3692_ = lean_ctor_get(v_result_3685_, 0);
lean_inc_ref(v_eNew_3692_);
lean_inc_ref(v_mctx_3686_);
v___x_3693_ = l_Lean_Meta_Rewrites_dischargableWithRfl_x3f(v_mctx_3686_, v_eNew_3692_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
if (lean_obj_tag(v___x_3693_) == 0)
{
if (v_stopAtRfl_3659_ == 0)
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3698_; 
lean_dec_ref_known(v___x_3693_, 1);
lean_del_object(v___x_3683_);
v___x_3694_ = lean_box(0);
v___x_3695_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_fst_3648_, v_a_3690_, v___x_3694_);
v___x_3696_ = lean_array_push(v_snd_3649_, v_val_3681_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set(v___x_3651_, 1, v___x_3696_);
lean_ctor_set(v___x_3651_, 0, v___x_3695_);
v___x_3698_ = v___x_3651_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v___x_3695_);
lean_ctor_set(v_reuseFailAlloc_3703_, 1, v___x_3696_);
v___x_3698_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3700_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3698_);
lean_ctor_set(v___x_3642_, 0, v___x_3653_);
v___x_3700_ = v___x_3642_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v___x_3698_);
v___x_3700_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
v_as_x27_3630_ = v_tail_3644_;
v_b_3631_ = v___x_3700_;
goto _start;
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3734_; 
v_a_3704_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3706_ = v___x_3693_;
v_isShared_3707_ = v_isSharedCheck_3734_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3693_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3734_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
uint8_t v___x_3708_; 
v___x_3708_ = lean_unbox(v_a_3704_);
lean_dec(v_a_3704_);
if (v___x_3708_ == 0)
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3713_; 
lean_del_object(v___x_3706_);
lean_del_object(v___x_3683_);
v___x_3709_ = lean_box(0);
v___x_3710_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_fst_3648_, v_a_3690_, v___x_3709_);
v___x_3711_ = lean_array_push(v_snd_3649_, v_val_3681_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set(v___x_3651_, 1, v___x_3711_);
lean_ctor_set(v___x_3651_, 0, v___x_3710_);
v___x_3713_ = v___x_3651_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3710_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v___x_3711_);
v___x_3713_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
lean_object* v___x_3715_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3713_);
lean_ctor_set(v___x_3642_, 0, v___x_3653_);
v___x_3715_ = v___x_3642_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3717_, 1, v___x_3713_);
v___x_3715_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
v_as_x27_3630_ = v_tail_3644_;
v_b_3631_ = v___x_3715_;
goto _start;
}
}
}
else
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
lean_dec(v_a_3690_);
lean_dec_ref(v_cfg_3629_);
v___x_3719_ = lean_unsigned_to_nat(1u);
v___x_3720_ = lean_mk_empty_array_with_capacity(v___x_3719_);
v___x_3721_ = lean_array_push(v___x_3720_, v_val_3681_);
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 0, v___x_3721_);
v___x_3723_ = v___x_3683_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3725_; 
if (v_isShared_3652_ == 0)
{
v___x_3725_ = v___x_3651_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_fst_3648_);
lean_ctor_set(v_reuseFailAlloc_3732_, 1, v_snd_3649_);
v___x_3725_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
lean_object* v___x_3727_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3725_);
lean_ctor_set(v___x_3642_, 0, v___x_3723_);
v___x_3727_ = v___x_3642_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3723_);
lean_ctor_set(v_reuseFailAlloc_3731_, 1, v___x_3725_);
v___x_3727_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
lean_object* v___x_3729_; 
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 0, v___x_3727_);
v___x_3729_ = v___x_3706_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v___x_3727_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
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
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec(v_a_3690_);
lean_del_object(v___x_3683_);
lean_dec(v_val_3681_);
lean_del_object(v___x_3651_);
lean_dec(v_snd_3649_);
lean_dec(v_fst_3648_);
lean_del_object(v___x_3642_);
lean_dec_ref(v_cfg_3629_);
v_a_3735_ = lean_ctor_get(v___x_3693_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3693_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3693_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3693_);
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
lean_object* v___x_3744_; 
lean_dec(v_a_3690_);
lean_del_object(v___x_3683_);
lean_dec(v_val_3681_);
if (v_isShared_3652_ == 0)
{
v___x_3744_ = v___x_3651_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_fst_3648_);
lean_ctor_set(v_reuseFailAlloc_3749_, 1, v_snd_3649_);
v___x_3744_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
lean_object* v___x_3746_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3744_);
lean_ctor_set(v___x_3642_, 0, v___x_3653_);
v___x_3746_ = v___x_3642_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v___x_3744_);
v___x_3746_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
v_as_x27_3630_ = v_tail_3644_;
v_b_3631_ = v___x_3746_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_del_object(v___x_3683_);
lean_dec(v_val_3681_);
lean_del_object(v___x_3651_);
lean_dec(v_snd_3649_);
lean_dec(v_fst_3648_);
lean_del_object(v___x_3642_);
lean_dec_ref(v_cfg_3629_);
v_a_3750_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3689_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3689_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
lean_del_object(v___x_3651_);
lean_dec(v_snd_3649_);
lean_dec(v_fst_3648_);
lean_del_object(v___x_3642_);
lean_dec_ref(v_cfg_3629_);
v_a_3759_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___x_3672_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3672_);
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
lean_object* v___x_3767_; lean_object* v___x_3769_; 
lean_dec_ref(v_cfg_3629_);
lean_inc(v_snd_3649_);
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_snd_3649_);
if (v_isShared_3652_ == 0)
{
v___x_3769_ = v___x_3651_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_fst_3648_);
lean_ctor_set(v_reuseFailAlloc_3776_, 1, v_snd_3649_);
v___x_3769_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3771_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3769_);
lean_ctor_set(v___x_3642_, 0, v___x_3767_);
v___x_3771_ = v___x_3642_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3767_);
lean_ctor_set(v_reuseFailAlloc_3775_, 1, v___x_3769_);
v___x_3771_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3773_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 0, v___x_3771_);
v___x_3773_ = v___x_3657_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v___x_3771_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
}
else
{
lean_object* v___x_3777_; lean_object* v___x_3779_; 
lean_dec_ref(v_cfg_3629_);
lean_inc(v_snd_3649_);
v___x_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3777_, 0, v_snd_3649_);
if (v_isShared_3652_ == 0)
{
v___x_3779_ = v___x_3651_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_fst_3648_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_snd_3649_);
v___x_3779_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
lean_object* v___x_3781_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v___x_3779_);
lean_ctor_set(v___x_3642_, 0, v___x_3777_);
v___x_3781_ = v___x_3642_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3785_, 1, v___x_3779_);
v___x_3781_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3783_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 0, v___x_3781_);
v___x_3783_ = v___x_3657_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_del_object(v___x_3651_);
lean_dec(v_snd_3649_);
lean_dec(v_fst_3648_);
lean_del_object(v___x_3642_);
lean_dec_ref(v_cfg_3629_);
v_a_3788_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3654_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3654_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg___boxed(lean_object* v_cfg_3799_, lean_object* v_as_x27_3800_, lean_object* v_b_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3799_, v_as_x27_3800_, v_b_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v_as_x27_3800_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux(lean_object* v_cfg_3808_, lean_object* v_seen_3809_, lean_object* v_acc_3810_, lean_object* v_xs_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3817_ = lean_box(0);
v___x_3818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3818_, 0, v_seen_3809_);
lean_ctor_set(v___x_3818_, 1, v_acc_3810_);
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3817_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3808_, v_xs_3811_, v___x_3819_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3835_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3823_ = v___x_3820_;
v_isShared_3824_ = v_isSharedCheck_3835_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3820_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3835_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v_fst_3825_; 
v_fst_3825_ = lean_ctor_get(v_a_3821_, 0);
if (lean_obj_tag(v_fst_3825_) == 0)
{
lean_object* v_snd_3826_; lean_object* v_snd_3827_; lean_object* v___x_3829_; 
v_snd_3826_ = lean_ctor_get(v_a_3821_, 1);
lean_inc(v_snd_3826_);
lean_dec(v_a_3821_);
v_snd_3827_ = lean_ctor_get(v_snd_3826_, 1);
lean_inc(v_snd_3827_);
lean_dec(v_snd_3826_);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v_snd_3827_);
v___x_3829_ = v___x_3823_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_snd_3827_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
else
{
lean_object* v_val_3831_; lean_object* v___x_3833_; 
lean_inc_ref(v_fst_3825_);
lean_dec(v_a_3821_);
v_val_3831_ = lean_ctor_get(v_fst_3825_, 0);
lean_inc(v_val_3831_);
lean_dec_ref_known(v_fst_3825_, 1);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v_val_3831_);
v___x_3833_ = v___x_3823_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v_val_3831_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
}
else
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3820_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3820_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_takeListAux___boxed(lean_object* v_cfg_3844_, lean_object* v_seen_3845_, lean_object* v_acc_3846_, lean_object* v_xs_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l_Lean_Meta_Rewrites_takeListAux(v_cfg_3844_, v_seen_3845_, v_acc_3846_, v_xs_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_);
lean_dec(v_a_3851_);
lean_dec_ref(v_a_3850_);
lean_dec(v_a_3849_);
lean_dec_ref(v_a_3848_);
lean_dec(v_xs_3847_);
return v_res_3853_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(lean_object* v_00_u03b2_3854_, lean_object* v_m_3855_, lean_object* v_a_3856_){
_start:
{
uint8_t v___x_3857_; 
v___x_3857_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___redArg(v_m_3855_, v_a_3856_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0___boxed(lean_object* v_00_u03b2_3858_, lean_object* v_m_3859_, lean_object* v_a_3860_){
_start:
{
uint8_t v_res_3861_; lean_object* v_r_3862_; 
v_res_3861_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0(v_00_u03b2_3858_, v_m_3859_, v_a_3860_);
lean_dec_ref(v_a_3860_);
lean_dec_ref(v_m_3859_);
v_r_3862_ = lean_box(v_res_3861_);
return v_r_3862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1(lean_object* v_00_u03b2_3863_, lean_object* v_m_3864_, lean_object* v_a_3865_, lean_object* v_b_3866_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1___redArg(v_m_3864_, v_a_3865_, v_b_3866_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(lean_object* v_cfg_3868_, lean_object* v_as_3869_, lean_object* v_as_x27_3870_, lean_object* v_b_3871_, lean_object* v_a_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v___x_3878_; 
v___x_3878_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___redArg(v_cfg_3868_, v_as_x27_3870_, v_b_3871_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
return v___x_3878_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2___boxed(lean_object* v_cfg_3879_, lean_object* v_as_3880_, lean_object* v_as_x27_3881_, lean_object* v_b_3882_, lean_object* v_a_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_){
_start:
{
lean_object* v_res_3889_; 
v_res_3889_ = l_List_forIn_x27_loop___at___00Lean_Meta_Rewrites_takeListAux_spec__2(v_cfg_3879_, v_as_3880_, v_as_x27_3881_, v_b_3882_, v_a_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3885_);
lean_dec_ref(v___y_3884_);
lean_dec(v_as_x27_3881_);
lean_dec(v_as_3880_);
return v_res_3889_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(lean_object* v_00_u03b2_3890_, lean_object* v_a_3891_, lean_object* v_x_3892_){
_start:
{
uint8_t v___x_3893_; 
v___x_3893_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___redArg(v_a_3891_, v_x_3892_);
return v___x_3893_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3894_, lean_object* v_a_3895_, lean_object* v_x_3896_){
_start:
{
uint8_t v_res_3897_; lean_object* v_r_3898_; 
v_res_3897_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Rewrites_takeListAux_spec__0_spec__0(v_00_u03b2_3894_, v_a_3895_, v_x_3896_);
lean_dec(v_x_3896_);
lean_dec_ref(v_a_3895_);
v_r_3898_ = lean_box(v_res_3897_);
return v_r_3898_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2(lean_object* v_00_u03b2_3899_, lean_object* v_data_3900_){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2___redArg(v_data_3900_);
return v___x_3901_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3(lean_object* v_00_u03b2_3902_, lean_object* v_a_3903_, lean_object* v_b_3904_, lean_object* v_x_3905_){
_start:
{
lean_object* v___x_3906_; 
v___x_3906_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__3___redArg(v_a_3903_, v_b_3904_, v_x_3905_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_3907_, lean_object* v_i_3908_, lean_object* v_source_3909_, lean_object* v_target_3910_){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3___redArg(v_i_3908_, v_source_3909_, v_target_3910_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_3912_, lean_object* v_x_3913_, lean_object* v_x_3914_){
_start:
{
lean_object* v___x_3915_; 
v___x_3915_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Rewrites_takeListAux_spec__1_spec__2_spec__3_spec__5___redArg(v_x_3913_, v_x_3914_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_findRewrites___closed__0(void){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3916_ = lean_box(0);
v___x_3917_ = lean_unsigned_to_nat(16u);
v___x_3918_ = lean_mk_array(v___x_3917_, v___x_3916_);
return v___x_3918_;
}
}
static lean_object* _init_l_Lean_Meta_Rewrites_findRewrites___closed__1(void){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3919_ = lean_obj_once(&l_Lean_Meta_Rewrites_findRewrites___closed__0, &l_Lean_Meta_Rewrites_findRewrites___closed__0_once, _init_l_Lean_Meta_Rewrites_findRewrites___closed__0);
v___x_3920_ = lean_unsigned_to_nat(0u);
v___x_3921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3920_);
lean_ctor_set(v___x_3921_, 1, v___x_3919_);
return v___x_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites(lean_object* v_hyps_3922_, lean_object* v_moduleRef_3923_, lean_object* v_goal_3924_, lean_object* v_target_3925_, lean_object* v_forbidden_3926_, uint8_t v_side_3927_, uint8_t v_stopAtRfl_3928_, lean_object* v_max_3929_, lean_object* v_leavePercentHeartbeats_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_){
_start:
{
lean_object* v___x_3936_; lean_object* v_mctx_3937_; lean_object* v___x_3938_; 
v___x_3936_ = lean_st_ref_get(v_a_3932_);
v_mctx_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc_ref(v_mctx_3937_);
lean_dec(v___x_3936_);
lean_inc_ref(v_target_3925_);
v___x_3938_ = l_Lean_Meta_Rewrites_rewriteCandidates(v_hyps_3922_, v_moduleRef_3923_, v_target_3925_, v_forbidden_3926_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; lean_object* v_minHeartbeats_3941_; lean_object* v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v___y_3945_; lean_object* v___x_3968_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref_known(v___x_3938_, 1);
v___x_3968_ = l_Lean_getMaxHeartbeats___redArg(v_a_3933_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3970_; uint8_t v___x_3971_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v___x_3968_, 1);
v___x_3970_ = lean_unsigned_to_nat(0u);
v___x_3971_ = lean_nat_dec_eq(v_a_3969_, v___x_3970_);
lean_dec(v_a_3969_);
if (v___x_3971_ == 0)
{
lean_object* v___x_3972_; 
v___x_3972_ = l_Lean_getRemainingHeartbeats___redArg(v_a_3933_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v_a_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_a_3973_);
lean_dec_ref_known(v___x_3972_, 1);
v___x_3974_ = lean_nat_mul(v_leavePercentHeartbeats_3930_, v_a_3973_);
lean_dec(v_a_3973_);
v___x_3975_ = lean_unsigned_to_nat(100u);
v___x_3976_ = lean_nat_div(v___x_3974_, v___x_3975_);
lean_dec(v___x_3974_);
v_minHeartbeats_3941_ = v___x_3976_;
v___y_3942_ = v_a_3931_;
v___y_3943_ = v_a_3932_;
v___y_3944_ = v_a_3933_;
v___y_3945_ = v_a_3934_;
goto v___jp_3940_;
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec(v_a_3939_);
lean_dec_ref(v_mctx_3937_);
lean_dec(v_max_3929_);
lean_dec_ref(v_target_3925_);
lean_dec(v_goal_3924_);
v_a_3977_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3972_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3972_);
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
else
{
v_minHeartbeats_3941_ = v___x_3970_;
v___y_3942_ = v_a_3931_;
v___y_3943_ = v_a_3932_;
v___y_3944_ = v_a_3933_;
v___y_3945_ = v_a_3934_;
goto v___jp_3940_;
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec(v_a_3939_);
lean_dec_ref(v_mctx_3937_);
lean_dec(v_max_3929_);
lean_dec_ref(v_target_3925_);
lean_dec(v_goal_3924_);
v_a_3985_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3968_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3968_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
v___jp_3940_:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
lean_inc(v_max_3929_);
v___x_3946_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3946_, 0, v_max_3929_);
lean_ctor_set(v___x_3946_, 1, v_minHeartbeats_3941_);
lean_ctor_set(v___x_3946_, 2, v_goal_3924_);
lean_ctor_set(v___x_3946_, 3, v_target_3925_);
lean_ctor_set(v___x_3946_, 4, v_mctx_3937_);
lean_ctor_set_uint8(v___x_3946_, sizeof(void*)*5, v_stopAtRfl_3928_);
lean_ctor_set_uint8(v___x_3946_, sizeof(void*)*5 + 1, v_side_3927_);
v___x_3947_ = lean_obj_once(&l_Lean_Meta_Rewrites_findRewrites___closed__1, &l_Lean_Meta_Rewrites_findRewrites___closed__1_once, _init_l_Lean_Meta_Rewrites_findRewrites___closed__1);
v___x_3948_ = lean_mk_empty_array_with_capacity(v_max_3929_);
lean_dec(v_max_3929_);
v___x_3949_ = lean_array_to_list(v_a_3939_);
v___x_3950_ = l_Lean_Meta_Rewrites_takeListAux(v___x_3946_, v___x_3947_, v___x_3948_, v___x_3949_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
lean_dec(v___x_3949_);
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3959_; 
v_a_3951_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3953_ = v___x_3950_;
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3950_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3955_ = lean_array_to_list(v_a_3951_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 0, v___x_3955_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
else
{
lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3967_; 
v_a_3960_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3962_ = v___x_3950_;
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3950_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
lean_dec_ref(v_mctx_3937_);
lean_dec(v_max_3929_);
lean_dec_ref(v_target_3925_);
lean_dec(v_goal_3924_);
v_a_3993_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3938_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3938_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Rewrites_findRewrites___boxed(lean_object* v_hyps_4001_, lean_object* v_moduleRef_4002_, lean_object* v_goal_4003_, lean_object* v_target_4004_, lean_object* v_forbidden_4005_, lean_object* v_side_4006_, lean_object* v_stopAtRfl_4007_, lean_object* v_max_4008_, lean_object* v_leavePercentHeartbeats_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_){
_start:
{
uint8_t v_side_boxed_4015_; uint8_t v_stopAtRfl_boxed_4016_; lean_object* v_res_4017_; 
v_side_boxed_4015_ = lean_unbox(v_side_4006_);
v_stopAtRfl_boxed_4016_ = lean_unbox(v_stopAtRfl_4007_);
v_res_4017_ = l_Lean_Meta_Rewrites_findRewrites(v_hyps_4001_, v_moduleRef_4002_, v_goal_4003_, v_target_4004_, v_forbidden_4005_, v_side_boxed_4015_, v_stopAtRfl_boxed_4016_, v_max_4008_, v_leavePercentHeartbeats_4009_, v_a_4010_, v_a_4011_, v_a_4012_, v_a_4013_);
lean_dec(v_a_4013_);
lean_dec_ref(v_a_4012_);
lean_dec(v_a_4011_);
lean_dec_ref(v_a_4010_);
lean_dec(v_leavePercentHeartbeats_4009_);
lean_dec(v_forbidden_4005_);
lean_dec_ref(v_hyps_4001_);
return v_res_4017_;
}
}
lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Heartbeats(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_2316440083____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_414759425____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Rewrites_forwardWeight = _init_l_Lean_Meta_Rewrites_forwardWeight();
lean_mark_persistent(l_Lean_Meta_Rewrites_forwardWeight);
l_Lean_Meta_Rewrites_backwardWeight = _init_l_Lean_Meta_Rewrites_backwardWeight();
lean_mark_persistent(l_Lean_Meta_Rewrites_backwardWeight);
res = l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_initFn_00___x40_Lean_Meta_Tactic_Rewrites_1824551397____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_ext);
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask = _init_l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Rewrites_0__Lean_Meta_Rewrites_constantsPerImportTask);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Util_Heartbeats(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Rewrites(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Rewrites(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Rewrites(builtin);
}
#ifdef __cplusplus
}
#endif

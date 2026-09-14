// Lean compiler output
// Module: Lean.Meta.Tactic.LibrarySearch
// Imports: public import Lean.Meta.LazyDiscrTree public import Lean.Meta.Tactic.SolveByElim public import Lean.Meta.Tactic.Grind.Main public import Lean.Util.Heartbeats import Init.Grind.Util import Init.Try import Lean.Elab.Tactic.Basic import Init.Omega
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_getMaxHeartbeats___redArg(lean_object*);
lean_object* l_Lean_getRemainingHeartbeats___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapForallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_isDeprecated(lean_object*, lean_object*);
uint8_t l_Lean_Name_isMetaprogramming(lean_object*);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applySymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Result_hasFailed(lean_object*);
lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withSuppressedMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "librarySearch"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 126, 84, 67, 30, 19, 97, 104)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LibrarySearch"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lemmas"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(186, 205, 46, 93, 234, 75, 44, 75)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(147, 126, 84, 67, 30, 19, 97, 104)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(197, 54, 69, 18, 129, 165, 16, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Marker"};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 250, 206, 136, 19, 229, 9, 31)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__3_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_grindDischarger___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*14 + 40, .m_other = 14, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(10000) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1048576) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 1, 1, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 1, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Try"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 237, 160, 227, 109, 164, 83, 112)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_LibrarySearch_grindDischarger___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 13, 122, 73, 14, 49, 113, 49)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__1_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tryTrace"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__4_value),LEAN_SCALAR_PTR_LITERAL(222, 128, 230, 128, 87, 180, 97, 21)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__5_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "try\?"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__6 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__6_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__7 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__7_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__8 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__8_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__9 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__9_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__10 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__10_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_tryDischarger___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__11;
static const lean_array_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__12 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryDischarger___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__12_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___closed__13 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryDischarger___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__0_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__1_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__2_value;
static const lean_array_object l_Lean_Meta_LibrarySearch_solveByElim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__3_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_grindDischarger___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__4_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_solveByElim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_tryDischarger___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_solveByElim___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_solveByElim___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_DeclMod_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default;
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instInhabitedDeclMod;
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod = (const lean_object*)&l_Lean_Meta_LibrarySearch_instOrdDeclMod___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod = (const lean_object*)&l_Lean_Meta_LibrarySearch_instHashableDeclMod___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value;
static const lean_string_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__2 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__4 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__4_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__5 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__3_value),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__5_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__6 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__7 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__0_value),((lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__7_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys___closed__8 = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LibrarySearch_droppedKeys = (const lean_object*)&l_Lean_Meta_LibrarySearch_droppedKeys___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
static const lean_closure_object l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2;
static const lean_array_object l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3 = (const lean_object*)&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "abortSpeculation"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 179, 197, 182, 147, 201, 96, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 180, 178, 73, 239, 82, 182, 211)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
static lean_once_cell_t l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_isAbortSpeculation(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_isAbortSpeculation___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0_value;
static const lean_closure_object l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trying "};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " with mp"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " with mpr"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__10_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___closed__0 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LibrarySearch_tryOnEach___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__0_value)}};
static const lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___closed__1 = (const lean_object*)&l_Lean_Meta_LibrarySearch_tryOnEach___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_box(0);
v___x_7_ = l_unsafeCast___redArg(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_10_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_11_ = l_Lean_Name_str___override(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_13_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_14_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_15_ = l_Lean_Name_str___override(v___x_14_, v___x_13_);
return v___x_15_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__7_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_19_ = l_Lean_Name_str___override(v___x_18_, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_21_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__9_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_22_ = l_Lean_Name_str___override(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_25_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__10_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_26_ = l_Lean_Name_str___override(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__12_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_29_ = l_Lean_Name_num___override(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_31_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__13_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Name_str___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_34_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__14_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_37_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__15_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_38_ = l_Lean_Name_str___override(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__17_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_41_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__16_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_42_ = l_Lean_Name_str___override(v___x_41_, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__19_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_45_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__18_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_46_ = l_Lean_Name_str___override(v___x_45_, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__6_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_48_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__20_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_49_ = l_Lean_Name_str___override(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__8_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__21_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__0_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__22_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__11_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__23_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_unsigned_to_nat(4259869437u);
v___x_60_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_num___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_64_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__25_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_65_ = l_Lean_Name_str___override(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_68_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__27_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_69_ = l_Lean_Name_str___override(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_unsigned_to_nat(2u);
v___x_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__29_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_72_ = l_Lean_Name_num___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_75_ = 0;
v___x_76_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__30_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_77_ = l_Lean_registerTraceClass(v___x_74_, v___x_75_, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2____boxed(lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
return v_res_79_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_unsigned_to_nat(472600257u);
v___x_86_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__24_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_87_ = l_Lean_Name_num___override(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__26_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_);
v___x_90_ = l_Lean_Name_str___override(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__28_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_92_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_);
v___x_93_ = l_Lean_Name_str___override(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(2u);
v___x_95_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__4_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_);
v___x_96_ = l_Lean_Name_num___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_));
v___x_99_ = 0;
v___x_100_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__5_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_);
v___x_101_ = l_Lean_registerTraceClass(v___x_98_, v___x_99_, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2____boxed(lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(lean_object* v_x_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___closed__0));
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___lam__0___boxed(lean_object* v_x_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_x_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v_x_114_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger(lean_object* v_mvarId_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___y_152_; uint8_t v___y_153_; lean_object* v_a_158_; lean_object* v___y_162_; lean_object* v___x_172_; 
lean_inc(v_mvarId_145_);
v___x_172_ = l_Lean_MVarId_getType(v_mvarId_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_174_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc_n(v_a_173_, 2);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = l_Lean_Meta_getLevel(v_a_173_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_a_175_);
lean_dec_ref_known(v___x_174_, 1);
v___x_176_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__2));
v___x_177_ = lean_box(0);
v___x_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_175_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = l_Lean_Expr_const___override(v___x_176_, v___x_178_);
v___x_180_ = l_Lean_Expr_app___override(v___x_179_, v_a_173_);
v___x_181_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_182_ = lean_box(0);
v___x_183_ = l_Lean_MVarId_apply(v_mvarId_145_, v___x_180_, v___x_181_, v___x_182_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
if (lean_obj_tag(v_a_184_) == 1)
{
lean_object* v_tail_185_; 
v_tail_185_ = lean_ctor_get(v_a_184_, 1);
if (lean_obj_tag(v_tail_185_) == 0)
{
lean_object* v_head_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
lean_inc(v_tail_185_);
v_head_186_ = lean_ctor_get(v_a_184_, 0);
lean_inc(v_head_186_);
lean_dec_ref_known(v_a_184_, 2);
v___x_187_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__4));
v___x_188_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_187_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_210_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_210_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_210_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_210_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_Grind_main(v_head_186_, v_a_189_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_208_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_208_ == 0)
{
v___x_196_ = v___x_193_;
v_isShared_197_ = v_isSharedCheck_208_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_208_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
uint8_t v___x_198_; 
v___x_198_ = l_Lean_Meta_Grind_Result_hasFailed(v_a_194_);
lean_dec(v_a_194_);
if (v___x_198_ == 0)
{
lean_object* v___x_200_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 1);
lean_ctor_set(v___x_191_, 0, v_tail_185_);
v___x_200_ = v___x_191_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_tail_185_);
v___x_200_ = v_reuseFailAlloc_204_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_202_; 
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_200_);
v___x_202_ = v___x_196_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_200_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
else
{
lean_object* v___x_206_; 
lean_del_object(v___x_191_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_182_);
v___x_206_ = v___x_196_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_182_);
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
else
{
lean_object* v_a_209_; 
lean_del_object(v___x_191_);
v_a_209_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_193_, 1);
v_a_158_ = v_a_209_;
goto v___jp_157_;
}
}
}
else
{
lean_object* v_a_211_; 
lean_dec(v_head_186_);
v_a_211_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_188_, 1);
v_a_158_ = v_a_211_;
goto v___jp_157_;
}
}
else
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_184_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec_ref_known(v_a_184_, 2);
v___y_162_ = v___x_212_;
goto v___jp_161_;
}
}
else
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_184_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_184_);
v___y_162_ = v___x_213_;
goto v___jp_161_;
}
}
else
{
lean_object* v_a_214_; 
v_a_214_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v___x_183_, 1);
v_a_158_ = v_a_214_;
goto v___jp_157_;
}
}
else
{
lean_object* v_a_215_; 
lean_dec(v_a_173_);
lean_dec(v_mvarId_145_);
v_a_215_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_174_, 1);
v_a_158_ = v_a_215_;
goto v___jp_157_;
}
}
else
{
lean_object* v_a_216_; 
lean_dec(v_mvarId_145_);
v_a_216_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_216_);
lean_dec_ref_known(v___x_172_, 1);
v_a_158_ = v_a_216_;
goto v___jp_157_;
}
v___jp_151_:
{
if (v___y_153_ == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec_ref(v___y_152_);
v___x_154_ = lean_box(0);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___y_152_);
return v___x_156_;
}
}
v___jp_157_:
{
uint8_t v___x_159_; 
v___x_159_ = l_Lean_Exception_isInterrupt(v_a_158_);
if (v___x_159_ == 0)
{
uint8_t v___x_160_; 
lean_inc_ref(v_a_158_);
v___x_160_ = l_Lean_Exception_isRuntime(v_a_158_);
v___y_152_ = v_a_158_;
v___y_153_ = v___x_160_;
goto v___jp_151_;
}
else
{
v___y_152_ = v_a_158_;
v___y_153_ = v___x_159_;
goto v___jp_151_;
}
}
v___jp_161_:
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_171_; 
v_a_163_ = lean_ctor_get(v___y_162_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___y_162_);
if (v_isSharedCheck_171_ == 0)
{
v___x_165_ = v___y_162_;
v_isShared_166_ = v_isSharedCheck_171_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___y_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_171_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v_a_167_; lean_object* v___x_169_; 
v_a_167_ = lean_ctor_get(v_a_163_, 0);
lean_inc(v_a_167_);
lean_dec(v_a_163_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v_a_167_);
v___x_169_ = v___x_165_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_grindDischarger___boxed(lean_object* v_mvarId_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Meta_LibrarySearch_grindDischarger(v_mvarId_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
return v_res_223_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(uint8_t v___x_224_, lean_object* v_x_225_){
_start:
{
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___lam__1___boxed(lean_object* v___x_226_, lean_object* v_x_227_){
_start:
{
uint8_t v___x_3816__boxed_228_; uint8_t v_res_229_; lean_object* v_r_230_; 
v___x_3816__boxed_228_ = lean_unbox(v___x_226_);
v_res_229_ = l_Lean_Meta_LibrarySearch_tryDischarger___lam__1(v___x_3816__boxed_228_, v_x_227_);
lean_dec(v_x_227_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_tryDischarger___closed__11(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Array_mkArray0___redArg();
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger(lean_object* v_mvarId_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___y_274_; uint8_t v___y_275_; lean_object* v_a_280_; lean_object* v___y_284_; lean_object* v___x_294_; 
lean_inc(v_mvarId_267_);
v___x_294_ = l_Lean_MVarId_getType(v_mvarId_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_296_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc_n(v_a_295_, 2);
lean_dec_ref_known(v___x_294_, 1);
v___x_296_ = l_Lean_Meta_getLevel(v_a_295_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
v___x_298_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__1));
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_300_, 0, v_a_297_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = l_Lean_Expr_const___override(v___x_298_, v___x_300_);
v___x_302_ = l_Lean_Expr_app___override(v___x_301_, v_a_295_);
v___x_303_ = 0;
v___x_304_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_305_ = lean_box(0);
v___x_306_ = l_Lean_MVarId_apply(v_mvarId_267_, v___x_302_, v___x_304_, v___x_305_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_357_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_357_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_357_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_357_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
if (lean_obj_tag(v_a_307_) == 1)
{
lean_object* v_tail_311_; 
v_tail_311_ = lean_ctor_get(v_a_307_, 1);
if (lean_obj_tag(v_tail_311_) == 0)
{
lean_object* v_head_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_353_; 
lean_inc(v_tail_311_);
v_head_312_ = lean_ctor_get(v_a_307_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v_a_307_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v_a_307_, 1);
lean_dec(v_unused_354_);
v___x_314_ = v_a_307_;
v_isShared_315_ = v_isSharedCheck_353_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_head_312_);
lean_dec(v_a_307_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_353_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v_ref_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v_ref_316_ = lean_ctor_get(v_a_270_, 2);
v___x_317_ = l_Lean_SourceInfo_fromRef(v_ref_316_, v___x_303_);
v___x_318_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__5));
v___x_319_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__6));
lean_inc(v___x_317_);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 2);
lean_ctor_set(v___x_314_, 1, v___x_319_);
lean_ctor_set(v___x_314_, 0, v___x_317_);
v___x_321_ = v___x_314_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v___x_319_);
v___x_321_ = v_reuseFailAlloc_352_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_322_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__8));
v___x_323_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__10));
v___x_324_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_tryDischarger___closed__11, &l_Lean_Meta_LibrarySearch_tryDischarger___closed__11_once, _init_l_Lean_Meta_LibrarySearch_tryDischarger___closed__11);
lean_inc_n(v___x_317_, 2);
v___x_325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_325_, 0, v___x_317_);
lean_ctor_set(v___x_325_, 1, v___x_323_);
lean_ctor_set(v___x_325_, 2, v___x_324_);
v___x_326_ = l_Lean_Syntax_node1(v___x_317_, v___x_322_, v___x_325_);
v___x_327_ = l_Lean_Syntax_node2(v___x_317_, v___x_318_, v___x_321_, v___x_326_);
v___x_328_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_328_, 0, v___x_327_);
v___x_329_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSuppressedMessages___boxed), 11, 2);
lean_closure_set(v___x_329_, 0, lean_box(0));
lean_closure_set(v___x_329_, 1, v___x_328_);
v___x_330_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___boxed), 9, 2);
lean_closure_set(v___x_330_, 0, v_head_312_);
lean_closure_set(v___x_330_, 1, v___x_329_);
v___x_331_ = lean_box(1);
v___x_332_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryDischarger___closed__13));
v___x_333_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_333_, 0, v___x_299_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
lean_ctor_set(v___x_333_, 2, v_tail_311_);
lean_ctor_set(v___x_333_, 3, v___x_299_);
lean_ctor_set(v___x_333_, 4, v___x_299_);
lean_ctor_set(v___x_333_, 5, v___x_331_);
lean_ctor_set(v___x_333_, 6, v___x_299_);
v___x_334_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_330_, v___x_332_, v___x_333_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_350_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_350_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_350_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_350_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v_fst_339_; uint8_t v___x_340_; 
v_fst_339_ = lean_ctor_get(v_a_335_, 0);
lean_inc(v_fst_339_);
lean_dec(v_a_335_);
v___x_340_ = l_List_isEmpty___redArg(v_fst_339_);
lean_dec(v_fst_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_342_; 
lean_del_object(v___x_309_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_305_);
v___x_342_ = v___x_337_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_305_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
else
{
lean_object* v___x_345_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 1);
lean_ctor_set(v___x_309_, 0, v_tail_311_);
v___x_345_ = v___x_309_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_tail_311_);
v___x_345_ = v_reuseFailAlloc_349_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_347_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_345_);
v___x_347_ = v___x_337_;
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
}
}
}
else
{
lean_object* v_a_351_; 
lean_del_object(v___x_309_);
v_a_351_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_334_, 1);
v_a_280_ = v_a_351_;
goto v___jp_279_;
}
}
}
}
else
{
lean_object* v___x_355_; 
lean_del_object(v___x_309_);
v___x_355_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_307_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
lean_dec_ref_known(v_a_307_, 2);
v___y_284_ = v___x_355_;
goto v___jp_283_;
}
}
else
{
lean_object* v___x_356_; 
lean_del_object(v___x_309_);
v___x_356_ = l_Lean_Meta_LibrarySearch_grindDischarger___lam__0(v_a_307_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
lean_dec(v_a_307_);
v___y_284_ = v___x_356_;
goto v___jp_283_;
}
}
}
else
{
lean_object* v_a_358_; 
v_a_358_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_306_, 1);
v_a_280_ = v_a_358_;
goto v___jp_279_;
}
}
else
{
lean_object* v_a_359_; 
lean_dec(v_a_295_);
lean_dec(v_mvarId_267_);
v_a_359_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_359_);
lean_dec_ref_known(v___x_296_, 1);
v_a_280_ = v_a_359_;
goto v___jp_279_;
}
}
else
{
lean_object* v_a_360_; 
lean_dec(v_mvarId_267_);
v_a_360_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_294_, 1);
v_a_280_ = v_a_360_;
goto v___jp_279_;
}
v___jp_273_:
{
if (v___y_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec_ref(v___y_274_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; 
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___y_274_);
return v___x_278_;
}
}
v___jp_279_:
{
uint8_t v___x_281_; 
v___x_281_ = l_Lean_Exception_isInterrupt(v_a_280_);
if (v___x_281_ == 0)
{
uint8_t v___x_282_; 
lean_inc_ref(v_a_280_);
v___x_282_ = l_Lean_Exception_isRuntime(v_a_280_);
v___y_274_ = v_a_280_;
v___y_275_ = v___x_282_;
goto v___jp_273_;
}
else
{
v___y_274_ = v_a_280_;
v___y_275_ = v___x_281_;
goto v___jp_273_;
}
}
v___jp_283_:
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
v_a_285_ = lean_ctor_get(v___y_284_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___y_284_);
if (v_isSharedCheck_293_ == 0)
{
v___x_287_ = v___y_284_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___y_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v_a_289_; lean_object* v___x_291_; 
v_a_289_ = lean_ctor_get(v_a_285_, 0);
lean_inc(v_a_289_);
lean_dec(v_a_285_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v_a_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryDischarger___boxed(lean_object* v_mvarId_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Meta_LibrarySearch_tryDischarger(v_mvarId_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__0___boxed(lean_object* v_x_377_, lean_object* v_x_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__0(v_x_377_, v_x_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v_x_378_);
lean_dec(v_x_377_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1(lean_object* v_x_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
uint8_t v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = 0;
v___x_392_ = lean_box(v___x_391_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__1___boxed(lean_object* v_x_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__1(v_x_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v_x_394_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(lean_object* v_msgData_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; lean_object* v_env_408_; lean_object* v___x_409_; lean_object* v_toCold_410_; lean_object* v_mctx_411_; lean_object* v_lctx_412_; lean_object* v_options_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_407_ = lean_st_ref_get(v___y_405_);
v_env_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc_ref(v_env_408_);
lean_dec(v___x_407_);
v___x_409_ = lean_st_ref_get(v___y_403_);
v_toCold_410_ = lean_ctor_get(v___y_404_, 0);
v_mctx_411_ = lean_ctor_get(v___x_409_, 0);
lean_inc_ref(v_mctx_411_);
lean_dec(v___x_409_);
v_lctx_412_ = lean_ctor_get(v___y_402_, 2);
v_options_413_ = lean_ctor_get(v_toCold_410_, 2);
lean_inc_ref(v_options_413_);
lean_inc_ref(v_lctx_412_);
v___x_414_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_414_, 0, v_env_408_);
lean_ctor_set(v___x_414_, 1, v_mctx_411_);
lean_ctor_set(v___x_414_, 2, v_lctx_412_);
lean_ctor_set(v___x_414_, 3, v_options_413_);
v___x_415_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v_msgData_401_);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0___boxed(lean_object* v_msgData_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msgData_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(lean_object* v_msg_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_ref_430_; lean_object* v___x_431_; lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_440_; 
v_ref_430_ = lean_ctor_get(v___y_427_, 2);
v___x_431_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msg_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_440_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_440_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_440_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
lean_inc(v_ref_430_);
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v_ref_430_);
lean_ctor_set(v___x_436_, 1, v_a_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 1);
lean_ctor_set(v___x_434_, 0, v___x_436_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg___boxed(lean_object* v_msg_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v_msg_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_447_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__0));
v___x_450_ = l_Lean_stringToMessageData(v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2(lean_object* v_x_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_458_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_457_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___lam__2___boxed(lean_object* v_x_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Meta_LibrarySearch_solveByElim___lam__2(v_x_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v_x_459_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim(lean_object* v_required_473_, uint8_t v_exfalso_474_, lean_object* v_goals_475_, lean_object* v_maxDepth_476_, uint8_t v_grind_477_, uint8_t v_try_x3f_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v___x_484_; uint8_t v_transparency_485_; lean_object* v___f_486_; lean_object* v___f_487_; lean_object* v___f_488_; uint8_t v___x_489_; lean_object* v___x_490_; uint8_t v___x_491_; lean_object* v___y_493_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_484_ = l_Lean_Meta_Context_config(v_a_479_);
v_transparency_485_ = lean_ctor_get_uint8(v___x_484_, 9);
lean_dec_ref(v___x_484_);
v___f_486_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__0));
v___f_487_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__1));
v___f_488_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__2));
v___x_489_ = 1;
v___x_490_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_490_, 0, v_maxDepth_476_);
lean_ctor_set(v___x_490_, 1, v___f_486_);
lean_ctor_set(v___x_490_, 2, v___f_487_);
lean_ctor_set(v___x_490_, 3, v___f_488_);
lean_ctor_set_uint8(v___x_490_, sizeof(void*)*4, v___x_489_);
v___x_491_ = 0;
v___x_512_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_grindDischarger___closed__3));
v___x_513_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_513_, 0, v___x_490_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*2, v_transparency_485_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*2 + 1, v___x_489_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*2 + 2, v_exfalso_474_);
v___x_514_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_514_, 0, v___x_513_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_489_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1 + 1, v___x_489_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1 + 2, v___x_491_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1 + 3, v___x_491_);
if (v_try_x3f_478_ == 0)
{
if (v_grind_477_ == 0)
{
v___y_493_ = v___x_514_;
goto v___jp_492_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__4));
v___x_516_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v___x_514_, v___x_515_);
v___y_493_ = v___x_516_;
goto v___jp_492_;
}
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__5));
v___x_518_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v___x_514_, v___x_517_);
v___y_493_ = v___x_518_;
goto v___jp_492_;
}
v___jp_492_:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_494_ = lean_box(0);
v___x_495_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_solveByElim___closed__3));
v___x_496_ = l_Lean_Meta_SolveByElim_mkAssumptionSet(v___x_491_, v___x_491_, v___x_494_, v___x_494_, v___x_495_, v_a_479_, v_a_480_, v_a_481_, v_a_482_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v_fst_498_; lean_object* v_snd_499_; uint8_t v___x_500_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
v_fst_498_ = lean_ctor_get(v_a_497_, 0);
lean_inc(v_fst_498_);
v_snd_499_ = lean_ctor_get(v_a_497_, 1);
lean_inc(v_snd_499_);
lean_dec(v_a_497_);
v___x_500_ = l_List_isEmpty___redArg(v_required_473_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(v___y_493_, v_required_473_);
v___x_502_ = l_Lean_Meta_SolveByElim_solveByElim(v___x_501_, v_fst_498_, v_snd_499_, v_goals_475_, v_a_479_, v_a_480_, v_a_481_, v_a_482_);
return v___x_502_;
}
else
{
lean_object* v___x_503_; 
lean_dec(v_required_473_);
v___x_503_ = l_Lean_Meta_SolveByElim_solveByElim(v___y_493_, v_fst_498_, v_snd_499_, v_goals_475_, v_a_479_, v_a_480_, v_a_481_, v_a_482_);
return v___x_503_;
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_dec_ref(v___y_493_);
lean_dec(v_goals_475_);
lean_dec(v_required_473_);
v_a_504_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_496_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_496_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_solveByElim___boxed(lean_object* v_required_519_, lean_object* v_exfalso_520_, lean_object* v_goals_521_, lean_object* v_maxDepth_522_, lean_object* v_grind_523_, lean_object* v_try_x3f_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
uint8_t v_exfalso_boxed_530_; uint8_t v_grind_boxed_531_; uint8_t v_try_x3f_boxed_532_; lean_object* v_res_533_; 
v_exfalso_boxed_530_ = lean_unbox(v_exfalso_520_);
v_grind_boxed_531_ = lean_unbox(v_grind_523_);
v_try_x3f_boxed_532_ = lean_unbox(v_try_x3f_524_);
v_res_533_ = l_Lean_Meta_LibrarySearch_solveByElim(v_required_519_, v_exfalso_boxed_530_, v_goals_521_, v_maxDepth_522_, v_grind_boxed_531_, v_try_x3f_boxed_532_, v_a_525_, v_a_526_, v_a_527_, v_a_528_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(lean_object* v_00_u03b1_534_, lean_object* v_msg_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v_msg_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___boxed(lean_object* v_00_u03b1_542_, lean_object* v_msg_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0(v_00_u03b1_542_, v_msg_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(uint8_t v_x_550_){
_start:
{
switch(v_x_550_)
{
case 0:
{
lean_object* v___x_551_; 
v___x_551_ = lean_unsigned_to_nat(0u);
return v___x_551_;
}
case 1:
{
lean_object* v___x_552_; 
v___x_552_ = lean_unsigned_to_nat(1u);
return v___x_552_;
}
default: 
{
lean_object* v___x_553_; 
v___x_553_ = lean_unsigned_to_nat(2u);
return v___x_553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx___boxed(lean_object* v_x_554_){
_start:
{
uint8_t v_x_boxed_555_; lean_object* v_res_556_; 
v_x_boxed_555_ = lean_unbox(v_x_554_);
v_res_556_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(v_x_boxed_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(lean_object* v_k_557_){
_start:
{
lean_inc(v_k_557_);
return v_k_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg___boxed(lean_object* v_k_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___redArg(v_k_558_);
lean_dec(v_k_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(lean_object* v_motive_560_, lean_object* v_ctorIdx_561_, uint8_t v_t_562_, lean_object* v_h_563_, lean_object* v_k_564_){
_start:
{
lean_inc(v_k_564_);
return v_k_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ctorElim___boxed(lean_object* v_motive_565_, lean_object* v_ctorIdx_566_, lean_object* v_t_567_, lean_object* v_h_568_, lean_object* v_k_569_){
_start:
{
uint8_t v_t_boxed_570_; lean_object* v_res_571_; 
v_t_boxed_570_ = lean_unbox(v_t_567_);
v_res_571_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorElim(v_motive_565_, v_ctorIdx_566_, v_t_boxed_570_, v_h_568_, v_k_569_);
lean_dec(v_k_569_);
lean_dec(v_ctorIdx_566_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(lean_object* v_none_572_){
_start:
{
lean_inc(v_none_572_);
return v_none_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg___boxed(lean_object* v_none_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_Meta_LibrarySearch_DeclMod_none_elim___redArg(v_none_573_);
lean_dec(v_none_573_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim(lean_object* v_motive_575_, uint8_t v_t_576_, lean_object* v_h_577_, lean_object* v_none_578_){
_start:
{
lean_inc(v_none_578_);
return v_none_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_none_elim___boxed(lean_object* v_motive_579_, lean_object* v_t_580_, lean_object* v_h_581_, lean_object* v_none_582_){
_start:
{
uint8_t v_t_boxed_583_; lean_object* v_res_584_; 
v_t_boxed_583_ = lean_unbox(v_t_580_);
v_res_584_ = l_Lean_Meta_LibrarySearch_DeclMod_none_elim(v_motive_579_, v_t_boxed_583_, v_h_581_, v_none_582_);
lean_dec(v_none_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(lean_object* v_mp_585_){
_start:
{
lean_inc(v_mp_585_);
return v_mp_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg___boxed(lean_object* v_mp_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___redArg(v_mp_586_);
lean_dec(v_mp_586_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(lean_object* v_motive_588_, uint8_t v_t_589_, lean_object* v_h_590_, lean_object* v_mp_591_){
_start:
{
lean_inc(v_mp_591_);
return v_mp_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mp_elim___boxed(lean_object* v_motive_592_, lean_object* v_t_593_, lean_object* v_h_594_, lean_object* v_mp_595_){
_start:
{
uint8_t v_t_boxed_596_; lean_object* v_res_597_; 
v_t_boxed_596_ = lean_unbox(v_t_593_);
v_res_597_ = l_Lean_Meta_LibrarySearch_DeclMod_mp_elim(v_motive_592_, v_t_boxed_596_, v_h_594_, v_mp_595_);
lean_dec(v_mp_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(lean_object* v_mpr_598_){
_start:
{
lean_inc(v_mpr_598_);
return v_mpr_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg___boxed(lean_object* v_mpr_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___redArg(v_mpr_599_);
lean_dec(v_mpr_599_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(lean_object* v_motive_601_, uint8_t v_t_602_, lean_object* v_h_603_, lean_object* v_mpr_604_){
_start:
{
lean_inc(v_mpr_604_);
return v_mpr_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim___boxed(lean_object* v_motive_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_mpr_608_){
_start:
{
uint8_t v_t_boxed_609_; lean_object* v_res_610_; 
v_t_boxed_609_ = lean_unbox(v_t_606_);
v_res_610_ = l_Lean_Meta_LibrarySearch_DeclMod_mpr_elim(v_motive_605_, v_t_boxed_609_, v_h_607_, v_mpr_608_);
lean_dec(v_mpr_608_);
return v_res_610_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_DeclMod_ofNat(lean_object* v_n_611_){
_start:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_nat_dec_le(v_n_611_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = lean_unsigned_to_nat(1u);
v___x_615_ = lean_nat_dec_le(v_n_611_, v___x_614_);
if (v___x_615_ == 0)
{
uint8_t v___x_616_; 
v___x_616_ = 2;
return v___x_616_;
}
else
{
uint8_t v___x_617_; 
v___x_617_ = 1;
return v___x_617_;
}
}
else
{
uint8_t v___x_618_; 
v___x_618_ = 0;
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_DeclMod_ofNat___boxed(lean_object* v_n_619_){
_start:
{
uint8_t v_res_620_; lean_object* v_r_621_; 
v_res_620_ = l_Lean_Meta_LibrarySearch_DeclMod_ofNat(v_n_619_);
lean_dec(v_n_619_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(uint8_t v_x_622_, uint8_t v_y_623_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_624_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(v_x_622_);
v___x_625_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(v_y_623_);
v___x_626_ = lean_nat_dec_eq(v___x_624_, v___x_625_);
lean_dec(v___x_625_);
lean_dec(v___x_624_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod___boxed(lean_object* v_x_627_, lean_object* v_y_628_){
_start:
{
uint8_t v_x_20__boxed_629_; uint8_t v_y_21__boxed_630_; uint8_t v_res_631_; lean_object* v_r_632_; 
v_x_20__boxed_629_ = lean_unbox(v_x_627_);
v_y_21__boxed_630_ = lean_unbox(v_y_628_);
v_res_631_ = l_Lean_Meta_LibrarySearch_instDecidableEqDeclMod(v_x_20__boxed_629_, v_y_21__boxed_630_);
v_r_632_ = lean_box(v_res_631_);
return v_r_632_;
}
}
static uint8_t _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default(void){
_start:
{
uint8_t v___x_633_; 
v___x_633_ = 0;
return v___x_633_;
}
}
static uint8_t _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod(void){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = 0;
return v___x_634_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(uint8_t v_x_635_, uint8_t v_y_636_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(v_x_635_);
v___x_638_ = l_Lean_Meta_LibrarySearch_DeclMod_ctorIdx(v_y_636_);
v___x_639_ = lean_nat_dec_lt(v___x_637_, v___x_638_);
if (v___x_639_ == 0)
{
uint8_t v___x_640_; 
v___x_640_ = lean_nat_dec_eq(v___x_637_, v___x_638_);
lean_dec(v___x_638_);
lean_dec(v___x_637_);
if (v___x_640_ == 0)
{
uint8_t v___x_641_; 
v___x_641_ = 2;
return v___x_641_;
}
else
{
uint8_t v___x_642_; 
v___x_642_ = 1;
return v___x_642_;
}
}
else
{
uint8_t v___x_643_; 
lean_dec(v___x_638_);
lean_dec(v___x_637_);
v___x_643_ = 0;
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord___boxed(lean_object* v_x_644_, lean_object* v_y_645_){
_start:
{
uint8_t v_x_30__boxed_646_; uint8_t v_y_31__boxed_647_; uint8_t v_res_648_; lean_object* v_r_649_; 
v_x_30__boxed_646_ = lean_unbox(v_x_644_);
v_y_31__boxed_647_ = lean_unbox(v_y_645_);
v_res_648_ = l_Lean_Meta_LibrarySearch_instOrdDeclMod_ord(v_x_30__boxed_646_, v_y_31__boxed_647_);
v_r_649_ = lean_box(v_res_648_);
return v_r_649_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(uint8_t v_x_652_){
_start:
{
switch(v_x_652_)
{
case 0:
{
uint64_t v___x_653_; 
v___x_653_ = 0ULL;
return v___x_653_;
}
case 1:
{
uint64_t v___x_654_; 
v___x_654_ = 1ULL;
return v___x_654_;
}
default: 
{
uint64_t v___x_655_; 
v___x_655_ = 2ULL;
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash___boxed(lean_object* v_x_656_){
_start:
{
uint8_t v_x_40__boxed_657_; uint64_t v_res_658_; lean_object* v_r_659_; 
v_x_40__boxed_657_ = lean_unbox(v_x_656_);
v_res_658_ = l_Lean_Meta_LibrarySearch_instHashableDeclMod_hash(v_x_40__boxed_657_);
v_r_659_ = lean_box_uint64(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(lean_object* v_k_662_, lean_object* v_b_663_, lean_object* v_c_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v___x_670_; 
lean_inc(v___y_668_);
lean_inc_ref(v___y_667_);
lean_inc(v___y_666_);
lean_inc_ref(v___y_665_);
v___x_670_ = lean_apply_7(v_k_662_, v_b_663_, v_c_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, lean_box(0));
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed(lean_object* v_k_671_, lean_object* v_b_672_, lean_object* v_c_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0(v_k_671_, v_b_672_, v_c_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(lean_object* v_type_680_, lean_object* v_k_681_, uint8_t v_cleanupAnnotations_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___f_688_; uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___f_688_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_688_, 0, v_k_681_);
v___x_689_ = 0;
v___x_690_ = lean_box(0);
v___x_691_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_689_, v___x_690_, v_type_680_, v___f_688_, v_cleanupAnnotations_682_, v___x_689_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
v_a_700_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_691_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_691_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg___boxed(lean_object* v_type_708_, lean_object* v_k_709_, lean_object* v_cleanupAnnotations_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_716_; lean_object* v_res_717_; 
v_cleanupAnnotations_boxed_716_ = lean_unbox(v_cleanupAnnotations_710_);
v_res_717_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_708_, v_k_709_, v_cleanupAnnotations_boxed_716_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(lean_object* v_00_u03b1_718_, lean_object* v_type_719_, lean_object* v_k_720_, uint8_t v_cleanupAnnotations_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_719_, v_k_720_, v_cleanupAnnotations_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___boxed(lean_object* v_00_u03b1_728_, lean_object* v_type_729_, lean_object* v_k_730_, lean_object* v_cleanupAnnotations_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_737_; lean_object* v_res_738_; 
v_cleanupAnnotations_boxed_737_ = lean_unbox(v_cleanupAnnotations_731_);
v_res_738_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0(v_00_u03b1_728_, v_type_729_, v_k_730_, v_cleanupAnnotations_boxed_737_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(lean_object* v_name_745_, lean_object* v_x_746_, lean_object* v_type_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_753_ = 0;
v___x_754_ = lean_box(v___x_753_);
lean_inc(v_name_745_);
v___x_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_755_, 0, v_name_745_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_type_747_, v___x_755_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_806_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_806_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_806_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_806_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v_key_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v_key_761_ = lean_ctor_get(v_a_757_, 0);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_mk_empty_array_with_capacity(v___x_762_);
lean_inc(v_a_757_);
v___x_764_ = lean_array_push(v___x_763_, v_a_757_);
v___x_765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___closed__2));
v___x_766_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_761_, v___x_765_);
if (v___x_766_ == 0)
{
lean_object* v___x_768_; 
lean_dec(v_a_757_);
lean_dec(v_name_745_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_764_);
v___x_768_ = v___x_759_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_764_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
else
{
lean_object* v___x_770_; uint8_t v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
lean_del_object(v___x_759_);
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = 1;
v___x_772_ = lean_box(v___x_771_);
lean_inc(v_name_745_);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_name_745_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
lean_inc(v_a_757_);
v___x_774_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_a_757_, v___x_770_, v___x_773_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = lean_array_push(v___x_764_, v_a_775_);
v___x_777_ = 2;
v___x_778_ = lean_box(v___x_777_);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v_name_745_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_a_757_, v___x_762_, v___x_779_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_789_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_789_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = lean_array_push(v___x_776_, v_a_781_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_785_);
v___x_787_ = v___x_783_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v___x_776_);
v_a_790_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_780_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_780_);
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
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v___x_764_);
lean_dec(v_a_757_);
lean_dec(v_name_745_);
v_a_798_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_774_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_774_);
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
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_name_745_);
v_a_807_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_756_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_756_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed(lean_object* v_name_815_, lean_object* v_x_816_, lean_object* v_type_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0(v_name_815_, v_x_816_, v_type_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec_ref(v_x_816_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(lean_object* v_name_826_, lean_object* v_c_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v_env_835_; uint8_t v___x_836_; 
lean_inc_n(v_name_826_, 2);
v___f_833_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___lam__0___boxed), 8, 1);
lean_closure_set(v___f_833_, 0, v_name_826_);
v___x_834_ = lean_st_ref_get(v_a_831_);
v_env_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc_ref(v_env_835_);
lean_dec(v___x_834_);
v___x_836_ = l_Lean_Linter_isDeprecated(v_env_835_, v_name_826_);
if (v___x_836_ == 0)
{
uint8_t v___x_837_; 
v___x_837_ = l_Lean_Name_isMetaprogramming(v_name_826_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; lean_object* v_type_839_; lean_object* v___x_840_; 
v___x_838_ = l_Lean_AsyncConstantInfo_toConstantVal(v_c_827_);
v_type_839_ = lean_ctor_get(v___x_838_, 2);
lean_inc_ref(v_type_839_);
lean_dec_ref(v___x_838_);
v___x_840_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport_spec__0___redArg(v_type_839_, v___f_833_, v___x_837_, v_a_828_, v_a_829_, v_a_830_, v_a_831_);
return v___x_840_;
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec_ref(v___f_833_);
lean_dec_ref(v_c_827_);
v___x_841_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0));
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec_ref(v___f_833_);
lean_dec_ref(v_c_827_);
lean_dec(v_name_826_);
v___x_843_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___closed__0));
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport___boxed(lean_object* v_name_845_, lean_object* v_c_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_addImport(v_name_845_, v_c_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_box(0);
v___x_855_ = lean_st_mk_ref(v___x_854_);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2____boxed(lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
return v_res_858_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_unsigned_to_nat(6500u);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = lean_st_mk_ref(v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2____boxed(lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
return v_res_890_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1(void){
_start:
{
lean_object* v_droppedRef_892_; lean_object* v___x_893_; 
v_droppedRef_892_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v_droppedRef_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls(lean_object* v_ty_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_900_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext;
v___x_901_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__0));
v___x_902_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_droppedKeys));
v___x_903_ = lean_unsigned_to_nat(6500u);
v___x_904_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1, &l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1_once, _init_l_Lean_Meta_LibrarySearch_libSearchFindDecls___closed__1);
v___x_905_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v___x_900_, v___x_901_, v___x_902_, v___x_903_, v___x_904_, v_ty_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_libSearchFindDecls___boxed(lean_object* v_ty_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Meta_LibrarySearch_libSearchFindDecls(v_ty_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
return v_res_912_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = lean_box(0);
v___x_917_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_getStarLemmas___closed__1));
v___x_918_ = l_Lean_mkConst(v___x_917_, v___x_916_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas(lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_ref_926_; lean_object* v___x_927_; 
v_ref_926_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt;
v___x_927_ = lean_st_ref_get(v_ref_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2, &l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2_once, _init_l_Lean_Meta_LibrarySearch_getStarLemmas___closed__2);
v___x_929_ = l_Lean_Meta_LibrarySearch_libSearchFindDecls(v___x_928_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_929_, 0);
lean_dec(v_unused_943_);
v___x_931_ = v___x_929_;
v_isShared_932_ = v_isSharedCheck_942_;
goto v_resetjp_930_;
}
else
{
lean_dec(v___x_929_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_942_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_st_ref_get(v_ref_926_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_getStarLemmas___closed__3));
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v___x_934_);
v___x_936_ = v___x_931_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
else
{
lean_object* v_val_938_; lean_object* v___x_940_; 
v_val_938_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_val_938_);
lean_dec_ref_known(v___x_933_, 1);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v_val_938_);
v___x_940_ = v___x_931_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_val_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
return v___x_929_;
}
}
else
{
lean_object* v_val_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_val_944_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_927_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_val_944_);
lean_dec(v___x_927_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set_tag(v___x_946_, 0);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_val_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_getStarLemmas___boxed(lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_LibrarySearch_getStarLemmas(v_a_952_, v_a_953_, v_a_954_, v_a_955_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(uint8_t v___x_958_, lean_object* v___x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
if (v___x_958_ == 0)
{
lean_object* v___x_965_; 
v___x_965_ = l_Lean_getRemainingHeartbeats___redArg(v___y_962_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_975_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_975_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
uint8_t v___x_970_; lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_970_ = lean_nat_dec_lt(v_a_966_, v___x_959_);
lean_dec(v_a_966_);
v___x_971_ = lean_box(v___x_970_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_971_);
v___x_973_ = v___x_968_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
v_a_976_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_965_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_965_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
else
{
uint8_t v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_984_ = 0;
v___x_985_ = lean_box(v___x_984_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed(lean_object* v___x_987_, lean_object* v___x_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
uint8_t v___x_649__boxed_994_; lean_object* v_res_995_; 
v___x_649__boxed_994_ = lean_unbox(v___x_987_);
v_res_995_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0(v___x_649__boxed_994_, v___x_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___x_988_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(lean_object* v_leavePercent_996_, lean_object* v_a_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_getMaxHeartbeats___redArg(v_a_997_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = l_Lean_getRemainingHeartbeats___redArg(v_a_997_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1016_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1016_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1016_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___y_1012_; lean_object* v___x_1014_; 
v___x_1006_ = lean_nat_mul(v_a_1002_, v_leavePercent_996_);
lean_dec(v_a_1002_);
v___x_1007_ = lean_unsigned_to_nat(100u);
v___x_1008_ = lean_nat_div(v___x_1006_, v___x_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_nat_dec_eq(v_a_1000_, v___x_1009_);
lean_dec(v_a_1000_);
v___x_1011_ = lean_box(v___x_1010_);
v___y_1012_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___y_1012_, 0, v___x_1011_);
lean_closure_set(v___y_1012_, 1, v___x_1008_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___y_1012_);
v___x_1014_ = v___x_1004_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___y_1012_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_1000_);
v_a_1017_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1001_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1001_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
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
v_a_1025_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_999_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_999_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg___boxed(lean_object* v_leavePercent_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercent_1033_, v_a_1034_);
lean_dec_ref(v_a_1034_);
lean_dec(v_leavePercent_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(lean_object* v_leavePercent_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercent_1037_, v_a_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___boxed(lean_object* v_leavePercent_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck(v_leavePercent_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
lean_dec(v_a_1046_);
lean_dec_ref(v_a_1045_);
lean_dec(v_leavePercent_1044_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(lean_object* v_upperBound_1051_, lean_object* v_x_1052_, lean_object* v_f_1053_, lean_object* v_y_1054_, lean_object* v_g_1055_, lean_object* v_a_1056_, lean_object* v_b_1057_){
_start:
{
uint8_t v___x_1058_; 
v___x_1058_ = lean_nat_dec_lt(v_a_1056_, v_upperBound_1051_);
if (v___x_1058_ == 0)
{
lean_dec(v_a_1056_);
lean_dec(v_g_1055_);
lean_dec(v_f_1053_);
return v_b_1057_;
}
else
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1059_ = lean_array_fget_borrowed(v_x_1052_, v_a_1056_);
lean_inc(v_f_1053_);
lean_inc(v___x_1059_);
v___x_1060_ = lean_apply_1(v_f_1053_, v___x_1059_);
v___x_1061_ = lean_array_push(v_b_1057_, v___x_1060_);
v___x_1062_ = lean_array_fget_borrowed(v_y_1054_, v_a_1056_);
lean_inc(v_g_1055_);
lean_inc(v___x_1062_);
v___x_1063_ = lean_apply_1(v_g_1055_, v___x_1062_);
v___x_1064_ = lean_array_push(v___x_1061_, v___x_1063_);
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_nat_add(v_a_1056_, v___x_1065_);
lean_dec(v_a_1056_);
v_a_1056_ = v___x_1066_;
v_b_1057_ = v___x_1064_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg___boxed(lean_object* v_upperBound_1068_, lean_object* v_x_1069_, lean_object* v_f_1070_, lean_object* v_y_1071_, lean_object* v_g_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v_upperBound_1068_, v_x_1069_, v_f_1070_, v_y_1071_, v_g_1072_, v_a_1073_, v_b_1074_);
lean_dec_ref(v_y_1071_);
lean_dec_ref(v_x_1069_);
lean_dec(v_upperBound_1068_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(lean_object* v_g_1076_, size_t v_sz_1077_, size_t v_i_1078_, lean_object* v_bs_1079_){
_start:
{
uint8_t v___x_1080_; 
v___x_1080_ = lean_usize_dec_lt(v_i_1078_, v_sz_1077_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; 
lean_dec(v_g_1076_);
v___x_1081_ = l_unsafeCast___redArg(v_bs_1079_);
lean_dec_ref(v_bs_1079_);
return v___x_1081_;
}
else
{
lean_object* v_v_1082_; lean_object* v___x_1083_; lean_object* v_bs_x27_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; size_t v___x_1087_; size_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_v_1082_ = lean_array_uget(v_bs_1079_, v_i_1078_);
v___x_1083_ = lean_unsigned_to_nat(0u);
v_bs_x27_1084_ = lean_array_uset(v_bs_1079_, v_i_1078_, v___x_1083_);
v___x_1085_ = l_unsafeCast___redArg(v_v_1082_);
lean_dec(v_v_1082_);
lean_inc(v_g_1076_);
v___x_1086_ = lean_apply_1(v_g_1076_, v___x_1085_);
v___x_1087_ = ((size_t)1ULL);
v___x_1088_ = lean_usize_add(v_i_1078_, v___x_1087_);
v___x_1089_ = l_unsafeCast___redArg(v___x_1086_);
lean_dec(v___x_1086_);
v___x_1090_ = lean_array_uset(v_bs_x27_1084_, v_i_1078_, v___x_1089_);
v_i_1078_ = v___x_1088_;
v_bs_1079_ = v___x_1090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg___boxed(lean_object* v_g_1092_, lean_object* v_sz_1093_, lean_object* v_i_1094_, lean_object* v_bs_1095_){
_start:
{
size_t v_sz_boxed_1096_; size_t v_i_boxed_1097_; lean_object* v_res_1098_; 
v_sz_boxed_1096_ = lean_unbox_usize(v_sz_1093_);
lean_dec(v_sz_1093_);
v_i_boxed_1097_ = lean_unbox_usize(v_i_1094_);
lean_dec(v_i_1094_);
v_res_1098_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1092_, v_sz_boxed_1096_, v_i_boxed_1097_, v_bs_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg(lean_object* v_f_1099_, lean_object* v_x_1100_, lean_object* v_g_1101_, lean_object* v_y_1102_){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v_res_1106_; lean_object* v___y_1108_; uint8_t v___x_1126_; 
v___x_1103_ = lean_array_get_size(v_x_1100_);
v___x_1104_ = lean_array_get_size(v_y_1102_);
v___x_1105_ = lean_nat_add(v___x_1103_, v___x_1104_);
v_res_1106_ = lean_mk_empty_array_with_capacity(v___x_1105_);
lean_dec(v___x_1105_);
v___x_1126_ = lean_nat_dec_le(v___x_1103_, v___x_1104_);
if (v___x_1126_ == 0)
{
v___y_1108_ = v___x_1104_;
goto v___jp_1107_;
}
else
{
v___y_1108_ = v___x_1103_;
goto v___jp_1107_;
}
v___jp_1107_:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v___x_1109_ = lean_unsigned_to_nat(0u);
lean_inc(v_g_1101_);
lean_inc(v_f_1099_);
v___x_1110_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v___y_1108_, v_x_1100_, v_f_1099_, v_y_1102_, v_g_1101_, v___x_1109_, v_res_1106_);
v___x_1111_ = lean_nat_dec_lt(v___y_1108_, v___x_1103_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; size_t v_sz_1113_; size_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
lean_dec(v_f_1099_);
v___x_1112_ = l_Array_extract___redArg(v_y_1102_, v___y_1108_, v___x_1104_);
v_sz_1113_ = lean_array_size(v___x_1112_);
v___x_1114_ = ((size_t)0ULL);
v___x_1115_ = l_unsafeCast___redArg(v___x_1112_);
lean_dec_ref(v___x_1112_);
v___x_1116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1101_, v_sz_1113_, v___x_1114_, v___x_1115_);
v___x_1117_ = l_unsafeCast___redArg(v___x_1116_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = l_Array_append___redArg(v___x_1110_, v___x_1117_);
lean_dec(v___x_1117_);
return v___x_1118_;
}
else
{
lean_object* v___x_1119_; size_t v_sz_1120_; size_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v_g_1101_);
v___x_1119_ = l_Array_extract___redArg(v_x_1100_, v___y_1108_, v___x_1103_);
v_sz_1120_ = lean_array_size(v___x_1119_);
v___x_1121_ = ((size_t)0ULL);
v___x_1122_ = l_unsafeCast___redArg(v___x_1119_);
lean_dec_ref(v___x_1119_);
v___x_1123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_f_1099_, v_sz_1120_, v___x_1121_, v___x_1122_);
v___x_1124_ = l_unsafeCast___redArg(v___x_1123_);
lean_dec_ref(v___x_1123_);
v___x_1125_ = l_Array_append___redArg(v___x_1110_, v___x_1124_);
lean_dec(v___x_1124_);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___redArg___boxed(lean_object* v_f_1127_, lean_object* v_x_1128_, lean_object* v_g_1129_, lean_object* v_y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v_f_1127_, v_x_1128_, v_g_1129_, v_y_1130_);
lean_dec_ref(v_y_1130_);
lean_dec_ref(v_x_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith(lean_object* v_00_u03b1_1132_, lean_object* v_00_u03b2_1133_, lean_object* v_00_u03b3_1134_, lean_object* v_f_1135_, lean_object* v_x_1136_, lean_object* v_g_1137_, lean_object* v_y_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v_f_1135_, v_x_1136_, v_g_1137_, v_y_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_interleaveWith___boxed(lean_object* v_00_u03b1_1140_, lean_object* v_00_u03b2_1141_, lean_object* v_00_u03b3_1142_, lean_object* v_f_1143_, lean_object* v_x_1144_, lean_object* v_g_1145_, lean_object* v_y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_Meta_LibrarySearch_interleaveWith(v_00_u03b1_1140_, v_00_u03b2_1141_, v_00_u03b3_1142_, v_f_1143_, v_x_1144_, v_g_1145_, v_y_1146_);
lean_dec_ref(v_y_1146_);
lean_dec_ref(v_x_1144_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(lean_object* v_00_u03b2_1148_, lean_object* v_00_u03b3_1149_, lean_object* v_g_1150_, size_t v_sz_1151_, size_t v_i_1152_, lean_object* v_bs_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___redArg(v_g_1150_, v_sz_1151_, v_i_1152_, v_bs_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0___boxed(lean_object* v_00_u03b2_1155_, lean_object* v_00_u03b3_1156_, lean_object* v_g_1157_, lean_object* v_sz_1158_, lean_object* v_i_1159_, lean_object* v_bs_1160_){
_start:
{
size_t v_sz_boxed_1161_; size_t v_i_boxed_1162_; lean_object* v_res_1163_; 
v_sz_boxed_1161_ = lean_unbox_usize(v_sz_1158_);
lean_dec(v_sz_1158_);
v_i_boxed_1162_ = lean_unbox_usize(v_i_1159_);
lean_dec(v_i_1159_);
v_res_1163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__0(v_00_u03b2_1155_, v_00_u03b3_1156_, v_g_1157_, v_sz_boxed_1161_, v_i_boxed_1162_, v_bs_1160_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(lean_object* v_00_u03b3_1164_, lean_object* v_upperBound_1165_, lean_object* v_00_u03b1_1166_, lean_object* v_x_1167_, lean_object* v_f_1168_, lean_object* v_00_u03b2_1169_, lean_object* v_y_1170_, lean_object* v_g_1171_, lean_object* v_inst_1172_, lean_object* v_R_1173_, lean_object* v_a_1174_, lean_object* v_b_1175_, lean_object* v_c_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___redArg(v_upperBound_1165_, v_x_1167_, v_f_1168_, v_y_1170_, v_g_1171_, v_a_1174_, v_b_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1___boxed(lean_object* v_00_u03b3_1178_, lean_object* v_upperBound_1179_, lean_object* v_00_u03b1_1180_, lean_object* v_x_1181_, lean_object* v_f_1182_, lean_object* v_00_u03b2_1183_, lean_object* v_y_1184_, lean_object* v_g_1185_, lean_object* v_inst_1186_, lean_object* v_R_1187_, lean_object* v_a_1188_, lean_object* v_b_1189_, lean_object* v_c_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LibrarySearch_interleaveWith_spec__1(v_00_u03b3_1178_, v_upperBound_1179_, v_00_u03b1_1180_, v_x_1181_, v_f_1182_, v_00_u03b2_1183_, v_y_1184_, v_g_1185_, v_inst_1186_, v_R_1187_, v_a_1188_, v_b_1189_, v_c_1190_);
lean_dec_ref(v_y_1184_);
lean_dec_ref(v_x_1181_);
lean_dec(v_upperBound_1179_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_));
v___x_1200_ = l_Lean_registerInternalExceptionId(v___x_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2____boxed(lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
return v_res_1202_;
}
}
static lean_object* _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0(void){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1203_ = lean_box(0);
v___x_1204_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
v___x_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___x_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(lean_object* v_inst_1206_){
_start:
{
lean_object* v_throw_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_throw_1207_ = lean_ctor_get(v_inst_1206_, 0);
lean_inc(v_throw_1207_);
lean_dec_ref(v_inst_1206_);
v___x_1208_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0, &l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once, _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0);
v___x_1209_ = lean_apply_2(v_throw_1207_, lean_box(0), v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation(lean_object* v_m_1210_, lean_object* v_00_u03b1_1211_, lean_object* v_inst_1212_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_Meta_LibrarySearch_abortSpeculation___redArg(v_inst_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LibrarySearch_isAbortSpeculation(lean_object* v_x_1214_){
_start:
{
if (lean_obj_tag(v_x_1214_) == 1)
{
lean_object* v_id_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v_id_1215_ = lean_ctor_get(v_x_1214_, 0);
v___x_1216_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId;
v___x_1217_ = l_Lean_instBEqInternalExceptionId_beq(v_id_1215_, v___x_1216_);
return v___x_1217_;
}
else
{
uint8_t v___x_1218_; 
v___x_1218_ = 0;
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_isAbortSpeculation___boxed(lean_object* v_x_1219_){
_start:
{
uint8_t v_res_1220_; lean_object* v_r_1221_; 
v_res_1220_ = l_Lean_Meta_LibrarySearch_isAbortSpeculation(v_x_1219_);
lean_dec_ref(v_x_1219_);
v_r_1221_ = lean_box(v_res_1220_);
return v_r_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(lean_object* v_x_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v___x_1228_; 
v___x_1228_ = l_Lean_Meta_saveState___redArg(v___y_1224_, v___y_1226_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1230_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
lean_inc(v___y_1226_);
lean_inc_ref(v___y_1225_);
lean_inc(v___y_1224_);
lean_inc_ref(v___y_1223_);
v___x_1230_ = lean_apply_5(v_x_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, lean_box(0));
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1239_; 
lean_dec(v_a_1229_);
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_a_1231_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1269_; 
v_a_1240_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1242_ = v___x_1230_;
v_isShared_1243_ = v_isSharedCheck_1269_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1230_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1269_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
uint8_t v___y_1245_; uint8_t v___x_1267_; 
v___x_1267_ = l_Lean_Exception_isInterrupt(v_a_1240_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; 
lean_inc(v_a_1240_);
v___x_1268_ = l_Lean_Exception_isRuntime(v_a_1240_);
v___y_1245_ = v___x_1268_;
goto v___jp_1244_;
}
else
{
v___y_1245_ = v___x_1267_;
goto v___jp_1244_;
}
v___jp_1244_:
{
if (v___y_1245_ == 0)
{
lean_object* v___x_1246_; 
lean_del_object(v___x_1242_);
lean_dec(v_a_1240_);
v___x_1246_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1229_, v___y_1224_, v___y_1226_);
lean_dec(v_a_1229_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1254_; 
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1254_ == 0)
{
lean_object* v_unused_1255_; 
v_unused_1255_ = lean_ctor_get(v___x_1246_, 0);
lean_dec(v_unused_1255_);
v___x_1248_ = v___x_1246_;
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
else
{
lean_dec(v___x_1246_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1250_ = lean_box(0);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1250_);
v___x_1252_ = v___x_1248_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
v_a_1256_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1246_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1246_);
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
lean_object* v___x_1265_; 
lean_dec(v_a_1229_);
if (v_isShared_1243_ == 0)
{
v___x_1265_ = v___x_1242_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1240_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec_ref(v_x_1222_);
v_a_1270_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1228_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1228_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg___boxed(lean_object* v_x_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v_x_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(lean_object* v_00_u03b1_1285_, lean_object* v_x_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v_x_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___boxed(lean_object* v_00_u03b1_1293_, lean_object* v_x_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0(v_00_u03b1_1293_, v_x_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(lean_object* v_e_1301_, lean_object* v___y_1302_){
_start:
{
uint8_t v___x_1304_; 
v___x_1304_ = l_Lean_Expr_hasMVar(v_e_1301_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1305_, 0, v_e_1301_);
return v___x_1305_;
}
else
{
lean_object* v___x_1306_; lean_object* v_mctx_1307_; lean_object* v___x_1308_; lean_object* v_fst_1309_; lean_object* v_snd_1310_; lean_object* v___x_1311_; lean_object* v_cache_1312_; lean_object* v_zetaDeltaFVarIds_1313_; lean_object* v_postponed_1314_; lean_object* v_diag_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1324_; 
v___x_1306_ = lean_st_ref_get(v___y_1302_);
v_mctx_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc_ref(v_mctx_1307_);
lean_dec(v___x_1306_);
v___x_1308_ = l_Lean_instantiateMVarsCore(v_mctx_1307_, v_e_1301_);
v_fst_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_fst_1309_);
v_snd_1310_ = lean_ctor_get(v___x_1308_, 1);
lean_inc(v_snd_1310_);
lean_dec_ref(v___x_1308_);
v___x_1311_ = lean_st_ref_take(v___y_1302_);
v_cache_1312_ = lean_ctor_get(v___x_1311_, 1);
v_zetaDeltaFVarIds_1313_ = lean_ctor_get(v___x_1311_, 2);
v_postponed_1314_ = lean_ctor_get(v___x_1311_, 3);
v_diag_1315_ = lean_ctor_get(v___x_1311_, 4);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1324_ == 0)
{
lean_object* v_unused_1325_; 
v_unused_1325_ = lean_ctor_get(v___x_1311_, 0);
lean_dec(v_unused_1325_);
v___x_1317_ = v___x_1311_;
v_isShared_1318_ = v_isSharedCheck_1324_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_diag_1315_);
lean_inc(v_postponed_1314_);
lean_inc(v_zetaDeltaFVarIds_1313_);
lean_inc(v_cache_1312_);
lean_dec(v___x_1311_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1324_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v_snd_1310_);
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_snd_1310_);
lean_ctor_set(v_reuseFailAlloc_1323_, 1, v_cache_1312_);
lean_ctor_set(v_reuseFailAlloc_1323_, 2, v_zetaDeltaFVarIds_1313_);
lean_ctor_set(v_reuseFailAlloc_1323_, 3, v_postponed_1314_);
lean_ctor_set(v_reuseFailAlloc_1323_, 4, v_diag_1315_);
v___x_1320_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = lean_st_ref_put(v___y_1302_, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_fst_1309_);
return v___x_1322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg___boxed(lean_object* v_e_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_e_1326_, v___y_1327_);
lean_dec(v___y_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(lean_object* v_e_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_e_1330_, v___y_1332_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___boxed(lean_object* v_e_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1(v_e_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0(lean_object* v___x_1344_, lean_object* v_x_1345_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v_x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(lean_object* v___x_1347_, size_t v_sz_1348_, size_t v_i_1349_, lean_object* v_bs_1350_){
_start:
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_usize_dec_lt(v_i_1349_, v_sz_1348_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
lean_dec_ref(v___x_1347_);
v___x_1352_ = l_unsafeCast___redArg(v_bs_1350_);
lean_dec_ref(v_bs_1350_);
return v___x_1352_;
}
else
{
lean_object* v_v_1353_; lean_object* v___x_1354_; lean_object* v_bs_x27_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v_v_1353_ = lean_array_uget(v_bs_1350_, v_i_1349_);
v___x_1354_ = lean_unsigned_to_nat(0u);
v_bs_x27_1355_ = lean_array_uset(v_bs_1350_, v_i_1349_, v___x_1354_);
v___x_1356_ = l_unsafeCast___redArg(v_v_1353_);
lean_dec(v_v_1353_);
lean_inc_ref(v___x_1347_);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1347_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = ((size_t)1ULL);
v___x_1359_ = lean_usize_add(v_i_1349_, v___x_1358_);
v___x_1360_ = l_unsafeCast___redArg(v___x_1357_);
lean_dec_ref_known(v___x_1357_, 2);
v___x_1361_ = lean_array_uset(v_bs_x27_1355_, v_i_1349_, v___x_1360_);
v_i_1349_ = v___x_1359_;
v_bs_1350_ = v___x_1361_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2___boxed(lean_object* v___x_1363_, lean_object* v_sz_1364_, lean_object* v_i_1365_, lean_object* v_bs_1366_){
_start:
{
size_t v_sz_boxed_1367_; size_t v_i_boxed_1368_; lean_object* v_res_1369_; 
v_sz_boxed_1367_ = lean_unbox_usize(v_sz_1364_);
lean_dec(v_sz_1364_);
v_i_boxed_1368_ = lean_unbox_usize(v_i_1365_);
lean_dec(v_i_1365_);
v_res_1369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(v___x_1363_, v_sz_boxed_1367_, v_i_boxed_1368_, v_bs_1366_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm(lean_object* v_searchFn_1370_, lean_object* v_goal_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v___x_1377_; 
lean_inc(v_goal_1371_);
v___x_1377_ = l_Lean_MVarId_getType(v_goal_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
lean_inc_ref(v_searchFn_1370_);
lean_inc(v_a_1375_);
lean_inc_ref(v_a_1374_);
lean_inc(v_a_1373_);
lean_inc_ref(v_a_1372_);
v___x_1379_ = lean_apply_6(v_searchFn_1370_, v_a_1378_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, lean_box(0));
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v_a_1380_; lean_object* v___x_1381_; lean_object* v_mctx_1382_; lean_object* v___x_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_a_1380_);
lean_dec_ref_known(v___x_1379_, 1);
v___x_1381_ = lean_st_ref_get(v_a_1373_);
v_mctx_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc_ref_n(v_mctx_1382_, 2);
lean_dec(v___x_1381_);
lean_inc(v_goal_1371_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v_goal_1371_);
lean_ctor_set(v___x_1383_, 1, v_mctx_1382_);
lean_inc_ref(v___x_1383_);
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0), 2, 1);
lean_closure_set(v___f_1384_, 0, v___x_1383_);
v___x_1385_ = lean_alloc_closure((void*)(l_Lean_MVarId_applySymm___boxed), 6, 1);
lean_closure_set(v___x_1385_, 0, v_goal_1371_);
v___x_1386_ = l_Lean_observing_x3f___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__0___redArg(v___x_1385_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1448_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1448_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1448_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
if (lean_obj_tag(v_a_1387_) == 1)
{
lean_object* v_val_1391_; lean_object* v___x_1392_; 
lean_del_object(v___x_1389_);
lean_dec_ref_known(v___x_1383_, 2);
v_val_1391_ = lean_ctor_get(v_a_1387_, 0);
lean_inc_n(v_val_1391_, 2);
lean_dec_ref_known(v_a_1387_, 1);
v___x_1392_ = l_Lean_MVarId_getType(v_val_1391_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1394_; lean_object* v_a_1395_; lean_object* v___x_1396_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1394_ = l_Lean_instantiateMVars___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__1___redArg(v_a_1393_, v_a_1373_);
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref(v___x_1394_);
lean_inc(v_a_1375_);
lean_inc_ref(v_a_1374_);
lean_inc(v_a_1373_);
lean_inc_ref(v_a_1372_);
v___x_1396_ = lean_apply_6(v_searchFn_1370_, v_a_1395_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, lean_box(0));
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1423_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1399_ = v___x_1396_;
v_isShared_1400_ = v_isSharedCheck_1423_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1396_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1423_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v_mctx_1402_; lean_object* v___x_1403_; lean_object* v___f_1404_; lean_object* v___x_1405_; lean_object* v_cache_1406_; lean_object* v_zetaDeltaFVarIds_1407_; lean_object* v_postponed_1408_; lean_object* v_diag_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1421_; 
v___x_1401_ = lean_st_ref_get(v_a_1373_);
v_mctx_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc_ref(v_mctx_1402_);
lean_dec(v___x_1401_);
v___x_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1403_, 0, v_val_1391_);
lean_ctor_set(v___x_1403_, 1, v_mctx_1402_);
v___f_1404_ = lean_alloc_closure((void*)(l_Lean_Meta_LibrarySearch_librarySearchSymm___lam__0), 2, 1);
lean_closure_set(v___f_1404_, 0, v___x_1403_);
v___x_1405_ = lean_st_ref_take(v_a_1373_);
v_cache_1406_ = lean_ctor_get(v___x_1405_, 1);
v_zetaDeltaFVarIds_1407_ = lean_ctor_get(v___x_1405_, 2);
v_postponed_1408_ = lean_ctor_get(v___x_1405_, 3);
v_diag_1409_ = lean_ctor_get(v___x_1405_, 4);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; 
v_unused_1422_ = lean_ctor_get(v___x_1405_, 0);
lean_dec(v_unused_1422_);
v___x_1411_ = v___x_1405_;
v_isShared_1412_ = v_isSharedCheck_1421_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_diag_1409_);
lean_inc(v_postponed_1408_);
lean_inc(v_zetaDeltaFVarIds_1407_);
lean_inc(v_cache_1406_);
lean_dec(v___x_1405_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1421_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v_mctx_1382_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_mctx_1382_);
lean_ctor_set(v_reuseFailAlloc_1420_, 1, v_cache_1406_);
lean_ctor_set(v_reuseFailAlloc_1420_, 2, v_zetaDeltaFVarIds_1407_);
lean_ctor_set(v_reuseFailAlloc_1420_, 3, v_postponed_1408_);
lean_ctor_set(v_reuseFailAlloc_1420_, 4, v_diag_1409_);
v___x_1414_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1415_ = lean_st_ref_put(v_a_1373_, v___x_1414_);
v___x_1416_ = l_Lean_Meta_LibrarySearch_interleaveWith___redArg(v___f_1384_, v_a_1380_, v___f_1404_, v_a_1397_);
lean_dec(v_a_1397_);
lean_dec(v_a_1380_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1416_);
v___x_1418_ = v___x_1399_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec(v_val_1391_);
lean_dec_ref(v___f_1384_);
lean_dec_ref(v_mctx_1382_);
lean_dec(v_a_1380_);
v_a_1424_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1396_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1396_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_val_1391_);
lean_dec_ref(v___f_1384_);
lean_dec_ref(v_mctx_1382_);
lean_dec(v_a_1380_);
lean_dec_ref(v_searchFn_1370_);
v_a_1432_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1392_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1392_);
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
size_t v_sz_1440_; size_t v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
lean_dec(v_a_1387_);
lean_dec_ref(v___f_1384_);
lean_dec_ref(v_mctx_1382_);
lean_dec_ref(v_searchFn_1370_);
v_sz_1440_ = lean_array_size(v_a_1380_);
v___x_1441_ = ((size_t)0ULL);
v___x_1442_ = l_unsafeCast___redArg(v_a_1380_);
lean_dec(v_a_1380_);
v___x_1443_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LibrarySearch_librarySearchSymm_spec__2(v___x_1383_, v_sz_1440_, v___x_1441_, v___x_1442_);
v___x_1444_ = l_unsafeCast___redArg(v___x_1443_);
lean_dec_ref(v___x_1443_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1444_);
v___x_1446_ = v___x_1389_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
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
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
lean_dec_ref(v___f_1384_);
lean_dec_ref_known(v___x_1383_, 2);
lean_dec_ref(v_mctx_1382_);
lean_dec(v_a_1380_);
lean_dec_ref(v_searchFn_1370_);
v_a_1449_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1386_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1386_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_goal_1371_);
lean_dec_ref(v_searchFn_1370_);
v_a_1457_ = lean_ctor_get(v___x_1379_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1379_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1379_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1379_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_goal_1371_);
lean_dec_ref(v_searchFn_1370_);
v_a_1465_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1377_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1377_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearchSymm___boxed(lean_object* v_searchFn_1473_, lean_object* v_goal_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lean_Meta_LibrarySearch_librarySearchSymm(v_searchFn_1473_, v_goal_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_);
lean_dec(v_a_1478_);
lean_dec_ref(v_a_1477_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(lean_object* v_e_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1491_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___closed__1));
v___x_1492_ = lean_unsigned_to_nat(1u);
v___x_1493_ = lean_mk_empty_array_with_capacity(v___x_1492_);
v___x_1494_ = lean_array_push(v___x_1493_, v_e_1485_);
v___x_1495_ = l_Lean_Meta_mkAppM(v___x_1491_, v___x_1494_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0___boxed(lean_object* v_e_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__0(v_e_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(lean_object* v_e_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1513_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___closed__1));
v___x_1514_ = lean_unsigned_to_nat(1u);
v___x_1515_ = lean_mk_empty_array_with_capacity(v___x_1514_);
v___x_1516_ = lean_array_push(v___x_1515_, v_e_1507_);
v___x_1517_ = l_Lean_Meta_mkAppM(v___x_1513_, v___x_1516_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1___boxed(lean_object* v_e_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___lam__1(v_e_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(lean_object* v_lem_1527_, uint8_t v_mod_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v___f_1534_; lean_object* v___f_1535_; lean_object* v___x_1536_; 
v___f_1534_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__0));
v___f_1535_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___closed__1));
v___x_1536_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_lem_1527_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
if (lean_obj_tag(v___x_1536_) == 0)
{
switch(v_mod_1528_)
{
case 0:
{
return v___x_1536_;
}
case 1:
{
lean_object* v_a_1537_; lean_object* v___x_1538_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1538_ = l_Lean_Meta_mapForallTelescope(v___f_1534_, v_a_1537_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
return v___x_1538_;
}
default: 
{
lean_object* v_a_1539_; lean_object* v___x_1540_; 
v_a_1539_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1540_ = l_Lean_Meta_mapForallTelescope(v___f_1535_, v_a_1539_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
return v___x_1540_;
}
}
}
else
{
return v___x_1536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma___boxed(lean_object* v_lem_1541_, lean_object* v_mod_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_){
_start:
{
uint8_t v_mod_boxed_1548_; lean_object* v_res_1549_; 
v_mod_boxed_1548_ = lean_unbox(v_mod_1542_);
v_res_1549_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_lem_1541_, v_mod_boxed_1548_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_);
lean_dec(v_a_1546_);
lean_dec_ref(v_a_1545_);
lean_dec(v_a_1544_);
lean_dec_ref(v_a_1543_);
return v_res_1549_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(lean_object* v_e_1550_){
_start:
{
switch(lean_obj_tag(v_e_1550_))
{
case 0:
{
uint8_t v___x_1551_; 
v___x_1551_ = 1;
return v___x_1551_;
}
case 1:
{
uint8_t v___x_1552_; 
v___x_1552_ = 1;
return v___x_1552_;
}
case 2:
{
uint8_t v___x_1553_; 
v___x_1553_ = 1;
return v___x_1553_;
}
default: 
{
uint8_t v___x_1554_; 
v___x_1554_ = 0;
return v___x_1554_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar___boxed(lean_object* v_e_1555_){
_start:
{
uint8_t v_res_1556_; lean_object* v_r_1557_; 
v_res_1556_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_isVar(v_e_1555_);
lean_dec_ref(v_e_1555_);
v_r_1557_ = lean_box(v_res_1556_);
return v_r_1557_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1558_ = lean_unsigned_to_nat(32u);
v___x_1559_ = lean_mk_empty_array_with_capacity(v___x_1558_);
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1561_ = ((size_t)5ULL);
v___x_1562_ = lean_unsigned_to_nat(0u);
v___x_1563_ = lean_unsigned_to_nat(32u);
v___x_1564_ = lean_mk_empty_array_with_capacity(v___x_1563_);
v___x_1565_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__0);
v___x_1566_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
lean_ctor_set(v___x_1566_, 1, v___x_1564_);
lean_ctor_set(v___x_1566_, 2, v___x_1562_);
lean_ctor_set(v___x_1566_, 3, v___x_1562_);
lean_ctor_set_usize(v___x_1566_, 4, v___x_1561_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v_traceState_1570_; lean_object* v_traces_1571_; lean_object* v___x_1572_; lean_object* v_traceState_1573_; lean_object* v_env_1574_; lean_object* v_nextMacroScope_1575_; lean_object* v_ngen_1576_; lean_object* v_auxDeclNGen_1577_; lean_object* v_cache_1578_; lean_object* v_messages_1579_; lean_object* v_infoState_1580_; lean_object* v_snapshotTasks_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1600_; 
v___x_1569_ = lean_st_ref_get(v___y_1567_);
v_traceState_1570_ = lean_ctor_get(v___x_1569_, 4);
lean_inc_ref(v_traceState_1570_);
lean_dec(v___x_1569_);
v_traces_1571_ = lean_ctor_get(v_traceState_1570_, 0);
lean_inc_ref(v_traces_1571_);
lean_dec_ref(v_traceState_1570_);
v___x_1572_ = lean_st_ref_take(v___y_1567_);
v_traceState_1573_ = lean_ctor_get(v___x_1572_, 4);
v_env_1574_ = lean_ctor_get(v___x_1572_, 0);
v_nextMacroScope_1575_ = lean_ctor_get(v___x_1572_, 1);
v_ngen_1576_ = lean_ctor_get(v___x_1572_, 2);
v_auxDeclNGen_1577_ = lean_ctor_get(v___x_1572_, 3);
v_cache_1578_ = lean_ctor_get(v___x_1572_, 5);
v_messages_1579_ = lean_ctor_get(v___x_1572_, 6);
v_infoState_1580_ = lean_ctor_get(v___x_1572_, 7);
v_snapshotTasks_1581_ = lean_ctor_get(v___x_1572_, 8);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1583_ = v___x_1572_;
v_isShared_1584_ = v_isSharedCheck_1600_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_snapshotTasks_1581_);
lean_inc(v_infoState_1580_);
lean_inc(v_messages_1579_);
lean_inc(v_cache_1578_);
lean_inc(v_traceState_1573_);
lean_inc(v_auxDeclNGen_1577_);
lean_inc(v_ngen_1576_);
lean_inc(v_nextMacroScope_1575_);
lean_inc(v_env_1574_);
lean_dec(v___x_1572_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1600_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
uint64_t v_tid_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1598_; 
v_tid_1585_ = lean_ctor_get_uint64(v_traceState_1573_, sizeof(void*)*1);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_traceState_1573_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v_traceState_1573_, 0);
lean_dec(v_unused_1599_);
v___x_1587_ = v_traceState_1573_;
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
else
{
lean_dec(v_traceState_1573_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1598_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1589_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___closed__1);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v___x_1589_);
v___x_1591_ = v___x_1587_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1589_);
lean_ctor_set_uint64(v_reuseFailAlloc_1597_, sizeof(void*)*1, v_tid_1585_);
v___x_1591_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1593_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 4, v___x_1591_);
v___x_1593_ = v___x_1583_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_env_1574_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v_nextMacroScope_1575_);
lean_ctor_set(v_reuseFailAlloc_1596_, 2, v_ngen_1576_);
lean_ctor_set(v_reuseFailAlloc_1596_, 3, v_auxDeclNGen_1577_);
lean_ctor_set(v_reuseFailAlloc_1596_, 4, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1596_, 5, v_cache_1578_);
lean_ctor_set(v_reuseFailAlloc_1596_, 6, v_messages_1579_);
lean_ctor_set(v_reuseFailAlloc_1596_, 7, v_infoState_1580_);
lean_ctor_set(v_reuseFailAlloc_1596_, 8, v_snapshotTasks_1581_);
v___x_1593_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = lean_st_ref_put(v___y_1567_, v___x_1593_);
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v_traces_1571_);
return v___x_1595_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg___boxed(lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v___y_1601_);
lean_dec(v___y_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v___y_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___boxed(lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0(v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
return v_res_1615_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(lean_object* v_opts_1616_, lean_object* v_opt_1617_){
_start:
{
lean_object* v_name_1618_; lean_object* v_defValue_1619_; lean_object* v_map_1620_; lean_object* v___x_1621_; 
v_name_1618_ = lean_ctor_get(v_opt_1617_, 0);
v_defValue_1619_ = lean_ctor_get(v_opt_1617_, 1);
v_map_1620_ = lean_ctor_get(v_opts_1616_, 0);
v___x_1621_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1620_, v_name_1618_);
if (lean_obj_tag(v___x_1621_) == 0)
{
uint8_t v___x_1622_; 
v___x_1622_ = lean_unbox(v_defValue_1619_);
return v___x_1622_;
}
else
{
lean_object* v_val_1623_; 
v_val_1623_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_val_1623_);
lean_dec_ref_known(v___x_1621_, 1);
if (lean_obj_tag(v_val_1623_) == 1)
{
uint8_t v_v_1624_; 
v_v_1624_ = lean_ctor_get_uint8(v_val_1623_, 0);
lean_dec_ref_known(v_val_1623_, 0);
return v_v_1624_;
}
else
{
uint8_t v___x_1625_; 
lean_dec(v_val_1623_);
v___x_1625_ = lean_unbox(v_defValue_1619_);
return v___x_1625_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1___boxed(lean_object* v_opts_1626_, lean_object* v_opt_1627_){
_start:
{
uint8_t v_res_1628_; lean_object* v_r_1629_; 
v_res_1628_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1626_, v_opt_1627_);
lean_dec_ref(v_opt_1627_);
lean_dec_ref(v_opts_1626_);
v_r_1629_ = lean_box(v_res_1628_);
return v_r_1629_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__0));
v___x_1632_ = l_Lean_stringToMessageData(v___x_1631_);
return v___x_1632_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__2));
v___x_1635_ = l_Lean_stringToMessageData(v___x_1634_);
return v___x_1635_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__5));
v___x_1640_ = l_Lean_MessageData_ofFormat(v___x_1639_);
return v___x_1640_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__8));
v___x_1645_ = l_Lean_MessageData_ofFormat(v___x_1644_);
return v___x_1645_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__11));
v___x_1650_ = l_Lean_MessageData_ofFormat(v___x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(lean_object* v_fst_1651_, uint8_t v_snd_1652_, lean_object* v_x_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___y_1663_; 
v___x_1659_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__1);
v___x_1660_ = l_Lean_MessageData_ofName(v_fst_1651_);
v___x_1661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
switch(v_snd_1652_)
{
case 0:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__6);
v___y_1663_ = v___x_1668_;
goto v___jp_1662_;
}
case 1:
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__9);
v___y_1663_ = v___x_1669_;
goto v___jp_1662_;
}
default: 
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__12);
v___y_1663_ = v___x_1670_;
goto v___jp_1662_;
}
}
v___jp_1662_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
lean_inc_ref(v___y_1663_);
v___x_1664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1661_);
lean_ctor_set(v___x_1664_, 1, v___y_1663_);
v___x_1665_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__3);
v___x_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed(lean_object* v_fst_1671_, lean_object* v_snd_1672_, lean_object* v_x_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
uint8_t v_snd_11029__boxed_1679_; lean_object* v_res_1680_; 
v_snd_11029__boxed_1679_ = lean_unbox(v_snd_1672_);
v_res_1680_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0(v_fst_1671_, v_snd_11029__boxed_1679_, v_x_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec_ref(v_x_1673_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(lean_object* v_opts_1681_, lean_object* v_opt_1682_){
_start:
{
lean_object* v_name_1683_; lean_object* v_defValue_1684_; lean_object* v_map_1685_; lean_object* v___x_1686_; 
v_name_1683_ = lean_ctor_get(v_opt_1682_, 0);
v_defValue_1684_ = lean_ctor_get(v_opt_1682_, 1);
v_map_1685_ = lean_ctor_get(v_opts_1681_, 0);
v___x_1686_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1685_, v_name_1683_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_inc(v_defValue_1684_);
return v_defValue_1684_;
}
else
{
lean_object* v_val_1687_; 
v_val_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_val_1687_);
lean_dec_ref_known(v___x_1686_, 1);
if (lean_obj_tag(v_val_1687_) == 3)
{
lean_object* v_v_1688_; 
v_v_1688_ = lean_ctor_get(v_val_1687_, 0);
lean_inc(v_v_1688_);
lean_dec_ref_known(v_val_1687_, 1);
return v_v_1688_;
}
else
{
lean_dec(v_val_1687_);
lean_inc(v_defValue_1684_);
return v_defValue_1684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5___boxed(lean_object* v_opts_1689_, lean_object* v_opt_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1689_, v_opt_1690_);
lean_dec_ref(v_opt_1690_);
lean_dec_ref(v_opts_1689_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(lean_object* v_x_1692_){
_start:
{
if (lean_obj_tag(v_x_1692_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
v_a_1694_ = lean_ctor_get(v_x_1692_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_x_1692_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v_x_1692_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v_x_1692_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set_tag(v___x_1696_, 1);
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
v_a_1702_ = lean_ctor_get(v_x_1692_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_x_1692_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v_x_1692_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v_x_1692_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
lean_ctor_set_tag(v___x_1704_, 0);
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg___boxed(lean_object* v_x_1710_, lean_object* v___y_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_x_1710_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(size_t v_sz_1713_, size_t v_i_1714_, lean_object* v_bs_1715_){
_start:
{
uint8_t v___x_1716_; 
v___x_1716_ = lean_usize_dec_lt(v_i_1714_, v_sz_1713_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; 
v___x_1717_ = l_unsafeCast___redArg(v_bs_1715_);
lean_dec_ref(v_bs_1715_);
return v___x_1717_;
}
else
{
lean_object* v_v_1718_; lean_object* v___x_1719_; lean_object* v_msg_1720_; lean_object* v___x_1721_; lean_object* v_bs_x27_1722_; size_t v___x_1723_; size_t v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_v_1718_ = lean_array_uget_borrowed(v_bs_1715_, v_i_1714_);
v___x_1719_ = l_unsafeCast___redArg(v_v_1718_);
v_msg_1720_ = lean_ctor_get(v___x_1719_, 1);
lean_inc_ref(v_msg_1720_);
lean_dec(v___x_1719_);
v___x_1721_ = lean_unsigned_to_nat(0u);
v_bs_x27_1722_ = lean_array_uset(v_bs_1715_, v_i_1714_, v___x_1721_);
v___x_1723_ = ((size_t)1ULL);
v___x_1724_ = lean_usize_add(v_i_1714_, v___x_1723_);
v___x_1725_ = l_unsafeCast___redArg(v_msg_1720_);
lean_dec_ref(v_msg_1720_);
v___x_1726_ = lean_array_uset(v_bs_x27_1722_, v_i_1714_, v___x_1725_);
v_i_1714_ = v___x_1724_;
v_bs_1715_ = v___x_1726_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_1728_, lean_object* v_i_1729_, lean_object* v_bs_1730_){
_start:
{
size_t v_sz_boxed_1731_; size_t v_i_boxed_1732_; lean_object* v_res_1733_; 
v_sz_boxed_1731_ = lean_unbox_usize(v_sz_1728_);
lean_dec(v_sz_1728_);
v_i_boxed_1732_ = lean_unbox_usize(v_i_1729_);
lean_dec(v_i_1729_);
v_res_1733_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(v_sz_boxed_1731_, v_i_boxed_1732_, v_bs_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(lean_object* v_oldTraces_1734_, lean_object* v_data_1735_, lean_object* v_ref_1736_, lean_object* v_msg_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v_toCold_1743_; lean_object* v_currRecDepth_1744_; lean_object* v_ref_1745_; uint8_t v_diag_1746_; uint8_t v_suppressElabErrors_1747_; lean_object* v_ref_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v_traceState_1751_; lean_object* v_traces_1752_; lean_object* v___x_1753_; size_t v_sz_1754_; size_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v_msg_1759_; lean_object* v___x_1760_; lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1798_; 
v_toCold_1743_ = lean_ctor_get(v___y_1740_, 0);
v_currRecDepth_1744_ = lean_ctor_get(v___y_1740_, 1);
v_ref_1745_ = lean_ctor_get(v___y_1740_, 2);
v_diag_1746_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*3);
v_suppressElabErrors_1747_ = lean_ctor_get_uint8(v___y_1740_, sizeof(void*)*3 + 1);
v_ref_1748_ = l_Lean_replaceRef(v_ref_1736_, v_ref_1745_);
lean_inc(v_currRecDepth_1744_);
lean_inc_ref(v_toCold_1743_);
v___x_1749_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1749_, 0, v_toCold_1743_);
lean_ctor_set(v___x_1749_, 1, v_currRecDepth_1744_);
lean_ctor_set(v___x_1749_, 2, v_ref_1748_);
lean_ctor_set_uint8(v___x_1749_, sizeof(void*)*3, v_diag_1746_);
lean_ctor_set_uint8(v___x_1749_, sizeof(void*)*3 + 1, v_suppressElabErrors_1747_);
v___x_1750_ = lean_st_ref_get(v___y_1741_);
v_traceState_1751_ = lean_ctor_get(v___x_1750_, 4);
lean_inc_ref(v_traceState_1751_);
lean_dec(v___x_1750_);
v_traces_1752_ = lean_ctor_get(v_traceState_1751_, 0);
lean_inc_ref(v_traces_1752_);
lean_dec_ref(v_traceState_1751_);
v___x_1753_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1752_);
lean_dec_ref(v_traces_1752_);
v_sz_1754_ = lean_array_size(v___x_1753_);
v___x_1755_ = ((size_t)0ULL);
v___x_1756_ = l_unsafeCast___redArg(v___x_1753_);
lean_dec_ref(v___x_1753_);
v___x_1757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2_spec__3(v_sz_1754_, v___x_1755_, v___x_1756_);
v___x_1758_ = l_unsafeCast___redArg(v___x_1757_);
lean_dec_ref(v___x_1757_);
v_msg_1759_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1759_, 0, v_data_1735_);
lean_ctor_set(v_msg_1759_, 1, v_msg_1737_);
lean_ctor_set(v_msg_1759_, 2, v___x_1758_);
v___x_1760_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0_spec__0(v_msg_1759_, v___y_1738_, v___y_1739_, v___x_1749_, v___y_1741_);
lean_dec_ref_known(v___x_1749_, 3);
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1798_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1798_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1765_; lean_object* v_traceState_1766_; lean_object* v_env_1767_; lean_object* v_nextMacroScope_1768_; lean_object* v_ngen_1769_; lean_object* v_auxDeclNGen_1770_; lean_object* v_cache_1771_; lean_object* v_messages_1772_; lean_object* v_infoState_1773_; lean_object* v_snapshotTasks_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1797_; 
v___x_1765_ = lean_st_ref_take(v___y_1741_);
v_traceState_1766_ = lean_ctor_get(v___x_1765_, 4);
v_env_1767_ = lean_ctor_get(v___x_1765_, 0);
v_nextMacroScope_1768_ = lean_ctor_get(v___x_1765_, 1);
v_ngen_1769_ = lean_ctor_get(v___x_1765_, 2);
v_auxDeclNGen_1770_ = lean_ctor_get(v___x_1765_, 3);
v_cache_1771_ = lean_ctor_get(v___x_1765_, 5);
v_messages_1772_ = lean_ctor_get(v___x_1765_, 6);
v_infoState_1773_ = lean_ctor_get(v___x_1765_, 7);
v_snapshotTasks_1774_ = lean_ctor_get(v___x_1765_, 8);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1776_ = v___x_1765_;
v_isShared_1777_ = v_isSharedCheck_1797_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_snapshotTasks_1774_);
lean_inc(v_infoState_1773_);
lean_inc(v_messages_1772_);
lean_inc(v_cache_1771_);
lean_inc(v_traceState_1766_);
lean_inc(v_auxDeclNGen_1770_);
lean_inc(v_ngen_1769_);
lean_inc(v_nextMacroScope_1768_);
lean_inc(v_env_1767_);
lean_dec(v___x_1765_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1797_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
uint64_t v_tid_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1795_; 
v_tid_1778_ = lean_ctor_get_uint64(v_traceState_1766_, sizeof(void*)*1);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_traceState_1766_);
if (v_isSharedCheck_1795_ == 0)
{
lean_object* v_unused_1796_; 
v_unused_1796_ = lean_ctor_get(v_traceState_1766_, 0);
lean_dec(v_unused_1796_);
v___x_1780_ = v_traceState_1766_;
v_isShared_1781_ = v_isSharedCheck_1795_;
goto v_resetjp_1779_;
}
else
{
lean_dec(v_traceState_1766_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1795_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1782_ = lean_box(0);
v___x_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1783_, 0, v_ref_1736_);
lean_ctor_set(v___x_1783_, 1, v_a_1761_);
v___x_1784_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1734_, v___x_1783_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1784_);
v___x_1786_ = v___x_1780_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1784_);
lean_ctor_set_uint64(v_reuseFailAlloc_1794_, sizeof(void*)*1, v_tid_1778_);
v___x_1786_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1788_; 
if (v_isShared_1777_ == 0)
{
lean_ctor_set(v___x_1776_, 4, v___x_1786_);
v___x_1788_ = v___x_1776_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_env_1767_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_nextMacroScope_1768_);
lean_ctor_set(v_reuseFailAlloc_1793_, 2, v_ngen_1769_);
lean_ctor_set(v_reuseFailAlloc_1793_, 3, v_auxDeclNGen_1770_);
lean_ctor_set(v_reuseFailAlloc_1793_, 4, v___x_1786_);
lean_ctor_set(v_reuseFailAlloc_1793_, 5, v_cache_1771_);
lean_ctor_set(v_reuseFailAlloc_1793_, 6, v_messages_1772_);
lean_ctor_set(v_reuseFailAlloc_1793_, 7, v_infoState_1773_);
lean_ctor_set(v_reuseFailAlloc_1793_, 8, v_snapshotTasks_1774_);
v___x_1788_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1789_ = lean_st_ref_put(v___y_1741_, v___x_1788_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v___x_1782_);
v___x_1791_ = v___x_1763_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1782_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2___boxed(lean_object* v_oldTraces_1799_, lean_object* v_data_1800_, lean_object* v_ref_1801_, lean_object* v_msg_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_1799_, v_data_1800_, v_ref_1801_, v_msg_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
return v_res_1808_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(lean_object* v_e_1809_){
_start:
{
if (lean_obj_tag(v_e_1809_) == 0)
{
uint8_t v___x_1810_; 
v___x_1810_ = 2;
return v___x_1810_;
}
else
{
uint8_t v___x_1811_; 
v___x_1811_ = 0;
return v___x_1811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4___boxed(lean_object* v_e_1812_){
_start:
{
uint8_t v_res_1813_; lean_object* v_r_1814_; 
v_res_1813_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(v_e_1812_);
lean_dec_ref(v_e_1812_);
v_r_1814_ = lean_box(v_res_1813_);
return v_r_1814_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1815_; double v___x_1816_; 
v___x_1815_ = lean_unsigned_to_nat(0u);
v___x_1816_ = lean_float_of_nat(v___x_1815_);
return v___x_1816_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__1));
v___x_1819_ = l_Lean_stringToMessageData(v___x_1818_);
return v___x_1819_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1820_; double v___x_1821_; 
v___x_1820_ = lean_unsigned_to_nat(1000u);
v___x_1821_ = lean_float_of_nat(v___x_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(lean_object* v_cls_1822_, uint8_t v_collapsed_1823_, lean_object* v_tag_1824_, lean_object* v_opts_1825_, uint8_t v_clsEnabled_1826_, lean_object* v_oldTraces_1827_, lean_object* v_msg_1828_, lean_object* v_resStartStop_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_fst_1835_; lean_object* v_snd_1836_; lean_object* v___y_1838_; lean_object* v___y_1839_; lean_object* v_data_1840_; lean_object* v_fst_1851_; lean_object* v_snd_1852_; lean_object* v___x_1853_; uint8_t v___x_1854_; lean_object* v___y_1856_; lean_object* v_a_1857_; uint8_t v___y_1872_; double v___y_1903_; 
v_fst_1835_ = lean_ctor_get(v_resStartStop_1829_, 0);
lean_inc(v_fst_1835_);
v_snd_1836_ = lean_ctor_get(v_resStartStop_1829_, 1);
lean_inc(v_snd_1836_);
lean_dec_ref(v_resStartStop_1829_);
v_fst_1851_ = lean_ctor_get(v_snd_1836_, 0);
lean_inc(v_fst_1851_);
v_snd_1852_ = lean_ctor_get(v_snd_1836_, 1);
lean_inc(v_snd_1852_);
lean_dec(v_snd_1836_);
v___x_1853_ = l_Lean_trace_profiler;
v___x_1854_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1825_, v___x_1853_);
if (v___x_1854_ == 0)
{
v___y_1872_ = v___x_1854_;
goto v___jp_1871_;
}
else
{
lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1909_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_1825_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; lean_object* v___x_1911_; double v___x_1912_; double v___x_1913_; double v___x_1914_; 
v___x_1910_ = l_Lean_trace_profiler_threshold;
v___x_1911_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1825_, v___x_1910_);
v___x_1912_ = lean_float_of_nat(v___x_1911_);
v___x_1913_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3);
v___x_1914_ = lean_float_div(v___x_1912_, v___x_1913_);
v___y_1903_ = v___x_1914_;
goto v___jp_1902_;
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; double v___x_1917_; 
v___x_1915_ = l_Lean_trace_profiler_threshold;
v___x_1916_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_1825_, v___x_1915_);
v___x_1917_ = lean_float_of_nat(v___x_1916_);
v___y_1903_ = v___x_1917_;
goto v___jp_1902_;
}
}
v___jp_1837_:
{
lean_object* v___x_1841_; 
lean_inc(v___y_1838_);
v___x_1841_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_1827_, v_data_1840_, v___y_1838_, v___y_1839_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v___x_1842_; 
lean_dec_ref_known(v___x_1841_, 1);
v___x_1842_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_1835_);
return v___x_1842_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_fst_1835_);
v_a_1843_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1841_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1841_);
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
v___jp_1855_:
{
uint8_t v_result_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; double v___x_1861_; lean_object* v_data_1862_; 
v_result_1858_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__4(v_fst_1835_);
v___x_1859_ = lean_box(v_result_1858_);
v___x_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
v___x_1861_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0);
lean_inc_ref(v_tag_1824_);
lean_inc_ref(v___x_1860_);
lean_inc(v_cls_1822_);
v_data_1862_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1862_, 0, v_cls_1822_);
lean_ctor_set(v_data_1862_, 1, v___x_1860_);
lean_ctor_set(v_data_1862_, 2, v_tag_1824_);
lean_ctor_set_float(v_data_1862_, sizeof(void*)*3, v___x_1861_);
lean_ctor_set_float(v_data_1862_, sizeof(void*)*3 + 8, v___x_1861_);
lean_ctor_set_uint8(v_data_1862_, sizeof(void*)*3 + 16, v_collapsed_1823_);
if (v___x_1854_ == 0)
{
lean_dec_ref_known(v___x_1860_, 1);
lean_dec(v_snd_1852_);
lean_dec(v_fst_1851_);
lean_dec_ref(v_tag_1824_);
lean_dec(v_cls_1822_);
v___y_1838_ = v___y_1856_;
v___y_1839_ = v_a_1857_;
v_data_1840_ = v_data_1862_;
goto v___jp_1837_;
}
else
{
lean_object* v_data_1863_; double v___x_1864_; double v___x_1865_; 
lean_dec_ref_known(v_data_1862_, 3);
v_data_1863_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1863_, 0, v_cls_1822_);
lean_ctor_set(v_data_1863_, 1, v___x_1860_);
lean_ctor_set(v_data_1863_, 2, v_tag_1824_);
v___x_1864_ = lean_unbox_float(v_fst_1851_);
lean_dec(v_fst_1851_);
lean_ctor_set_float(v_data_1863_, sizeof(void*)*3, v___x_1864_);
v___x_1865_ = lean_unbox_float(v_snd_1852_);
lean_dec(v_snd_1852_);
lean_ctor_set_float(v_data_1863_, sizeof(void*)*3 + 8, v___x_1865_);
lean_ctor_set_uint8(v_data_1863_, sizeof(void*)*3 + 16, v_collapsed_1823_);
v___y_1838_ = v___y_1856_;
v___y_1839_ = v_a_1857_;
v_data_1840_ = v_data_1863_;
goto v___jp_1837_;
}
}
v___jp_1866_:
{
lean_object* v_ref_1867_; lean_object* v___x_1868_; 
v_ref_1867_ = lean_ctor_get(v___y_1832_, 2);
lean_inc(v___y_1833_);
lean_inc_ref(v___y_1832_);
lean_inc(v___y_1831_);
lean_inc_ref(v___y_1830_);
lean_inc(v_fst_1835_);
v___x_1868_ = lean_apply_6(v_msg_1828_, v_fst_1835_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, lean_box(0));
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref_known(v___x_1868_, 1);
v___y_1856_ = v_ref_1867_;
v_a_1857_ = v_a_1869_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1870_; 
lean_dec_ref_known(v___x_1868_, 1);
v___x_1870_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2);
v___y_1856_ = v_ref_1867_;
v_a_1857_ = v___x_1870_;
goto v___jp_1855_;
}
}
v___jp_1871_:
{
if (v_clsEnabled_1826_ == 0)
{
if (v___y_1872_ == 0)
{
lean_object* v___x_1873_; lean_object* v_traceState_1874_; lean_object* v_env_1875_; lean_object* v_nextMacroScope_1876_; lean_object* v_ngen_1877_; lean_object* v_auxDeclNGen_1878_; lean_object* v_cache_1879_; lean_object* v_messages_1880_; lean_object* v_infoState_1881_; lean_object* v_snapshotTasks_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_snd_1852_);
lean_dec(v_fst_1851_);
lean_dec_ref(v_msg_1828_);
lean_dec_ref(v_tag_1824_);
lean_dec(v_cls_1822_);
v___x_1873_ = lean_st_ref_take(v___y_1833_);
v_traceState_1874_ = lean_ctor_get(v___x_1873_, 4);
v_env_1875_ = lean_ctor_get(v___x_1873_, 0);
v_nextMacroScope_1876_ = lean_ctor_get(v___x_1873_, 1);
v_ngen_1877_ = lean_ctor_get(v___x_1873_, 2);
v_auxDeclNGen_1878_ = lean_ctor_get(v___x_1873_, 3);
v_cache_1879_ = lean_ctor_get(v___x_1873_, 5);
v_messages_1880_ = lean_ctor_get(v___x_1873_, 6);
v_infoState_1881_ = lean_ctor_get(v___x_1873_, 7);
v_snapshotTasks_1882_ = lean_ctor_get(v___x_1873_, 8);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1884_ = v___x_1873_;
v_isShared_1885_ = v_isSharedCheck_1901_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_snapshotTasks_1882_);
lean_inc(v_infoState_1881_);
lean_inc(v_messages_1880_);
lean_inc(v_cache_1879_);
lean_inc(v_traceState_1874_);
lean_inc(v_auxDeclNGen_1878_);
lean_inc(v_ngen_1877_);
lean_inc(v_nextMacroScope_1876_);
lean_inc(v_env_1875_);
lean_dec(v___x_1873_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1901_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
uint64_t v_tid_1886_; lean_object* v_traces_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1900_; 
v_tid_1886_ = lean_ctor_get_uint64(v_traceState_1874_, sizeof(void*)*1);
v_traces_1887_ = lean_ctor_get(v_traceState_1874_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_traceState_1874_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1889_ = v_traceState_1874_;
v_isShared_1890_ = v_isSharedCheck_1900_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_traces_1887_);
lean_dec(v_traceState_1874_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1900_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1891_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1827_, v_traces_1887_);
lean_dec_ref(v_traces_1887_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v___x_1891_);
v___x_1893_ = v___x_1889_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1891_);
lean_ctor_set_uint64(v_reuseFailAlloc_1899_, sizeof(void*)*1, v_tid_1886_);
v___x_1893_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 4, v___x_1893_);
v___x_1895_ = v___x_1884_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_env_1875_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v_nextMacroScope_1876_);
lean_ctor_set(v_reuseFailAlloc_1898_, 2, v_ngen_1877_);
lean_ctor_set(v_reuseFailAlloc_1898_, 3, v_auxDeclNGen_1878_);
lean_ctor_set(v_reuseFailAlloc_1898_, 4, v___x_1893_);
lean_ctor_set(v_reuseFailAlloc_1898_, 5, v_cache_1879_);
lean_ctor_set(v_reuseFailAlloc_1898_, 6, v_messages_1880_);
lean_ctor_set(v_reuseFailAlloc_1898_, 7, v_infoState_1881_);
lean_ctor_set(v_reuseFailAlloc_1898_, 8, v_snapshotTasks_1882_);
v___x_1895_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = lean_st_ref_put(v___y_1833_, v___x_1895_);
v___x_1897_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_1835_);
return v___x_1897_;
}
}
}
}
}
else
{
goto v___jp_1866_;
}
}
else
{
goto v___jp_1866_;
}
}
v___jp_1902_:
{
double v___x_1904_; double v___x_1905_; double v___x_1906_; uint8_t v___x_1907_; 
v___x_1904_ = lean_unbox_float(v_snd_1852_);
v___x_1905_ = lean_unbox_float(v_fst_1851_);
v___x_1906_ = lean_float_sub(v___x_1904_, v___x_1905_);
v___x_1907_ = lean_float_decLt(v___y_1903_, v___x_1906_);
v___y_1872_ = v___x_1907_;
goto v___jp_1871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___boxed(lean_object* v_cls_1918_, lean_object* v_collapsed_1919_, lean_object* v_tag_1920_, lean_object* v_opts_1921_, lean_object* v_clsEnabled_1922_, lean_object* v_oldTraces_1923_, lean_object* v_msg_1924_, lean_object* v_resStartStop_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
uint8_t v_collapsed_boxed_1931_; uint8_t v_clsEnabled_boxed_1932_; lean_object* v_res_1933_; 
v_collapsed_boxed_1931_ = lean_unbox(v_collapsed_1919_);
v_clsEnabled_boxed_1932_ = lean_unbox(v_clsEnabled_1922_);
v_res_1933_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v_cls_1918_, v_collapsed_boxed_1931_, v_tag_1920_, v_opts_1921_, v_clsEnabled_boxed_1932_, v_oldTraces_1923_, v_msg_1924_, v_resStartStop_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec_ref(v_opts_1921_);
return v_res_1933_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_1938_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__1));
v___x_1939_ = l_Lean_Name_append(v___x_1938_, v___x_1937_);
return v___x_1939_;
}
}
static double _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3(void){
_start:
{
lean_object* v___x_1940_; double v___x_1941_; 
v___x_1940_ = lean_unsigned_to_nat(1000000000u);
v___x_1941_ = lean_float_of_nat(v___x_1940_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(lean_object* v_cfg_1942_, lean_object* v_act_1943_, lean_object* v_allowFailure_1944_, lean_object* v_cand_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_fst_1951_; lean_object* v_snd_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_2239_; 
v_fst_1951_ = lean_ctor_get(v_cand_1945_, 0);
v_snd_1952_ = lean_ctor_get(v_cand_1945_, 1);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_cand_1945_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_1954_ = v_cand_1945_;
v_isShared_1955_ = v_isSharedCheck_2239_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_snd_1952_);
lean_inc(v_fst_1951_);
lean_dec(v_cand_1945_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_2239_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_toCold_1956_; lean_object* v_options_1957_; uint8_t v_hasTrace_1958_; 
v_toCold_1956_ = lean_ctor_get(v_a_1948_, 0);
v_options_1957_ = lean_ctor_get(v_toCold_1956_, 2);
v_hasTrace_1958_ = lean_ctor_get_uint8(v_options_1957_, sizeof(void*)*1);
if (v_hasTrace_1958_ == 0)
{
lean_object* v_fst_1959_; lean_object* v_snd_1960_; lean_object* v_fst_1961_; lean_object* v_snd_1962_; lean_object* v___x_1963_; lean_object* v_cache_1964_; lean_object* v_zetaDeltaFVarIds_1965_; lean_object* v_postponed_1966_; lean_object* v_diag_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2015_; 
lean_del_object(v___x_1954_);
v_fst_1959_ = lean_ctor_get(v_fst_1951_, 0);
lean_inc(v_fst_1959_);
v_snd_1960_ = lean_ctor_get(v_fst_1951_, 1);
lean_inc(v_snd_1960_);
lean_dec(v_fst_1951_);
v_fst_1961_ = lean_ctor_get(v_snd_1952_, 0);
lean_inc(v_fst_1961_);
v_snd_1962_ = lean_ctor_get(v_snd_1952_, 1);
lean_inc(v_snd_1962_);
lean_dec(v_snd_1952_);
v___x_1963_ = lean_st_ref_take(v_a_1947_);
v_cache_1964_ = lean_ctor_get(v___x_1963_, 1);
v_zetaDeltaFVarIds_1965_ = lean_ctor_get(v___x_1963_, 2);
v_postponed_1966_ = lean_ctor_get(v___x_1963_, 3);
v_diag_1967_ = lean_ctor_get(v___x_1963_, 4);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v___x_1963_, 0);
lean_dec(v_unused_2016_);
v___x_1969_ = v___x_1963_;
v_isShared_1970_ = v_isSharedCheck_2015_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_diag_1967_);
lean_inc(v_postponed_1966_);
lean_inc(v_zetaDeltaFVarIds_1965_);
lean_inc(v_cache_1964_);
lean_dec(v___x_1963_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2015_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v_snd_1960_);
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_snd_1960_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_cache_1964_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_zetaDeltaFVarIds_1965_);
lean_ctor_set(v_reuseFailAlloc_2014_, 3, v_postponed_1966_);
lean_ctor_set(v_reuseFailAlloc_2014_, 4, v_diag_1967_);
v___x_1972_ = v_reuseFailAlloc_2014_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = lean_st_ref_put(v_a_1947_, v___x_1972_);
v___x_1974_ = lean_unbox(v_snd_1962_);
lean_dec(v_snd_1962_);
v___x_1975_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_1961_, v___x_1974_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
v___x_1977_ = lean_box(0);
lean_inc(v_fst_1959_);
v___x_1978_ = l_Lean_MVarId_apply(v_fst_1959_, v_a_1976_, v_cfg_1942_, v___x_1977_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1980_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc_n(v_a_1979_, 2);
lean_dec_ref_known(v___x_1978_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_1980_ = lean_apply_6(v_act_1943_, v_a_1979_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_dec(v_a_1979_);
lean_dec(v_fst_1959_);
lean_dec_ref(v_allowFailure_1944_);
return v___x_1980_;
}
else
{
lean_object* v_a_1981_; uint8_t v___y_1983_; uint8_t v___x_2004_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
v___x_2004_ = l_Lean_Exception_isInterrupt(v_a_1981_);
if (v___x_2004_ == 0)
{
uint8_t v___x_2005_; 
v___x_2005_ = l_Lean_Exception_isRuntime(v_a_1981_);
v___y_1983_ = v___x_2005_;
goto v___jp_1982_;
}
else
{
lean_dec(v_a_1981_);
v___y_1983_ = v___x_2004_;
goto v___jp_1982_;
}
v___jp_1982_:
{
if (v___y_1983_ == 0)
{
lean_object* v___x_1984_; 
lean_dec_ref_known(v___x_1980_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_1984_ = lean_apply_6(v_allowFailure_1944_, v_fst_1959_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1995_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_1995_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1995_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
uint8_t v___x_1989_; 
v___x_1989_ = lean_unbox(v_a_1985_);
lean_dec(v_a_1985_);
if (v___x_1989_ == 0)
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
lean_del_object(v___x_1987_);
lean_dec(v_a_1979_);
v___x_1990_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_1991_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_1990_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
return v___x_1991_;
}
else
{
lean_object* v___x_1993_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v_a_1979_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1979_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_a_1979_);
v_a_1996_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1984_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1984_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_dec(v_a_1979_);
lean_dec(v_fst_1959_);
lean_dec_ref(v_allowFailure_1944_);
return v___x_1980_;
}
}
}
}
else
{
lean_dec(v_fst_1959_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
return v___x_1978_;
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec(v_fst_1959_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
lean_dec_ref(v_cfg_1942_);
v_a_2006_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1975_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1975_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
}
else
{
lean_object* v_fst_2017_; lean_object* v_snd_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2238_; 
v_fst_2017_ = lean_ctor_get(v_fst_1951_, 0);
v_snd_2018_ = lean_ctor_get(v_fst_1951_, 1);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_fst_1951_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2020_ = v_fst_1951_;
v_isShared_2021_ = v_isSharedCheck_2238_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_snd_2018_);
lean_inc(v_fst_2017_);
lean_dec(v_fst_1951_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2238_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v_fst_2022_; lean_object* v_snd_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2237_; 
v_fst_2022_ = lean_ctor_get(v_snd_1952_, 0);
v_snd_2023_ = lean_ctor_get(v_snd_1952_, 1);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_snd_1952_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2025_ = v_snd_1952_;
v_isShared_2026_ = v_isSharedCheck_2237_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_snd_2023_);
lean_inc(v_fst_2022_);
lean_dec(v_snd_1952_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2237_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v_inheritedTraceOptions_2027_; lean_object* v___f_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v_a_2036_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v_a_2055_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v_a_2060_; lean_object* v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; uint8_t v___y_2073_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v_a_2083_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v_a_2097_; lean_object* v___y_2100_; lean_object* v___y_2101_; lean_object* v_a_2102_; lean_object* v___y_2105_; lean_object* v___y_2106_; lean_object* v___y_2107_; lean_object* v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; uint8_t v___y_2115_; 
v_inheritedTraceOptions_2027_ = lean_ctor_get(v_toCold_1956_, 11);
lean_inc(v_snd_2023_);
lean_inc(v_fst_2022_);
v___f_2028_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2028_, 0, v_fst_2022_);
lean_closure_set(v___f_2028_, 1, v_snd_2023_);
v___x_2029_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_2030_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4));
v___x_2031_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2);
v___x_2032_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2027_, v_options_1957_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2181_ = l_Lean_trace_profiler;
v___x_2182_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_1957_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; lean_object* v_cache_2184_; lean_object* v_zetaDeltaFVarIds_2185_; lean_object* v_postponed_2186_; lean_object* v_diag_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2235_; 
lean_dec_ref(v___f_2028_);
lean_del_object(v___x_2025_);
lean_del_object(v___x_2020_);
lean_del_object(v___x_1954_);
v___x_2183_ = lean_st_ref_take(v_a_1947_);
v_cache_2184_ = lean_ctor_get(v___x_2183_, 1);
v_zetaDeltaFVarIds_2185_ = lean_ctor_get(v___x_2183_, 2);
v_postponed_2186_ = lean_ctor_get(v___x_2183_, 3);
v_diag_2187_ = lean_ctor_get(v___x_2183_, 4);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2235_ == 0)
{
lean_object* v_unused_2236_; 
v_unused_2236_ = lean_ctor_get(v___x_2183_, 0);
lean_dec(v_unused_2236_);
v___x_2189_ = v___x_2183_;
v_isShared_2190_ = v_isSharedCheck_2235_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_diag_2187_);
lean_inc(v_postponed_2186_);
lean_inc(v_zetaDeltaFVarIds_2185_);
lean_inc(v_cache_2184_);
lean_dec(v___x_2183_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2235_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v_snd_2018_);
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_snd_2018_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_cache_2184_);
lean_ctor_set(v_reuseFailAlloc_2234_, 2, v_zetaDeltaFVarIds_2185_);
lean_ctor_set(v_reuseFailAlloc_2234_, 3, v_postponed_2186_);
lean_ctor_set(v_reuseFailAlloc_2234_, 4, v_diag_2187_);
v___x_2192_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; uint8_t v___x_2194_; lean_object* v___x_2195_; 
v___x_2193_ = lean_st_ref_put(v_a_1947_, v___x_2192_);
v___x_2194_ = lean_unbox(v_snd_2023_);
lean_dec(v_snd_2023_);
v___x_2195_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2022_, v___x_2194_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2195_, 1);
v___x_2197_ = lean_box(0);
lean_inc(v_fst_2017_);
v___x_2198_ = l_Lean_MVarId_apply(v_fst_2017_, v_a_2196_, v_cfg_1942_, v___x_2197_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2200_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc_n(v_a_2199_, 2);
lean_dec_ref_known(v___x_2198_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2200_ = lean_apply_6(v_act_1943_, v_a_2199_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_dec(v_a_2199_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
return v___x_2200_;
}
else
{
lean_object* v_a_2201_; uint8_t v___y_2203_; uint8_t v___x_2224_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
v___x_2224_ = l_Lean_Exception_isInterrupt(v_a_2201_);
if (v___x_2224_ == 0)
{
uint8_t v___x_2225_; 
v___x_2225_ = l_Lean_Exception_isRuntime(v_a_2201_);
v___y_2203_ = v___x_2225_;
goto v___jp_2202_;
}
else
{
lean_dec(v_a_2201_);
v___y_2203_ = v___x_2224_;
goto v___jp_2202_;
}
v___jp_2202_:
{
if (v___y_2203_ == 0)
{
lean_object* v___x_2204_; 
lean_dec_ref_known(v___x_2200_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2204_ = lean_apply_6(v_allowFailure_1944_, v_fst_2017_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2204_) == 0)
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2215_; 
v_a_2205_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2207_ = v___x_2204_;
v_isShared_2208_ = v_isSharedCheck_2215_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2204_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2215_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
uint8_t v___x_2209_; 
v___x_2209_ = lean_unbox(v_a_2205_);
lean_dec(v_a_2205_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; lean_object* v___x_2211_; 
lean_del_object(v___x_2207_);
lean_dec(v_a_2199_);
v___x_2210_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2211_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2210_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
return v___x_2211_;
}
else
{
lean_object* v___x_2213_; 
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v_a_2199_);
v___x_2213_ = v___x_2207_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2199_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
lean_dec(v_a_2199_);
v_a_2216_ = lean_ctor_get(v___x_2204_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2204_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2204_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
else
{
lean_dec(v_a_2199_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
return v___x_2200_;
}
}
}
}
else
{
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
return v___x_2198_;
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
lean_dec_ref(v_cfg_1942_);
v_a_2226_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2195_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2195_);
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
}
}
else
{
goto v___jp_2122_;
}
}
else
{
goto v___jp_2122_;
}
v___jp_2033_:
{
lean_object* v___x_2037_; double v___x_2038_; double v___x_2039_; double v___x_2040_; double v___x_2041_; double v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2046_; 
v___x_2037_ = lean_io_mono_nanos_now();
v___x_2038_ = lean_float_of_nat(v___y_2035_);
v___x_2039_ = lean_float_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3);
v___x_2040_ = lean_float_div(v___x_2038_, v___x_2039_);
v___x_2041_ = lean_float_of_nat(v___x_2037_);
v___x_2042_ = lean_float_div(v___x_2041_, v___x_2039_);
v___x_2043_ = lean_box_float(v___x_2040_);
v___x_2044_ = lean_box_float(v___x_2042_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v___x_2044_);
lean_ctor_set(v___x_2025_, 0, v___x_2043_);
v___x_2046_ = v___x_2025_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v___x_2044_);
v___x_2046_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
lean_object* v___x_2048_; 
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 1, v___x_2046_);
lean_ctor_set(v___x_2020_, 0, v_a_2036_);
v___x_2048_ = v___x_2020_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2036_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2049_; 
v___x_2049_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v___x_2029_, v_hasTrace_1958_, v___x_2030_, v_options_1957_, v___x_2032_, v___y_2034_, v___f_2028_, v___x_2048_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
return v___x_2049_;
}
}
}
v___jp_2052_:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_a_2055_);
v___y_2034_ = v___y_2053_;
v___y_2035_ = v___y_2054_;
v_a_2036_ = v___x_2056_;
goto v___jp_2033_;
}
v___jp_2057_:
{
lean_object* v___x_2061_; 
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_a_2060_);
v___y_2034_ = v___y_2058_;
v___y_2035_ = v___y_2059_;
v_a_2036_ = v___x_2061_;
goto v___jp_2033_;
}
v___jp_2062_:
{
if (lean_obj_tag(v___y_2065_) == 0)
{
lean_object* v_a_2066_; 
v_a_2066_ = lean_ctor_get(v___y_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___y_2065_, 1);
v___y_2053_ = v___y_2063_;
v___y_2054_ = v___y_2064_;
v_a_2055_ = v_a_2066_;
goto v___jp_2052_;
}
else
{
lean_object* v_a_2067_; 
v_a_2067_ = lean_ctor_get(v___y_2065_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___y_2065_, 1);
v___y_2058_ = v___y_2063_;
v___y_2059_ = v___y_2064_;
v_a_2060_ = v_a_2067_;
goto v___jp_2057_;
}
}
v___jp_2068_:
{
if (v___y_2073_ == 0)
{
lean_object* v___x_2074_; 
lean_dec_ref(v___y_2069_);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2074_ = lean_apply_6(v_allowFailure_1944_, v_fst_2017_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; uint8_t v___x_2076_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = lean_unbox(v_a_2075_);
lean_dec(v_a_2075_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_dec(v___y_2071_);
v___x_2077_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2078_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2077_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
v___y_2063_ = v___y_2070_;
v___y_2064_ = v___y_2072_;
v___y_2065_ = v___x_2078_;
goto v___jp_2062_;
}
else
{
v___y_2053_ = v___y_2070_;
v___y_2054_ = v___y_2072_;
v_a_2055_ = v___y_2071_;
goto v___jp_2052_;
}
}
else
{
lean_object* v_a_2079_; 
lean_dec(v___y_2071_);
v_a_2079_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2074_, 1);
v___y_2058_ = v___y_2070_;
v___y_2059_ = v___y_2072_;
v_a_2060_ = v_a_2079_;
goto v___jp_2057_;
}
}
else
{
lean_dec(v___y_2071_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
v___y_2058_ = v___y_2070_;
v___y_2059_ = v___y_2072_;
v_a_2060_ = v___y_2069_;
goto v___jp_2057_;
}
}
v___jp_2080_:
{
lean_object* v___x_2084_; double v___x_2085_; double v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2084_ = lean_io_get_num_heartbeats();
v___x_2085_ = lean_float_of_nat(v___y_2082_);
v___x_2086_ = lean_float_of_nat(v___x_2084_);
v___x_2087_ = lean_box_float(v___x_2085_);
v___x_2088_ = lean_box_float(v___x_2086_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v___x_2088_);
lean_ctor_set(v___x_1954_, 0, v___x_2087_);
v___x_2090_ = v___x_1954_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v_a_2083_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2(v___x_2029_, v_hasTrace_1958_, v___x_2030_, v_options_1957_, v___x_2032_, v___y_2081_, v___f_2028_, v___x_2091_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
return v___x_2092_;
}
}
v___jp_2094_:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2098_, 0, v_a_2097_);
v___y_2081_ = v___y_2095_;
v___y_2082_ = v___y_2096_;
v_a_2083_ = v___x_2098_;
goto v___jp_2080_;
}
v___jp_2099_:
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_a_2102_);
v___y_2081_ = v___y_2100_;
v___y_2082_ = v___y_2101_;
v_a_2083_ = v___x_2103_;
goto v___jp_2080_;
}
v___jp_2104_:
{
if (lean_obj_tag(v___y_2107_) == 0)
{
lean_object* v_a_2108_; 
v_a_2108_ = lean_ctor_get(v___y_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___y_2107_, 1);
v___y_2095_ = v___y_2105_;
v___y_2096_ = v___y_2106_;
v_a_2097_ = v_a_2108_;
goto v___jp_2094_;
}
else
{
lean_object* v_a_2109_; 
v_a_2109_ = lean_ctor_get(v___y_2107_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___y_2107_, 1);
v___y_2100_ = v___y_2105_;
v___y_2101_ = v___y_2106_;
v_a_2102_ = v_a_2109_;
goto v___jp_2099_;
}
}
v___jp_2110_:
{
if (v___y_2115_ == 0)
{
lean_object* v___x_2116_; 
lean_dec_ref(v___y_2111_);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2116_ = lean_apply_6(v_allowFailure_1944_, v_fst_2017_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; uint8_t v___x_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = lean_unbox(v_a_2117_);
lean_dec(v_a_2117_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
lean_dec(v___y_2114_);
v___x_2119_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1, &l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1_once, _init_l_Lean_Meta_LibrarySearch_solveByElim___lam__2___closed__1);
v___x_2120_ = l_Lean_throwError___at___00Lean_Meta_LibrarySearch_solveByElim_spec__0___redArg(v___x_2119_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
v___y_2105_ = v___y_2112_;
v___y_2106_ = v___y_2113_;
v___y_2107_ = v___x_2120_;
goto v___jp_2104_;
}
else
{
v___y_2095_ = v___y_2112_;
v___y_2096_ = v___y_2113_;
v_a_2097_ = v___y_2114_;
goto v___jp_2094_;
}
}
else
{
lean_object* v_a_2121_; 
lean_dec(v___y_2114_);
v_a_2121_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v___x_2116_, 1);
v___y_2100_ = v___y_2112_;
v___y_2101_ = v___y_2113_;
v_a_2102_ = v_a_2121_;
goto v___jp_2099_;
}
}
else
{
lean_dec(v___y_2114_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
v___y_2100_ = v___y_2112_;
v___y_2101_ = v___y_2113_;
v_a_2102_ = v___y_2111_;
goto v___jp_2099_;
}
}
v___jp_2122_:
{
lean_object* v___x_2123_; lean_object* v_a_2124_; lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2123_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v_a_1949_);
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref(v___x_2123_);
v___x_2125_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2126_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_1957_, v___x_2125_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v_cache_2129_; lean_object* v_zetaDeltaFVarIds_2130_; lean_object* v_postponed_2131_; lean_object* v_diag_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2152_; 
lean_del_object(v___x_1954_);
v___x_2127_ = lean_io_mono_nanos_now();
v___x_2128_ = lean_st_ref_take(v_a_1947_);
v_cache_2129_ = lean_ctor_get(v___x_2128_, 1);
v_zetaDeltaFVarIds_2130_ = lean_ctor_get(v___x_2128_, 2);
v_postponed_2131_ = lean_ctor_get(v___x_2128_, 3);
v_diag_2132_ = lean_ctor_get(v___x_2128_, 4);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2152_ == 0)
{
lean_object* v_unused_2153_; 
v_unused_2153_ = lean_ctor_get(v___x_2128_, 0);
lean_dec(v_unused_2153_);
v___x_2134_ = v___x_2128_;
v_isShared_2135_ = v_isSharedCheck_2152_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_diag_2132_);
lean_inc(v_postponed_2131_);
lean_inc(v_zetaDeltaFVarIds_2130_);
lean_inc(v_cache_2129_);
lean_dec(v___x_2128_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2152_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v_snd_2018_);
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_snd_2018_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_cache_2129_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_zetaDeltaFVarIds_2130_);
lean_ctor_set(v_reuseFailAlloc_2151_, 3, v_postponed_2131_);
lean_ctor_set(v_reuseFailAlloc_2151_, 4, v_diag_2132_);
v___x_2137_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2138_; uint8_t v___x_2139_; lean_object* v___x_2140_; 
v___x_2138_ = lean_st_ref_put(v_a_1947_, v___x_2137_);
v___x_2139_ = lean_unbox(v_snd_2023_);
lean_dec(v_snd_2023_);
v___x_2140_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2022_, v___x_2139_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v___x_2142_ = lean_box(0);
lean_inc(v_fst_2017_);
v___x_2143_ = l_Lean_MVarId_apply(v_fst_2017_, v_a_2141_, v_cfg_1942_, v___x_2142_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; lean_object* v___x_2145_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc_n(v_a_2144_, 2);
lean_dec_ref_known(v___x_2143_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2145_ = lean_apply_6(v_act_1943_, v_a_2144_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; 
lean_dec(v_a_2144_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2146_);
lean_dec_ref_known(v___x_2145_, 1);
v___y_2053_ = v_a_2124_;
v___y_2054_ = v___x_2127_;
v_a_2055_ = v_a_2146_;
goto v___jp_2052_;
}
else
{
lean_object* v_a_2147_; uint8_t v___x_2148_; 
v_a_2147_ = lean_ctor_get(v___x_2145_, 0);
lean_inc(v_a_2147_);
lean_dec_ref_known(v___x_2145_, 1);
v___x_2148_ = l_Lean_Exception_isInterrupt(v_a_2147_);
if (v___x_2148_ == 0)
{
uint8_t v___x_2149_; 
lean_inc(v_a_2147_);
v___x_2149_ = l_Lean_Exception_isRuntime(v_a_2147_);
v___y_2069_ = v_a_2147_;
v___y_2070_ = v_a_2124_;
v___y_2071_ = v_a_2144_;
v___y_2072_ = v___x_2127_;
v___y_2073_ = v___x_2149_;
goto v___jp_2068_;
}
else
{
v___y_2069_ = v_a_2147_;
v___y_2070_ = v_a_2124_;
v___y_2071_ = v_a_2144_;
v___y_2072_ = v___x_2127_;
v___y_2073_ = v___x_2148_;
goto v___jp_2068_;
}
}
}
else
{
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
v___y_2063_ = v_a_2124_;
v___y_2064_ = v___x_2127_;
v___y_2065_ = v___x_2143_;
goto v___jp_2062_;
}
}
else
{
lean_object* v_a_2150_; 
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
lean_dec_ref(v_cfg_1942_);
v_a_2150_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2140_, 1);
v___y_2058_ = v_a_2124_;
v___y_2059_ = v___x_2127_;
v_a_2060_ = v_a_2150_;
goto v___jp_2057_;
}
}
}
}
else
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v_cache_2156_; lean_object* v_zetaDeltaFVarIds_2157_; lean_object* v_postponed_2158_; lean_object* v_diag_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2179_; 
lean_del_object(v___x_2025_);
lean_del_object(v___x_2020_);
v___x_2154_ = lean_io_get_num_heartbeats();
v___x_2155_ = lean_st_ref_take(v_a_1947_);
v_cache_2156_ = lean_ctor_get(v___x_2155_, 1);
v_zetaDeltaFVarIds_2157_ = lean_ctor_get(v___x_2155_, 2);
v_postponed_2158_ = lean_ctor_get(v___x_2155_, 3);
v_diag_2159_ = lean_ctor_get(v___x_2155_, 4);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2179_ == 0)
{
lean_object* v_unused_2180_; 
v_unused_2180_ = lean_ctor_get(v___x_2155_, 0);
lean_dec(v_unused_2180_);
v___x_2161_ = v___x_2155_;
v_isShared_2162_ = v_isSharedCheck_2179_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_diag_2159_);
lean_inc(v_postponed_2158_);
lean_inc(v_zetaDeltaFVarIds_2157_);
lean_inc(v_cache_2156_);
lean_dec(v___x_2155_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2179_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v_snd_2018_);
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_snd_2018_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_cache_2156_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_zetaDeltaFVarIds_2157_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v_postponed_2158_);
lean_ctor_set(v_reuseFailAlloc_2178_, 4, v_diag_2159_);
v___x_2164_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; 
v___x_2165_ = lean_st_ref_put(v_a_1947_, v___x_2164_);
v___x_2166_ = lean_unbox(v_snd_2023_);
lean_dec(v_snd_2023_);
v___x_2167_ = l_Lean_Meta_LibrarySearch_mkLibrarySearchLemma(v_fst_2022_, v___x_2166_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2168_);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2169_ = lean_box(0);
lean_inc(v_fst_2017_);
v___x_2170_ = l_Lean_MVarId_apply(v_fst_2017_, v_a_2168_, v_cfg_1942_, v___x_2169_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2172_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc_n(v_a_2171_, 2);
lean_dec_ref_known(v___x_2170_, 1);
lean_inc(v_a_1949_);
lean_inc_ref(v_a_1948_);
lean_inc(v_a_1947_);
lean_inc_ref(v_a_1946_);
v___x_2172_ = lean_apply_6(v_act_1943_, v_a_2171_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, lean_box(0));
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; 
lean_dec(v_a_2171_);
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v___y_2095_ = v_a_2124_;
v___y_2096_ = v___x_2154_;
v_a_2097_ = v_a_2173_;
goto v___jp_2094_;
}
else
{
lean_object* v_a_2174_; uint8_t v___x_2175_; 
v_a_2174_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2175_ = l_Lean_Exception_isInterrupt(v_a_2174_);
if (v___x_2175_ == 0)
{
uint8_t v___x_2176_; 
lean_inc(v_a_2174_);
v___x_2176_ = l_Lean_Exception_isRuntime(v_a_2174_);
v___y_2111_ = v_a_2174_;
v___y_2112_ = v_a_2124_;
v___y_2113_ = v___x_2154_;
v___y_2114_ = v_a_2171_;
v___y_2115_ = v___x_2176_;
goto v___jp_2110_;
}
else
{
v___y_2111_ = v_a_2174_;
v___y_2112_ = v_a_2124_;
v___y_2113_ = v___x_2154_;
v___y_2114_ = v_a_2171_;
v___y_2115_ = v___x_2175_;
goto v___jp_2110_;
}
}
}
else
{
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
v___y_2105_ = v_a_2124_;
v___y_2106_ = v___x_2154_;
v___y_2107_ = v___x_2170_;
goto v___jp_2104_;
}
}
else
{
lean_object* v_a_2177_; 
lean_dec(v_fst_2017_);
lean_dec_ref(v_allowFailure_1944_);
lean_dec_ref(v_act_1943_);
lean_dec_ref(v_cfg_1942_);
v_a_2177_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2167_, 1);
v___y_2100_ = v_a_2124_;
v___y_2101_ = v___x_2154_;
v_a_2102_ = v_a_2177_;
goto v___jp_2099_;
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___boxed(lean_object* v_cfg_2240_, lean_object* v_act_2241_, lean_object* v_allowFailure_2242_, lean_object* v_cand_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(v_cfg_2240_, v_act_2241_, v_allowFailure_2242_, v_cand_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec(v_a_2245_);
lean_dec_ref(v_a_2244_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(lean_object* v_00_u03b1_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_x_2251_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2258_, lean_object* v_x_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3(v_00_u03b1_2258_, v_x_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(lean_object* v_act_2268_, lean_object* v_a_2269_, uint8_t v_collectAll_2270_, lean_object* v_as_2271_, size_t v_sz_2272_, size_t v_i_2273_, lean_object* v_b_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_a_2281_; uint8_t v___x_2285_; 
v___x_2285_ = lean_usize_dec_lt(v_i_2273_, v_sz_2272_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; 
lean_dec_ref(v_act_2268_);
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_b_2274_);
return v___x_2286_;
}
else
{
lean_object* v_snd_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2360_; 
v_snd_2287_ = lean_ctor_get(v_b_2274_, 1);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_b_2274_);
if (v_isSharedCheck_2360_ == 0)
{
lean_object* v_unused_2361_; 
v_unused_2361_ = lean_ctor_get(v_b_2274_, 0);
lean_dec(v_unused_2361_);
v___x_2289_ = v_b_2274_;
v_isShared_2290_ = v_isSharedCheck_2360_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_snd_2287_);
lean_dec(v_b_2274_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2360_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2291_; lean_object* v_a_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_box(0);
v_a_2292_ = lean_array_uget_borrowed(v_as_2271_, v_i_2273_);
lean_inc_ref(v_act_2268_);
lean_inc(v___y_2278_);
lean_inc_ref(v___y_2277_);
lean_inc(v___y_2276_);
lean_inc_ref(v___y_2275_);
lean_inc(v_a_2292_);
v___x_2293_ = lean_apply_6(v_act_2268_, v_a_2292_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, lean_box(0));
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2323_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2323_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2323_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
uint8_t v___y_2316_; uint8_t v___x_2322_; 
v___x_2322_ = l_List_isEmpty___redArg(v_a_2294_);
if (v___x_2322_ == 0)
{
v___y_2316_ = v___x_2322_;
goto v___jp_2315_;
}
else
{
if (v_collectAll_2270_ == 0)
{
v___y_2316_ = v___x_2322_;
goto v___jp_2315_;
}
else
{
lean_del_object(v___x_2296_);
goto v___jp_2298_;
}
}
v___jp_2298_:
{
lean_object* v___x_2299_; lean_object* v_mctx_2300_; lean_object* v___x_2301_; 
v___x_2299_ = lean_st_ref_get(v___y_2276_);
v_mctx_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc_ref(v_mctx_2300_);
lean_dec(v___x_2299_);
v___x_2301_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2269_, v___y_2276_, v___y_2278_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v___x_2303_; 
lean_dec_ref_known(v___x_2301_, 1);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 1, v_mctx_2300_);
lean_ctor_set(v___x_2289_, 0, v_a_2294_);
v___x_2303_ = v___x_2289_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2294_);
lean_ctor_set(v_reuseFailAlloc_2306_, 1, v_mctx_2300_);
v___x_2303_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2304_ = lean_array_push(v_snd_2287_, v___x_2303_);
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2291_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v_a_2281_ = v___x_2305_;
goto v___jp_2280_;
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v_mctx_2300_);
lean_dec(v_a_2294_);
lean_del_object(v___x_2289_);
lean_dec(v_snd_2287_);
lean_dec_ref(v_act_2268_);
v_a_2307_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2301_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2301_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
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
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
v___jp_2315_:
{
if (v___y_2316_ == 0)
{
lean_del_object(v___x_2296_);
goto v___jp_2298_;
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2320_; 
lean_dec(v_a_2294_);
lean_del_object(v___x_2289_);
lean_dec_ref(v_act_2268_);
v___x_2317_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___closed__0));
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v_snd_2287_);
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v___x_2318_);
v___x_2320_ = v___x_2296_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2318_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2359_; 
v_a_2324_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2326_ = v___x_2293_;
v_isShared_2327_ = v_isSharedCheck_2359_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2293_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2359_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
uint8_t v___y_2329_; uint8_t v___x_2357_; 
v___x_2357_ = l_Lean_Exception_isInterrupt(v_a_2324_);
if (v___x_2357_ == 0)
{
uint8_t v___x_2358_; 
lean_inc(v_a_2324_);
v___x_2358_ = l_Lean_Exception_isRuntime(v_a_2324_);
v___y_2329_ = v___x_2358_;
goto v___jp_2328_;
}
else
{
v___y_2329_ = v___x_2357_;
goto v___jp_2328_;
}
v___jp_2328_:
{
if (v___y_2329_ == 0)
{
lean_object* v___x_2330_; 
lean_del_object(v___x_2326_);
v___x_2330_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2269_, v___y_2276_, v___y_2278_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2344_; 
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2344_ == 0)
{
lean_object* v_unused_2345_; 
v_unused_2345_ = lean_ctor_get(v___x_2330_, 0);
lean_dec(v_unused_2345_);
v___x_2332_ = v___x_2330_;
v_isShared_2333_ = v_isSharedCheck_2344_;
goto v_resetjp_2331_;
}
else
{
lean_dec(v___x_2330_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2344_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
uint8_t v___x_2334_; 
v___x_2334_ = l_Lean_Meta_LibrarySearch_isAbortSpeculation(v_a_2324_);
lean_dec(v_a_2324_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2336_; 
lean_del_object(v___x_2332_);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v___x_2291_);
v___x_2336_ = v___x_2289_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_snd_2287_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
v_a_2281_ = v___x_2336_;
goto v___jp_2280_;
}
}
else
{
lean_object* v___x_2339_; 
lean_dec_ref(v_act_2268_);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v___x_2291_);
v___x_2339_ = v___x_2289_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_snd_2287_);
v___x_2339_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2341_; 
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v___x_2339_);
v___x_2341_ = v___x_2332_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v___x_2339_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec(v_a_2324_);
lean_del_object(v___x_2289_);
lean_dec(v_snd_2287_);
lean_dec_ref(v_act_2268_);
v_a_2346_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2330_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2330_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_a_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_object* v___x_2355_; 
lean_del_object(v___x_2289_);
lean_dec(v_snd_2287_);
lean_dec_ref(v_act_2268_);
if (v_isShared_2327_ == 0)
{
v___x_2355_ = v___x_2326_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2324_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
}
v___jp_2280_:
{
size_t v___x_2282_; size_t v___x_2283_; 
v___x_2282_ = ((size_t)1ULL);
v___x_2283_ = lean_usize_add(v_i_2273_, v___x_2282_);
v_i_2273_ = v___x_2283_;
v_b_2274_ = v_a_2281_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0___boxed(lean_object* v_act_2362_, lean_object* v_a_2363_, lean_object* v_collectAll_2364_, lean_object* v_as_2365_, lean_object* v_sz_2366_, lean_object* v_i_2367_, lean_object* v_b_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
uint8_t v_collectAll_boxed_2374_; size_t v_sz_boxed_2375_; size_t v_i_boxed_2376_; lean_object* v_res_2377_; 
v_collectAll_boxed_2374_ = lean_unbox(v_collectAll_2364_);
v_sz_boxed_2375_ = lean_unbox_usize(v_sz_2366_);
lean_dec(v_sz_2366_);
v_i_boxed_2376_ = lean_unbox_usize(v_i_2367_);
lean_dec(v_i_2367_);
v_res_2377_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(v_act_2362_, v_a_2363_, v_collectAll_boxed_2374_, v_as_2365_, v_sz_boxed_2375_, v_i_boxed_2376_, v_b_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
lean_dec_ref(v_as_2365_);
lean_dec_ref(v_a_2363_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach(lean_object* v_act_2383_, lean_object* v_candidates_2384_, uint8_t v_collectAll_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_){
_start:
{
lean_object* v___x_2391_; 
v___x_2391_ = l_Lean_Meta_saveState___redArg(v_a_2387_, v_a_2389_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2393_; size_t v_sz_2394_; size_t v___x_2395_; lean_object* v___x_2396_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2392_);
lean_dec_ref_known(v___x_2391_, 1);
v___x_2393_ = ((lean_object*)(l_Lean_Meta_LibrarySearch_tryOnEach___closed__1));
v_sz_2394_ = lean_array_size(v_candidates_2384_);
v___x_2395_ = ((size_t)0ULL);
v___x_2396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LibrarySearch_tryOnEach_spec__0(v_act_2383_, v_a_2392_, v_collectAll_2385_, v_candidates_2384_, v_sz_2394_, v___x_2395_, v___x_2393_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_);
lean_dec(v_a_2392_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2411_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2411_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2411_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v_fst_2401_; 
v_fst_2401_ = lean_ctor_get(v_a_2397_, 0);
if (lean_obj_tag(v_fst_2401_) == 0)
{
lean_object* v_snd_2402_; lean_object* v___x_2403_; lean_object* v___x_2405_; 
v_snd_2402_ = lean_ctor_get(v_a_2397_, 1);
lean_inc(v_snd_2402_);
lean_dec(v_a_2397_);
v___x_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2403_, 0, v_snd_2402_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2403_);
v___x_2405_ = v___x_2399_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2403_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
else
{
lean_object* v_val_2407_; lean_object* v___x_2409_; 
lean_inc_ref(v_fst_2401_);
lean_dec(v_a_2397_);
v_val_2407_ = lean_ctor_get(v_fst_2401_, 0);
lean_inc(v_val_2407_);
lean_dec_ref_known(v_fst_2401_, 1);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v_val_2407_);
v___x_2409_ = v___x_2399_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_val_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_a_2412_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2396_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2396_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
lean_dec_ref(v_act_2383_);
v_a_2420_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2391_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2391_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_tryOnEach___boxed(lean_object* v_act_2428_, lean_object* v_candidates_2429_, lean_object* v_collectAll_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_){
_start:
{
uint8_t v_collectAll_boxed_2436_; lean_object* v_res_2437_; 
v_collectAll_boxed_2436_ = lean_unbox(v_collectAll_2430_);
v_res_2437_ = l_Lean_Meta_LibrarySearch_tryOnEach(v_act_2428_, v_candidates_2429_, v_collectAll_boxed_2436_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2433_);
lean_dec(v_a_2432_);
lean_dec_ref(v_a_2431_);
lean_dec_ref(v_candidates_2429_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg(){
_start:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2439_ = lean_obj_once(&l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0, &l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0_once, _init_l_Lean_Meta_LibrarySearch_abortSpeculation___redArg___closed__0);
v___x_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg___boxed(lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(lean_object* v_00_u03b1_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v___x_2449_; 
v___x_2449_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___boxed(lean_object* v_00_u03b1_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0(v_00_u03b1_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(lean_object* v_category_2457_, lean_object* v_opts_2458_, lean_object* v_act_2459_, lean_object* v_decl_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
v___x_2466_ = lean_apply_4(v_act_2459_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
v___x_2467_ = l_Lean_profileitIOUnsafe___redArg(v_category_2457_, v_opts_2458_, v___x_2466_, v_decl_2460_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg___boxed(lean_object* v_category_2468_, lean_object* v_opts_2469_, lean_object* v_act_2470_, lean_object* v_decl_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v_category_2468_, v_opts_2469_, v_act_2470_, v_decl_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec_ref(v_opts_2469_);
lean_dec_ref(v_category_2468_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(lean_object* v_00_u03b1_2478_, lean_object* v_category_2479_, lean_object* v_opts_2480_, lean_object* v_act_2481_, lean_object* v_decl_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v_category_2479_, v_opts_2480_, v_act_2481_, v_decl_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___boxed(lean_object* v_00_u03b1_2489_, lean_object* v_category_2490_, lean_object* v_opts_2491_, lean_object* v_act_2492_, lean_object* v_decl_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3(v_00_u03b1_2489_, v_category_2490_, v_opts_2491_, v_act_2492_, v_decl_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec_ref(v_opts_2491_);
lean_dec_ref(v_category_2490_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(lean_object* v_a_2500_, lean_object* v___x_2501_, lean_object* v_tactic_2502_, lean_object* v_allowFailure_2503_, lean_object* v_cand_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___x_2510_; 
lean_inc(v___y_2508_);
lean_inc_ref(v___y_2507_);
lean_inc(v___y_2506_);
lean_inc_ref(v___y_2505_);
v___x_2510_ = lean_apply_5(v_a_2500_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, lean_box(0));
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; uint8_t v___x_2512_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = lean_unbox(v_a_2511_);
lean_dec(v_a_2511_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; 
v___x_2513_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma(v___x_2501_, v_tactic_2502_, v_allowFailure_2503_, v_cand_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec_ref(v_cand_2504_);
lean_dec_ref(v_allowFailure_2503_);
lean_dec_ref(v_tactic_2502_);
lean_dec_ref(v___x_2501_);
v___x_2514_ = l_Lean_Meta_LibrarySearch_abortSpeculation___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__0___redArg();
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2514_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2514_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec_ref(v_cand_2504_);
lean_dec_ref(v_allowFailure_2503_);
lean_dec_ref(v_tactic_2502_);
lean_dec_ref(v___x_2501_);
v_a_2523_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2510_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2510_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed(lean_object* v_a_2531_, lean_object* v___x_2532_, lean_object* v_tactic_2533_, lean_object* v_allowFailure_2534_, lean_object* v_cand_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0(v_a_2531_, v___x_2532_, v_tactic_2533_, v_allowFailure_2534_, v_cand_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
return v_res_2541_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(lean_object* v_as_2542_, size_t v_i_2543_, size_t v_stop_2544_){
_start:
{
uint8_t v___x_2545_; 
v___x_2545_ = lean_usize_dec_eq(v_i_2543_, v_stop_2544_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; lean_object* v_fst_2547_; uint8_t v___x_2548_; 
v___x_2546_ = lean_array_uget_borrowed(v_as_2542_, v_i_2543_);
v_fst_2547_ = lean_ctor_get(v___x_2546_, 0);
v___x_2548_ = l_List_isEmpty___redArg(v_fst_2547_);
if (v___x_2548_ == 0)
{
size_t v___x_2549_; size_t v___x_2550_; 
v___x_2549_ = ((size_t)1ULL);
v___x_2550_ = lean_usize_add(v_i_2543_, v___x_2549_);
v_i_2543_ = v___x_2550_;
goto _start;
}
else
{
return v___x_2548_;
}
}
else
{
uint8_t v___x_2552_; 
v___x_2552_ = 0;
return v___x_2552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2___boxed(lean_object* v_as_2553_, lean_object* v_i_2554_, lean_object* v_stop_2555_){
_start:
{
size_t v_i_boxed_2556_; size_t v_stop_boxed_2557_; uint8_t v_res_2558_; lean_object* v_r_2559_; 
v_i_boxed_2556_ = lean_unbox_usize(v_i_2554_);
lean_dec(v_i_2554_);
v_stop_boxed_2557_ = lean_unbox_usize(v_stop_2555_);
lean_dec(v_stop_2555_);
v_res_2558_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(v_as_2553_, v_i_boxed_2556_, v_stop_boxed_2557_);
lean_dec_ref(v_as_2553_);
v_r_2559_ = lean_box(v_res_2558_);
return v_r_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(lean_object* v_goal_2560_, lean_object* v___x_2561_, size_t v_sz_2562_, size_t v_i_2563_, lean_object* v_bs_2564_){
_start:
{
uint8_t v___x_2565_; 
v___x_2565_ = lean_usize_dec_lt(v_i_2563_, v_sz_2562_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; 
lean_dec_ref(v___x_2561_);
lean_dec(v_goal_2560_);
v___x_2566_ = l_unsafeCast___redArg(v_bs_2564_);
lean_dec_ref(v_bs_2564_);
return v___x_2566_;
}
else
{
lean_object* v_v_2567_; lean_object* v___x_2568_; lean_object* v_bs_x27_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; size_t v___x_2573_; size_t v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v_v_2567_ = lean_array_uget(v_bs_2564_, v_i_2563_);
v___x_2568_ = lean_unsigned_to_nat(0u);
v_bs_x27_2569_ = lean_array_uset(v_bs_2564_, v_i_2563_, v___x_2568_);
v___x_2570_ = l_unsafeCast___redArg(v_v_2567_);
lean_dec(v_v_2567_);
lean_inc_ref(v___x_2561_);
lean_inc(v_goal_2560_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_goal_2560_);
lean_ctor_set(v___x_2571_, 1, v___x_2561_);
v___x_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
lean_ctor_set(v___x_2572_, 1, v___x_2570_);
v___x_2573_ = ((size_t)1ULL);
v___x_2574_ = lean_usize_add(v_i_2563_, v___x_2573_);
v___x_2575_ = l_unsafeCast___redArg(v___x_2572_);
lean_dec_ref_known(v___x_2572_, 2);
v___x_2576_ = lean_array_uset(v_bs_x27_2569_, v_i_2563_, v___x_2575_);
v_i_2563_ = v___x_2574_;
v_bs_2564_ = v___x_2576_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1___boxed(lean_object* v_goal_2578_, lean_object* v___x_2579_, lean_object* v_sz_2580_, lean_object* v_i_2581_, lean_object* v_bs_2582_){
_start:
{
size_t v_sz_boxed_2583_; size_t v_i_boxed_2584_; lean_object* v_res_2585_; 
v_sz_boxed_2583_ = lean_unbox_usize(v_sz_2580_);
lean_dec(v_sz_2580_);
v_i_boxed_2584_ = lean_unbox_usize(v_i_2581_);
lean_dec(v_i_2581_);
v_res_2585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(v_goal_2578_, v___x_2579_, v_sz_boxed_2583_, v_i_boxed_2584_, v_bs_2582_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(lean_object* v_leavePercentHeartbeats_2587_, lean_object* v___x_2588_, lean_object* v_tactic_2589_, lean_object* v_allowFailure_2590_, lean_object* v_goal_2591_, uint8_t v_collectAll_2592_, uint8_t v_includeStar_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercentHeartbeats_2587_, v___y_2596_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___f_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
lean_dec_ref_known(v___x_2602_, 1);
v___f_2604_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2604_, 0, v_a_2603_);
lean_closure_set(v___f_2604_, 1, v___x_2588_);
lean_closure_set(v___f_2604_, 2, v_tactic_2589_);
lean_closure_set(v___f_2604_, 3, v_allowFailure_2590_);
v___x_2605_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0));
lean_inc(v_goal_2591_);
v___x_2606_ = l_Lean_Meta_LibrarySearch_librarySearchSymm(v___x_2605_, v_goal_2591_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2608_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___x_2606_, 1);
lean_inc_ref(v___f_2604_);
v___x_2608_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2604_, v_a_2607_, v_collectAll_2592_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v_a_2607_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
if (lean_obj_tag(v_a_2609_) == 0)
{
lean_dec_ref_known(v___x_2608_, 1);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
goto v___jp_2599_;
}
else
{
lean_object* v_val_2610_; lean_object* v___x_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v_val_2610_ = lean_ctor_get(v_a_2609_, 0);
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = lean_array_get_size(v_val_2610_);
v___x_2663_ = lean_nat_dec_lt(v___x_2661_, v___x_2662_);
if (v___x_2663_ == 0)
{
goto v___jp_2657_;
}
else
{
if (v___x_2663_ == 0)
{
goto v___jp_2657_;
}
else
{
size_t v___x_2664_; size_t v___x_2665_; uint8_t v___x_2666_; 
v___x_2664_ = ((size_t)0ULL);
v___x_2665_ = lean_usize_of_nat(v___x_2662_);
v___x_2666_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(v_val_2610_, v___x_2664_, v___x_2665_);
if (v___x_2666_ == 0)
{
goto v___jp_2657_;
}
else
{
lean_dec_ref_known(v_a_2609_, 1);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
return v___x_2608_;
}
}
}
v___jp_2611_:
{
if (v_includeStar_2593_ == 0)
{
lean_dec_ref_known(v_a_2609_, 1);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
return v___x_2608_;
}
else
{
lean_object* v___x_2612_; 
lean_dec_ref_known(v___x_2608_, 1);
v___x_2612_ = l_Lean_Meta_LibrarySearch_getStarLemmas(v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2648_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2648_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2648_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; uint8_t v___x_2619_; 
v___x_2617_ = lean_array_get_size(v_a_2613_);
v___x_2618_ = lean_unsigned_to_nat(0u);
v___x_2619_ = lean_nat_dec_eq(v___x_2617_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; lean_object* v_mctx_2621_; size_t v_sz_2622_; size_t v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_inc(v_val_2610_);
lean_del_object(v___x_2615_);
lean_dec_ref_known(v_a_2609_, 1);
v___x_2620_ = lean_st_ref_get(v___y_2595_);
v_mctx_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc_ref(v_mctx_2621_);
lean_dec(v___x_2620_);
v_sz_2622_ = lean_array_size(v_a_2613_);
v___x_2623_ = ((size_t)0ULL);
v___x_2624_ = l_unsafeCast___redArg(v_a_2613_);
lean_dec(v_a_2613_);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(v_goal_2591_, v_mctx_2621_, v_sz_2622_, v___x_2623_, v___x_2624_);
v___x_2626_ = l_unsafeCast___redArg(v___x_2625_);
lean_dec_ref(v___x_2625_);
v___x_2627_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2604_, v___x_2626_, v_collectAll_2592_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___x_2626_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2644_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2630_ = v___x_2627_;
v_isShared_2631_ = v_isSharedCheck_2644_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2627_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2644_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
if (lean_obj_tag(v_a_2628_) == 0)
{
lean_del_object(v___x_2630_);
lean_dec(v_val_2610_);
goto v___jp_2599_;
}
else
{
lean_object* v_val_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2643_; 
v_val_2632_ = lean_ctor_get(v_a_2628_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v_a_2628_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2634_ = v_a_2628_;
v_isShared_2635_ = v_isSharedCheck_2643_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_val_2632_);
lean_dec(v_a_2628_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2643_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2636_; lean_object* v___x_2638_; 
v___x_2636_ = l_Array_append___redArg(v_val_2610_, v_val_2632_);
lean_dec(v_val_2632_);
if (v_isShared_2635_ == 0)
{
lean_ctor_set(v___x_2634_, 0, v___x_2636_);
v___x_2638_ = v___x_2634_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2636_);
v___x_2638_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2640_; 
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 0, v___x_2638_);
v___x_2640_ = v___x_2630_;
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
}
}
else
{
lean_dec(v_val_2610_);
return v___x_2627_;
}
}
else
{
lean_object* v___x_2646_; 
lean_dec(v_a_2613_);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v_a_2609_);
v___x_2646_ = v___x_2615_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2609_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec_ref_known(v_a_2609_, 1);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
v_a_2649_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2612_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2612_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
}
v___jp_2657_:
{
if (v_collectAll_2592_ == 0)
{
lean_object* v___x_2658_; lean_object* v___x_2659_; uint8_t v___x_2660_; 
v___x_2658_ = lean_array_get_size(v_val_2610_);
v___x_2659_ = lean_unsigned_to_nat(0u);
v___x_2660_ = lean_nat_dec_eq(v___x_2658_, v___x_2659_);
if (v___x_2660_ == 0)
{
lean_dec_ref_known(v_a_2609_, 1);
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
return v___x_2608_;
}
else
{
goto v___jp_2611_;
}
}
else
{
goto v___jp_2611_;
}
}
}
}
else
{
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
return v___x_2608_;
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_dec_ref(v___f_2604_);
lean_dec(v_goal_2591_);
v_a_2667_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2606_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2606_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_goal_2591_);
lean_dec_ref(v_allowFailure_2590_);
lean_dec_ref(v_tactic_2589_);
lean_dec_ref(v___x_2588_);
v_a_2675_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2602_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2602_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
v___jp_2599_:
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2600_ = lean_box(0);
v___x_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
return v___x_2601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed(lean_object* v_leavePercentHeartbeats_2683_, lean_object* v___x_2684_, lean_object* v_tactic_2685_, lean_object* v_allowFailure_2686_, lean_object* v_goal_2687_, lean_object* v_collectAll_2688_, lean_object* v_includeStar_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
uint8_t v_collectAll_boxed_2695_; uint8_t v_includeStar_boxed_2696_; lean_object* v_res_2697_; 
v_collectAll_boxed_2695_ = lean_unbox(v_collectAll_2688_);
v_includeStar_boxed_2696_ = lean_unbox(v_includeStar_2689_);
v_res_2697_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1(v_leavePercentHeartbeats_2683_, v___x_2684_, v_tactic_2685_, v_allowFailure_2686_, v_goal_2687_, v_collectAll_boxed_2695_, v_includeStar_boxed_2696_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v_leavePercentHeartbeats_2683_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(lean_object* v_goal_2698_, lean_object* v_x_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v___x_2705_; 
v___x_2705_ = l_Lean_MVarId_getType(v_goal_2698_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2714_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2714_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2714_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2710_; lean_object* v___x_2712_; 
v___x_2710_ = l_Lean_MessageData_ofExpr(v_a_2706_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2710_);
v___x_2712_ = v___x_2708_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
else
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2722_; 
v_a_2715_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2717_ = v___x_2705_;
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2705_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_a_2715_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed(lean_object* v_goal_2723_, lean_object* v_x_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2(v_goal_2723_, v_x_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec_ref(v_x_2724_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6(lean_object* v_leavePercentHeartbeats_2731_, lean_object* v___x_2732_, lean_object* v_tactic_2733_, lean_object* v_allowFailure_2734_, lean_object* v_goal_2735_, uint8_t v_collectAll_2736_, uint8_t v_includeStar_2737_, uint8_t v___x_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v___x_2747_; 
v___x_2747_ = l_Lean_Meta_LibrarySearch_mkHeartbeatCheck___redArg(v_leavePercentHeartbeats_2731_, v___y_2741_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc(v_a_2748_);
lean_dec_ref_known(v___x_2747_, 1);
v___f_2749_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2749_, 0, v_a_2748_);
lean_closure_set(v___f_2749_, 1, v___x_2732_);
lean_closure_set(v___f_2749_, 2, v_tactic_2733_);
lean_closure_set(v___f_2749_, 3, v_allowFailure_2734_);
v___x_2750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___closed__0));
lean_inc(v_goal_2735_);
v___x_2751_ = l_Lean_Meta_LibrarySearch_librarySearchSymm(v___x_2750_, v_goal_2735_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; lean_object* v___x_2753_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
lean_inc_ref(v___f_2749_);
v___x_2753_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2749_, v_a_2752_, v_collectAll_2736_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
lean_dec(v_a_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
if (lean_obj_tag(v_a_2754_) == 0)
{
lean_dec_ref_known(v___x_2753_, 1);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
goto v___jp_2744_;
}
else
{
lean_object* v_val_2755_; lean_object* v___x_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; 
v_val_2755_ = lean_ctor_get(v_a_2754_, 0);
v___x_2807_ = lean_unsigned_to_nat(0u);
v___x_2808_ = lean_array_get_size(v_val_2755_);
v___x_2809_ = lean_nat_dec_lt(v___x_2807_, v___x_2808_);
if (v___x_2809_ == 0)
{
goto v___jp_2803_;
}
else
{
if (v___x_2809_ == 0)
{
goto v___jp_2803_;
}
else
{
size_t v___x_2810_; size_t v___x_2811_; uint8_t v___x_2812_; 
v___x_2810_ = ((size_t)0ULL);
v___x_2811_ = lean_usize_of_nat(v___x_2808_);
v___x_2812_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__2(v_val_2755_, v___x_2810_, v___x_2811_);
if (v___x_2812_ == 0)
{
goto v___jp_2803_;
}
else
{
if (v___x_2738_ == 0)
{
goto v___jp_2802_;
}
else
{
lean_dec_ref_known(v_a_2754_, 1);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
return v___x_2753_;
}
}
}
}
v___jp_2756_:
{
lean_object* v___x_2757_; 
v___x_2757_ = l_Lean_Meta_LibrarySearch_getStarLemmas(v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2793_; 
v_a_2758_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2760_ = v___x_2757_;
v_isShared_2761_ = v_isSharedCheck_2793_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2757_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2793_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v___x_2762_ = lean_array_get_size(v_a_2758_);
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = lean_nat_dec_eq(v___x_2762_, v___x_2763_);
if (v___x_2764_ == 0)
{
lean_object* v___x_2765_; lean_object* v_mctx_2766_; size_t v_sz_2767_; size_t v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_inc(v_val_2755_);
lean_del_object(v___x_2760_);
lean_dec_ref_known(v_a_2754_, 1);
v___x_2765_ = lean_st_ref_get(v___y_2740_);
v_mctx_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc_ref(v_mctx_2766_);
lean_dec(v___x_2765_);
v_sz_2767_ = lean_array_size(v_a_2758_);
v___x_2768_ = ((size_t)0ULL);
v___x_2769_ = l_unsafeCast___redArg(v_a_2758_);
lean_dec(v_a_2758_);
v___x_2770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__1(v_goal_2735_, v_mctx_2766_, v_sz_2767_, v___x_2768_, v___x_2769_);
v___x_2771_ = l_unsafeCast___redArg(v___x_2770_);
lean_dec_ref(v___x_2770_);
v___x_2772_ = l_Lean_Meta_LibrarySearch_tryOnEach(v___f_2749_, v___x_2771_, v_collectAll_2736_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
lean_dec(v___x_2771_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2789_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2789_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2789_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
if (lean_obj_tag(v_a_2773_) == 0)
{
lean_del_object(v___x_2775_);
lean_dec(v_val_2755_);
goto v___jp_2744_;
}
else
{
lean_object* v_val_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2788_; 
v_val_2777_ = lean_ctor_get(v_a_2773_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v_a_2773_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2779_ = v_a_2773_;
v_isShared_2780_ = v_isSharedCheck_2788_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_val_2777_);
lean_dec(v_a_2773_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2788_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2781_ = l_Array_append___redArg(v_val_2755_, v_val_2777_);
lean_dec(v_val_2777_);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 0, v___x_2781_);
v___x_2783_ = v___x_2779_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2785_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2783_);
v___x_2785_ = v___x_2775_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
}
else
{
lean_dec(v_val_2755_);
return v___x_2772_;
}
}
else
{
lean_object* v___x_2791_; 
lean_dec(v_a_2758_);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 0, v_a_2754_);
v___x_2791_ = v___x_2760_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2754_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_dec_ref_known(v_a_2754_, 1);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
v_a_2794_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2757_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2757_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
v___jp_2802_:
{
if (v_includeStar_2737_ == 0)
{
if (v___x_2738_ == 0)
{
lean_dec_ref_known(v___x_2753_, 1);
goto v___jp_2756_;
}
else
{
lean_dec_ref_known(v_a_2754_, 1);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
return v___x_2753_;
}
}
else
{
lean_dec_ref_known(v___x_2753_, 1);
goto v___jp_2756_;
}
}
v___jp_2803_:
{
if (v_collectAll_2736_ == 0)
{
if (v___x_2738_ == 0)
{
goto v___jp_2802_;
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2804_ = lean_array_get_size(v_val_2755_);
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = lean_nat_dec_eq(v___x_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_dec_ref_known(v_a_2754_, 1);
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
return v___x_2753_;
}
else
{
goto v___jp_2802_;
}
}
}
else
{
goto v___jp_2802_;
}
}
}
}
else
{
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
return v___x_2753_;
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
lean_dec_ref(v___f_2749_);
lean_dec(v_goal_2735_);
v_a_2813_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2751_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2751_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
else
{
lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec(v_goal_2735_);
lean_dec_ref(v_allowFailure_2734_);
lean_dec_ref(v_tactic_2733_);
lean_dec_ref(v___x_2732_);
v_a_2821_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2747_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2747_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
v___jp_2744_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2745_ = lean_box(0);
v___x_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6___boxed(lean_object* v_leavePercentHeartbeats_2829_, lean_object* v___x_2830_, lean_object* v_tactic_2831_, lean_object* v_allowFailure_2832_, lean_object* v_goal_2833_, lean_object* v_collectAll_2834_, lean_object* v_includeStar_2835_, lean_object* v___x_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_){
_start:
{
uint8_t v_collectAll_boxed_2842_; uint8_t v_includeStar_boxed_2843_; uint8_t v___x_14148__boxed_2844_; lean_object* v_res_2845_; 
v_collectAll_boxed_2842_ = lean_unbox(v_collectAll_2834_);
v_includeStar_boxed_2843_ = lean_unbox(v_includeStar_2835_);
v___x_14148__boxed_2844_ = lean_unbox(v___x_2836_);
v_res_2845_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6(v_leavePercentHeartbeats_2829_, v___x_2830_, v_tactic_2831_, v_allowFailure_2832_, v_goal_2833_, v_collectAll_boxed_2842_, v_includeStar_boxed_2843_, v___x_14148__boxed_2844_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v_leavePercentHeartbeats_2829_);
return v_res_2845_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(lean_object* v_e_2846_){
_start:
{
if (lean_obj_tag(v_e_2846_) == 0)
{
uint8_t v___x_2847_; 
v___x_2847_ = 2;
return v___x_2847_;
}
else
{
lean_object* v_a_2848_; 
v_a_2848_ = lean_ctor_get(v_e_2846_, 0);
if (lean_obj_tag(v_a_2848_) == 0)
{
uint8_t v___x_2849_; 
v___x_2849_ = 1;
return v___x_2849_;
}
else
{
uint8_t v___x_2850_; 
v___x_2850_ = 0;
return v___x_2850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4___boxed(lean_object* v_e_2851_){
_start:
{
uint8_t v_res_2852_; lean_object* v_r_2853_; 
v_res_2852_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(v_e_2851_);
lean_dec_ref(v_e_2851_);
v_r_2853_ = lean_box(v_res_2852_);
return v_r_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(lean_object* v_cls_2854_, uint8_t v_collapsed_2855_, lean_object* v_tag_2856_, lean_object* v_opts_2857_, uint8_t v_clsEnabled_2858_, lean_object* v_oldTraces_2859_, lean_object* v_msg_2860_, lean_object* v_resStartStop_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_){
_start:
{
lean_object* v_fst_2867_; lean_object* v_snd_2868_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v_data_2872_; lean_object* v_fst_2883_; lean_object* v_snd_2884_; lean_object* v___x_2885_; uint8_t v___x_2886_; lean_object* v___y_2888_; lean_object* v_a_2889_; uint8_t v___y_2904_; double v___y_2935_; 
v_fst_2867_ = lean_ctor_get(v_resStartStop_2861_, 0);
lean_inc(v_fst_2867_);
v_snd_2868_ = lean_ctor_get(v_resStartStop_2861_, 1);
lean_inc(v_snd_2868_);
lean_dec_ref(v_resStartStop_2861_);
v_fst_2883_ = lean_ctor_get(v_snd_2868_, 0);
lean_inc(v_fst_2883_);
v_snd_2884_ = lean_ctor_get(v_snd_2868_, 1);
lean_inc(v_snd_2884_);
lean_dec(v_snd_2868_);
v___x_2885_ = l_Lean_trace_profiler;
v___x_2886_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_2857_, v___x_2885_);
if (v___x_2886_ == 0)
{
v___y_2904_ = v___x_2886_;
goto v___jp_2903_;
}
else
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2941_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_opts_2857_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; lean_object* v___x_2943_; double v___x_2944_; double v___x_2945_; double v___x_2946_; 
v___x_2942_ = l_Lean_trace_profiler_threshold;
v___x_2943_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_2857_, v___x_2942_);
v___x_2944_ = lean_float_of_nat(v___x_2943_);
v___x_2945_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__3);
v___x_2946_ = lean_float_div(v___x_2944_, v___x_2945_);
v___y_2935_ = v___x_2946_;
goto v___jp_2934_;
}
else
{
lean_object* v___x_2947_; lean_object* v___x_2948_; double v___x_2949_; 
v___x_2947_ = l_Lean_trace_profiler_threshold;
v___x_2948_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__5(v_opts_2857_, v___x_2947_);
v___x_2949_ = lean_float_of_nat(v___x_2948_);
v___y_2935_ = v___x_2949_;
goto v___jp_2934_;
}
}
v___jp_2869_:
{
lean_object* v___x_2873_; 
lean_inc(v___y_2870_);
v___x_2873_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__2(v_oldTraces_2859_, v_data_2872_, v___y_2870_, v___y_2871_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v___x_2874_; 
lean_dec_ref_known(v___x_2873_, 1);
v___x_2874_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_2867_);
return v___x_2874_;
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec(v_fst_2867_);
v_a_2875_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2873_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2873_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
v___jp_2887_:
{
uint8_t v_result_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; double v___x_2893_; lean_object* v_data_2894_; 
v_result_2890_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4_spec__4(v_fst_2867_);
v___x_2891_ = lean_box(v_result_2890_);
v___x_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
v___x_2893_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__0);
lean_inc_ref(v_tag_2856_);
lean_inc_ref(v___x_2892_);
lean_inc(v_cls_2854_);
v_data_2894_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2894_, 0, v_cls_2854_);
lean_ctor_set(v_data_2894_, 1, v___x_2892_);
lean_ctor_set(v_data_2894_, 2, v_tag_2856_);
lean_ctor_set_float(v_data_2894_, sizeof(void*)*3, v___x_2893_);
lean_ctor_set_float(v_data_2894_, sizeof(void*)*3 + 8, v___x_2893_);
lean_ctor_set_uint8(v_data_2894_, sizeof(void*)*3 + 16, v_collapsed_2855_);
if (v___x_2886_ == 0)
{
lean_dec_ref_known(v___x_2892_, 1);
lean_dec(v_snd_2884_);
lean_dec(v_fst_2883_);
lean_dec_ref(v_tag_2856_);
lean_dec(v_cls_2854_);
v___y_2870_ = v___y_2888_;
v___y_2871_ = v_a_2889_;
v_data_2872_ = v_data_2894_;
goto v___jp_2869_;
}
else
{
lean_object* v_data_2895_; double v___x_2896_; double v___x_2897_; 
lean_dec_ref_known(v_data_2894_, 3);
v_data_2895_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2895_, 0, v_cls_2854_);
lean_ctor_set(v_data_2895_, 1, v___x_2892_);
lean_ctor_set(v_data_2895_, 2, v_tag_2856_);
v___x_2896_ = lean_unbox_float(v_fst_2883_);
lean_dec(v_fst_2883_);
lean_ctor_set_float(v_data_2895_, sizeof(void*)*3, v___x_2896_);
v___x_2897_ = lean_unbox_float(v_snd_2884_);
lean_dec(v_snd_2884_);
lean_ctor_set_float(v_data_2895_, sizeof(void*)*3 + 8, v___x_2897_);
lean_ctor_set_uint8(v_data_2895_, sizeof(void*)*3 + 16, v_collapsed_2855_);
v___y_2870_ = v___y_2888_;
v___y_2871_ = v_a_2889_;
v_data_2872_ = v_data_2895_;
goto v___jp_2869_;
}
}
v___jp_2898_:
{
lean_object* v_ref_2899_; lean_object* v___x_2900_; 
v_ref_2899_ = lean_ctor_get(v___y_2864_, 2);
lean_inc(v___y_2865_);
lean_inc_ref(v___y_2864_);
lean_inc(v___y_2863_);
lean_inc_ref(v___y_2862_);
lean_inc(v_fst_2867_);
v___x_2900_ = lean_apply_6(v_msg_2860_, v_fst_2867_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, lean_box(0));
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v___y_2888_ = v_ref_2899_;
v_a_2889_ = v_a_2901_;
goto v___jp_2887_;
}
else
{
lean_object* v___x_2902_; 
lean_dec_ref_known(v___x_2900_, 1);
v___x_2902_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2___closed__2);
v___y_2888_ = v_ref_2899_;
v_a_2889_ = v___x_2902_;
goto v___jp_2887_;
}
}
v___jp_2903_:
{
if (v_clsEnabled_2858_ == 0)
{
if (v___y_2904_ == 0)
{
lean_object* v___x_2905_; lean_object* v_traceState_2906_; lean_object* v_env_2907_; lean_object* v_nextMacroScope_2908_; lean_object* v_ngen_2909_; lean_object* v_auxDeclNGen_2910_; lean_object* v_cache_2911_; lean_object* v_messages_2912_; lean_object* v_infoState_2913_; lean_object* v_snapshotTasks_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v_snd_2884_);
lean_dec(v_fst_2883_);
lean_dec_ref(v_msg_2860_);
lean_dec_ref(v_tag_2856_);
lean_dec(v_cls_2854_);
v___x_2905_ = lean_st_ref_take(v___y_2865_);
v_traceState_2906_ = lean_ctor_get(v___x_2905_, 4);
v_env_2907_ = lean_ctor_get(v___x_2905_, 0);
v_nextMacroScope_2908_ = lean_ctor_get(v___x_2905_, 1);
v_ngen_2909_ = lean_ctor_get(v___x_2905_, 2);
v_auxDeclNGen_2910_ = lean_ctor_get(v___x_2905_, 3);
v_cache_2911_ = lean_ctor_get(v___x_2905_, 5);
v_messages_2912_ = lean_ctor_get(v___x_2905_, 6);
v_infoState_2913_ = lean_ctor_get(v___x_2905_, 7);
v_snapshotTasks_2914_ = lean_ctor_get(v___x_2905_, 8);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2916_ = v___x_2905_;
v_isShared_2917_ = v_isSharedCheck_2933_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_snapshotTasks_2914_);
lean_inc(v_infoState_2913_);
lean_inc(v_messages_2912_);
lean_inc(v_cache_2911_);
lean_inc(v_traceState_2906_);
lean_inc(v_auxDeclNGen_2910_);
lean_inc(v_ngen_2909_);
lean_inc(v_nextMacroScope_2908_);
lean_inc(v_env_2907_);
lean_dec(v___x_2905_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2933_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
uint64_t v_tid_2918_; lean_object* v_traces_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2932_; 
v_tid_2918_ = lean_ctor_get_uint64(v_traceState_2906_, sizeof(void*)*1);
v_traces_2919_ = lean_ctor_get(v_traceState_2906_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_traceState_2906_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2921_ = v_traceState_2906_;
v_isShared_2922_ = v_isSharedCheck_2932_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_traces_2919_);
lean_dec(v_traceState_2906_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2932_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2923_; lean_object* v___x_2925_; 
v___x_2923_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2859_, v_traces_2919_);
lean_dec_ref(v_traces_2919_);
if (v_isShared_2922_ == 0)
{
lean_ctor_set(v___x_2921_, 0, v___x_2923_);
v___x_2925_ = v___x_2921_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2923_);
lean_ctor_set_uint64(v_reuseFailAlloc_2931_, sizeof(void*)*1, v_tid_2918_);
v___x_2925_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
lean_object* v___x_2927_; 
if (v_isShared_2917_ == 0)
{
lean_ctor_set(v___x_2916_, 4, v___x_2925_);
v___x_2927_ = v___x_2916_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_env_2907_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_nextMacroScope_2908_);
lean_ctor_set(v_reuseFailAlloc_2930_, 2, v_ngen_2909_);
lean_ctor_set(v_reuseFailAlloc_2930_, 3, v_auxDeclNGen_2910_);
lean_ctor_set(v_reuseFailAlloc_2930_, 4, v___x_2925_);
lean_ctor_set(v_reuseFailAlloc_2930_, 5, v_cache_2911_);
lean_ctor_set(v_reuseFailAlloc_2930_, 6, v_messages_2912_);
lean_ctor_set(v_reuseFailAlloc_2930_, 7, v_infoState_2913_);
lean_ctor_set(v_reuseFailAlloc_2930_, 8, v_snapshotTasks_2914_);
v___x_2927_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_st_ref_put(v___y_2865_, v___x_2927_);
v___x_2929_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__2_spec__3___redArg(v_fst_2867_);
return v___x_2929_;
}
}
}
}
}
else
{
goto v___jp_2898_;
}
}
else
{
goto v___jp_2898_;
}
}
v___jp_2934_:
{
double v___x_2936_; double v___x_2937_; double v___x_2938_; uint8_t v___x_2939_; 
v___x_2936_ = lean_unbox_float(v_snd_2884_);
v___x_2937_ = lean_unbox_float(v_fst_2883_);
v___x_2938_ = lean_float_sub(v___x_2936_, v___x_2937_);
v___x_2939_ = lean_float_decLt(v___y_2935_, v___x_2938_);
v___y_2904_ = v___x_2939_;
goto v___jp_2903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4___boxed(lean_object* v_cls_2950_, lean_object* v_collapsed_2951_, lean_object* v_tag_2952_, lean_object* v_opts_2953_, lean_object* v_clsEnabled_2954_, lean_object* v_oldTraces_2955_, lean_object* v_msg_2956_, lean_object* v_resStartStop_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
uint8_t v_collapsed_boxed_2963_; uint8_t v_clsEnabled_boxed_2964_; lean_object* v_res_2965_; 
v_collapsed_boxed_2963_ = lean_unbox(v_collapsed_2951_);
v_clsEnabled_boxed_2964_ = lean_unbox(v_clsEnabled_2954_);
v_res_2965_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v_cls_2950_, v_collapsed_boxed_2963_, v_tag_2952_, v_opts_2953_, v_clsEnabled_boxed_2964_, v_oldTraces_2955_, v_msg_2956_, v_resStartStop_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec_ref(v_opts_2953_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(lean_object* v_goal_2969_, lean_object* v_tactic_2970_, lean_object* v_allowFailure_2971_, lean_object* v_leavePercentHeartbeats_2972_, uint8_t v_includeStar_2973_, uint8_t v_collectAll_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_){
_start:
{
lean_object* v_toCold_2980_; lean_object* v_options_2981_; lean_object* v_inheritedTraceOptions_2982_; uint8_t v_hasTrace_2983_; lean_object* v___x_2984_; 
v_toCold_2980_ = lean_ctor_get(v_a_2977_, 0);
v_options_2981_ = lean_ctor_get(v_toCold_2980_, 2);
v_inheritedTraceOptions_2982_ = lean_ctor_get(v_toCold_2980_, 11);
v_hasTrace_2983_ = lean_ctor_get_uint8(v_options_2981_, sizeof(void*)*1);
v___x_2984_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__1_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
if (v_hasTrace_2983_ == 0)
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___f_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2985_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___closed__0));
v___x_2986_ = lean_box(v_collectAll_2974_);
v___x_2987_ = lean_box(v_includeStar_2973_);
v___f_2988_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2988_, 0, v_leavePercentHeartbeats_2972_);
lean_closure_set(v___f_2988_, 1, v___x_2985_);
lean_closure_set(v___f_2988_, 2, v_tactic_2970_);
lean_closure_set(v___f_2988_, 3, v_allowFailure_2971_);
lean_closure_set(v___f_2988_, 4, v_goal_2969_);
lean_closure_set(v___f_2988_, 5, v___x_2986_);
lean_closure_set(v___f_2988_, 6, v___x_2987_);
v___x_2989_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_2990_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2984_, v_options_2981_, v___f_2988_, v___x_2989_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
return v___x_2990_;
}
else
{
lean_object* v___f_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; uint8_t v___x_2995_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v_a_2999_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v_a_3014_; 
lean_inc(v_goal_2969_);
v___f_2991_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2991_, 0, v_goal_2969_);
v___x_2992_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__2_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_));
v___x_2993_ = ((lean_object*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___lam__0___closed__4));
v___x_2994_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__2);
v___x_2995_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2982_, v_options_2981_, v___x_2994_);
if (v___x_2995_ == 0)
{
lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3077_ = l_Lean_trace_profiler;
v___x_3078_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_2981_, v___x_3077_);
if (v___x_3078_ == 0)
{
uint8_t v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___f_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
lean_dec_ref(v___f_2991_);
v___x_3079_ = 0;
v___x_3080_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3080_, 0, v___x_3079_);
lean_ctor_set_uint8(v___x_3080_, 1, v_hasTrace_2983_);
lean_ctor_set_uint8(v___x_3080_, 2, v_hasTrace_2983_);
lean_ctor_set_uint8(v___x_3080_, 3, v_hasTrace_2983_);
v___x_3081_ = lean_box(v_collectAll_2974_);
v___x_3082_ = lean_box(v_includeStar_2973_);
v___f_3083_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_3083_, 0, v_leavePercentHeartbeats_2972_);
lean_closure_set(v___f_3083_, 1, v___x_3080_);
lean_closure_set(v___f_3083_, 2, v_tactic_2970_);
lean_closure_set(v___f_3083_, 3, v_allowFailure_2971_);
lean_closure_set(v___f_3083_, 4, v_goal_2969_);
lean_closure_set(v___f_3083_, 5, v___x_3081_);
lean_closure_set(v___f_3083_, 6, v___x_3082_);
v___x_3084_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_3085_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2984_, v_options_2981_, v___f_3083_, v___x_3084_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
return v___x_3085_;
}
else
{
goto v___jp_3023_;
}
}
else
{
goto v___jp_3023_;
}
v___jp_2996_:
{
lean_object* v___x_3000_; double v___x_3001_; double v___x_3002_; double v___x_3003_; double v___x_3004_; double v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v___x_3000_ = lean_io_mono_nanos_now();
v___x_3001_ = lean_float_of_nat(v___y_2998_);
v___x_3002_ = lean_float_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3_once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma___closed__3);
v___x_3003_ = lean_float_div(v___x_3001_, v___x_3002_);
v___x_3004_ = lean_float_of_nat(v___x_3000_);
v___x_3005_ = lean_float_div(v___x_3004_, v___x_3002_);
v___x_3006_ = lean_box_float(v___x_3003_);
v___x_3007_ = lean_box_float(v___x_3005_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3006_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3009_, 0, v_a_2999_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v___x_3010_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v___x_2992_, v_hasTrace_2983_, v___x_2993_, v_options_2981_, v___x_2995_, v___y_2997_, v___f_2991_, v___x_3009_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
return v___x_3010_;
}
v___jp_3011_:
{
lean_object* v___x_3015_; double v___x_3016_; double v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3015_ = lean_io_get_num_heartbeats();
v___x_3016_ = lean_float_of_nat(v___y_3013_);
v___x_3017_ = lean_float_of_nat(v___x_3015_);
v___x_3018_ = lean_box_float(v___x_3016_);
v___x_3019_ = lean_box_float(v___x_3017_);
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v_a_3014_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__4(v___x_2992_, v_hasTrace_2983_, v___x_2993_, v_options_2981_, v___x_2995_, v___y_3012_, v___f_2991_, v___x_3021_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
return v___x_3022_;
}
v___jp_3023_:
{
lean_object* v___x_3024_; lean_object* v_a_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
v___x_3024_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__0___redArg(v_a_2978_);
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref(v___x_3024_);
v___x_3026_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3027_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearchLemma_spec__1(v_options_2981_, v___x_3026_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; uint8_t v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___f_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3028_ = lean_io_mono_nanos_now();
v___x_3029_ = 0;
v___x_3030_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3030_, 0, v___x_3029_);
lean_ctor_set_uint8(v___x_3030_, 1, v_hasTrace_2983_);
lean_ctor_set_uint8(v___x_3030_, 2, v_hasTrace_2983_);
lean_ctor_set_uint8(v___x_3030_, 3, v_hasTrace_2983_);
v___x_3031_ = lean_box(v_collectAll_2974_);
v___x_3032_ = lean_box(v_includeStar_2973_);
v___f_3033_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__1___boxed), 12, 7);
lean_closure_set(v___f_3033_, 0, v_leavePercentHeartbeats_2972_);
lean_closure_set(v___f_3033_, 1, v___x_3030_);
lean_closure_set(v___f_3033_, 2, v_tactic_2970_);
lean_closure_set(v___f_3033_, 3, v_allowFailure_2971_);
lean_closure_set(v___f_3033_, 4, v_goal_2969_);
lean_closure_set(v___f_3033_, 5, v___x_3031_);
lean_closure_set(v___f_3033_, 6, v___x_3032_);
v___x_3034_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_3035_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2984_, v_options_2981_, v___f_3033_, v___x_3034_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
v_a_3036_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3035_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3035_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 1);
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
v___y_2997_ = v_a_3025_;
v___y_2998_ = v___x_3028_;
v_a_2999_ = v___x_3041_;
goto v___jp_2996_;
}
}
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
v_a_3044_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_3035_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3035_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
lean_ctor_set_tag(v___x_3046_, 0);
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
v___y_2997_ = v_a_3025_;
v___y_2998_ = v___x_3028_;
v_a_2999_ = v___x_3049_;
goto v___jp_2996_;
}
}
}
}
else
{
lean_object* v___x_3052_; uint8_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___f_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3052_ = lean_io_get_num_heartbeats();
v___x_3053_ = 0;
v___x_3054_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3054_, 0, v___x_3053_);
lean_ctor_set_uint8(v___x_3054_, 1, v___x_3027_);
lean_ctor_set_uint8(v___x_3054_, 2, v___x_3027_);
lean_ctor_set_uint8(v___x_3054_, 3, v___x_3027_);
v___x_3055_ = lean_box(v_collectAll_2974_);
v___x_3056_ = lean_box(v_includeStar_2973_);
v___x_3057_ = lean_box(v___x_3027_);
v___f_3058_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___lam__6___boxed), 13, 8);
lean_closure_set(v___f_3058_, 0, v_leavePercentHeartbeats_2972_);
lean_closure_set(v___f_3058_, 1, v___x_3054_);
lean_closure_set(v___f_3058_, 2, v_tactic_2970_);
lean_closure_set(v___f_3058_, 3, v_allowFailure_2971_);
lean_closure_set(v___f_3058_, 4, v_goal_2969_);
lean_closure_set(v___f_3058_, 5, v___x_3055_);
lean_closure_set(v___f_3058_, 6, v___x_3056_);
lean_closure_set(v___f_3058_, 7, v___x_3057_);
v___x_3059_ = lean_obj_once(&l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn___closed__3_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_);
v___x_3060_ = l_Lean_profileitM___at___00__private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27_spec__3___redArg(v___x_2984_, v_options_2981_, v___f_3058_, v___x_3059_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3060_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
lean_ctor_set_tag(v___x_3063_, 1);
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
v___y_3012_ = v_a_3025_;
v___y_3013_ = v___x_3052_;
v_a_3014_ = v___x_3066_;
goto v___jp_3011_;
}
}
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
v_a_3069_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3060_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3060_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
lean_ctor_set_tag(v___x_3071_, 0);
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
v___y_3012_ = v_a_3025_;
v___y_3013_ = v___x_3052_;
v_a_3014_ = v___x_3074_;
goto v___jp_3011_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27___boxed(lean_object* v_goal_3086_, lean_object* v_tactic_3087_, lean_object* v_allowFailure_3088_, lean_object* v_leavePercentHeartbeats_3089_, lean_object* v_includeStar_3090_, lean_object* v_collectAll_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_){
_start:
{
uint8_t v_includeStar_boxed_3097_; uint8_t v_collectAll_boxed_3098_; lean_object* v_res_3099_; 
v_includeStar_boxed_3097_ = lean_unbox(v_includeStar_3090_);
v_collectAll_boxed_3098_ = lean_unbox(v_collectAll_3091_);
v_res_3099_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(v_goal_3086_, v_tactic_3087_, v_allowFailure_3088_, v_leavePercentHeartbeats_3089_, v_includeStar_boxed_3097_, v_collectAll_boxed_3098_, v_a_3092_, v_a_3093_, v_a_3094_, v_a_3095_);
lean_dec(v_a_3095_);
lean_dec_ref(v_a_3094_);
lean_dec(v_a_3093_);
lean_dec_ref(v_a_3092_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch(lean_object* v_goal_3100_, lean_object* v_tactic_3101_, lean_object* v_allowFailure_3102_, lean_object* v_leavePercentHeartbeats_3103_, uint8_t v_includeStar_3104_, uint8_t v_collectAll_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v___x_3111_; 
v___x_3111_ = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_librarySearch_x27(v_goal_3100_, v_tactic_3101_, v_allowFailure_3102_, v_leavePercentHeartbeats_3103_, v_includeStar_3104_, v_collectAll_3105_, v_a_3106_, v_a_3107_, v_a_3108_, v_a_3109_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LibrarySearch_librarySearch___boxed(lean_object* v_goal_3112_, lean_object* v_tactic_3113_, lean_object* v_allowFailure_3114_, lean_object* v_leavePercentHeartbeats_3115_, lean_object* v_includeStar_3116_, lean_object* v_collectAll_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_){
_start:
{
uint8_t v_includeStar_boxed_3123_; uint8_t v_collectAll_boxed_3124_; lean_object* v_res_3125_; 
v_includeStar_boxed_3123_ = lean_unbox(v_includeStar_3116_);
v_collectAll_boxed_3124_ = lean_unbox(v_collectAll_3117_);
v_res_3125_ = l_Lean_Meta_LibrarySearch_librarySearch(v_goal_3112_, v_tactic_3113_, v_allowFailure_3114_, v_leavePercentHeartbeats_3115_, v_includeStar_boxed_3123_, v_collectAll_boxed_3124_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
return v_res_3125_;
}
}
lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Heartbeats(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Try(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_4259869437____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_472600257____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default = _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod_default();
l_Lean_Meta_LibrarySearch_instInhabitedDeclMod = _init_l_Lean_Meta_LibrarySearch_instInhabitedDeclMod();
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_858108106____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_ext);
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask = _init_l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask();
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_constantsPerImportTask);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_2955776588____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_starLemmasExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_initFn_00___x40_Lean_Meta_Tactic_LibrarySearch_989218885____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Tactic_LibrarySearch_0__Lean_Meta_LibrarySearch_abortSpeculationId);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Util_Heartbeats(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Init_Try(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_LibrarySearch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Heartbeats(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Try(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_LibrarySearch(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Tactic.SolveByElim
// Imports: public import Init.Data.Sum public import Lean.LabelAttribute public import Lean.Meta.Tactic.Backtrack public import Lean.Meta.Tactic.Constructor public import Lean.Meta.Tactic.Repeat public import Lean.Meta.Tactic.Symm public import Lean.Elab.Term
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_inferInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Iterator_ofList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Iterator_0__Lean_Meta_Iterator_filterMapM___next___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Iterator_head___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Tactic_Backtrack_backtrack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_applySymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_constructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_filter___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_labelled(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__2_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "solveByElim"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__2_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__2_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__2_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 179, 43, 63, 49, 24, 32, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__5_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__5_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__5_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "SolveByElim"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__17_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__17_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__17_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__19_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__19_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__19_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__26_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__26_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__26_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__28_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__28_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__28_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "trying to apply: "};
static const lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter(lean_object*);
static const lean_ctor_object l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter(lean_object*);
static const lean_ctor_object l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_processOptions(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_elabContextLemmas___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__0_value;
static const lean_array_object l_Lean_Meta_SolveByElim_elabContextLemmas___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___closed__1 = (const lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__1_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_elabContextLemmas___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 16, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___closed__2 = (const lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__2_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_elabContextLemmas___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___closed__3 = (const lean_object*)&l_Lean_Meta_SolveByElim_elabContextLemmas___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirstLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirstLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`repeat1'` made no progress"};
static const lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 32, .m_data = "⏮️ starting over using `exfalso`"};
static const lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_SolveByElim_solveByElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_SolveByElim_solveByElim___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_SolveByElim_solveByElim___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_solveByElim___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_solveByElim___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_solveByElim___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_saturateSymm(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_saturateSymm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___closed__0 = (const lean_object*)&l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "It doesn't make sense to remove local hypotheses when using `only` without `*`."};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__0 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1;
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__2 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__2_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__4 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__4_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__5 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__5_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__6 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__6_value;
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__7 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__7_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__7_value),LEAN_SCALAR_PTR_LITERAL(16, 215, 57, 166, 49, 41, 228, 20)}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__9 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__9_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__10 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__10_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__11 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__11_value;
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__12 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__12_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__12_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__14 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__14_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__15 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__15_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__16 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__16_value;
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__17 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__17_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__17_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__19 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__19_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__20 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__20_value;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__21 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__21_value;
static const lean_array_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__22 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__22_value;
static const lean_string_object l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "It doesn't make sense to use `*` without `only`."};
static const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__23 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__23_value;
static lean_once_cell_t l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24;
static const lean_ctor_object l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed__const__1 = (const lean_object*)&l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_box(0);
v___x_9_ = l_unsafeCast___redArg(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__5_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_12_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__4_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_13_ = l_Lean_Name_str___override(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_16_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__6_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_17_ = l_Lean_Name_str___override(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_19_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__8_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_20_ = l_Lean_Name_str___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_21_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_22_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__9_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_23_ = l_Lean_Name_str___override(v___x_22_, v___x_21_);
return v___x_23_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_26_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__10_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_27_ = l_Lean_Name_str___override(v___x_26_, v___x_25_);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__12_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_30_ = l_Lean_Name_num___override(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_32_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__13_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_33_ = l_Lean_Name_str___override(v___x_32_, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_35_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__14_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_36_ = l_Lean_Name_str___override(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_38_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__15_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_39_ = l_Lean_Name_str___override(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__17_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_42_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__16_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_43_ = l_Lean_Name_str___override(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__19_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_46_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__18_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_47_ = l_Lean_Name_str___override(v___x_46_, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__7_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_49_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__20_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_50_ = l_Lean_Name_str___override(v___x_49_, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__0_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_52_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__21_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_53_ = l_Lean_Name_str___override(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__1_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_55_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__22_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_56_ = l_Lean_Name_str___override(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__11_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_58_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__23_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_59_ = l_Lean_Name_str___override(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_unsigned_to_nat(1979843508u);
v___x_61_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__24_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_62_ = l_Lean_Name_num___override(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__26_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_65_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__25_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_66_ = l_Lean_Name_str___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__28_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_69_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__27_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_70_ = l_Lean_Name_str___override(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_unsigned_to_nat(2u);
v___x_72_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__29_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_73_ = l_Lean_Name_num___override(v___x_72_, v___x_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_76_ = 0;
v___x_77_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__30_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_);
v___x_78_ = l_Lean_registerTraceClass(v___x_75_, v___x_76_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2____boxed(lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_();
return v_res_80_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_unsigned_to_nat(32u);
v___x_82_ = lean_mk_empty_array_with_capacity(v___x_81_);
v___x_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_84_ = ((size_t)5ULL);
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = lean_unsigned_to_nat(32u);
v___x_87_ = lean_mk_empty_array_with_capacity(v___x_86_);
v___x_88_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__0);
v___x_89_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
lean_ctor_set(v___x_89_, 2, v___x_85_);
lean_ctor_set(v___x_89_, 3, v___x_85_);
lean_ctor_set_usize(v___x_89_, 4, v___x_84_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_traceState_93_; lean_object* v_traces_94_; lean_object* v___x_95_; lean_object* v_traceState_96_; lean_object* v_env_97_; lean_object* v_nextMacroScope_98_; lean_object* v_ngen_99_; lean_object* v_auxDeclNGen_100_; lean_object* v_cache_101_; lean_object* v_messages_102_; lean_object* v_infoState_103_; lean_object* v_snapshotTasks_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_123_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_traceState_93_ = lean_ctor_get(v___x_92_, 4);
lean_inc_ref(v_traceState_93_);
lean_dec(v___x_92_);
v_traces_94_ = lean_ctor_get(v_traceState_93_, 0);
lean_inc_ref(v_traces_94_);
lean_dec_ref(v_traceState_93_);
v___x_95_ = lean_st_ref_take(v___y_90_);
v_traceState_96_ = lean_ctor_get(v___x_95_, 4);
v_env_97_ = lean_ctor_get(v___x_95_, 0);
v_nextMacroScope_98_ = lean_ctor_get(v___x_95_, 1);
v_ngen_99_ = lean_ctor_get(v___x_95_, 2);
v_auxDeclNGen_100_ = lean_ctor_get(v___x_95_, 3);
v_cache_101_ = lean_ctor_get(v___x_95_, 5);
v_messages_102_ = lean_ctor_get(v___x_95_, 6);
v_infoState_103_ = lean_ctor_get(v___x_95_, 7);
v_snapshotTasks_104_ = lean_ctor_get(v___x_95_, 8);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_123_ == 0)
{
v___x_106_ = v___x_95_;
v_isShared_107_ = v_isSharedCheck_123_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_snapshotTasks_104_);
lean_inc(v_infoState_103_);
lean_inc(v_messages_102_);
lean_inc(v_cache_101_);
lean_inc(v_traceState_96_);
lean_inc(v_auxDeclNGen_100_);
lean_inc(v_ngen_99_);
lean_inc(v_nextMacroScope_98_);
lean_inc(v_env_97_);
lean_dec(v___x_95_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_123_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
uint64_t v_tid_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_121_; 
v_tid_108_ = lean_ctor_get_uint64(v_traceState_96_, sizeof(void*)*1);
v_isSharedCheck_121_ = !lean_is_exclusive(v_traceState_96_);
if (v_isSharedCheck_121_ == 0)
{
lean_object* v_unused_122_; 
v_unused_122_ = lean_ctor_get(v_traceState_96_, 0);
lean_dec(v_unused_122_);
v___x_110_ = v_traceState_96_;
v_isShared_111_ = v_isSharedCheck_121_;
goto v_resetjp_109_;
}
else
{
lean_dec(v_traceState_96_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_121_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___closed__1);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_112_);
v___x_114_ = v___x_110_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_112_);
lean_ctor_set_uint64(v_reuseFailAlloc_120_, sizeof(void*)*1, v_tid_108_);
v___x_114_ = v_reuseFailAlloc_120_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_116_; 
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 4, v___x_114_);
v___x_116_ = v___x_106_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_env_97_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_nextMacroScope_98_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_ngen_99_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_auxDeclNGen_100_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_119_, 5, v_cache_101_);
lean_ctor_set(v_reuseFailAlloc_119_, 6, v_messages_102_);
lean_ctor_set(v_reuseFailAlloc_119_, 7, v_infoState_103_);
lean_ctor_set(v_reuseFailAlloc_119_, 8, v_snapshotTasks_104_);
v___x_116_ = v_reuseFailAlloc_119_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_st_ref_put(v___y_90_, v___x_116_);
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v_traces_94_);
return v___x_118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg___boxed(lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(v___y_124_);
lean_dec(v___y_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0(lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(v___y_130_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___boxed(lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0(v___y_133_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(lean_object* v_opts_139_, lean_object* v_opt_140_){
_start:
{
lean_object* v_name_141_; lean_object* v_defValue_142_; lean_object* v_map_143_; lean_object* v___x_144_; 
v_name_141_ = lean_ctor_get(v_opt_140_, 0);
v_defValue_142_ = lean_ctor_get(v_opt_140_, 1);
v_map_143_ = lean_ctor_get(v_opts_139_, 0);
v___x_144_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_143_, v_name_141_);
if (lean_obj_tag(v___x_144_) == 0)
{
uint8_t v___x_145_; 
v___x_145_ = lean_unbox(v_defValue_142_);
return v___x_145_;
}
else
{
lean_object* v_val_146_; 
v_val_146_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_val_146_);
lean_dec_ref_known(v___x_144_, 1);
if (lean_obj_tag(v_val_146_) == 1)
{
uint8_t v_v_147_; 
v_v_147_ = lean_ctor_get_uint8(v_val_146_, 0);
lean_dec_ref_known(v_val_146_, 0);
return v_v_147_;
}
else
{
uint8_t v___x_148_; 
lean_dec(v_val_146_);
v___x_148_ = lean_unbox(v_defValue_142_);
return v___x_148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1___boxed(lean_object* v_opts_149_, lean_object* v_opt_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_opts_149_, v_opt_150_);
lean_dec_ref(v_opt_150_);
lean_dec_ref(v_opts_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(lean_object* v_x_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Meta_saveState___redArg(v___y_155_, v___y_157_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
lean_inc(v___y_157_);
lean_inc_ref(v___y_156_);
lean_inc(v___y_155_);
lean_inc_ref(v___y_154_);
v___x_161_ = lean_apply_5(v_x_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, lean_box(0));
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_170_; 
lean_dec(v_a_160_);
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_170_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v_a_162_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_166_);
v___x_168_ = v___x_164_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_200_; 
v_a_171_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_200_ == 0)
{
v___x_173_ = v___x_161_;
v_isShared_174_ = v_isSharedCheck_200_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_161_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_200_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___y_176_; uint8_t v___x_198_; 
v___x_198_ = l_Lean_Exception_isInterrupt(v_a_171_);
if (v___x_198_ == 0)
{
uint8_t v___x_199_; 
lean_inc(v_a_171_);
v___x_199_ = l_Lean_Exception_isRuntime(v_a_171_);
v___y_176_ = v___x_199_;
goto v___jp_175_;
}
else
{
v___y_176_ = v___x_198_;
goto v___jp_175_;
}
v___jp_175_:
{
if (v___y_176_ == 0)
{
lean_object* v___x_177_; 
lean_del_object(v___x_173_);
lean_dec(v_a_171_);
v___x_177_ = l_Lean_Meta_SavedState_restore___redArg(v_a_160_, v___y_155_, v___y_157_);
lean_dec(v_a_160_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_185_ == 0)
{
lean_object* v_unused_186_; 
v_unused_186_ = lean_ctor_get(v___x_177_, 0);
lean_dec(v_unused_186_);
v___x_179_ = v___x_177_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_dec(v___x_177_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_181_ = lean_box(0);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_177_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_177_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
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
else
{
lean_object* v___x_196_; 
lean_dec(v_a_160_);
if (v_isShared_174_ == 0)
{
v___x_196_ = v___x_173_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_171_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec_ref(v_x_153_);
v_a_201_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_159_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_159_);
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
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg___boxed(lean_object* v_x_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(v_x_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6(lean_object* v_00_u03b1_216_, lean_object* v_x_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(v_x_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___boxed(lean_object* v_00_u03b1_224_, lean_object* v_x_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6(v_00_u03b1_224_, v_x_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_231_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__0));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0(lean_object* v_e_235_, lean_object* v_x_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_242_ = lean_obj_once(&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1, &l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___closed__1);
v___x_243_ = l_Lean_MessageData_ofExpr(v_e_235_);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___boxed(lean_object* v_e_246_, lean_object* v_x_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0(v_e_246_, v_x_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec_ref(v_x_247_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3(uint8_t v___x_254_, uint8_t v___x_255_, lean_object* v_x_256_, lean_object* v_x_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_263_, 0, v_x_257_);
return v___x_263_;
}
else
{
lean_object* v_head_264_; lean_object* v_tail_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_289_; 
v_head_264_ = lean_ctor_get(v_x_256_, 0);
v_tail_265_ = lean_ctor_get(v_x_256_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_x_256_);
if (v_isSharedCheck_289_ == 0)
{
v___x_267_ = v_x_256_;
v_isShared_268_ = v_isSharedCheck_289_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_tail_265_);
lean_inc(v_head_264_);
lean_dec(v_x_256_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_289_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
uint8_t v_a_270_; lean_object* v___x_276_; 
lean_inc(v_head_264_);
v___x_276_ = l_Lean_MVarId_inferInstance(v_head_264_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_dec_ref_known(v___x_276_, 1);
v_a_270_ = v___x_254_;
goto v___jp_269_;
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_288_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_288_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
uint8_t v___y_282_; uint8_t v___x_286_; 
v___x_286_ = l_Lean_Exception_isInterrupt(v_a_277_);
if (v___x_286_ == 0)
{
uint8_t v___x_287_; 
lean_inc(v_a_277_);
v___x_287_ = l_Lean_Exception_isRuntime(v_a_277_);
v___y_282_ = v___x_287_;
goto v___jp_281_;
}
else
{
v___y_282_ = v___x_286_;
goto v___jp_281_;
}
v___jp_281_:
{
if (v___y_282_ == 0)
{
lean_del_object(v___x_279_);
lean_dec(v_a_277_);
v_a_270_ = v___x_255_;
goto v___jp_269_;
}
else
{
lean_object* v___x_284_; 
lean_del_object(v___x_267_);
lean_dec(v_tail_265_);
lean_dec(v_head_264_);
lean_dec(v_x_257_);
if (v_isShared_280_ == 0)
{
v___x_284_ = v___x_279_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_277_);
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
v___jp_269_:
{
if (v_a_270_ == 0)
{
lean_del_object(v___x_267_);
lean_dec(v_head_264_);
v_x_256_ = v_tail_265_;
goto _start;
}
else
{
lean_object* v___x_273_; 
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 1, v_x_257_);
v___x_273_ = v___x_267_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_head_264_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_x_257_);
v___x_273_ = v_reuseFailAlloc_275_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
v_x_256_ = v_tail_265_;
v_x_257_ = v___x_273_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3___boxed(lean_object* v___x_290_, lean_object* v___x_291_, lean_object* v_x_292_, lean_object* v_x_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v___x_13874__boxed_299_; uint8_t v___x_13875__boxed_300_; lean_object* v_res_301_; 
v___x_13874__boxed_299_ = lean_unbox(v___x_290_);
v___x_13875__boxed_300_ = lean_unbox(v___x_291_);
v_res_301_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3(v___x_13874__boxed_299_, v___x_13875__boxed_300_, v_x_292_, v_x_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5(lean_object* v_msgData_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; lean_object* v_env_309_; lean_object* v___x_310_; lean_object* v_toCold_311_; lean_object* v_mctx_312_; lean_object* v_lctx_313_; lean_object* v_options_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_308_ = lean_st_ref_get(v___y_306_);
v_env_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc_ref(v_env_309_);
lean_dec(v___x_308_);
v___x_310_ = lean_st_ref_get(v___y_304_);
v_toCold_311_ = lean_ctor_get(v___y_305_, 0);
v_mctx_312_ = lean_ctor_get(v___x_310_, 0);
lean_inc_ref(v_mctx_312_);
lean_dec(v___x_310_);
v_lctx_313_ = lean_ctor_get(v___y_303_, 2);
v_options_314_ = lean_ctor_get(v_toCold_311_, 2);
lean_inc_ref(v_options_314_);
lean_inc_ref(v_lctx_313_);
v___x_315_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_315_, 0, v_env_309_);
lean_ctor_set(v___x_315_, 1, v_mctx_312_);
lean_ctor_set(v___x_315_, 2, v_lctx_313_);
lean_ctor_set(v___x_315_, 3, v_options_314_);
v___x_316_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v_msgData_302_);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5(v_msgData_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4(size_t v_sz_325_, size_t v_i_326_, lean_object* v_bs_327_){
_start:
{
uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_lt(v_i_326_, v_sz_325_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
v___x_329_ = l_unsafeCast___redArg(v_bs_327_);
lean_dec_ref(v_bs_327_);
return v___x_329_;
}
else
{
lean_object* v_v_330_; lean_object* v___x_331_; lean_object* v_msg_332_; lean_object* v___x_333_; lean_object* v_bs_x27_334_; size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_v_330_ = lean_array_uget_borrowed(v_bs_327_, v_i_326_);
v___x_331_ = l_unsafeCast___redArg(v_v_330_);
v_msg_332_ = lean_ctor_get(v___x_331_, 1);
lean_inc_ref(v_msg_332_);
lean_dec(v___x_331_);
v___x_333_ = lean_unsigned_to_nat(0u);
v_bs_x27_334_ = lean_array_uset(v_bs_327_, v_i_326_, v___x_333_);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_add(v_i_326_, v___x_335_);
v___x_337_ = l_unsafeCast___redArg(v_msg_332_);
lean_dec_ref(v_msg_332_);
v___x_338_ = lean_array_uset(v_bs_x27_334_, v_i_326_, v___x_337_);
v_i_326_ = v___x_336_;
v_bs_327_ = v___x_338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4___boxed(lean_object* v_sz_340_, lean_object* v_i_341_, lean_object* v_bs_342_){
_start:
{
size_t v_sz_boxed_343_; size_t v_i_boxed_344_; lean_object* v_res_345_; 
v_sz_boxed_343_ = lean_unbox_usize(v_sz_340_);
lean_dec(v_sz_340_);
v_i_boxed_344_ = lean_unbox_usize(v_i_341_);
lean_dec(v_i_341_);
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4(v_sz_boxed_343_, v_i_boxed_344_, v_bs_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2(lean_object* v_oldTraces_346_, lean_object* v_data_347_, lean_object* v_ref_348_, lean_object* v_msg_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_toCold_355_; lean_object* v_currRecDepth_356_; lean_object* v_ref_357_; uint8_t v_diag_358_; uint8_t v_suppressElabErrors_359_; lean_object* v_ref_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v_traceState_363_; lean_object* v_traces_364_; lean_object* v___x_365_; size_t v_sz_366_; size_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_msg_371_; lean_object* v___x_372_; lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_410_; 
v_toCold_355_ = lean_ctor_get(v___y_352_, 0);
v_currRecDepth_356_ = lean_ctor_get(v___y_352_, 1);
v_ref_357_ = lean_ctor_get(v___y_352_, 2);
v_diag_358_ = lean_ctor_get_uint8(v___y_352_, sizeof(void*)*3);
v_suppressElabErrors_359_ = lean_ctor_get_uint8(v___y_352_, sizeof(void*)*3 + 1);
v_ref_360_ = l_Lean_replaceRef(v_ref_348_, v_ref_357_);
lean_inc(v_currRecDepth_356_);
lean_inc_ref(v_toCold_355_);
v___x_361_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_361_, 0, v_toCold_355_);
lean_ctor_set(v___x_361_, 1, v_currRecDepth_356_);
lean_ctor_set(v___x_361_, 2, v_ref_360_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*3, v_diag_358_);
lean_ctor_set_uint8(v___x_361_, sizeof(void*)*3 + 1, v_suppressElabErrors_359_);
v___x_362_ = lean_st_ref_get(v___y_353_);
v_traceState_363_ = lean_ctor_get(v___x_362_, 4);
lean_inc_ref(v_traceState_363_);
lean_dec(v___x_362_);
v_traces_364_ = lean_ctor_get(v_traceState_363_, 0);
lean_inc_ref(v_traces_364_);
lean_dec_ref(v_traceState_363_);
v___x_365_ = l_Lean_PersistentArray_toArray___redArg(v_traces_364_);
lean_dec_ref(v_traces_364_);
v_sz_366_ = lean_array_size(v___x_365_);
v___x_367_ = ((size_t)0ULL);
v___x_368_ = l_unsafeCast___redArg(v___x_365_);
lean_dec_ref(v___x_365_);
v___x_369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__4(v_sz_366_, v___x_367_, v___x_368_);
v___x_370_ = l_unsafeCast___redArg(v___x_369_);
lean_dec_ref(v___x_369_);
v_msg_371_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_371_, 0, v_data_347_);
lean_ctor_set(v_msg_371_, 1, v_msg_349_);
lean_ctor_set(v_msg_371_, 2, v___x_370_);
v___x_372_ = l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5(v_msg_371_, v___y_350_, v___y_351_, v___x_361_, v___y_353_);
lean_dec_ref_known(v___x_361_, 3);
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_410_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_410_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_410_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v_traceState_378_; lean_object* v_env_379_; lean_object* v_nextMacroScope_380_; lean_object* v_ngen_381_; lean_object* v_auxDeclNGen_382_; lean_object* v_cache_383_; lean_object* v_messages_384_; lean_object* v_infoState_385_; lean_object* v_snapshotTasks_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_409_; 
v___x_377_ = lean_st_ref_take(v___y_353_);
v_traceState_378_ = lean_ctor_get(v___x_377_, 4);
v_env_379_ = lean_ctor_get(v___x_377_, 0);
v_nextMacroScope_380_ = lean_ctor_get(v___x_377_, 1);
v_ngen_381_ = lean_ctor_get(v___x_377_, 2);
v_auxDeclNGen_382_ = lean_ctor_get(v___x_377_, 3);
v_cache_383_ = lean_ctor_get(v___x_377_, 5);
v_messages_384_ = lean_ctor_get(v___x_377_, 6);
v_infoState_385_ = lean_ctor_get(v___x_377_, 7);
v_snapshotTasks_386_ = lean_ctor_get(v___x_377_, 8);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_409_ == 0)
{
v___x_388_ = v___x_377_;
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_snapshotTasks_386_);
lean_inc(v_infoState_385_);
lean_inc(v_messages_384_);
lean_inc(v_cache_383_);
lean_inc(v_traceState_378_);
lean_inc(v_auxDeclNGen_382_);
lean_inc(v_ngen_381_);
lean_inc(v_nextMacroScope_380_);
lean_inc(v_env_379_);
lean_dec(v___x_377_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
uint64_t v_tid_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_407_; 
v_tid_390_ = lean_ctor_get_uint64(v_traceState_378_, sizeof(void*)*1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_traceState_378_);
if (v_isSharedCheck_407_ == 0)
{
lean_object* v_unused_408_; 
v_unused_408_ = lean_ctor_get(v_traceState_378_, 0);
lean_dec(v_unused_408_);
v___x_392_ = v_traceState_378_;
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
else
{
lean_dec(v_traceState_378_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_394_ = lean_box(0);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v_ref_348_);
lean_ctor_set(v___x_395_, 1, v_a_373_);
v___x_396_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_346_, v___x_395_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_396_);
v___x_398_ = v___x_392_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_396_);
lean_ctor_set_uint64(v_reuseFailAlloc_406_, sizeof(void*)*1, v_tid_390_);
v___x_398_ = v_reuseFailAlloc_406_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_400_; 
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 4, v___x_398_);
v___x_400_ = v___x_388_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_env_379_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_nextMacroScope_380_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v_ngen_381_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v_auxDeclNGen_382_);
lean_ctor_set(v_reuseFailAlloc_405_, 4, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_405_, 5, v_cache_383_);
lean_ctor_set(v_reuseFailAlloc_405_, 6, v_messages_384_);
lean_ctor_set(v_reuseFailAlloc_405_, 7, v_infoState_385_);
lean_ctor_set(v_reuseFailAlloc_405_, 8, v_snapshotTasks_386_);
v___x_400_ = v_reuseFailAlloc_405_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_401_ = lean_st_ref_put(v___y_353_, v___x_400_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v___x_394_);
v___x_403_ = v___x_375_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_394_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2___boxed(lean_object* v_oldTraces_411_, lean_object* v_data_412_, lean_object* v_ref_413_, lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2(v_oldTraces_411_, v_data_412_, v_ref_413_, v_msg_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_420_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4(lean_object* v_e_421_){
_start:
{
if (lean_obj_tag(v_e_421_) == 0)
{
uint8_t v___x_422_; 
v___x_422_ = 2;
return v___x_422_;
}
else
{
uint8_t v___x_423_; 
v___x_423_ = 0;
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4___boxed(lean_object* v_e_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4(v_e_424_);
lean_dec_ref(v_e_424_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5(lean_object* v_opts_427_, lean_object* v_opt_428_){
_start:
{
lean_object* v_name_429_; lean_object* v_defValue_430_; lean_object* v_map_431_; lean_object* v___x_432_; 
v_name_429_ = lean_ctor_get(v_opt_428_, 0);
v_defValue_430_ = lean_ctor_get(v_opt_428_, 1);
v_map_431_ = lean_ctor_get(v_opts_427_, 0);
v___x_432_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_431_, v_name_429_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_inc(v_defValue_430_);
return v_defValue_430_;
}
else
{
lean_object* v_val_433_; 
v_val_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_432_, 1);
if (lean_obj_tag(v_val_433_) == 3)
{
lean_object* v_v_434_; 
v_v_434_ = lean_ctor_get(v_val_433_, 0);
lean_inc(v_v_434_);
lean_dec_ref_known(v_val_433_, 1);
return v_v_434_;
}
else
{
lean_dec(v_val_433_);
lean_inc(v_defValue_430_);
return v_defValue_430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5___boxed(lean_object* v_opts_435_, lean_object* v_opt_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5(v_opts_435_, v_opt_436_);
lean_dec_ref(v_opt_436_);
lean_dec_ref(v_opts_435_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(lean_object* v_x_438_){
_start:
{
if (lean_obj_tag(v_x_438_) == 0)
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_a_440_ = lean_ctor_get(v_x_438_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v_x_438_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v_x_438_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v_x_438_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set_tag(v___x_442_, 1);
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
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
v_a_448_ = lean_ctor_get(v_x_438_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_438_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v_x_438_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v_x_438_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 0);
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg___boxed(lean_object* v_x_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(v_x_456_);
return v_res_458_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0(void){
_start:
{
lean_object* v___x_459_; double v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_float_of_nat(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2(void){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__1));
v___x_463_ = l_Lean_stringToMessageData(v___x_462_);
return v___x_463_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3(void){
_start:
{
lean_object* v___x_464_; double v___x_465_; 
v___x_464_ = lean_unsigned_to_nat(1000u);
v___x_465_ = lean_float_of_nat(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(lean_object* v_cls_466_, uint8_t v_collapsed_467_, lean_object* v_tag_468_, lean_object* v_opts_469_, uint8_t v_clsEnabled_470_, lean_object* v_oldTraces_471_, lean_object* v_msg_472_, lean_object* v_resStartStop_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_fst_479_; lean_object* v_snd_480_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v_data_484_; lean_object* v_fst_495_; lean_object* v_snd_496_; lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___y_500_; lean_object* v_a_501_; uint8_t v___y_516_; double v___y_547_; 
v_fst_479_ = lean_ctor_get(v_resStartStop_473_, 0);
lean_inc(v_fst_479_);
v_snd_480_ = lean_ctor_get(v_resStartStop_473_, 1);
lean_inc(v_snd_480_);
lean_dec_ref(v_resStartStop_473_);
v_fst_495_ = lean_ctor_get(v_snd_480_, 0);
lean_inc(v_fst_495_);
v_snd_496_ = lean_ctor_get(v_snd_480_, 1);
lean_inc(v_snd_496_);
lean_dec(v_snd_480_);
v___x_497_ = l_Lean_trace_profiler;
v___x_498_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_opts_469_, v___x_497_);
if (v___x_498_ == 0)
{
v___y_516_ = v___x_498_;
goto v___jp_515_;
}
else
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = l_Lean_trace_profiler_useHeartbeats;
v___x_553_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_opts_469_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; double v___x_556_; double v___x_557_; double v___x_558_; 
v___x_554_ = l_Lean_trace_profiler_threshold;
v___x_555_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5(v_opts_469_, v___x_554_);
v___x_556_ = lean_float_of_nat(v___x_555_);
v___x_557_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__3);
v___x_558_ = lean_float_div(v___x_556_, v___x_557_);
v___y_547_ = v___x_558_;
goto v___jp_546_;
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; double v___x_561_; 
v___x_559_ = l_Lean_trace_profiler_threshold;
v___x_560_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__5(v_opts_469_, v___x_559_);
v___x_561_ = lean_float_of_nat(v___x_560_);
v___y_547_ = v___x_561_;
goto v___jp_546_;
}
}
v___jp_481_:
{
lean_object* v___x_485_; 
lean_inc(v___y_483_);
v___x_485_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2(v_oldTraces_471_, v_data_484_, v___y_483_, v___y_482_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v___x_486_; 
lean_dec_ref_known(v___x_485_, 1);
v___x_486_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(v_fst_479_);
return v___x_486_;
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
lean_dec(v_fst_479_);
v_a_487_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_485_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_485_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
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
v___jp_499_:
{
uint8_t v_result_502_; lean_object* v___x_503_; lean_object* v___x_504_; double v___x_505_; lean_object* v_data_506_; 
v_result_502_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__4(v_fst_479_);
v___x_503_ = lean_box(v_result_502_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___x_505_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__0);
lean_inc_ref(v_tag_468_);
lean_inc_ref(v___x_504_);
lean_inc(v_cls_466_);
v_data_506_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_506_, 0, v_cls_466_);
lean_ctor_set(v_data_506_, 1, v___x_504_);
lean_ctor_set(v_data_506_, 2, v_tag_468_);
lean_ctor_set_float(v_data_506_, sizeof(void*)*3, v___x_505_);
lean_ctor_set_float(v_data_506_, sizeof(void*)*3 + 8, v___x_505_);
lean_ctor_set_uint8(v_data_506_, sizeof(void*)*3 + 16, v_collapsed_467_);
if (v___x_498_ == 0)
{
lean_dec_ref_known(v___x_504_, 1);
lean_dec(v_snd_496_);
lean_dec(v_fst_495_);
lean_dec_ref(v_tag_468_);
lean_dec(v_cls_466_);
v___y_482_ = v_a_501_;
v___y_483_ = v___y_500_;
v_data_484_ = v_data_506_;
goto v___jp_481_;
}
else
{
lean_object* v_data_507_; double v___x_508_; double v___x_509_; 
lean_dec_ref_known(v_data_506_, 3);
v_data_507_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_507_, 0, v_cls_466_);
lean_ctor_set(v_data_507_, 1, v___x_504_);
lean_ctor_set(v_data_507_, 2, v_tag_468_);
v___x_508_ = lean_unbox_float(v_fst_495_);
lean_dec(v_fst_495_);
lean_ctor_set_float(v_data_507_, sizeof(void*)*3, v___x_508_);
v___x_509_ = lean_unbox_float(v_snd_496_);
lean_dec(v_snd_496_);
lean_ctor_set_float(v_data_507_, sizeof(void*)*3 + 8, v___x_509_);
lean_ctor_set_uint8(v_data_507_, sizeof(void*)*3 + 16, v_collapsed_467_);
v___y_482_ = v_a_501_;
v___y_483_ = v___y_500_;
v_data_484_ = v_data_507_;
goto v___jp_481_;
}
}
v___jp_510_:
{
lean_object* v_ref_511_; lean_object* v___x_512_; 
v_ref_511_ = lean_ctor_get(v___y_476_, 2);
lean_inc(v___y_477_);
lean_inc_ref(v___y_476_);
lean_inc(v___y_475_);
lean_inc_ref(v___y_474_);
lean_inc(v_fst_479_);
v___x_512_ = lean_apply_6(v_msg_472_, v_fst_479_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, lean_box(0));
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___y_500_ = v_ref_511_;
v_a_501_ = v_a_513_;
goto v___jp_499_;
}
else
{
lean_object* v___x_514_; 
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___closed__2);
v___y_500_ = v_ref_511_;
v_a_501_ = v___x_514_;
goto v___jp_499_;
}
}
v___jp_515_:
{
if (v_clsEnabled_470_ == 0)
{
if (v___y_516_ == 0)
{
lean_object* v___x_517_; lean_object* v_traceState_518_; lean_object* v_env_519_; lean_object* v_nextMacroScope_520_; lean_object* v_ngen_521_; lean_object* v_auxDeclNGen_522_; lean_object* v_cache_523_; lean_object* v_messages_524_; lean_object* v_infoState_525_; lean_object* v_snapshotTasks_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_545_; 
lean_dec(v_snd_496_);
lean_dec(v_fst_495_);
lean_dec_ref(v_msg_472_);
lean_dec_ref(v_tag_468_);
lean_dec(v_cls_466_);
v___x_517_ = lean_st_ref_take(v___y_477_);
v_traceState_518_ = lean_ctor_get(v___x_517_, 4);
v_env_519_ = lean_ctor_get(v___x_517_, 0);
v_nextMacroScope_520_ = lean_ctor_get(v___x_517_, 1);
v_ngen_521_ = lean_ctor_get(v___x_517_, 2);
v_auxDeclNGen_522_ = lean_ctor_get(v___x_517_, 3);
v_cache_523_ = lean_ctor_get(v___x_517_, 5);
v_messages_524_ = lean_ctor_get(v___x_517_, 6);
v_infoState_525_ = lean_ctor_get(v___x_517_, 7);
v_snapshotTasks_526_ = lean_ctor_get(v___x_517_, 8);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_545_ == 0)
{
v___x_528_ = v___x_517_;
v_isShared_529_ = v_isSharedCheck_545_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_snapshotTasks_526_);
lean_inc(v_infoState_525_);
lean_inc(v_messages_524_);
lean_inc(v_cache_523_);
lean_inc(v_traceState_518_);
lean_inc(v_auxDeclNGen_522_);
lean_inc(v_ngen_521_);
lean_inc(v_nextMacroScope_520_);
lean_inc(v_env_519_);
lean_dec(v___x_517_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_545_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
uint64_t v_tid_530_; lean_object* v_traces_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_544_; 
v_tid_530_ = lean_ctor_get_uint64(v_traceState_518_, sizeof(void*)*1);
v_traces_531_ = lean_ctor_get(v_traceState_518_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v_traceState_518_);
if (v_isSharedCheck_544_ == 0)
{
v___x_533_ = v_traceState_518_;
v_isShared_534_ = v_isSharedCheck_544_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_traces_531_);
lean_dec(v_traceState_518_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_544_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_535_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_471_, v_traces_531_);
lean_dec_ref(v_traces_531_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_537_ = v___x_533_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_535_);
lean_ctor_set_uint64(v_reuseFailAlloc_543_, sizeof(void*)*1, v_tid_530_);
v___x_537_ = v_reuseFailAlloc_543_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_539_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 4, v___x_537_);
v___x_539_ = v___x_528_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_env_519_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v_nextMacroScope_520_);
lean_ctor_set(v_reuseFailAlloc_542_, 2, v_ngen_521_);
lean_ctor_set(v_reuseFailAlloc_542_, 3, v_auxDeclNGen_522_);
lean_ctor_set(v_reuseFailAlloc_542_, 4, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_542_, 5, v_cache_523_);
lean_ctor_set(v_reuseFailAlloc_542_, 6, v_messages_524_);
lean_ctor_set(v_reuseFailAlloc_542_, 7, v_infoState_525_);
lean_ctor_set(v_reuseFailAlloc_542_, 8, v_snapshotTasks_526_);
v___x_539_ = v_reuseFailAlloc_542_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_st_ref_put(v___y_477_, v___x_539_);
v___x_541_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(v_fst_479_);
return v___x_541_;
}
}
}
}
}
else
{
goto v___jp_510_;
}
}
else
{
goto v___jp_510_;
}
}
v___jp_546_:
{
double v___x_548_; double v___x_549_; double v___x_550_; uint8_t v___x_551_; 
v___x_548_ = lean_unbox_float(v_snd_496_);
v___x_549_ = lean_unbox_float(v_fst_495_);
v___x_550_ = lean_float_sub(v___x_548_, v___x_549_);
v___x_551_ = lean_float_decLt(v___y_547_, v___x_550_);
v___y_516_ = v___x_551_;
goto v___jp_515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2___boxed(lean_object* v_cls_562_, lean_object* v_collapsed_563_, lean_object* v_tag_564_, lean_object* v_opts_565_, lean_object* v_clsEnabled_566_, lean_object* v_oldTraces_567_, lean_object* v_msg_568_, lean_object* v_resStartStop_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
uint8_t v_collapsed_boxed_575_; uint8_t v_clsEnabled_boxed_576_; lean_object* v_res_577_; 
v_collapsed_boxed_575_ = lean_unbox(v_collapsed_563_);
v_clsEnabled_boxed_576_ = lean_unbox(v_clsEnabled_566_);
v_res_577_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(v_cls_562_, v_collapsed_boxed_575_, v_tag_564_, v_opts_565_, v_clsEnabled_boxed_576_, v_oldTraces_567_, v_msg_568_, v_resStartStop_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v_opts_565_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4(uint8_t v___x_578_, lean_object* v_x_579_, lean_object* v_x_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
if (lean_obj_tag(v_x_579_) == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v_x_580_);
return v___x_586_;
}
else
{
lean_object* v_head_587_; lean_object* v_tail_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_611_; 
v_head_587_ = lean_ctor_get(v_x_579_, 0);
v_tail_588_ = lean_ctor_get(v_x_579_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_579_);
if (v_isSharedCheck_611_ == 0)
{
v___x_590_ = v_x_579_;
v_isShared_591_ = v_isSharedCheck_611_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_tail_588_);
lean_inc(v_head_587_);
lean_dec(v_x_579_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_611_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; 
lean_inc(v_head_587_);
v___x_592_ = l_Lean_MVarId_inferInstance(v_head_587_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_dec_ref_known(v___x_592_, 1);
lean_del_object(v___x_590_);
lean_dec(v_head_587_);
v_x_579_ = v_tail_588_;
goto _start;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_610_; 
v_a_594_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_610_ == 0)
{
v___x_596_ = v___x_592_;
v_isShared_597_ = v_isSharedCheck_610_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_592_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_610_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint8_t v___y_599_; uint8_t v___x_608_; 
v___x_608_ = l_Lean_Exception_isInterrupt(v_a_594_);
if (v___x_608_ == 0)
{
uint8_t v___x_609_; 
lean_inc(v_a_594_);
v___x_609_ = l_Lean_Exception_isRuntime(v_a_594_);
v___y_599_ = v___x_609_;
goto v___jp_598_;
}
else
{
v___y_599_ = v___x_608_;
goto v___jp_598_;
}
v___jp_598_:
{
if (v___y_599_ == 0)
{
lean_del_object(v___x_596_);
lean_dec(v_a_594_);
if (v___x_578_ == 0)
{
lean_del_object(v___x_590_);
lean_dec(v_head_587_);
v_x_579_ = v_tail_588_;
goto _start;
}
else
{
lean_object* v___x_602_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v_x_580_);
v___x_602_ = v___x_590_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_head_587_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_x_580_);
v___x_602_ = v_reuseFailAlloc_604_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
v_x_579_ = v_tail_588_;
v_x_580_ = v___x_602_;
goto _start;
}
}
}
else
{
lean_object* v___x_606_; 
lean_del_object(v___x_590_);
lean_dec(v_tail_588_);
lean_dec(v_head_587_);
lean_dec(v_x_580_);
if (v_isShared_597_ == 0)
{
v___x_606_ = v___x_596_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_594_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4___boxed(lean_object* v___x_612_, lean_object* v_x_613_, lean_object* v_x_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v___x_14309__boxed_620_; lean_object* v_res_621_; 
v___x_14309__boxed_620_ = lean_unbox(v___x_612_);
v_res_621_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4(v___x_14309__boxed_620_, v_x_613_, v_x_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5(uint8_t v___x_622_, lean_object* v_x_623_, lean_object* v_x_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
if (lean_obj_tag(v_x_623_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v_x_624_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_655_; 
v_head_631_ = lean_ctor_get(v_x_623_, 0);
v_tail_632_ = lean_ctor_get(v_x_623_, 1);
v_isSharedCheck_655_ = !lean_is_exclusive(v_x_623_);
if (v_isSharedCheck_655_ == 0)
{
v___x_634_ = v_x_623_;
v_isShared_635_ = v_isSharedCheck_655_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_x_623_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_655_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_641_; 
lean_inc(v_head_631_);
v___x_641_ = l_Lean_MVarId_inferInstance(v_head_631_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_dec_ref_known(v___x_641_, 1);
if (v___x_622_ == 0)
{
lean_del_object(v___x_634_);
lean_dec(v_head_631_);
v_x_623_ = v_tail_632_;
goto _start;
}
else
{
goto v___jp_636_;
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_654_; 
v_a_643_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_654_ == 0)
{
v___x_645_ = v___x_641_;
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
uint8_t v___y_648_; uint8_t v___x_652_; 
v___x_652_ = l_Lean_Exception_isInterrupt(v_a_643_);
if (v___x_652_ == 0)
{
uint8_t v___x_653_; 
lean_inc(v_a_643_);
v___x_653_ = l_Lean_Exception_isRuntime(v_a_643_);
v___y_648_ = v___x_653_;
goto v___jp_647_;
}
else
{
v___y_648_ = v___x_652_;
goto v___jp_647_;
}
v___jp_647_:
{
if (v___y_648_ == 0)
{
lean_del_object(v___x_645_);
lean_dec(v_a_643_);
goto v___jp_636_;
}
else
{
lean_object* v___x_650_; 
lean_del_object(v___x_634_);
lean_dec(v_tail_632_);
lean_dec(v_head_631_);
lean_dec(v_x_624_);
if (v_isShared_646_ == 0)
{
v___x_650_ = v___x_645_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_643_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
v___jp_636_:
{
lean_object* v___x_638_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_x_624_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_head_631_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v_x_624_);
v___x_638_ = v_reuseFailAlloc_640_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
v_x_623_ = v_tail_632_;
v_x_624_ = v___x_638_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5___boxed(lean_object* v___x_656_, lean_object* v_x_657_, lean_object* v_x_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
uint8_t v___x_14386__boxed_664_; lean_object* v_res_665_; 
v___x_14386__boxed_664_ = lean_unbox(v___x_656_);
v_res_665_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5(v___x_14386__boxed_664_, v_x_657_, v_x_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
return v_res_665_;
}
}
static double _init_l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_669_; double v___x_670_; 
v___x_669_ = lean_unsigned_to_nat(1000000000u);
v___x_670_ = lean_float_of_nat(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1(uint8_t v_transparency_671_, lean_object* v_g_672_, lean_object* v_e_673_, lean_object* v_cfg_674_, lean_object* v___x_675_, lean_object* v___x_676_, uint8_t v___x_677_, lean_object* v___x_678_, lean_object* v___f_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_toCold_685_; lean_object* v_options_686_; lean_object* v_inheritedTraceOptions_687_; uint8_t v_hasTrace_688_; lean_object* v___y_690_; 
v_toCold_685_ = lean_ctor_get(v___y_682_, 0);
v_options_686_ = lean_ctor_get(v_toCold_685_, 2);
v_inheritedTraceOptions_687_ = lean_ctor_get(v_toCold_685_, 11);
v_hasTrace_688_ = lean_ctor_get_uint8(v_options_686_, sizeof(void*)*1);
if (v_hasTrace_688_ == 0)
{
lean_object* v___x_711_; uint8_t v_transparency_712_; uint8_t v___x_713_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v___x_678_);
lean_dec(v___x_676_);
v___x_711_ = l_Lean_Meta_Context_config(v___y_680_);
v_transparency_712_ = lean_ctor_get_uint8(v___x_711_, 9);
lean_dec_ref(v___x_711_);
v___x_713_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_712_, v_transparency_671_);
if (v___x_713_ == 0)
{
lean_object* v_keyedConfig_714_; uint8_t v_trackZetaDelta_715_; lean_object* v_zetaDeltaSet_716_; lean_object* v_lctx_717_; lean_object* v_localInstances_718_; lean_object* v_defEqCtx_x3f_719_; lean_object* v_synthPendingDepth_720_; lean_object* v_customCanUnfoldPredicate_x3f_721_; uint8_t v_univApprox_722_; uint8_t v_inTypeClassResolution_723_; uint8_t v_cacheInferType_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_keyedConfig_714_ = lean_ctor_get(v___y_680_, 0);
v_trackZetaDelta_715_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7);
v_zetaDeltaSet_716_ = lean_ctor_get(v___y_680_, 1);
v_lctx_717_ = lean_ctor_get(v___y_680_, 2);
v_localInstances_718_ = lean_ctor_get(v___y_680_, 3);
v_defEqCtx_x3f_719_ = lean_ctor_get(v___y_680_, 4);
v_synthPendingDepth_720_ = lean_ctor_get(v___y_680_, 5);
v_customCanUnfoldPredicate_x3f_721_ = lean_ctor_get(v___y_680_, 6);
v_univApprox_722_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_723_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 2);
v_cacheInferType_724_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_714_);
v___x_725_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_671_, v_keyedConfig_714_);
lean_inc(v_customCanUnfoldPredicate_x3f_721_);
lean_inc(v_synthPendingDepth_720_);
lean_inc(v_defEqCtx_x3f_719_);
lean_inc_ref(v_localInstances_718_);
lean_inc_ref(v_lctx_717_);
lean_inc(v_zetaDeltaSet_716_);
v___x_726_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v_zetaDeltaSet_716_);
lean_ctor_set(v___x_726_, 2, v_lctx_717_);
lean_ctor_set(v___x_726_, 3, v_localInstances_718_);
lean_ctor_set(v___x_726_, 4, v_defEqCtx_x3f_719_);
lean_ctor_set(v___x_726_, 5, v_synthPendingDepth_720_);
lean_ctor_set(v___x_726_, 6, v_customCanUnfoldPredicate_x3f_721_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*7, v_trackZetaDelta_715_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*7 + 1, v_univApprox_722_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*7 + 2, v_inTypeClassResolution_723_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*7 + 3, v_cacheInferType_724_);
v___x_727_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___x_726_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref_known(v___x_726_, 7);
v___y_690_ = v___x_727_;
goto v___jp_689_;
}
else
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
v___y_690_ = v___x_728_;
goto v___jp_689_;
}
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v_a_735_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v_a_750_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v_a_755_; lean_object* v___y_758_; lean_object* v___y_759_; uint8_t v___y_760_; lean_object* v___y_761_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v_a_773_; lean_object* v___y_783_; lean_object* v___y_784_; lean_object* v_a_785_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v_a_790_; lean_object* v___y_793_; lean_object* v___y_794_; uint8_t v___y_795_; lean_object* v___y_796_; 
v___x_729_ = ((lean_object*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__1));
lean_inc(v___x_676_);
v___x_730_ = l_Lean_Name_append(v___x_729_, v___x_676_);
v___x_731_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_687_, v_options_686_, v___x_730_);
lean_dec(v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v___y_851_; 
v___x_848_ = l_Lean_trace_profiler;
v___x_849_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_options_686_, v___x_848_);
if (v___x_849_ == 0)
{
lean_object* v___x_872_; uint8_t v_transparency_873_; uint8_t v___x_874_; 
lean_dec_ref(v___f_679_);
lean_dec_ref(v___x_678_);
lean_dec(v___x_676_);
v___x_872_ = l_Lean_Meta_Context_config(v___y_680_);
v_transparency_873_ = lean_ctor_get_uint8(v___x_872_, 9);
lean_dec_ref(v___x_872_);
v___x_874_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_873_, v_transparency_671_);
if (v___x_874_ == 0)
{
lean_object* v_keyedConfig_875_; uint8_t v_trackZetaDelta_876_; lean_object* v_zetaDeltaSet_877_; lean_object* v_lctx_878_; lean_object* v_localInstances_879_; lean_object* v_defEqCtx_x3f_880_; lean_object* v_synthPendingDepth_881_; lean_object* v_customCanUnfoldPredicate_x3f_882_; uint8_t v_univApprox_883_; uint8_t v_inTypeClassResolution_884_; uint8_t v_cacheInferType_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_keyedConfig_875_ = lean_ctor_get(v___y_680_, 0);
v_trackZetaDelta_876_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7);
v_zetaDeltaSet_877_ = lean_ctor_get(v___y_680_, 1);
v_lctx_878_ = lean_ctor_get(v___y_680_, 2);
v_localInstances_879_ = lean_ctor_get(v___y_680_, 3);
v_defEqCtx_x3f_880_ = lean_ctor_get(v___y_680_, 4);
v_synthPendingDepth_881_ = lean_ctor_get(v___y_680_, 5);
v_customCanUnfoldPredicate_x3f_882_ = lean_ctor_get(v___y_680_, 6);
v_univApprox_883_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_884_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 2);
v_cacheInferType_885_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_875_);
v___x_886_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_671_, v_keyedConfig_875_);
lean_inc(v_customCanUnfoldPredicate_x3f_882_);
lean_inc(v_synthPendingDepth_881_);
lean_inc(v_defEqCtx_x3f_880_);
lean_inc_ref(v_localInstances_879_);
lean_inc_ref(v_lctx_878_);
lean_inc(v_zetaDeltaSet_877_);
v___x_887_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_887_, 0, v___x_886_);
lean_ctor_set(v___x_887_, 1, v_zetaDeltaSet_877_);
lean_ctor_set(v___x_887_, 2, v_lctx_878_);
lean_ctor_set(v___x_887_, 3, v_localInstances_879_);
lean_ctor_set(v___x_887_, 4, v_defEqCtx_x3f_880_);
lean_ctor_set(v___x_887_, 5, v_synthPendingDepth_881_);
lean_ctor_set(v___x_887_, 6, v_customCanUnfoldPredicate_x3f_882_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*7, v_trackZetaDelta_876_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*7 + 1, v_univApprox_883_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*7 + 2, v_inTypeClassResolution_884_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*7 + 3, v_cacheInferType_885_);
v___x_888_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___x_887_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref_known(v___x_887_, 7);
v___y_851_ = v___x_888_;
goto v___jp_850_;
}
else
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
v___y_851_ = v___x_889_;
goto v___jp_850_;
}
}
else
{
goto v___jp_805_;
}
v___jp_850_:
{
if (lean_obj_tag(v___y_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_a_852_ = lean_ctor_get(v___y_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___y_851_, 1);
v___x_853_ = lean_box(0);
v___x_854_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3(v___x_849_, v_hasTrace_688_, v_a_852_, v___x_853_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref(v___y_680_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_863_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_863_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_863_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_859_ = l_List_reverse___redArg(v_a_855_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_859_);
v___x_861_ = v___x_857_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
return v___x_854_;
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec_ref(v___y_680_);
v_a_864_ = lean_ctor_get(v___y_851_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___y_851_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___y_851_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___y_851_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
else
{
goto v___jp_805_;
}
v___jp_732_:
{
lean_object* v___x_736_; double v___x_737_; double v___x_738_; double v___x_739_; double v___x_740_; double v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_736_ = lean_io_mono_nanos_now();
v___x_737_ = lean_float_of_nat(v___y_734_);
v___x_738_ = lean_float_once(&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2, &l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2_once, _init_l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2);
v___x_739_ = lean_float_div(v___x_737_, v___x_738_);
v___x_740_ = lean_float_of_nat(v___x_736_);
v___x_741_ = lean_float_div(v___x_740_, v___x_738_);
v___x_742_ = lean_box_float(v___x_739_);
v___x_743_ = lean_box_float(v___x_741_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v_a_735_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(v___x_676_, v___x_677_, v___x_678_, v_options_686_, v___x_731_, v___y_733_, v___f_679_, v___x_745_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref(v___y_680_);
return v___x_746_;
}
v___jp_747_:
{
lean_object* v___x_751_; 
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v_a_750_);
v___y_733_ = v___y_748_;
v___y_734_ = v___y_749_;
v_a_735_ = v___x_751_;
goto v___jp_732_;
}
v___jp_752_:
{
lean_object* v___x_756_; 
v___x_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_756_, 0, v_a_755_);
v___y_733_ = v___y_753_;
v___y_734_ = v___y_754_;
v_a_735_ = v___x_756_;
goto v___jp_732_;
}
v___jp_757_:
{
if (lean_obj_tag(v___y_761_) == 0)
{
lean_object* v_a_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_a_762_ = lean_ctor_get(v___y_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v___y_761_, 1);
v___x_763_ = lean_box(0);
v___x_764_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__3(v___y_760_, v_hasTrace_688_, v_a_762_, v___x_763_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_766_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v___x_766_ = l_List_reverse___redArg(v_a_765_);
v___y_753_ = v___y_758_;
v___y_754_ = v___y_759_;
v_a_755_ = v___x_766_;
goto v___jp_752_;
}
else
{
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_767_; 
v_a_767_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_764_, 1);
v___y_753_ = v___y_758_;
v___y_754_ = v___y_759_;
v_a_755_ = v_a_767_;
goto v___jp_752_;
}
else
{
lean_object* v_a_768_; 
v_a_768_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_764_, 1);
v___y_748_ = v___y_758_;
v___y_749_ = v___y_759_;
v_a_750_ = v_a_768_;
goto v___jp_747_;
}
}
}
else
{
lean_object* v_a_769_; 
v_a_769_ = lean_ctor_get(v___y_761_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v___y_761_, 1);
v___y_748_ = v___y_758_;
v___y_749_ = v___y_759_;
v_a_750_ = v_a_769_;
goto v___jp_747_;
}
}
v___jp_770_:
{
lean_object* v___x_774_; double v___x_775_; double v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_774_ = lean_io_get_num_heartbeats();
v___x_775_ = lean_float_of_nat(v___y_772_);
v___x_776_ = lean_float_of_nat(v___x_774_);
v___x_777_ = lean_box_float(v___x_775_);
v___x_778_ = lean_box_float(v___x_776_);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_777_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v_a_773_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(v___x_676_, v___x_677_, v___x_678_, v_options_686_, v___x_731_, v___y_771_, v___f_679_, v___x_780_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref(v___y_680_);
return v___x_781_;
}
v___jp_782_:
{
lean_object* v___x_786_; 
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v_a_785_);
v___y_771_ = v___y_783_;
v___y_772_ = v___y_784_;
v_a_773_ = v___x_786_;
goto v___jp_770_;
}
v___jp_787_:
{
lean_object* v___x_791_; 
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v_a_790_);
v___y_771_ = v___y_788_;
v___y_772_ = v___y_789_;
v_a_773_ = v___x_791_;
goto v___jp_770_;
}
v___jp_792_:
{
if (lean_obj_tag(v___y_796_) == 0)
{
lean_object* v_a_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_797_ = lean_ctor_get(v___y_796_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___y_796_, 1);
v___x_798_ = lean_box(0);
v___x_799_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__4(v___y_795_, v_a_797_, v___x_798_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_799_, 1);
v___x_801_ = l_List_reverse___redArg(v_a_800_);
v___y_788_ = v___y_793_;
v___y_789_ = v___y_794_;
v_a_790_ = v___x_801_;
goto v___jp_787_;
}
else
{
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_802_; 
v_a_802_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_799_, 1);
v___y_788_ = v___y_793_;
v___y_789_ = v___y_794_;
v_a_790_ = v_a_802_;
goto v___jp_787_;
}
else
{
lean_object* v_a_803_; 
v_a_803_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_799_, 1);
v___y_783_ = v___y_793_;
v___y_784_ = v___y_794_;
v_a_785_ = v_a_803_;
goto v___jp_782_;
}
}
}
else
{
lean_object* v_a_804_; 
v_a_804_ = lean_ctor_get(v___y_796_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___y_796_, 1);
v___y_783_ = v___y_793_;
v___y_784_ = v___y_794_;
v_a_785_ = v_a_804_;
goto v___jp_782_;
}
}
v___jp_805_:
{
lean_object* v___x_806_; lean_object* v_a_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_806_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(v___y_683_);
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref(v___x_806_);
v___x_808_ = l_Lean_trace_profiler_useHeartbeats;
v___x_809_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_options_686_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v_transparency_812_; uint8_t v___x_813_; 
v___x_810_ = lean_io_mono_nanos_now();
v___x_811_ = l_Lean_Meta_Context_config(v___y_680_);
v_transparency_812_ = lean_ctor_get_uint8(v___x_811_, 9);
lean_dec_ref(v___x_811_);
v___x_813_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_812_, v_transparency_671_);
if (v___x_813_ == 0)
{
lean_object* v_keyedConfig_814_; uint8_t v_trackZetaDelta_815_; lean_object* v_zetaDeltaSet_816_; lean_object* v_lctx_817_; lean_object* v_localInstances_818_; lean_object* v_defEqCtx_x3f_819_; lean_object* v_synthPendingDepth_820_; lean_object* v_customCanUnfoldPredicate_x3f_821_; uint8_t v_univApprox_822_; uint8_t v_inTypeClassResolution_823_; uint8_t v_cacheInferType_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_keyedConfig_814_ = lean_ctor_get(v___y_680_, 0);
v_trackZetaDelta_815_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7);
v_zetaDeltaSet_816_ = lean_ctor_get(v___y_680_, 1);
v_lctx_817_ = lean_ctor_get(v___y_680_, 2);
v_localInstances_818_ = lean_ctor_get(v___y_680_, 3);
v_defEqCtx_x3f_819_ = lean_ctor_get(v___y_680_, 4);
v_synthPendingDepth_820_ = lean_ctor_get(v___y_680_, 5);
v_customCanUnfoldPredicate_x3f_821_ = lean_ctor_get(v___y_680_, 6);
v_univApprox_822_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_823_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 2);
v_cacheInferType_824_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_814_);
v___x_825_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_671_, v_keyedConfig_814_);
lean_inc(v_customCanUnfoldPredicate_x3f_821_);
lean_inc(v_synthPendingDepth_820_);
lean_inc(v_defEqCtx_x3f_819_);
lean_inc_ref(v_localInstances_818_);
lean_inc_ref(v_lctx_817_);
lean_inc(v_zetaDeltaSet_816_);
v___x_826_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_826_, 0, v___x_825_);
lean_ctor_set(v___x_826_, 1, v_zetaDeltaSet_816_);
lean_ctor_set(v___x_826_, 2, v_lctx_817_);
lean_ctor_set(v___x_826_, 3, v_localInstances_818_);
lean_ctor_set(v___x_826_, 4, v_defEqCtx_x3f_819_);
lean_ctor_set(v___x_826_, 5, v_synthPendingDepth_820_);
lean_ctor_set(v___x_826_, 6, v_customCanUnfoldPredicate_x3f_821_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*7, v_trackZetaDelta_815_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*7 + 1, v_univApprox_822_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*7 + 2, v_inTypeClassResolution_823_);
lean_ctor_set_uint8(v___x_826_, sizeof(void*)*7 + 3, v_cacheInferType_824_);
v___x_827_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___x_826_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref_known(v___x_826_, 7);
v___y_758_ = v_a_807_;
v___y_759_ = v___x_810_;
v___y_760_ = v___x_809_;
v___y_761_ = v___x_827_;
goto v___jp_757_;
}
else
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
v___y_758_ = v_a_807_;
v___y_759_ = v___x_810_;
v___y_760_ = v___x_809_;
v___y_761_ = v___x_828_;
goto v___jp_757_;
}
}
else
{
lean_object* v___x_829_; lean_object* v___x_830_; uint8_t v_transparency_831_; uint8_t v___x_832_; 
v___x_829_ = lean_io_get_num_heartbeats();
v___x_830_ = l_Lean_Meta_Context_config(v___y_680_);
v_transparency_831_ = lean_ctor_get_uint8(v___x_830_, 9);
lean_dec_ref(v___x_830_);
v___x_832_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_831_, v_transparency_671_);
if (v___x_832_ == 0)
{
lean_object* v_keyedConfig_833_; uint8_t v_trackZetaDelta_834_; lean_object* v_zetaDeltaSet_835_; lean_object* v_lctx_836_; lean_object* v_localInstances_837_; lean_object* v_defEqCtx_x3f_838_; lean_object* v_synthPendingDepth_839_; lean_object* v_customCanUnfoldPredicate_x3f_840_; uint8_t v_univApprox_841_; uint8_t v_inTypeClassResolution_842_; uint8_t v_cacheInferType_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_keyedConfig_833_ = lean_ctor_get(v___y_680_, 0);
v_trackZetaDelta_834_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7);
v_zetaDeltaSet_835_ = lean_ctor_get(v___y_680_, 1);
v_lctx_836_ = lean_ctor_get(v___y_680_, 2);
v_localInstances_837_ = lean_ctor_get(v___y_680_, 3);
v_defEqCtx_x3f_838_ = lean_ctor_get(v___y_680_, 4);
v_synthPendingDepth_839_ = lean_ctor_get(v___y_680_, 5);
v_customCanUnfoldPredicate_x3f_840_ = lean_ctor_get(v___y_680_, 6);
v_univApprox_841_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_842_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 2);
v_cacheInferType_843_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_833_);
v___x_844_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_671_, v_keyedConfig_833_);
lean_inc(v_customCanUnfoldPredicate_x3f_840_);
lean_inc(v_synthPendingDepth_839_);
lean_inc(v_defEqCtx_x3f_838_);
lean_inc_ref(v_localInstances_837_);
lean_inc_ref(v_lctx_836_);
lean_inc(v_zetaDeltaSet_835_);
v___x_845_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v_zetaDeltaSet_835_);
lean_ctor_set(v___x_845_, 2, v_lctx_836_);
lean_ctor_set(v___x_845_, 3, v_localInstances_837_);
lean_ctor_set(v___x_845_, 4, v_defEqCtx_x3f_838_);
lean_ctor_set(v___x_845_, 5, v_synthPendingDepth_839_);
lean_ctor_set(v___x_845_, 6, v_customCanUnfoldPredicate_x3f_840_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*7, v_trackZetaDelta_834_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*7 + 1, v_univApprox_841_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*7 + 2, v_inTypeClassResolution_842_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*7 + 3, v_cacheInferType_843_);
v___x_846_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___x_845_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref_known(v___x_845_, 7);
v___y_793_ = v_a_807_;
v___y_794_ = v___x_829_;
v___y_795_ = v___x_809_;
v___y_796_ = v___x_846_;
goto v___jp_792_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_MVarId_apply(v_g_672_, v_e_673_, v_cfg_674_, v___x_675_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
v___y_793_ = v_a_807_;
v___y_794_ = v___x_829_;
v___y_795_ = v___x_809_;
v___y_796_ = v___x_847_;
goto v___jp_792_;
}
}
}
}
v___jp_689_:
{
if (lean_obj_tag(v___y_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v_a_691_ = lean_ctor_get(v___y_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___y_690_, 1);
v___x_692_ = lean_box(0);
v___x_693_ = l_List_filterAuxM___at___00Lean_Meta_SolveByElim_applyTactics_spec__5(v_hasTrace_688_, v_a_691_, v___x_692_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec_ref(v___y_680_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_702_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_702_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_702_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_702_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = l_List_reverse___redArg(v_a_694_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_698_);
v___x_700_ = v___x_696_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_698_);
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
return v___x_693_;
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v___y_680_);
v_a_703_ = lean_ctor_get(v___y_690_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___y_690_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___y_690_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___y_690_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___boxed(lean_object* v_transparency_890_, lean_object* v_g_891_, lean_object* v_e_892_, lean_object* v_cfg_893_, lean_object* v___x_894_, lean_object* v___x_895_, lean_object* v___x_896_, lean_object* v___x_897_, lean_object* v___f_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
uint8_t v_transparency_boxed_904_; uint8_t v___x_14474__boxed_905_; lean_object* v_res_906_; 
v_transparency_boxed_904_ = lean_unbox(v_transparency_890_);
v___x_14474__boxed_905_ = lean_unbox(v___x_896_);
v_res_906_ = l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1(v_transparency_boxed_904_, v_g_891_, v_e_892_, v_cfg_893_, v___x_894_, v___x_895_, v___x_14474__boxed_905_, v___x_897_, v___f_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2(uint8_t v_transparency_908_, lean_object* v_g_909_, lean_object* v_cfg_910_, lean_object* v_e_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___f_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___f_924_; lean_object* v___x_925_; 
lean_inc_ref(v_e_911_);
v___f_917_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_917_, 0, v_e_911_);
v___x_918_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_919_ = lean_box(0);
v___x_920_ = 1;
v___x_921_ = ((lean_object*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___closed__0));
v___x_922_ = lean_box(v_transparency_908_);
v___x_923_ = lean_box(v___x_920_);
v___f_924_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_924_, 0, v___x_922_);
lean_closure_set(v___f_924_, 1, v_g_909_);
lean_closure_set(v___f_924_, 2, v_e_911_);
lean_closure_set(v___f_924_, 3, v_cfg_910_);
lean_closure_set(v___f_924_, 4, v___x_919_);
lean_closure_set(v___f_924_, 5, v___x_918_);
lean_closure_set(v___f_924_, 6, v___x_923_);
lean_closure_set(v___f_924_, 7, v___x_921_);
lean_closure_set(v___f_924_, 8, v___f_917_);
v___x_925_ = l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(v___f_924_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___boxed(lean_object* v_transparency_926_, lean_object* v_g_927_, lean_object* v_cfg_928_, lean_object* v_e_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
uint8_t v_transparency_boxed_935_; lean_object* v_res_936_; 
v_transparency_boxed_935_ = lean_unbox(v_transparency_926_);
v_res_936_ = l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2(v_transparency_boxed_935_, v_g_927_, v_cfg_928_, v_e_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg(lean_object* v_cfg_937_, uint8_t v_transparency_938_, lean_object* v_lemmas_939_, lean_object* v_g_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_944_; lean_object* v___f_945_; lean_object* v___x_946_; 
v___x_944_ = lean_box(v_transparency_938_);
v___f_945_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___boxed), 9, 3);
lean_closure_set(v___f_945_, 0, v___x_944_);
lean_closure_set(v___f_945_, 1, v_g_940_);
lean_closure_set(v___f_945_, 2, v_cfg_937_);
v___x_946_ = l_Lean_Meta_Iterator_ofList___redArg(v_lemmas_939_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_955_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_955_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v___x_953_; 
v___x_951_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Iterator_0__Lean_Meta_Iterator_filterMapM___next___boxed), 9, 4);
lean_closure_set(v___x_951_, 0, lean_box(0));
lean_closure_set(v___x_951_, 1, lean_box(0));
lean_closure_set(v___x_951_, 2, v___f_945_);
lean_closure_set(v___x_951_, 3, v_a_947_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_951_);
v___x_953_ = v___x_949_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref(v___f_945_);
v_a_956_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_946_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_946_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___redArg___boxed(lean_object* v_cfg_964_, lean_object* v_transparency_965_, lean_object* v_lemmas_966_, lean_object* v_g_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
uint8_t v_transparency_boxed_971_; lean_object* v_res_972_; 
v_transparency_boxed_971_ = lean_unbox(v_transparency_965_);
v_res_972_ = l_Lean_Meta_SolveByElim_applyTactics___redArg(v_cfg_964_, v_transparency_boxed_971_, v_lemmas_966_, v_g_967_, v_a_968_, v_a_969_);
lean_dec(v_a_969_);
lean_dec(v_a_968_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics(lean_object* v_cfg_973_, uint8_t v_transparency_974_, lean_object* v_lemmas_975_, lean_object* v_g_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_Meta_SolveByElim_applyTactics___redArg(v_cfg_973_, v_transparency_974_, v_lemmas_975_, v_g_976_, v_a_978_, v_a_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyTactics___boxed(lean_object* v_cfg_983_, lean_object* v_transparency_984_, lean_object* v_lemmas_985_, lean_object* v_g_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
uint8_t v_transparency_boxed_992_; lean_object* v_res_993_; 
v_transparency_boxed_992_ = lean_unbox(v_transparency_984_);
v_res_993_ = l_Lean_Meta_SolveByElim_applyTactics(v_cfg_983_, v_transparency_boxed_992_, v_lemmas_985_, v_g_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3(lean_object* v_00_u03b1_994_, lean_object* v_x_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___redArg(v_x_995_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1002_, lean_object* v_x_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__3(v_00_u03b1_1002_, v_x_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirst(lean_object* v_cfg_1010_, uint8_t v_transparency_1011_, lean_object* v_lemmas_1012_, lean_object* v_g_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Meta_SolveByElim_applyTactics___redArg(v_cfg_1010_, v_transparency_1011_, v_lemmas_1012_, v_g_1013_, v_a_1015_, v_a_1017_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1021_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = l_Lean_Meta_Iterator_head___redArg(v_a_1020_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
return v___x_1021_;
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
v_a_1022_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1019_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1019_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirst___boxed(lean_object* v_cfg_1030_, lean_object* v_transparency_1031_, lean_object* v_lemmas_1032_, lean_object* v_g_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
uint8_t v_transparency_boxed_1039_; lean_object* v_res_1040_; 
v_transparency_boxed_1039_ = lean_unbox(v_transparency_1031_);
v_res_1040_ = l_Lean_Meta_SolveByElim_applyFirst(v_cfg_1030_, v_transparency_boxed_1039_, v_lemmas_1032_, v_g_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0(lean_object* v_x_1041_){
_start:
{
lean_object* v_toApplyRulesConfig_1042_; lean_object* v_toBacktrackConfig_1043_; 
v_toApplyRulesConfig_1042_ = lean_ctor_get(v_x_1041_, 0);
v_toBacktrackConfig_1043_ = lean_ctor_get(v_toApplyRulesConfig_1042_, 0);
lean_inc_ref(v_toBacktrackConfig_1043_);
return v_toBacktrackConfig_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0___boxed(lean_object* v_x_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_instCoeBacktrackConfig___lam__0(v_x_1044_);
lean_dec_ref(v_x_1044_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0(lean_object* v_test_1048_, lean_object* v_discharge_1049_, lean_object* v_g_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v___x_1056_; 
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
lean_inc_ref(v___y_1051_);
lean_inc(v_g_1050_);
v___x_1056_ = lean_apply_6(v_test_1048_, v_g_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, lean_box(0));
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1067_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
uint8_t v___x_1061_; 
v___x_1061_ = lean_unbox(v_a_1057_);
lean_dec(v_a_1057_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; 
lean_del_object(v___x_1059_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
lean_inc_ref(v___y_1051_);
v___x_1062_ = lean_apply_6(v_discharge_1049_, v_g_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, lean_box(0));
return v___x_1062_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1065_; 
lean_dec(v_g_1050_);
lean_dec_ref(v_discharge_1049_);
v___x_1063_ = lean_box(0);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1063_);
v___x_1065_ = v___x_1059_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v_g_1050_);
lean_dec_ref(v_discharge_1049_);
v_a_1068_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1056_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1056_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0___boxed(lean_object* v_test_1076_, lean_object* v_discharge_1077_, lean_object* v_g_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0(v_test_1076_, v_discharge_1077_, v_g_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_accept(lean_object* v_cfg_1085_, lean_object* v_test_1086_){
_start:
{
lean_object* v_toApplyRulesConfig_1087_; lean_object* v_toBacktrackConfig_1088_; uint8_t v_backtracking_1089_; uint8_t v_intro_1090_; uint8_t v_constructor_1091_; uint8_t v_suggestions_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1124_; 
v_toApplyRulesConfig_1087_ = lean_ctor_get(v_cfg_1085_, 0);
lean_inc_ref(v_toApplyRulesConfig_1087_);
v_toBacktrackConfig_1088_ = lean_ctor_get(v_toApplyRulesConfig_1087_, 0);
lean_inc_ref(v_toBacktrackConfig_1088_);
v_backtracking_1089_ = lean_ctor_get_uint8(v_cfg_1085_, sizeof(void*)*1);
v_intro_1090_ = lean_ctor_get_uint8(v_cfg_1085_, sizeof(void*)*1 + 1);
v_constructor_1091_ = lean_ctor_get_uint8(v_cfg_1085_, sizeof(void*)*1 + 2);
v_suggestions_1092_ = lean_ctor_get_uint8(v_cfg_1085_, sizeof(void*)*1 + 3);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_cfg_1085_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v_cfg_1085_, 0);
lean_dec(v_unused_1125_);
v___x_1094_ = v_cfg_1085_;
v_isShared_1095_ = v_isSharedCheck_1124_;
goto v_resetjp_1093_;
}
else
{
lean_dec(v_cfg_1085_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1124_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_toApplyConfig_1096_; uint8_t v_transparency_1097_; uint8_t v_symm_1098_; uint8_t v_exfalso_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1122_; 
v_toApplyConfig_1096_ = lean_ctor_get(v_toApplyRulesConfig_1087_, 1);
v_transparency_1097_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1087_, sizeof(void*)*2);
v_symm_1098_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1087_, sizeof(void*)*2 + 1);
v_exfalso_1099_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1087_, sizeof(void*)*2 + 2);
v_isSharedCheck_1122_ = !lean_is_exclusive(v_toApplyRulesConfig_1087_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; 
v_unused_1123_ = lean_ctor_get(v_toApplyRulesConfig_1087_, 0);
lean_dec(v_unused_1123_);
v___x_1101_ = v_toApplyRulesConfig_1087_;
v_isShared_1102_ = v_isSharedCheck_1122_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_toApplyConfig_1096_);
lean_dec(v_toApplyRulesConfig_1087_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1122_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v_maxDepth_1103_; lean_object* v_proc_1104_; lean_object* v_suspend_1105_; lean_object* v_discharge_1106_; uint8_t v_commitIndependentGoals_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1121_; 
v_maxDepth_1103_ = lean_ctor_get(v_toBacktrackConfig_1088_, 0);
v_proc_1104_ = lean_ctor_get(v_toBacktrackConfig_1088_, 1);
v_suspend_1105_ = lean_ctor_get(v_toBacktrackConfig_1088_, 2);
v_discharge_1106_ = lean_ctor_get(v_toBacktrackConfig_1088_, 3);
v_commitIndependentGoals_1107_ = lean_ctor_get_uint8(v_toBacktrackConfig_1088_, sizeof(void*)*4);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_toBacktrackConfig_1088_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1109_ = v_toBacktrackConfig_1088_;
v_isShared_1110_ = v_isSharedCheck_1121_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_discharge_1106_);
lean_inc(v_suspend_1105_);
lean_inc(v_proc_1104_);
lean_inc(v_maxDepth_1103_);
lean_dec(v_toBacktrackConfig_1088_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1121_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___f_1111_; lean_object* v___x_1113_; 
v___f_1111_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_accept___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1111_, 0, v_test_1086_);
lean_closure_set(v___f_1111_, 1, v_discharge_1106_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 3, v___f_1111_);
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_maxDepth_1103_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_proc_1104_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v_suspend_1105_);
lean_ctor_set(v_reuseFailAlloc_1120_, 3, v___f_1111_);
lean_ctor_set_uint8(v_reuseFailAlloc_1120_, sizeof(void*)*4, v_commitIndependentGoals_1107_);
v___x_1113_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1115_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1113_);
v___x_1115_ = v___x_1101_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1113_);
lean_ctor_set(v_reuseFailAlloc_1119_, 1, v_toApplyConfig_1096_);
lean_ctor_set_uint8(v_reuseFailAlloc_1119_, sizeof(void*)*2, v_transparency_1097_);
lean_ctor_set_uint8(v_reuseFailAlloc_1119_, sizeof(void*)*2 + 1, v_symm_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1119_, sizeof(void*)*2 + 2, v_exfalso_1099_);
v___x_1115_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1117_; 
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1115_);
v___x_1117_ = v___x_1094_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*1, v_backtracking_1089_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*1 + 1, v_intro_1090_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*1 + 2, v_constructor_1091_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*1 + 3, v_suggestions_1092_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0(lean_object* v_proc_1126_, lean_object* v_proc_1127_, lean_object* v_orig_1128_, lean_object* v_goals_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
if (lean_obj_tag(v_goals_1129_) == 0)
{
lean_object* v___x_1135_; 
lean_dec_ref(v_proc_1127_);
lean_inc(v___y_1133_);
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1131_);
lean_inc_ref(v___y_1130_);
v___x_1135_ = lean_apply_7(v_proc_1126_, v_orig_1128_, v_goals_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, lean_box(0));
return v___x_1135_;
}
else
{
lean_object* v_head_1136_; lean_object* v_tail_1137_; lean_object* v___x_1138_; 
v_head_1136_ = lean_ctor_get(v_goals_1129_, 0);
v_tail_1137_ = lean_ctor_get(v_goals_1129_, 1);
lean_inc(v___y_1133_);
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1131_);
lean_inc_ref(v___y_1130_);
lean_inc(v_head_1136_);
v___x_1138_ = lean_apply_6(v_proc_1127_, v_head_1136_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, lean_box(0));
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1148_; 
lean_inc(v_tail_1137_);
lean_dec_ref_known(v_goals_1129_, 2);
lean_dec(v_orig_1128_);
lean_dec_ref(v_proc_1126_);
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1141_ = v___x_1138_;
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1138_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1148_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1143_ = l_List_appendTR___redArg(v_a_1139_, v_tail_1137_);
v___x_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1144_);
v___x_1146_ = v___x_1141_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1161_; 
v_a_1149_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1151_ = v___x_1138_;
v_isShared_1152_ = v_isSharedCheck_1161_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1138_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1161_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
uint8_t v___y_1154_; uint8_t v___x_1159_; 
v___x_1159_ = l_Lean_Exception_isInterrupt(v_a_1149_);
if (v___x_1159_ == 0)
{
uint8_t v___x_1160_; 
lean_inc(v_a_1149_);
v___x_1160_ = l_Lean_Exception_isRuntime(v_a_1149_);
v___y_1154_ = v___x_1160_;
goto v___jp_1153_;
}
else
{
v___y_1154_ = v___x_1159_;
goto v___jp_1153_;
}
v___jp_1153_:
{
if (v___y_1154_ == 0)
{
lean_object* v___x_1155_; 
lean_del_object(v___x_1151_);
lean_dec(v_a_1149_);
lean_inc(v___y_1133_);
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1131_);
lean_inc_ref(v___y_1130_);
v___x_1155_ = lean_apply_7(v_proc_1126_, v_orig_1128_, v_goals_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, lean_box(0));
return v___x_1155_;
}
else
{
lean_object* v___x_1157_; 
lean_dec_ref_known(v_goals_1129_, 2);
lean_dec(v_orig_1128_);
lean_dec_ref(v_proc_1126_);
if (v_isShared_1152_ == 0)
{
v___x_1157_ = v___x_1151_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1149_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0___boxed(lean_object* v_proc_1162_, lean_object* v_proc_1163_, lean_object* v_orig_1164_, lean_object* v_goals_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0(v_proc_1162_, v_proc_1163_, v_orig_1164_, v_goals_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc(lean_object* v_cfg_1172_, lean_object* v_proc_1173_){
_start:
{
lean_object* v_toApplyRulesConfig_1174_; lean_object* v_toBacktrackConfig_1175_; uint8_t v_backtracking_1176_; uint8_t v_intro_1177_; uint8_t v_constructor_1178_; uint8_t v_suggestions_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1211_; 
v_toApplyRulesConfig_1174_ = lean_ctor_get(v_cfg_1172_, 0);
lean_inc_ref(v_toApplyRulesConfig_1174_);
v_toBacktrackConfig_1175_ = lean_ctor_get(v_toApplyRulesConfig_1174_, 0);
lean_inc_ref(v_toBacktrackConfig_1175_);
v_backtracking_1176_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*1);
v_intro_1177_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*1 + 1);
v_constructor_1178_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*1 + 2);
v_suggestions_1179_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*1 + 3);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_cfg_1172_);
if (v_isSharedCheck_1211_ == 0)
{
lean_object* v_unused_1212_; 
v_unused_1212_ = lean_ctor_get(v_cfg_1172_, 0);
lean_dec(v_unused_1212_);
v___x_1181_ = v_cfg_1172_;
v_isShared_1182_ = v_isSharedCheck_1211_;
goto v_resetjp_1180_;
}
else
{
lean_dec(v_cfg_1172_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1211_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_toApplyConfig_1183_; uint8_t v_transparency_1184_; uint8_t v_symm_1185_; uint8_t v_exfalso_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1209_; 
v_toApplyConfig_1183_ = lean_ctor_get(v_toApplyRulesConfig_1174_, 1);
v_transparency_1184_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1174_, sizeof(void*)*2);
v_symm_1185_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1174_, sizeof(void*)*2 + 1);
v_exfalso_1186_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1174_, sizeof(void*)*2 + 2);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_toApplyRulesConfig_1174_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; 
v_unused_1210_ = lean_ctor_get(v_toApplyRulesConfig_1174_, 0);
lean_dec(v_unused_1210_);
v___x_1188_ = v_toApplyRulesConfig_1174_;
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_toApplyConfig_1183_);
lean_dec(v_toApplyRulesConfig_1174_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v_maxDepth_1190_; lean_object* v_proc_1191_; lean_object* v_suspend_1192_; lean_object* v_discharge_1193_; uint8_t v_commitIndependentGoals_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1208_; 
v_maxDepth_1190_ = lean_ctor_get(v_toBacktrackConfig_1175_, 0);
v_proc_1191_ = lean_ctor_get(v_toBacktrackConfig_1175_, 1);
v_suspend_1192_ = lean_ctor_get(v_toBacktrackConfig_1175_, 2);
v_discharge_1193_ = lean_ctor_get(v_toBacktrackConfig_1175_, 3);
v_commitIndependentGoals_1194_ = lean_ctor_get_uint8(v_toBacktrackConfig_1175_, sizeof(void*)*4);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_toBacktrackConfig_1175_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1196_ = v_toBacktrackConfig_1175_;
v_isShared_1197_ = v_isSharedCheck_1208_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_discharge_1193_);
lean_inc(v_suspend_1192_);
lean_inc(v_proc_1191_);
lean_inc(v_maxDepth_1190_);
lean_dec(v_toBacktrackConfig_1175_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1208_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___f_1198_; lean_object* v___x_1200_; 
v___f_1198_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1198_, 0, v_proc_1191_);
lean_closure_set(v___f_1198_, 1, v_proc_1173_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 1, v___f_1198_);
v___x_1200_ = v___x_1196_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_maxDepth_1190_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v___f_1198_);
lean_ctor_set(v_reuseFailAlloc_1207_, 2, v_suspend_1192_);
lean_ctor_set(v_reuseFailAlloc_1207_, 3, v_discharge_1193_);
lean_ctor_set_uint8(v_reuseFailAlloc_1207_, sizeof(void*)*4, v_commitIndependentGoals_1194_);
v___x_1200_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v___x_1200_);
v___x_1202_ = v___x_1188_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_toApplyConfig_1183_);
lean_ctor_set_uint8(v_reuseFailAlloc_1206_, sizeof(void*)*2, v_transparency_1184_);
lean_ctor_set_uint8(v_reuseFailAlloc_1206_, sizeof(void*)*2 + 1, v_symm_1185_);
lean_ctor_set_uint8(v_reuseFailAlloc_1206_, sizeof(void*)*2 + 2, v_exfalso_1186_);
v___x_1202_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1204_; 
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1202_);
v___x_1204_ = v___x_1181_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1202_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*1, v_backtracking_1176_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*1 + 1, v_intro_1177_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*1 + 2, v_constructor_1178_);
lean_ctor_set_uint8(v_reuseFailAlloc_1205_, sizeof(void*)*1 + 3, v_suggestions_1179_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0(lean_object* v_g_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
uint8_t v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = 1;
v___x_1220_ = l_Lean_Meta_intro1Core(v_g_1213_, v___x_1219_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1238_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1238_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1238_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v_snd_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1236_; 
v_snd_1225_ = lean_ctor_get(v_a_1221_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_a_1221_);
if (v_isSharedCheck_1236_ == 0)
{
lean_object* v_unused_1237_; 
v_unused_1237_ = lean_ctor_get(v_a_1221_, 0);
lean_dec(v_unused_1237_);
v___x_1227_ = v_a_1221_;
v_isShared_1228_ = v_isSharedCheck_1236_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_snd_1225_);
lean_dec(v_a_1221_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1236_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1229_ = lean_box(0);
if (v_isShared_1228_ == 0)
{
lean_ctor_set_tag(v___x_1227_, 1);
lean_ctor_set(v___x_1227_, 1, v___x_1229_);
lean_ctor_set(v___x_1227_, 0, v_snd_1225_);
v___x_1231_ = v___x_1227_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_snd_1225_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1233_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1231_);
v___x_1233_ = v___x_1223_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_a_1239_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1220_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1220_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0___boxed(lean_object* v_g_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___lam__0(v_g_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_intros(lean_object* v_cfg_1255_){
_start:
{
lean_object* v___f_1256_; lean_object* v___x_1257_; 
v___f_1256_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_intros___closed__0));
v___x_1257_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc(v_cfg_1255_, v___f_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1258_, lean_object* v_x_1259_, lean_object* v_x_1260_, lean_object* v_x_1261_){
_start:
{
lean_object* v_ks_1262_; lean_object* v_vs_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1287_; 
v_ks_1262_ = lean_ctor_get(v_x_1258_, 0);
v_vs_1263_ = lean_ctor_get(v_x_1258_, 1);
v_isSharedCheck_1287_ = !lean_is_exclusive(v_x_1258_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1265_ = v_x_1258_;
v_isShared_1266_ = v_isSharedCheck_1287_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_vs_1263_);
lean_inc(v_ks_1262_);
lean_dec(v_x_1258_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1287_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1267_ = lean_array_get_size(v_ks_1262_);
v___x_1268_ = lean_nat_dec_lt(v_x_1259_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_dec(v_x_1259_);
v___x_1269_ = lean_array_push(v_ks_1262_, v_x_1260_);
v___x_1270_ = lean_array_push(v_vs_1263_, v_x_1261_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v___x_1270_);
lean_ctor_set(v___x_1265_, 0, v___x_1269_);
v___x_1272_ = v___x_1265_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1269_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
else
{
lean_object* v_k_x27_1274_; uint8_t v___x_1275_; 
v_k_x27_1274_ = lean_array_fget_borrowed(v_ks_1262_, v_x_1259_);
v___x_1275_ = l_Lean_instBEqMVarId_beq(v_x_1260_, v_k_x27_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1277_; 
if (v_isShared_1266_ == 0)
{
v___x_1277_ = v___x_1265_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_ks_1262_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v_vs_1263_);
v___x_1277_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_unsigned_to_nat(1u);
v___x_1279_ = lean_nat_add(v_x_1259_, v___x_1278_);
lean_dec(v_x_1259_);
v_x_1258_ = v___x_1277_;
v_x_1259_ = v___x_1279_;
goto _start;
}
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1282_ = lean_array_fset(v_ks_1262_, v_x_1259_, v_x_1260_);
v___x_1283_ = lean_array_fset(v_vs_1263_, v_x_1259_, v_x_1261_);
lean_dec(v_x_1259_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v___x_1283_);
lean_ctor_set(v___x_1265_, 0, v___x_1282_);
v___x_1285_ = v___x_1265_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v___x_1283_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1288_, lean_object* v_k_1289_, lean_object* v_v_1290_){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_unsigned_to_nat(0u);
v___x_1292_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1288_, v___x_1291_, v_k_1289_, v_v_1290_);
return v___x_1292_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_box(0);
v___x_1294_ = l_unsafeCast___redArg(v___x_1293_);
return v___x_1294_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1296_, size_t v_x_1297_, size_t v_x_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_){
_start:
{
if (lean_obj_tag(v_x_1296_) == 0)
{
lean_object* v_es_1301_; size_t v___x_1302_; size_t v___x_1303_; lean_object* v_j_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v_es_1301_ = lean_ctor_get(v_x_1296_, 0);
v___x_1302_ = ((size_t)31ULL);
v___x_1303_ = lean_usize_land(v_x_1297_, v___x_1302_);
v_j_1304_ = lean_usize_to_nat(v___x_1303_);
v___x_1305_ = lean_array_get_size(v_es_1301_);
v___x_1306_ = lean_nat_dec_lt(v_j_1304_, v___x_1305_);
if (v___x_1306_ == 0)
{
lean_dec(v_j_1304_);
lean_dec(v_x_1300_);
lean_dec(v_x_1299_);
return v_x_1296_;
}
else
{
lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1345_; 
lean_inc_ref(v_es_1301_);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; 
v_unused_1346_ = lean_ctor_get(v_x_1296_, 0);
lean_dec(v_unused_1346_);
v___x_1308_ = v_x_1296_;
v_isShared_1309_ = v_isSharedCheck_1345_;
goto v_resetjp_1307_;
}
else
{
lean_dec(v_x_1296_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1345_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_v_1310_; lean_object* v___x_1311_; lean_object* v_xs_x27_1312_; lean_object* v___y_1314_; 
v_v_1310_ = lean_array_fget(v_es_1301_, v_j_1304_);
v___x_1311_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_1312_ = lean_array_fset(v_es_1301_, v_j_1304_, v___x_1311_);
switch(lean_obj_tag(v_v_1310_))
{
case 0:
{
lean_object* v_key_1319_; lean_object* v_val_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1330_; 
v_key_1319_ = lean_ctor_get(v_v_1310_, 0);
v_val_1320_ = lean_ctor_get(v_v_1310_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_v_1310_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1322_ = v_v_1310_;
v_isShared_1323_ = v_isSharedCheck_1330_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_val_1320_);
lean_inc(v_key_1319_);
lean_dec(v_v_1310_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1330_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
uint8_t v___x_1324_; 
v___x_1324_ = l_Lean_instBEqMVarId_beq(v_x_1299_, v_key_1319_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_del_object(v___x_1322_);
v___x_1325_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1319_, v_val_1320_, v_x_1299_, v_x_1300_);
v___x_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
v___y_1314_ = v___x_1326_;
goto v___jp_1313_;
}
else
{
lean_object* v___x_1328_; 
lean_dec(v_val_1320_);
lean_dec(v_key_1319_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 1, v_x_1300_);
lean_ctor_set(v___x_1322_, 0, v_x_1299_);
v___x_1328_ = v___x_1322_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_x_1299_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_x_1300_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
v___y_1314_ = v___x_1328_;
goto v___jp_1313_;
}
}
}
}
case 1:
{
lean_object* v_node_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1343_; 
v_node_1331_ = lean_ctor_get(v_v_1310_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_v_1310_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1333_ = v_v_1310_;
v_isShared_1334_ = v_isSharedCheck_1343_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_node_1331_);
lean_dec(v_v_1310_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1343_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
size_t v___x_1335_; size_t v___x_1336_; size_t v___x_1337_; size_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; 
v___x_1335_ = ((size_t)5ULL);
v___x_1336_ = lean_usize_shift_right(v_x_1297_, v___x_1335_);
v___x_1337_ = ((size_t)1ULL);
v___x_1338_ = lean_usize_add(v_x_1298_, v___x_1337_);
v___x_1339_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(v_node_1331_, v___x_1336_, v___x_1338_, v_x_1299_, v_x_1300_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1339_);
v___x_1341_ = v___x_1333_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v___y_1314_ = v___x_1341_;
goto v___jp_1313_;
}
}
}
default: 
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1344_, 0, v_x_1299_);
lean_ctor_set(v___x_1344_, 1, v_x_1300_);
v___y_1314_ = v___x_1344_;
goto v___jp_1313_;
}
}
v___jp_1313_:
{
lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1315_ = lean_array_fset(v_xs_x27_1312_, v_j_1304_, v___y_1314_);
lean_dec(v_j_1304_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1315_);
v___x_1317_ = v___x_1308_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___x_1315_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
else
{
lean_object* v_ks_1347_; lean_object* v_vs_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1366_; 
v_ks_1347_ = lean_ctor_get(v_x_1296_, 0);
v_vs_1348_ = lean_ctor_get(v_x_1296_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_x_1296_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1350_ = v_x_1296_;
v_isShared_1351_ = v_isSharedCheck_1366_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_vs_1348_);
lean_inc(v_ks_1347_);
lean_dec(v_x_1296_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1366_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_ks_1347_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_vs_1348_);
v___x_1353_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v_newNode_1354_; size_t v___x_1355_; uint8_t v___x_1356_; 
v_newNode_1354_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1353_, v_x_1299_, v_x_1300_);
v___x_1355_ = ((size_t)7ULL);
v___x_1356_ = lean_usize_dec_le(v___x_1355_, v_x_1298_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1354_);
v___x_1358_ = lean_unsigned_to_nat(4u);
v___x_1359_ = lean_nat_dec_lt(v___x_1357_, v___x_1358_);
lean_dec(v___x_1357_);
if (v___x_1359_ == 0)
{
lean_object* v_ks_1360_; lean_object* v_vs_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_ks_1360_ = lean_ctor_get(v_newNode_1354_, 0);
lean_inc_ref(v_ks_1360_);
v_vs_1361_ = lean_ctor_get(v_newNode_1354_, 1);
lean_inc_ref(v_vs_1361_);
lean_dec_ref(v_newNode_1354_);
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1364_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1298_, v_ks_1360_, v_vs_1361_, v___x_1362_, v___x_1363_);
lean_dec_ref(v_vs_1361_);
lean_dec_ref(v_ks_1360_);
return v___x_1364_;
}
else
{
return v_newNode_1354_;
}
}
else
{
return v_newNode_1354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1367_, lean_object* v_keys_1368_, lean_object* v_vals_1369_, lean_object* v_i_1370_, lean_object* v_entries_1371_){
_start:
{
lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = lean_array_get_size(v_keys_1368_);
v___x_1373_ = lean_nat_dec_lt(v_i_1370_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_dec(v_i_1370_);
return v_entries_1371_;
}
else
{
lean_object* v_k_1374_; lean_object* v_v_1375_; uint64_t v___x_1376_; size_t v_h_1377_; size_t v___x_1378_; lean_object* v___x_1379_; size_t v___x_1380_; size_t v___x_1381_; size_t v___x_1382_; size_t v_h_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v_k_1374_ = lean_array_fget_borrowed(v_keys_1368_, v_i_1370_);
v_v_1375_ = lean_array_fget_borrowed(v_vals_1369_, v_i_1370_);
v___x_1376_ = l_Lean_instHashableMVarId_hash(v_k_1374_);
v_h_1377_ = lean_uint64_to_usize(v___x_1376_);
v___x_1378_ = ((size_t)5ULL);
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = ((size_t)1ULL);
v___x_1381_ = lean_usize_sub(v_depth_1367_, v___x_1380_);
v___x_1382_ = lean_usize_mul(v___x_1378_, v___x_1381_);
v_h_1383_ = lean_usize_shift_right(v_h_1377_, v___x_1382_);
v___x_1384_ = lean_nat_add(v_i_1370_, v___x_1379_);
lean_dec(v_i_1370_);
lean_inc(v_v_1375_);
lean_inc(v_k_1374_);
v___x_1385_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(v_entries_1371_, v_h_1383_, v_depth_1367_, v_k_1374_, v_v_1375_);
v_i_1370_ = v___x_1384_;
v_entries_1371_ = v___x_1385_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1387_, lean_object* v_keys_1388_, lean_object* v_vals_1389_, lean_object* v_i_1390_, lean_object* v_entries_1391_){
_start:
{
size_t v_depth_boxed_1392_; lean_object* v_res_1393_; 
v_depth_boxed_1392_ = lean_unbox_usize(v_depth_1387_);
lean_dec(v_depth_1387_);
v_res_1393_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1392_, v_keys_1388_, v_vals_1389_, v_i_1390_, v_entries_1391_);
lean_dec_ref(v_vals_1389_);
lean_dec_ref(v_keys_1388_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1394_, lean_object* v_x_1395_, lean_object* v_x_1396_, lean_object* v_x_1397_, lean_object* v_x_1398_){
_start:
{
size_t v_x_842__boxed_1399_; size_t v_x_843__boxed_1400_; lean_object* v_res_1401_; 
v_x_842__boxed_1399_ = lean_unbox_usize(v_x_1395_);
lean_dec(v_x_1395_);
v_x_843__boxed_1400_ = lean_unbox_usize(v_x_1396_);
lean_dec(v_x_1396_);
v_res_1401_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(v_x_1394_, v_x_842__boxed_1399_, v_x_843__boxed_1400_, v_x_1397_, v_x_1398_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0___redArg(lean_object* v_x_1402_, lean_object* v_x_1403_, lean_object* v_x_1404_){
_start:
{
uint64_t v___x_1405_; size_t v___x_1406_; size_t v___x_1407_; lean_object* v___x_1408_; 
v___x_1405_ = l_Lean_instHashableMVarId_hash(v_x_1403_);
v___x_1406_ = lean_uint64_to_usize(v___x_1405_);
v___x_1407_ = ((size_t)1ULL);
v___x_1408_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(v_x_1402_, v___x_1406_, v___x_1407_, v_x_1403_, v_x_1404_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(lean_object* v_mvarId_1409_, lean_object* v_val_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v_mctx_1414_; lean_object* v_cache_1415_; lean_object* v_zetaDeltaFVarIds_1416_; lean_object* v_postponed_1417_; lean_object* v_diag_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1447_; 
v___x_1413_ = lean_st_ref_take(v___y_1411_);
v_mctx_1414_ = lean_ctor_get(v___x_1413_, 0);
v_cache_1415_ = lean_ctor_get(v___x_1413_, 1);
v_zetaDeltaFVarIds_1416_ = lean_ctor_get(v___x_1413_, 2);
v_postponed_1417_ = lean_ctor_get(v___x_1413_, 3);
v_diag_1418_ = lean_ctor_get(v___x_1413_, 4);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1420_ = v___x_1413_;
v_isShared_1421_ = v_isSharedCheck_1447_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_diag_1418_);
lean_inc(v_postponed_1417_);
lean_inc(v_zetaDeltaFVarIds_1416_);
lean_inc(v_cache_1415_);
lean_inc(v_mctx_1414_);
lean_dec(v___x_1413_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1447_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v_depth_1422_; lean_object* v_levelAssignDepth_1423_; lean_object* v_lmvarCounter_1424_; lean_object* v_mvarCounter_1425_; lean_object* v_lDecls_1426_; lean_object* v_decls_1427_; lean_object* v_userNames_1428_; lean_object* v_lAssignment_1429_; lean_object* v_eAssignment_1430_; lean_object* v_dAssignment_1431_; lean_object* v_instanceTypedMVars_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1446_; 
v_depth_1422_ = lean_ctor_get(v_mctx_1414_, 0);
v_levelAssignDepth_1423_ = lean_ctor_get(v_mctx_1414_, 1);
v_lmvarCounter_1424_ = lean_ctor_get(v_mctx_1414_, 2);
v_mvarCounter_1425_ = lean_ctor_get(v_mctx_1414_, 3);
v_lDecls_1426_ = lean_ctor_get(v_mctx_1414_, 4);
v_decls_1427_ = lean_ctor_get(v_mctx_1414_, 5);
v_userNames_1428_ = lean_ctor_get(v_mctx_1414_, 6);
v_lAssignment_1429_ = lean_ctor_get(v_mctx_1414_, 7);
v_eAssignment_1430_ = lean_ctor_get(v_mctx_1414_, 8);
v_dAssignment_1431_ = lean_ctor_get(v_mctx_1414_, 9);
v_instanceTypedMVars_1432_ = lean_ctor_get(v_mctx_1414_, 10);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_mctx_1414_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1434_ = v_mctx_1414_;
v_isShared_1435_ = v_isSharedCheck_1446_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_instanceTypedMVars_1432_);
lean_inc(v_dAssignment_1431_);
lean_inc(v_eAssignment_1430_);
lean_inc(v_lAssignment_1429_);
lean_inc(v_userNames_1428_);
lean_inc(v_decls_1427_);
lean_inc(v_lDecls_1426_);
lean_inc(v_mvarCounter_1425_);
lean_inc(v_lmvarCounter_1424_);
lean_inc(v_levelAssignDepth_1423_);
lean_inc(v_depth_1422_);
lean_dec(v_mctx_1414_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1446_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1436_ = lean_box(0);
v___x_1437_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0___redArg(v_eAssignment_1430_, v_mvarId_1409_, v_val_1410_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 8, v___x_1437_);
v___x_1439_ = v___x_1434_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_depth_1422_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_levelAssignDepth_1423_);
lean_ctor_set(v_reuseFailAlloc_1445_, 2, v_lmvarCounter_1424_);
lean_ctor_set(v_reuseFailAlloc_1445_, 3, v_mvarCounter_1425_);
lean_ctor_set(v_reuseFailAlloc_1445_, 4, v_lDecls_1426_);
lean_ctor_set(v_reuseFailAlloc_1445_, 5, v_decls_1427_);
lean_ctor_set(v_reuseFailAlloc_1445_, 6, v_userNames_1428_);
lean_ctor_set(v_reuseFailAlloc_1445_, 7, v_lAssignment_1429_);
lean_ctor_set(v_reuseFailAlloc_1445_, 8, v___x_1437_);
lean_ctor_set(v_reuseFailAlloc_1445_, 9, v_dAssignment_1431_);
lean_ctor_set(v_reuseFailAlloc_1445_, 10, v_instanceTypedMVars_1432_);
v___x_1439_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 0, v___x_1439_);
v___x_1441_ = v___x_1420_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_cache_1415_);
lean_ctor_set(v_reuseFailAlloc_1444_, 2, v_zetaDeltaFVarIds_1416_);
lean_ctor_set(v_reuseFailAlloc_1444_, 3, v_postponed_1417_);
lean_ctor_set(v_reuseFailAlloc_1444_, 4, v_diag_1418_);
v___x_1441_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1442_ = lean_st_ref_put(v___y_1411_, v___x_1441_);
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1436_);
return v___x_1443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg___boxed(lean_object* v_mvarId_1448_, lean_object* v_val_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(v_mvarId_1448_, v_val_1449_, v___y_1450_);
lean_dec(v___y_1450_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0(lean_object* v_g_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1459_; 
lean_inc(v_g_1453_);
v___x_1459_ = l_Lean_MVarId_getType(v_g_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1461_ = lean_box(0);
v___x_1462_ = l_Lean_Meta_synthInstance(v_a_1460_, v___x_1461_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1472_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___x_1464_ = l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(v_g_1453_, v_a_1463_, v___y_1455_);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; 
v_unused_1473_ = lean_ctor_get(v___x_1464_, 0);
lean_dec(v_unused_1473_);
v___x_1466_ = v___x_1464_;
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v___x_1464_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1472_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1470_; 
v___x_1468_ = lean_box(0);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1468_);
v___x_1470_ = v___x_1466_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v_g_1453_);
v_a_1474_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1462_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1462_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v_g_1453_);
v_a_1482_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1459_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1459_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0___boxed(lean_object* v_g_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___lam__0(v_g_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance(lean_object* v_cfg_1498_){
_start:
{
lean_object* v___f_1499_; lean_object* v___x_1500_; 
v___f_1499_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance___closed__0));
v___x_1500_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_mainGoalProc(v_cfg_1498_, v___f_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0(lean_object* v_mvarId_1501_, lean_object* v_val_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(v_mvarId_1501_, v_val_1502_, v___y_1504_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___boxed(lean_object* v_mvarId_1509_, lean_object* v_val_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0(v_mvarId_1509_, v_val_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0(lean_object* v_00_u03b2_1517_, lean_object* v_x_1518_, lean_object* v_x_1519_, lean_object* v_x_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0___redArg(v_x_1518_, v_x_1519_, v_x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1522_, lean_object* v_x_1523_, size_t v_x_1524_, size_t v_x_1525_, lean_object* v_x_1526_, lean_object* v_x_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___redArg(v_x_1523_, v_x_1524_, v_x_1525_, v_x_1526_, v_x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1529_, lean_object* v_x_1530_, lean_object* v_x_1531_, lean_object* v_x_1532_, lean_object* v_x_1533_, lean_object* v_x_1534_){
_start:
{
size_t v_x_1165__boxed_1535_; size_t v_x_1166__boxed_1536_; lean_object* v_res_1537_; 
v_x_1165__boxed_1535_ = lean_unbox_usize(v_x_1531_);
lean_dec(v_x_1531_);
v_x_1166__boxed_1536_ = lean_unbox_usize(v_x_1532_);
lean_dec(v_x_1532_);
v_res_1537_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1(v_00_u03b2_1529_, v_x_1530_, v_x_1165__boxed_1535_, v_x_1166__boxed_1536_, v_x_1533_, v_x_1534_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1538_, lean_object* v_n_1539_, lean_object* v_k_1540_, lean_object* v_v_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1539_, v_k_1540_, v_v_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1543_, size_t v_depth_1544_, lean_object* v_keys_1545_, lean_object* v_vals_1546_, lean_object* v_heq_1547_, lean_object* v_i_1548_, lean_object* v_entries_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_1544_, v_keys_1545_, v_vals_1546_, v_i_1548_, v_entries_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1551_, lean_object* v_depth_1552_, lean_object* v_keys_1553_, lean_object* v_vals_1554_, lean_object* v_heq_1555_, lean_object* v_i_1556_, lean_object* v_entries_1557_){
_start:
{
size_t v_depth_boxed_1558_; lean_object* v_res_1559_; 
v_depth_boxed_1558_ = lean_unbox_usize(v_depth_1552_);
lean_dec(v_depth_1552_);
v_res_1559_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1551_, v_depth_boxed_1558_, v_keys_1553_, v_vals_1554_, v_heq_1555_, v_i_1556_, v_entries_1557_);
lean_dec_ref(v_vals_1554_);
lean_dec_ref(v_keys_1553_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_, lean_object* v_x_1563_, lean_object* v_x_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1561_, v_x_1562_, v_x_1563_, v_x_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0(lean_object* v_discharge_1566_, lean_object* v_discharge_1567_, lean_object* v_g_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v___x_1574_; 
lean_inc(v___y_1572_);
lean_inc_ref(v___y_1571_);
lean_inc(v___y_1570_);
lean_inc_ref(v___y_1569_);
lean_inc(v_g_1568_);
v___x_1574_ = lean_apply_6(v_discharge_1566_, v_g_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, lean_box(0));
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_dec(v_g_1568_);
lean_dec_ref(v_discharge_1567_);
return v___x_1574_;
}
else
{
lean_object* v_a_1575_; uint8_t v___y_1577_; uint8_t v___x_1579_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
v___x_1579_ = l_Lean_Exception_isInterrupt(v_a_1575_);
if (v___x_1579_ == 0)
{
uint8_t v___x_1580_; 
v___x_1580_ = l_Lean_Exception_isRuntime(v_a_1575_);
v___y_1577_ = v___x_1580_;
goto v___jp_1576_;
}
else
{
lean_dec(v_a_1575_);
v___y_1577_ = v___x_1579_;
goto v___jp_1576_;
}
v___jp_1576_:
{
if (v___y_1577_ == 0)
{
lean_object* v___x_1578_; 
lean_dec_ref_known(v___x_1574_, 1);
lean_inc(v___y_1572_);
lean_inc_ref(v___y_1571_);
lean_inc(v___y_1570_);
lean_inc_ref(v___y_1569_);
v___x_1578_ = lean_apply_6(v_discharge_1567_, v_g_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, lean_box(0));
return v___x_1578_;
}
else
{
lean_dec(v_g_1568_);
lean_dec_ref(v_discharge_1567_);
return v___x_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0___boxed(lean_object* v_discharge_1581_, lean_object* v_discharge_1582_, lean_object* v_g_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0(v_discharge_1581_, v_discharge_1582_, v_g_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(lean_object* v_cfg_1590_, lean_object* v_discharge_1591_){
_start:
{
lean_object* v_toApplyRulesConfig_1592_; lean_object* v_toBacktrackConfig_1593_; uint8_t v_backtracking_1594_; uint8_t v_intro_1595_; uint8_t v_constructor_1596_; uint8_t v_suggestions_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1629_; 
v_toApplyRulesConfig_1592_ = lean_ctor_get(v_cfg_1590_, 0);
lean_inc_ref(v_toApplyRulesConfig_1592_);
v_toBacktrackConfig_1593_ = lean_ctor_get(v_toApplyRulesConfig_1592_, 0);
lean_inc_ref(v_toBacktrackConfig_1593_);
v_backtracking_1594_ = lean_ctor_get_uint8(v_cfg_1590_, sizeof(void*)*1);
v_intro_1595_ = lean_ctor_get_uint8(v_cfg_1590_, sizeof(void*)*1 + 1);
v_constructor_1596_ = lean_ctor_get_uint8(v_cfg_1590_, sizeof(void*)*1 + 2);
v_suggestions_1597_ = lean_ctor_get_uint8(v_cfg_1590_, sizeof(void*)*1 + 3);
v_isSharedCheck_1629_ = !lean_is_exclusive(v_cfg_1590_);
if (v_isSharedCheck_1629_ == 0)
{
lean_object* v_unused_1630_; 
v_unused_1630_ = lean_ctor_get(v_cfg_1590_, 0);
lean_dec(v_unused_1630_);
v___x_1599_ = v_cfg_1590_;
v_isShared_1600_ = v_isSharedCheck_1629_;
goto v_resetjp_1598_;
}
else
{
lean_dec(v_cfg_1590_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1629_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_toApplyConfig_1601_; uint8_t v_transparency_1602_; uint8_t v_symm_1603_; uint8_t v_exfalso_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1627_; 
v_toApplyConfig_1601_ = lean_ctor_get(v_toApplyRulesConfig_1592_, 1);
v_transparency_1602_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1592_, sizeof(void*)*2);
v_symm_1603_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1592_, sizeof(void*)*2 + 1);
v_exfalso_1604_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1592_, sizeof(void*)*2 + 2);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_toApplyRulesConfig_1592_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v_toApplyRulesConfig_1592_, 0);
lean_dec(v_unused_1628_);
v___x_1606_ = v_toApplyRulesConfig_1592_;
v_isShared_1607_ = v_isSharedCheck_1627_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_toApplyConfig_1601_);
lean_dec(v_toApplyRulesConfig_1592_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1627_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v_maxDepth_1608_; lean_object* v_proc_1609_; lean_object* v_suspend_1610_; lean_object* v_discharge_1611_; uint8_t v_commitIndependentGoals_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1626_; 
v_maxDepth_1608_ = lean_ctor_get(v_toBacktrackConfig_1593_, 0);
v_proc_1609_ = lean_ctor_get(v_toBacktrackConfig_1593_, 1);
v_suspend_1610_ = lean_ctor_get(v_toBacktrackConfig_1593_, 2);
v_discharge_1611_ = lean_ctor_get(v_toBacktrackConfig_1593_, 3);
v_commitIndependentGoals_1612_ = lean_ctor_get_uint8(v_toBacktrackConfig_1593_, sizeof(void*)*4);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_toBacktrackConfig_1593_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1614_ = v_toBacktrackConfig_1593_;
v_isShared_1615_ = v_isSharedCheck_1626_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_discharge_1611_);
lean_inc(v_suspend_1610_);
lean_inc(v_proc_1609_);
lean_inc(v_maxDepth_1608_);
lean_dec(v_toBacktrackConfig_1593_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1626_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___f_1616_; lean_object* v___x_1618_; 
v___f_1616_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1616_, 0, v_discharge_1591_);
lean_closure_set(v___f_1616_, 1, v_discharge_1611_);
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 3, v___f_1616_);
v___x_1618_ = v___x_1614_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_maxDepth_1608_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v_proc_1609_);
lean_ctor_set(v_reuseFailAlloc_1625_, 2, v_suspend_1610_);
lean_ctor_set(v_reuseFailAlloc_1625_, 3, v___f_1616_);
lean_ctor_set_uint8(v_reuseFailAlloc_1625_, sizeof(void*)*4, v_commitIndependentGoals_1612_);
v___x_1618_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
lean_object* v___x_1620_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v___x_1618_);
v___x_1620_ = v___x_1606_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1618_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v_toApplyConfig_1601_);
lean_ctor_set_uint8(v_reuseFailAlloc_1624_, sizeof(void*)*2, v_transparency_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1624_, sizeof(void*)*2 + 1, v_symm_1603_);
lean_ctor_set_uint8(v_reuseFailAlloc_1624_, sizeof(void*)*2 + 2, v_exfalso_1604_);
v___x_1620_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
lean_object* v___x_1622_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v___x_1620_);
v___x_1622_ = v___x_1599_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
lean_ctor_set_uint8(v_reuseFailAlloc_1623_, sizeof(void*)*1, v_backtracking_1594_);
lean_ctor_set_uint8(v_reuseFailAlloc_1623_, sizeof(void*)*1 + 1, v_intro_1595_);
lean_ctor_set_uint8(v_reuseFailAlloc_1623_, sizeof(void*)*1 + 2, v_constructor_1596_);
lean_ctor_set_uint8(v_reuseFailAlloc_1623_, sizeof(void*)*1 + 3, v_suggestions_1597_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0(lean_object* v_g_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
uint8_t v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = 1;
v___x_1638_ = l_Lean_Meta_intro1Core(v_g_1631_, v___x_1637_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1657_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1657_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1657_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v_snd_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1655_; 
v_snd_1643_ = lean_ctor_get(v_a_1639_, 1);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_a_1639_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v_a_1639_, 0);
lean_dec(v_unused_1656_);
v___x_1645_ = v_a_1639_;
v_isShared_1646_ = v_isSharedCheck_1655_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_snd_1643_);
lean_dec(v_a_1639_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1655_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; lean_object* v___x_1649_; 
v___x_1647_ = lean_box(0);
if (v_isShared_1646_ == 0)
{
lean_ctor_set_tag(v___x_1645_, 1);
lean_ctor_set(v___x_1645_, 1, v___x_1647_);
lean_ctor_set(v___x_1645_, 0, v_snd_1643_);
v___x_1649_ = v___x_1645_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_snd_1643_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v___x_1647_);
v___x_1649_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1650_);
v___x_1652_ = v___x_1641_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1638_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1638_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0___boxed(lean_object* v_g_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___lam__0(v_g_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter(lean_object* v_cfg_1674_){
_start:
{
lean_object* v___f_1675_; lean_object* v___x_1676_; 
v___f_1675_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter___closed__0));
v___x_1676_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v_cfg_1674_, v___f_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0(lean_object* v_g_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___closed__0));
v___x_1688_ = l_Lean_MVarId_constructor(v_g_1681_, v___x_1687_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1697_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1697_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1697_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1693_, 0, v_a_1689_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1693_);
v___x_1695_ = v___x_1691_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_a_1698_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1688_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1688_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0___boxed(lean_object* v_g_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___lam__0(v_g_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter(lean_object* v_cfg_1714_){
_start:
{
lean_object* v___f_1715_; lean_object* v___x_1716_; 
v___f_1715_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter___closed__0));
v___x_1716_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v_cfg_1714_, v___f_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0(lean_object* v_g_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; 
lean_inc(v_g_1719_);
v___x_1725_ = l_Lean_MVarId_getType(v_g_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v___x_1727_ = lean_box(0);
v___x_1728_ = l_Lean_Meta_synthInstance(v_a_1726_, v___x_1727_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1738_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = l_Lean_MVarId_assign___at___00Lean_Meta_SolveByElim_SolveByElimConfig_synthInstance_spec__0___redArg(v_g_1719_, v_a_1729_, v___y_1721_);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1738_ == 0)
{
lean_object* v_unused_1739_; 
v_unused_1739_ = lean_ctor_get(v___x_1730_, 0);
lean_dec(v_unused_1739_);
v___x_1732_ = v___x_1730_;
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
else
{
lean_dec(v___x_1730_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1738_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1734_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___closed__0));
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1734_);
v___x_1736_ = v___x_1732_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_g_1719_);
v_a_1740_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1728_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1728_);
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
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
lean_dec(v_g_1719_);
v_a_1748_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1725_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1725_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0___boxed(lean_object* v_g_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___lam__0(v_g_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter(lean_object* v_cfg_1764_){
_start:
{
lean_object* v___f_1765_; lean_object* v___x_1766_; 
v___f_1765_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_synthInstanceAfter___closed__0));
v___x_1766_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_withDischarge(v_cfg_1764_, v___f_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg(lean_object* v_e_1767_, lean_object* v___y_1768_){
_start:
{
uint8_t v___x_1770_; 
v___x_1770_ = l_Lean_Expr_hasMVar(v_e_1767_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1771_, 0, v_e_1767_);
return v___x_1771_;
}
else
{
lean_object* v___x_1772_; lean_object* v_mctx_1773_; lean_object* v___x_1774_; lean_object* v_fst_1775_; lean_object* v_snd_1776_; lean_object* v___x_1777_; lean_object* v_cache_1778_; lean_object* v_zetaDeltaFVarIds_1779_; lean_object* v_postponed_1780_; lean_object* v_diag_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1790_; 
v___x_1772_ = lean_st_ref_get(v___y_1768_);
v_mctx_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc_ref(v_mctx_1773_);
lean_dec(v___x_1772_);
v___x_1774_ = l_Lean_instantiateMVarsCore(v_mctx_1773_, v_e_1767_);
v_fst_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_fst_1775_);
v_snd_1776_ = lean_ctor_get(v___x_1774_, 1);
lean_inc(v_snd_1776_);
lean_dec_ref(v___x_1774_);
v___x_1777_ = lean_st_ref_take(v___y_1768_);
v_cache_1778_ = lean_ctor_get(v___x_1777_, 1);
v_zetaDeltaFVarIds_1779_ = lean_ctor_get(v___x_1777_, 2);
v_postponed_1780_ = lean_ctor_get(v___x_1777_, 3);
v_diag_1781_ = lean_ctor_get(v___x_1777_, 4);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1790_ == 0)
{
lean_object* v_unused_1791_; 
v_unused_1791_ = lean_ctor_get(v___x_1777_, 0);
lean_dec(v_unused_1791_);
v___x_1783_ = v___x_1777_;
v_isShared_1784_ = v_isSharedCheck_1790_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_diag_1781_);
lean_inc(v_postponed_1780_);
lean_inc(v_zetaDeltaFVarIds_1779_);
lean_inc(v_cache_1778_);
lean_dec(v___x_1777_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1790_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v_snd_1776_);
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_snd_1776_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_cache_1778_);
lean_ctor_set(v_reuseFailAlloc_1789_, 2, v_zetaDeltaFVarIds_1779_);
lean_ctor_set(v_reuseFailAlloc_1789_, 3, v_postponed_1780_);
lean_ctor_set(v_reuseFailAlloc_1789_, 4, v_diag_1781_);
v___x_1786_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = lean_st_ref_put(v___y_1768_, v___x_1786_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v_fst_1775_);
return v___x_1788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg___boxed(lean_object* v_e_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg(v_e_1792_, v___y_1793_);
lean_dec(v___y_1793_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0(lean_object* v_e_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___redArg(v_e_1796_, v___y_1798_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___boxed(lean_object* v_e_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0(v_e_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(lean_object* v_mvarId_1810_, lean_object* v_x_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1810_, v_x_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1817_);
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
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_a_1826_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1817_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1817_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg___boxed(lean_object* v_mvarId_1834_, lean_object* v_x_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(v_mvarId_1834_, v_x_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1(lean_object* v_00_u03b1_1842_, lean_object* v_mvarId_1843_, lean_object* v_x_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(v_mvarId_1843_, v_x_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___boxed(lean_object* v_00_u03b1_1851_, lean_object* v_mvarId_1852_, lean_object* v_x_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1(v_00_u03b1_1851_, v_mvarId_1852_, v_x_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(lean_object* v_msg_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v_ref_1866_; lean_object* v___x_1867_; lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1876_; 
v_ref_1866_ = lean_ctor_get(v___y_1863_, 2);
v___x_1867_ = l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2_spec__2_spec__5(v_msg_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1874_; 
lean_inc(v_ref_1866_);
v___x_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1872_, 0, v_ref_1866_);
lean_ctor_set(v___x_1872_, 1, v_a_1868_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set_tag(v___x_1870_, 1);
lean_ctor_set(v___x_1870_, 0, v___x_1872_);
v___x_1874_ = v___x_1870_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg___boxed(lean_object* v_msg_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v_msg_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2(lean_object* v_x_1884_, lean_object* v_x_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
if (lean_obj_tag(v_x_1884_) == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = l_List_reverse___redArg(v_x_1885_);
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
return v___x_1892_;
}
else
{
lean_object* v_head_1893_; lean_object* v_tail_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1914_; 
v_head_1893_ = lean_ctor_get(v_x_1884_, 0);
v_tail_1894_ = lean_ctor_get(v_x_1884_, 1);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_x_1884_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1896_ = v_x_1884_;
v_isShared_1897_ = v_isSharedCheck_1914_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_tail_1894_);
lean_inc(v_head_1893_);
lean_dec(v_x_1884_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1914_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
lean_inc(v_head_1893_);
v___x_1898_ = l_Lean_Expr_mvar___override(v_head_1893_);
v___x_1899_ = lean_alloc_closure((void*)(l_Lean_instantiateMVars___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__0___boxed), 6, 1);
lean_closure_set(v___x_1899_, 0, v___x_1898_);
v___x_1900_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(v_head_1893_, v___x_1899_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1903_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 1, v_x_1885_);
lean_ctor_set(v___x_1896_, 0, v_a_1901_);
v___x_1903_ = v___x_1896_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1901_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_x_1885_);
v___x_1903_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
v_x_1884_ = v_tail_1894_;
v_x_1885_ = v___x_1903_;
goto _start;
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_del_object(v___x_1896_);
lean_dec(v_tail_1894_);
lean_dec(v_x_1885_);
v_a_1906_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1900_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1900_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2___boxed(lean_object* v_x_1915_, lean_object* v_x_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2(v_x_1915_, v_x_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1922_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1924_ = ((lean_object*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__0));
v___x_1925_ = l_Lean_stringToMessageData(v___x_1924_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0(lean_object* v_test_1926_, lean_object* v_proc_1927_, lean_object* v_orig_1928_, lean_object* v_goals_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_box(0);
lean_inc(v_orig_1928_);
v___x_1936_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__2(v_orig_1928_, v___x_1935_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1938_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref_known(v___x_1936_, 1);
lean_inc(v___y_1933_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
v___x_1938_ = lean_apply_6(v_test_1926_, v_a_1937_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, lean_box(0));
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; uint8_t v___x_1940_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
v___x_1940_ = lean_unbox(v_a_1939_);
lean_dec(v_a_1939_);
if (v___x_1940_ == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec(v_goals_1929_);
lean_dec(v_orig_1928_);
lean_dec_ref(v_proc_1927_);
v___x_1941_ = lean_obj_once(&l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1, &l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1_once, _init_l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___closed__1);
v___x_1942_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v___x_1941_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
else
{
lean_object* v___x_1951_; 
lean_inc(v___y_1933_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
v___x_1951_ = lean_apply_7(v_proc_1927_, v_orig_1928_, v_goals_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, lean_box(0));
return v___x_1951_;
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec(v_goals_1929_);
lean_dec(v_orig_1928_);
lean_dec_ref(v_proc_1927_);
v_a_1952_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1938_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1938_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
lean_dec(v_goals_1929_);
lean_dec(v_orig_1928_);
lean_dec_ref(v_proc_1927_);
lean_dec_ref(v_test_1926_);
v_a_1960_ = lean_ctor_get(v___x_1936_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1936_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1936_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___boxed(lean_object* v_test_1968_, lean_object* v_proc_1969_, lean_object* v_orig_1970_, lean_object* v_goals_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0(v_test_1968_, v_proc_1969_, v_orig_1970_, v_goals_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions(lean_object* v_cfg_1978_, lean_object* v_test_1979_){
_start:
{
lean_object* v_toApplyRulesConfig_1980_; lean_object* v_toBacktrackConfig_1981_; uint8_t v_backtracking_1982_; uint8_t v_intro_1983_; uint8_t v_constructor_1984_; uint8_t v_suggestions_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2017_; 
v_toApplyRulesConfig_1980_ = lean_ctor_get(v_cfg_1978_, 0);
lean_inc_ref(v_toApplyRulesConfig_1980_);
v_toBacktrackConfig_1981_ = lean_ctor_get(v_toApplyRulesConfig_1980_, 0);
lean_inc_ref(v_toBacktrackConfig_1981_);
v_backtracking_1982_ = lean_ctor_get_uint8(v_cfg_1978_, sizeof(void*)*1);
v_intro_1983_ = lean_ctor_get_uint8(v_cfg_1978_, sizeof(void*)*1 + 1);
v_constructor_1984_ = lean_ctor_get_uint8(v_cfg_1978_, sizeof(void*)*1 + 2);
v_suggestions_1985_ = lean_ctor_get_uint8(v_cfg_1978_, sizeof(void*)*1 + 3);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_cfg_1978_);
if (v_isSharedCheck_2017_ == 0)
{
lean_object* v_unused_2018_; 
v_unused_2018_ = lean_ctor_get(v_cfg_1978_, 0);
lean_dec(v_unused_2018_);
v___x_1987_ = v_cfg_1978_;
v_isShared_1988_ = v_isSharedCheck_2017_;
goto v_resetjp_1986_;
}
else
{
lean_dec(v_cfg_1978_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2017_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v_toApplyConfig_1989_; uint8_t v_transparency_1990_; uint8_t v_symm_1991_; uint8_t v_exfalso_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2015_; 
v_toApplyConfig_1989_ = lean_ctor_get(v_toApplyRulesConfig_1980_, 1);
v_transparency_1990_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1980_, sizeof(void*)*2);
v_symm_1991_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1980_, sizeof(void*)*2 + 1);
v_exfalso_1992_ = lean_ctor_get_uint8(v_toApplyRulesConfig_1980_, sizeof(void*)*2 + 2);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_toApplyRulesConfig_1980_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v_toApplyRulesConfig_1980_, 0);
lean_dec(v_unused_2016_);
v___x_1994_ = v_toApplyRulesConfig_1980_;
v_isShared_1995_ = v_isSharedCheck_2015_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_toApplyConfig_1989_);
lean_dec(v_toApplyRulesConfig_1980_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2015_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v_maxDepth_1996_; lean_object* v_proc_1997_; lean_object* v_suspend_1998_; lean_object* v_discharge_1999_; uint8_t v_commitIndependentGoals_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2014_; 
v_maxDepth_1996_ = lean_ctor_get(v_toBacktrackConfig_1981_, 0);
v_proc_1997_ = lean_ctor_get(v_toBacktrackConfig_1981_, 1);
v_suspend_1998_ = lean_ctor_get(v_toBacktrackConfig_1981_, 2);
v_discharge_1999_ = lean_ctor_get(v_toBacktrackConfig_1981_, 3);
v_commitIndependentGoals_2000_ = lean_ctor_get_uint8(v_toBacktrackConfig_1981_, sizeof(void*)*4);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_toBacktrackConfig_1981_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2002_ = v_toBacktrackConfig_1981_;
v_isShared_2003_ = v_isSharedCheck_2014_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_discharge_1999_);
lean_inc(v_suspend_1998_);
lean_inc(v_proc_1997_);
lean_inc(v_maxDepth_1996_);
lean_dec(v_toBacktrackConfig_1981_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2014_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___f_2004_; lean_object* v___x_2006_; 
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2004_, 0, v_test_1979_);
lean_closure_set(v___f_2004_, 1, v_proc_1997_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 1, v___f_2004_);
v___x_2006_ = v___x_2002_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_maxDepth_1996_);
lean_ctor_set(v_reuseFailAlloc_2013_, 1, v___f_2004_);
lean_ctor_set(v_reuseFailAlloc_2013_, 2, v_suspend_1998_);
lean_ctor_set(v_reuseFailAlloc_2013_, 3, v_discharge_1999_);
lean_ctor_set_uint8(v_reuseFailAlloc_2013_, sizeof(void*)*4, v_commitIndependentGoals_2000_);
v___x_2006_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2008_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2006_);
v___x_2008_ = v___x_1994_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2006_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_toApplyConfig_1989_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*2, v_transparency_1990_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*2 + 1, v_symm_1991_);
lean_ctor_set_uint8(v_reuseFailAlloc_2012_, sizeof(void*)*2 + 2, v_exfalso_1992_);
v___x_2008_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2010_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_2008_);
v___x_2010_ = v___x_1987_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*1, v_backtracking_1982_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*1 + 1, v_intro_1983_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*1 + 2, v_constructor_1984_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*1 + 3, v_suggestions_1985_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3(lean_object* v_00_u03b1_2019_, lean_object* v_msg_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v___x_2026_; 
v___x_2026_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v_msg_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___boxed(lean_object* v_00_u03b1_2027_, lean_object* v_msg_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3(v_00_u03b1_2027_, v_msg_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
return v_res_2034_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0(lean_object* v_x_2035_){
_start:
{
if (lean_obj_tag(v_x_2035_) == 0)
{
uint8_t v___x_2036_; 
v___x_2036_ = 0;
return v___x_2036_;
}
else
{
lean_object* v_head_2037_; lean_object* v_tail_2038_; uint8_t v___x_2039_; 
v_head_2037_ = lean_ctor_get(v_x_2035_, 0);
v_tail_2038_ = lean_ctor_get(v_x_2035_, 1);
v___x_2039_ = l_Lean_Expr_hasMVar(v_head_2037_);
if (v___x_2039_ == 0)
{
v_x_2035_ = v_tail_2038_;
goto _start;
}
else
{
return v___x_2039_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0___boxed(lean_object* v_x_2041_){
_start:
{
uint8_t v_res_2042_; lean_object* v_r_2043_; 
v_res_2042_ = l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0(v_x_2041_);
lean_dec(v_x_2041_);
v_r_2043_ = lean_box(v_res_2042_);
return v_r_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0(lean_object* v_test_2044_, lean_object* v_sols_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
uint8_t v___x_2051_; 
v___x_2051_ = l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions_spec__0(v_sols_2045_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; 
lean_inc(v___y_2049_);
lean_inc_ref(v___y_2048_);
lean_inc(v___y_2047_);
lean_inc_ref(v___y_2046_);
v___x_2052_ = lean_apply_6(v_test_2044_, v_sols_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, lean_box(0));
return v___x_2052_;
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_dec(v_sols_2045_);
lean_dec_ref(v_test_2044_);
v___x_2053_ = lean_box(v___x_2051_);
v___x_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0___boxed(lean_object* v_test_2055_, lean_object* v_sols_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0(v_test_2055_, v_sols_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions(lean_object* v_cfg_2063_, lean_object* v_test_2064_){
_start:
{
lean_object* v___f_2065_; lean_object* v___x_2066_; 
v___f_2065_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2065_, 0, v_test_2064_);
v___x_2066_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions(v_cfg_2063_, v___f_2065_);
return v___x_2066_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0(lean_object* v_e_2067_, lean_object* v_x_2068_){
_start:
{
if (lean_obj_tag(v_x_2068_) == 0)
{
uint8_t v___x_2069_; 
lean_dec_ref(v_e_2067_);
v___x_2069_ = 0;
return v___x_2069_;
}
else
{
lean_object* v_head_2070_; lean_object* v_tail_2071_; uint8_t v___x_2072_; 
v_head_2070_ = lean_ctor_get(v_x_2068_, 0);
v_tail_2071_ = lean_ctor_get(v_x_2068_, 1);
lean_inc_ref(v_e_2067_);
v___x_2072_ = l_Lean_Expr_occurs(v_e_2067_, v_head_2070_);
if (v___x_2072_ == 0)
{
v_x_2068_ = v_tail_2071_;
goto _start;
}
else
{
lean_dec_ref(v_e_2067_);
return v___x_2072_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0___boxed(lean_object* v_e_2074_, lean_object* v_x_2075_){
_start:
{
uint8_t v_res_2076_; lean_object* v_r_2077_; 
v_res_2076_ = l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0(v_e_2074_, v_x_2075_);
lean_dec(v_x_2075_);
v_r_2077_ = lean_box(v_res_2076_);
return v_r_2077_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1(lean_object* v_sols_2078_, lean_object* v_x_2079_){
_start:
{
if (lean_obj_tag(v_x_2079_) == 0)
{
uint8_t v___x_2080_; 
v___x_2080_ = 1;
return v___x_2080_;
}
else
{
lean_object* v_head_2081_; lean_object* v_tail_2082_; uint8_t v___x_2083_; 
v_head_2081_ = lean_ctor_get(v_x_2079_, 0);
lean_inc(v_head_2081_);
v_tail_2082_ = lean_ctor_get(v_x_2079_, 1);
lean_inc(v_tail_2082_);
lean_dec_ref_known(v_x_2079_, 2);
v___x_2083_ = l_List_any___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__0(v_head_2081_, v_sols_2078_);
if (v___x_2083_ == 0)
{
lean_dec(v_tail_2082_);
return v___x_2083_;
}
else
{
v_x_2079_ = v_tail_2082_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1___boxed(lean_object* v_sols_2085_, lean_object* v_x_2086_){
_start:
{
uint8_t v_res_2087_; lean_object* v_r_2088_; 
v_res_2087_ = l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1(v_sols_2085_, v_x_2086_);
lean_dec(v_sols_2085_);
v_r_2088_ = lean_box(v_res_2087_);
return v_r_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0(lean_object* v_use_2089_, lean_object* v_sols_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
uint8_t v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = l_List_all___at___00Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll_spec__1(v_sols_2090_, v_use_2089_);
v___x_2097_ = lean_box(v___x_2096_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0___boxed(lean_object* v_use_2099_, lean_object* v_sols_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0(v_use_2099_, v_sols_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v_sols_2100_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll(lean_object* v_cfg_2107_, lean_object* v_use_2108_){
_start:
{
lean_object* v___f_2109_; lean_object* v___x_2110_; 
v___f_2109_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_SolveByElimConfig_requireUsingAll___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2109_, 0, v_use_2108_);
v___x_2110_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_testSolutions(v_cfg_2107_, v___f_2109_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_SolveByElimConfig_processOptions(lean_object* v_cfg_2111_){
_start:
{
lean_object* v___y_2113_; lean_object* v_toApplyRulesConfig_2114_; uint8_t v_backtracking_2115_; uint8_t v_intro_2116_; uint8_t v_constructor_2117_; uint8_t v_suggestions_2118_; uint8_t v_intro_2122_; 
v_intro_2122_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1 + 1);
if (v_intro_2122_ == 0)
{
lean_object* v_toApplyRulesConfig_2123_; uint8_t v_backtracking_2124_; uint8_t v_constructor_2125_; uint8_t v_suggestions_2126_; 
v_toApplyRulesConfig_2123_ = lean_ctor_get(v_cfg_2111_, 0);
lean_inc_ref(v_toApplyRulesConfig_2123_);
v_backtracking_2124_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1);
v_constructor_2125_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1 + 2);
v_suggestions_2126_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1 + 3);
v___y_2113_ = v_cfg_2111_;
v_toApplyRulesConfig_2114_ = v_toApplyRulesConfig_2123_;
v_backtracking_2115_ = v_backtracking_2124_;
v_intro_2116_ = v_intro_2122_;
v_constructor_2117_ = v_constructor_2125_;
v_suggestions_2118_ = v_suggestions_2126_;
goto v___jp_2112_;
}
else
{
lean_object* v_toApplyRulesConfig_2127_; uint8_t v_backtracking_2128_; uint8_t v_constructor_2129_; uint8_t v_suggestions_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2144_; 
v_toApplyRulesConfig_2127_ = lean_ctor_get(v_cfg_2111_, 0);
v_backtracking_2128_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1);
v_constructor_2129_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1 + 2);
v_suggestions_2130_ = lean_ctor_get_uint8(v_cfg_2111_, sizeof(void*)*1 + 3);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_cfg_2111_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2132_ = v_cfg_2111_;
v_isShared_2133_ = v_isSharedCheck_2144_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_toApplyRulesConfig_2127_);
lean_dec(v_cfg_2111_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2144_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
uint8_t v___x_2134_; lean_object* v___x_2136_; 
v___x_2134_ = 0;
if (v_isShared_2133_ == 0)
{
v___x_2136_ = v___x_2132_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_toApplyRulesConfig_2127_);
lean_ctor_set_uint8(v_reuseFailAlloc_2143_, sizeof(void*)*1, v_backtracking_2128_);
lean_ctor_set_uint8(v_reuseFailAlloc_2143_, sizeof(void*)*1 + 2, v_constructor_2129_);
lean_ctor_set_uint8(v_reuseFailAlloc_2143_, sizeof(void*)*1 + 3, v_suggestions_2130_);
v___x_2136_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v___x_2137_; lean_object* v_toApplyRulesConfig_2138_; uint8_t v_backtracking_2139_; uint8_t v_intro_2140_; uint8_t v_constructor_2141_; uint8_t v_suggestions_2142_; 
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*1 + 1, v___x_2134_);
v___x_2137_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_introsAfter(v___x_2136_);
v_toApplyRulesConfig_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc_ref(v_toApplyRulesConfig_2138_);
v_backtracking_2139_ = lean_ctor_get_uint8(v___x_2137_, sizeof(void*)*1);
v_intro_2140_ = lean_ctor_get_uint8(v___x_2137_, sizeof(void*)*1 + 1);
v_constructor_2141_ = lean_ctor_get_uint8(v___x_2137_, sizeof(void*)*1 + 2);
v_suggestions_2142_ = lean_ctor_get_uint8(v___x_2137_, sizeof(void*)*1 + 3);
v___y_2113_ = v___x_2137_;
v_toApplyRulesConfig_2114_ = v_toApplyRulesConfig_2138_;
v_backtracking_2115_ = v_backtracking_2139_;
v_intro_2116_ = v_intro_2140_;
v_constructor_2117_ = v_constructor_2141_;
v_suggestions_2118_ = v_suggestions_2142_;
goto v___jp_2112_;
}
}
}
v___jp_2112_:
{
if (v_constructor_2117_ == 0)
{
lean_dec_ref(v_toApplyRulesConfig_2114_);
return v___y_2113_;
}
else
{
uint8_t v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_dec_ref(v___y_2113_);
v___x_2119_ = 0;
v___x_2120_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_2120_, 0, v_toApplyRulesConfig_2114_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*1, v_backtracking_2115_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*1 + 1, v_intro_2116_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*1 + 2, v___x_2119_);
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*1 + 3, v_suggestions_2118_);
v___x_2121_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_constructorAfter(v___x_2120_);
return v___x_2121_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0(lean_object* v_x_2145_, lean_object* v_x_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
if (lean_obj_tag(v_x_2145_) == 0)
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = l_List_reverse___redArg(v_x_2146_);
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
return v___x_2155_;
}
else
{
lean_object* v_head_2156_; lean_object* v_tail_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2175_; 
v_head_2156_ = lean_ctor_get(v_x_2145_, 0);
v_tail_2157_ = lean_ctor_get(v_x_2145_, 1);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_x_2145_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2159_ = v_x_2145_;
v_isShared_2160_ = v_isSharedCheck_2175_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_tail_2157_);
lean_inc(v_head_2156_);
lean_dec(v_x_2145_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2175_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2161_; 
lean_inc(v___y_2152_);
lean_inc_ref(v___y_2151_);
lean_inc(v___y_2150_);
lean_inc_ref(v___y_2149_);
lean_inc(v___y_2148_);
lean_inc_ref(v___y_2147_);
v___x_2161_ = lean_apply_7(v_head_2156_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, lean_box(0));
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 1, v_x_2146_);
lean_ctor_set(v___x_2159_, 0, v_a_2162_);
v___x_2164_ = v___x_2159_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2162_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_x_2146_);
v___x_2164_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
v_x_2145_ = v_tail_2157_;
v_x_2146_ = v___x_2164_;
goto _start;
}
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
lean_del_object(v___x_2159_);
lean_dec(v_tail_2157_);
lean_dec(v_x_2146_);
v_a_2167_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2161_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2161_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0___boxed(lean_object* v_x_2176_, lean_object* v_x_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0(v_x_2176_, v_x_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0(lean_object* v_ctx_2186_, lean_object* v_cfg_2187_, lean_object* v_lemmas_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v___x_2196_; 
lean_inc(v___y_2194_);
lean_inc_ref(v___y_2193_);
lean_inc(v___y_2192_);
lean_inc_ref(v___y_2191_);
lean_inc(v___y_2190_);
lean_inc_ref(v___y_2189_);
v___x_2196_ = lean_apply_8(v_ctx_2186_, v_cfg_2187_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, lean_box(0));
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v___x_2198_ = lean_box(0);
v___x_2199_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_elabContextLemmas_spec__0(v_lemmas_2188_, v___x_2198_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2208_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2208_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2208_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2204_; lean_object* v___x_2206_; 
v___x_2204_ = l_List_appendTR___redArg(v_a_2197_, v_a_2200_);
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2204_);
v___x_2206_ = v___x_2202_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2204_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
else
{
lean_dec(v_a_2197_);
return v___x_2199_;
}
}
else
{
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
lean_dec(v_lemmas_2188_);
return v___x_2196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0___boxed(lean_object* v_ctx_2209_, lean_object* v_cfg_2210_, lean_object* v_lemmas_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0(v_ctx_2209_, v_cfg_2210_, v_lemmas_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_);
return v_res_2219_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1(lean_object* v_x_2220_){
_start:
{
uint8_t v___x_2221_; 
v___x_2221_ = 0;
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1___boxed(lean_object* v_x_2222_){
_start:
{
uint8_t v_res_2223_; lean_object* v_r_2224_; 
v_res_2223_ = l_Lean_Meta_SolveByElim_elabContextLemmas___lam__1(v_x_2222_);
lean_dec(v_x_2222_);
v_r_2224_ = lean_box(v_res_2223_);
return v_r_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2(lean_object* v___f_2225_, lean_object* v___x_2226_, lean_object* v___x_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___f_2225_, v___x_2226_, v___x_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2242_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2236_ = v___x_2233_;
v_isShared_2237_ = v_isSharedCheck_2242_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2233_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2242_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v_fst_2238_; lean_object* v___x_2240_; 
v_fst_2238_ = lean_ctor_get(v_a_2234_, 0);
lean_inc(v_fst_2238_);
lean_dec(v_a_2234_);
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 0, v_fst_2238_);
v___x_2240_ = v___x_2236_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_fst_2238_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
v_a_2243_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2233_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2233_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2___boxed(lean_object* v___f_2251_, lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2(v___f_2251_, v___x_2252_, v___x_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas(lean_object* v_cfg_2274_, lean_object* v_g_2275_, lean_object* v_lemmas_2276_, lean_object* v_ctx_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v___f_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___f_2286_; lean_object* v___x_2287_; 
v___f_2283_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_elabContextLemmas___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2283_, 0, v_ctx_2277_);
lean_closure_set(v___f_2283_, 1, v_cfg_2274_);
lean_closure_set(v___f_2283_, 2, v_lemmas_2276_);
v___x_2284_ = ((lean_object*)(l_Lean_Meta_SolveByElim_elabContextLemmas___closed__2));
v___x_2285_ = ((lean_object*)(l_Lean_Meta_SolveByElim_elabContextLemmas___closed__3));
v___f_2286_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_elabContextLemmas___lam__2___boxed), 8, 3);
lean_closure_set(v___f_2286_, 0, v___f_2283_);
lean_closure_set(v___f_2286_, 1, v___x_2284_);
lean_closure_set(v___f_2286_, 2, v___x_2285_);
v___x_2287_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__1___redArg(v_g_2275_, v___f_2286_, v_a_2278_, v_a_2279_, v_a_2280_, v_a_2281_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_elabContextLemmas___boxed(lean_object* v_cfg_2288_, lean_object* v_g_2289_, lean_object* v_lemmas_2290_, lean_object* v_ctx_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lean_Meta_SolveByElim_elabContextLemmas(v_cfg_2288_, v_g_2289_, v_lemmas_2290_, v_ctx_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_);
lean_dec(v_a_2295_);
lean_dec_ref(v_a_2294_);
lean_dec(v_a_2293_);
lean_dec_ref(v_a_2292_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyLemmas(lean_object* v_cfg_2298_, lean_object* v_lemmas_2299_, lean_object* v_ctx_2300_, lean_object* v_g_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v___x_2307_; 
lean_inc(v_g_2301_);
lean_inc_ref(v_cfg_2298_);
v___x_2307_ = l_Lean_Meta_SolveByElim_elabContextLemmas(v_cfg_2298_, v_g_2301_, v_lemmas_2299_, v_ctx_2300_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_toApplyRulesConfig_2308_; lean_object* v_a_2309_; lean_object* v_toApplyConfig_2310_; uint8_t v_transparency_2311_; lean_object* v___x_2312_; 
v_toApplyRulesConfig_2308_ = lean_ctor_get(v_cfg_2298_, 0);
lean_inc_ref(v_toApplyRulesConfig_2308_);
lean_dec_ref(v_cfg_2298_);
v_a_2309_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2307_, 1);
v_toApplyConfig_2310_ = lean_ctor_get(v_toApplyRulesConfig_2308_, 1);
lean_inc_ref(v_toApplyConfig_2310_);
v_transparency_2311_ = lean_ctor_get_uint8(v_toApplyRulesConfig_2308_, sizeof(void*)*2);
lean_dec_ref(v_toApplyRulesConfig_2308_);
v___x_2312_ = l_Lean_Meta_SolveByElim_applyTactics___redArg(v_toApplyConfig_2310_, v_transparency_2311_, v_a_2309_, v_g_2301_, v_a_2303_, v_a_2305_);
return v___x_2312_;
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec(v_g_2301_);
lean_dec_ref(v_cfg_2298_);
v_a_2313_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2307_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2307_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyLemmas___boxed(lean_object* v_cfg_2321_, lean_object* v_lemmas_2322_, lean_object* v_ctx_2323_, lean_object* v_g_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lean_Meta_SolveByElim_applyLemmas(v_cfg_2321_, v_lemmas_2322_, v_ctx_2323_, v_g_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirstLemma(lean_object* v_cfg_2331_, lean_object* v_lemmas_2332_, lean_object* v_ctx_2333_, lean_object* v_g_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v___x_2340_; 
lean_inc(v_g_2334_);
lean_inc_ref(v_cfg_2331_);
v___x_2340_ = l_Lean_Meta_SolveByElim_elabContextLemmas(v_cfg_2331_, v_g_2334_, v_lemmas_2332_, v_ctx_2333_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_toApplyRulesConfig_2341_; lean_object* v_a_2342_; lean_object* v_toApplyConfig_2343_; uint8_t v_transparency_2344_; lean_object* v___x_2345_; 
v_toApplyRulesConfig_2341_ = lean_ctor_get(v_cfg_2331_, 0);
lean_inc_ref(v_toApplyRulesConfig_2341_);
lean_dec_ref(v_cfg_2331_);
v_a_2342_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2340_, 1);
v_toApplyConfig_2343_ = lean_ctor_get(v_toApplyRulesConfig_2341_, 1);
lean_inc_ref(v_toApplyConfig_2343_);
v_transparency_2344_ = lean_ctor_get_uint8(v_toApplyRulesConfig_2341_, sizeof(void*)*2);
lean_dec_ref(v_toApplyRulesConfig_2341_);
v___x_2345_ = l_Lean_Meta_SolveByElim_applyFirst(v_toApplyConfig_2343_, v_transparency_2344_, v_a_2342_, v_g_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_);
return v___x_2345_;
}
else
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
lean_dec(v_g_2334_);
lean_dec_ref(v_cfg_2331_);
v_a_2346_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v___x_2340_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2340_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_applyFirstLemma___boxed(lean_object* v_cfg_2354_, lean_object* v_lemmas_2355_, lean_object* v_ctx_2356_, lean_object* v_g_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Meta_SolveByElim_applyFirstLemma(v_cfg_2354_, v_lemmas_2355_, v_ctx_2356_, v_g_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
lean_dec(v_a_2359_);
lean_dec_ref(v_a_2358_);
return v_res_2363_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg(lean_object* v_keys_2364_, lean_object* v_i_2365_, lean_object* v_k_2366_){
_start:
{
lean_object* v___x_2367_; uint8_t v___x_2368_; 
v___x_2367_ = lean_array_get_size(v_keys_2364_);
v___x_2368_ = lean_nat_dec_lt(v_i_2365_, v___x_2367_);
if (v___x_2368_ == 0)
{
lean_dec(v_i_2365_);
return v___x_2368_;
}
else
{
lean_object* v_k_x27_2369_; uint8_t v___x_2370_; 
v_k_x27_2369_ = lean_array_fget_borrowed(v_keys_2364_, v_i_2365_);
v___x_2370_ = l_Lean_instBEqMVarId_beq(v_k_2366_, v_k_x27_2369_);
if (v___x_2370_ == 0)
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_unsigned_to_nat(1u);
v___x_2372_ = lean_nat_add(v_i_2365_, v___x_2371_);
lean_dec(v_i_2365_);
v_i_2365_ = v___x_2372_;
goto _start;
}
else
{
lean_dec(v_i_2365_);
return v___x_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg___boxed(lean_object* v_keys_2374_, lean_object* v_i_2375_, lean_object* v_k_2376_){
_start:
{
uint8_t v_res_2377_; lean_object* v_r_2378_; 
v_res_2377_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg(v_keys_2374_, v_i_2375_, v_k_2376_);
lean_dec(v_k_2376_);
lean_dec_ref(v_keys_2374_);
v_r_2378_ = lean_box(v_res_2377_);
return v_r_2378_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_2379_, size_t v_x_2380_, lean_object* v_x_2381_){
_start:
{
if (lean_obj_tag(v_x_2379_) == 0)
{
lean_object* v_es_2382_; lean_object* v___x_2383_; size_t v___x_2384_; size_t v___x_2385_; lean_object* v_j_2386_; lean_object* v___x_2387_; 
v_es_2382_ = lean_ctor_get(v_x_2379_, 0);
v___x_2383_ = lean_box(2);
v___x_2384_ = ((size_t)31ULL);
v___x_2385_ = lean_usize_land(v_x_2380_, v___x_2384_);
v_j_2386_ = lean_usize_to_nat(v___x_2385_);
v___x_2387_ = lean_array_get_borrowed(v___x_2383_, v_es_2382_, v_j_2386_);
lean_dec(v_j_2386_);
switch(lean_obj_tag(v___x_2387_))
{
case 0:
{
lean_object* v_key_2388_; uint8_t v___x_2389_; 
v_key_2388_ = lean_ctor_get(v___x_2387_, 0);
v___x_2389_ = l_Lean_instBEqMVarId_beq(v_x_2381_, v_key_2388_);
return v___x_2389_;
}
case 1:
{
lean_object* v_node_2390_; size_t v___x_2391_; size_t v___x_2392_; 
v_node_2390_ = lean_ctor_get(v___x_2387_, 0);
v___x_2391_ = ((size_t)5ULL);
v___x_2392_ = lean_usize_shift_right(v_x_2380_, v___x_2391_);
v_x_2379_ = v_node_2390_;
v_x_2380_ = v___x_2392_;
goto _start;
}
default: 
{
uint8_t v___x_2394_; 
v___x_2394_ = 0;
return v___x_2394_;
}
}
}
else
{
lean_object* v_ks_2395_; lean_object* v___x_2396_; uint8_t v___x_2397_; 
v_ks_2395_ = lean_ctor_get(v_x_2379_, 0);
v___x_2396_ = lean_unsigned_to_nat(0u);
v___x_2397_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg(v_ks_2395_, v___x_2396_, v_x_2381_);
return v___x_2397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_x_2398_, lean_object* v_x_2399_, lean_object* v_x_2400_){
_start:
{
size_t v_x_1988__boxed_2401_; uint8_t v_res_2402_; lean_object* v_r_2403_; 
v_x_1988__boxed_2401_ = lean_unbox_usize(v_x_2399_);
lean_dec(v_x_2399_);
v_res_2402_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_2398_, v_x_1988__boxed_2401_, v_x_2400_);
lean_dec(v_x_2400_);
lean_dec_ref(v_x_2398_);
v_r_2403_ = lean_box(v_res_2402_);
return v_r_2403_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
uint64_t v___x_2406_; size_t v___x_2407_; uint8_t v___x_2408_; 
v___x_2406_ = l_Lean_instHashableMVarId_hash(v_x_2405_);
v___x_2407_ = lean_uint64_to_usize(v___x_2406_);
v___x_2408_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_2404_, v___x_2407_, v_x_2405_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_x_2409_, lean_object* v_x_2410_){
_start:
{
uint8_t v_res_2411_; lean_object* v_r_2412_; 
v_res_2411_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg(v_x_2409_, v_x_2410_);
lean_dec(v_x_2410_);
lean_dec_ref(v_x_2409_);
v_r_2412_ = lean_box(v_res_2411_);
return v_r_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(lean_object* v_mvarId_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v___x_2416_; lean_object* v_mctx_2417_; lean_object* v_eAssignment_2418_; uint8_t v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2416_ = lean_st_ref_get(v___y_2414_);
v_mctx_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc_ref(v_mctx_2417_);
lean_dec(v___x_2416_);
v_eAssignment_2418_ = lean_ctor_get(v_mctx_2417_, 8);
lean_inc_ref(v_eAssignment_2418_);
lean_dec_ref(v_mctx_2417_);
v___x_2419_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg(v_eAssignment_2418_, v_mvarId_2413_);
lean_dec_ref(v_eAssignment_2418_);
v___x_2420_ = lean_box(v___x_2419_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_mvarId_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(v_mvarId_2422_, v___y_2423_);
lean_dec(v___y_2423_);
lean_dec(v_mvarId_2422_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2426_, lean_object* v_x_2427_){
_start:
{
if (lean_obj_tag(v_x_2427_) == 0)
{
return v_x_2426_;
}
else
{
lean_object* v_head_2428_; lean_object* v_tail_2429_; lean_object* v___x_2430_; 
v_head_2428_ = lean_ctor_get(v_x_2427_, 0);
lean_inc(v_head_2428_);
v_tail_2429_ = lean_ctor_get(v_x_2427_, 1);
lean_inc(v_tail_2429_);
lean_dec_ref_known(v_x_2427_, 2);
v___x_2430_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_2426_, v_head_2428_);
v_x_2426_ = v___x_2430_;
v_x_2427_ = v_tail_2429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1(lean_object* v_f_2432_, lean_object* v_a_2433_, uint8_t v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
if (lean_obj_tag(v_a_2435_) == 0)
{
if (lean_obj_tag(v_a_2436_) == 0)
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
lean_dec(v_a_2433_);
lean_dec_ref(v_f_2432_);
v___x_2443_ = lean_box(v_a_2434_);
v___x_2444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
lean_ctor_set(v___x_2444_, 1, v_a_2437_);
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
return v___x_2445_;
}
else
{
lean_object* v_head_2446_; lean_object* v_tail_2447_; 
v_head_2446_ = lean_ctor_get(v_a_2436_, 0);
lean_inc(v_head_2446_);
v_tail_2447_ = lean_ctor_get(v_a_2436_, 1);
lean_inc(v_tail_2447_);
lean_dec_ref_known(v_a_2436_, 2);
v_a_2435_ = v_head_2446_;
v_a_2436_ = v_tail_2447_;
goto _start;
}
}
else
{
lean_object* v_head_2449_; lean_object* v_tail_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2493_; 
v_head_2449_ = lean_ctor_get(v_a_2435_, 0);
v_tail_2450_ = lean_ctor_get(v_a_2435_, 1);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_a_2435_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2452_ = v_a_2435_;
v_isShared_2453_ = v_isSharedCheck_2493_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_tail_2450_);
lean_inc(v_head_2449_);
lean_dec(v_a_2435_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2493_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2492_; 
v___x_2454_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(v_head_2449_, v___y_2439_);
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2457_ = v___x_2454_;
v_isShared_2458_ = v_isSharedCheck_2492_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2454_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2492_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
uint8_t v___x_2459_; 
v___x_2459_ = lean_unbox(v_a_2455_);
lean_dec(v_a_2455_);
if (v___x_2459_ == 0)
{
lean_object* v_zero_2460_; uint8_t v_isZero_2461_; 
v_zero_2460_ = lean_unsigned_to_nat(0u);
v_isZero_2461_ = lean_nat_dec_eq(v_a_2433_, v_zero_2460_);
if (v_isZero_2461_ == 1)
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
lean_del_object(v___x_2452_);
lean_dec(v_a_2433_);
lean_dec_ref(v_f_2432_);
v___x_2462_ = lean_array_push(v_a_2437_, v_head_2449_);
v___x_2463_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v___x_2462_, v_tail_2450_);
v___x_2464_ = l_List_foldl___at___00__private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1_spec__2(v___x_2463_, v_a_2436_);
v___x_2465_ = lean_box(v_a_2434_);
v___x_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2465_);
lean_ctor_set(v___x_2466_, 1, v___x_2464_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v___x_2466_);
v___x_2468_ = v___x_2457_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
else
{
lean_object* v_one_2470_; lean_object* v_n_2471_; uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
lean_del_object(v___x_2457_);
v_one_2470_ = lean_unsigned_to_nat(1u);
v_n_2471_ = lean_nat_sub(v_a_2433_, v_one_2470_);
lean_dec(v_a_2433_);
v___x_2472_ = 1;
lean_inc_ref(v_f_2432_);
lean_inc(v_head_2449_);
v___x_2473_ = lean_apply_1(v_f_2432_, v_head_2449_);
v___x_2474_ = l_Lean_observing_x3f___at___00Lean_Meta_SolveByElim_applyTactics_spec__6___redArg(v___x_2473_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
if (lean_obj_tag(v_a_2475_) == 0)
{
lean_object* v___x_2476_; 
lean_del_object(v___x_2452_);
v___x_2476_ = lean_array_push(v_a_2437_, v_head_2449_);
v_a_2433_ = v_n_2471_;
v_a_2435_ = v_tail_2450_;
v_a_2437_ = v___x_2476_;
goto _start;
}
else
{
lean_object* v_val_2478_; lean_object* v___x_2480_; 
lean_dec(v_head_2449_);
v_val_2478_ = lean_ctor_get(v_a_2475_, 0);
lean_inc(v_val_2478_);
lean_dec_ref_known(v_a_2475_, 1);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 1, v_a_2436_);
lean_ctor_set(v___x_2452_, 0, v_tail_2450_);
v___x_2480_ = v___x_2452_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_tail_2450_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_a_2436_);
v___x_2480_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
v_a_2433_ = v_n_2471_;
v_a_2434_ = v___x_2472_;
v_a_2435_ = v_val_2478_;
v_a_2436_ = v___x_2480_;
goto _start;
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_n_2471_);
lean_del_object(v___x_2452_);
lean_dec(v_tail_2450_);
lean_dec(v_head_2449_);
lean_dec_ref(v_a_2437_);
lean_dec(v_a_2436_);
lean_dec_ref(v_f_2432_);
v_a_2483_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2474_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2474_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
else
{
lean_del_object(v___x_2457_);
lean_del_object(v___x_2452_);
lean_dec(v_head_2449_);
v_a_2435_ = v_tail_2450_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1___boxed(lean_object* v_f_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
uint8_t v_a_2067__boxed_2505_; lean_object* v_res_2506_; 
v_a_2067__boxed_2505_ = lean_unbox(v_a_2496_);
v_res_2506_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1(v_f_2494_, v_a_2495_, v_a_2067__boxed_2505_, v_a_2497_, v_a_2498_, v_a_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3(lean_object* v_as_2507_, size_t v_i_2508_, size_t v_stop_2509_, lean_object* v_b_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v_a_2517_; uint8_t v___x_2521_; 
v___x_2521_ = lean_usize_dec_eq(v_i_2508_, v_stop_2509_);
if (v___x_2521_ == 0)
{
lean_object* v___x_2522_; lean_object* v___x_2525_; 
v___x_2522_ = lean_array_uget_borrowed(v_as_2507_, v_i_2508_);
v___x_2525_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(v___x_2522_, v___y_2512_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2526_; uint8_t v___x_2527_; 
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2525_, 1);
v___x_2527_ = lean_unbox(v_a_2526_);
lean_dec(v_a_2526_);
if (v___x_2527_ == 0)
{
goto v___jp_2523_;
}
else
{
v_a_2517_ = v_b_2510_;
goto v___jp_2516_;
}
}
else
{
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2528_; uint8_t v___x_2529_; 
v_a_2528_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2528_);
lean_dec_ref_known(v___x_2525_, 1);
v___x_2529_ = lean_unbox(v_a_2528_);
lean_dec(v_a_2528_);
if (v___x_2529_ == 0)
{
v_a_2517_ = v_b_2510_;
goto v___jp_2516_;
}
else
{
goto v___jp_2523_;
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec_ref(v_b_2510_);
v_a_2530_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2525_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2525_);
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
v___jp_2523_:
{
lean_object* v___x_2524_; 
lean_inc(v___x_2522_);
v___x_2524_ = lean_array_push(v_b_2510_, v___x_2522_);
v_a_2517_ = v___x_2524_;
goto v___jp_2516_;
}
}
else
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v_b_2510_);
return v___x_2538_;
}
v___jp_2516_:
{
size_t v___x_2518_; size_t v___x_2519_; 
v___x_2518_ = ((size_t)1ULL);
v___x_2519_ = lean_usize_add(v_i_2508_, v___x_2518_);
v_i_2508_ = v___x_2519_;
v_b_2510_ = v_a_2517_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3___boxed(lean_object* v_as_2539_, lean_object* v_i_2540_, lean_object* v_stop_2541_, lean_object* v_b_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
size_t v_i_boxed_2548_; size_t v_stop_boxed_2549_; lean_object* v_res_2550_; 
v_i_boxed_2548_ = lean_unbox_usize(v_i_2540_);
lean_dec(v_i_2540_);
v_stop_boxed_2549_ = lean_unbox_usize(v_stop_2541_);
lean_dec(v_stop_2541_);
v_res_2550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3(v_as_2539_, v_i_boxed_2548_, v_stop_boxed_2549_, v_b_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v_as_2539_);
return v_res_2550_;
}
}
static lean_object* _init_l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = ((lean_object*)(l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__0));
v___x_2554_ = lean_array_to_list(v___x_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0(lean_object* v_f_2555_, lean_object* v_goals_2556_, lean_object* v_maxIters_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
uint8_t v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2563_ = 0;
v___x_2564_ = lean_box(0);
v___x_2565_ = lean_unsigned_to_nat(0u);
v___x_2566_ = ((lean_object*)(l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__0));
v___x_2567_ = l___private_Lean_Meta_Tactic_Repeat_0__Lean_Meta_repeat_x27Core_go___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__1(v_f_2555_, v_maxIters_2557_, v___x_2563_, v_goals_2556_, v___x_2564_, v___x_2566_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2610_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2570_ = v___x_2567_;
v_isShared_2571_ = v_isSharedCheck_2610_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2567_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2610_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v_fst_2572_; lean_object* v_snd_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2609_; 
v_fst_2572_ = lean_ctor_get(v_a_2568_, 0);
v_snd_2573_ = lean_ctor_get(v_a_2568_, 1);
v_isSharedCheck_2609_ = !lean_is_exclusive(v_a_2568_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2575_ = v_a_2568_;
v_isShared_2576_ = v_isSharedCheck_2609_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_snd_2573_);
lean_inc(v_fst_2572_);
lean_dec(v_a_2568_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2609_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2577_ = lean_array_get_size(v_snd_2573_);
v___x_2578_ = lean_nat_dec_lt(v___x_2565_, v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2581_; 
lean_dec(v_snd_2573_);
v___x_2579_ = lean_obj_once(&l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1, &l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1_once, _init_l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___closed__1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 1, v___x_2579_);
v___x_2581_ = v___x_2575_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_fst_2572_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v___x_2579_);
v___x_2581_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2583_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set(v___x_2570_, 0, v___x_2581_);
v___x_2583_ = v___x_2570_;
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
else
{
size_t v___x_2586_; size_t v___x_2587_; lean_object* v___x_2588_; 
lean_del_object(v___x_2570_);
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = lean_usize_of_nat(v___x_2577_);
v___x_2588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__3(v_snd_2573_, v___x_2586_, v___x_2587_, v___x_2566_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
lean_dec(v_snd_2573_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2600_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2600_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2600_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2593_ = lean_array_to_list(v_a_2589_);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 1, v___x_2593_);
v___x_2595_ = v___x_2575_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_fst_2572_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2597_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v___x_2595_);
v___x_2597_ = v___x_2591_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_del_object(v___x_2575_);
lean_dec(v_fst_2572_);
v_a_2601_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2588_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2588_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
v_a_2611_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2567_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2567_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0___boxed(lean_object* v_f_2619_, lean_object* v_goals_2620_, lean_object* v_maxIters_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0(v_f_2619_, v_goals_2620_, v_maxIters_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
return v_res_2627_;
}
}
static lean_object* _init_l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = ((lean_object*)(l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__0));
v___x_2630_ = l_Lean_stringToMessageData(v___x_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0(lean_object* v_f_2631_, lean_object* v_goals_2632_, lean_object* v_maxIters_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0(v_f_2631_, v_goals_2632_, v_maxIters_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2652_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2642_ = v___x_2639_;
v_isShared_2643_ = v_isSharedCheck_2652_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2639_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2652_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v_fst_2644_; uint8_t v___x_2645_; 
v_fst_2644_ = lean_ctor_get(v_a_2640_, 0);
v___x_2645_ = lean_unbox(v_fst_2644_);
if (v___x_2645_ == 1)
{
lean_object* v_snd_2646_; lean_object* v___x_2648_; 
v_snd_2646_ = lean_ctor_get(v_a_2640_, 1);
lean_inc(v_snd_2646_);
lean_dec(v_a_2640_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v_snd_2646_);
v___x_2648_ = v___x_2642_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_snd_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
else
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
lean_del_object(v___x_2642_);
lean_dec(v_a_2640_);
v___x_2650_ = lean_obj_once(&l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1, &l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1_once, _init_l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___closed__1);
v___x_2651_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v___x_2650_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
return v___x_2651_;
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
v_a_2653_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2639_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2639_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0___boxed(lean_object* v_f_2661_, lean_object* v_goals_2662_, lean_object* v_maxIters_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0(v_f_2661_, v_goals_2662_, v_maxIters_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(lean_object* v_lemmas_2670_, lean_object* v_ctx_2671_, lean_object* v_cfg_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_){
_start:
{
uint8_t v_backtracking_2679_; 
v_backtracking_2679_ = lean_ctor_get_uint8(v_cfg_2672_, sizeof(void*)*1);
if (v_backtracking_2679_ == 0)
{
lean_object* v_toApplyRulesConfig_2680_; lean_object* v_toBacktrackConfig_2681_; lean_object* v_maxDepth_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v_toApplyRulesConfig_2680_ = lean_ctor_get(v_cfg_2672_, 0);
v_toBacktrackConfig_2681_ = lean_ctor_get(v_toApplyRulesConfig_2680_, 0);
v_maxDepth_2682_ = lean_ctor_get(v_toBacktrackConfig_2681_, 0);
lean_inc(v_maxDepth_2682_);
v___x_2683_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_applyFirstLemma___boxed), 9, 3);
lean_closure_set(v___x_2683_, 0, v_cfg_2672_);
lean_closure_set(v___x_2683_, 1, v_lemmas_2670_);
lean_closure_set(v___x_2683_, 2, v_ctx_2671_);
v___x_2684_ = l_Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0(v___x_2683_, v_a_2673_, v_maxDepth_2682_, v_a_2674_, v_a_2675_, v_a_2676_, v_a_2677_);
return v___x_2684_;
}
else
{
lean_object* v_toApplyRulesConfig_2685_; lean_object* v_toBacktrackConfig_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v_toApplyRulesConfig_2685_ = lean_ctor_get(v_cfg_2672_, 0);
v_toBacktrackConfig_2686_ = lean_ctor_get(v_toApplyRulesConfig_2685_, 0);
lean_inc_ref(v_toBacktrackConfig_2686_);
v___x_2687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_2688_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_applyLemmas___boxed), 9, 3);
lean_closure_set(v___x_2688_, 0, v_cfg_2672_);
lean_closure_set(v___x_2688_, 1, v_lemmas_2670_);
lean_closure_set(v___x_2688_, 2, v_ctx_2671_);
v___x_2689_ = l_Lean_Meta_Tactic_Backtrack_backtrack(v_toBacktrackConfig_2686_, v___x_2687_, v___x_2688_, v_a_2673_, v_a_2674_, v_a_2675_, v_a_2676_, v_a_2677_);
return v___x_2689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run___boxed(lean_object* v_lemmas_2690_, lean_object* v_ctx_2691_, lean_object* v_cfg_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2690_, v_ctx_2691_, v_cfg_2692_, v_a_2693_, v_a_2694_, v_a_2695_, v_a_2696_, v_a_2697_);
lean_dec(v_a_2697_);
lean_dec_ref(v_a_2696_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2(lean_object* v_mvarId_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
lean_object* v___x_2706_; 
v___x_2706_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___redArg(v_mvarId_2700_, v___y_2702_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2(v_mvarId_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v_mvarId_2707_);
return v_res_2713_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_2714_, lean_object* v_x_2715_, lean_object* v_x_2716_){
_start:
{
uint8_t v___x_2717_; 
v___x_2717_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___redArg(v_x_2715_, v_x_2716_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2718_, lean_object* v_x_2719_, lean_object* v_x_2720_){
_start:
{
uint8_t v_res_2721_; lean_object* v_r_2722_; 
v_res_2721_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_2718_, v_x_2719_, v_x_2720_);
lean_dec(v_x_2720_);
lean_dec_ref(v_x_2719_);
v_r_2722_ = lean_box(v_res_2721_);
return v_r_2722_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_2723_, lean_object* v_x_2724_, size_t v_x_2725_, lean_object* v_x_2726_){
_start:
{
uint8_t v___x_2727_; 
v___x_2727_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_2724_, v_x_2725_, v_x_2726_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_00_u03b2_2728_, lean_object* v_x_2729_, lean_object* v_x_2730_, lean_object* v_x_2731_){
_start:
{
size_t v_x_2513__boxed_2732_; uint8_t v_res_2733_; lean_object* v_r_2734_; 
v_x_2513__boxed_2732_ = lean_unbox_usize(v_x_2730_);
lean_dec(v_x_2730_);
v_res_2733_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5(v_00_u03b2_2728_, v_x_2729_, v_x_2513__boxed_2732_, v_x_2731_);
lean_dec(v_x_2731_);
lean_dec_ref(v_x_2729_);
v_r_2734_ = lean_box(v_res_2733_);
return v_r_2734_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7(lean_object* v_00_u03b2_2735_, lean_object* v_keys_2736_, lean_object* v_vals_2737_, lean_object* v_heq_2738_, lean_object* v_i_2739_, lean_object* v_k_2740_){
_start:
{
uint8_t v___x_2741_; 
v___x_2741_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___redArg(v_keys_2736_, v_i_2739_, v_k_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7___boxed(lean_object* v_00_u03b2_2742_, lean_object* v_keys_2743_, lean_object* v_vals_2744_, lean_object* v_heq_2745_, lean_object* v_i_2746_, lean_object* v_k_2747_){
_start:
{
uint8_t v_res_2748_; lean_object* v_r_2749_; 
v_res_2748_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_repeat_x27Core___at___00Lean_Meta_repeat1_x27___at___00__private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run_spec__0_spec__0_spec__2_spec__4_spec__5_spec__7(v_00_u03b2_2742_, v_keys_2743_, v_vals_2744_, v_heq_2745_, v_i_2746_, v_k_2747_);
lean_dec(v_k_2747_);
lean_dec_ref(v_vals_2744_);
lean_dec_ref(v_keys_2743_);
v_r_2749_ = lean_box(v_res_2748_);
return v_r_2749_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = ((lean_object*)(l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__0));
v___x_2752_ = l_Lean_stringToMessageData(v___x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0(lean_object* v_x_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2759_ = lean_obj_once(&l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1, &l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1_once, _init_l_Lean_Meta_SolveByElim_solveByElim___lam__0___closed__1);
v___x_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___lam__0___boxed(lean_object* v_x_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lean_Meta_SolveByElim_solveByElim___lam__0(v_x_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec_ref(v_x_2761_);
return v_res_2767_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_solveByElim___closed__1(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2769_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_2770_ = ((lean_object*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__1));
v___x_2771_ = l_Lean_Name_append(v___x_2770_, v___x_2769_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim(lean_object* v_cfg_2772_, lean_object* v_lemmas_2773_, lean_object* v_ctx_2774_, lean_object* v_goals_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_){
_start:
{
lean_object* v___f_2781_; lean_object* v___y_2783_; lean_object* v___y_2784_; uint8_t v___y_2785_; lean_object* v___y_2786_; uint8_t v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v_a_2790_; lean_object* v___y_2800_; lean_object* v___y_2801_; uint8_t v___y_2802_; uint8_t v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v_a_2807_; lean_object* v___y_2810_; lean_object* v___y_2811_; uint8_t v___y_2812_; lean_object* v___y_2813_; uint8_t v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v_a_2817_; lean_object* v___y_2830_; lean_object* v___y_2831_; uint8_t v___y_2832_; lean_object* v___y_2833_; uint8_t v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v_a_2837_; lean_object* v_cfg_2839_; lean_object* v___x_2840_; 
v___f_2781_ = ((lean_object*)(l_Lean_Meta_SolveByElim_solveByElim___closed__0));
v_cfg_2839_ = l_Lean_Meta_SolveByElim_SolveByElimConfig_processOptions(v_cfg_2772_);
lean_inc(v_goals_2775_);
lean_inc_ref(v_cfg_2839_);
lean_inc_ref(v_ctx_2774_);
lean_inc(v_lemmas_2773_);
v___x_2840_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2773_, v_ctx_2774_, v_cfg_2839_, v_goals_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_dec_ref(v_cfg_2839_);
lean_dec(v_goals_2775_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
return v___x_2840_;
}
else
{
lean_object* v_a_2841_; lean_object* v___y_2843_; lean_object* v___y_2844_; uint8_t v___y_2845_; uint8_t v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; uint8_t v___y_2885_; uint8_t v___x_2939_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
v___x_2939_ = l_Lean_Exception_isInterrupt(v_a_2841_);
if (v___x_2939_ == 0)
{
uint8_t v___x_2940_; 
v___x_2940_ = l_Lean_Exception_isRuntime(v_a_2841_);
v___y_2885_ = v___x_2940_;
goto v___jp_2884_;
}
else
{
lean_dec(v_a_2841_);
v___y_2885_ = v___x_2939_;
goto v___jp_2884_;
}
v___jp_2842_:
{
lean_object* v___x_2850_; lean_object* v_a_2851_; lean_object* v___x_2852_; uint8_t v___x_2853_; 
v___x_2850_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_SolveByElim_applyTactics_spec__0___redArg(v_a_2779_);
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_a_2851_);
lean_dec_ref(v___x_2850_);
v___x_2852_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2853_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v___y_2844_, v___x_2852_);
if (v___x_2853_ == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_io_mono_nanos_now();
v___x_2855_ = l_Lean_MVarId_exfalso(v___y_2847_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
lean_dec_ref_known(v___x_2855_, 1);
v___x_2857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2857_, 0, v_a_2856_);
lean_ctor_set(v___x_2857_, 1, v___y_2848_);
v___x_2858_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2773_, v_ctx_2774_, v_cfg_2839_, v___x_2857_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2858_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2858_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set_tag(v___x_2861_, 1);
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
v___y_2810_ = v___y_2844_;
v___y_2811_ = v___y_2843_;
v___y_2812_ = v___y_2845_;
v___y_2813_ = v_a_2851_;
v___y_2814_ = v___y_2846_;
v___y_2815_ = v___x_2854_;
v___y_2816_ = v___y_2849_;
v_a_2817_ = v___x_2864_;
goto v___jp_2809_;
}
}
}
else
{
lean_object* v_a_2867_; 
v_a_2867_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2858_, 1);
v___y_2830_ = v___y_2843_;
v___y_2831_ = v___y_2844_;
v___y_2832_ = v___y_2845_;
v___y_2833_ = v___x_2854_;
v___y_2834_ = v___y_2846_;
v___y_2835_ = v_a_2851_;
v___y_2836_ = v___y_2849_;
v_a_2837_ = v_a_2867_;
goto v___jp_2829_;
}
}
else
{
lean_object* v_a_2868_; 
lean_dec(v___y_2848_);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
v_a_2868_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2855_, 1);
v___y_2830_ = v___y_2843_;
v___y_2831_ = v___y_2844_;
v___y_2832_ = v___y_2845_;
v___y_2833_ = v___x_2854_;
v___y_2834_ = v___y_2846_;
v___y_2835_ = v_a_2851_;
v___y_2836_ = v___y_2849_;
v_a_2837_ = v_a_2868_;
goto v___jp_2829_;
}
}
else
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_io_get_num_heartbeats();
v___x_2870_ = l_Lean_MVarId_exfalso(v___y_2847_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
v___x_2872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2872_, 0, v_a_2871_);
lean_ctor_set(v___x_2872_, 1, v___y_2848_);
v___x_2873_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2773_, v_ctx_2774_, v_cfg_2839_, v___x_2872_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2873_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2873_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
lean_ctor_set_tag(v___x_2876_, 1);
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
v___y_2783_ = v___y_2844_;
v___y_2784_ = v___y_2843_;
v___y_2785_ = v___y_2845_;
v___y_2786_ = v_a_2851_;
v___y_2787_ = v___y_2846_;
v___y_2788_ = v___y_2849_;
v___y_2789_ = v___x_2869_;
v_a_2790_ = v___x_2879_;
goto v___jp_2782_;
}
}
}
else
{
lean_object* v_a_2882_; 
v_a_2882_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2873_, 1);
v___y_2800_ = v___y_2843_;
v___y_2801_ = v___y_2844_;
v___y_2802_ = v___y_2845_;
v___y_2803_ = v___y_2846_;
v___y_2804_ = v_a_2851_;
v___y_2805_ = v___x_2869_;
v___y_2806_ = v___y_2849_;
v_a_2807_ = v_a_2882_;
goto v___jp_2799_;
}
}
else
{
lean_object* v_a_2883_; 
lean_dec(v___y_2848_);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
v_a_2883_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v___x_2870_, 1);
v___y_2800_ = v___y_2843_;
v___y_2801_ = v___y_2844_;
v___y_2802_ = v___y_2845_;
v___y_2803_ = v___y_2846_;
v___y_2804_ = v_a_2851_;
v___y_2805_ = v___x_2869_;
v___y_2806_ = v___y_2849_;
v_a_2807_ = v_a_2883_;
goto v___jp_2799_;
}
}
}
v___jp_2884_:
{
if (v___y_2885_ == 0)
{
if (lean_obj_tag(v_goals_2775_) == 1)
{
lean_object* v_tail_2886_; 
v_tail_2886_ = lean_ctor_get(v_goals_2775_, 1);
lean_inc(v_tail_2886_);
if (lean_obj_tag(v_tail_2886_) == 0)
{
lean_object* v_toApplyRulesConfig_2887_; uint8_t v_exfalso_2888_; 
v_toApplyRulesConfig_2887_ = lean_ctor_get(v_cfg_2839_, 0);
lean_inc_ref(v_toApplyRulesConfig_2887_);
v_exfalso_2888_ = lean_ctor_get_uint8(v_toApplyRulesConfig_2887_, sizeof(void*)*2 + 2);
lean_dec_ref(v_toApplyRulesConfig_2887_);
if (v_exfalso_2888_ == 1)
{
lean_object* v_toCold_2889_; lean_object* v_options_2890_; uint8_t v_hasTrace_2891_; 
lean_dec_ref_known(v___x_2840_, 1);
v_toCold_2889_ = lean_ctor_get(v_a_2778_, 0);
v_options_2890_ = lean_ctor_get(v_toCold_2889_, 2);
v_hasTrace_2891_ = lean_ctor_get_uint8(v_options_2890_, sizeof(void*)*1);
if (v_hasTrace_2891_ == 0)
{
lean_object* v_head_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2910_; 
v_head_2892_ = lean_ctor_get(v_goals_2775_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_goals_2775_);
if (v_isSharedCheck_2910_ == 0)
{
lean_object* v_unused_2911_; 
v_unused_2911_ = lean_ctor_get(v_goals_2775_, 1);
lean_dec(v_unused_2911_);
v___x_2894_ = v_goals_2775_;
v_isShared_2895_ = v_isSharedCheck_2910_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_head_2892_);
lean_dec(v_goals_2775_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2910_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2896_; 
v___x_2896_ = l_Lean_MVarId_exfalso(v_head_2892_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2899_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v_a_2897_);
v___x_2899_ = v___x_2894_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2897_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_tail_2886_);
v___x_2899_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
lean_object* v___x_2900_; 
v___x_2900_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2773_, v_ctx_2774_, v_cfg_2839_, v___x_2899_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2900_;
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
lean_del_object(v___x_2894_);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
v_a_2902_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2896_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2896_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
else
{
lean_object* v_head_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2937_; 
v_head_2912_ = lean_ctor_get(v_goals_2775_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v_goals_2775_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; 
v_unused_2938_ = lean_ctor_get(v_goals_2775_, 1);
lean_dec(v_unused_2938_);
v___x_2914_ = v_goals_2775_;
v_isShared_2915_ = v_isSharedCheck_2937_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_head_2912_);
lean_dec(v_goals_2775_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2937_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v_inheritedTraceOptions_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; uint8_t v___x_2920_; 
v_inheritedTraceOptions_2916_ = lean_ctor_get(v_toCold_2889_, 11);
v___x_2917_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn___closed__3_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_));
v___x_2918_ = ((lean_object*)(l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__2___closed__0));
v___x_2919_ = lean_obj_once(&l_Lean_Meta_SolveByElim_solveByElim___closed__1, &l_Lean_Meta_SolveByElim_solveByElim___closed__1_once, _init_l_Lean_Meta_SolveByElim_solveByElim___closed__1);
v___x_2920_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2916_, v_options_2890_, v___x_2919_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; uint8_t v___x_2922_; 
v___x_2921_ = l_Lean_trace_profiler;
v___x_2922_ = l_Lean_Option_get___at___00Lean_Meta_SolveByElim_applyTactics_spec__1(v_options_2890_, v___x_2921_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lean_MVarId_exfalso(v_head_2912_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2926_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v_a_2924_);
v___x_2926_ = v___x_2914_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2924_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_tail_2886_);
v___x_2926_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
lean_object* v___x_2927_; 
v___x_2927_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_solveByElim_run(v_lemmas_2773_, v_ctx_2774_, v_cfg_2839_, v___x_2926_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2927_;
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
lean_del_object(v___x_2914_);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
v_a_2929_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2923_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2923_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
else
{
lean_del_object(v___x_2914_);
v___y_2843_ = v___x_2917_;
v___y_2844_ = v_options_2890_;
v___y_2845_ = v___x_2920_;
v___y_2846_ = v_exfalso_2888_;
v___y_2847_ = v_head_2912_;
v___y_2848_ = v_tail_2886_;
v___y_2849_ = v___x_2918_;
goto v___jp_2842_;
}
}
else
{
lean_del_object(v___x_2914_);
v___y_2843_ = v___x_2917_;
v___y_2844_ = v_options_2890_;
v___y_2845_ = v___x_2920_;
v___y_2846_ = v_exfalso_2888_;
v___y_2847_ = v_head_2912_;
v___y_2848_ = v_tail_2886_;
v___y_2849_ = v___x_2918_;
goto v___jp_2842_;
}
}
}
}
else
{
lean_dec_ref_known(v_goals_2775_, 2);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
return v___x_2840_;
}
}
else
{
lean_dec_ref_known(v_goals_2775_, 2);
lean_dec(v_tail_2886_);
lean_dec_ref(v_cfg_2839_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
return v___x_2840_;
}
}
else
{
lean_dec_ref(v_cfg_2839_);
lean_dec(v_goals_2775_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
return v___x_2840_;
}
}
else
{
lean_dec_ref(v_cfg_2839_);
lean_dec(v_goals_2775_);
lean_dec_ref(v_ctx_2774_);
lean_dec(v_lemmas_2773_);
return v___x_2840_;
}
}
}
v___jp_2782_:
{
lean_object* v___x_2791_; double v___x_2792_; double v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2791_ = lean_io_get_num_heartbeats();
v___x_2792_ = lean_float_of_nat(v___y_2789_);
v___x_2793_ = lean_float_of_nat(v___x_2791_);
v___x_2794_ = lean_box_float(v___x_2792_);
v___x_2795_ = lean_box_float(v___x_2793_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2794_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v___x_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2797_, 0, v_a_2790_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
lean_inc_ref(v___y_2788_);
lean_inc(v___y_2784_);
v___x_2798_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(v___y_2784_, v___y_2787_, v___y_2788_, v___y_2783_, v___y_2785_, v___y_2786_, v___f_2781_, v___x_2797_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2798_;
}
v___jp_2799_:
{
lean_object* v___x_2808_; 
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v_a_2807_);
v___y_2783_ = v___y_2801_;
v___y_2784_ = v___y_2800_;
v___y_2785_ = v___y_2802_;
v___y_2786_ = v___y_2804_;
v___y_2787_ = v___y_2803_;
v___y_2788_ = v___y_2806_;
v___y_2789_ = v___y_2805_;
v_a_2790_ = v___x_2808_;
goto v___jp_2782_;
}
v___jp_2809_:
{
lean_object* v___x_2818_; double v___x_2819_; double v___x_2820_; double v___x_2821_; double v___x_2822_; double v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2818_ = lean_io_mono_nanos_now();
v___x_2819_ = lean_float_of_nat(v___y_2815_);
v___x_2820_ = lean_float_once(&l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2, &l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2_once, _init_l_Lean_Meta_SolveByElim_applyTactics___redArg___lam__1___closed__2);
v___x_2821_ = lean_float_div(v___x_2819_, v___x_2820_);
v___x_2822_ = lean_float_of_nat(v___x_2818_);
v___x_2823_ = lean_float_div(v___x_2822_, v___x_2820_);
v___x_2824_ = lean_box_float(v___x_2821_);
v___x_2825_ = lean_box_float(v___x_2823_);
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2827_, 0, v_a_2817_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
lean_inc_ref(v___y_2816_);
lean_inc(v___y_2811_);
v___x_2828_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_SolveByElim_applyTactics_spec__2(v___y_2811_, v___y_2814_, v___y_2816_, v___y_2810_, v___y_2812_, v___y_2813_, v___f_2781_, v___x_2827_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
return v___x_2828_;
}
v___jp_2829_:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v_a_2837_);
v___y_2810_ = v___y_2831_;
v___y_2811_ = v___y_2830_;
v___y_2812_ = v___y_2832_;
v___y_2813_ = v___y_2835_;
v___y_2814_ = v___y_2834_;
v___y_2815_ = v___y_2833_;
v___y_2816_ = v___y_2836_;
v_a_2817_ = v___x_2838_;
goto v___jp_2809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_solveByElim___boxed(lean_object* v_cfg_2941_, lean_object* v_lemmas_2942_, lean_object* v_ctx_2943_, lean_object* v_goals_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lean_Meta_SolveByElim_solveByElim(v_cfg_2941_, v_lemmas_2942_, v_ctx_2943_, v_goals_2944_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_);
lean_dec(v_a_2948_);
lean_dec_ref(v_a_2947_);
lean_dec(v_a_2946_);
lean_dec_ref(v_a_2945_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0(lean_object* v_x_2951_, lean_object* v_x_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
if (lean_obj_tag(v_x_2951_) == 0)
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = l_List_reverse___redArg(v_x_2952_);
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
return v___x_2959_;
}
else
{
lean_object* v_head_2960_; lean_object* v_tail_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2984_; 
v_head_2960_ = lean_ctor_get(v_x_2951_, 0);
v_tail_2961_ = lean_ctor_get(v_x_2951_, 1);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_x_2951_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2963_ = v_x_2951_;
v_isShared_2964_ = v_isSharedCheck_2984_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_tail_2961_);
lean_inc(v_head_2960_);
lean_dec(v_x_2951_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2984_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2965_; 
v___x_2965_ = l_Lean_Expr_applySymm(v_head_2960_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 1, v_x_2952_);
lean_ctor_set(v___x_2963_, 0, v_a_2966_);
v___x_2968_ = v___x_2963_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2966_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v_x_2952_);
v___x_2968_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
v_x_2951_ = v_tail_2961_;
v_x_2952_ = v___x_2968_;
goto _start;
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2983_; 
lean_del_object(v___x_2963_);
v_a_2971_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2973_ = v___x_2965_;
v_isShared_2974_ = v_isSharedCheck_2983_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2965_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2983_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
uint8_t v___y_2976_; uint8_t v___x_2981_; 
v___x_2981_ = l_Lean_Exception_isInterrupt(v_a_2971_);
if (v___x_2981_ == 0)
{
uint8_t v___x_2982_; 
lean_inc(v_a_2971_);
v___x_2982_ = l_Lean_Exception_isRuntime(v_a_2971_);
v___y_2976_ = v___x_2982_;
goto v___jp_2975_;
}
else
{
v___y_2976_ = v___x_2981_;
goto v___jp_2975_;
}
v___jp_2975_:
{
if (v___y_2976_ == 0)
{
lean_del_object(v___x_2973_);
lean_dec(v_a_2971_);
v_x_2951_ = v_tail_2961_;
goto _start;
}
else
{
lean_object* v___x_2979_; 
lean_dec(v_tail_2961_);
lean_dec(v_x_2952_);
if (v_isShared_2974_ == 0)
{
v___x_2979_ = v___x_2973_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2971_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0___boxed(lean_object* v_x_2985_, lean_object* v_x_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0(v_x_2985_, v_x_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_saturateSymm(uint8_t v_symm_2993_, lean_object* v_hyps_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_){
_start:
{
if (v_symm_2993_ == 0)
{
lean_object* v___x_3000_; 
v___x_3000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3000_, 0, v_hyps_2994_);
return v___x_3000_;
}
else
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = lean_box(0);
lean_inc(v_hyps_2994_);
v___x_3002_ = l_List_filterMapM_loop___at___00Lean_Meta_SolveByElim_saturateSymm_spec__0(v_hyps_2994_, v___x_3001_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3011_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3005_ = v___x_3002_;
v_isShared_3006_ = v_isSharedCheck_3011_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_3002_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3011_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3007_; lean_object* v___x_3009_; 
v___x_3007_ = l_List_appendTR___redArg(v_hyps_2994_, v_a_3003_);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 0, v___x_3007_);
v___x_3009_ = v___x_3005_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
else
{
lean_dec(v_hyps_2994_);
return v___x_3002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_saturateSymm___boxed(lean_object* v_symm_3012_, lean_object* v_hyps_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
uint8_t v_symm_boxed_3019_; lean_object* v_res_3020_; 
v_symm_boxed_3019_ = lean_unbox(v_symm_3012_);
v_res_3020_ = l_Lean_Meta_SolveByElim_saturateSymm(v_symm_boxed_3019_, v_hyps_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_);
lean_dec(v_a_3017_);
lean_dec_ref(v_a_3016_);
lean_dec(v_a_3015_);
lean_dec_ref(v_a_3014_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_as_3021_, size_t v_sz_3022_, size_t v_i_3023_, lean_object* v_b_3024_){
_start:
{
uint8_t v___x_3026_; 
v___x_3026_ = lean_usize_dec_lt(v_i_3023_, v_sz_3022_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v_b_3024_);
return v___x_3027_;
}
else
{
lean_object* v_snd_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3046_; 
v_snd_3028_ = lean_ctor_get(v_b_3024_, 1);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_b_3024_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; 
v_unused_3047_ = lean_ctor_get(v_b_3024_, 0);
lean_dec(v_unused_3047_);
v___x_3030_ = v_b_3024_;
v_isShared_3031_ = v_isSharedCheck_3046_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_snd_3028_);
lean_dec(v_b_3024_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3046_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3032_; lean_object* v_a_3034_; lean_object* v_a_3041_; 
v___x_3032_ = lean_box(0);
v_a_3041_ = lean_array_uget_borrowed(v_as_3021_, v_i_3023_);
if (lean_obj_tag(v_a_3041_) == 0)
{
v_a_3034_ = v_snd_3028_;
goto v___jp_3033_;
}
else
{
lean_object* v_val_3042_; uint8_t v___x_3043_; 
v_val_3042_ = lean_ctor_get(v_a_3041_, 0);
v___x_3043_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3042_);
if (v___x_3043_ == 0)
{
lean_object* v___x_3044_; lean_object* v___x_3045_; 
lean_inc(v_val_3042_);
v___x_3044_ = l_Lean_LocalDecl_toExpr(v_val_3042_);
v___x_3045_ = lean_array_push(v_snd_3028_, v___x_3044_);
v_a_3034_ = v___x_3045_;
goto v___jp_3033_;
}
else
{
v_a_3034_ = v_snd_3028_;
goto v___jp_3033_;
}
}
v___jp_3033_:
{
lean_object* v___x_3036_; 
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 1, v_a_3034_);
lean_ctor_set(v___x_3030_, 0, v___x_3032_);
v___x_3036_ = v___x_3030_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3032_);
lean_ctor_set(v_reuseFailAlloc_3040_, 1, v_a_3034_);
v___x_3036_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
size_t v___x_3037_; size_t v___x_3038_; 
v___x_3037_ = ((size_t)1ULL);
v___x_3038_ = lean_usize_add(v_i_3023_, v___x_3037_);
v_i_3023_ = v___x_3038_;
v_b_3024_ = v___x_3036_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_as_3048_, lean_object* v_sz_3049_, lean_object* v_i_3050_, lean_object* v_b_3051_, lean_object* v___y_3052_){
_start:
{
size_t v_sz_boxed_3053_; size_t v_i_boxed_3054_; lean_object* v_res_3055_; 
v_sz_boxed_3053_ = lean_unbox_usize(v_sz_3049_);
lean_dec(v_sz_3049_);
v_i_boxed_3054_ = lean_unbox_usize(v_i_3050_);
lean_dec(v_i_3050_);
v_res_3055_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg(v_as_3048_, v_sz_boxed_3053_, v_i_boxed_3054_, v_b_3051_);
lean_dec_ref(v_as_3048_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2(lean_object* v_as_3056_, size_t v_sz_3057_, size_t v_i_3058_, lean_object* v_b_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_){
_start:
{
uint8_t v___x_3067_; 
v___x_3067_ = lean_usize_dec_lt(v_i_3058_, v_sz_3057_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; 
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v_b_3059_);
return v___x_3068_;
}
else
{
lean_object* v_snd_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3087_; 
v_snd_3069_ = lean_ctor_get(v_b_3059_, 1);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_b_3059_);
if (v_isSharedCheck_3087_ == 0)
{
lean_object* v_unused_3088_; 
v_unused_3088_ = lean_ctor_get(v_b_3059_, 0);
lean_dec(v_unused_3088_);
v___x_3071_ = v_b_3059_;
v_isShared_3072_ = v_isSharedCheck_3087_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_snd_3069_);
lean_dec(v_b_3059_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3087_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3073_; lean_object* v_a_3075_; lean_object* v_a_3082_; 
v___x_3073_ = lean_box(0);
v_a_3082_ = lean_array_uget_borrowed(v_as_3056_, v_i_3058_);
if (lean_obj_tag(v_a_3082_) == 0)
{
v_a_3075_ = v_snd_3069_;
goto v___jp_3074_;
}
else
{
lean_object* v_val_3083_; uint8_t v___x_3084_; 
v_val_3083_ = lean_ctor_get(v_a_3082_, 0);
v___x_3084_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
lean_inc(v_val_3083_);
v___x_3085_ = l_Lean_LocalDecl_toExpr(v_val_3083_);
v___x_3086_ = lean_array_push(v_snd_3069_, v___x_3085_);
v_a_3075_ = v___x_3086_;
goto v___jp_3074_;
}
else
{
v_a_3075_ = v_snd_3069_;
goto v___jp_3074_;
}
}
v___jp_3074_:
{
lean_object* v___x_3077_; 
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 1, v_a_3075_);
lean_ctor_set(v___x_3071_, 0, v___x_3073_);
v___x_3077_ = v___x_3071_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3073_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_a_3075_);
v___x_3077_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
size_t v___x_3078_; size_t v___x_3079_; lean_object* v___x_3080_; 
v___x_3078_ = ((size_t)1ULL);
v___x_3079_ = lean_usize_add(v_i_3058_, v___x_3078_);
v___x_3080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg(v_as_3056_, v_sz_3057_, v___x_3079_, v___x_3077_);
return v___x_3080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3089_, lean_object* v_sz_3090_, lean_object* v_i_3091_, lean_object* v_b_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_){
_start:
{
size_t v_sz_boxed_3100_; size_t v_i_boxed_3101_; lean_object* v_res_3102_; 
v_sz_boxed_3100_ = lean_unbox_usize(v_sz_3090_);
lean_dec(v_sz_3090_);
v_i_boxed_3101_ = lean_unbox_usize(v_i_3091_);
lean_dec(v_i_3091_);
v_res_3102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2(v_as_3089_, v_sz_boxed_3100_, v_i_boxed_3101_, v_b_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec_ref(v_as_3089_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_as_3103_, size_t v_sz_3104_, size_t v_i_3105_, lean_object* v_b_3106_){
_start:
{
uint8_t v___x_3108_; 
v___x_3108_ = lean_usize_dec_lt(v_i_3105_, v_sz_3104_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3109_; 
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_b_3106_);
return v___x_3109_;
}
else
{
lean_object* v_snd_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3128_; 
v_snd_3110_ = lean_ctor_get(v_b_3106_, 1);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_b_3106_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v_b_3106_, 0);
lean_dec(v_unused_3129_);
v___x_3112_ = v_b_3106_;
v_isShared_3113_ = v_isSharedCheck_3128_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_snd_3110_);
lean_dec(v_b_3106_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3128_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v_a_3116_; lean_object* v_a_3123_; 
v___x_3114_ = lean_box(0);
v_a_3123_ = lean_array_uget_borrowed(v_as_3103_, v_i_3105_);
if (lean_obj_tag(v_a_3123_) == 0)
{
v_a_3116_ = v_snd_3110_;
goto v___jp_3115_;
}
else
{
lean_object* v_val_3124_; uint8_t v___x_3125_; 
v_val_3124_ = lean_ctor_get(v_a_3123_, 0);
v___x_3125_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3124_);
if (v___x_3125_ == 0)
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
lean_inc(v_val_3124_);
v___x_3126_ = l_Lean_LocalDecl_toExpr(v_val_3124_);
v___x_3127_ = lean_array_push(v_snd_3110_, v___x_3126_);
v_a_3116_ = v___x_3127_;
goto v___jp_3115_;
}
else
{
v_a_3116_ = v_snd_3110_;
goto v___jp_3115_;
}
}
v___jp_3115_:
{
lean_object* v___x_3118_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 1, v_a_3116_);
lean_ctor_set(v___x_3112_, 0, v___x_3114_);
v___x_3118_ = v___x_3112_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v___x_3114_);
lean_ctor_set(v_reuseFailAlloc_3122_, 1, v_a_3116_);
v___x_3118_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
size_t v___x_3119_; size_t v___x_3120_; 
v___x_3119_ = ((size_t)1ULL);
v___x_3120_ = lean_usize_add(v_i_3105_, v___x_3119_);
v_i_3105_ = v___x_3120_;
v_b_3106_ = v___x_3118_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_as_3130_, lean_object* v_sz_3131_, lean_object* v_i_3132_, lean_object* v_b_3133_, lean_object* v___y_3134_){
_start:
{
size_t v_sz_boxed_3135_; size_t v_i_boxed_3136_; lean_object* v_res_3137_; 
v_sz_boxed_3135_ = lean_unbox_usize(v_sz_3131_);
lean_dec(v_sz_3131_);
v_i_boxed_3136_ = lean_unbox_usize(v_i_3132_);
lean_dec(v_i_3132_);
v_res_3137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_as_3130_, v_sz_boxed_3135_, v_i_boxed_3136_, v_b_3133_);
lean_dec_ref(v_as_3130_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3(lean_object* v_as_3138_, size_t v_sz_3139_, size_t v_i_3140_, lean_object* v_b_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
uint8_t v___x_3149_; 
v___x_3149_ = lean_usize_dec_lt(v_i_3140_, v_sz_3139_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3150_, 0, v_b_3141_);
return v___x_3150_;
}
else
{
lean_object* v_snd_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3169_; 
v_snd_3151_ = lean_ctor_get(v_b_3141_, 1);
v_isSharedCheck_3169_ = !lean_is_exclusive(v_b_3141_);
if (v_isSharedCheck_3169_ == 0)
{
lean_object* v_unused_3170_; 
v_unused_3170_ = lean_ctor_get(v_b_3141_, 0);
lean_dec(v_unused_3170_);
v___x_3153_ = v_b_3141_;
v_isShared_3154_ = v_isSharedCheck_3169_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_snd_3151_);
lean_dec(v_b_3141_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3169_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; lean_object* v_a_3157_; lean_object* v_a_3164_; 
v___x_3155_ = lean_box(0);
v_a_3164_ = lean_array_uget_borrowed(v_as_3138_, v_i_3140_);
if (lean_obj_tag(v_a_3164_) == 0)
{
v_a_3157_ = v_snd_3151_;
goto v___jp_3156_;
}
else
{
lean_object* v_val_3165_; uint8_t v___x_3166_; 
v_val_3165_ = lean_ctor_get(v_a_3164_, 0);
v___x_3166_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3165_);
if (v___x_3166_ == 0)
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_inc(v_val_3165_);
v___x_3167_ = l_Lean_LocalDecl_toExpr(v_val_3165_);
v___x_3168_ = lean_array_push(v_snd_3151_, v___x_3167_);
v_a_3157_ = v___x_3168_;
goto v___jp_3156_;
}
else
{
v_a_3157_ = v_snd_3151_;
goto v___jp_3156_;
}
}
v___jp_3156_:
{
lean_object* v___x_3159_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v_a_3157_);
lean_ctor_set(v___x_3153_, 0, v___x_3155_);
v___x_3159_ = v___x_3153_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v___x_3155_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_a_3157_);
v___x_3159_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
size_t v___x_3160_; size_t v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = ((size_t)1ULL);
v___x_3161_ = lean_usize_add(v_i_3140_, v___x_3160_);
v___x_3162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_as_3138_, v_sz_3139_, v___x_3161_, v___x_3159_);
return v___x_3162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_as_3171_, lean_object* v_sz_3172_, lean_object* v_i_3173_, lean_object* v_b_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
size_t v_sz_boxed_3182_; size_t v_i_boxed_3183_; lean_object* v_res_3184_; 
v_sz_boxed_3182_ = lean_unbox_usize(v_sz_3172_);
lean_dec(v_sz_3172_);
v_i_boxed_3183_ = lean_unbox_usize(v_i_3173_);
lean_dec(v_i_3173_);
v_res_3184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3(v_as_3171_, v_sz_boxed_3182_, v_i_boxed_3183_, v_b_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec_ref(v_as_3171_);
return v_res_3184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1(lean_object* v_init_3185_, lean_object* v_n_3186_, lean_object* v_b_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_){
_start:
{
if (lean_obj_tag(v_n_3186_) == 0)
{
lean_object* v_cs_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; size_t v_sz_3198_; size_t v___x_3199_; lean_object* v___x_3200_; 
v_cs_3195_ = lean_ctor_get(v_n_3186_, 0);
v___x_3196_ = lean_box(0);
v___x_3197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
lean_ctor_set(v___x_3197_, 1, v_b_3187_);
v_sz_3198_ = lean_array_size(v_cs_3195_);
v___x_3199_ = ((size_t)0ULL);
v___x_3200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2(v_init_3185_, v_cs_3195_, v_sz_3198_, v___x_3199_, v___x_3197_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3215_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3203_ = v___x_3200_;
v_isShared_3204_ = v_isSharedCheck_3215_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3200_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3215_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v_fst_3205_; 
v_fst_3205_ = lean_ctor_get(v_a_3201_, 0);
if (lean_obj_tag(v_fst_3205_) == 0)
{
lean_object* v_snd_3206_; lean_object* v___x_3207_; lean_object* v___x_3209_; 
v_snd_3206_ = lean_ctor_get(v_a_3201_, 1);
lean_inc(v_snd_3206_);
lean_dec(v_a_3201_);
v___x_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3207_, 0, v_snd_3206_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v___x_3207_);
v___x_3209_ = v___x_3203_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
else
{
lean_object* v_val_3211_; lean_object* v___x_3213_; 
lean_inc_ref(v_fst_3205_);
lean_dec(v_a_3201_);
v_val_3211_ = lean_ctor_get(v_fst_3205_, 0);
lean_inc(v_val_3211_);
lean_dec_ref_known(v_fst_3205_, 1);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 0, v_val_3211_);
v___x_3213_ = v___x_3203_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_val_3211_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
v_a_3216_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3200_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3200_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
else
{
lean_object* v_vs_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; size_t v_sz_3227_; size_t v___x_3228_; lean_object* v___x_3229_; 
v_vs_3224_ = lean_ctor_get(v_n_3186_, 0);
v___x_3225_ = lean_box(0);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
lean_ctor_set(v___x_3226_, 1, v_b_3187_);
v_sz_3227_ = lean_array_size(v_vs_3224_);
v___x_3228_ = ((size_t)0ULL);
v___x_3229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3(v_vs_3224_, v_sz_3227_, v___x_3228_, v___x_3226_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3244_; 
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3232_ = v___x_3229_;
v_isShared_3233_ = v_isSharedCheck_3244_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3229_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3244_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v_fst_3234_; 
v_fst_3234_ = lean_ctor_get(v_a_3230_, 0);
if (lean_obj_tag(v_fst_3234_) == 0)
{
lean_object* v_snd_3235_; lean_object* v___x_3236_; lean_object* v___x_3238_; 
v_snd_3235_ = lean_ctor_get(v_a_3230_, 1);
lean_inc(v_snd_3235_);
lean_dec(v_a_3230_);
v___x_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3236_, 0, v_snd_3235_);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v___x_3236_);
v___x_3238_ = v___x_3232_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3236_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
else
{
lean_object* v_val_3240_; lean_object* v___x_3242_; 
lean_inc_ref(v_fst_3234_);
lean_dec(v_a_3230_);
v_val_3240_ = lean_ctor_get(v_fst_3234_, 0);
lean_inc(v_val_3240_);
lean_dec_ref_known(v_fst_3234_, 1);
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 0, v_val_3240_);
v___x_3242_ = v___x_3232_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_val_3240_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
v_a_3245_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3229_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3229_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2(lean_object* v_init_3253_, lean_object* v_as_3254_, size_t v_sz_3255_, size_t v_i_3256_, lean_object* v_b_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_){
_start:
{
uint8_t v___x_3265_; 
v___x_3265_ = lean_usize_dec_lt(v_i_3256_, v_sz_3255_);
if (v___x_3265_ == 0)
{
lean_object* v___x_3266_; 
v___x_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3266_, 0, v_b_3257_);
return v___x_3266_;
}
else
{
lean_object* v_snd_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3301_; 
v_snd_3267_ = lean_ctor_get(v_b_3257_, 1);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_b_3257_);
if (v_isSharedCheck_3301_ == 0)
{
lean_object* v_unused_3302_; 
v_unused_3302_ = lean_ctor_get(v_b_3257_, 0);
lean_dec(v_unused_3302_);
v___x_3269_ = v_b_3257_;
v_isShared_3270_ = v_isSharedCheck_3301_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_snd_3267_);
lean_dec(v_b_3257_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3301_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3271_; lean_object* v_a_3272_; lean_object* v___x_3273_; 
v___x_3271_ = lean_box(0);
v_a_3272_ = lean_array_uget_borrowed(v_as_3254_, v_i_3256_);
lean_inc(v_snd_3267_);
v___x_3273_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1(v_init_3253_, v_a_3272_, v_snd_3267_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3292_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3276_ = v___x_3273_;
v_isShared_3277_ = v_isSharedCheck_3292_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3273_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3292_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
if (lean_obj_tag(v_a_3274_) == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_a_3274_);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v___x_3278_);
v___x_3280_ = v___x_3269_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3278_);
lean_ctor_set(v_reuseFailAlloc_3284_, 1, v_snd_3267_);
v___x_3280_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3282_; 
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 0, v___x_3280_);
v___x_3282_ = v___x_3276_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3280_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; 
lean_del_object(v___x_3276_);
lean_dec(v_snd_3267_);
v_a_3285_ = lean_ctor_get(v_a_3274_, 0);
lean_inc(v_a_3285_);
lean_dec_ref_known(v_a_3274_, 1);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 1, v_a_3285_);
lean_ctor_set(v___x_3269_, 0, v___x_3271_);
v___x_3287_ = v___x_3269_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3271_);
lean_ctor_set(v_reuseFailAlloc_3291_, 1, v_a_3285_);
v___x_3287_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
size_t v___x_3288_; size_t v___x_3289_; 
v___x_3288_ = ((size_t)1ULL);
v___x_3289_ = lean_usize_add(v_i_3256_, v___x_3288_);
v_i_3256_ = v___x_3289_;
v_b_3257_ = v___x_3287_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_del_object(v___x_3269_);
lean_dec(v_snd_3267_);
v_a_3293_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3273_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3273_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_init_3303_, lean_object* v_as_3304_, lean_object* v_sz_3305_, lean_object* v_i_3306_, lean_object* v_b_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_){
_start:
{
size_t v_sz_boxed_3315_; size_t v_i_boxed_3316_; lean_object* v_res_3317_; 
v_sz_boxed_3315_ = lean_unbox_usize(v_sz_3305_);
lean_dec(v_sz_3305_);
v_i_boxed_3316_ = lean_unbox_usize(v_i_3306_);
lean_dec(v_i_3306_);
v_res_3317_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__2(v_init_3303_, v_as_3304_, v_sz_boxed_3315_, v_i_boxed_3316_, v_b_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec_ref(v_as_3304_);
lean_dec_ref(v_init_3303_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3318_, lean_object* v_n_3319_, lean_object* v_b_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1(v_init_3318_, v_n_3319_, v_b_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_);
lean_dec(v___y_3326_);
lean_dec_ref(v___y_3325_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v___y_3322_);
lean_dec_ref(v___y_3321_);
lean_dec_ref(v_n_3319_);
lean_dec_ref(v_init_3318_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0(lean_object* v_t_3329_, lean_object* v_init_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_root_3338_; lean_object* v_tail_3339_; lean_object* v___x_3340_; 
v_root_3338_ = lean_ctor_get(v_t_3329_, 0);
v_tail_3339_ = lean_ctor_get(v_t_3329_, 1);
lean_inc_ref(v_init_3330_);
v___x_3340_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1(v_init_3330_, v_root_3338_, v_init_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
lean_dec_ref(v_init_3330_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3377_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3343_ = v___x_3340_;
v_isShared_3344_ = v_isSharedCheck_3377_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3377_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
if (lean_obj_tag(v_a_3341_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v_a_3341_, 1);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v_a_3345_);
v___x_3347_ = v___x_3343_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
else
{
lean_object* v_a_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; size_t v_sz_3352_; size_t v___x_3353_; lean_object* v___x_3354_; 
lean_del_object(v___x_3343_);
v_a_3349_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v_a_3341_, 1);
v___x_3350_ = lean_box(0);
v___x_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
lean_ctor_set(v___x_3351_, 1, v_a_3349_);
v_sz_3352_ = lean_array_size(v_tail_3339_);
v___x_3353_ = ((size_t)0ULL);
v___x_3354_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2(v_tail_3339_, v_sz_3352_, v___x_3353_, v___x_3351_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3368_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3357_ = v___x_3354_;
v_isShared_3358_ = v_isSharedCheck_3368_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3354_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3368_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v_fst_3359_; 
v_fst_3359_ = lean_ctor_get(v_a_3355_, 0);
if (lean_obj_tag(v_fst_3359_) == 0)
{
lean_object* v_snd_3360_; lean_object* v___x_3362_; 
v_snd_3360_ = lean_ctor_get(v_a_3355_, 1);
lean_inc(v_snd_3360_);
lean_dec(v_a_3355_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 0, v_snd_3360_);
v___x_3362_ = v___x_3357_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_snd_3360_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
else
{
lean_object* v_val_3364_; lean_object* v___x_3366_; 
lean_inc_ref(v_fst_3359_);
lean_dec(v_a_3355_);
v_val_3364_ = lean_ctor_get(v_fst_3359_, 0);
lean_inc(v_val_3364_);
lean_dec_ref_known(v_fst_3359_, 1);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 0, v_val_3364_);
v___x_3366_ = v___x_3357_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_val_3364_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3354_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3354_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3385_; 
v_a_3378_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v___x_3340_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3340_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_a_3378_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0___boxed(lean_object* v_t_3386_, lean_object* v_init_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0(v_t_3386_, v_init_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec_ref(v_t_3386_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0(lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_lctx_3405_; lean_object* v_decls_3406_; lean_object* v_hs_3407_; lean_object* v___x_3408_; 
v_lctx_3405_ = lean_ctor_get(v___y_3400_, 2);
v_decls_3406_ = lean_ctor_get(v_lctx_3405_, 1);
v_hs_3407_ = ((lean_object*)(l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___closed__0));
v___x_3408_ = l_Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0(v_decls_3406_, v_hs_3407_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3408_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0___boxed(lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0(v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_);
lean_dec(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___lam__0(uint8_t v_only_3417_, lean_object* v_cfg_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
if (v_only_3417_ == 0)
{
lean_object* v___x_3426_; 
v___x_3426_ = l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0(v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_toApplyRulesConfig_3427_; lean_object* v_a_3428_; uint8_t v_symm_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_toApplyRulesConfig_3427_ = lean_ctor_get(v_cfg_3418_, 0);
v_a_3428_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3428_);
lean_dec_ref_known(v___x_3426_, 1);
v_symm_3429_ = lean_ctor_get_uint8(v_toApplyRulesConfig_3427_, sizeof(void*)*2 + 1);
v___x_3430_ = lean_array_to_list(v_a_3428_);
v___x_3431_ = l_Lean_Meta_SolveByElim_saturateSymm(v_symm_3429_, v___x_3430_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
return v___x_3431_;
}
else
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3439_; 
v_a_3432_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3434_ = v___x_3426_;
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3426_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v___x_3437_; 
if (v_isShared_3435_ == 0)
{
v___x_3437_ = v___x_3434_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_a_3432_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
else
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3440_ = lean_box(0);
v___x_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___lam__0___boxed(lean_object* v_only_3442_, lean_object* v_cfg_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
uint8_t v_only_boxed_3451_; lean_object* v_res_3452_; 
v_only_boxed_3451_ = lean_unbox(v_only_3442_);
v_res_3452_ = l_Lean_MVarId_applyRules___lam__0(v_only_boxed_3451_, v_cfg_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec(v___y_3445_);
lean_dec_ref(v___y_3444_);
lean_dec_ref(v_cfg_3443_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules(lean_object* v_cfg_3453_, lean_object* v_lemmas_3454_, uint8_t v_only_3455_, lean_object* v_g_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_){
_start:
{
lean_object* v_toApplyRulesConfig_3462_; uint8_t v_intro_3463_; uint8_t v_constructor_3464_; uint8_t v_suggestions_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3478_; 
v_toApplyRulesConfig_3462_ = lean_ctor_get(v_cfg_3453_, 0);
v_intro_3463_ = lean_ctor_get_uint8(v_cfg_3453_, sizeof(void*)*1 + 1);
v_constructor_3464_ = lean_ctor_get_uint8(v_cfg_3453_, sizeof(void*)*1 + 2);
v_suggestions_3465_ = lean_ctor_get_uint8(v_cfg_3453_, sizeof(void*)*1 + 3);
v_isSharedCheck_3478_ = !lean_is_exclusive(v_cfg_3453_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3467_ = v_cfg_3453_;
v_isShared_3468_ = v_isSharedCheck_3478_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_toApplyRulesConfig_3462_);
lean_dec(v_cfg_3453_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3478_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3469_; lean_object* v_ctx_3470_; uint8_t v___x_3471_; lean_object* v___x_3473_; 
v___x_3469_ = lean_box(v_only_3455_);
v_ctx_3470_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyRules___lam__0___boxed), 9, 1);
lean_closure_set(v_ctx_3470_, 0, v___x_3469_);
v___x_3471_ = 0;
if (v_isShared_3468_ == 0)
{
v___x_3473_ = v___x_3467_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_toApplyRulesConfig_3462_);
lean_ctor_set_uint8(v_reuseFailAlloc_3477_, sizeof(void*)*1 + 1, v_intro_3463_);
lean_ctor_set_uint8(v_reuseFailAlloc_3477_, sizeof(void*)*1 + 2, v_constructor_3464_);
lean_ctor_set_uint8(v_reuseFailAlloc_3477_, sizeof(void*)*1 + 3, v_suggestions_3465_);
v___x_3473_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
lean_ctor_set_uint8(v___x_3473_, sizeof(void*)*1, v___x_3471_);
v___x_3474_ = lean_box(0);
v___x_3475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3475_, 0, v_g_3456_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
v___x_3476_ = l_Lean_Meta_SolveByElim_solveByElim(v___x_3473_, v_lemmas_3454_, v_ctx_3470_, v___x_3475_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_);
return v___x_3476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRules___boxed(lean_object* v_cfg_3479_, lean_object* v_lemmas_3480_, lean_object* v_only_3481_, lean_object* v_g_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
uint8_t v_only_boxed_3488_; lean_object* v_res_3489_; 
v_only_boxed_3488_ = lean_unbox(v_only_3481_);
v_res_3489_ = l_Lean_MVarId_applyRules(v_cfg_3479_, v_lemmas_3480_, v_only_boxed_3488_, v_g_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_);
lean_dec(v_a_3486_);
lean_dec_ref(v_a_3485_);
lean_dec(v_a_3484_);
lean_dec_ref(v_a_3483_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5(lean_object* v_as_3490_, size_t v_sz_3491_, size_t v_i_3492_, lean_object* v_b_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___redArg(v_as_3490_, v_sz_3491_, v_i_3492_, v_b_3493_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_as_3502_, lean_object* v_sz_3503_, lean_object* v_i_3504_, lean_object* v_b_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
size_t v_sz_boxed_3513_; size_t v_i_boxed_3514_; lean_object* v_res_3515_; 
v_sz_boxed_3513_ = lean_unbox_usize(v_sz_3503_);
lean_dec(v_sz_3503_);
v_i_boxed_3514_ = lean_unbox_usize(v_i_3504_);
lean_dec(v_i_3504_);
v_res_3515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__2_spec__5(v_as_3502_, v_sz_boxed_3513_, v_i_boxed_3514_, v_b_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec(v___y_3507_);
lean_dec_ref(v___y_3506_);
lean_dec_ref(v_as_3502_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_as_3516_, size_t v_sz_3517_, size_t v_i_3518_, lean_object* v_b_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v___x_3527_; 
v___x_3527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_as_3516_, v_sz_3517_, v_i_3518_, v_b_3519_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v_as_3528_, lean_object* v_sz_3529_, lean_object* v_i_3530_, lean_object* v_b_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
size_t v_sz_boxed_3539_; size_t v_i_boxed_3540_; lean_object* v_res_3541_; 
v_sz_boxed_3539_ = lean_unbox_usize(v_sz_3529_);
lean_dec(v_sz_3529_);
v_i_boxed_3540_ = lean_unbox_usize(v_i_3530_);
lean_dec(v_i_3530_);
v_res_3541_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0_spec__0_spec__1_spec__3_spec__4(v_as_3528_, v_sz_boxed_3539_, v_i_boxed_3540_, v_b_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3534_);
lean_dec(v___y_3533_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v_as_3528_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27(lean_object* v_t_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_){
_start:
{
lean_object* v___x_3550_; uint8_t v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = lean_box(0);
v___x_3551_ = 1;
v___x_3552_ = l_Lean_Elab_Term_elabTerm(v_t_3542_, v___x_3550_, v___x_3551_, v___x_3551_, v_a_3543_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_, v_a_3548_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27___boxed(lean_object* v_t_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_){
_start:
{
lean_object* v_res_3561_; 
v_res_3561_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27(v_t_3553_, v_a_3554_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_);
lean_dec(v_a_3559_);
lean_dec_ref(v_a_3558_);
lean_dec(v_a_3557_);
lean_dec_ref(v_a_3556_);
lean_dec(v_a_3555_);
lean_dec_ref(v_a_3554_);
return v_res_3561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_){
_start:
{
lean_object* v_ref_3567_; uint8_t v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v_ref_3567_ = lean_ctor_get(v___y_3564_, 2);
v___x_3568_ = 0;
v___x_3569_ = l_Lean_SourceInfo_fromRef(v_ref_3567_, v___x_3568_);
v___x_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
return v___x_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0___boxed(lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_);
lean_dec(v___y_3574_);
lean_dec_ref(v___y_3573_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
return v_res_3576_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1(lean_object* v_a_3577_, lean_object* v_x_3578_){
_start:
{
if (lean_obj_tag(v_x_3578_) == 0)
{
uint8_t v___x_3579_; 
v___x_3579_ = 0;
return v___x_3579_;
}
else
{
lean_object* v_head_3580_; lean_object* v_tail_3581_; uint8_t v___x_3582_; 
v_head_3580_ = lean_ctor_get(v_x_3578_, 0);
v_tail_3581_ = lean_ctor_get(v_x_3578_, 1);
v___x_3582_ = lean_expr_eqv(v_a_3577_, v_head_3580_);
if (v___x_3582_ == 0)
{
v_x_3578_ = v_tail_3581_;
goto _start;
}
else
{
return v___x_3582_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1___boxed(lean_object* v_a_3584_, lean_object* v_x_3585_){
_start:
{
uint8_t v_res_3586_; lean_object* v_r_3587_; 
v_res_3586_ = l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1(v_a_3584_, v_x_3585_);
lean_dec(v_x_3585_);
lean_dec_ref(v_a_3584_);
v_r_3587_ = lean_box(v_res_3586_);
return v_r_3587_;
}
}
LEAN_EXPORT uint8_t l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0(lean_object* v_ys_3588_, lean_object* v_x_3589_){
_start:
{
uint8_t v___x_3590_; 
v___x_3590_ = l_List_elem___at___00List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1_spec__1(v_x_3589_, v_ys_3588_);
if (v___x_3590_ == 0)
{
uint8_t v___x_3591_; 
v___x_3591_ = 1;
return v___x_3591_;
}
else
{
uint8_t v___x_3592_; 
v___x_3592_ = 0;
return v___x_3592_;
}
}
}
LEAN_EXPORT lean_object* l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0___boxed(lean_object* v_ys_3593_, lean_object* v_x_3594_){
_start:
{
uint8_t v_res_3595_; lean_object* v_r_3596_; 
v_res_3595_ = l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0(v_ys_3593_, v_x_3594_);
lean_dec_ref(v_x_3594_);
lean_dec(v_ys_3593_);
v_r_3596_ = lean_box(v_res_3595_);
return v_r_3596_;
}
}
LEAN_EXPORT lean_object* l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1(lean_object* v_xs_3597_, lean_object* v_ys_3598_){
_start:
{
lean_object* v___f_3599_; lean_object* v___x_3600_; 
v___f_3599_ = lean_alloc_closure((void*)(l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3599_, 0, v_ys_3598_);
v___x_3600_ = l_List_filter___redArg(v___f_3599_, v_xs_3597_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0(lean_object* v_x_3601_, lean_object* v_x_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
if (lean_obj_tag(v_x_3601_) == 0)
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = l_List_reverse___redArg(v_x_3602_);
v___x_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
return v___x_3611_;
}
else
{
lean_object* v_head_3612_; lean_object* v_tail_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3631_; 
v_head_3612_ = lean_ctor_get(v_x_3601_, 0);
v_tail_3613_ = lean_ctor_get(v_x_3601_, 1);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_x_3601_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3615_ = v_x_3601_;
v_isShared_3616_ = v_isSharedCheck_3631_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_tail_3613_);
lean_inc(v_head_3612_);
lean_dec(v_x_3601_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3631_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3617_; 
v___x_3617_ = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27(v_head_3612_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v_a_3618_; lean_object* v___x_3620_; 
v_a_3618_ = lean_ctor_get(v___x_3617_, 0);
lean_inc(v_a_3618_);
lean_dec_ref_known(v___x_3617_, 1);
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 1, v_x_3602_);
lean_ctor_set(v___x_3615_, 0, v_a_3618_);
v___x_3620_ = v___x_3615_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3618_);
lean_ctor_set(v_reuseFailAlloc_3622_, 1, v_x_3602_);
v___x_3620_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
v_x_3601_ = v_tail_3613_;
v_x_3602_ = v___x_3620_;
goto _start;
}
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3630_; 
lean_del_object(v___x_3615_);
lean_dec(v_tail_3613_);
lean_dec(v_x_3602_);
v_a_3623_ = lean_ctor_get(v___x_3617_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3625_ = v___x_3617_;
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3617_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3630_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3628_; 
if (v_isShared_3626_ == 0)
{
v___x_3628_ = v___x_3625_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3623_);
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
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0___boxed(lean_object* v_x_3632_, lean_object* v_x_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0(v_x_3632_, v_x_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1(lean_object* v_remove_3642_, uint8_t v_noDefaults_3643_, uint8_t v_star_3644_, lean_object* v_cfg_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_){
_start:
{
if (v_noDefaults_3643_ == 0)
{
goto v___jp_3653_;
}
else
{
if (v_star_3644_ == 0)
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
lean_dec(v_remove_3642_);
v___x_3672_ = lean_box(0);
v___x_3673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3672_);
return v___x_3673_;
}
else
{
goto v___jp_3653_;
}
}
v___jp_3653_:
{
lean_object* v___x_3654_; 
v___x_3654_ = l_Lean_getLocalHyps___at___00Lean_MVarId_applyRules_spec__0(v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v___x_3654_, 1);
v___x_3656_ = lean_box(0);
v___x_3657_ = l_List_mapM_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__0(v_remove_3642_, v___x_3656_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_toApplyRulesConfig_3658_; lean_object* v_a_3659_; uint8_t v_symm_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v_toApplyRulesConfig_3658_ = lean_ctor_get(v_cfg_3645_, 0);
v_a_3659_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3659_);
lean_dec_ref_known(v___x_3657_, 1);
v_symm_3660_ = lean_ctor_get_uint8(v_toApplyRulesConfig_3658_, sizeof(void*)*2 + 1);
v___x_3661_ = lean_array_to_list(v_a_3655_);
v___x_3662_ = l_List_removeAll___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__1(v___x_3661_, v_a_3659_);
v___x_3663_ = l_Lean_Meta_SolveByElim_saturateSymm(v_symm_3660_, v___x_3662_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
return v___x_3663_;
}
else
{
lean_dec(v_a_3655_);
return v___x_3657_;
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
lean_dec(v_remove_3642_);
v_a_3664_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3654_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3654_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1___boxed(lean_object* v_remove_3674_, lean_object* v_noDefaults_3675_, lean_object* v_star_3676_, lean_object* v_cfg_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v_noDefaults_boxed_3685_; uint8_t v_star_boxed_3686_; lean_object* v_res_3687_; 
v_noDefaults_boxed_3685_ = lean_unbox(v_noDefaults_3675_);
v_star_boxed_3686_ = lean_unbox(v_star_3676_);
v_res_3687_ = l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1(v_remove_3674_, v_noDefaults_boxed_3685_, v_star_boxed_3686_, v_cfg_3677_, v___y_3678_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec_ref(v_cfg_3677_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5(lean_object* v_as_3688_, size_t v_i_3689_, size_t v_stop_3690_, lean_object* v_b_3691_){
_start:
{
uint8_t v___x_3692_; 
v___x_3692_ = lean_usize_dec_eq(v_i_3689_, v_stop_3690_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; lean_object* v___x_3694_; size_t v___x_3695_; size_t v___x_3696_; 
v___x_3693_ = lean_array_uget_borrowed(v_as_3688_, v_i_3689_);
v___x_3694_ = l_Array_append___redArg(v_b_3691_, v___x_3693_);
v___x_3695_ = ((size_t)1ULL);
v___x_3696_ = lean_usize_add(v_i_3689_, v___x_3695_);
v_i_3689_ = v___x_3696_;
v_b_3691_ = v___x_3694_;
goto _start;
}
else
{
return v_b_3691_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5___boxed(lean_object* v_as_3698_, lean_object* v_i_3699_, lean_object* v_stop_3700_, lean_object* v_b_3701_){
_start:
{
size_t v_i_boxed_3702_; size_t v_stop_boxed_3703_; lean_object* v_res_3704_; 
v_i_boxed_3702_ = lean_unbox_usize(v_i_3699_);
lean_dec(v_i_3699_);
v_stop_boxed_3703_ = lean_unbox_usize(v_stop_3700_);
lean_dec(v_stop_3700_);
v_res_3704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5(v_as_3698_, v_i_boxed_3702_, v_stop_boxed_3703_, v_b_3701_);
lean_dec_ref(v_as_3698_);
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0(lean_object* v_head_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v___x_3713_; 
v___x_3713_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_head_3705_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0___boxed(lean_object* v_head_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0(v_head_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
return v_res_3722_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4(lean_object* v_a_3723_, lean_object* v_a_3724_){
_start:
{
if (lean_obj_tag(v_a_3723_) == 0)
{
lean_object* v___x_3725_; 
v___x_3725_ = l_List_reverse___redArg(v_a_3724_);
return v___x_3725_;
}
else
{
lean_object* v_head_3726_; lean_object* v_tail_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3736_; 
v_head_3726_ = lean_ctor_get(v_a_3723_, 0);
v_tail_3727_ = lean_ctor_get(v_a_3723_, 1);
v_isSharedCheck_3736_ = !lean_is_exclusive(v_a_3723_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3729_ = v_a_3723_;
v_isShared_3730_ = v_isSharedCheck_3736_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_tail_3727_);
lean_inc(v_head_3726_);
lean_dec(v_a_3723_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3736_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___f_3731_; lean_object* v___x_3733_; 
v___f_3731_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3731_, 0, v_head_3726_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 1, v_a_3724_);
lean_ctor_set(v___x_3729_, 0, v___f_3731_);
v___x_3733_ = v___x_3729_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___f_3731_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_a_3724_);
v___x_3733_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
v_a_3723_ = v_tail_3727_;
v_a_3724_ = v___x_3733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg(size_t v_sz_3737_, size_t v_i_3738_, lean_object* v_bs_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
uint8_t v___x_3743_; 
v___x_3743_ = lean_usize_dec_lt(v_i_3738_, v_sz_3737_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3744_ = l_unsafeCast___redArg(v_bs_3739_);
lean_dec_ref(v_bs_3739_);
v___x_3745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
return v___x_3745_;
}
else
{
lean_object* v_v_3746_; lean_object* v___x_3747_; lean_object* v_bs_x27_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v_v_3746_ = lean_array_uget(v_bs_3739_, v_i_3738_);
v___x_3747_ = lean_unsigned_to_nat(0u);
v_bs_x27_3748_ = lean_array_uset(v_bs_3739_, v_i_3738_, v___x_3747_);
v___x_3749_ = l_unsafeCast___redArg(v_v_3746_);
lean_dec(v_v_3746_);
v___x_3750_ = l_Lean_Syntax_getId(v___x_3749_);
lean_dec(v___x_3749_);
v___x_3751_ = l_Lean_labelled(v___x_3750_, v___y_3740_, v___y_3741_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; size_t v___x_3753_; size_t v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v___x_3751_, 1);
v___x_3753_ = ((size_t)1ULL);
v___x_3754_ = lean_usize_add(v_i_3738_, v___x_3753_);
v___x_3755_ = l_unsafeCast___redArg(v_a_3752_);
lean_dec(v_a_3752_);
v___x_3756_ = lean_array_uset(v_bs_x27_3748_, v_i_3738_, v___x_3755_);
v_i_3738_ = v___x_3754_;
v_bs_3739_ = v___x_3756_;
goto _start;
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec_ref(v_bs_x27_3748_);
v_a_3758_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3751_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3751_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg___boxed(lean_object* v_sz_3766_, lean_object* v_i_3767_, lean_object* v_bs_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
size_t v_sz_boxed_3772_; size_t v_i_boxed_3773_; lean_object* v_res_3774_; 
v_sz_boxed_3772_ = lean_unbox_usize(v_sz_3766_);
lean_dec(v_sz_3766_);
v_i_boxed_3773_ = lean_unbox_usize(v_i_3767_);
lean_dec(v_i_3767_);
v_res_3774_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg(v_sz_boxed_3772_, v_i_boxed_3773_, v_bs_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3(size_t v_sz_3775_, size_t v_i_3776_, lean_object* v_bs_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_){
_start:
{
lean_object* v___x_3783_; 
v___x_3783_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___redArg(v_sz_3775_, v_i_3776_, v_bs_3777_, v___y_3780_, v___y_3781_);
return v___x_3783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___boxed(lean_object* v_sz_3784_, lean_object* v_i_3785_, lean_object* v_bs_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
size_t v_sz_boxed_3792_; size_t v_i_boxed_3793_; lean_object* v_res_3794_; 
v_sz_boxed_3792_ = lean_unbox_usize(v_sz_3784_);
lean_dec(v_sz_3784_);
v_i_boxed_3793_ = lean_unbox_usize(v_i_3785_);
lean_dec(v_i_3785_);
v_res_3794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3(v_sz_boxed_3792_, v_i_boxed_3793_, v_bs_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__2(lean_object* v_a_3795_, lean_object* v_a_3796_){
_start:
{
if (lean_obj_tag(v_a_3795_) == 0)
{
lean_object* v___x_3797_; 
v___x_3797_ = l_List_reverse___redArg(v_a_3796_);
return v___x_3797_;
}
else
{
lean_object* v_head_3798_; lean_object* v_tail_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3808_; 
v_head_3798_ = lean_ctor_get(v_a_3795_, 0);
v_tail_3799_ = lean_ctor_get(v_a_3795_, 1);
v_isSharedCheck_3808_ = !lean_is_exclusive(v_a_3795_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3801_ = v_a_3795_;
v_isShared_3802_ = v_isSharedCheck_3808_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_tail_3799_);
lean_inc(v_head_3798_);
lean_dec(v_a_3795_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3808_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3803_; lean_object* v___x_3805_; 
v___x_3803_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_mkAssumptionSet_elab_x27___boxed), 8, 1);
lean_closure_set(v___x_3803_, 0, v_head_3798_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 1, v_a_3796_);
lean_ctor_set(v___x_3801_, 0, v___x_3803_);
v___x_3805_ = v___x_3801_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3803_);
lean_ctor_set(v_reuseFailAlloc_3807_, 1, v_a_3796_);
v___x_3805_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
v_a_3795_ = v_tail_3799_;
v_a_3796_ = v___x_3805_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1(void){
_start:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__0));
v___x_3811_ = l_Lean_stringToMessageData(v___x_3810_);
return v___x_3811_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3(void){
_start:
{
lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3813_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__2));
v___x_3814_ = l_String_toRawSubstring_x27(v___x_3813_);
return v___x_3814_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8(void){
_start:
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3824_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__7));
v___x_3825_ = l_String_toRawSubstring_x27(v___x_3824_);
return v___x_3825_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13(void){
_start:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3835_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__12));
v___x_3836_ = l_String_toRawSubstring_x27(v___x_3835_);
return v___x_3836_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18(void){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___x_3846_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__17));
v___x_3847_ = l_String_toRawSubstring_x27(v___x_3846_);
return v___x_3847_;
}
}
static lean_object* _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24(void){
_start:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; 
v___x_3859_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__23));
v___x_3860_ = l_Lean_stringToMessageData(v___x_3859_);
return v___x_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet(uint8_t v_noDefaults_3863_, uint8_t v_star_3864_, lean_object* v_add_3865_, lean_object* v_remove_3866_, lean_object* v_use_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_){
_start:
{
lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___f_3898_; lean_object* v___y_3900_; lean_object* v___y_3901_; lean_object* v___y_3902_; lean_object* v___y_3903_; lean_object* v___y_3904_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3915_; lean_object* v___y_3916_; lean_object* v___y_3917_; lean_object* v___y_3918_; 
v___x_3896_ = lean_box(v_noDefaults_3863_);
v___x_3897_ = lean_box(v_star_3864_);
lean_inc(v_remove_3866_);
v___f_3898_ = lean_alloc_closure((void*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__1___boxed), 11, 3);
lean_closure_set(v___f_3898_, 0, v_remove_3866_);
lean_closure_set(v___f_3898_, 1, v___x_3896_);
lean_closure_set(v___f_3898_, 2, v___x_3897_);
if (v_star_3864_ == 0)
{
v___y_3915_ = v_a_3868_;
v___y_3916_ = v_a_3869_;
v___y_3917_ = v_a_3870_;
v___y_3918_ = v_a_3871_;
goto v___jp_3914_;
}
else
{
if (v_noDefaults_3863_ == 0)
{
lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3989_; 
lean_dec_ref(v___f_3898_);
lean_dec(v_remove_3866_);
lean_dec(v_add_3865_);
v___x_3980_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__24);
v___x_3981_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v___x_3980_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_);
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3984_ = v___x_3981_;
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3981_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
return v___x_3987_;
}
}
}
else
{
v___y_3915_ = v_a_3868_;
v___y_3916_ = v_a_3869_;
v___y_3917_ = v_a_3870_;
v___y_3918_ = v_a_3871_;
goto v___jp_3914_;
}
}
v___jp_3873_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___y_3875_);
lean_ctor_set(v___x_3876_, 1, v___y_3874_);
v___x_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
return v___x_3877_;
}
v___jp_3878_:
{
uint8_t v___x_3885_; 
v___x_3885_ = l_List_isEmpty___redArg(v_remove_3866_);
lean_dec(v_remove_3866_);
if (v___x_3885_ == 0)
{
if (v_noDefaults_3863_ == 0)
{
v___y_3874_ = v___y_3882_;
v___y_3875_ = v___y_3884_;
goto v___jp_3873_;
}
else
{
if (v_star_3864_ == 0)
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3882_);
v___x_3886_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__1);
v___x_3887_ = l_Lean_throwError___at___00Lean_Meta_SolveByElim_SolveByElimConfig_testPartialSolutions_spec__3___redArg(v___x_3886_, v___y_3881_, v___y_3883_, v___y_3879_, v___y_3880_);
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3887_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3887_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
else
{
v___y_3874_ = v___y_3882_;
v___y_3875_ = v___y_3884_;
goto v___jp_3873_;
}
}
}
else
{
v___y_3874_ = v___y_3882_;
v___y_3875_ = v___y_3884_;
goto v___jp_3873_;
}
}
v___jp_3899_:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_array_to_list(v___y_3906_);
lean_inc(v___y_3905_);
v___x_3908_ = l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__4(v___x_3907_, v___y_3905_);
if (v_noDefaults_3863_ == 0)
{
lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3909_ = l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__2(v_add_3865_, v___y_3905_);
v___x_3910_ = l_List_appendTR___redArg(v___x_3909_, v___x_3908_);
v___x_3911_ = l_List_appendTR___redArg(v___x_3910_, v___y_3901_);
v___y_3879_ = v___y_3900_;
v___y_3880_ = v___y_3903_;
v___y_3881_ = v___y_3902_;
v___y_3882_ = v___f_3898_;
v___y_3883_ = v___y_3904_;
v___y_3884_ = v___x_3911_;
goto v___jp_3878_;
}
else
{
lean_object* v___x_3912_; lean_object* v___x_3913_; 
lean_dec(v___y_3901_);
v___x_3912_ = l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__2(v_add_3865_, v___y_3905_);
v___x_3913_ = l_List_appendTR___redArg(v___x_3912_, v___x_3908_);
v___y_3879_ = v___y_3900_;
v___y_3880_ = v___y_3903_;
v___y_3881_ = v___y_3902_;
v___y_3882_ = v___f_3898_;
v___y_3883_ = v___y_3904_;
v___y_3884_ = v___x_3913_;
goto v___jp_3878_;
}
}
v___jp_3914_:
{
lean_object* v_toCold_3919_; lean_object* v_ref_3920_; lean_object* v_quotContext_3921_; lean_object* v_currMacroScope_3922_; uint8_t v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v_a_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v_a_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v_a_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; size_t v_sz_3957_; size_t v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_7408__overap_3963_; lean_object* v___x_3964_; 
v_toCold_3919_ = lean_ctor_get(v___y_3917_, 0);
v_ref_3920_ = lean_ctor_get(v___y_3917_, 2);
v_quotContext_3921_ = lean_ctor_get(v_toCold_3919_, 8);
v_currMacroScope_3922_ = lean_ctor_get(v_toCold_3919_, 9);
v___x_3923_ = 0;
v___x_3924_ = l_Lean_SourceInfo_fromRef(v_ref_3920_, v___x_3923_);
v___x_3925_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__3);
v___x_3926_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__4));
lean_inc_n(v_currMacroScope_3922_, 4);
lean_inc_n(v_quotContext_3921_, 4);
v___x_3927_ = l_Lean_addMacroScope(v_quotContext_3921_, v___x_3926_, v_currMacroScope_3922_);
v___x_3928_ = lean_box(0);
v___x_3929_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__6));
v___x_3930_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3924_);
lean_ctor_set(v___x_3930_, 1, v___x_3925_);
lean_ctor_set(v___x_3930_, 2, v___x_3927_);
lean_ctor_set(v___x_3930_, 3, v___x_3929_);
v___x_3931_ = l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_);
v_a_3932_ = lean_ctor_get(v___x_3931_, 0);
lean_inc(v_a_3932_);
lean_dec_ref(v___x_3931_);
v___x_3933_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__8);
v___x_3934_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__9));
v___x_3935_ = l_Lean_addMacroScope(v_quotContext_3921_, v___x_3934_, v_currMacroScope_3922_);
v___x_3936_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__11));
v___x_3937_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3937_, 0, v_a_3932_);
lean_ctor_set(v___x_3937_, 1, v___x_3933_);
lean_ctor_set(v___x_3937_, 2, v___x_3935_);
lean_ctor_set(v___x_3937_, 3, v___x_3936_);
v___x_3938_ = l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_);
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref(v___x_3938_);
v___x_3940_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__13);
v___x_3941_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__14));
v___x_3942_ = l_Lean_addMacroScope(v_quotContext_3921_, v___x_3941_, v_currMacroScope_3922_);
v___x_3943_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__16));
v___x_3944_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3944_, 0, v_a_3939_);
lean_ctor_set(v___x_3944_, 1, v___x_3940_);
lean_ctor_set(v___x_3944_, 2, v___x_3942_);
lean_ctor_set(v___x_3944_, 3, v___x_3943_);
v___x_3945_ = l_Lean_Meta_SolveByElim_mkAssumptionSet___lam__0(v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_);
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref(v___x_3945_);
v___x_3947_ = lean_obj_once(&l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18, &l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18_once, _init_l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__18);
v___x_3948_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__19));
v___x_3949_ = l_Lean_addMacroScope(v_quotContext_3921_, v___x_3948_, v_currMacroScope_3922_);
v___x_3950_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__21));
v___x_3951_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3951_, 0, v_a_3946_);
lean_ctor_set(v___x_3951_, 1, v___x_3947_);
lean_ctor_set(v___x_3951_, 2, v___x_3949_);
lean_ctor_set(v___x_3951_, 3, v___x_3950_);
v___x_3952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
lean_ctor_set(v___x_3952_, 1, v___x_3928_);
v___x_3953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3944_);
lean_ctor_set(v___x_3953_, 1, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3937_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3930_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = l_List_mapTR_loop___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__2(v___x_3955_, v___x_3928_);
v_sz_3957_ = lean_array_size(v_use_3867_);
v___x_3958_ = ((size_t)0ULL);
v___x_3959_ = l_unsafeCast___redArg(v_use_3867_);
v___x_3960_ = lean_box_usize(v_sz_3957_);
v___x_3961_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed__const__1));
v___x_3962_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__3___boxed), 8, 3);
lean_closure_set(v___x_3962_, 0, v___x_3960_);
lean_closure_set(v___x_3962_, 1, v___x_3961_);
lean_closure_set(v___x_3962_, 2, v___x_3959_);
v___x_7408__overap_3963_ = l_unsafeCast___redArg(v___x_3962_);
lean_dec_ref(v___x_3962_);
lean_inc(v___y_3918_);
lean_inc_ref(v___y_3917_);
lean_inc(v___y_3916_);
lean_inc_ref(v___y_3915_);
v___x_3964_ = lean_apply_5(v___x_7408__overap_3963_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, lean_box(0));
if (lean_obj_tag(v___x_3964_) == 0)
{
lean_object* v_a_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; uint8_t v___x_3969_; 
v_a_3965_ = lean_ctor_get(v___x_3964_, 0);
lean_inc(v_a_3965_);
lean_dec_ref_known(v___x_3964_, 1);
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = ((lean_object*)(l_Lean_Meta_SolveByElim_mkAssumptionSet___closed__22));
v___x_3968_ = lean_array_get_size(v_a_3965_);
v___x_3969_ = lean_nat_dec_lt(v___x_3966_, v___x_3968_);
if (v___x_3969_ == 0)
{
lean_dec(v_a_3965_);
v___y_3900_ = v___y_3917_;
v___y_3901_ = v___x_3956_;
v___y_3902_ = v___y_3915_;
v___y_3903_ = v___y_3918_;
v___y_3904_ = v___y_3916_;
v___y_3905_ = v___x_3928_;
v___y_3906_ = v___x_3967_;
goto v___jp_3899_;
}
else
{
size_t v___x_3970_; lean_object* v___x_3971_; 
v___x_3970_ = lean_usize_of_nat(v___x_3968_);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_SolveByElim_mkAssumptionSet_spec__5(v_a_3965_, v___x_3958_, v___x_3970_, v___x_3967_);
lean_dec(v_a_3965_);
v___y_3900_ = v___y_3917_;
v___y_3901_ = v___x_3956_;
v___y_3902_ = v___y_3915_;
v___y_3903_ = v___y_3918_;
v___y_3904_ = v___y_3916_;
v___y_3905_ = v___x_3928_;
v___y_3906_ = v___x_3971_;
goto v___jp_3899_;
}
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v___x_3956_);
lean_dec_ref(v___f_3898_);
lean_dec(v_remove_3866_);
lean_dec(v_add_3865_);
v_a_3972_ = lean_ctor_get(v___x_3964_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3964_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3964_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3964_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3977_; 
if (v_isShared_3975_ == 0)
{
v___x_3977_ = v___x_3974_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3972_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SolveByElim_mkAssumptionSet___boxed(lean_object* v_noDefaults_3990_, lean_object* v_star_3991_, lean_object* v_add_3992_, lean_object* v_remove_3993_, lean_object* v_use_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_){
_start:
{
uint8_t v_noDefaults_boxed_4000_; uint8_t v_star_boxed_4001_; lean_object* v_res_4002_; 
v_noDefaults_boxed_4000_ = lean_unbox(v_noDefaults_3990_);
v_star_boxed_4001_ = lean_unbox(v_star_3991_);
v_res_4002_ = l_Lean_Meta_SolveByElim_mkAssumptionSet(v_noDefaults_boxed_4000_, v_star_boxed_4001_, v_add_3992_, v_remove_3993_, v_use_3994_, v_a_3995_, v_a_3996_, v_a_3997_, v_a_3998_);
lean_dec(v_a_3998_);
lean_dec_ref(v_a_3997_);
lean_dec(v_a_3996_);
lean_dec_ref(v_a_3995_);
lean_dec_ref(v_use_3994_);
return v_res_4002_;
}
}
lean_object* runtime_initialize_Init_Data_Sum(uint8_t builtin);
lean_object* runtime_initialize_Lean_LabelAttribute(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Backtrack(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Repeat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Symm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Sum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LabelAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Backtrack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Repeat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_SolveByElim_0__Lean_Meta_SolveByElim_initFn_00___x40_Lean_Meta_Tactic_SolveByElim_1979843508____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Sum(uint8_t builtin);
lean_object* initialize_Lean_LabelAttribute(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Backtrack(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Repeat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Symm(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_SolveByElim(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Sum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LabelAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Backtrack(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Repeat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Symm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_SolveByElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_SolveByElim(builtin);
}
#ifdef __cplusplus
}
#endif

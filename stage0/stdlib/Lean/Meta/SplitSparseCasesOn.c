// Lean compiler output
// Module: Lean.Meta.SplitSparseCasesOn
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Rewrite import Lean.Meta.Constructions.SparseCasesOn import Lean.Meta.Constructions.SparseCasesOnEq import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Cases import Lean.Meta.Tactic.Replace
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
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_getSparseCasesOnEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkHasNotBitProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_modifyTargetEqLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_getSparseCasesOnInfo___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEqHEqLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
static const lean_ctor_object l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(2, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "splitSparseCasesOn"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Major premise is not a constructor application:"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Not enough arguments for sparse casesOn application"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_unfoldDefinition___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0_value;
static const lean_closure_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__2_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Match"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchEqs"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 1, 225, 180, 135, 246, 184, 244)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__4_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 82, 91, 15, 164, 75, 57)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__7_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__8 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__8_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Not a sparse casesOn application"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__11 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__11_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Not a const application"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__13 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__13_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_reduceSparseCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Target not an equality"};
static const lean_object* l_Lean_Meta_reduceSparseCasesOn___closed__0 = (const lean_object*)&l_Lean_Meta_reduceSparseCasesOn___closed__0_value;
static lean_once_cell_t l_Lean_Meta_reduceSparseCasesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_reduceSparseCasesOn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceSparseCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_splitSparseCasesOn_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Unexpected number of fields for catch-all branch: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3(lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Major premise is not a free variable:"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4(lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "splitSparseCasesOn failed"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "splitSparseCasesOn running on\n"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitSparseCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq(lean_object* v_goal_6_, lean_object* v_eq_7_, uint8_t v_symm_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v_goal_6_);
v___x_14_ = l_Lean_MVarId_getType(v_goal_6_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v_a_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_a_15_ = lean_ctor_get(v___x_14_, 0);
lean_inc(v_a_15_);
lean_dec_ref_known(v___x_14_, 1);
v___x_16_ = ((lean_object*)(l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___closed__0));
lean_inc(v_goal_6_);
v___x_17_ = l_Lean_MVarId_rewrite(v_goal_6_, v_a_15_, v_eq_7_, v_symm_8_, v___x_16_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v_eNew_19_; lean_object* v_eqProof_20_; lean_object* v___x_21_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_18_);
lean_dec_ref_known(v___x_17_, 1);
v_eNew_19_ = lean_ctor_get(v_a_18_, 0);
lean_inc_ref(v_eNew_19_);
v_eqProof_20_ = lean_ctor_get(v_a_18_, 1);
lean_inc_ref(v_eqProof_20_);
lean_dec(v_a_18_);
v___x_21_ = l_Lean_MVarId_replaceTargetEq(v_goal_6_, v_eNew_19_, v_eqProof_20_, v_a_9_, v_a_10_, v_a_11_, v_a_12_);
return v___x_21_;
}
else
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_29_; 
lean_dec(v_goal_6_);
v_a_22_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_29_ == 0)
{
v___x_24_ = v___x_17_;
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v___x_17_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_29_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_28_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
return v___x_27_;
}
}
}
}
else
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
lean_dec_ref(v_eq_7_);
lean_dec(v_goal_6_);
v_a_30_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_14_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_14_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq___boxed(lean_object* v_goal_38_, lean_object* v_eq_39_, lean_object* v_symm_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
uint8_t v_symm_boxed_46_; lean_object* v_res_47_; 
v_symm_boxed_46_ = lean_unbox(v_symm_40_);
v_res_47_ = l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq(v_goal_38_, v_eq_39_, v_symm_boxed_46_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
return v_res_47_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_unsigned_to_nat(32u);
v___x_49_ = lean_mk_empty_array_with_capacity(v___x_48_);
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_51_ = ((size_t)5ULL);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_unsigned_to_nat(32u);
v___x_54_ = lean_mk_empty_array_with_capacity(v___x_53_);
v___x_55_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__0);
v___x_56_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
lean_ctor_set(v___x_56_, 2, v___x_52_);
lean_ctor_set(v___x_56_, 3, v___x_52_);
lean_ctor_set_usize(v___x_56_, 4, v___x_51_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(lean_object* v___y_57_){
_start:
{
lean_object* v___x_59_; lean_object* v_traceState_60_; lean_object* v_traces_61_; lean_object* v___x_62_; lean_object* v_traceState_63_; lean_object* v_env_64_; lean_object* v_nextMacroScope_65_; lean_object* v_ngen_66_; lean_object* v_auxDeclNGen_67_; lean_object* v_cache_68_; lean_object* v_messages_69_; lean_object* v_infoState_70_; lean_object* v_snapshotTasks_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_90_; 
v___x_59_ = lean_st_ref_get(v___y_57_);
v_traceState_60_ = lean_ctor_get(v___x_59_, 4);
lean_inc_ref(v_traceState_60_);
lean_dec(v___x_59_);
v_traces_61_ = lean_ctor_get(v_traceState_60_, 0);
lean_inc_ref(v_traces_61_);
lean_dec_ref(v_traceState_60_);
v___x_62_ = lean_st_ref_take(v___y_57_);
v_traceState_63_ = lean_ctor_get(v___x_62_, 4);
v_env_64_ = lean_ctor_get(v___x_62_, 0);
v_nextMacroScope_65_ = lean_ctor_get(v___x_62_, 1);
v_ngen_66_ = lean_ctor_get(v___x_62_, 2);
v_auxDeclNGen_67_ = lean_ctor_get(v___x_62_, 3);
v_cache_68_ = lean_ctor_get(v___x_62_, 5);
v_messages_69_ = lean_ctor_get(v___x_62_, 6);
v_infoState_70_ = lean_ctor_get(v___x_62_, 7);
v_snapshotTasks_71_ = lean_ctor_get(v___x_62_, 8);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_62_);
if (v_isSharedCheck_90_ == 0)
{
v___x_73_ = v___x_62_;
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_snapshotTasks_71_);
lean_inc(v_infoState_70_);
lean_inc(v_messages_69_);
lean_inc(v_cache_68_);
lean_inc(v_traceState_63_);
lean_inc(v_auxDeclNGen_67_);
lean_inc(v_ngen_66_);
lean_inc(v_nextMacroScope_65_);
lean_inc(v_env_64_);
lean_dec(v___x_62_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
uint64_t v_tid_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_88_; 
v_tid_75_ = lean_ctor_get_uint64(v_traceState_63_, sizeof(void*)*1);
v_isSharedCheck_88_ = !lean_is_exclusive(v_traceState_63_);
if (v_isSharedCheck_88_ == 0)
{
lean_object* v_unused_89_; 
v_unused_89_ = lean_ctor_get(v_traceState_63_, 0);
lean_dec(v_unused_89_);
v___x_77_ = v_traceState_63_;
v_isShared_78_ = v_isSharedCheck_88_;
goto v_resetjp_76_;
}
else
{
lean_dec(v_traceState_63_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_88_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_79_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___closed__1);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v___x_79_);
v___x_81_ = v___x_77_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_79_);
lean_ctor_set_uint64(v_reuseFailAlloc_87_, sizeof(void*)*1, v_tid_75_);
v___x_81_ = v_reuseFailAlloc_87_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_83_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_81_);
v___x_83_ = v___x_73_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_env_64_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_nextMacroScope_65_);
lean_ctor_set(v_reuseFailAlloc_86_, 2, v_ngen_66_);
lean_ctor_set(v_reuseFailAlloc_86_, 3, v_auxDeclNGen_67_);
lean_ctor_set(v_reuseFailAlloc_86_, 4, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_86_, 5, v_cache_68_);
lean_ctor_set(v_reuseFailAlloc_86_, 6, v_messages_69_);
lean_ctor_set(v_reuseFailAlloc_86_, 7, v_infoState_70_);
lean_ctor_set(v_reuseFailAlloc_86_, 8, v_snapshotTasks_71_);
v___x_83_ = v_reuseFailAlloc_86_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_st_ref_put(v___y_57_, v___x_83_);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v_traces_61_);
return v___x_85_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg___boxed(lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(v___y_91_);
lean_dec(v___y_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4(lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___boxed(lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4(v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
return v_res_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(lean_object* v_opts_106_, lean_object* v_opt_107_){
_start:
{
lean_object* v_name_108_; lean_object* v_defValue_109_; lean_object* v_map_110_; lean_object* v___x_111_; 
v_name_108_ = lean_ctor_get(v_opt_107_, 0);
v_defValue_109_ = lean_ctor_get(v_opt_107_, 1);
v_map_110_ = lean_ctor_get(v_opts_106_, 0);
v___x_111_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_110_, v_name_108_);
if (lean_obj_tag(v___x_111_) == 0)
{
uint8_t v___x_112_; 
v___x_112_ = lean_unbox(v_defValue_109_);
return v___x_112_;
}
else
{
lean_object* v_val_113_; 
v_val_113_ = lean_ctor_get(v___x_111_, 0);
lean_inc(v_val_113_);
lean_dec_ref_known(v___x_111_, 1);
if (lean_obj_tag(v_val_113_) == 1)
{
uint8_t v_v_114_; 
v_v_114_ = lean_ctor_get_uint8(v_val_113_, 0);
lean_dec_ref_known(v_val_113_, 0);
return v_v_114_;
}
else
{
uint8_t v___x_115_; 
lean_dec(v_val_113_);
v___x_115_ = lean_unbox(v_defValue_109_);
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5___boxed(lean_object* v_opts_116_, lean_object* v_opt_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_opts_116_, v_opt_117_);
lean_dec_ref(v_opt_117_);
lean_dec_ref(v_opts_116_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__0));
v___x_122_ = l_Lean_stringToMessageData(v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0(lean_object* v_x_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___closed__1);
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0___boxed(lean_object* v_x_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__0(v_x_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec_ref(v_x_131_);
return v_res_137_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2(lean_object* v_a_138_, lean_object* v_as_139_, size_t v_i_140_, size_t v_stop_141_){
_start:
{
uint8_t v___x_142_; 
v___x_142_ = lean_usize_dec_eq(v_i_140_, v_stop_141_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = lean_array_uget_borrowed(v_as_139_, v_i_140_);
v___x_144_ = lean_name_eq(v_a_138_, v___x_143_);
if (v___x_144_ == 0)
{
size_t v___x_145_; size_t v___x_146_; 
v___x_145_ = ((size_t)1ULL);
v___x_146_ = lean_usize_add(v_i_140_, v___x_145_);
v_i_140_ = v___x_146_;
goto _start;
}
else
{
return v___x_144_;
}
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 0;
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2___boxed(lean_object* v_a_149_, lean_object* v_as_150_, lean_object* v_i_151_, lean_object* v_stop_152_){
_start:
{
size_t v_i_boxed_153_; size_t v_stop_boxed_154_; uint8_t v_res_155_; lean_object* v_r_156_; 
v_i_boxed_153_ = lean_unbox_usize(v_i_151_);
lean_dec(v_i_151_);
v_stop_boxed_154_ = lean_unbox_usize(v_stop_152_);
lean_dec(v_stop_152_);
v_res_155_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2(v_a_149_, v_as_150_, v_i_boxed_153_, v_stop_boxed_154_);
lean_dec_ref(v_as_150_);
lean_dec(v_a_149_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1(lean_object* v_as_157_, lean_object* v_a_158_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_array_get_size(v_as_157_);
v___x_161_ = lean_nat_dec_lt(v___x_159_, v___x_160_);
if (v___x_161_ == 0)
{
return v___x_161_;
}
else
{
if (v___x_161_ == 0)
{
return v___x_161_;
}
else
{
size_t v___x_162_; size_t v___x_163_; uint8_t v___x_164_; 
v___x_162_ = ((size_t)0ULL);
v___x_163_ = lean_usize_of_nat(v___x_160_);
v___x_164_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1_spec__2(v_a_158_, v_as_157_, v___x_162_, v___x_163_);
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1___boxed(lean_object* v_as_165_, lean_object* v_a_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1(v_as_165_, v_a_166_);
lean_dec(v_a_166_);
lean_dec_ref(v_as_165_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_instMonadEIO___redArg();
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0(lean_object* v_msg_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v_toApplicative_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_243_; 
v___x_180_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__0);
v___x_181_ = l_StateRefT_x27_instMonad___redArg(v___x_180_);
v_toApplicative_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v___x_181_, 1);
lean_dec(v_unused_244_);
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_243_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_toApplicative_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_243_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_toFunctor_186_; lean_object* v_toSeq_187_; lean_object* v_toSeqLeft_188_; lean_object* v_toSeqRight_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_241_; 
v_toFunctor_186_ = lean_ctor_get(v_toApplicative_182_, 0);
v_toSeq_187_ = lean_ctor_get(v_toApplicative_182_, 2);
v_toSeqLeft_188_ = lean_ctor_get(v_toApplicative_182_, 3);
v_toSeqRight_189_ = lean_ctor_get(v_toApplicative_182_, 4);
v_isSharedCheck_241_ = !lean_is_exclusive(v_toApplicative_182_);
if (v_isSharedCheck_241_ == 0)
{
lean_object* v_unused_242_; 
v_unused_242_ = lean_ctor_get(v_toApplicative_182_, 1);
lean_dec(v_unused_242_);
v___x_191_ = v_toApplicative_182_;
v_isShared_192_ = v_isSharedCheck_241_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_toSeqRight_189_);
lean_inc(v_toSeqLeft_188_);
lean_inc(v_toSeq_187_);
lean_inc(v_toFunctor_186_);
lean_dec(v_toApplicative_182_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_241_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___x_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___f_200_; lean_object* v___x_202_; 
v___f_193_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__1));
v___f_194_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_186_);
v___f_195_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_195_, 0, v_toFunctor_186_);
v___f_196_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_196_, 0, v_toFunctor_186_);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v___f_195_);
lean_ctor_set(v___x_197_, 1, v___f_196_);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_198_, 0, v_toSeqRight_189_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_199_, 0, v_toSeqLeft_188_);
v___f_200_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_200_, 0, v_toSeq_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 4, v___f_198_);
lean_ctor_set(v___x_191_, 3, v___f_199_);
lean_ctor_set(v___x_191_, 2, v___f_200_);
lean_ctor_set(v___x_191_, 1, v___f_193_);
lean_ctor_set(v___x_191_, 0, v___x_197_);
v___x_202_ = v___x_191_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___f_193_);
lean_ctor_set(v_reuseFailAlloc_240_, 2, v___f_200_);
lean_ctor_set(v_reuseFailAlloc_240_, 3, v___f_199_);
lean_ctor_set(v_reuseFailAlloc_240_, 4, v___f_198_);
v___x_202_ = v_reuseFailAlloc_240_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_204_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 1, v___f_194_);
lean_ctor_set(v___x_184_, 0, v___x_202_);
v___x_204_ = v___x_184_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___f_194_);
v___x_204_ = v_reuseFailAlloc_239_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; lean_object* v_toApplicative_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_237_; 
v___x_205_ = l_StateRefT_x27_instMonad___redArg(v___x_204_);
v_toApplicative_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v___x_205_, 1);
lean_dec(v_unused_238_);
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_toApplicative_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_toFunctor_210_; lean_object* v_toSeq_211_; lean_object* v_toSeqLeft_212_; lean_object* v_toSeqRight_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_235_; 
v_toFunctor_210_ = lean_ctor_get(v_toApplicative_206_, 0);
v_toSeq_211_ = lean_ctor_get(v_toApplicative_206_, 2);
v_toSeqLeft_212_ = lean_ctor_get(v_toApplicative_206_, 3);
v_toSeqRight_213_ = lean_ctor_get(v_toApplicative_206_, 4);
v_isSharedCheck_235_ = !lean_is_exclusive(v_toApplicative_206_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v_toApplicative_206_, 1);
lean_dec(v_unused_236_);
v___x_215_ = v_toApplicative_206_;
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_toSeqRight_213_);
lean_inc(v_toSeqLeft_212_);
lean_inc(v_toSeq_211_);
lean_inc(v_toFunctor_210_);
lean_dec(v_toApplicative_206_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___x_226_; 
v___f_217_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__3));
v___f_218_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_210_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_219_, 0, v_toFunctor_210_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_220_, 0, v_toFunctor_210_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___f_219_);
lean_ctor_set(v___x_221_, 1, v___f_220_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_222_, 0, v_toSeqRight_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeqLeft_212_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_224_, 0, v_toSeq_211_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 4, v___f_222_);
lean_ctor_set(v___x_215_, 3, v___f_223_);
lean_ctor_set(v___x_215_, 2, v___f_224_);
lean_ctor_set(v___x_215_, 1, v___f_217_);
lean_ctor_set(v___x_215_, 0, v___x_221_);
v___x_226_ = v___x_215_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___f_217_);
lean_ctor_set(v_reuseFailAlloc_234_, 2, v___f_224_);
lean_ctor_set(v_reuseFailAlloc_234_, 3, v___f_223_);
lean_ctor_set(v_reuseFailAlloc_234_, 4, v___f_222_);
v___x_226_ = v_reuseFailAlloc_234_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_228_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___f_218_);
lean_ctor_set(v___x_208_, 0, v___x_226_);
v___x_228_ = v___x_208_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v___f_218_);
v___x_228_ = v_reuseFailAlloc_233_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_10549__overap_231_; lean_object* v___x_232_; 
v___x_229_ = lean_box(0);
v___x_230_ = l_instInhabitedOfMonad___redArg(v___x_228_, v___x_229_);
v___x_10549__overap_231_ = lean_panic_fn_borrowed(v___x_230_, v_msg_174_);
lean_dec(v___x_230_);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
v___x_232_ = lean_apply_5(v___x_10549__overap_231_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, lean_box(0));
return v___x_232_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0(v_msg_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(lean_object* v_msgData_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; lean_object* v_env_259_; lean_object* v___x_260_; lean_object* v_toCold_261_; lean_object* v_mctx_262_; lean_object* v_lctx_263_; lean_object* v_options_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_258_ = lean_st_ref_get(v___y_256_);
v_env_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc_ref(v_env_259_);
lean_dec(v___x_258_);
v___x_260_ = lean_st_ref_get(v___y_254_);
v_toCold_261_ = lean_ctor_get(v___y_255_, 0);
v_mctx_262_ = lean_ctor_get(v___x_260_, 0);
lean_inc_ref(v_mctx_262_);
lean_dec(v___x_260_);
v_lctx_263_ = lean_ctor_get(v___y_253_, 2);
v_options_264_ = lean_ctor_get(v_toCold_261_, 2);
lean_inc_ref(v_options_264_);
lean_inc_ref(v_lctx_263_);
v___x_265_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_265_, 0, v_env_259_);
lean_ctor_set(v___x_265_, 1, v_mctx_262_);
lean_ctor_set(v___x_265_, 2, v_lctx_263_);
lean_ctor_set(v___x_265_, 3, v_options_264_);
v___x_266_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_msgData_252_);
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5___boxed(lean_object* v_msgData_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(v_msgData_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(lean_object* v_msg_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_ref_281_; lean_object* v___x_282_; lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_291_; 
v_ref_281_ = lean_ctor_get(v___y_278_, 2);
v___x_282_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(v_msg_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_291_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
lean_inc(v_ref_281_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v_ref_281_);
lean_ctor_set(v___x_287_, 1, v_a_283_);
if (v_isShared_286_ == 0)
{
lean_ctor_set_tag(v___x_285_, 1);
lean_ctor_set(v___x_285_, 0, v___x_287_);
v___x_289_ = v___x_285_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg___boxed(lean_object* v_msg_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v_msg_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
return v_res_298_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__0));
v___x_301_ = l_Lean_stringToMessageData(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__2));
v___x_304_ = l_Lean_stringToMessageData(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_308_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__6));
v___x_309_ = lean_unsigned_to_nat(11u);
v___x_310_ = lean_unsigned_to_nat(122u);
v___x_311_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__5));
v___x_312_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__4));
v___x_313_ = l_mkPanicMessageWithDecl(v___x_312_, v___x_311_, v___x_310_, v___x_309_, v___x_308_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0(lean_object* v_constName_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___x_328_; lean_object* v_env_329_; uint8_t v___x_330_; lean_object* v___x_331_; 
v___x_328_ = lean_st_ref_get(v___y_318_);
v_env_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc_ref(v_env_329_);
lean_dec(v___x_328_);
v___x_330_ = 0;
lean_inc(v_constName_314_);
v___x_331_ = l_Lean_Environment_findAsync_x3f(v_env_329_, v_constName_314_, v___x_330_);
if (lean_obj_tag(v___x_331_) == 1)
{
lean_object* v_val_332_; uint8_t v_kind_333_; 
v_val_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_val_332_);
lean_dec_ref_known(v___x_331_, 1);
v_kind_333_ = lean_ctor_get_uint8(v_val_332_, sizeof(void*)*3);
if (v_kind_333_ == 6)
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_332_);
if (lean_obj_tag(v___x_334_) == 6)
{
lean_object* v_val_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
lean_dec(v_constName_314_);
v_val_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_val_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set_tag(v___x_337_, 0);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_val_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec_ref(v___x_334_);
v___x_343_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__7);
v___x_344_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0_spec__0(v___x_343_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_353_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_353_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_353_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
if (lean_obj_tag(v_a_345_) == 0)
{
lean_del_object(v___x_347_);
goto v___jp_320_;
}
else
{
lean_object* v_val_349_; lean_object* v___x_351_; 
lean_dec(v_constName_314_);
v_val_349_ = lean_ctor_get(v_a_345_, 0);
lean_inc(v_val_349_);
lean_dec_ref_known(v_a_345_, 1);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v_val_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_val_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec(v_constName_314_);
v_a_354_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_344_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_344_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
else
{
lean_dec(v_val_332_);
goto v___jp_320_;
}
}
else
{
lean_dec(v___x_331_);
goto v___jp_320_;
}
v___jp_320_:
{
lean_object* v___x_321_; uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_321_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__1);
v___x_322_ = 0;
v___x_323_ = l_Lean_MessageData_ofConstName(v_constName_314_, v___x_322_);
v___x_324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_321_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___closed__3);
v___x_326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_326_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0___boxed(lean_object* v_constName_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0(v_constName_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2(size_t v_sz_369_, size_t v_i_370_, lean_object* v_bs_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = lean_usize_dec_lt(v_i_370_, v_sz_369_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_unsafeCast___redArg(v_bs_371_);
lean_dec_ref(v_bs_371_);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
return v___x_379_;
}
else
{
lean_object* v_v_380_; lean_object* v___x_381_; lean_object* v_bs_x27_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_v_380_ = lean_array_uget(v_bs_371_, v_i_370_);
v___x_381_ = lean_unsigned_to_nat(0u);
v_bs_x27_382_ = lean_array_uset(v_bs_371_, v_i_370_, v___x_381_);
v___x_383_ = l_unsafeCast___redArg(v_v_380_);
lean_dec(v_v_380_);
v___x_384_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_reduceSparseCasesOn_spec__0(v___x_383_, v___y_372_, v___y_373_, v___y_374_, v___y_375_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v_cidx_386_; size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_384_, 1);
v_cidx_386_ = lean_ctor_get(v_a_385_, 2);
lean_inc(v_cidx_386_);
lean_dec(v_a_385_);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_add(v_i_370_, v___x_387_);
v___x_389_ = l_unsafeCast___redArg(v_cidx_386_);
lean_dec(v_cidx_386_);
v___x_390_ = lean_array_uset(v_bs_x27_382_, v_i_370_, v___x_389_);
v_i_370_ = v___x_388_;
v_bs_371_ = v___x_390_;
goto _start;
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec_ref(v_bs_x27_382_);
v_a_392_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_384_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_384_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2___boxed(lean_object* v_sz_400_, lean_object* v_i_401_, lean_object* v_bs_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
size_t v_sz_boxed_408_; size_t v_i_boxed_409_; lean_object* v_res_410_; 
v_sz_boxed_408_ = lean_unbox_usize(v_sz_400_);
lean_dec(v_sz_400_);
v_i_boxed_409_ = lean_unbox_usize(v_i_401_);
lean_dec(v_i_401_);
v_res_410_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2(v_sz_boxed_408_, v_i_boxed_409_, v_bs_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_410_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_box(0);
v___x_412_ = l_unsafeCast___redArg(v___x_411_);
return v___x_412_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1(void){
_start:
{
lean_object* v___x_413_; lean_object* v_dummy_414_; 
v___x_413_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__0);
v_dummy_414_ = l_Lean_Expr_sort___override(v___x_413_);
return v_dummy_414_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__2));
v___x_417_ = l_Lean_stringToMessageData(v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1(lean_object* v___x_420_, lean_object* v_x_421_, lean_object* v_majorPos_422_, lean_object* v_insterestingCtors_423_, lean_object* v_declName_424_, lean_object* v_snd_425_, lean_object* v_arity_426_, lean_object* v_mvarId_427_, lean_object* v___f_428_, lean_object* v_____r_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_array_get_borrowed(v___x_420_, v_x_421_, v_majorPos_422_);
lean_inc(v___x_435_);
v___x_436_ = l_Lean_Meta_isConstructorApp_x27_x3f(v___x_435_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_436_, 1);
if (lean_obj_tag(v_a_437_) == 1)
{
lean_object* v_val_438_; lean_object* v_toConstantVal_439_; lean_object* v_cidx_440_; lean_object* v_name_441_; uint8_t v___x_442_; 
v_val_438_ = lean_ctor_get(v_a_437_, 0);
lean_inc(v_val_438_);
lean_dec_ref_known(v_a_437_, 1);
v_toConstantVal_439_ = lean_ctor_get(v_val_438_, 0);
lean_inc_ref(v_toConstantVal_439_);
v_cidx_440_ = lean_ctor_get(v_val_438_, 2);
lean_inc(v_cidx_440_);
lean_dec(v_val_438_);
v_name_441_ = lean_ctor_get(v_toConstantVal_439_, 0);
lean_inc(v_name_441_);
lean_dec_ref(v_toConstantVal_439_);
v___x_442_ = l_Array_contains___at___00Lean_Meta_reduceSparseCasesOn_spec__1(v_insterestingCtors_423_, v_name_441_);
lean_dec(v_name_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; 
lean_dec_ref(v___f_428_);
v___x_443_ = l_Lean_Meta_getSparseCasesOnEq(v_declName_424_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_dummy_448_; lean_object* v_nargs_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; size_t v_sz_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_13461__overap_463_; lean_object* v___x_464_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v___x_445_ = l_Lean_Expr_getAppFn(v_snd_425_);
v___x_446_ = l_Lean_Expr_constLevels_x21(v___x_445_);
lean_dec_ref(v___x_445_);
v___x_447_ = l_Lean_mkConst(v_a_444_, v___x_446_);
v_dummy_448_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1);
v_nargs_449_ = l_Lean_Expr_getAppNumArgs(v_snd_425_);
lean_inc(v_nargs_449_);
v___x_450_ = lean_mk_array(v_nargs_449_, v_dummy_448_);
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_sub(v_nargs_449_, v___x_451_);
lean_dec(v_nargs_449_);
v___x_453_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_snd_425_, v___x_450_, v___x_452_);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = l_Array_toSubarray___redArg(v___x_453_, v___x_454_, v_arity_426_);
v___x_456_ = l_Subarray_copy___redArg(v___x_455_);
v___x_457_ = l_Lean_mkAppN(v___x_447_, v___x_456_);
lean_dec_ref(v___x_456_);
v_sz_458_ = lean_array_size(v_insterestingCtors_423_);
v___x_459_ = l_unsafeCast___redArg(v_insterestingCtors_423_);
v___x_460_ = lean_box_usize(v_sz_458_);
v___x_461_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1));
v___x_462_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_reduceSparseCasesOn_spec__2___boxed), 8, 3);
lean_closure_set(v___x_462_, 0, v___x_460_);
lean_closure_set(v___x_462_, 1, v___x_461_);
lean_closure_set(v___x_462_, 2, v___x_459_);
v___x_13461__overap_463_ = l_unsafeCast___redArg(v___x_462_);
lean_dec_ref(v___x_462_);
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___x_464_ = lean_apply_5(v___x_13461__overap_463_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, lean_box(0));
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = l_Lean_mkRawNatLit(v_cidx_440_);
v___x_467_ = l_Lean_mkHasNotBitProof(v___x_466_, v_a_465_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v_a_465_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v___x_469_ = l_Lean_Expr_app___override(v___x_457_, v_a_468_);
v___x_470_ = l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq(v_mvarId_427_, v___x_469_, v___x_442_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_480_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_480_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_480_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_480_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_451_);
v___x_476_ = lean_array_push(v___x_475_, v_a_471_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_476_);
v___x_478_ = v___x_473_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_470_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_470_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref(v___x_457_);
lean_dec(v_mvarId_427_);
v_a_489_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_467_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_467_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref(v___x_457_);
lean_dec(v_cidx_440_);
lean_dec(v_mvarId_427_);
v_a_497_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_464_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_464_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_dec(v_cidx_440_);
lean_dec(v_mvarId_427_);
lean_dec(v_arity_426_);
lean_dec_ref(v_snd_425_);
v_a_505_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_443_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_443_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
else
{
lean_object* v___x_513_; 
lean_dec(v_cidx_440_);
lean_dec(v_arity_426_);
lean_dec_ref(v_snd_425_);
lean_dec(v_declName_424_);
v___x_513_ = l_Lean_MVarId_modifyTargetEqLHS(v_mvarId_427_, v___f_428_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_524_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_524_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_524_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_524_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_518_ = lean_unsigned_to_nat(1u);
v___x_519_ = lean_mk_empty_array_with_capacity(v___x_518_);
v___x_520_ = lean_array_push(v___x_519_, v_a_514_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_520_);
v___x_522_ = v___x_516_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
v_a_525_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_513_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_513_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v_a_437_);
lean_dec_ref(v___f_428_);
lean_dec(v_mvarId_427_);
lean_dec(v_arity_426_);
lean_dec_ref(v_snd_425_);
lean_dec(v_declName_424_);
v___x_533_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__3);
lean_inc(v___x_435_);
v___x_534_ = l_Lean_indentExpr(v___x_435_);
v___x_535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_535_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
return v___x_536_;
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v___f_428_);
lean_dec(v_mvarId_427_);
lean_dec(v_arity_426_);
lean_dec_ref(v_snd_425_);
lean_dec(v_declName_424_);
v_a_537_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_436_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_436_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed(lean_object* v___x_545_, lean_object* v_x_546_, lean_object* v_majorPos_547_, lean_object* v_insterestingCtors_548_, lean_object* v_declName_549_, lean_object* v_snd_550_, lean_object* v_arity_551_, lean_object* v_mvarId_552_, lean_object* v___f_553_, lean_object* v_____r_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1(v___x_545_, v_x_546_, v_majorPos_547_, v_insterestingCtors_548_, v_declName_549_, v_snd_550_, v_arity_551_, v_mvarId_552_, v___f_553_, v_____r_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec_ref(v_insterestingCtors_548_);
lean_dec(v_majorPos_547_);
lean_dec_ref(v_x_546_);
lean_dec_ref(v___x_545_);
return v_res_560_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__0));
v___x_563_ = l_Lean_stringToMessageData(v___x_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(uint8_t v___x_564_, lean_object* v___f_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
if (v___x_564_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_box(0);
lean_inc(v___y_569_);
lean_inc_ref(v___y_568_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
v___x_572_ = lean_apply_6(v___f_565_, v___x_571_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, lean_box(0));
return v___x_572_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
lean_dec_ref(v___f_565_);
v___x_573_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1);
v___x_574_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_573_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___boxed(lean_object* v___x_583_, lean_object* v___f_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
uint8_t v___x_14346__boxed_590_; lean_object* v_res_591_; 
v___x_14346__boxed_590_ = lean_unbox(v___x_583_);
v_res_591_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(v___x_14346__boxed_590_, v___f_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
return v_res_591_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11(lean_object* v_e_592_){
_start:
{
if (lean_obj_tag(v_e_592_) == 0)
{
uint8_t v___x_593_; 
v___x_593_ = 2;
return v___x_593_;
}
else
{
uint8_t v___x_594_; 
v___x_594_ = 0;
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11___boxed(lean_object* v_e_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11(v_e_595_);
lean_dec_ref(v_e_595_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12(lean_object* v_opts_598_, lean_object* v_opt_599_){
_start:
{
lean_object* v_name_600_; lean_object* v_defValue_601_; lean_object* v_map_602_; lean_object* v___x_603_; 
v_name_600_ = lean_ctor_get(v_opt_599_, 0);
v_defValue_601_ = lean_ctor_get(v_opt_599_, 1);
v_map_602_ = lean_ctor_get(v_opts_598_, 0);
v___x_603_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_602_, v_name_600_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_inc(v_defValue_601_);
return v_defValue_601_;
}
else
{
lean_object* v_val_604_; 
v_val_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_val_604_);
lean_dec_ref_known(v___x_603_, 1);
if (lean_obj_tag(v_val_604_) == 3)
{
lean_object* v_v_605_; 
v_v_605_ = lean_ctor_get(v_val_604_, 0);
lean_inc(v_v_605_);
lean_dec_ref_known(v_val_604_, 1);
return v_v_605_;
}
else
{
lean_dec(v_val_604_);
lean_inc(v_defValue_601_);
return v_defValue_601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12___boxed(lean_object* v_opts_606_, lean_object* v_opt_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12(v_opts_606_, v_opt_607_);
lean_dec_ref(v_opt_607_);
lean_dec_ref(v_opts_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(lean_object* v_x_609_){
_start:
{
if (lean_obj_tag(v_x_609_) == 0)
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v_x_609_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v_x_609_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v_x_609_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v_x_609_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 1);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
v_a_619_ = lean_ctor_get(v_x_609_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v_x_609_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v_x_609_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v_x_609_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 0);
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg___boxed(lean_object* v_x_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(v_x_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10(size_t v_sz_630_, size_t v_i_631_, lean_object* v_bs_632_){
_start:
{
uint8_t v___x_633_; 
v___x_633_ = lean_usize_dec_lt(v_i_631_, v_sz_630_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; 
v___x_634_ = l_unsafeCast___redArg(v_bs_632_);
lean_dec_ref(v_bs_632_);
return v___x_634_;
}
else
{
lean_object* v_v_635_; lean_object* v___x_636_; lean_object* v_msg_637_; lean_object* v___x_638_; lean_object* v_bs_x27_639_; size_t v___x_640_; size_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_v_635_ = lean_array_uget_borrowed(v_bs_632_, v_i_631_);
v___x_636_ = l_unsafeCast___redArg(v_v_635_);
v_msg_637_ = lean_ctor_get(v___x_636_, 1);
lean_inc_ref(v_msg_637_);
lean_dec(v___x_636_);
v___x_638_ = lean_unsigned_to_nat(0u);
v_bs_x27_639_ = lean_array_uset(v_bs_632_, v_i_631_, v___x_638_);
v___x_640_ = ((size_t)1ULL);
v___x_641_ = lean_usize_add(v_i_631_, v___x_640_);
v___x_642_ = l_unsafeCast___redArg(v_msg_637_);
lean_dec_ref(v_msg_637_);
v___x_643_ = lean_array_uset(v_bs_x27_639_, v_i_631_, v___x_642_);
v_i_631_ = v___x_641_;
v_bs_632_ = v___x_643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10___boxed(lean_object* v_sz_645_, lean_object* v_i_646_, lean_object* v_bs_647_){
_start:
{
size_t v_sz_boxed_648_; size_t v_i_boxed_649_; lean_object* v_res_650_; 
v_sz_boxed_648_ = lean_unbox_usize(v_sz_645_);
lean_dec(v_sz_645_);
v_i_boxed_649_ = lean_unbox_usize(v_i_646_);
lean_dec(v_i_646_);
v_res_650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10(v_sz_boxed_648_, v_i_boxed_649_, v_bs_647_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9(lean_object* v_oldTraces_651_, lean_object* v_data_652_, lean_object* v_ref_653_, lean_object* v_msg_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_toCold_660_; lean_object* v_currRecDepth_661_; lean_object* v_ref_662_; uint8_t v_diag_663_; uint8_t v_suppressElabErrors_664_; lean_object* v_ref_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_traceState_668_; lean_object* v_traces_669_; lean_object* v___x_670_; size_t v_sz_671_; size_t v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_msg_676_; lean_object* v___x_677_; lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_715_; 
v_toCold_660_ = lean_ctor_get(v___y_657_, 0);
v_currRecDepth_661_ = lean_ctor_get(v___y_657_, 1);
v_ref_662_ = lean_ctor_get(v___y_657_, 2);
v_diag_663_ = lean_ctor_get_uint8(v___y_657_, sizeof(void*)*3);
v_suppressElabErrors_664_ = lean_ctor_get_uint8(v___y_657_, sizeof(void*)*3 + 1);
v_ref_665_ = l_Lean_replaceRef(v_ref_653_, v_ref_662_);
lean_inc(v_currRecDepth_661_);
lean_inc_ref(v_toCold_660_);
v___x_666_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_666_, 0, v_toCold_660_);
lean_ctor_set(v___x_666_, 1, v_currRecDepth_661_);
lean_ctor_set(v___x_666_, 2, v_ref_665_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*3, v_diag_663_);
lean_ctor_set_uint8(v___x_666_, sizeof(void*)*3 + 1, v_suppressElabErrors_664_);
v___x_667_ = lean_st_ref_get(v___y_658_);
v_traceState_668_ = lean_ctor_get(v___x_667_, 4);
lean_inc_ref(v_traceState_668_);
lean_dec(v___x_667_);
v_traces_669_ = lean_ctor_get(v_traceState_668_, 0);
lean_inc_ref(v_traces_669_);
lean_dec_ref(v_traceState_668_);
v___x_670_ = l_Lean_PersistentArray_toArray___redArg(v_traces_669_);
lean_dec_ref(v_traces_669_);
v_sz_671_ = lean_array_size(v___x_670_);
v___x_672_ = ((size_t)0ULL);
v___x_673_ = l_unsafeCast___redArg(v___x_670_);
lean_dec_ref(v___x_670_);
v___x_674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9_spec__10(v_sz_671_, v___x_672_, v___x_673_);
v___x_675_ = l_unsafeCast___redArg(v___x_674_);
lean_dec_ref(v___x_674_);
v_msg_676_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_676_, 0, v_data_652_);
lean_ctor_set(v_msg_676_, 1, v_msg_654_);
lean_ctor_set(v_msg_676_, 2, v___x_675_);
v___x_677_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(v_msg_676_, v___y_655_, v___y_656_, v___x_666_, v___y_658_);
lean_dec_ref_known(v___x_666_, 3);
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_715_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_715_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_715_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v_traceState_683_; lean_object* v_env_684_; lean_object* v_nextMacroScope_685_; lean_object* v_ngen_686_; lean_object* v_auxDeclNGen_687_; lean_object* v_cache_688_; lean_object* v_messages_689_; lean_object* v_infoState_690_; lean_object* v_snapshotTasks_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_714_; 
v___x_682_ = lean_st_ref_take(v___y_658_);
v_traceState_683_ = lean_ctor_get(v___x_682_, 4);
v_env_684_ = lean_ctor_get(v___x_682_, 0);
v_nextMacroScope_685_ = lean_ctor_get(v___x_682_, 1);
v_ngen_686_ = lean_ctor_get(v___x_682_, 2);
v_auxDeclNGen_687_ = lean_ctor_get(v___x_682_, 3);
v_cache_688_ = lean_ctor_get(v___x_682_, 5);
v_messages_689_ = lean_ctor_get(v___x_682_, 6);
v_infoState_690_ = lean_ctor_get(v___x_682_, 7);
v_snapshotTasks_691_ = lean_ctor_get(v___x_682_, 8);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_714_ == 0)
{
v___x_693_ = v___x_682_;
v_isShared_694_ = v_isSharedCheck_714_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_snapshotTasks_691_);
lean_inc(v_infoState_690_);
lean_inc(v_messages_689_);
lean_inc(v_cache_688_);
lean_inc(v_traceState_683_);
lean_inc(v_auxDeclNGen_687_);
lean_inc(v_ngen_686_);
lean_inc(v_nextMacroScope_685_);
lean_inc(v_env_684_);
lean_dec(v___x_682_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_714_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
uint64_t v_tid_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_712_; 
v_tid_695_ = lean_ctor_get_uint64(v_traceState_683_, sizeof(void*)*1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_traceState_683_);
if (v_isSharedCheck_712_ == 0)
{
lean_object* v_unused_713_; 
v_unused_713_ = lean_ctor_get(v_traceState_683_, 0);
lean_dec(v_unused_713_);
v___x_697_ = v_traceState_683_;
v_isShared_698_ = v_isSharedCheck_712_;
goto v_resetjp_696_;
}
else
{
lean_dec(v_traceState_683_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_712_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_699_ = lean_box(0);
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v_ref_653_);
lean_ctor_set(v___x_700_, 1, v_a_678_);
v___x_701_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_651_, v___x_700_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_701_);
v___x_703_ = v___x_697_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_701_);
lean_ctor_set_uint64(v_reuseFailAlloc_711_, sizeof(void*)*1, v_tid_695_);
v___x_703_ = v_reuseFailAlloc_711_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_705_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 4, v___x_703_);
v___x_705_ = v___x_693_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_env_684_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_nextMacroScope_685_);
lean_ctor_set(v_reuseFailAlloc_710_, 2, v_ngen_686_);
lean_ctor_set(v_reuseFailAlloc_710_, 3, v_auxDeclNGen_687_);
lean_ctor_set(v_reuseFailAlloc_710_, 4, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_710_, 5, v_cache_688_);
lean_ctor_set(v_reuseFailAlloc_710_, 6, v_messages_689_);
lean_ctor_set(v_reuseFailAlloc_710_, 7, v_infoState_690_);
lean_ctor_set(v_reuseFailAlloc_710_, 8, v_snapshotTasks_691_);
v___x_705_ = v_reuseFailAlloc_710_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_st_ref_put(v___y_658_, v___x_705_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_699_);
v___x_708_ = v___x_680_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_699_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9___boxed(lean_object* v_oldTraces_716_, lean_object* v_data_717_, lean_object* v_ref_718_, lean_object* v_msg_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9(v_oldTraces_716_, v_data_717_, v_ref_718_, v_msg_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
return v_res_725_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0(void){
_start:
{
lean_object* v___x_726_; double v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(0u);
v___x_727_ = lean_float_of_nat(v___x_726_);
return v___x_727_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__1));
v___x_730_ = l_Lean_stringToMessageData(v___x_729_);
return v___x_730_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3(void){
_start:
{
lean_object* v___x_731_; double v___x_732_; 
v___x_731_ = lean_unsigned_to_nat(1000u);
v___x_732_ = lean_float_of_nat(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(lean_object* v_cls_733_, uint8_t v_collapsed_734_, lean_object* v_tag_735_, lean_object* v_opts_736_, uint8_t v_clsEnabled_737_, lean_object* v_oldTraces_738_, lean_object* v_msg_739_, lean_object* v_resStartStop_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_fst_746_; lean_object* v_snd_747_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v_data_751_; lean_object* v_fst_762_; lean_object* v_snd_763_; lean_object* v___x_764_; uint8_t v___x_765_; lean_object* v___y_767_; lean_object* v_a_768_; uint8_t v___y_783_; double v___y_814_; 
v_fst_746_ = lean_ctor_get(v_resStartStop_740_, 0);
lean_inc(v_fst_746_);
v_snd_747_ = lean_ctor_get(v_resStartStop_740_, 1);
lean_inc(v_snd_747_);
lean_dec_ref(v_resStartStop_740_);
v_fst_762_ = lean_ctor_get(v_snd_747_, 0);
lean_inc(v_fst_762_);
v_snd_763_ = lean_ctor_get(v_snd_747_, 1);
lean_inc(v_snd_763_);
lean_dec(v_snd_747_);
v___x_764_ = l_Lean_trace_profiler;
v___x_765_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_opts_736_, v___x_764_);
if (v___x_765_ == 0)
{
v___y_783_ = v___x_765_;
goto v___jp_782_;
}
else
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = l_Lean_trace_profiler_useHeartbeats;
v___x_820_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_opts_736_, v___x_819_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; double v___x_823_; double v___x_824_; double v___x_825_; 
v___x_821_ = l_Lean_trace_profiler_threshold;
v___x_822_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12(v_opts_736_, v___x_821_);
v___x_823_ = lean_float_of_nat(v___x_822_);
v___x_824_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__3);
v___x_825_ = lean_float_div(v___x_823_, v___x_824_);
v___y_814_ = v___x_825_;
goto v___jp_813_;
}
else
{
lean_object* v___x_826_; lean_object* v___x_827_; double v___x_828_; 
v___x_826_ = l_Lean_trace_profiler_threshold;
v___x_827_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__12(v_opts_736_, v___x_826_);
v___x_828_ = lean_float_of_nat(v___x_827_);
v___y_814_ = v___x_828_;
goto v___jp_813_;
}
}
v___jp_748_:
{
lean_object* v___x_752_; 
lean_inc(v___y_749_);
v___x_752_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__9(v_oldTraces_738_, v_data_751_, v___y_749_, v___y_750_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v___x_753_; 
lean_dec_ref_known(v___x_752_, 1);
v___x_753_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(v_fst_746_);
return v___x_753_;
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_fst_746_);
v_a_754_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_752_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
v___jp_766_:
{
uint8_t v_result_769_; lean_object* v___x_770_; lean_object* v___x_771_; double v___x_772_; lean_object* v_data_773_; 
v_result_769_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__11(v_fst_746_);
v___x_770_ = lean_box(v_result_769_);
v___x_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
v___x_772_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0);
lean_inc_ref(v_tag_735_);
lean_inc_ref(v___x_771_);
lean_inc(v_cls_733_);
v_data_773_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_773_, 0, v_cls_733_);
lean_ctor_set(v_data_773_, 1, v___x_771_);
lean_ctor_set(v_data_773_, 2, v_tag_735_);
lean_ctor_set_float(v_data_773_, sizeof(void*)*3, v___x_772_);
lean_ctor_set_float(v_data_773_, sizeof(void*)*3 + 8, v___x_772_);
lean_ctor_set_uint8(v_data_773_, sizeof(void*)*3 + 16, v_collapsed_734_);
if (v___x_765_ == 0)
{
lean_dec_ref_known(v___x_771_, 1);
lean_dec(v_snd_763_);
lean_dec(v_fst_762_);
lean_dec_ref(v_tag_735_);
lean_dec(v_cls_733_);
v___y_749_ = v___y_767_;
v___y_750_ = v_a_768_;
v_data_751_ = v_data_773_;
goto v___jp_748_;
}
else
{
lean_object* v_data_774_; double v___x_775_; double v___x_776_; 
lean_dec_ref_known(v_data_773_, 3);
v_data_774_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_774_, 0, v_cls_733_);
lean_ctor_set(v_data_774_, 1, v___x_771_);
lean_ctor_set(v_data_774_, 2, v_tag_735_);
v___x_775_ = lean_unbox_float(v_fst_762_);
lean_dec(v_fst_762_);
lean_ctor_set_float(v_data_774_, sizeof(void*)*3, v___x_775_);
v___x_776_ = lean_unbox_float(v_snd_763_);
lean_dec(v_snd_763_);
lean_ctor_set_float(v_data_774_, sizeof(void*)*3 + 8, v___x_776_);
lean_ctor_set_uint8(v_data_774_, sizeof(void*)*3 + 16, v_collapsed_734_);
v___y_749_ = v___y_767_;
v___y_750_ = v_a_768_;
v_data_751_ = v_data_774_;
goto v___jp_748_;
}
}
v___jp_777_:
{
lean_object* v_ref_778_; lean_object* v___x_779_; 
v_ref_778_ = lean_ctor_get(v___y_743_, 2);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v_fst_746_);
v___x_779_ = lean_apply_6(v_msg_739_, v_fst_746_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, lean_box(0));
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___y_767_ = v_ref_778_;
v_a_768_ = v_a_780_;
goto v___jp_766_;
}
else
{
lean_object* v___x_781_; 
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__2);
v___y_767_ = v_ref_778_;
v_a_768_ = v___x_781_;
goto v___jp_766_;
}
}
v___jp_782_:
{
if (v_clsEnabled_737_ == 0)
{
if (v___y_783_ == 0)
{
lean_object* v___x_784_; lean_object* v_traceState_785_; lean_object* v_env_786_; lean_object* v_nextMacroScope_787_; lean_object* v_ngen_788_; lean_object* v_auxDeclNGen_789_; lean_object* v_cache_790_; lean_object* v_messages_791_; lean_object* v_infoState_792_; lean_object* v_snapshotTasks_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_812_; 
lean_dec(v_snd_763_);
lean_dec(v_fst_762_);
lean_dec_ref(v_msg_739_);
lean_dec_ref(v_tag_735_);
lean_dec(v_cls_733_);
v___x_784_ = lean_st_ref_take(v___y_744_);
v_traceState_785_ = lean_ctor_get(v___x_784_, 4);
v_env_786_ = lean_ctor_get(v___x_784_, 0);
v_nextMacroScope_787_ = lean_ctor_get(v___x_784_, 1);
v_ngen_788_ = lean_ctor_get(v___x_784_, 2);
v_auxDeclNGen_789_ = lean_ctor_get(v___x_784_, 3);
v_cache_790_ = lean_ctor_get(v___x_784_, 5);
v_messages_791_ = lean_ctor_get(v___x_784_, 6);
v_infoState_792_ = lean_ctor_get(v___x_784_, 7);
v_snapshotTasks_793_ = lean_ctor_get(v___x_784_, 8);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_812_ == 0)
{
v___x_795_ = v___x_784_;
v_isShared_796_ = v_isSharedCheck_812_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_snapshotTasks_793_);
lean_inc(v_infoState_792_);
lean_inc(v_messages_791_);
lean_inc(v_cache_790_);
lean_inc(v_traceState_785_);
lean_inc(v_auxDeclNGen_789_);
lean_inc(v_ngen_788_);
lean_inc(v_nextMacroScope_787_);
lean_inc(v_env_786_);
lean_dec(v___x_784_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_812_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
uint64_t v_tid_797_; lean_object* v_traces_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_811_; 
v_tid_797_ = lean_ctor_get_uint64(v_traceState_785_, sizeof(void*)*1);
v_traces_798_ = lean_ctor_get(v_traceState_785_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_traceState_785_);
if (v_isSharedCheck_811_ == 0)
{
v___x_800_ = v_traceState_785_;
v_isShared_801_ = v_isSharedCheck_811_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_traces_798_);
lean_dec(v_traceState_785_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_811_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_738_, v_traces_798_);
lean_dec_ref(v_traces_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_802_);
lean_ctor_set_uint64(v_reuseFailAlloc_810_, sizeof(void*)*1, v_tid_797_);
v___x_804_ = v_reuseFailAlloc_810_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_806_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 4, v___x_804_);
v___x_806_ = v___x_795_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_env_786_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_nextMacroScope_787_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_ngen_788_);
lean_ctor_set(v_reuseFailAlloc_809_, 3, v_auxDeclNGen_789_);
lean_ctor_set(v_reuseFailAlloc_809_, 4, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_809_, 5, v_cache_790_);
lean_ctor_set(v_reuseFailAlloc_809_, 6, v_messages_791_);
lean_ctor_set(v_reuseFailAlloc_809_, 7, v_infoState_792_);
lean_ctor_set(v_reuseFailAlloc_809_, 8, v_snapshotTasks_793_);
v___x_806_ = v_reuseFailAlloc_809_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_st_ref_put(v___y_744_, v___x_806_);
v___x_808_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(v_fst_746_);
return v___x_808_;
}
}
}
}
}
else
{
goto v___jp_777_;
}
}
else
{
goto v___jp_777_;
}
}
v___jp_813_:
{
double v___x_815_; double v___x_816_; double v___x_817_; uint8_t v___x_818_; 
v___x_815_ = lean_unbox_float(v_snd_763_);
v___x_816_ = lean_unbox_float(v_fst_762_);
v___x_817_ = lean_float_sub(v___x_815_, v___x_816_);
v___x_818_ = lean_float_decLt(v___y_814_, v___x_817_);
v___y_783_ = v___x_818_;
goto v___jp_782_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___boxed(lean_object* v_cls_829_, lean_object* v_collapsed_830_, lean_object* v_tag_831_, lean_object* v_opts_832_, lean_object* v_clsEnabled_833_, lean_object* v_oldTraces_834_, lean_object* v_msg_835_, lean_object* v_resStartStop_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
uint8_t v_collapsed_boxed_842_; uint8_t v_clsEnabled_boxed_843_; lean_object* v_res_844_; 
v_collapsed_boxed_842_ = lean_unbox(v_collapsed_830_);
v_clsEnabled_boxed_843_ = lean_unbox(v_clsEnabled_833_);
v_res_844_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(v_cls_829_, v_collapsed_boxed_842_, v_tag_831_, v_opts_832_, v_clsEnabled_boxed_843_, v_oldTraces_834_, v_msg_835_, v_resStartStop_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec_ref(v_opts_832_);
return v_res_844_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5));
v___x_859_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__8));
v___x_860_ = l_Lean_Name_append(v___x_859_, v___x_858_);
return v___x_860_;
}
}
static double _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10(void){
_start:
{
lean_object* v___x_861_; double v___x_862_; 
v___x_861_ = lean_unsigned_to_nat(1000000000u);
v___x_862_ = lean_float_of_nat(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__11));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__13));
v___x_868_ = l_Lean_stringToMessageData(v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7(lean_object* v_snd_869_, lean_object* v_mvarId_870_, lean_object* v_x_871_, lean_object* v_x_872_, lean_object* v_x_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
if (lean_obj_tag(v_x_871_) == 5)
{
lean_object* v_fn_879_; lean_object* v_arg_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_fn_879_ = lean_ctor_get(v_x_871_, 0);
lean_inc_ref(v_fn_879_);
v_arg_880_ = lean_ctor_get(v_x_871_, 1);
lean_inc_ref(v_arg_880_);
lean_dec_ref_known(v_x_871_, 2);
v___x_881_ = lean_array_set(v_x_872_, v_x_873_, v_arg_880_);
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_nat_sub(v_x_873_, v___x_882_);
lean_dec(v_x_873_);
v_x_871_ = v_fn_879_;
v_x_872_ = v___x_881_;
v_x_873_ = v___x_883_;
goto _start;
}
else
{
lean_dec(v_x_873_);
if (lean_obj_tag(v_x_871_) == 4)
{
lean_object* v_declName_885_; lean_object* v___f_886_; lean_object* v___f_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_declName_885_ = lean_ctor_get(v_x_871_, 0);
lean_inc_n(v_declName_885_, 2);
lean_dec_ref_known(v_x_871_, 2);
v___f_886_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0));
v___f_887_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__1));
v___x_888_ = l_Lean_instInhabitedExpr;
v___x_889_ = l_Lean_Meta_getSparseCasesOnInfo___redArg(v_declName_885_, v___y_877_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
if (lean_obj_tag(v_a_890_) == 1)
{
lean_object* v_val_891_; lean_object* v_toCold_892_; lean_object* v_options_893_; lean_object* v_majorPos_894_; lean_object* v_arity_895_; lean_object* v_insterestingCtors_896_; lean_object* v_inheritedTraceOptions_897_; uint8_t v_hasTrace_898_; lean_object* v___f_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v_val_891_ = lean_ctor_get(v_a_890_, 0);
lean_inc(v_val_891_);
lean_dec_ref_known(v_a_890_, 1);
v_toCold_892_ = lean_ctor_get(v___y_876_, 0);
v_options_893_ = lean_ctor_get(v_toCold_892_, 2);
v_majorPos_894_ = lean_ctor_get(v_val_891_, 1);
lean_inc(v_majorPos_894_);
v_arity_895_ = lean_ctor_get(v_val_891_, 2);
lean_inc_n(v_arity_895_, 2);
v_insterestingCtors_896_ = lean_ctor_get(v_val_891_, 3);
lean_inc_ref(v_insterestingCtors_896_);
lean_dec(v_val_891_);
v_inheritedTraceOptions_897_ = lean_ctor_get(v_toCold_892_, 11);
v_hasTrace_898_ = lean_ctor_get_uint8(v_options_893_, sizeof(void*)*1);
lean_inc_ref(v_x_872_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed), 15, 9);
lean_closure_set(v___f_899_, 0, v___x_888_);
lean_closure_set(v___f_899_, 1, v_x_872_);
lean_closure_set(v___f_899_, 2, v_majorPos_894_);
lean_closure_set(v___f_899_, 3, v_insterestingCtors_896_);
lean_closure_set(v___f_899_, 4, v_declName_885_);
lean_closure_set(v___f_899_, 5, v_snd_869_);
lean_closure_set(v___f_899_, 6, v_arity_895_);
lean_closure_set(v___f_899_, 7, v_mvarId_870_);
lean_closure_set(v___f_899_, 8, v___f_886_);
v___x_900_ = lean_array_get_size(v_x_872_);
lean_dec_ref(v_x_872_);
v___x_901_ = lean_nat_dec_lt(v___x_900_, v_arity_895_);
lean_dec(v_arity_895_);
if (v_hasTrace_898_ == 0)
{
lean_object* v___x_902_; 
v___x_902_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(v___x_901_, v___f_899_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_902_;
}
else
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v_a_910_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v_a_925_; 
v___x_903_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5));
v___x_904_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6));
v___x_905_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9);
v___x_906_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_897_, v_options_893_, v___x_905_);
if (v___x_906_ == 0)
{
lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_975_ = l_Lean_trace_profiler;
v___x_976_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_options_893_, v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(v___x_901_, v___f_899_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_977_;
}
else
{
goto v___jp_934_;
}
}
else
{
goto v___jp_934_;
}
v___jp_907_:
{
lean_object* v___x_911_; double v___x_912_; double v___x_913_; double v___x_914_; double v___x_915_; double v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_911_ = lean_io_mono_nanos_now();
v___x_912_ = lean_float_of_nat(v___y_908_);
v___x_913_ = lean_float_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10);
v___x_914_ = lean_float_div(v___x_912_, v___x_913_);
v___x_915_ = lean_float_of_nat(v___x_911_);
v___x_916_ = lean_float_div(v___x_915_, v___x_913_);
v___x_917_ = lean_box_float(v___x_914_);
v___x_918_ = lean_box_float(v___x_916_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v_a_910_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(v___x_903_, v_hasTrace_898_, v___x_904_, v_options_893_, v___x_906_, v___y_909_, v___f_887_, v___x_920_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_921_;
}
v___jp_922_:
{
lean_object* v___x_926_; double v___x_927_; double v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_926_ = lean_io_get_num_heartbeats();
v___x_927_ = lean_float_of_nat(v___y_923_);
v___x_928_ = lean_float_of_nat(v___x_926_);
v___x_929_ = lean_box_float(v___x_927_);
v___x_930_ = lean_box_float(v___x_928_);
v___x_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_929_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_a_925_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(v___x_903_, v_hasTrace_898_, v___x_904_, v_options_893_, v___x_906_, v___y_924_, v___f_887_, v___x_932_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_933_;
}
v___jp_934_:
{
lean_object* v___x_935_; lean_object* v_a_936_; lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_935_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(v___y_877_);
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref(v___x_935_);
v___x_937_ = l_Lean_trace_profiler_useHeartbeats;
v___x_938_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_options_893_, v___x_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_io_mono_nanos_now();
v___x_940_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(v___x_901_, v___f_899_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 1);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v___y_908_ = v___x_939_;
v___y_909_ = v_a_936_;
v_a_910_ = v___x_946_;
goto v___jp_907_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
v_a_949_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_940_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_940_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set_tag(v___x_951_, 0);
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
v___y_908_ = v___x_939_;
v___y_909_ = v_a_936_;
v_a_910_ = v___x_954_;
goto v___jp_907_;
}
}
}
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_io_get_num_heartbeats();
v___x_958_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2(v___x_901_, v___f_899_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 1);
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
v___y_923_ = v___x_957_;
v___y_924_ = v_a_936_;
v_a_925_ = v___x_964_;
goto v___jp_922_;
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_958_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_958_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 0);
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v___y_923_ = v___x_957_;
v___y_924_ = v_a_936_;
v_a_925_ = v___x_972_;
goto v___jp_922_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; 
lean_dec(v_a_890_);
lean_dec(v_declName_885_);
lean_dec_ref(v_x_872_);
lean_dec(v_mvarId_870_);
lean_dec_ref(v_snd_869_);
v___x_978_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12);
v___x_979_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_978_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_979_;
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v_declName_885_);
lean_dec_ref(v_x_872_);
lean_dec(v_mvarId_870_);
lean_dec_ref(v_snd_869_);
v_a_980_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_889_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_889_);
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
else
{
lean_object* v___x_988_; lean_object* v___x_989_; 
lean_dec_ref(v_x_872_);
lean_dec_ref(v_x_871_);
lean_dec(v_mvarId_870_);
lean_dec_ref(v_snd_869_);
v___x_988_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14);
v___x_989_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_988_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
return v___x_989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___boxed(lean_object* v_snd_990_, lean_object* v_mvarId_991_, lean_object* v_x_992_, lean_object* v_x_993_, lean_object* v_x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7(v_snd_990_, v_mvarId_991_, v_x_992_, v_x_993_, v_x_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
return v_res_1000_;
}
}
static lean_object* _init_l_Lean_Meta_reduceSparseCasesOn___closed__1(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = ((lean_object*)(l_Lean_Meta_reduceSparseCasesOn___closed__0));
v___x_1003_ = l_Lean_stringToMessageData(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceSparseCasesOn(lean_object* v_mvarId_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v___x_1010_; 
lean_inc(v_mvarId_1004_);
v___x_1010_ = l_Lean_MVarId_getType(v_mvarId_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = l_Lean_Meta_matchEqHEqLHS_x3f(v_a_1011_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
if (lean_obj_tag(v_a_1013_) == 1)
{
lean_object* v_val_1014_; lean_object* v_snd_1015_; lean_object* v_dummy_1016_; lean_object* v_nargs_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_val_1014_ = lean_ctor_get(v_a_1013_, 0);
lean_inc(v_val_1014_);
lean_dec_ref_known(v_a_1013_, 1);
v_snd_1015_ = lean_ctor_get(v_val_1014_, 1);
lean_inc_n(v_snd_1015_, 2);
lean_dec(v_val_1014_);
v_dummy_1016_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1);
v_nargs_1017_ = l_Lean_Expr_getAppNumArgs(v_snd_1015_);
lean_inc(v_nargs_1017_);
v___x_1018_ = lean_mk_array(v_nargs_1017_, v_dummy_1016_);
v___x_1019_ = lean_unsigned_to_nat(1u);
v___x_1020_ = lean_nat_sub(v_nargs_1017_, v___x_1019_);
lean_dec(v_nargs_1017_);
v___x_1021_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7(v_snd_1015_, v_mvarId_1004_, v_snd_1015_, v___x_1018_, v___x_1020_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
return v___x_1021_;
}
else
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
lean_dec(v_a_1013_);
lean_dec(v_mvarId_1004_);
v___x_1022_ = lean_obj_once(&l_Lean_Meta_reduceSparseCasesOn___closed__1, &l_Lean_Meta_reduceSparseCasesOn___closed__1_once, _init_l_Lean_Meta_reduceSparseCasesOn___closed__1);
v___x_1023_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1022_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
return v___x_1023_;
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec(v_mvarId_1004_);
v_a_1024_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1012_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1012_);
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
lean_dec(v_mvarId_1004_);
v_a_1032_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1010_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1010_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_reduceSparseCasesOn___boxed(lean_object* v_mvarId_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lean_Meta_reduceSparseCasesOn(v_mvarId_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_);
lean_dec(v_a_1044_);
lean_dec_ref(v_a_1043_);
lean_dec(v_a_1042_);
lean_dec_ref(v_a_1041_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3(lean_object* v_00_u03b1_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v_msg_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___boxed(lean_object* v_00_u03b1_1055_, lean_object* v_msg_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3(v_00_u03b1_1055_, v_msg_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10(lean_object* v_00_u03b1_1063_, lean_object* v_x_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___redArg(v_x_1064_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10___boxed(lean_object* v_00_u03b1_1071_, lean_object* v_x_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6_spec__10(v_00_u03b1_1071_, v_x_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(lean_object* v_mvarId_1079_, lean_object* v_x_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1079_, v_x_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1086_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1086_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg___boxed(lean_object* v_mvarId_1103_, lean_object* v_x_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(v_mvarId_1103_, v_x_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2(lean_object* v_00_u03b1_1111_, lean_object* v_mvarId_1112_, lean_object* v_x_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(v_mvarId_1112_, v_x_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___boxed(lean_object* v_00_u03b1_1120_, lean_object* v_mvarId_1121_, lean_object* v_x_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2(v_00_u03b1_1120_, v_mvarId_1121_, v_x_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_splitSparseCasesOn_spec__1(lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
if (lean_obj_tag(v_a_1129_) == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = l_List_reverse___redArg(v_a_1130_);
return v___x_1131_;
}
else
{
lean_object* v_head_1132_; lean_object* v_tail_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1142_; 
v_head_1132_ = lean_ctor_get(v_a_1129_, 0);
v_tail_1133_ = lean_ctor_get(v_a_1129_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_a_1129_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1135_ = v_a_1129_;
v_isShared_1136_ = v_isSharedCheck_1142_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_tail_1133_);
lean_inc(v_head_1132_);
lean_dec(v_a_1129_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1142_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = l_Lean_MessageData_ofExpr(v_head_1132_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 1, v_a_1130_);
lean_ctor_set(v___x_1135_, 0, v___x_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1137_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v_a_1130_);
v___x_1139_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
v_a_1129_ = v_tail_1133_;
v_a_1130_ = v___x_1139_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__0));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0(uint8_t v___y_1146_, lean_object* v_mvarId_1147_, lean_object* v___f_1148_, lean_object* v_declName_1149_, lean_object* v_val_1150_, lean_object* v___x_1151_, lean_object* v_fields_1152_, uint8_t v___x_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; 
if (v___y_1146_ == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_declName_1149_);
v___x_1215_ = l_Lean_MVarId_modifyTargetEqLHS(v_mvarId_1147_, v___f_1148_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
return v___x_1215_;
}
else
{
lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
lean_dec_ref(v___f_1148_);
v___x_1216_ = lean_array_get_size(v_fields_1152_);
v___x_1217_ = lean_unsigned_to_nat(1u);
v___x_1218_ = lean_nat_dec_eq(v___x_1216_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1219_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___closed__1);
lean_inc_ref(v_fields_1152_);
v___x_1220_ = lean_array_to_list(v_fields_1152_);
v___x_1221_ = lean_box(0);
v___x_1222_ = l_List_mapTR_loop___at___00Lean_Meta_splitSparseCasesOn_spec__1(v___x_1220_, v___x_1221_);
v___x_1223_ = l_Lean_MessageData_ofList(v___x_1222_);
v___x_1224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1219_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1224_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_dec_ref_known(v___x_1225_, 1);
v___y_1160_ = v___y_1154_;
v___y_1161_ = v___y_1155_;
v___y_1162_ = v___y_1156_;
v___y_1163_ = v___y_1157_;
goto v___jp_1159_;
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_declName_1149_);
lean_dec(v_mvarId_1147_);
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1225_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1225_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
else
{
v___y_1160_ = v___y_1154_;
v___y_1161_ = v___y_1155_;
v___y_1162_ = v___y_1156_;
v___y_1163_ = v___y_1157_;
goto v___jp_1159_;
}
}
v___jp_1159_:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lean_Meta_getSparseCasesOnEq(v_declName_1149_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1166_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1165_);
lean_dec_ref_known(v___x_1164_, 1);
lean_inc(v_mvarId_1147_);
v___x_1166_ = l_Lean_MVarId_getType(v_mvarId_1147_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1168_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v___x_1166_, 1);
v___x_1168_ = l_Lean_Meta_matchEqHEqLHS_x3f(v_a_1167_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1168_, 1);
if (lean_obj_tag(v_a_1169_) == 1)
{
lean_object* v_val_1170_; lean_object* v_snd_1171_; lean_object* v_arity_1172_; lean_object* v___x_1173_; lean_object* v_nargs_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v_dummy_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_val_1170_ = lean_ctor_get(v_a_1169_, 0);
lean_inc(v_val_1170_);
lean_dec_ref_known(v_a_1169_, 1);
v_snd_1171_ = lean_ctor_get(v_val_1170_, 1);
lean_inc(v_snd_1171_);
lean_dec(v_val_1170_);
v_arity_1172_ = lean_ctor_get(v_val_1150_, 2);
lean_inc(v_arity_1172_);
lean_dec_ref(v_val_1150_);
v___x_1173_ = l_Lean_Expr_getAppFn(v_snd_1171_);
v_nargs_1174_ = l_Lean_Expr_getAppNumArgs(v_snd_1171_);
v___x_1175_ = l_Lean_Expr_constLevels_x21(v___x_1173_);
lean_dec_ref(v___x_1173_);
v___x_1176_ = l_Lean_mkConst(v_a_1165_, v___x_1175_);
v_dummy_1177_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1);
lean_inc(v_nargs_1174_);
v___x_1178_ = lean_mk_array(v_nargs_1174_, v_dummy_1177_);
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_nat_sub(v_nargs_1174_, v___x_1179_);
lean_dec(v_nargs_1174_);
v___x_1181_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_snd_1171_, v___x_1178_, v___x_1180_);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = l_Array_toSubarray___redArg(v___x_1181_, v___x_1182_, v_arity_1172_);
v___x_1184_ = l_Subarray_copy___redArg(v___x_1183_);
v___x_1185_ = l_Lean_mkAppN(v___x_1176_, v___x_1184_);
lean_dec_ref(v___x_1184_);
v___x_1186_ = lean_array_get(v___x_1151_, v_fields_1152_, v___x_1182_);
lean_dec_ref(v_fields_1152_);
v___x_1187_ = l_Lean_Expr_app___override(v___x_1185_, v___x_1186_);
v___x_1188_ = l___private_Lean_Meta_SplitSparseCasesOn_0__Lean_Meta_rewriteGoalUsingEq(v_mvarId_1147_, v___x_1187_, v___x_1153_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1188_;
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec(v_a_1169_);
lean_dec(v_a_1165_);
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_mvarId_1147_);
v___x_1189_ = lean_obj_once(&l_Lean_Meta_reduceSparseCasesOn___closed__1, &l_Lean_Meta_reduceSparseCasesOn___closed__1_once, _init_l_Lean_Meta_reduceSparseCasesOn___closed__1);
v___x_1190_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1189_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1190_;
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
lean_dec(v_a_1165_);
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_mvarId_1147_);
v_a_1191_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1168_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1168_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec(v_a_1165_);
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_mvarId_1147_);
v_a_1199_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1166_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1166_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
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
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v_fields_1152_);
lean_dec_ref(v_val_1150_);
lean_dec(v_mvarId_1147_);
v_a_1207_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1164_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1164_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___boxed(lean_object* v___y_1234_, lean_object* v_mvarId_1235_, lean_object* v___f_1236_, lean_object* v_declName_1237_, lean_object* v_val_1238_, lean_object* v___x_1239_, lean_object* v_fields_1240_, lean_object* v___x_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
uint8_t v___y_31477__boxed_1247_; uint8_t v___x_31482__boxed_1248_; lean_object* v_res_1249_; 
v___y_31477__boxed_1247_ = lean_unbox(v___y_1234_);
v___x_31482__boxed_1248_ = lean_unbox(v___x_1241_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0(v___y_31477__boxed_1247_, v_mvarId_1235_, v___f_1236_, v_declName_1237_, v_val_1238_, v___x_1239_, v_fields_1240_, v___x_31482__boxed_1248_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec_ref(v___x_1239_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3(lean_object* v_declName_1250_, lean_object* v_val_1251_, uint8_t v___x_1252_, size_t v_sz_1253_, size_t v_i_1254_, lean_object* v_bs_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_usize_dec_lt(v_i_1254_, v_sz_1253_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec_ref(v_val_1251_);
lean_dec(v_declName_1250_);
v___x_1262_ = l_unsafeCast___redArg(v_bs_1255_);
lean_dec_ref(v_bs_1255_);
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
return v___x_1263_;
}
else
{
lean_object* v_v_1264_; lean_object* v___x_1265_; lean_object* v_toInductionSubgoal_1266_; lean_object* v_ctorName_1267_; lean_object* v_mvarId_1268_; lean_object* v_fields_1269_; lean_object* v___f_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v_bs_x27_1273_; uint8_t v___y_1275_; 
v_v_1264_ = lean_array_uget_borrowed(v_bs_1255_, v_i_1254_);
v___x_1265_ = l_unsafeCast___redArg(v_v_1264_);
v_toInductionSubgoal_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc_ref(v_toInductionSubgoal_1266_);
v_ctorName_1267_ = lean_ctor_get(v___x_1265_, 1);
lean_inc(v_ctorName_1267_);
lean_dec(v___x_1265_);
v_mvarId_1268_ = lean_ctor_get(v_toInductionSubgoal_1266_, 0);
lean_inc(v_mvarId_1268_);
v_fields_1269_ = lean_ctor_get(v_toInductionSubgoal_1266_, 1);
lean_inc_ref(v_fields_1269_);
lean_dec_ref(v_toInductionSubgoal_1266_);
v___f_1270_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0));
v___x_1271_ = l_Lean_instInhabitedExpr;
v___x_1272_ = lean_unsigned_to_nat(0u);
v_bs_x27_1273_ = lean_array_uset(v_bs_1255_, v_i_1254_, v___x_1272_);
if (lean_obj_tag(v_ctorName_1267_) == 0)
{
v___y_1275_ = v___x_1261_;
goto v___jp_1274_;
}
else
{
lean_dec_ref_known(v_ctorName_1267_, 1);
v___y_1275_ = v___x_1252_;
goto v___jp_1274_;
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___y_1278_; lean_object* v___x_1279_; 
v___x_1276_ = lean_box(v___y_1275_);
v___x_1277_ = lean_box(v___x_1252_);
lean_inc_ref(v_val_1251_);
lean_inc(v_declName_1250_);
lean_inc(v_mvarId_1268_);
v___y_1278_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___boxed), 13, 8);
lean_closure_set(v___y_1278_, 0, v___x_1276_);
lean_closure_set(v___y_1278_, 1, v_mvarId_1268_);
lean_closure_set(v___y_1278_, 2, v___f_1270_);
lean_closure_set(v___y_1278_, 3, v_declName_1250_);
lean_closure_set(v___y_1278_, 4, v_val_1251_);
lean_closure_set(v___y_1278_, 5, v___x_1271_);
lean_closure_set(v___y_1278_, 6, v_fields_1269_);
lean_closure_set(v___y_1278_, 7, v___x_1277_);
v___x_1279_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(v_mvarId_1268_, v___y_1278_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; size_t v___x_1281_; size_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1281_ = ((size_t)1ULL);
v___x_1282_ = lean_usize_add(v_i_1254_, v___x_1281_);
v___x_1283_ = l_unsafeCast___redArg(v_a_1280_);
lean_dec(v_a_1280_);
v___x_1284_ = lean_array_uset(v_bs_x27_1273_, v_i_1254_, v___x_1283_);
v_i_1254_ = v___x_1282_;
v_bs_1255_ = v___x_1284_;
goto _start;
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref(v_bs_x27_1273_);
lean_dec_ref(v_val_1251_);
lean_dec(v_declName_1250_);
v_a_1286_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1279_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1279_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___boxed(lean_object* v_declName_1294_, lean_object* v_val_1295_, lean_object* v___x_1296_, lean_object* v_sz_1297_, lean_object* v_i_1298_, lean_object* v_bs_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v___x_31661__boxed_1305_; size_t v_sz_boxed_1306_; size_t v_i_boxed_1307_; lean_object* v_res_1308_; 
v___x_31661__boxed_1305_ = lean_unbox(v___x_1296_);
v_sz_boxed_1306_ = lean_unbox_usize(v_sz_1297_);
lean_dec(v_sz_1297_);
v_i_boxed_1307_ = lean_unbox_usize(v_i_1298_);
lean_dec(v_i_1298_);
v_res_1308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3(v_declName_1294_, v_val_1295_, v___x_31661__boxed_1305_, v_sz_boxed_1306_, v_i_boxed_1307_, v_bs_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(lean_object* v___x_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_toCold_1315_; lean_object* v_options_1316_; uint8_t v_hasTrace_1317_; 
v_toCold_1315_ = lean_ctor_get(v___y_1312_, 0);
v_options_1316_ = lean_ctor_get(v_toCold_1315_, 2);
v_hasTrace_1317_ = lean_ctor_get_uint8(v_options_1316_, sizeof(void*)*1);
if (v_hasTrace_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec(v___x_1309_);
v___x_1318_ = lean_box(v_hasTrace_1317_);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
else
{
lean_object* v_inheritedTraceOptions_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_inheritedTraceOptions_1320_ = lean_ctor_get(v_toCold_1315_, 11);
v___x_1321_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__8));
v___x_1322_ = l_Lean_Name_append(v___x_1321_, v___x_1309_);
v___x_1323_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1320_, v_options_1316_, v___x_1322_);
lean_dec(v___x_1322_);
v___x_1324_ = lean_box(v___x_1323_);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
return v___x_1325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1___boxed(lean_object* v___x_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(v___x_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(lean_object* v_cls_1335_, lean_object* v_msg_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_ref_1342_; lean_object* v___x_1343_; lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1388_; 
v_ref_1342_ = lean_ctor_get(v___y_1339_, 2);
v___x_1343_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3_spec__5(v_msg_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1346_ = v___x_1343_;
v_isShared_1347_ = v_isSharedCheck_1388_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1343_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1388_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v_traceState_1349_; lean_object* v_env_1350_; lean_object* v_nextMacroScope_1351_; lean_object* v_ngen_1352_; lean_object* v_auxDeclNGen_1353_; lean_object* v_cache_1354_; lean_object* v_messages_1355_; lean_object* v_infoState_1356_; lean_object* v_snapshotTasks_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1387_; 
v___x_1348_ = lean_st_ref_take(v___y_1340_);
v_traceState_1349_ = lean_ctor_get(v___x_1348_, 4);
v_env_1350_ = lean_ctor_get(v___x_1348_, 0);
v_nextMacroScope_1351_ = lean_ctor_get(v___x_1348_, 1);
v_ngen_1352_ = lean_ctor_get(v___x_1348_, 2);
v_auxDeclNGen_1353_ = lean_ctor_get(v___x_1348_, 3);
v_cache_1354_ = lean_ctor_get(v___x_1348_, 5);
v_messages_1355_ = lean_ctor_get(v___x_1348_, 6);
v_infoState_1356_ = lean_ctor_get(v___x_1348_, 7);
v_snapshotTasks_1357_ = lean_ctor_get(v___x_1348_, 8);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1359_ = v___x_1348_;
v_isShared_1360_ = v_isSharedCheck_1387_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_snapshotTasks_1357_);
lean_inc(v_infoState_1356_);
lean_inc(v_messages_1355_);
lean_inc(v_cache_1354_);
lean_inc(v_traceState_1349_);
lean_inc(v_auxDeclNGen_1353_);
lean_inc(v_ngen_1352_);
lean_inc(v_nextMacroScope_1351_);
lean_inc(v_env_1350_);
lean_dec(v___x_1348_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1387_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
uint64_t v_tid_1361_; lean_object* v_traces_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1386_; 
v_tid_1361_ = lean_ctor_get_uint64(v_traceState_1349_, sizeof(void*)*1);
v_traces_1362_ = lean_ctor_get(v_traceState_1349_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_traceState_1349_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1364_ = v_traceState_1349_;
v_isShared_1365_ = v_isSharedCheck_1386_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_traces_1362_);
lean_dec(v_traceState_1349_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1386_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; double v___x_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1366_ = lean_box(0);
v___x_1367_ = lean_box(0);
v___x_1368_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6___closed__0);
v___x_1369_ = 0;
v___x_1370_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6));
v___x_1371_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1371_, 0, v_cls_1335_);
lean_ctor_set(v___x_1371_, 1, v___x_1367_);
lean_ctor_set(v___x_1371_, 2, v___x_1370_);
lean_ctor_set_float(v___x_1371_, sizeof(void*)*3, v___x_1368_);
lean_ctor_set_float(v___x_1371_, sizeof(void*)*3 + 8, v___x_1368_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3 + 16, v___x_1369_);
v___x_1372_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___closed__0));
v___x_1373_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1371_);
lean_ctor_set(v___x_1373_, 1, v_a_1344_);
lean_ctor_set(v___x_1373_, 2, v___x_1372_);
lean_inc(v_ref_1342_);
v___x_1374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_ref_1342_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = l_Lean_PersistentArray_push___redArg(v_traces_1362_, v___x_1374_);
if (v_isShared_1365_ == 0)
{
lean_ctor_set(v___x_1364_, 0, v___x_1375_);
v___x_1377_ = v___x_1364_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1375_);
lean_ctor_set_uint64(v_reuseFailAlloc_1385_, sizeof(void*)*1, v_tid_1361_);
v___x_1377_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1379_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 4, v___x_1377_);
v___x_1379_ = v___x_1359_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_env_1350_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v_nextMacroScope_1351_);
lean_ctor_set(v_reuseFailAlloc_1384_, 2, v_ngen_1352_);
lean_ctor_set(v_reuseFailAlloc_1384_, 3, v_auxDeclNGen_1353_);
lean_ctor_set(v_reuseFailAlloc_1384_, 4, v___x_1377_);
lean_ctor_set(v_reuseFailAlloc_1384_, 5, v_cache_1354_);
lean_ctor_set(v_reuseFailAlloc_1384_, 6, v_messages_1355_);
lean_ctor_set(v_reuseFailAlloc_1384_, 7, v_infoState_1356_);
lean_ctor_set(v_reuseFailAlloc_1384_, 8, v_snapshotTasks_1357_);
v___x_1379_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1380_ = lean_st_ref_put(v___y_1340_, v___x_1379_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 0, v___x_1366_);
v___x_1382_ = v___x_1346_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1366_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0___boxed(lean_object* v_cls_1389_, lean_object* v_msg_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v_cls_1389_, v_msg_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5(lean_object* v_declName_1397_, lean_object* v_val_1398_, uint8_t v___x_1399_, uint8_t v___x_1400_, size_t v_sz_1401_, size_t v_i_1402_, lean_object* v_bs_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
uint8_t v___x_1409_; 
v___x_1409_ = lean_usize_dec_lt(v_i_1402_, v_sz_1401_);
if (v___x_1409_ == 0)
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec_ref(v_val_1398_);
lean_dec(v_declName_1397_);
v___x_1410_ = l_unsafeCast___redArg(v_bs_1403_);
lean_dec_ref(v_bs_1403_);
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
return v___x_1411_;
}
else
{
lean_object* v_v_1412_; lean_object* v___x_1413_; lean_object* v_toInductionSubgoal_1414_; lean_object* v_ctorName_1415_; lean_object* v_mvarId_1416_; lean_object* v_fields_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v_bs_x27_1421_; uint8_t v___y_1423_; 
v_v_1412_ = lean_array_uget_borrowed(v_bs_1403_, v_i_1402_);
v___x_1413_ = l_unsafeCast___redArg(v_v_1412_);
v_toInductionSubgoal_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc_ref(v_toInductionSubgoal_1414_);
v_ctorName_1415_ = lean_ctor_get(v___x_1413_, 1);
lean_inc(v_ctorName_1415_);
lean_dec(v___x_1413_);
v_mvarId_1416_ = lean_ctor_get(v_toInductionSubgoal_1414_, 0);
lean_inc(v_mvarId_1416_);
v_fields_1417_ = lean_ctor_get(v_toInductionSubgoal_1414_, 1);
lean_inc_ref(v_fields_1417_);
lean_dec_ref(v_toInductionSubgoal_1414_);
v___f_1418_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0));
v___x_1419_ = l_Lean_instInhabitedExpr;
v___x_1420_ = lean_unsigned_to_nat(0u);
v_bs_x27_1421_ = lean_array_uset(v_bs_1403_, v_i_1402_, v___x_1420_);
if (lean_obj_tag(v_ctorName_1415_) == 0)
{
v___y_1423_ = v___x_1400_;
goto v___jp_1422_;
}
else
{
lean_dec_ref_known(v_ctorName_1415_, 1);
v___y_1423_ = v___x_1399_;
goto v___jp_1422_;
}
v___jp_1422_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___y_1426_; lean_object* v___x_1427_; 
v___x_1424_ = lean_box(v___y_1423_);
v___x_1425_ = lean_box(v___x_1399_);
lean_inc_ref(v_val_1398_);
lean_inc(v_declName_1397_);
lean_inc(v_mvarId_1416_);
v___y_1426_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___boxed), 13, 8);
lean_closure_set(v___y_1426_, 0, v___x_1424_);
lean_closure_set(v___y_1426_, 1, v_mvarId_1416_);
lean_closure_set(v___y_1426_, 2, v___f_1418_);
lean_closure_set(v___y_1426_, 3, v_declName_1397_);
lean_closure_set(v___y_1426_, 4, v_val_1398_);
lean_closure_set(v___y_1426_, 5, v___x_1419_);
lean_closure_set(v___y_1426_, 6, v_fields_1417_);
lean_closure_set(v___y_1426_, 7, v___x_1425_);
v___x_1427_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(v_mvarId_1416_, v___y_1426_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; size_t v___x_1429_; size_t v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_a_1428_);
lean_dec_ref_known(v___x_1427_, 1);
v___x_1429_ = ((size_t)1ULL);
v___x_1430_ = lean_usize_add(v_i_1402_, v___x_1429_);
v___x_1431_ = l_unsafeCast___redArg(v_a_1428_);
lean_dec(v_a_1428_);
v___x_1432_ = lean_array_uset(v_bs_x27_1421_, v_i_1402_, v___x_1431_);
v_i_1402_ = v___x_1430_;
v_bs_1403_ = v___x_1432_;
goto _start;
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec_ref(v_bs_x27_1421_);
lean_dec_ref(v_val_1398_);
lean_dec(v_declName_1397_);
v_a_1434_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1427_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1427_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5___boxed(lean_object* v_declName_1442_, lean_object* v_val_1443_, lean_object* v___x_1444_, lean_object* v___x_1445_, lean_object* v_sz_1446_, lean_object* v_i_1447_, lean_object* v_bs_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
uint8_t v___x_31872__boxed_1454_; uint8_t v___x_31873__boxed_1455_; size_t v_sz_boxed_1456_; size_t v_i_boxed_1457_; lean_object* v_res_1458_; 
v___x_31872__boxed_1454_ = lean_unbox(v___x_1444_);
v___x_31873__boxed_1455_ = lean_unbox(v___x_1445_);
v_sz_boxed_1456_ = lean_unbox_usize(v_sz_1446_);
lean_dec(v_sz_1446_);
v_i_boxed_1457_ = lean_unbox_usize(v_i_1447_);
lean_dec(v_i_1447_);
v_res_1458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5(v_declName_1442_, v_val_1443_, v___x_31872__boxed_1454_, v___x_31873__boxed_1455_, v_sz_boxed_1456_, v_i_boxed_1457_, v_bs_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
return v_res_1458_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__1));
v___x_1463_ = l_Lean_stringToMessageData(v___x_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3(lean_object* v_val_1464_, lean_object* v___x_1465_, lean_object* v_x_1466_, lean_object* v_mvarId_1467_, uint8_t v___x_1468_, lean_object* v_declName_1469_, uint8_t v_hasTrace_1470_, lean_object* v_____r_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v_majorPos_1507_; lean_object* v_arity_1508_; lean_object* v_insterestingCtors_1509_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1514_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v_majorPos_1507_ = lean_ctor_get(v_val_1464_, 1);
v_arity_1508_ = lean_ctor_get(v_val_1464_, 2);
v_insterestingCtors_1509_ = lean_ctor_get(v_val_1464_, 3);
v___x_1529_ = lean_array_get_size(v_x_1466_);
v___x_1530_ = lean_nat_dec_lt(v___x_1529_, v_arity_1508_);
if (v___x_1530_ == 0)
{
v___y_1511_ = v___y_1472_;
v___y_1512_ = v___y_1473_;
v___y_1513_ = v___y_1474_;
v___y_1514_ = v___y_1475_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_declName_1469_);
lean_dec(v_mvarId_1467_);
lean_dec_ref(v_val_1464_);
v___x_1531_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1);
v___x_1532_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1531_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
v___jp_1477_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1484_ = lean_array_get_borrowed(v___x_1465_, v_x_1466_, v___y_1479_);
lean_dec(v___y_1479_);
v___x_1485_ = l_Lean_Expr_fvarId_x21(v___x_1484_);
v___x_1486_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0));
v___x_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___y_1478_);
v___x_1488_ = l_Lean_MVarId_cases(v_mvarId_1467_, v___x_1485_, v___x_1486_, v___x_1468_, v___x_1487_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; size_t v_sz_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_31339__overap_1497_; lean_object* v___x_1498_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_a_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v_sz_1490_ = lean_array_size(v_a_1489_);
v___x_1491_ = l_unsafeCast___redArg(v_a_1489_);
lean_dec(v_a_1489_);
v___x_1492_ = lean_box(v___x_1468_);
v___x_1493_ = lean_box(v_hasTrace_1470_);
v___x_1494_ = lean_box_usize(v_sz_1490_);
v___x_1495_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1));
v___x_1496_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5___boxed), 12, 7);
lean_closure_set(v___x_1496_, 0, v_declName_1469_);
lean_closure_set(v___x_1496_, 1, v_val_1464_);
lean_closure_set(v___x_1496_, 2, v___x_1492_);
lean_closure_set(v___x_1496_, 3, v___x_1493_);
lean_closure_set(v___x_1496_, 4, v___x_1494_);
lean_closure_set(v___x_1496_, 5, v___x_1495_);
lean_closure_set(v___x_1496_, 6, v___x_1491_);
v___x_31339__overap_1497_ = l_unsafeCast___redArg(v___x_1496_);
lean_dec_ref(v___x_1496_);
lean_inc(v___y_1483_);
lean_inc_ref(v___y_1482_);
lean_inc(v___y_1481_);
lean_inc_ref(v___y_1480_);
v___x_1498_ = lean_apply_5(v___x_31339__overap_1497_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, lean_box(0));
return v___x_1498_;
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec(v_declName_1469_);
lean_dec_ref(v_val_1464_);
v_a_1499_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1488_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1488_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
v___jp_1510_:
{
lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1515_ = lean_array_get_borrowed(v___x_1465_, v_x_1466_, v_majorPos_1507_);
v___x_1516_ = l_Lean_Expr_isFVar(v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec(v_declName_1469_);
lean_dec(v_mvarId_1467_);
lean_dec_ref(v_val_1464_);
v___x_1517_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2);
lean_inc(v___x_1515_);
v___x_1518_ = l_Lean_indentExpr(v___x_1515_);
v___x_1519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1519_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
else
{
lean_inc(v_majorPos_1507_);
lean_inc_ref(v_insterestingCtors_1509_);
v___y_1478_ = v_insterestingCtors_1509_;
v___y_1479_ = v_majorPos_1507_;
v___y_1480_ = v___y_1511_;
v___y_1481_ = v___y_1512_;
v___y_1482_ = v___y_1513_;
v___y_1483_ = v___y_1514_;
goto v___jp_1477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___boxed(lean_object* v_val_1541_, lean_object* v___x_1542_, lean_object* v_x_1543_, lean_object* v_mvarId_1544_, lean_object* v___x_1545_, lean_object* v_declName_1546_, lean_object* v_hasTrace_1547_, lean_object* v_____r_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v___x_31968__boxed_1554_; uint8_t v_hasTrace_boxed_1555_; lean_object* v_res_1556_; 
v___x_31968__boxed_1554_ = lean_unbox(v___x_1545_);
v_hasTrace_boxed_1555_ = lean_unbox(v_hasTrace_1547_);
v_res_1556_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3(v_val_1541_, v___x_1542_, v_x_1543_, v_mvarId_1544_, v___x_31968__boxed_1554_, v_declName_1546_, v_hasTrace_boxed_1555_, v_____r_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec_ref(v_x_1543_);
lean_dec_ref(v___x_1542_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4(lean_object* v_declName_1557_, lean_object* v_val_1558_, uint8_t v___x_1559_, size_t v_sz_1560_, size_t v_i_1561_, lean_object* v_bs_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
uint8_t v___x_1568_; 
v___x_1568_ = lean_usize_dec_lt(v_i_1561_, v_sz_1560_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec_ref(v_val_1558_);
lean_dec(v_declName_1557_);
v___x_1569_ = l_unsafeCast___redArg(v_bs_1562_);
lean_dec_ref(v_bs_1562_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
else
{
lean_object* v_v_1571_; lean_object* v___x_1572_; lean_object* v_toInductionSubgoal_1573_; lean_object* v_ctorName_1574_; lean_object* v_mvarId_1575_; lean_object* v_fields_1576_; lean_object* v___f_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; lean_object* v___x_1580_; lean_object* v_bs_x27_1581_; uint8_t v___y_1583_; 
v_v_1571_ = lean_array_uget_borrowed(v_bs_1562_, v_i_1561_);
v___x_1572_ = l_unsafeCast___redArg(v_v_1571_);
v_toInductionSubgoal_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc_ref(v_toInductionSubgoal_1573_);
v_ctorName_1574_ = lean_ctor_get(v___x_1572_, 1);
lean_inc(v_ctorName_1574_);
lean_dec(v___x_1572_);
v_mvarId_1575_ = lean_ctor_get(v_toInductionSubgoal_1573_, 0);
lean_inc(v_mvarId_1575_);
v_fields_1576_ = lean_ctor_get(v_toInductionSubgoal_1573_, 1);
lean_inc_ref(v_fields_1576_);
lean_dec_ref(v_toInductionSubgoal_1573_);
v___f_1577_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__0));
v___x_1578_ = l_Lean_instInhabitedExpr;
v___x_1579_ = 0;
v___x_1580_ = lean_unsigned_to_nat(0u);
v_bs_x27_1581_ = lean_array_uset(v_bs_1562_, v_i_1561_, v___x_1580_);
if (lean_obj_tag(v_ctorName_1574_) == 0)
{
v___y_1583_ = v___x_1559_;
goto v___jp_1582_;
}
else
{
lean_dec_ref_known(v_ctorName_1574_, 1);
v___y_1583_ = v___x_1579_;
goto v___jp_1582_;
}
v___jp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___y_1586_; lean_object* v___x_1587_; 
v___x_1584_ = lean_box(v___y_1583_);
v___x_1585_ = lean_box(v___x_1579_);
lean_inc_ref(v_val_1558_);
lean_inc(v_declName_1557_);
lean_inc(v_mvarId_1575_);
v___y_1586_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___lam__0___boxed), 13, 8);
lean_closure_set(v___y_1586_, 0, v___x_1584_);
lean_closure_set(v___y_1586_, 1, v_mvarId_1575_);
lean_closure_set(v___y_1586_, 2, v___f_1577_);
lean_closure_set(v___y_1586_, 3, v_declName_1557_);
lean_closure_set(v___y_1586_, 4, v_val_1558_);
lean_closure_set(v___y_1586_, 5, v___x_1578_);
lean_closure_set(v___y_1586_, 6, v_fields_1576_);
lean_closure_set(v___y_1586_, 7, v___x_1585_);
v___x_1587_ = l_Lean_MVarId_withContext___at___00Lean_Meta_splitSparseCasesOn_spec__2___redArg(v_mvarId_1575_, v___y_1586_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; size_t v___x_1589_; size_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1587_, 1);
v___x_1589_ = ((size_t)1ULL);
v___x_1590_ = lean_usize_add(v_i_1561_, v___x_1589_);
v___x_1591_ = l_unsafeCast___redArg(v_a_1588_);
lean_dec(v_a_1588_);
v___x_1592_ = lean_array_uset(v_bs_x27_1581_, v_i_1561_, v___x_1591_);
v_i_1561_ = v___x_1590_;
v_bs_1562_ = v___x_1592_;
goto _start;
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref(v_bs_x27_1581_);
lean_dec_ref(v_val_1558_);
lean_dec(v_declName_1557_);
v_a_1594_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1587_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1587_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4___boxed(lean_object* v_declName_1602_, lean_object* v_val_1603_, lean_object* v___x_1604_, lean_object* v_sz_1605_, lean_object* v_i_1606_, lean_object* v_bs_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
uint8_t v___x_32129__boxed_1613_; size_t v_sz_boxed_1614_; size_t v_i_boxed_1615_; lean_object* v_res_1616_; 
v___x_32129__boxed_1613_ = lean_unbox(v___x_1604_);
v_sz_boxed_1614_ = lean_unbox_usize(v_sz_1605_);
lean_dec(v_sz_1605_);
v_i_boxed_1615_ = lean_unbox_usize(v_i_1606_);
lean_dec(v_i_1606_);
v_res_1616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4(v_declName_1602_, v_val_1603_, v___x_32129__boxed_1613_, v_sz_boxed_1614_, v_i_boxed_1615_, v_bs_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2(lean_object* v_val_1617_, lean_object* v___x_1618_, lean_object* v_x_1619_, lean_object* v_mvarId_1620_, lean_object* v_declName_1621_, uint8_t v___x_1622_, lean_object* v_____r_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v_majorPos_1659_; lean_object* v_arity_1660_; lean_object* v_insterestingCtors_1661_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_majorPos_1659_ = lean_ctor_get(v_val_1617_, 1);
v_arity_1660_ = lean_ctor_get(v_val_1617_, 2);
v_insterestingCtors_1661_ = lean_ctor_get(v_val_1617_, 3);
v___x_1681_ = lean_array_get_size(v_x_1619_);
v___x_1682_ = lean_nat_dec_lt(v___x_1681_, v_arity_1660_);
if (v___x_1682_ == 0)
{
v___y_1663_ = v___y_1624_;
v___y_1664_ = v___y_1625_;
v___y_1665_ = v___y_1626_;
v___y_1666_ = v___y_1627_;
goto v___jp_1662_;
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
lean_dec(v_declName_1621_);
lean_dec(v_mvarId_1620_);
lean_dec_ref(v_val_1617_);
v___x_1683_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1);
v___x_1684_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1683_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
v___jp_1629_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1636_ = lean_array_get_borrowed(v___x_1618_, v_x_1619_, v___y_1631_);
lean_dec(v___y_1631_);
v___x_1637_ = l_Lean_Expr_fvarId_x21(v___x_1636_);
v___x_1638_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0));
v___x_1639_ = 0;
v___x_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___y_1630_);
v___x_1641_ = l_Lean_MVarId_cases(v_mvarId_1620_, v___x_1637_, v___x_1638_, v___x_1639_, v___x_1640_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; size_t v_sz_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_31277__overap_1649_; lean_object* v___x_1650_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v_sz_1643_ = lean_array_size(v_a_1642_);
v___x_1644_ = l_unsafeCast___redArg(v_a_1642_);
lean_dec(v_a_1642_);
v___x_1645_ = lean_box(v___x_1622_);
v___x_1646_ = lean_box_usize(v_sz_1643_);
v___x_1647_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1));
v___x_1648_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__4___boxed), 11, 6);
lean_closure_set(v___x_1648_, 0, v_declName_1621_);
lean_closure_set(v___x_1648_, 1, v_val_1617_);
lean_closure_set(v___x_1648_, 2, v___x_1645_);
lean_closure_set(v___x_1648_, 3, v___x_1646_);
lean_closure_set(v___x_1648_, 4, v___x_1647_);
lean_closure_set(v___x_1648_, 5, v___x_1644_);
v___x_31277__overap_1649_ = l_unsafeCast___redArg(v___x_1648_);
lean_dec_ref(v___x_1648_);
lean_inc(v___y_1635_);
lean_inc_ref(v___y_1634_);
lean_inc(v___y_1633_);
lean_inc_ref(v___y_1632_);
v___x_1650_ = lean_apply_5(v___x_31277__overap_1649_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, lean_box(0));
return v___x_1650_;
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v_declName_1621_);
lean_dec_ref(v_val_1617_);
v_a_1651_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1641_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1641_);
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
v___jp_1662_:
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = lean_array_get_borrowed(v___x_1618_, v_x_1619_, v_majorPos_1659_);
v___x_1668_ = l_Lean_Expr_isFVar(v___x_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_declName_1621_);
lean_dec(v_mvarId_1620_);
lean_dec_ref(v_val_1617_);
v___x_1669_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2);
lean_inc(v___x_1667_);
v___x_1670_ = l_Lean_indentExpr(v___x_1667_);
v___x_1671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1671_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
else
{
lean_inc(v_majorPos_1659_);
lean_inc_ref(v_insterestingCtors_1661_);
v___y_1630_ = v_insterestingCtors_1661_;
v___y_1631_ = v_majorPos_1659_;
v___y_1632_ = v___y_1663_;
v___y_1633_ = v___y_1664_;
v___y_1634_ = v___y_1665_;
v___y_1635_ = v___y_1666_;
goto v___jp_1629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2___boxed(lean_object* v_val_1693_, lean_object* v___x_1694_, lean_object* v_x_1695_, lean_object* v_mvarId_1696_, lean_object* v_declName_1697_, lean_object* v___x_1698_, lean_object* v_____r_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v___x_32220__boxed_1705_; lean_object* v_res_1706_; 
v___x_32220__boxed_1705_ = lean_unbox(v___x_1698_);
v_res_1706_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2(v_val_1693_, v___x_1694_, v_x_1695_, v_mvarId_1696_, v_declName_1697_, v___x_32220__boxed_1705_, v_____r_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v_x_1695_);
lean_dec_ref(v___x_1694_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0(lean_object* v_val_1707_, lean_object* v___x_1708_, lean_object* v_x_1709_, lean_object* v_mvarId_1710_, uint8_t v___x_1711_, lean_object* v_declName_1712_, uint8_t v_hasTrace_1713_, lean_object* v_____r_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v_majorPos_1750_; lean_object* v_arity_1751_; lean_object* v_insterestingCtors_1752_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___x_1772_; uint8_t v___x_1773_; 
v_majorPos_1750_ = lean_ctor_get(v_val_1707_, 1);
v_arity_1751_ = lean_ctor_get(v_val_1707_, 2);
v_insterestingCtors_1752_ = lean_ctor_get(v_val_1707_, 3);
v___x_1772_ = lean_array_get_size(v_x_1709_);
v___x_1773_ = lean_nat_dec_lt(v___x_1772_, v_arity_1751_);
if (v___x_1773_ == 0)
{
v___y_1754_ = v___y_1715_;
v___y_1755_ = v___y_1716_;
v___y_1756_ = v___y_1717_;
v___y_1757_ = v___y_1718_;
goto v___jp_1753_;
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_dec(v_declName_1712_);
lean_dec(v_mvarId_1710_);
lean_dec_ref(v_val_1707_);
v___x_1774_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1);
v___x_1775_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1774_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
v___jp_1720_:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1727_ = lean_array_get_borrowed(v___x_1708_, v_x_1709_, v___y_1721_);
lean_dec(v___y_1721_);
v___x_1728_ = l_Lean_Expr_fvarId_x21(v___x_1727_);
v___x_1729_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0));
v___x_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___y_1722_);
v___x_1731_ = l_Lean_MVarId_cases(v_mvarId_1710_, v___x_1728_, v___x_1729_, v___x_1711_, v___x_1730_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; size_t v_sz_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_31214__overap_1740_; lean_object* v___x_1741_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_a_1732_);
lean_dec_ref_known(v___x_1731_, 1);
v_sz_1733_ = lean_array_size(v_a_1732_);
v___x_1734_ = l_unsafeCast___redArg(v_a_1732_);
lean_dec(v_a_1732_);
v___x_1735_ = lean_box(v___x_1711_);
v___x_1736_ = lean_box(v_hasTrace_1713_);
v___x_1737_ = lean_box_usize(v_sz_1733_);
v___x_1738_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1));
v___x_1739_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__5___boxed), 12, 7);
lean_closure_set(v___x_1739_, 0, v_declName_1712_);
lean_closure_set(v___x_1739_, 1, v_val_1707_);
lean_closure_set(v___x_1739_, 2, v___x_1735_);
lean_closure_set(v___x_1739_, 3, v___x_1736_);
lean_closure_set(v___x_1739_, 4, v___x_1737_);
lean_closure_set(v___x_1739_, 5, v___x_1738_);
lean_closure_set(v___x_1739_, 6, v___x_1734_);
v___x_31214__overap_1740_ = l_unsafeCast___redArg(v___x_1739_);
lean_dec_ref(v___x_1739_);
lean_inc(v___y_1726_);
lean_inc_ref(v___y_1725_);
lean_inc(v___y_1724_);
lean_inc_ref(v___y_1723_);
v___x_1741_ = lean_apply_5(v___x_31214__overap_1740_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, lean_box(0));
return v___x_1741_;
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v_declName_1712_);
lean_dec_ref(v_val_1707_);
v_a_1742_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1731_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1731_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
v___jp_1753_:
{
lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = lean_array_get_borrowed(v___x_1708_, v_x_1709_, v_majorPos_1750_);
v___x_1759_ = l_Lean_Expr_isFVar(v___x_1758_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec(v_declName_1712_);
lean_dec(v_mvarId_1710_);
lean_dec_ref(v_val_1707_);
v___x_1760_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2);
lean_inc(v___x_1758_);
v___x_1761_ = l_Lean_indentExpr(v___x_1758_);
v___x_1762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1762_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1763_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1763_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
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
lean_inc_ref(v_insterestingCtors_1752_);
lean_inc(v_majorPos_1750_);
v___y_1721_ = v_majorPos_1750_;
v___y_1722_ = v_insterestingCtors_1752_;
v___y_1723_ = v___y_1754_;
v___y_1724_ = v___y_1755_;
v___y_1725_ = v___y_1756_;
v___y_1726_ = v___y_1757_;
goto v___jp_1720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0___boxed(lean_object* v_val_1784_, lean_object* v___x_1785_, lean_object* v_x_1786_, lean_object* v_mvarId_1787_, lean_object* v___x_1788_, lean_object* v_declName_1789_, lean_object* v_hasTrace_1790_, lean_object* v_____r_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
uint8_t v___x_32386__boxed_1797_; uint8_t v_hasTrace_boxed_1798_; lean_object* v_res_1799_; 
v___x_32386__boxed_1797_ = lean_unbox(v___x_1788_);
v_hasTrace_boxed_1798_ = lean_unbox(v_hasTrace_1790_);
v_res_1799_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0(v_val_1784_, v___x_1785_, v_x_1786_, v_mvarId_1787_, v___x_32386__boxed_1797_, v_declName_1789_, v_hasTrace_boxed_1798_, v_____r_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec_ref(v_x_1786_);
lean_dec_ref(v___x_1785_);
return v_res_1799_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__0));
v___x_1802_ = l_Lean_stringToMessageData(v___x_1801_);
return v___x_1802_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__2));
v___x_1805_ = l_Lean_stringToMessageData(v___x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6(lean_object* v_mvarId_1806_, lean_object* v_x_1807_, lean_object* v_x_1808_, lean_object* v_x_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
if (lean_obj_tag(v_x_1807_) == 5)
{
lean_object* v_fn_1815_; lean_object* v_arg_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v_fn_1815_ = lean_ctor_get(v_x_1807_, 0);
lean_inc_ref(v_fn_1815_);
v_arg_1816_ = lean_ctor_get(v_x_1807_, 1);
lean_inc_ref(v_arg_1816_);
lean_dec_ref_known(v_x_1807_, 2);
v___x_1817_ = lean_array_set(v_x_1808_, v_x_1809_, v_arg_1816_);
v___x_1818_ = lean_unsigned_to_nat(1u);
v___x_1819_ = lean_nat_sub(v_x_1809_, v___x_1818_);
lean_dec(v_x_1809_);
v_x_1807_ = v_fn_1815_;
v_x_1808_ = v___x_1817_;
v_x_1809_ = v___x_1819_;
goto _start;
}
else
{
lean_dec(v_x_1809_);
if (lean_obj_tag(v_x_1807_) == 4)
{
lean_object* v_declName_1821_; lean_object* v___f_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v_declName_1821_ = lean_ctor_get(v_x_1807_, 0);
lean_inc_n(v_declName_1821_, 2);
lean_dec_ref_known(v_x_1807_, 2);
v___f_1822_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__1));
v___x_1823_ = l_Lean_instInhabitedExpr;
v___x_1824_ = l_Lean_Meta_getSparseCasesOnInfo___redArg(v_declName_1821_, v___y_1813_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 1);
if (lean_obj_tag(v_a_1825_) == 1)
{
lean_object* v_toCold_1826_; lean_object* v_options_1827_; lean_object* v_val_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_2141_; 
v_toCold_1826_ = lean_ctor_get(v___y_1812_, 0);
v_options_1827_ = lean_ctor_get(v_toCold_1826_, 2);
v_val_1828_ = lean_ctor_get(v_a_1825_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v_a_1825_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_1830_ = v_a_1825_;
v_isShared_1831_ = v_isSharedCheck_2141_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_val_1828_);
lean_dec(v_a_1825_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_2141_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v_inheritedTraceOptions_1832_; uint8_t v_hasTrace_1833_; lean_object* v___x_1834_; lean_object* v___y_1836_; lean_object* v___y_1837_; uint8_t v___y_1838_; lean_object* v___y_1871_; lean_object* v_a_1872_; lean_object* v___y_1876_; lean_object* v___y_1879_; lean_object* v___y_1880_; uint8_t v___y_1881_; lean_object* v___y_1914_; lean_object* v_a_1915_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; 
v_inheritedTraceOptions_1832_ = lean_ctor_get(v_toCold_1826_, 11);
v_hasTrace_1833_ = lean_ctor_get_uint8(v_options_1827_, sizeof(void*)*1);
v___x_1834_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__5));
if (v_hasTrace_1833_ == 0)
{
lean_object* v_majorPos_1950_; lean_object* v_arity_1951_; lean_object* v_insterestingCtors_1952_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v_majorPos_1950_ = lean_ctor_get(v_val_1828_, 1);
v_arity_1951_ = lean_ctor_get(v_val_1828_, 2);
v_insterestingCtors_1952_ = lean_ctor_get(v_val_1828_, 3);
v___x_1972_ = lean_array_get_size(v_x_1808_);
v___x_1973_ = lean_nat_dec_lt(v___x_1972_, v_arity_1951_);
if (v___x_1973_ == 0)
{
v___y_1954_ = v___y_1810_;
v___y_1955_ = v___y_1811_;
v___y_1956_ = v___y_1812_;
v___y_1957_ = v___y_1813_;
goto v___jp_1953_;
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_del_object(v___x_1830_);
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v___x_1974_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__2___closed__1);
v___x_1975_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1974_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
lean_inc(v_a_1976_);
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
v___y_1914_ = v___x_1981_;
v_a_1915_ = v_a_1976_;
goto v___jp_1913_;
}
}
}
v___jp_1953_:
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_array_get_borrowed(v___x_1823_, v_x_1808_, v_majorPos_1950_);
v___x_1959_ = l_Lean_Expr_isFVar(v___x_1958_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
lean_inc(v___x_1958_);
lean_del_object(v___x_1830_);
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v___x_1960_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__2);
v___x_1961_ = l_Lean_indentExpr(v___x_1958_);
v___x_1962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1960_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_1962_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1963_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1963_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
lean_inc(v_a_1964_);
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
v___y_1914_ = v___x_1969_;
v_a_1915_ = v_a_1964_;
goto v___jp_1913_;
}
}
}
else
{
lean_inc_ref(v_insterestingCtors_1952_);
lean_inc(v_majorPos_1950_);
v___y_1919_ = v_majorPos_1950_;
v___y_1920_ = v_insterestingCtors_1952_;
v___y_1921_ = v___y_1954_;
v___y_1922_ = v___y_1955_;
v___y_1923_ = v___y_1956_;
v___y_1924_ = v___y_1957_;
goto v___jp_1918_;
}
}
}
else
{
lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v_a_1990_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v_a_2005_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; uint8_t v___y_2011_; lean_object* v___y_2022_; lean_object* v___y_2023_; lean_object* v_a_2024_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v_a_2043_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v_a_2055_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2060_; uint8_t v___y_2061_; lean_object* v___y_2072_; lean_object* v___y_2073_; lean_object* v_a_2074_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; 
lean_del_object(v___x_1830_);
v___x_1984_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__6));
v___x_1985_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__9);
v___x_1986_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1832_, v_options_1827_, v___x_1985_);
if (v___x_1986_ == 0)
{
lean_object* v___x_2123_; uint8_t v___x_2124_; 
v___x_2123_ = l_Lean_trace_profiler;
v___x_2124_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_options_1827_, v___x_2123_);
if (v___x_2124_ == 0)
{
if (v___x_1986_ == 0)
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = lean_box(0);
v___x_2126_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v___x_2124_, v_declName_1821_, v_hasTrace_1833_, v___x_2125_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_1876_ = v___x_2126_;
goto v___jp_1875_;
}
else
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2127_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3);
lean_inc(v_mvarId_1806_);
v___x_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2128_, 0, v_mvarId_1806_);
v___x_2129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_2129_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2132_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v___x_2124_, v_declName_1821_, v_hasTrace_1833_, v_a_2131_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_1876_ = v___x_2132_;
goto v___jp_1875_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v_a_2133_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2130_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2130_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
lean_inc(v_a_2133_);
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
v___y_1871_ = v___x_2138_;
v_a_1872_ = v_a_2133_;
goto v___jp_1870_;
}
}
}
}
}
else
{
goto v___jp_2090_;
}
}
else
{
goto v___jp_2090_;
}
v___jp_1987_:
{
lean_object* v___x_1991_; double v___x_1992_; double v___x_1993_; double v___x_1994_; double v___x_1995_; double v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1991_ = lean_io_mono_nanos_now();
v___x_1992_ = lean_float_of_nat(v___y_1989_);
v___x_1993_ = lean_float_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__10);
v___x_1994_ = lean_float_div(v___x_1992_, v___x_1993_);
v___x_1995_ = lean_float_of_nat(v___x_1991_);
v___x_1996_ = lean_float_div(v___x_1995_, v___x_1993_);
v___x_1997_ = lean_box_float(v___x_1994_);
v___x_1998_ = lean_box_float(v___x_1996_);
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1997_);
lean_ctor_set(v___x_1999_, 1, v___x_1998_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v_a_1990_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(v___x_1834_, v_hasTrace_1833_, v___x_1984_, v_options_1827_, v___x_1986_, v___y_1988_, v___f_1822_, v___x_2000_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_2001_;
}
v___jp_2002_:
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v_a_2005_);
v___y_1988_ = v___y_2003_;
v___y_1989_ = v___y_2004_;
v_a_1990_ = v___x_2006_;
goto v___jp_1987_;
}
v___jp_2007_:
{
if (v___y_2011_ == 0)
{
lean_object* v___x_2012_; lean_object* v_a_2013_; uint8_t v___x_2014_; 
v___x_2012_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(v___x_1834_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref(v___x_2012_);
v___x_2014_ = lean_unbox(v_a_2013_);
lean_dec(v_a_2013_);
if (v___x_2014_ == 0)
{
v___y_2003_ = v___y_2008_;
v___y_2004_ = v___y_2009_;
v_a_2005_ = v___y_2010_;
goto v___jp_2002_;
}
else
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2015_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1);
lean_inc_ref(v___y_2010_);
v___x_2016_ = l_Lean_Exception_toMessageData(v___y_2010_);
v___x_2017_ = l_Lean_indentD(v___x_2016_);
v___x_2018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2015_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_2018_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_dec_ref_known(v___x_2019_, 1);
v___y_2003_ = v___y_2008_;
v___y_2004_ = v___y_2009_;
v_a_2005_ = v___y_2010_;
goto v___jp_2002_;
}
else
{
lean_object* v_a_2020_; 
lean_dec_ref(v___y_2010_);
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2019_, 1);
v___y_2003_ = v___y_2008_;
v___y_2004_ = v___y_2009_;
v_a_2005_ = v_a_2020_;
goto v___jp_2002_;
}
}
}
else
{
v___y_2003_ = v___y_2008_;
v___y_2004_ = v___y_2009_;
v_a_2005_ = v___y_2010_;
goto v___jp_2002_;
}
}
v___jp_2021_:
{
uint8_t v___x_2025_; 
v___x_2025_ = l_Lean_Exception_isInterrupt(v_a_2024_);
if (v___x_2025_ == 0)
{
uint8_t v___x_2026_; 
lean_inc_ref(v_a_2024_);
v___x_2026_ = l_Lean_Exception_isRuntime(v_a_2024_);
v___y_2008_ = v___y_2022_;
v___y_2009_ = v___y_2023_;
v___y_2010_ = v_a_2024_;
v___y_2011_ = v___x_2026_;
goto v___jp_2007_;
}
else
{
v___y_2008_ = v___y_2022_;
v___y_2009_ = v___y_2023_;
v___y_2010_ = v_a_2024_;
v___y_2011_ = v___x_2025_;
goto v___jp_2007_;
}
}
v___jp_2027_:
{
if (lean_obj_tag(v___y_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
v_a_2031_ = lean_ctor_get(v___y_2030_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___y_2030_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___y_2030_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___y_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
lean_ctor_set_tag(v___x_2033_, 1);
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
v___y_1988_ = v___y_2028_;
v___y_1989_ = v___y_2029_;
v_a_1990_ = v___x_2036_;
goto v___jp_1987_;
}
}
}
else
{
lean_object* v_a_2039_; 
v_a_2039_ = lean_ctor_get(v___y_2030_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___y_2030_, 1);
v___y_2022_ = v___y_2028_;
v___y_2023_ = v___y_2029_;
v_a_2024_ = v_a_2039_;
goto v___jp_2021_;
}
}
v___jp_2040_:
{
lean_object* v___x_2044_; double v___x_2045_; double v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2044_ = lean_io_get_num_heartbeats();
v___x_2045_ = lean_float_of_nat(v___y_2041_);
v___x_2046_ = lean_float_of_nat(v___x_2044_);
v___x_2047_ = lean_box_float(v___x_2045_);
v___x_2048_ = lean_box_float(v___x_2046_);
v___x_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2047_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_a_2043_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_reduceSparseCasesOn_spec__6(v___x_1834_, v_hasTrace_1833_, v___x_1984_, v_options_1827_, v___x_1986_, v___y_2042_, v___f_1822_, v___x_2050_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_2051_;
}
v___jp_2052_:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_a_2055_);
v___y_2041_ = v___y_2053_;
v___y_2042_ = v___y_2054_;
v_a_2043_ = v___x_2056_;
goto v___jp_2040_;
}
v___jp_2057_:
{
if (v___y_2061_ == 0)
{
lean_object* v___x_2062_; lean_object* v_a_2063_; uint8_t v___x_2064_; 
v___x_2062_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(v___x_1834_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref(v___x_2062_);
v___x_2064_ = lean_unbox(v_a_2063_);
lean_dec(v_a_2063_);
if (v___x_2064_ == 0)
{
v___y_2053_ = v___y_2058_;
v___y_2054_ = v___y_2059_;
v_a_2055_ = v___y_2060_;
goto v___jp_2052_;
}
else
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2065_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1);
lean_inc_ref(v___y_2060_);
v___x_2066_ = l_Lean_Exception_toMessageData(v___y_2060_);
v___x_2067_ = l_Lean_indentD(v___x_2066_);
v___x_2068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2065_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
v___x_2069_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_2068_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_dec_ref_known(v___x_2069_, 1);
v___y_2053_ = v___y_2058_;
v___y_2054_ = v___y_2059_;
v_a_2055_ = v___y_2060_;
goto v___jp_2052_;
}
else
{
lean_object* v_a_2070_; 
lean_dec_ref(v___y_2060_);
v_a_2070_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_a_2070_);
lean_dec_ref_known(v___x_2069_, 1);
v___y_2053_ = v___y_2058_;
v___y_2054_ = v___y_2059_;
v_a_2055_ = v_a_2070_;
goto v___jp_2052_;
}
}
}
else
{
v___y_2053_ = v___y_2058_;
v___y_2054_ = v___y_2059_;
v_a_2055_ = v___y_2060_;
goto v___jp_2052_;
}
}
v___jp_2071_:
{
uint8_t v___x_2075_; 
v___x_2075_ = l_Lean_Exception_isInterrupt(v_a_2074_);
if (v___x_2075_ == 0)
{
uint8_t v___x_2076_; 
lean_inc_ref(v_a_2074_);
v___x_2076_ = l_Lean_Exception_isRuntime(v_a_2074_);
v___y_2058_ = v___y_2072_;
v___y_2059_ = v___y_2073_;
v___y_2060_ = v_a_2074_;
v___y_2061_ = v___x_2076_;
goto v___jp_2057_;
}
else
{
v___y_2058_ = v___y_2072_;
v___y_2059_ = v___y_2073_;
v___y_2060_ = v_a_2074_;
v___y_2061_ = v___x_2075_;
goto v___jp_2057_;
}
}
v___jp_2077_:
{
if (lean_obj_tag(v___y_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_a_2081_ = lean_ctor_get(v___y_2080_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___y_2080_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___y_2080_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___y_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 1);
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
v___y_2041_ = v___y_2078_;
v___y_2042_ = v___y_2079_;
v_a_2043_ = v___x_2086_;
goto v___jp_2040_;
}
}
}
else
{
lean_object* v_a_2089_; 
v_a_2089_ = lean_ctor_get(v___y_2080_, 0);
lean_inc(v_a_2089_);
lean_dec_ref_known(v___y_2080_, 1);
v___y_2072_ = v___y_2078_;
v___y_2073_ = v___y_2079_;
v_a_2074_ = v_a_2089_;
goto v___jp_2071_;
}
}
v___jp_2090_:
{
lean_object* v___x_2091_; lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2122_; 
v___x_2091_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_reduceSparseCasesOn_spec__4___redArg(v___y_1813_);
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2122_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2122_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2096_; uint8_t v___x_2097_; 
v___x_2096_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2097_ = l_Lean_Option_get___at___00Lean_Meta_reduceSparseCasesOn_spec__5(v_options_1827_, v___x_2096_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_io_mono_nanos_now();
if (v___x_1986_ == 0)
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_del_object(v___x_2094_);
v___x_2099_ = lean_box(0);
v___x_2100_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v___x_2097_, v_declName_1821_, v_hasTrace_1833_, v___x_2099_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_2028_ = v_a_2092_;
v___y_2029_ = v___x_2098_;
v___y_2030_ = v___x_2100_;
goto v___jp_2027_;
}
else
{
lean_object* v___x_2101_; lean_object* v___x_2103_; 
v___x_2101_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3);
lean_inc(v_mvarId_1806_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set_tag(v___x_2094_, 1);
lean_ctor_set(v___x_2094_, 0, v_mvarId_1806_);
v___x_2103_ = v___x_2094_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_mvarId_1806_);
v___x_2103_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2101_);
lean_ctor_set(v___x_2104_, 1, v___x_2103_);
v___x_2105_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_2104_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v_a_2106_; lean_object* v___x_2107_; 
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
lean_inc(v_a_2106_);
lean_dec_ref_known(v___x_2105_, 1);
v___x_2107_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__0(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v___x_2097_, v_declName_1821_, v_hasTrace_1833_, v_a_2106_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_2028_ = v_a_2092_;
v___y_2029_ = v___x_2098_;
v___y_2030_ = v___x_2107_;
goto v___jp_2027_;
}
else
{
lean_object* v_a_2108_; 
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v_a_2108_ = lean_ctor_get(v___x_2105_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2105_, 1);
v___y_2022_ = v_a_2092_;
v___y_2023_ = v___x_2098_;
v_a_2024_ = v_a_2108_;
goto v___jp_2021_;
}
}
}
}
else
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_io_get_num_heartbeats();
if (v___x_1986_ == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_del_object(v___x_2094_);
v___x_2111_ = lean_box(0);
v___x_2112_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v_declName_1821_, v___x_2097_, v___x_2111_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_2078_ = v___x_2110_;
v___y_2079_ = v_a_2092_;
v___y_2080_ = v___x_2112_;
goto v___jp_2077_;
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2113_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__3);
lean_inc(v_mvarId_1806_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set_tag(v___x_2094_, 1);
lean_ctor_set(v___x_2094_, 0, v_mvarId_1806_);
v___x_2115_ = v___x_2094_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_mvarId_1806_);
v___x_2115_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2113_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_2116_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2119_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v___x_2119_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__2(v_val_1828_, v___x_1823_, v_x_1808_, v_mvarId_1806_, v_declName_1821_, v___x_2097_, v_a_2118_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
lean_dec_ref(v_x_1808_);
v___y_2078_ = v___x_2110_;
v___y_2079_ = v_a_2092_;
v___y_2080_ = v___x_2119_;
goto v___jp_2077_;
}
else
{
lean_object* v_a_2120_; 
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v_a_2120_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2120_);
lean_dec_ref_known(v___x_2117_, 1);
v___y_2072_ = v___x_2110_;
v___y_2073_ = v_a_2092_;
v_a_2074_ = v_a_2120_;
goto v___jp_2071_;
}
}
}
}
}
}
}
v___jp_1835_:
{
if (v___y_1838_ == 0)
{
lean_object* v___x_1839_; lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1869_; 
lean_dec_ref(v___y_1837_);
v___x_1839_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(v___x_1834_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1869_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1869_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_unbox(v_a_1840_);
lean_dec(v_a_1840_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1846_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set_tag(v___x_1842_, 1);
lean_ctor_set(v___x_1842_, 0, v___y_1836_);
v___x_1846_ = v___x_1842_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___y_1836_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
lean_del_object(v___x_1842_);
v___x_1848_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1);
lean_inc_ref(v___y_1836_);
v___x_1849_ = l_Lean_Exception_toMessageData(v___y_1836_);
v___x_1850_ = l_Lean_indentD(v___x_1849_);
v___x_1851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1848_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_1851_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; 
v_unused_1860_ = lean_ctor_get(v___x_1852_, 0);
lean_dec(v_unused_1860_);
v___x_1854_ = v___x_1852_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_dec(v___x_1852_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set_tag(v___x_1854_, 1);
lean_ctor_set(v___x_1854_, 0, v___y_1836_);
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___y_1836_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
lean_dec_ref(v___y_1836_);
v_a_1861_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1852_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1852_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_1836_);
return v___y_1837_;
}
}
v___jp_1870_:
{
uint8_t v___x_1873_; 
v___x_1873_ = l_Lean_Exception_isInterrupt(v_a_1872_);
if (v___x_1873_ == 0)
{
uint8_t v___x_1874_; 
lean_inc_ref(v_a_1872_);
v___x_1874_ = l_Lean_Exception_isRuntime(v_a_1872_);
v___y_1836_ = v_a_1872_;
v___y_1837_ = v___y_1871_;
v___y_1838_ = v___x_1874_;
goto v___jp_1835_;
}
else
{
v___y_1836_ = v_a_1872_;
v___y_1837_ = v___y_1871_;
v___y_1838_ = v___x_1873_;
goto v___jp_1835_;
}
}
v___jp_1875_:
{
if (lean_obj_tag(v___y_1876_) == 0)
{
return v___y_1876_;
}
else
{
lean_object* v_a_1877_; 
v_a_1877_ = lean_ctor_get(v___y_1876_, 0);
lean_inc(v_a_1877_);
v___y_1871_ = v___y_1876_;
v_a_1872_ = v_a_1877_;
goto v___jp_1870_;
}
}
v___jp_1878_:
{
if (v___y_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1912_; 
lean_dec_ref(v___y_1880_);
v___x_1882_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__1(v___x_1834_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1912_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1912_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
uint8_t v___x_1887_; 
v___x_1887_ = lean_unbox(v_a_1883_);
lean_dec(v_a_1883_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1889_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set_tag(v___x_1885_, 1);
lean_ctor_set(v___x_1885_, 0, v___y_1879_);
v___x_1889_ = v___x_1885_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___y_1879_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
else
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_del_object(v___x_1885_);
v___x_1891_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___closed__1);
lean_inc_ref(v___y_1879_);
v___x_1892_ = l_Lean_Exception_toMessageData(v___y_1879_);
v___x_1893_ = l_Lean_indentD(v___x_1892_);
v___x_1894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1891_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = l_Lean_addTrace___at___00Lean_Meta_splitSparseCasesOn_spec__0(v___x_1834_, v___x_1894_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; 
v_unused_1903_ = lean_ctor_get(v___x_1895_, 0);
lean_dec(v_unused_1903_);
v___x_1897_ = v___x_1895_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_dec(v___x_1895_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set_tag(v___x_1897_, 1);
lean_ctor_set(v___x_1897_, 0, v___y_1879_);
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v___y_1879_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec_ref(v___y_1879_);
v_a_1904_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1895_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1895_);
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
lean_dec_ref(v___y_1879_);
return v___y_1880_;
}
}
v___jp_1913_:
{
uint8_t v___x_1916_; 
v___x_1916_ = l_Lean_Exception_isInterrupt(v_a_1915_);
if (v___x_1916_ == 0)
{
uint8_t v___x_1917_; 
lean_inc_ref(v_a_1915_);
v___x_1917_ = l_Lean_Exception_isRuntime(v_a_1915_);
v___y_1879_ = v_a_1915_;
v___y_1880_ = v___y_1914_;
v___y_1881_ = v___x_1917_;
goto v___jp_1878_;
}
else
{
v___y_1879_ = v_a_1915_;
v___y_1880_ = v___y_1914_;
v___y_1881_ = v___x_1916_;
goto v___jp_1878_;
}
}
v___jp_1918_:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1925_ = lean_array_get(v___x_1823_, v_x_1808_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v_x_1808_);
v___x_1926_ = l_Lean_Expr_fvarId_x21(v___x_1925_);
lean_dec(v___x_1925_);
v___x_1927_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___lam__3___closed__0));
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___y_1920_);
v___x_1929_ = v___x_1830_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___y_1920_);
v___x_1929_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_MVarId_cases(v_mvarId_1806_, v___x_1926_, v___x_1927_, v_hasTrace_1833_, v___x_1929_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; size_t v_sz_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_30830__overap_1938_; lean_object* v___x_1939_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v_sz_1932_ = lean_array_size(v_a_1931_);
v___x_1933_ = l_unsafeCast___redArg(v_a_1931_);
lean_dec(v_a_1931_);
v___x_1934_ = lean_box(v_hasTrace_1833_);
v___x_1935_ = lean_box_usize(v_sz_1932_);
v___x_1936_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___boxed__const__1));
v___x_1937_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_splitSparseCasesOn_spec__3___boxed), 11, 6);
lean_closure_set(v___x_1937_, 0, v_declName_1821_);
lean_closure_set(v___x_1937_, 1, v_val_1828_);
lean_closure_set(v___x_1937_, 2, v___x_1934_);
lean_closure_set(v___x_1937_, 3, v___x_1935_);
lean_closure_set(v___x_1937_, 4, v___x_1936_);
lean_closure_set(v___x_1937_, 5, v___x_1933_);
v___x_30830__overap_1938_ = l_unsafeCast___redArg(v___x_1937_);
lean_dec_ref(v___x_1937_);
lean_inc(v___y_1924_);
lean_inc_ref(v___y_1923_);
lean_inc(v___y_1922_);
lean_inc_ref(v___y_1921_);
v___x_1939_ = lean_apply_5(v___x_30830__overap_1938_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, lean_box(0));
if (lean_obj_tag(v___x_1939_) == 0)
{
return v___x_1939_;
}
else
{
lean_object* v_a_1940_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
v___y_1914_ = v___x_1939_;
v_a_1915_ = v_a_1940_;
goto v___jp_1913_;
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec(v_val_1828_);
lean_dec(v_declName_1821_);
v_a_1941_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1930_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1930_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
lean_inc(v_a_1941_);
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
v___y_1914_ = v___x_1946_;
v_a_1915_ = v_a_1941_;
goto v___jp_1913_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec(v_a_1825_);
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v___x_2142_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__12);
v___x_2143_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_2142_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_2143_;
}
}
else
{
lean_object* v_a_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2151_; 
lean_dec(v_declName_1821_);
lean_dec_ref(v_x_1808_);
lean_dec(v_mvarId_1806_);
v_a_2144_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2146_ = v___x_1824_;
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_a_2144_);
lean_dec(v___x_1824_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2149_; 
if (v_isShared_2147_ == 0)
{
v___x_2149_ = v___x_2146_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_a_2144_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
lean_dec_ref(v_x_1808_);
lean_dec_ref(v_x_1807_);
lean_dec(v_mvarId_1806_);
v___x_2152_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___closed__14);
v___x_2153_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_2152_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_2153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6___boxed(lean_object* v_mvarId_2154_, lean_object* v_x_2155_, lean_object* v_x_2156_, lean_object* v_x_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6(v_mvarId_2154_, v_x_2155_, v_x_2156_, v_x_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitSparseCasesOn(lean_object* v_mvarId_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_){
_start:
{
lean_object* v___x_2170_; 
lean_inc(v_mvarId_2164_);
v___x_2170_ = l_Lean_MVarId_getType(v_mvarId_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2172_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
v___x_2172_ = l_Lean_Meta_matchEqHEqLHS_x3f(v_a_2171_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
if (lean_obj_tag(v_a_2173_) == 1)
{
lean_object* v_val_2174_; lean_object* v_snd_2175_; lean_object* v_dummy_2176_; lean_object* v_nargs_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v_val_2174_ = lean_ctor_get(v_a_2173_, 0);
lean_inc(v_val_2174_);
lean_dec_ref_known(v_a_2173_, 1);
v_snd_2175_ = lean_ctor_get(v_val_2174_, 1);
lean_inc(v_snd_2175_);
lean_dec(v_val_2174_);
v_dummy_2176_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_reduceSparseCasesOn_spec__7___lam__1___closed__1);
v_nargs_2177_ = l_Lean_Expr_getAppNumArgs(v_snd_2175_);
lean_inc(v_nargs_2177_);
v___x_2178_ = lean_mk_array(v_nargs_2177_, v_dummy_2176_);
v___x_2179_ = lean_unsigned_to_nat(1u);
v___x_2180_ = lean_nat_sub(v_nargs_2177_, v___x_2179_);
lean_dec(v_nargs_2177_);
v___x_2181_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_splitSparseCasesOn_spec__6(v_mvarId_2164_, v_snd_2175_, v___x_2178_, v___x_2180_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
return v___x_2181_;
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
lean_dec(v_a_2173_);
lean_dec(v_mvarId_2164_);
v___x_2182_ = lean_obj_once(&l_Lean_Meta_reduceSparseCasesOn___closed__1, &l_Lean_Meta_reduceSparseCasesOn___closed__1_once, _init_l_Lean_Meta_reduceSparseCasesOn___closed__1);
v___x_2183_ = l_Lean_throwError___at___00Lean_Meta_reduceSparseCasesOn_spec__3___redArg(v___x_2182_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
return v___x_2183_;
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_mvarId_2164_);
v_a_2184_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2172_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2172_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_dec(v_mvarId_2164_);
v_a_2192_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2170_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2170_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitSparseCasesOn___boxed(lean_object* v_mvarId_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_Meta_splitSparseCasesOn(v_mvarId_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
return v_res_2206_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOnEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOnEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOnEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOnEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_SplitSparseCasesOn(builtin);
}
#ifdef __cplusplus
}
#endif

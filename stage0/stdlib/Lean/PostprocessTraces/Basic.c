// Lean compiler output
// Module: Lean.PostprocessTraces.Basic
// Imports: public meta import Lean.Elab.Command public meta import Lean.Meta.Eval import Lean.CoreM
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLe(double, double);
double lean_float_add(double, double);
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_getAll(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_Command_runTermElabM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_node_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_instInhabitedTraceTree;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_PostprocessTraces_TraceTree_ofMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_TraceTree_ofMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor = (const lean_object*)&l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_data_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_data_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_cls_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_cls_x3f___boxed(lean_object*);
static const lean_array_object l_Lean_PostprocessTraces_TraceTree_children___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PostprocessTraces_TraceTree_children___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_TraceTree_children___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_children(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_children___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_withChildren(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_modifyData(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0;
LEAN_EXPORT double l_Lean_PostprocessTraces_TraceTree_elapsed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_elapsed___boxed(lean_object*);
LEAN_EXPORT double l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0(lean_object*, size_t, size_t, double);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double l_Lean_PostprocessTraces_TraceTree_selfElapsed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_selfElapsed___boxed(lean_object*);
static const lean_string_object l_Lean_PostprocessTraces_TraceTree_headText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_PostprocessTraces_TraceTree_headText___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_TraceTree_headText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_headText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_headText___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_result_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_result_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_collectSubtrees(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_collectSubtrees___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_filterSubtrees(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_filterSubtrees___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__0_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__1 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_traceContainer_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1;
static lean_once_cell_t l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2;
static const lean_array_object l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__3 = (const lean_object*)&l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__3 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__3_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value_aux_2),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__3_value),LEAN_SCALAR_PTR_LITERAL(77, 46, 79, 112, 232, 100, 17, 35)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__5 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__5_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "openSimple"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__6 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__6_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value_aux_2),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 238, 134, 92, 162, 110, 43, 67)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__8 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__8_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__9 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__9_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.PostprocessTraces"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__10 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__10_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "PostprocessTraces"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__14 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__14_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__15 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__15_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__16 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__16_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__17 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__17_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value_aux_2),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__17_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__19 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__19_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value_aux_2),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__21 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__21_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__22 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__22_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__23 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__23_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__24 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__24_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__27 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__27_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__27_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12_value),LEAN_SCALAR_PTR_LITERAL(131, 135, 26, 65, 16, 127, 78, 49)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__28_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__29 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__29_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__27_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__30_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__31 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__31_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__31_value),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__15_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__32 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__32_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__29_value),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__32_value)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__33 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__33_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__34 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__34_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "TracePostprocessor"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35_value),LEAN_SCALAR_PTR_LITERAL(251, 174, 159, 176, 196, 77, 180, 200)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__37 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__37_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value_aux_0),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__12_value),LEAN_SCALAR_PTR_LITERAL(169, 31, 168, 57, 105, 170, 97, 138)}};
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value_aux_1),((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35_value),LEAN_SCALAR_PTR_LITERAL(33, 98, 63, 149, 37, 148, 219, 124)}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__39 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__39_value;
static const lean_ctor_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__40 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__40_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__41 = (const lean_object*)&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__41_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_PostprocessTraces_TraceTree_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_data_8_; lean_object* v_msg_9_; lean_object* v_children_10_; lean_object* v_wrap_11_; lean_object* v___x_12_; 
v_data_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_data_8_);
v_msg_9_ = lean_ctor_get(v_t_6_, 1);
lean_inc_ref(v_msg_9_);
v_children_10_ = lean_ctor_get(v_t_6_, 2);
lean_inc_ref(v_children_10_);
v_wrap_11_ = lean_ctor_get(v_t_6_, 3);
lean_inc_ref(v_wrap_11_);
lean_dec_ref_known(v_t_6_, 4);
v___x_12_ = lean_apply_4(v_k_7_, v_data_8_, v_msg_9_, v_children_10_, v_wrap_11_);
return v___x_12_;
}
else
{
lean_object* v_msg_13_; lean_object* v___x_14_; 
v_msg_13_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_msg_13_);
lean_dec_ref_known(v_t_6_, 1);
v___x_14_ = lean_apply_1(v_k_7_, v_msg_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim(lean_object* v_motive__1_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ctorElim___boxed(lean_object* v_motive__1_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_PostprocessTraces_TraceTree_ctorElim(v_motive__1_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_node_elim___redArg(lean_object* v_t_27_, lean_object* v_node_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(v_t_27_, v_node_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_node_elim(lean_object* v_motive__1_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_node_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(v_t_31_, v_node_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_leaf_elim___redArg(lean_object* v_t_35_, lean_object* v_leaf_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(v_t_35_, v_leaf_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_leaf_elim(lean_object* v_motive__1_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_leaf_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_PostprocessTraces_TraceTree_ctorElim___redArg(v_t_39_, v_leaf_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = l_Lean_MessageData_nil;
v___x_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_PostprocessTraces_instInhabitedTraceTree(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_obj_once(&l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0, &l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0_once, _init_l_Lean_PostprocessTraces_instInhabitedTraceTree___closed__0);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__0(lean_object* v_a_46_, lean_object* v_wrap_47_, lean_object* v_m_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_49_, 0, v_a_46_);
lean_ctor_set(v___x_49_, 1, v_m_48_);
v___x_50_ = lean_apply_1(v_wrap_47_, v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__1(lean_object* v_a_51_, lean_object* v_wrap_52_, lean_object* v_m_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_54_, 0, v_a_51_);
lean_ctor_set(v___x_54_, 1, v_m_53_);
v___x_55_ = lean_apply_1(v_wrap_52_, v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0(lean_object* v___y_56_){
_start:
{
lean_inc_ref(v___y_56_);
return v___y_56_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0___boxed(lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___lam__0(v___y_57_);
lean_dec_ref(v___y_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go(lean_object* v_wrap_60_, lean_object* v_a_61_){
_start:
{
switch(lean_obj_tag(v_a_61_))
{
case 3:
{
lean_object* v_a_62_; lean_object* v_a_63_; lean_object* v___f_64_; 
v_a_62_ = lean_ctor_get(v_a_61_, 0);
lean_inc_ref(v_a_62_);
v_a_63_ = lean_ctor_get(v_a_61_, 1);
lean_inc_ref(v_a_63_);
lean_dec_ref_known(v_a_61_, 2);
v___f_64_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__0), 3, 2);
lean_closure_set(v___f_64_, 0, v_a_62_);
lean_closure_set(v___f_64_, 1, v_wrap_60_);
v_wrap_60_ = v___f_64_;
v_a_61_ = v_a_63_;
goto _start;
}
case 4:
{
lean_object* v_a_66_; lean_object* v_a_67_; lean_object* v___f_68_; 
v_a_66_ = lean_ctor_get(v_a_61_, 0);
lean_inc_ref(v_a_66_);
v_a_67_ = lean_ctor_get(v_a_61_, 1);
lean_inc_ref(v_a_67_);
lean_dec_ref_known(v_a_61_, 2);
v___f_68_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__1), 3, 2);
lean_closure_set(v___f_68_, 0, v_a_66_);
lean_closure_set(v___f_68_, 1, v_wrap_60_);
v_wrap_60_ = v___f_68_;
v_a_61_ = v_a_67_;
goto _start;
}
case 9:
{
lean_object* v_data_70_; lean_object* v_msg_71_; lean_object* v_children_72_; size_t v_sz_73_; size_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_data_70_ = lean_ctor_get(v_a_61_, 0);
lean_inc_ref(v_data_70_);
v_msg_71_ = lean_ctor_get(v_a_61_, 1);
lean_inc_ref(v_msg_71_);
v_children_72_ = lean_ctor_get(v_a_61_, 2);
lean_inc_ref(v_children_72_);
lean_dec_ref_known(v_a_61_, 3);
v_sz_73_ = lean_array_size(v_children_72_);
v___x_74_ = ((size_t)0ULL);
v___x_75_ = l_unsafeCast___redArg(v_children_72_);
lean_dec_ref(v_children_72_);
v___x_76_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0(v_sz_73_, v___x_74_, v___x_75_);
v___x_77_ = l_unsafeCast___redArg(v___x_76_);
lean_dec_ref(v___x_76_);
v___x_78_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_78_, 0, v_data_70_);
lean_ctor_set(v___x_78_, 1, v_msg_71_);
lean_ctor_set(v___x_78_, 2, v___x_77_);
lean_ctor_set(v___x_78_, 3, v_wrap_60_);
return v___x_78_;
}
default: 
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_apply_1(v_wrap_60_, v_a_61_);
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0(size_t v_sz_81_, size_t v_i_82_, lean_object* v_bs_83_){
_start:
{
uint8_t v___x_84_; 
v___x_84_ = lean_usize_dec_lt(v_i_82_, v_sz_81_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; 
v___x_85_ = l_unsafeCast___redArg(v_bs_83_);
lean_dec_ref(v_bs_83_);
return v___x_85_;
}
else
{
lean_object* v___f_86_; lean_object* v_v_87_; lean_object* v___x_88_; lean_object* v_bs_x27_89_; lean_object* v___x_90_; lean_object* v___x_91_; size_t v___x_92_; size_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___f_86_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___closed__0));
v_v_87_ = lean_array_uget(v_bs_83_, v_i_82_);
v___x_88_ = lean_unsigned_to_nat(0u);
v_bs_x27_89_ = lean_array_uset(v_bs_83_, v_i_82_, v___x_88_);
v___x_90_ = l_unsafeCast___redArg(v_v_87_);
lean_dec(v_v_87_);
v___x_91_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go(v___f_86_, v___x_90_);
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_add(v_i_82_, v___x_92_);
v___x_94_ = l_unsafeCast___redArg(v___x_91_);
lean_dec_ref(v___x_91_);
v___x_95_ = lean_array_uset(v_bs_x27_89_, v_i_82_, v___x_94_);
v_i_82_ = v___x_93_;
v_bs_83_ = v___x_95_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0___boxed(lean_object* v_sz_97_, lean_object* v_i_98_, lean_object* v_bs_99_){
_start:
{
size_t v_sz_boxed_100_; size_t v_i_boxed_101_; lean_object* v_res_102_; 
v_sz_boxed_100_ = lean_unbox_usize(v_sz_97_);
lean_dec(v_sz_97_);
v_i_boxed_101_ = lean_unbox_usize(v_i_98_);
lean_dec(v_i_98_);
v_res_102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go_spec__0(v_sz_boxed_100_, v_i_boxed_101_, v_bs_99_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0(lean_object* v___y_103_){
_start:
{
lean_inc_ref(v___y_103_);
return v___y_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0___boxed(lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_PostprocessTraces_TraceTree_ofMessageData___lam__0(v___y_104_);
lean_dec_ref(v___y_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_ofMessageData(lean_object* v_msg_107_){
_start:
{
lean_object* v___f_108_; lean_object* v___x_109_; 
v___f_108_ = ((lean_object*)(l_Lean_PostprocessTraces_TraceTree_ofMessageData___closed__0));
v___x_109_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go(v___f_108_, v_msg_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0(size_t v_sz_110_, size_t v_i_111_, lean_object* v_bs_112_){
_start:
{
uint8_t v___x_113_; 
v___x_113_ = lean_usize_dec_lt(v_i_111_, v_sz_110_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = l_unsafeCast___redArg(v_bs_112_);
lean_dec_ref(v_bs_112_);
return v___x_114_;
}
else
{
lean_object* v_v_115_; lean_object* v___x_116_; lean_object* v_bs_x27_117_; lean_object* v___x_118_; lean_object* v___x_119_; size_t v___x_120_; size_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_v_115_ = lean_array_uget(v_bs_112_, v_i_111_);
v___x_116_ = lean_unsigned_to_nat(0u);
v_bs_x27_117_ = lean_array_uset(v_bs_112_, v_i_111_, v___x_116_);
v___x_118_ = l_unsafeCast___redArg(v_v_115_);
lean_dec(v_v_115_);
v___x_119_ = l_Lean_PostprocessTraces_TraceTree_toMessageData(v___x_118_);
v___x_120_ = ((size_t)1ULL);
v___x_121_ = lean_usize_add(v_i_111_, v___x_120_);
v___x_122_ = l_unsafeCast___redArg(v___x_119_);
lean_dec_ref(v___x_119_);
v___x_123_ = lean_array_uset(v_bs_x27_117_, v_i_111_, v___x_122_);
v_i_111_ = v___x_121_;
v_bs_112_ = v___x_123_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_toMessageData(lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_object* v_data_126_; lean_object* v_msg_127_; lean_object* v_children_128_; lean_object* v_wrap_129_; size_t v_sz_130_; size_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_data_126_ = lean_ctor_get(v_x_125_, 0);
lean_inc_ref(v_data_126_);
v_msg_127_ = lean_ctor_get(v_x_125_, 1);
lean_inc_ref(v_msg_127_);
v_children_128_ = lean_ctor_get(v_x_125_, 2);
lean_inc_ref(v_children_128_);
v_wrap_129_ = lean_ctor_get(v_x_125_, 3);
lean_inc_ref(v_wrap_129_);
lean_dec_ref_known(v_x_125_, 4);
v_sz_130_ = lean_array_size(v_children_128_);
v___x_131_ = ((size_t)0ULL);
v___x_132_ = l_unsafeCast___redArg(v_children_128_);
lean_dec_ref(v_children_128_);
v___x_133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0(v_sz_130_, v___x_131_, v___x_132_);
v___x_134_ = l_unsafeCast___redArg(v___x_133_);
lean_dec_ref(v___x_133_);
v___x_135_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_135_, 0, v_data_126_);
lean_ctor_set(v___x_135_, 1, v_msg_127_);
lean_ctor_set(v___x_135_, 2, v___x_134_);
v___x_136_ = lean_apply_1(v_wrap_129_, v___x_135_);
return v___x_136_;
}
else
{
lean_object* v_msg_137_; 
v_msg_137_ = lean_ctor_get(v_x_125_, 0);
lean_inc_ref(v_msg_137_);
lean_dec_ref_known(v_x_125_, 1);
return v_msg_137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0___boxed(lean_object* v_sz_138_, lean_object* v_i_139_, lean_object* v_bs_140_){
_start:
{
size_t v_sz_boxed_141_; size_t v_i_boxed_142_; lean_object* v_res_143_; 
v_sz_boxed_141_ = lean_unbox_usize(v_sz_138_);
lean_dec(v_sz_138_);
v_i_boxed_142_ = lean_unbox_usize(v_i_139_);
lean_dec(v_i_139_);
v_res_143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0(v_sz_boxed_141_, v_i_boxed_142_, v_bs_140_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0(lean_object* v_roots_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_148_, 0, v_roots_144_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0___boxed(lean_object* v_roots_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_PostprocessTraces_instInhabitedTracePostprocessor___lam__0(v_roots_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_data_x3f(lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_156_) == 0)
{
lean_object* v_data_157_; lean_object* v___x_158_; 
v_data_157_ = lean_ctor_get(v_x_156_, 0);
lean_inc_ref(v_data_157_);
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v_data_157_);
return v___x_158_;
}
else
{
lean_object* v___x_159_; 
v___x_159_ = lean_box(0);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_data_x3f___boxed(lean_object* v_x_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_PostprocessTraces_TraceTree_data_x3f(v_x_160_);
lean_dec_ref(v_x_160_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_cls_x3f(lean_object* v_t_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_PostprocessTraces_TraceTree_data_x3f(v_t_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v___x_164_; 
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v_val_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
v_val_165_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_173_ == 0)
{
v___x_167_ = v___x_163_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_val_165_);
lean_dec(v___x_163_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_cls_169_; lean_object* v___x_171_; 
v_cls_169_ = lean_ctor_get(v_val_165_, 0);
lean_inc(v_cls_169_);
lean_dec(v_val_165_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v_cls_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_cls_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_cls_x3f___boxed(lean_object* v_t_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_PostprocessTraces_TraceTree_cls_x3f(v_t_174_);
lean_dec_ref(v_t_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_children(lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v_children_179_; 
v_children_179_ = lean_ctor_get(v_x_178_, 2);
lean_inc_ref(v_children_179_);
return v_children_179_;
}
else
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lean_PostprocessTraces_TraceTree_children___closed__0));
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_children___boxed(lean_object* v_x_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_PostprocessTraces_TraceTree_children(v_x_181_);
lean_dec_ref(v_x_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_withChildren(lean_object* v_t_183_, lean_object* v_children_184_){
_start:
{
if (lean_obj_tag(v_t_183_) == 0)
{
lean_object* v_data_185_; lean_object* v_msg_186_; lean_object* v_wrap_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_data_185_ = lean_ctor_get(v_t_183_, 0);
v_msg_186_ = lean_ctor_get(v_t_183_, 1);
v_wrap_187_ = lean_ctor_get(v_t_183_, 3);
v_isSharedCheck_194_ = !lean_is_exclusive(v_t_183_);
if (v_isSharedCheck_194_ == 0)
{
lean_object* v_unused_195_; 
v_unused_195_ = lean_ctor_get(v_t_183_, 2);
lean_dec(v_unused_195_);
v___x_189_ = v_t_183_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_wrap_187_);
lean_inc(v_msg_186_);
lean_inc(v_data_185_);
lean_dec(v_t_183_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 2, v_children_184_);
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_data_185_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_msg_186_);
lean_ctor_set(v_reuseFailAlloc_193_, 2, v_children_184_);
lean_ctor_set(v_reuseFailAlloc_193_, 3, v_wrap_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
else
{
lean_dec_ref(v_children_184_);
return v_t_183_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_modifyData(lean_object* v_t_196_, lean_object* v_f_197_){
_start:
{
if (lean_obj_tag(v_t_196_) == 0)
{
lean_object* v_data_198_; lean_object* v_msg_199_; lean_object* v_children_200_; lean_object* v_wrap_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_209_; 
v_data_198_ = lean_ctor_get(v_t_196_, 0);
v_msg_199_ = lean_ctor_get(v_t_196_, 1);
v_children_200_ = lean_ctor_get(v_t_196_, 2);
v_wrap_201_ = lean_ctor_get(v_t_196_, 3);
v_isSharedCheck_209_ = !lean_is_exclusive(v_t_196_);
if (v_isSharedCheck_209_ == 0)
{
v___x_203_ = v_t_196_;
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_wrap_201_);
lean_inc(v_children_200_);
lean_inc(v_msg_199_);
lean_inc(v_data_198_);
lean_dec(v_t_196_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_209_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_205_ = lean_apply_1(v_f_197_, v_data_198_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_205_);
v___x_207_ = v___x_203_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_msg_199_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_children_200_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v_wrap_201_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
else
{
lean_dec_ref(v_f_197_);
return v_t_196_;
}
}
}
static double _init_l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0(void){
_start:
{
lean_object* v___x_210_; double v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_float_of_nat(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT double l_Lean_PostprocessTraces_TraceTree_elapsed(lean_object* v_t_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PostprocessTraces_TraceTree_data_x3f(v_t_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
double v___x_214_; 
v___x_214_ = lean_float_once(&l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0, &l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0_once, _init_l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0);
return v___x_214_;
}
else
{
lean_object* v_val_215_; double v_startTime_216_; double v_stopTime_217_; double v___x_218_; 
v_val_215_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_213_, 1);
v_startTime_216_ = lean_ctor_get_float(v_val_215_, sizeof(void*)*3);
v_stopTime_217_ = lean_ctor_get_float(v_val_215_, sizeof(void*)*3 + 8);
lean_dec(v_val_215_);
v___x_218_ = lean_float_sub(v_stopTime_217_, v_startTime_216_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_elapsed___boxed(lean_object* v_t_219_){
_start:
{
double v_res_220_; lean_object* v_r_221_; 
v_res_220_ = l_Lean_PostprocessTraces_TraceTree_elapsed(v_t_219_);
lean_dec_ref(v_t_219_);
v_r_221_ = lean_box_float(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT double l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0(lean_object* v_as_222_, size_t v_i_223_, size_t v_stop_224_, double v_b_225_){
_start:
{
uint8_t v___x_226_; 
v___x_226_ = lean_usize_dec_eq(v_i_223_, v_stop_224_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; double v___x_228_; double v___x_229_; size_t v___x_230_; size_t v___x_231_; 
v___x_227_ = lean_array_uget_borrowed(v_as_222_, v_i_223_);
v___x_228_ = l_Lean_PostprocessTraces_TraceTree_elapsed(v___x_227_);
v___x_229_ = lean_float_add(v_b_225_, v___x_228_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_223_, v___x_230_);
v_i_223_ = v___x_231_;
v_b_225_ = v___x_229_;
goto _start;
}
else
{
return v_b_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0___boxed(lean_object* v_as_233_, lean_object* v_i_234_, lean_object* v_stop_235_, lean_object* v_b_236_){
_start:
{
size_t v_i_boxed_237_; size_t v_stop_boxed_238_; double v_b_boxed_239_; double v_res_240_; lean_object* v_r_241_; 
v_i_boxed_237_ = lean_unbox_usize(v_i_234_);
lean_dec(v_i_234_);
v_stop_boxed_238_ = lean_unbox_usize(v_stop_235_);
lean_dec(v_stop_235_);
v_b_boxed_239_ = lean_unbox_float(v_b_236_);
lean_dec_ref(v_b_236_);
v_res_240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0(v_as_233_, v_i_boxed_237_, v_stop_boxed_238_, v_b_boxed_239_);
lean_dec_ref(v_as_233_);
v_r_241_ = lean_box_float(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT double l_Lean_PostprocessTraces_TraceTree_selfElapsed(lean_object* v_t_242_){
_start:
{
lean_object* v___x_243_; double v___x_244_; double v___x_245_; double v___y_247_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_243_ = lean_unsigned_to_nat(0u);
v___x_244_ = lean_float_once(&l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0, &l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0_once, _init_l_Lean_PostprocessTraces_TraceTree_elapsed___closed__0);
v___x_245_ = l_Lean_PostprocessTraces_TraceTree_elapsed(v_t_242_);
v___x_250_ = l_Lean_PostprocessTraces_TraceTree_children(v_t_242_);
v___x_251_ = lean_array_get_size(v___x_250_);
v___x_252_ = lean_nat_dec_lt(v___x_243_, v___x_251_);
if (v___x_252_ == 0)
{
lean_dec_ref(v___x_250_);
v___y_247_ = v___x_244_;
goto v___jp_246_;
}
else
{
uint8_t v___x_253_; 
v___x_253_ = lean_nat_dec_le(v___x_251_, v___x_251_);
if (v___x_253_ == 0)
{
if (v___x_252_ == 0)
{
lean_dec_ref(v___x_250_);
v___y_247_ = v___x_244_;
goto v___jp_246_;
}
else
{
size_t v___x_254_; size_t v___x_255_; double v___x_256_; 
v___x_254_ = ((size_t)0ULL);
v___x_255_ = lean_usize_of_nat(v___x_251_);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0(v___x_250_, v___x_254_, v___x_255_, v___x_244_);
lean_dec_ref(v___x_250_);
v___y_247_ = v___x_256_;
goto v___jp_246_;
}
}
else
{
size_t v___x_257_; size_t v___x_258_; double v___x_259_; 
v___x_257_ = ((size_t)0ULL);
v___x_258_ = lean_usize_of_nat(v___x_251_);
v___x_259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_selfElapsed_spec__0(v___x_250_, v___x_257_, v___x_258_, v___x_244_);
lean_dec_ref(v___x_250_);
v___y_247_ = v___x_259_;
goto v___jp_246_;
}
}
v___jp_246_:
{
double v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_float_sub(v___x_245_, v___y_247_);
v___x_249_ = lean_float_decLe(v___x_244_, v___x_248_);
if (v___x_249_ == 0)
{
return v___x_244_;
}
else
{
return v___x_248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_selfElapsed___boxed(lean_object* v_t_260_){
_start:
{
double v_res_261_; lean_object* v_r_262_; 
v_res_261_ = l_Lean_PostprocessTraces_TraceTree_selfElapsed(v_t_260_);
lean_dec_ref(v_t_260_);
v_r_262_ = lean_box_float(v_res_261_);
return v_r_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_headText(lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
lean_object* v_data_266_; lean_object* v_msg_267_; lean_object* v_wrap_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_result_x3f_271_; 
v_data_266_ = lean_ctor_get(v_x_264_, 0);
lean_inc_ref(v_data_266_);
v_msg_267_ = lean_ctor_get(v_x_264_, 1);
lean_inc_ref(v_msg_267_);
v_wrap_268_ = lean_ctor_get(v_x_264_, 3);
lean_inc_ref(v_wrap_268_);
lean_dec_ref_known(v_x_264_, 4);
v___x_269_ = lean_apply_1(v_wrap_268_, v_msg_267_);
v___x_270_ = l_Lean_MessageData_toString(v___x_269_);
v_result_x3f_271_ = lean_ctor_get(v_data_266_, 1);
lean_inc(v_result_x3f_271_);
lean_dec_ref(v_data_266_);
if (lean_obj_tag(v_result_x3f_271_) == 0)
{
return v___x_270_;
}
else
{
lean_object* v_val_272_; uint8_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_val_272_ = lean_ctor_get(v_result_x3f_271_, 0);
lean_inc(v_val_272_);
lean_dec_ref_known(v_result_x3f_271_, 1);
v___x_273_ = lean_unbox(v_val_272_);
lean_dec(v_val_272_);
v___x_274_ = l_Lean_TraceResult_toEmoji(v___x_273_);
v___x_275_ = ((lean_object*)(l_Lean_PostprocessTraces_TraceTree_headText___closed__0));
v___x_276_ = lean_string_append(v___x_274_, v___x_275_);
v___x_277_ = lean_string_append(v___x_276_, v___x_270_);
lean_dec_ref(v___x_270_);
return v___x_277_;
}
}
else
{
lean_object* v_msg_278_; lean_object* v___x_279_; 
v_msg_278_ = lean_ctor_get(v_x_264_, 0);
lean_inc_ref(v_msg_278_);
lean_dec_ref_known(v_x_264_, 1);
v___x_279_ = l_Lean_MessageData_toString(v_msg_278_);
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_headText___boxed(lean_object* v_x_280_, lean_object* v_a_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_PostprocessTraces_TraceTree_headText(v_x_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_result_x3f(lean_object* v_t_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_PostprocessTraces_TraceTree_data_x3f(v_t_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v___x_285_; 
v___x_285_ = lean_box(0);
return v___x_285_;
}
else
{
lean_object* v_val_286_; lean_object* v_result_x3f_287_; 
v_val_286_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_284_, 1);
v_result_x3f_287_ = lean_ctor_get(v_val_286_, 1);
lean_inc(v_result_x3f_287_);
lean_dec(v_val_286_);
return v_result_x3f_287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_result_x3f___boxed(lean_object* v_t_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_PostprocessTraces_TraceTree_result_x3f(v_t_288_);
lean_dec_ref(v_t_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_collectSubtrees(lean_object* v_p_290_, lean_object* v_t_291_, lean_object* v_acc_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___x_296_; 
lean_inc_ref(v_p_290_);
lean_inc(v_a_294_);
lean_inc_ref(v_a_293_);
lean_inc_ref(v_t_291_);
v___x_296_ = lean_apply_4(v_p_290_, v_t_291_, v_a_293_, v_a_294_, lean_box(0));
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_323_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_323_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_323_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_323_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
uint8_t v___x_301_; 
v___x_301_ = lean_unbox(v_a_297_);
lean_dec(v_a_297_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_302_ = l_Lean_PostprocessTraces_TraceTree_children(v_t_291_);
lean_dec_ref(v_t_291_);
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_array_get_size(v___x_302_);
v___x_305_ = lean_nat_dec_lt(v___x_303_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_307_; 
lean_dec_ref(v___x_302_);
lean_dec_ref(v_p_290_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v_acc_292_);
v___x_307_ = v___x_299_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_acc_292_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
else
{
uint8_t v___x_309_; 
v___x_309_ = lean_nat_dec_le(v___x_304_, v___x_304_);
if (v___x_309_ == 0)
{
if (v___x_305_ == 0)
{
lean_object* v___x_311_; 
lean_dec_ref(v___x_302_);
lean_dec_ref(v_p_290_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v_acc_292_);
v___x_311_ = v___x_299_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_acc_292_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
else
{
size_t v___x_313_; size_t v___x_314_; lean_object* v___x_315_; 
lean_del_object(v___x_299_);
v___x_313_ = ((size_t)0ULL);
v___x_314_ = lean_usize_of_nat(v___x_304_);
v___x_315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0(v_p_290_, v___x_302_, v___x_313_, v___x_314_, v_acc_292_, v_a_293_, v_a_294_);
lean_dec_ref(v___x_302_);
return v___x_315_;
}
}
else
{
size_t v___x_316_; size_t v___x_317_; lean_object* v___x_318_; 
lean_del_object(v___x_299_);
v___x_316_ = ((size_t)0ULL);
v___x_317_ = lean_usize_of_nat(v___x_304_);
v___x_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0(v_p_290_, v___x_302_, v___x_316_, v___x_317_, v_acc_292_, v_a_293_, v_a_294_);
lean_dec_ref(v___x_302_);
return v___x_318_;
}
}
}
else
{
lean_object* v___x_319_; lean_object* v___x_321_; 
lean_dec_ref(v_p_290_);
v___x_319_ = lean_array_push(v_acc_292_, v_t_291_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_319_);
v___x_321_ = v___x_299_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec_ref(v_acc_292_);
lean_dec_ref(v_t_291_);
lean_dec_ref(v_p_290_);
v_a_324_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_296_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_296_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0(lean_object* v_p_332_, lean_object* v_as_333_, size_t v_i_334_, size_t v_stop_335_, lean_object* v_b_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
uint8_t v___x_340_; 
v___x_340_ = lean_usize_dec_eq(v_i_334_, v_stop_335_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_array_uget_borrowed(v_as_333_, v_i_334_);
lean_inc(v___x_341_);
lean_inc_ref(v_p_332_);
v___x_342_ = l_Lean_PostprocessTraces_TraceTree_collectSubtrees(v_p_332_, v___x_341_, v_b_336_, v___y_337_, v___y_338_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; size_t v___x_344_; size_t v___x_345_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_342_, 1);
v___x_344_ = ((size_t)1ULL);
v___x_345_ = lean_usize_add(v_i_334_, v___x_344_);
v_i_334_ = v___x_345_;
v_b_336_ = v_a_343_;
goto _start;
}
else
{
lean_dec_ref(v_p_332_);
return v___x_342_;
}
}
else
{
lean_object* v___x_347_; 
lean_dec_ref(v_p_332_);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v_b_336_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0___boxed(lean_object* v_p_348_, lean_object* v_as_349_, lean_object* v_i_350_, lean_object* v_stop_351_, lean_object* v_b_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
size_t v_i_boxed_356_; size_t v_stop_boxed_357_; lean_object* v_res_358_; 
v_i_boxed_356_ = lean_unbox_usize(v_i_350_);
lean_dec(v_i_350_);
v_stop_boxed_357_ = lean_unbox_usize(v_stop_351_);
lean_dec(v_stop_351_);
v_res_358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_TraceTree_collectSubtrees_spec__0(v_p_348_, v_as_349_, v_i_boxed_356_, v_stop_boxed_357_, v_b_352_, v___y_353_, v___y_354_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec_ref(v_as_349_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_collectSubtrees___boxed(lean_object* v_p_359_, lean_object* v_t_360_, lean_object* v_acc_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lean_PostprocessTraces_TraceTree_collectSubtrees(v_p_359_, v_t_360_, v_acc_361_, v_a_362_, v_a_363_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0(lean_object* v_p_366_, lean_object* v_as_367_, lean_object* v_start_368_, lean_object* v_stop_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = ((lean_object*)(l_Lean_PostprocessTraces_TraceTree_children___closed__0));
v___x_374_ = lean_nat_dec_lt(v_start_368_, v_stop_369_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec_ref(v_p_366_);
v___x_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_376_ = lean_array_get_size(v_as_367_);
v___x_377_ = lean_nat_dec_le(v_stop_369_, v___x_376_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; 
v___x_378_ = lean_nat_dec_lt(v_start_368_, v___x_376_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec_ref(v_p_366_);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_373_);
return v___x_379_;
}
else
{
size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; 
v___x_380_ = lean_usize_of_nat(v_start_368_);
v___x_381_ = lean_usize_of_nat(v___x_376_);
v___x_382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0(v_p_366_, v_as_367_, v___x_380_, v___x_381_, v___x_373_, v___y_370_, v___y_371_);
return v___x_382_;
}
}
else
{
size_t v___x_383_; size_t v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_usize_of_nat(v_start_368_);
v___x_384_ = lean_usize_of_nat(v_stop_369_);
v___x_385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0(v_p_366_, v_as_367_, v___x_383_, v___x_384_, v___x_373_, v___y_370_, v___y_371_);
return v___x_385_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_filterSubtrees(lean_object* v_p_386_, lean_object* v_t_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v___x_391_; 
lean_inc_ref(v_p_386_);
lean_inc(v_a_389_);
lean_inc_ref(v_a_388_);
lean_inc_ref(v_t_387_);
v___x_391_ = lean_apply_4(v_p_386_, v_t_387_, v_a_388_, v_a_389_, lean_box(0));
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_429_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_429_ == 0)
{
v___x_394_ = v___x_391_;
v_isShared_395_ = v_isSharedCheck_429_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_391_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_429_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
uint8_t v___x_396_; 
v___x_396_ = lean_unbox(v_a_392_);
lean_dec(v_a_392_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
lean_del_object(v___x_394_);
v___x_397_ = l_Lean_PostprocessTraces_TraceTree_children(v_t_387_);
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_array_get_size(v___x_397_);
v___x_400_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0(v_p_386_, v___x_397_, v___x_398_, v___x_399_, v_a_388_, v_a_389_);
lean_dec_ref(v___x_397_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_416_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_416_ == 0)
{
v___x_403_ = v___x_400_;
v_isShared_404_ = v_isSharedCheck_416_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_416_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_array_get_size(v_a_401_);
v___x_406_ = lean_nat_dec_eq(v___x_405_, v___x_398_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = l_Lean_PostprocessTraces_TraceTree_withChildren(v_t_387_, v_a_401_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_408_);
v___x_410_ = v___x_403_;
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
else
{
lean_object* v___x_412_; lean_object* v___x_414_; 
lean_dec(v_a_401_);
lean_dec_ref(v_t_387_);
v___x_412_ = lean_box(0);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_412_);
v___x_414_ = v___x_403_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec_ref(v_t_387_);
v_a_417_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_400_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_400_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
else
{
lean_object* v___x_425_; lean_object* v___x_427_; 
lean_dec_ref(v_p_386_);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v_t_387_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_425_);
v___x_427_ = v___x_394_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v___x_425_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v_t_387_);
lean_dec_ref(v_p_386_);
v_a_430_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_391_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_391_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0(lean_object* v_p_438_, lean_object* v_as_439_, size_t v_i_440_, size_t v_stop_441_, lean_object* v_b_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_a_447_; uint8_t v___x_451_; 
v___x_451_ = lean_usize_dec_eq(v_i_440_, v_stop_441_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_array_uget_borrowed(v_as_439_, v_i_440_);
lean_inc(v___x_452_);
lean_inc_ref(v_p_438_);
v___x_453_ = l_Lean_PostprocessTraces_TraceTree_filterSubtrees(v_p_438_, v___x_452_, v___y_443_, v___y_444_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___x_453_, 1);
if (lean_obj_tag(v_a_454_) == 0)
{
v_a_447_ = v_b_442_;
goto v___jp_446_;
}
else
{
lean_object* v_val_455_; lean_object* v___x_456_; 
v_val_455_ = lean_ctor_get(v_a_454_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v_a_454_, 1);
v___x_456_ = lean_array_push(v_b_442_, v_val_455_);
v_a_447_ = v___x_456_;
goto v___jp_446_;
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v_b_442_);
lean_dec_ref(v_p_438_);
v_a_457_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_453_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_453_);
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
else
{
lean_object* v___x_465_; 
lean_dec_ref(v_p_438_);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v_b_442_);
return v___x_465_;
}
v___jp_446_:
{
size_t v___x_448_; size_t v___x_449_; 
v___x_448_ = ((size_t)1ULL);
v___x_449_ = lean_usize_add(v_i_440_, v___x_448_);
v_i_440_ = v___x_449_;
v_b_442_ = v_a_447_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0___boxed(lean_object* v_p_466_, lean_object* v_as_467_, lean_object* v_i_468_, lean_object* v_stop_469_, lean_object* v_b_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
size_t v_i_boxed_474_; size_t v_stop_boxed_475_; lean_object* v_res_476_; 
v_i_boxed_474_ = lean_unbox_usize(v_i_468_);
lean_dec(v_i_468_);
v_stop_boxed_475_ = lean_unbox_usize(v_stop_469_);
lean_dec(v_stop_469_);
v_res_476_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0_spec__0(v_p_466_, v_as_467_, v_i_boxed_474_, v_stop_boxed_475_, v_b_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec_ref(v_as_467_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0___boxed(lean_object* v_p_477_, lean_object* v_as_478_, lean_object* v_start_479_, lean_object* v_stop_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_TraceTree_filterSubtrees_spec__0(v_p_477_, v_as_478_, v_start_479_, v_stop_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v_stop_480_);
lean_dec(v_start_479_);
lean_dec_ref(v_as_478_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_TraceTree_filterSubtrees___boxed(lean_object* v_p_485_, lean_object* v_t_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_PostprocessTraces_TraceTree_filterSubtrees(v_p_485_, v_t_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___lam__2(lean_object* v_data_491_, lean_object* v_msg_492_, lean_object* v_a_493_, lean_object* v_wrap_494_, lean_object* v_children_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_496_, 0, v_data_491_);
lean_ctor_set(v___x_496_, 1, v_msg_492_);
lean_ctor_set(v___x_496_, 2, v_children_495_);
v___x_497_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_497_, 0, v_a_493_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_apply_1(v_wrap_494_, v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go(lean_object* v_wrap_502_, lean_object* v_a_503_){
_start:
{
switch(lean_obj_tag(v_a_503_))
{
case 3:
{
lean_object* v_a_504_; lean_object* v_a_505_; lean_object* v___f_506_; 
v_a_504_ = lean_ctor_get(v_a_503_, 0);
lean_inc_ref(v_a_504_);
v_a_505_ = lean_ctor_get(v_a_503_, 1);
lean_inc_ref(v_a_505_);
lean_dec_ref_known(v_a_503_, 2);
v___f_506_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__0), 3, 2);
lean_closure_set(v___f_506_, 0, v_a_504_);
lean_closure_set(v___f_506_, 1, v_wrap_502_);
v_wrap_502_ = v___f_506_;
v_a_503_ = v_a_505_;
goto _start;
}
case 4:
{
lean_object* v_a_508_; lean_object* v_a_509_; lean_object* v___f_510_; 
v_a_508_ = lean_ctor_get(v_a_503_, 0);
lean_inc_ref(v_a_508_);
v_a_509_ = lean_ctor_get(v_a_503_, 1);
lean_inc_ref(v_a_509_);
lean_dec_ref_known(v_a_503_, 2);
v___f_510_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_PostprocessTraces_TraceTree_ofMessageData_go___lam__1), 3, 2);
lean_closure_set(v___f_510_, 0, v_a_508_);
lean_closure_set(v___f_510_, 1, v_wrap_502_);
v_wrap_502_ = v___f_510_;
v_a_503_ = v_a_509_;
goto _start;
}
case 8:
{
lean_object* v_a_512_; 
v_a_512_ = lean_ctor_get(v_a_503_, 1);
lean_inc_ref(v_a_512_);
if (lean_obj_tag(v_a_512_) == 9)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_528_; 
v_a_513_ = lean_ctor_get(v_a_503_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v_a_503_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; 
v_unused_529_ = lean_ctor_get(v_a_503_, 1);
lean_dec(v_unused_529_);
v___x_515_ = v_a_503_;
v_isShared_516_ = v_isSharedCheck_528_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v_a_503_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_528_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v_data_517_; lean_object* v_msg_518_; lean_object* v_children_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_data_517_ = lean_ctor_get(v_a_512_, 0);
lean_inc_ref(v_data_517_);
v_msg_518_ = lean_ctor_get(v_a_512_, 1);
lean_inc_ref(v_msg_518_);
v_children_519_ = lean_ctor_get(v_a_512_, 2);
lean_inc_ref(v_children_519_);
lean_dec_ref_known(v_a_512_, 3);
v___x_520_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___closed__1));
v___x_521_ = lean_name_eq(v_a_513_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; 
lean_dec_ref(v_children_519_);
lean_dec_ref(v_msg_518_);
lean_dec_ref(v_data_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_513_);
lean_dec_ref(v_wrap_502_);
v___x_522_ = lean_box(0);
return v___x_522_;
}
else
{
lean_object* v___f_523_; lean_object* v___x_525_; 
v___f_523_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go___lam__2), 5, 4);
lean_closure_set(v___f_523_, 0, v_data_517_);
lean_closure_set(v___f_523_, 1, v_msg_518_);
lean_closure_set(v___f_523_, 2, v_a_513_);
lean_closure_set(v___f_523_, 3, v_wrap_502_);
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 0);
lean_ctor_set(v___x_515_, 1, v_children_519_);
lean_ctor_set(v___x_515_, 0, v___f_523_);
v___x_525_ = v___x_515_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___f_523_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_children_519_);
v___x_525_ = v_reuseFailAlloc_527_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
}
}
else
{
lean_object* v___x_530_; 
lean_dec_ref(v_a_512_);
lean_dec_ref_known(v_a_503_, 2);
lean_dec_ref(v_wrap_502_);
v___x_530_ = lean_box(0);
return v___x_530_;
}
}
default: 
{
lean_object* v___x_531_; 
lean_dec_ref(v_a_503_);
lean_dec_ref(v_wrap_502_);
v___x_531_ = lean_box(0);
return v___x_531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_traceContainer_x3f(lean_object* v_data_532_){
_start:
{
lean_object* v___f_533_; lean_object* v___x_534_; 
v___f_533_ = ((lean_object*)(l_Lean_PostprocessTraces_TraceTree_ofMessageData___closed__0));
v___x_534_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_traceContainer_x3f_go(v___f_533_, v_data_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0(size_t v_sz_535_, size_t v_i_536_, lean_object* v_bs_537_){
_start:
{
uint8_t v___x_538_; 
v___x_538_ = lean_usize_dec_lt(v_i_536_, v_sz_535_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = l_unsafeCast___redArg(v_bs_537_);
lean_dec_ref(v_bs_537_);
return v___x_539_;
}
else
{
lean_object* v_v_540_; lean_object* v___x_541_; lean_object* v_bs_x27_542_; lean_object* v___x_543_; lean_object* v___x_544_; size_t v___x_545_; size_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_v_540_ = lean_array_uget(v_bs_537_, v_i_536_);
v___x_541_ = lean_unsigned_to_nat(0u);
v_bs_x27_542_ = lean_array_uset(v_bs_537_, v_i_536_, v___x_541_);
v___x_543_ = l_unsafeCast___redArg(v_v_540_);
lean_dec(v_v_540_);
v___x_544_ = l_Lean_PostprocessTraces_TraceTree_ofMessageData(v___x_543_);
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_add(v_i_536_, v___x_545_);
v___x_547_ = l_unsafeCast___redArg(v___x_544_);
lean_dec_ref(v___x_544_);
v___x_548_ = lean_array_uset(v_bs_x27_542_, v_i_536_, v___x_547_);
v_i_536_ = v___x_546_;
v_bs_537_ = v___x_548_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0___boxed(lean_object* v_sz_550_, lean_object* v_i_551_, lean_object* v_bs_552_){
_start:
{
size_t v_sz_boxed_553_; size_t v_i_boxed_554_; lean_object* v_res_555_; 
v_sz_boxed_553_ = lean_unbox_usize(v_sz_550_);
lean_dec(v_sz_550_);
v_i_boxed_554_ = lean_unbox_usize(v_i_551_);
lean_dec(v_i_551_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0(v_sz_boxed_553_, v_i_boxed_554_, v_bs_552_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage(lean_object* v_post_556_, lean_object* v_msg_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_fileName_561_; lean_object* v_pos_562_; lean_object* v_endPos_563_; uint8_t v_keepFullRange_564_; uint8_t v_severity_565_; uint8_t v_isSilent_566_; lean_object* v_caption_567_; lean_object* v_data_568_; lean_object* v___x_569_; 
v_fileName_561_ = lean_ctor_get(v_msg_557_, 0);
v_pos_562_ = lean_ctor_get(v_msg_557_, 1);
v_endPos_563_ = lean_ctor_get(v_msg_557_, 2);
v_keepFullRange_564_ = lean_ctor_get_uint8(v_msg_557_, sizeof(void*)*5);
v_severity_565_ = lean_ctor_get_uint8(v_msg_557_, sizeof(void*)*5 + 1);
v_isSilent_566_ = lean_ctor_get_uint8(v_msg_557_, sizeof(void*)*5 + 2);
v_caption_567_ = lean_ctor_get(v_msg_557_, 3);
v_data_568_ = lean_ctor_get(v_msg_557_, 4);
lean_inc(v_data_568_);
v___x_569_ = l_Lean_Elab_PostprocessTraces_traceContainer_x3f(v_data_568_);
if (lean_obj_tag(v___x_569_) == 1)
{
lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_620_; 
lean_inc_ref(v_caption_567_);
lean_inc(v_endPos_563_);
lean_inc_ref(v_pos_562_);
lean_inc_ref(v_fileName_561_);
v_isSharedCheck_620_ = !lean_is_exclusive(v_msg_557_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; lean_object* v_unused_622_; lean_object* v_unused_623_; lean_object* v_unused_624_; lean_object* v_unused_625_; 
v_unused_621_ = lean_ctor_get(v_msg_557_, 4);
lean_dec(v_unused_621_);
v_unused_622_ = lean_ctor_get(v_msg_557_, 3);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v_msg_557_, 2);
lean_dec(v_unused_623_);
v_unused_624_ = lean_ctor_get(v_msg_557_, 1);
lean_dec(v_unused_624_);
v_unused_625_ = lean_ctor_get(v_msg_557_, 0);
lean_dec(v_unused_625_);
v___x_571_ = v_msg_557_;
v_isShared_572_ = v_isSharedCheck_620_;
goto v_resetjp_570_;
}
else
{
lean_dec(v_msg_557_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_620_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_619_; 
v_val_573_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_619_ == 0)
{
v___x_575_ = v___x_569_;
v_isShared_576_ = v_isSharedCheck_619_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_dec(v___x_569_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_619_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_fst_577_; lean_object* v_snd_578_; size_t v_sz_579_; size_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v_fst_577_ = lean_ctor_get(v_val_573_, 0);
lean_inc(v_fst_577_);
v_snd_578_ = lean_ctor_get(v_val_573_, 1);
lean_inc(v_snd_578_);
lean_dec(v_val_573_);
v_sz_579_ = lean_array_size(v_snd_578_);
v___x_580_ = ((size_t)0ULL);
v___x_581_ = l_unsafeCast___redArg(v_snd_578_);
lean_dec(v_snd_578_);
v___x_582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PostprocessTraces_postprocessMessage_spec__0(v_sz_579_, v___x_580_, v___x_581_);
v___x_583_ = l_unsafeCast___redArg(v___x_582_);
lean_dec_ref(v___x_582_);
lean_inc(v_a_559_);
lean_inc_ref(v_a_558_);
v___x_584_ = lean_apply_4(v_post_556_, v___x_583_, v_a_558_, v_a_559_, lean_box(0));
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_610_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_610_ == 0)
{
v___x_587_ = v___x_584_;
v_isShared_588_ = v_isSharedCheck_610_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_610_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_589_ = lean_array_get_size(v_a_585_);
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = lean_nat_dec_eq(v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
size_t v_sz_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v_sz_592_ = lean_array_size(v_a_585_);
v___x_593_ = l_unsafeCast___redArg(v_a_585_);
lean_dec(v_a_585_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_TraceTree_toMessageData_spec__0(v_sz_592_, v___x_580_, v___x_593_);
v___x_595_ = l_unsafeCast___redArg(v___x_594_);
lean_dec_ref(v___x_594_);
v___x_596_ = lean_apply_1(v_fst_577_, v___x_595_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 4, v___x_596_);
v___x_598_ = v___x_571_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_fileName_561_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_pos_562_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v_endPos_563_);
lean_ctor_set(v_reuseFailAlloc_605_, 3, v_caption_567_);
lean_ctor_set(v_reuseFailAlloc_605_, 4, v___x_596_);
lean_ctor_set_uint8(v_reuseFailAlloc_605_, sizeof(void*)*5, v_keepFullRange_564_);
lean_ctor_set_uint8(v_reuseFailAlloc_605_, sizeof(void*)*5 + 1, v_severity_565_);
lean_ctor_set_uint8(v_reuseFailAlloc_605_, sizeof(void*)*5 + 2, v_isSilent_566_);
v___x_598_ = v_reuseFailAlloc_605_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_600_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_598_);
v___x_600_ = v___x_575_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_598_);
v___x_600_ = v_reuseFailAlloc_604_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_602_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_600_);
v___x_602_ = v___x_587_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v___x_606_; lean_object* v___x_608_; 
lean_dec(v_a_585_);
lean_dec(v_fst_577_);
lean_del_object(v___x_575_);
lean_del_object(v___x_571_);
lean_dec_ref(v_caption_567_);
lean_dec(v_endPos_563_);
lean_dec_ref(v_pos_562_);
lean_dec_ref(v_fileName_561_);
v___x_606_ = lean_box(0);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_606_);
v___x_608_ = v___x_587_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
lean_dec(v_fst_577_);
lean_del_object(v___x_575_);
lean_del_object(v___x_571_);
lean_dec_ref(v_caption_567_);
lean_dec(v_endPos_563_);
lean_dec_ref(v_pos_562_);
lean_dec_ref(v_fileName_561_);
v_a_611_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_584_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_584_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
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
}
}
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_dec(v___x_569_);
lean_dec_ref(v_post_556_);
v___x_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_626_, 0, v_msg_557_);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_postprocessMessage___boxed(lean_object* v_post_628_, lean_object* v_msg_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_Elab_PostprocessTraces_postprocessMessage(v_post_628_, v_msg_629_, v_a_630_, v_a_631_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0(lean_object* v_a_634_, lean_object* v_messages_635_, lean_object* v_trees_636_, lean_object* v_a_x3f_637_){
_start:
{
lean_object* v___x_639_; lean_object* v_infoState_640_; lean_object* v_env_641_; lean_object* v_messages_642_; lean_object* v_scopes_643_; lean_object* v_usedQuotCtxts_644_; lean_object* v_nextMacroScope_645_; lean_object* v_maxRecDepth_646_; lean_object* v_ngen_647_; lean_object* v_auxDeclNGen_648_; lean_object* v_traceState_649_; lean_object* v_snapshotTasks_650_; lean_object* v_prevLinterStates_651_; lean_object* v_codeQualityEntryTasks_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_675_; 
v___x_639_ = lean_st_ref_take(v_a_634_);
v_infoState_640_ = lean_ctor_get(v___x_639_, 8);
v_env_641_ = lean_ctor_get(v___x_639_, 0);
v_messages_642_ = lean_ctor_get(v___x_639_, 1);
v_scopes_643_ = lean_ctor_get(v___x_639_, 2);
v_usedQuotCtxts_644_ = lean_ctor_get(v___x_639_, 3);
v_nextMacroScope_645_ = lean_ctor_get(v___x_639_, 4);
v_maxRecDepth_646_ = lean_ctor_get(v___x_639_, 5);
v_ngen_647_ = lean_ctor_get(v___x_639_, 6);
v_auxDeclNGen_648_ = lean_ctor_get(v___x_639_, 7);
v_traceState_649_ = lean_ctor_get(v___x_639_, 9);
v_snapshotTasks_650_ = lean_ctor_get(v___x_639_, 10);
v_prevLinterStates_651_ = lean_ctor_get(v___x_639_, 11);
v_codeQualityEntryTasks_652_ = lean_ctor_get(v___x_639_, 12);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_675_ == 0)
{
v___x_654_ = v___x_639_;
v_isShared_655_ = v_isSharedCheck_675_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_codeQualityEntryTasks_652_);
lean_inc(v_prevLinterStates_651_);
lean_inc(v_snapshotTasks_650_);
lean_inc(v_traceState_649_);
lean_inc(v_infoState_640_);
lean_inc(v_auxDeclNGen_648_);
lean_inc(v_ngen_647_);
lean_inc(v_maxRecDepth_646_);
lean_inc(v_nextMacroScope_645_);
lean_inc(v_usedQuotCtxts_644_);
lean_inc(v_scopes_643_);
lean_inc(v_messages_642_);
lean_inc(v_env_641_);
lean_dec(v___x_639_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_675_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
uint8_t v_enabled_656_; lean_object* v_assignment_657_; lean_object* v_lazyAssignment_658_; lean_object* v_trees_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_674_; 
v_enabled_656_ = lean_ctor_get_uint8(v_infoState_640_, sizeof(void*)*3);
v_assignment_657_ = lean_ctor_get(v_infoState_640_, 0);
v_lazyAssignment_658_ = lean_ctor_get(v_infoState_640_, 1);
v_trees_659_ = lean_ctor_get(v_infoState_640_, 2);
v_isSharedCheck_674_ = !lean_is_exclusive(v_infoState_640_);
if (v_isSharedCheck_674_ == 0)
{
v___x_661_ = v_infoState_640_;
v_isShared_662_ = v_isSharedCheck_674_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_trees_659_);
lean_inc(v_lazyAssignment_658_);
lean_inc(v_assignment_657_);
lean_dec(v_infoState_640_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_674_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_663_ = lean_box(0);
v___x_664_ = l_Lean_MessageLog_append(v_messages_635_, v_messages_642_);
v___x_665_ = l_Lean_PersistentArray_append___redArg(v_trees_636_, v_trees_659_);
lean_dec_ref(v_trees_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 2, v___x_665_);
v___x_667_ = v___x_661_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_assignment_657_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_lazyAssignment_658_);
lean_ctor_set(v_reuseFailAlloc_673_, 2, v___x_665_);
lean_ctor_set_uint8(v_reuseFailAlloc_673_, sizeof(void*)*3, v_enabled_656_);
v___x_667_ = v_reuseFailAlloc_673_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_669_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 8, v___x_667_);
lean_ctor_set(v___x_654_, 1, v___x_664_);
v___x_669_ = v___x_654_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_env_641_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_664_);
lean_ctor_set(v_reuseFailAlloc_672_, 2, v_scopes_643_);
lean_ctor_set(v_reuseFailAlloc_672_, 3, v_usedQuotCtxts_644_);
lean_ctor_set(v_reuseFailAlloc_672_, 4, v_nextMacroScope_645_);
lean_ctor_set(v_reuseFailAlloc_672_, 5, v_maxRecDepth_646_);
lean_ctor_set(v_reuseFailAlloc_672_, 6, v_ngen_647_);
lean_ctor_set(v_reuseFailAlloc_672_, 7, v_auxDeclNGen_648_);
lean_ctor_set(v_reuseFailAlloc_672_, 8, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_672_, 9, v_traceState_649_);
lean_ctor_set(v_reuseFailAlloc_672_, 10, v_snapshotTasks_650_);
lean_ctor_set(v_reuseFailAlloc_672_, 11, v_prevLinterStates_651_);
lean_ctor_set(v_reuseFailAlloc_672_, 12, v_codeQualityEntryTasks_652_);
v___x_669_ = v_reuseFailAlloc_672_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_st_ref_put(v_a_634_, v___x_669_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_663_);
return v___x_671_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0___boxed(lean_object* v_a_676_, lean_object* v_messages_677_, lean_object* v_trees_678_, lean_object* v_a_x3f_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0(v_a_676_, v_messages_677_, v_trees_678_, v_a_x3f_679_);
lean_dec(v_a_x3f_679_);
lean_dec(v_a_676_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0(lean_object* v_as_682_, size_t v_i_683_, size_t v_stop_684_, lean_object* v_b_685_){
_start:
{
uint8_t v___x_686_; 
v___x_686_ = lean_usize_dec_eq(v_i_683_, v_stop_684_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v_diagnostics_688_; lean_object* v_msgLog_689_; lean_object* v___x_690_; size_t v___x_691_; size_t v___x_692_; 
v___x_687_ = lean_array_uget_borrowed(v_as_682_, v_i_683_);
v_diagnostics_688_ = lean_ctor_get(v___x_687_, 1);
v_msgLog_689_ = lean_ctor_get(v_diagnostics_688_, 0);
lean_inc_ref(v_msgLog_689_);
v___x_690_ = l_Lean_MessageLog_append(v_b_685_, v_msgLog_689_);
v___x_691_ = ((size_t)1ULL);
v___x_692_ = lean_usize_add(v_i_683_, v___x_691_);
v_i_683_ = v___x_692_;
v_b_685_ = v___x_690_;
goto _start;
}
else
{
return v_b_685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0___boxed(lean_object* v_as_694_, lean_object* v_i_695_, lean_object* v_stop_696_, lean_object* v_b_697_){
_start:
{
size_t v_i_boxed_698_; size_t v_stop_boxed_699_; lean_object* v_res_700_; 
v_i_boxed_698_ = lean_unbox_usize(v_i_695_);
lean_dec(v_i_695_);
v_stop_boxed_699_ = lean_unbox_usize(v_stop_696_);
lean_dec(v_stop_696_);
v_res_700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0(v_as_694_, v_i_boxed_698_, v_stop_boxed_699_, v_b_697_);
lean_dec_ref(v_as_694_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1(lean_object* v_as_701_, size_t v_i_702_, size_t v_stop_703_, lean_object* v_b_704_){
_start:
{
lean_object* v___y_706_; uint8_t v___x_710_; 
v___x_710_ = lean_usize_dec_eq(v_i_702_, v_stop_703_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_711_ = lean_array_uget_borrowed(v_as_701_, v_i_702_);
v___x_712_ = l_Lean_MessageLog_empty;
lean_inc(v___x_711_);
v___x_713_ = l_Lean_Language_SnapshotTask_get___redArg(v___x_711_);
v___x_714_ = l_Lean_Language_SnapshotTree_getAll(v___x_713_);
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_array_get_size(v___x_714_);
v___x_717_ = lean_nat_dec_lt(v___x_715_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
lean_dec_ref(v___x_714_);
v___x_718_ = l_Lean_MessageLog_append(v_b_704_, v___x_712_);
v___y_706_ = v___x_718_;
goto v___jp_705_;
}
else
{
uint8_t v___x_719_; 
v___x_719_ = lean_nat_dec_le(v___x_716_, v___x_716_);
if (v___x_719_ == 0)
{
if (v___x_717_ == 0)
{
lean_object* v___x_720_; 
lean_dec_ref(v___x_714_);
v___x_720_ = l_Lean_MessageLog_append(v_b_704_, v___x_712_);
v___y_706_ = v___x_720_;
goto v___jp_705_;
}
else
{
size_t v___x_721_; size_t v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_721_ = ((size_t)0ULL);
v___x_722_ = lean_usize_of_nat(v___x_716_);
v___x_723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0(v___x_714_, v___x_721_, v___x_722_, v___x_712_);
lean_dec_ref(v___x_714_);
v___x_724_ = l_Lean_MessageLog_append(v_b_704_, v___x_723_);
v___y_706_ = v___x_724_;
goto v___jp_705_;
}
}
else
{
size_t v___x_725_; size_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_725_ = ((size_t)0ULL);
v___x_726_ = lean_usize_of_nat(v___x_716_);
v___x_727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__0(v___x_714_, v___x_725_, v___x_726_, v___x_712_);
lean_dec_ref(v___x_714_);
v___x_728_ = l_Lean_MessageLog_append(v_b_704_, v___x_727_);
v___y_706_ = v___x_728_;
goto v___jp_705_;
}
}
}
else
{
return v_b_704_;
}
v___jp_705_:
{
size_t v___x_707_; size_t v___x_708_; 
v___x_707_ = ((size_t)1ULL);
v___x_708_ = lean_usize_add(v_i_702_, v___x_707_);
v_i_702_ = v___x_708_;
v_b_704_ = v___y_706_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1___boxed(lean_object* v_as_729_, lean_object* v_i_730_, lean_object* v_stop_731_, lean_object* v_b_732_){
_start:
{
size_t v_i_boxed_733_; size_t v_stop_boxed_734_; lean_object* v_res_735_; 
v_i_boxed_733_ = lean_unbox_usize(v_i_730_);
lean_dec(v_i_730_);
v_stop_boxed_734_ = lean_unbox_usize(v_stop_731_);
lean_dec(v_stop_731_);
v_res_735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1(v_as_729_, v_i_boxed_733_, v_stop_boxed_734_, v_b_732_);
lean_dec_ref(v_as_729_);
return v_res_735_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_736_ = lean_unsigned_to_nat(32u);
v___x_737_ = lean_mk_empty_array_with_capacity(v___x_736_);
v___x_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
return v___x_738_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1(void){
_start:
{
size_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_739_ = ((size_t)5ULL);
v___x_740_ = lean_unsigned_to_nat(0u);
v___x_741_ = lean_unsigned_to_nat(32u);
v___x_742_ = lean_mk_empty_array_with_capacity(v___x_741_);
v___x_743_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0, &l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0_once, _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__0);
v___x_744_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_744_, 0, v___x_743_);
lean_ctor_set(v___x_744_, 1, v___x_742_);
lean_ctor_set(v___x_744_, 2, v___x_740_);
lean_ctor_set(v___x_744_, 3, v___x_740_);
lean_ctor_set_usize(v___x_744_, 4, v___x_739_);
return v___x_744_;
}
}
static lean_object* _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = l_Lean_NameSet_empty;
v___x_746_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1, &l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1_once, _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__1);
v___x_747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
lean_ctor_set(v___x_747_, 2, v___x_745_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages(lean_object* v_cmd_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v___x_754_; lean_object* v_messages_755_; lean_object* v___x_756_; lean_object* v_infoState_757_; lean_object* v_trees_758_; lean_object* v___x_759_; lean_object* v_env_760_; lean_object* v_scopes_761_; lean_object* v_usedQuotCtxts_762_; lean_object* v_nextMacroScope_763_; lean_object* v_maxRecDepth_764_; lean_object* v_ngen_765_; lean_object* v_auxDeclNGen_766_; lean_object* v_infoState_767_; lean_object* v_traceState_768_; lean_object* v_snapshotTasks_769_; lean_object* v_prevLinterStates_770_; lean_object* v_codeQualityEntryTasks_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_863_; 
v___x_754_ = lean_st_ref_get(v_a_752_);
v_messages_755_ = lean_ctor_get(v___x_754_, 1);
lean_inc_ref(v_messages_755_);
lean_dec(v___x_754_);
v___x_756_ = lean_st_ref_get(v_a_752_);
v_infoState_757_ = lean_ctor_get(v___x_756_, 8);
lean_inc_ref(v_infoState_757_);
lean_dec(v___x_756_);
v_trees_758_ = lean_ctor_get(v_infoState_757_, 2);
lean_inc_ref(v_trees_758_);
lean_dec_ref(v_infoState_757_);
v___x_759_ = lean_st_ref_take(v_a_752_);
v_env_760_ = lean_ctor_get(v___x_759_, 0);
v_scopes_761_ = lean_ctor_get(v___x_759_, 2);
v_usedQuotCtxts_762_ = lean_ctor_get(v___x_759_, 3);
v_nextMacroScope_763_ = lean_ctor_get(v___x_759_, 4);
v_maxRecDepth_764_ = lean_ctor_get(v___x_759_, 5);
v_ngen_765_ = lean_ctor_get(v___x_759_, 6);
v_auxDeclNGen_766_ = lean_ctor_get(v___x_759_, 7);
v_infoState_767_ = lean_ctor_get(v___x_759_, 8);
v_traceState_768_ = lean_ctor_get(v___x_759_, 9);
v_snapshotTasks_769_ = lean_ctor_get(v___x_759_, 10);
v_prevLinterStates_770_ = lean_ctor_get(v___x_759_, 11);
v_codeQualityEntryTasks_771_ = lean_ctor_get(v___x_759_, 12);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_863_ == 0)
{
lean_object* v_unused_864_; 
v_unused_864_ = lean_ctor_get(v___x_759_, 1);
lean_dec(v_unused_864_);
v___x_773_ = v___x_759_;
v_isShared_774_ = v_isSharedCheck_863_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_codeQualityEntryTasks_771_);
lean_inc(v_prevLinterStates_770_);
lean_inc(v_snapshotTasks_769_);
lean_inc(v_traceState_768_);
lean_inc(v_infoState_767_);
lean_inc(v_auxDeclNGen_766_);
lean_inc(v_ngen_765_);
lean_inc(v_maxRecDepth_764_);
lean_inc(v_nextMacroScope_763_);
lean_inc(v_usedQuotCtxts_762_);
lean_inc(v_scopes_761_);
lean_inc(v_env_760_);
lean_dec(v___x_759_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_863_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_obj_once(&l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2, &l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2_once, _init_l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__2);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 1, v___x_776_);
v___x_778_ = v___x_773_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_env_760_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_862_, 2, v_scopes_761_);
lean_ctor_set(v_reuseFailAlloc_862_, 3, v_usedQuotCtxts_762_);
lean_ctor_set(v_reuseFailAlloc_862_, 4, v_nextMacroScope_763_);
lean_ctor_set(v_reuseFailAlloc_862_, 5, v_maxRecDepth_764_);
lean_ctor_set(v_reuseFailAlloc_862_, 6, v_ngen_765_);
lean_ctor_set(v_reuseFailAlloc_862_, 7, v_auxDeclNGen_766_);
lean_ctor_set(v_reuseFailAlloc_862_, 8, v_infoState_767_);
lean_ctor_set(v_reuseFailAlloc_862_, 9, v_traceState_768_);
lean_ctor_set(v_reuseFailAlloc_862_, 10, v_snapshotTasks_769_);
lean_ctor_set(v_reuseFailAlloc_862_, 11, v_prevLinterStates_770_);
lean_ctor_set(v_reuseFailAlloc_862_, 12, v_codeQualityEntryTasks_771_);
v___x_778_ = v_reuseFailAlloc_862_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v_fileName_780_; lean_object* v_fileMap_781_; lean_object* v_currRecDepth_782_; lean_object* v_cmdPos_783_; lean_object* v_macroStack_784_; lean_object* v_quotContext_x3f_785_; lean_object* v_currMacroScope_786_; lean_object* v_ref_787_; lean_object* v_cancelTk_x3f_788_; uint8_t v_suppressElabErrors_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_779_ = lean_st_ref_put(v_a_752_, v___x_778_);
v_fileName_780_ = lean_ctor_get(v_a_751_, 0);
v_fileMap_781_ = lean_ctor_get(v_a_751_, 1);
v_currRecDepth_782_ = lean_ctor_get(v_a_751_, 2);
v_cmdPos_783_ = lean_ctor_get(v_a_751_, 3);
v_macroStack_784_ = lean_ctor_get(v_a_751_, 4);
v_quotContext_x3f_785_ = lean_ctor_get(v_a_751_, 5);
v_currMacroScope_786_ = lean_ctor_get(v_a_751_, 6);
v_ref_787_ = lean_ctor_get(v_a_751_, 7);
v_cancelTk_x3f_788_ = lean_ctor_get(v_a_751_, 9);
v_suppressElabErrors_789_ = lean_ctor_get_uint8(v_a_751_, sizeof(void*)*10);
v___x_790_ = ((lean_object*)(l_Lean_Elab_PostprocessTraces_runAndCollectMessages___closed__3));
v___x_791_ = lean_box(0);
lean_inc(v_cancelTk_x3f_788_);
lean_inc(v_ref_787_);
lean_inc(v_currMacroScope_786_);
lean_inc(v_quotContext_x3f_785_);
lean_inc(v_macroStack_784_);
lean_inc(v_cmdPos_783_);
lean_inc(v_currRecDepth_782_);
lean_inc_ref(v_fileMap_781_);
lean_inc_ref(v_fileName_780_);
v___x_792_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_792_, 0, v_fileName_780_);
lean_ctor_set(v___x_792_, 1, v_fileMap_781_);
lean_ctor_set(v___x_792_, 2, v_currRecDepth_782_);
lean_ctor_set(v___x_792_, 3, v_cmdPos_783_);
lean_ctor_set(v___x_792_, 4, v_macroStack_784_);
lean_ctor_set(v___x_792_, 5, v_quotContext_x3f_785_);
lean_ctor_set(v___x_792_, 6, v_currMacroScope_786_);
lean_ctor_set(v___x_792_, 7, v_ref_787_);
lean_ctor_set(v___x_792_, 8, v___x_791_);
lean_ctor_set(v___x_792_, 9, v_cancelTk_x3f_788_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*10, v_suppressElabErrors_789_);
v___x_793_ = l_Lean_Elab_Command_elabCommandTopLevel(v_cmd_750_, v___x_790_, v___x_792_, v_a_752_);
lean_dec_ref_known(v___x_792_, 10);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_850_; 
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_851_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_850_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_850_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_messages_799_; lean_object* v___y_801_; lean_object* v_snapshotTasks_839_; lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_797_ = lean_st_ref_get(v_a_752_);
v___x_798_ = lean_st_ref_get(v_a_752_);
v_messages_799_ = lean_ctor_get(v___x_797_, 1);
lean_inc_ref(v_messages_799_);
lean_dec(v___x_797_);
v_snapshotTasks_839_ = lean_ctor_get(v___x_798_, 10);
lean_inc_ref(v_snapshotTasks_839_);
lean_dec(v___x_798_);
v___x_840_ = l_Lean_MessageLog_empty;
v___x_841_ = lean_array_get_size(v_snapshotTasks_839_);
v___x_842_ = lean_nat_dec_lt(v___x_775_, v___x_841_);
if (v___x_842_ == 0)
{
lean_dec_ref(v_snapshotTasks_839_);
v___y_801_ = v___x_840_;
goto v___jp_800_;
}
else
{
uint8_t v___x_843_; 
v___x_843_ = lean_nat_dec_le(v___x_841_, v___x_841_);
if (v___x_843_ == 0)
{
if (v___x_842_ == 0)
{
lean_dec_ref(v_snapshotTasks_839_);
v___y_801_ = v___x_840_;
goto v___jp_800_;
}
else
{
size_t v___x_844_; size_t v___x_845_; lean_object* v___x_846_; 
v___x_844_ = ((size_t)0ULL);
v___x_845_ = lean_usize_of_nat(v___x_841_);
v___x_846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1(v_snapshotTasks_839_, v___x_844_, v___x_845_, v___x_840_);
lean_dec_ref(v_snapshotTasks_839_);
v___y_801_ = v___x_846_;
goto v___jp_800_;
}
}
else
{
size_t v___x_847_; size_t v___x_848_; lean_object* v___x_849_; 
v___x_847_ = ((size_t)0ULL);
v___x_848_ = lean_usize_of_nat(v___x_841_);
v___x_849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PostprocessTraces_runAndCollectMessages_spec__1(v_snapshotTasks_839_, v___x_847_, v___x_848_, v___x_840_);
lean_dec_ref(v_snapshotTasks_839_);
v___y_801_ = v___x_849_;
goto v___jp_800_;
}
}
v___jp_800_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v_env_804_; lean_object* v_scopes_805_; lean_object* v_usedQuotCtxts_806_; lean_object* v_nextMacroScope_807_; lean_object* v_maxRecDepth_808_; lean_object* v_ngen_809_; lean_object* v_auxDeclNGen_810_; lean_object* v_infoState_811_; lean_object* v_traceState_812_; lean_object* v_prevLinterStates_813_; lean_object* v_codeQualityEntryTasks_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_836_; 
v___x_802_ = l_Lean_MessageLog_append(v_messages_799_, v___y_801_);
v___x_803_ = lean_st_ref_take(v_a_752_);
v_env_804_ = lean_ctor_get(v___x_803_, 0);
v_scopes_805_ = lean_ctor_get(v___x_803_, 2);
v_usedQuotCtxts_806_ = lean_ctor_get(v___x_803_, 3);
v_nextMacroScope_807_ = lean_ctor_get(v___x_803_, 4);
v_maxRecDepth_808_ = lean_ctor_get(v___x_803_, 5);
v_ngen_809_ = lean_ctor_get(v___x_803_, 6);
v_auxDeclNGen_810_ = lean_ctor_get(v___x_803_, 7);
v_infoState_811_ = lean_ctor_get(v___x_803_, 8);
v_traceState_812_ = lean_ctor_get(v___x_803_, 9);
v_prevLinterStates_813_ = lean_ctor_get(v___x_803_, 11);
v_codeQualityEntryTasks_814_ = lean_ctor_get(v___x_803_, 12);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; lean_object* v_unused_838_; 
v_unused_837_ = lean_ctor_get(v___x_803_, 10);
lean_dec(v_unused_837_);
v_unused_838_ = lean_ctor_get(v___x_803_, 1);
lean_dec(v_unused_838_);
v___x_816_ = v___x_803_;
v_isShared_817_ = v_isSharedCheck_836_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_codeQualityEntryTasks_814_);
lean_inc(v_prevLinterStates_813_);
lean_inc(v_traceState_812_);
lean_inc(v_infoState_811_);
lean_inc(v_auxDeclNGen_810_);
lean_inc(v_ngen_809_);
lean_inc(v_maxRecDepth_808_);
lean_inc(v_nextMacroScope_807_);
lean_inc(v_usedQuotCtxts_806_);
lean_inc(v_scopes_805_);
lean_inc(v_env_804_);
lean_dec(v___x_803_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_836_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 10, v___x_790_);
lean_ctor_set(v___x_816_, 1, v___x_776_);
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_env_804_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_835_, 2, v_scopes_805_);
lean_ctor_set(v_reuseFailAlloc_835_, 3, v_usedQuotCtxts_806_);
lean_ctor_set(v_reuseFailAlloc_835_, 4, v_nextMacroScope_807_);
lean_ctor_set(v_reuseFailAlloc_835_, 5, v_maxRecDepth_808_);
lean_ctor_set(v_reuseFailAlloc_835_, 6, v_ngen_809_);
lean_ctor_set(v_reuseFailAlloc_835_, 7, v_auxDeclNGen_810_);
lean_ctor_set(v_reuseFailAlloc_835_, 8, v_infoState_811_);
lean_ctor_set(v_reuseFailAlloc_835_, 9, v_traceState_812_);
lean_ctor_set(v_reuseFailAlloc_835_, 10, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_835_, 11, v_prevLinterStates_813_);
lean_ctor_set(v_reuseFailAlloc_835_, 12, v_codeQualityEntryTasks_814_);
v___x_819_ = v_reuseFailAlloc_835_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_820_ = lean_st_ref_put(v_a_752_, v___x_819_);
v___x_821_ = l_Lean_MessageLog_toArray(v___x_802_);
lean_dec_ref(v___x_802_);
lean_inc_ref(v___x_821_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_821_);
v___x_823_ = v___x_795_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_834_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
v___x_825_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0(v_a_752_, v_messages_755_, v_trees_758_, v___x_824_);
lean_dec_ref_known(v___x_824_, 1);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v___x_825_, 0);
lean_dec(v_unused_833_);
v___x_827_ = v___x_825_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_dec(v___x_825_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_821_);
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_821_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
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
lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_852_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_793_, 1);
v___x_853_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages___lam__0(v_a_752_, v_messages_755_, v_trees_758_, v___x_791_);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_860_ == 0)
{
lean_object* v_unused_861_; 
v_unused_861_ = lean_ctor_get(v___x_853_, 0);
lean_dec(v_unused_861_);
v___x_855_ = v___x_853_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_dec(v___x_853_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
lean_ctor_set_tag(v___x_855_, 1);
lean_ctor_set(v___x_855_, 0, v_a_852_);
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_852_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_runAndCollectMessages___boxed(lean_object* v_cmd_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lean_Elab_PostprocessTraces_runAndCollectMessages(v_cmd_865_, v_a_866_, v_a_867_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_unsafe__1(lean_object* v_type_870_, lean_object* v_e_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
uint8_t v___x_877_; uint8_t v___x_878_; lean_object* v___x_879_; 
v___x_877_ = 1;
v___x_878_ = 1;
v___x_879_ = l_Lean_Meta_evalExpr___redArg(v_type_870_, v_e_871_, v___x_877_, v___x_878_, v_a_872_, v_a_873_, v_a_874_, v_a_875_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_unsafe__1___boxed(lean_object* v_type_880_, lean_object* v_e_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_unsafe__1(v_type_880_, v_e_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg(lean_object* v_e_888_, lean_object* v___y_889_){
_start:
{
uint8_t v___x_891_; 
v___x_891_ = l_Lean_Expr_hasMVar(v_e_888_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v_e_888_);
return v___x_892_;
}
else
{
lean_object* v___x_893_; lean_object* v_mctx_894_; lean_object* v___x_895_; lean_object* v_fst_896_; lean_object* v_snd_897_; lean_object* v___x_898_; lean_object* v_cache_899_; lean_object* v_zetaDeltaFVarIds_900_; lean_object* v_postponed_901_; lean_object* v_diag_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_911_; 
v___x_893_ = lean_st_ref_get(v___y_889_);
v_mctx_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc_ref(v_mctx_894_);
lean_dec(v___x_893_);
v___x_895_ = l_Lean_instantiateMVarsCore(v_mctx_894_, v_e_888_);
v_fst_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_fst_896_);
v_snd_897_ = lean_ctor_get(v___x_895_, 1);
lean_inc(v_snd_897_);
lean_dec_ref(v___x_895_);
v___x_898_ = lean_st_ref_take(v___y_889_);
v_cache_899_ = lean_ctor_get(v___x_898_, 1);
v_zetaDeltaFVarIds_900_ = lean_ctor_get(v___x_898_, 2);
v_postponed_901_ = lean_ctor_get(v___x_898_, 3);
v_diag_902_ = lean_ctor_get(v___x_898_, 4);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_898_, 0);
lean_dec(v_unused_912_);
v___x_904_ = v___x_898_;
v_isShared_905_ = v_isSharedCheck_911_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_diag_902_);
lean_inc(v_postponed_901_);
lean_inc(v_zetaDeltaFVarIds_900_);
lean_inc(v_cache_899_);
lean_dec(v___x_898_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_911_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 0, v_snd_897_);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_snd_897_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_cache_899_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v_zetaDeltaFVarIds_900_);
lean_ctor_set(v_reuseFailAlloc_910_, 3, v_postponed_901_);
lean_ctor_set(v_reuseFailAlloc_910_, 4, v_diag_902_);
v___x_907_ = v_reuseFailAlloc_910_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_st_ref_put(v___y_889_, v___x_907_);
v___x_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_909_, 0, v_fst_896_);
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg___boxed(lean_object* v_e_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg(v_e_913_, v___y_914_);
lean_dec(v___y_914_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0(lean_object* v_e_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg(v_e_917_, v___y_921_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___boxed(lean_object* v_e_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0(v_e_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_934_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_935_ = lean_box(0);
v___x_936_ = l_Lean_Elab_abortTermExceptionId;
v___x_937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___x_935_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg(){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___closed__0);
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg___boxed(lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg();
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1(lean_object* v_00_u03b1_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg();
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___boxed(lean_object* v_00_u03b1_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1(v_00_u03b1_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0(lean_object* v___x_961_, lean_object* v___x_962_, uint8_t v___x_963_, lean_object* v___x_964_, uint8_t v___x_965_, lean_object* v___x_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_961_, v___x_962_, v___x_963_, v___x_963_, v___x_964_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_965_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v___x_977_; lean_object* v_a_978_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; uint8_t v___x_1019_; 
lean_dec_ref_known(v___x_976_, 1);
v___x_977_ = l_Lean_instantiateMVars___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__0___redArg(v_a_975_, v___y_970_);
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref(v___x_977_);
v___x_1019_ = l_Lean_Expr_hasSyntheticSorry(v_a_978_);
if (v___x_1019_ == 0)
{
v___y_980_ = v___y_967_;
v___y_981_ = v___y_968_;
v___y_982_ = v___y_969_;
v___y_983_ = v___y_970_;
v___y_984_ = v___y_971_;
v___y_985_ = v___y_972_;
goto v___jp_979_;
}
else
{
lean_object* v___x_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_a_978_);
lean_dec_ref(v___x_966_);
v___x_1020_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg();
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
v___jp_979_:
{
lean_object* v___x_986_; 
lean_inc(v_a_978_);
v___x_986_ = l_Lean_Meta_getMVars(v_a_978_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_987_);
lean_dec_ref_known(v___x_986_, 1);
v___x_988_ = lean_box(0);
v___x_989_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_987_, v___x_988_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
lean_dec(v_a_987_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; uint8_t v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = lean_unbox(v_a_990_);
lean_dec(v_a_990_);
if (v___x_991_ == 0)
{
uint8_t v___x_992_; lean_object* v___x_993_; 
v___x_992_ = 1;
v___x_993_ = l_Lean_Meta_evalExpr___redArg(v___x_966_, v_a_978_, v___x_992_, v___x_963_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
return v___x_993_;
}
else
{
lean_object* v___x_994_; lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v_a_978_);
lean_dec_ref(v___x_966_);
v___x_994_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__1___redArg();
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
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
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec(v_a_978_);
lean_dec_ref(v___x_966_);
v_a_1003_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_989_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_989_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec(v_a_978_);
lean_dec_ref(v___x_966_);
v_a_1011_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_986_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_986_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
lean_dec(v_a_975_);
lean_dec_ref(v___x_966_);
v_a_1029_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_976_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_976_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec_ref(v___x_966_);
v_a_1037_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_974_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_974_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0___boxed(lean_object* v___x_1045_, lean_object* v___x_1046_, lean_object* v___x_1047_, lean_object* v___x_1048_, lean_object* v___x_1049_, lean_object* v___x_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
uint8_t v___x_5850__boxed_1058_; uint8_t v___x_5852__boxed_1059_; lean_object* v_res_1060_; 
v___x_5850__boxed_1058_ = lean_unbox(v___x_1047_);
v___x_5852__boxed_1059_ = lean_unbox(v___x_1049_);
v_res_1060_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0(v___x_1045_, v___x_1046_, v___x_5850__boxed_1058_, v___x_1048_, v___x_5852__boxed_1059_, v___x_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
return v_res_1060_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1061_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__0);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__1);
v___x_1067_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
lean_ctor_set(v___x_1067_, 2, v___x_1066_);
lean_ctor_set(v___x_1067_, 3, v___x_1066_);
lean_ctor_set(v___x_1067_, 4, v___x_1066_);
lean_ctor_set(v___x_1067_, 5, v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(lean_object* v_env_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v___x_1072_; lean_object* v_nextMacroScope_1073_; lean_object* v_ngen_1074_; lean_object* v_auxDeclNGen_1075_; lean_object* v_traceState_1076_; lean_object* v_messages_1077_; lean_object* v_infoState_1078_; lean_object* v_snapshotTasks_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1105_; 
v___x_1072_ = lean_st_ref_take(v___y_1070_);
v_nextMacroScope_1073_ = lean_ctor_get(v___x_1072_, 1);
v_ngen_1074_ = lean_ctor_get(v___x_1072_, 2);
v_auxDeclNGen_1075_ = lean_ctor_get(v___x_1072_, 3);
v_traceState_1076_ = lean_ctor_get(v___x_1072_, 4);
v_messages_1077_ = lean_ctor_get(v___x_1072_, 6);
v_infoState_1078_ = lean_ctor_get(v___x_1072_, 7);
v_snapshotTasks_1079_ = lean_ctor_get(v___x_1072_, 8);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1105_ == 0)
{
lean_object* v_unused_1106_; lean_object* v_unused_1107_; 
v_unused_1106_ = lean_ctor_get(v___x_1072_, 5);
lean_dec(v_unused_1106_);
v_unused_1107_ = lean_ctor_get(v___x_1072_, 0);
lean_dec(v_unused_1107_);
v___x_1081_ = v___x_1072_;
v_isShared_1082_ = v_isSharedCheck_1105_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_snapshotTasks_1079_);
lean_inc(v_infoState_1078_);
lean_inc(v_messages_1077_);
lean_inc(v_traceState_1076_);
lean_inc(v_auxDeclNGen_1075_);
lean_inc(v_ngen_1074_);
lean_inc(v_nextMacroScope_1073_);
lean_dec(v___x_1072_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1105_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1083_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__2);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 5, v___x_1083_);
lean_ctor_set(v___x_1081_, 0, v_env_1068_);
v___x_1085_ = v___x_1081_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_env_1068_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v_nextMacroScope_1073_);
lean_ctor_set(v_reuseFailAlloc_1104_, 2, v_ngen_1074_);
lean_ctor_set(v_reuseFailAlloc_1104_, 3, v_auxDeclNGen_1075_);
lean_ctor_set(v_reuseFailAlloc_1104_, 4, v_traceState_1076_);
lean_ctor_set(v_reuseFailAlloc_1104_, 5, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1104_, 6, v_messages_1077_);
lean_ctor_set(v_reuseFailAlloc_1104_, 7, v_infoState_1078_);
lean_ctor_set(v_reuseFailAlloc_1104_, 8, v_snapshotTasks_1079_);
v___x_1085_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v_mctx_1088_; lean_object* v_zetaDeltaFVarIds_1089_; lean_object* v_postponed_1090_; lean_object* v_diag_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1102_; 
v___x_1086_ = lean_st_ref_put(v___y_1070_, v___x_1085_);
v___x_1087_ = lean_st_ref_take(v___y_1069_);
v_mctx_1088_ = lean_ctor_get(v___x_1087_, 0);
v_zetaDeltaFVarIds_1089_ = lean_ctor_get(v___x_1087_, 2);
v_postponed_1090_ = lean_ctor_get(v___x_1087_, 3);
v_diag_1091_ = lean_ctor_get(v___x_1087_, 4);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; 
v_unused_1103_ = lean_ctor_get(v___x_1087_, 1);
lean_dec(v_unused_1103_);
v___x_1093_ = v___x_1087_;
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_diag_1091_);
lean_inc(v_postponed_1090_);
lean_inc(v_zetaDeltaFVarIds_1089_);
lean_inc(v_mctx_1088_);
lean_dec(v___x_1087_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1102_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___closed__3);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v___x_1096_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_mctx_1088_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_zetaDeltaFVarIds_1089_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_postponed_1090_);
lean_ctor_set(v_reuseFailAlloc_1101_, 4, v_diag_1091_);
v___x_1098_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_st_ref_put(v___y_1069_, v___x_1098_);
v___x_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1095_);
return v___x_1100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg___boxed(lean_object* v_env_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(v_env_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec(v___y_1109_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg(lean_object* v_env_1113_, lean_object* v_x_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v_env_1123_; lean_object* v_a_1125_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1122_ = lean_st_ref_get(v___y_1120_);
v_env_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc_ref(v_env_1123_);
lean_dec(v___x_1122_);
v___x_1135_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(v_env_1113_, v___y_1118_, v___y_1120_);
lean_dec_ref(v___x_1135_);
lean_inc(v___y_1120_);
lean_inc_ref(v___y_1119_);
lean_inc(v___y_1118_);
lean_inc_ref(v___y_1117_);
lean_inc(v___y_1116_);
lean_inc_ref(v___y_1115_);
v___x_1136_ = lean_apply_7(v_x_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, lean_box(0));
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1137_);
lean_dec_ref_known(v___x_1136_, 1);
v___x_1138_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(v_env_1123_, v___y_1118_, v___y_1120_);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1146_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v_a_1137_);
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1137_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
else
{
lean_object* v_a_1147_; 
v_a_1147_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1136_, 1);
v_a_1125_ = v_a_1147_;
goto v___jp_1124_;
}
v___jp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
v___x_1126_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(v_env_1123_, v___y_1118_, v___y_1120_);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; 
v_unused_1134_ = lean_ctor_get(v___x_1126_, 0);
lean_dec(v_unused_1134_);
v___x_1128_ = v___x_1126_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_dec(v___x_1126_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
lean_ctor_set_tag(v___x_1128_, 1);
lean_ctor_set(v___x_1128_, 0, v_a_1125_);
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1125_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg___boxed(lean_object* v_env_1148_, lean_object* v_x_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg(v_env_1148_, v_x_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
return v_res_1157_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__10));
v___x_1179_ = l_String_toRawSubstring_x27(v___x_1178_);
return v___x_1179_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__24));
v___x_1208_ = l_String_toRawSubstring_x27(v___x_1207_);
return v___x_1208_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26(void){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_box(0);
v___x_1210_ = l_unsafeCast___redArg(v___x_1209_);
return v___x_1210_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__35));
v___x_1233_ = l_String_toRawSubstring_x27(v___x_1232_);
return v___x_1233_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42(void){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = lean_box(0);
v___x_1248_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__38));
v___x_1249_ = l_Lean_mkConst(v___x_1248_, v___x_1247_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42);
v___x_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor(lean_object* v_post_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_){
_start:
{
lean_object* v_toCold_1260_; lean_object* v_ref_1261_; lean_object* v_quotContext_1262_; lean_object* v_currMacroScope_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___f_1310_; lean_object* v___x_1311_; lean_object* v_env_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_toCold_1260_ = lean_ctor_get(v_a_1257_, 0);
v_ref_1261_ = lean_ctor_get(v_a_1257_, 2);
v_quotContext_1262_ = lean_ctor_get(v_toCold_1260_, 8);
v_currMacroScope_1263_ = lean_ctor_get(v_toCold_1260_, 9);
v___x_1264_ = 0;
v___x_1265_ = l_Lean_SourceInfo_fromRef(v_ref_1261_, v___x_1264_);
v___x_1266_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__3));
v___x_1267_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__4));
lean_inc_n(v___x_1265_, 14);
v___x_1268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1265_);
lean_ctor_set(v___x_1268_, 1, v___x_1266_);
v___x_1269_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__7));
v___x_1270_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__9));
v___x_1271_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__11);
v___x_1272_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__13));
lean_inc_n(v_currMacroScope_1263_, 3);
lean_inc_n(v_quotContext_1262_, 3);
v___x_1273_ = l_Lean_addMacroScope(v_quotContext_1262_, v___x_1272_, v_currMacroScope_1263_);
v___x_1274_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__15));
v___x_1275_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1265_);
lean_ctor_set(v___x_1275_, 1, v___x_1271_);
lean_ctor_set(v___x_1275_, 2, v___x_1273_);
lean_ctor_set(v___x_1275_, 3, v___x_1274_);
v___x_1276_ = l_Lean_Syntax_node1(v___x_1265_, v___x_1270_, v___x_1275_);
v___x_1277_ = l_Lean_Syntax_node1(v___x_1265_, v___x_1269_, v___x_1276_);
v___x_1278_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__16));
v___x_1279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1265_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__18));
v___x_1281_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__20));
v___x_1282_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__21));
v___x_1283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1265_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__23));
v___x_1285_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__25);
v___x_1286_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__26);
v___x_1287_ = l_Lean_addMacroScope(v_quotContext_1262_, v___x_1286_, v_currMacroScope_1263_);
v___x_1288_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__33));
v___x_1289_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1265_);
lean_ctor_set(v___x_1289_, 1, v___x_1285_);
lean_ctor_set(v___x_1289_, 2, v___x_1287_);
lean_ctor_set(v___x_1289_, 3, v___x_1288_);
v___x_1290_ = l_Lean_Syntax_node1(v___x_1265_, v___x_1284_, v___x_1289_);
v___x_1291_ = l_Lean_Syntax_node2(v___x_1265_, v___x_1281_, v___x_1283_, v___x_1290_);
v___x_1292_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__34));
v___x_1293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1265_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__36);
v___x_1295_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__37));
v___x_1296_ = l_Lean_addMacroScope(v_quotContext_1262_, v___x_1295_, v_currMacroScope_1263_);
v___x_1297_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__40));
v___x_1298_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1265_);
lean_ctor_set(v___x_1298_, 1, v___x_1294_);
lean_ctor_set(v___x_1298_, 2, v___x_1296_);
lean_ctor_set(v___x_1298_, 3, v___x_1297_);
v___x_1299_ = l_Lean_Syntax_node1(v___x_1265_, v___x_1270_, v___x_1298_);
v___x_1300_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__41));
v___x_1301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1265_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = l_Lean_Syntax_node5(v___x_1265_, v___x_1280_, v___x_1291_, v_post_1252_, v___x_1293_, v___x_1299_, v___x_1301_);
v___x_1303_ = l_Lean_Syntax_node4(v___x_1265_, v___x_1267_, v___x_1268_, v___x_1277_, v___x_1279_, v___x_1302_);
v___x_1304_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__42);
v___x_1305_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43, &l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43_once, _init_l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___closed__43);
v___x_1306_ = 1;
v___x_1307_ = lean_box(0);
v___x_1308_ = lean_box(v___x_1306_);
v___x_1309_ = lean_box(v___x_1264_);
v___f_1310_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1310_, 0, v___x_1303_);
lean_closure_set(v___f_1310_, 1, v___x_1305_);
lean_closure_set(v___f_1310_, 2, v___x_1308_);
lean_closure_set(v___f_1310_, 3, v___x_1307_);
lean_closure_set(v___f_1310_, 4, v___x_1309_);
lean_closure_set(v___f_1310_, 5, v___x_1304_);
v___x_1311_ = lean_st_ref_get(v_a_1258_);
v_env_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc_ref(v_env_1312_);
lean_dec(v___x_1311_);
v___x_1313_ = l_Lean_Environment_unlockAsync(v_env_1312_);
v___x_1314_ = l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg(v___x_1313_, v___f_1310_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor___boxed(lean_object* v_post_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor(v_post_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2(lean_object* v_env_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v___x_1332_; 
v___x_1332_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___redArg(v_env_1324_, v___y_1328_, v___y_1330_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2___boxed(lean_object* v_env_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2_spec__2(v_env_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2(lean_object* v_00_u03b1_1342_, lean_object* v_env_1343_, lean_object* v_x_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1352_; 
v___x_1352_ = l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___redArg(v_env_1343_, v_x_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2___boxed(lean_object* v_00_u03b1_1353_, lean_object* v_env_1354_, lean_object* v_x_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lean_withEnv___at___00__private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor_spec__2(v_00_u03b1_1353_, v_env_1354_, v_x_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0(lean_object* v_post_1364_, lean_object* v_x_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l___private_Lean_PostprocessTraces_Basic_0__Lean_Elab_PostprocessTraces_evalPostprocessor(v_post_1364_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0___boxed(lean_object* v_post_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0(v_post_1374_, v_x_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec_ref(v_x_1375_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1(lean_object* v_a_1384_, lean_object* v_traceState_1385_, lean_object* v_a_x3f_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v_env_1389_; lean_object* v_messages_1390_; lean_object* v_scopes_1391_; lean_object* v_usedQuotCtxts_1392_; lean_object* v_nextMacroScope_1393_; lean_object* v_maxRecDepth_1394_; lean_object* v_ngen_1395_; lean_object* v_auxDeclNGen_1396_; lean_object* v_infoState_1397_; lean_object* v_snapshotTasks_1398_; lean_object* v_prevLinterStates_1399_; lean_object* v_codeQualityEntryTasks_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1410_; 
v___x_1388_ = lean_st_ref_take(v_a_1384_);
v_env_1389_ = lean_ctor_get(v___x_1388_, 0);
v_messages_1390_ = lean_ctor_get(v___x_1388_, 1);
v_scopes_1391_ = lean_ctor_get(v___x_1388_, 2);
v_usedQuotCtxts_1392_ = lean_ctor_get(v___x_1388_, 3);
v_nextMacroScope_1393_ = lean_ctor_get(v___x_1388_, 4);
v_maxRecDepth_1394_ = lean_ctor_get(v___x_1388_, 5);
v_ngen_1395_ = lean_ctor_get(v___x_1388_, 6);
v_auxDeclNGen_1396_ = lean_ctor_get(v___x_1388_, 7);
v_infoState_1397_ = lean_ctor_get(v___x_1388_, 8);
v_snapshotTasks_1398_ = lean_ctor_get(v___x_1388_, 10);
v_prevLinterStates_1399_ = lean_ctor_get(v___x_1388_, 11);
v_codeQualityEntryTasks_1400_ = lean_ctor_get(v___x_1388_, 12);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1410_ == 0)
{
lean_object* v_unused_1411_; 
v_unused_1411_ = lean_ctor_get(v___x_1388_, 9);
lean_dec(v_unused_1411_);
v___x_1402_ = v___x_1388_;
v_isShared_1403_ = v_isSharedCheck_1410_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1400_);
lean_inc(v_prevLinterStates_1399_);
lean_inc(v_snapshotTasks_1398_);
lean_inc(v_infoState_1397_);
lean_inc(v_auxDeclNGen_1396_);
lean_inc(v_ngen_1395_);
lean_inc(v_maxRecDepth_1394_);
lean_inc(v_nextMacroScope_1393_);
lean_inc(v_usedQuotCtxts_1392_);
lean_inc(v_scopes_1391_);
lean_inc(v_messages_1390_);
lean_inc(v_env_1389_);
lean_dec(v___x_1388_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1410_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1404_ = lean_box(0);
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 9, v_traceState_1385_);
v___x_1406_ = v___x_1402_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_env_1389_);
lean_ctor_set(v_reuseFailAlloc_1409_, 1, v_messages_1390_);
lean_ctor_set(v_reuseFailAlloc_1409_, 2, v_scopes_1391_);
lean_ctor_set(v_reuseFailAlloc_1409_, 3, v_usedQuotCtxts_1392_);
lean_ctor_set(v_reuseFailAlloc_1409_, 4, v_nextMacroScope_1393_);
lean_ctor_set(v_reuseFailAlloc_1409_, 5, v_maxRecDepth_1394_);
lean_ctor_set(v_reuseFailAlloc_1409_, 6, v_ngen_1395_);
lean_ctor_set(v_reuseFailAlloc_1409_, 7, v_auxDeclNGen_1396_);
lean_ctor_set(v_reuseFailAlloc_1409_, 8, v_infoState_1397_);
lean_ctor_set(v_reuseFailAlloc_1409_, 9, v_traceState_1385_);
lean_ctor_set(v_reuseFailAlloc_1409_, 10, v_snapshotTasks_1398_);
lean_ctor_set(v_reuseFailAlloc_1409_, 11, v_prevLinterStates_1399_);
lean_ctor_set(v_reuseFailAlloc_1409_, 12, v_codeQualityEntryTasks_1400_);
v___x_1406_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_st_ref_put(v_a_1384_, v___x_1406_);
v___x_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1404_);
return v___x_1408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1___boxed(lean_object* v_a_1412_, lean_object* v_traceState_1413_, lean_object* v_a_x3f_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1(v_a_1412_, v_traceState_1413_, v_a_x3f_1414_);
lean_dec(v_a_x3f_1414_);
lean_dec(v_a_1412_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2(lean_object* v_a_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_apply_4(v_a_1417_, v___y_1418_, v___y_1419_, v___y_1420_, lean_box(0));
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2___boxed(lean_object* v_a_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2(v_a_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(lean_object* v_post_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v___f_1433_; lean_object* v___x_1434_; lean_object* v_traceState_1435_; lean_object* v_r_1436_; 
v___f_1433_ = lean_alloc_closure((void*)(l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__0___boxed), 9, 1);
lean_closure_set(v___f_1433_, 0, v_post_1429_);
v___x_1434_ = lean_st_ref_get(v_a_1431_);
v_traceState_1435_ = lean_ctor_get(v___x_1434_, 9);
lean_inc_ref(v_traceState_1435_);
lean_dec(v___x_1434_);
v_r_1436_ = l_Lean_Elab_Command_runTermElabM___redArg(v___f_1433_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v_r_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1454_; 
v_a_1437_ = lean_ctor_get(v_r_1436_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_r_1436_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1439_ = v_r_1436_;
v_isShared_1440_ = v_isSharedCheck_1454_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v_r_1436_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1454_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___f_1441_; lean_object* v___x_1443_; 
lean_inc(v_a_1437_);
v___f_1441_ = lean_alloc_closure((void*)(l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__2___boxed), 5, 1);
lean_closure_set(v___f_1441_, 0, v_a_1437_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set_tag(v___x_1439_, 1);
v___x_1443_ = v___x_1439_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1437_);
v___x_1443_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
v___x_1444_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1(v_a_1431_, v_traceState_1435_, v___x_1443_);
lean_dec_ref(v___x_1443_);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; 
v_unused_1452_ = lean_ctor_get(v___x_1444_, 0);
lean_dec(v_unused_1452_);
v___x_1446_ = v___x_1444_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_dec(v___x_1444_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___f_1441_);
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___f_1441_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_a_1455_ = lean_ctor_get(v_r_1436_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v_r_1436_, 1);
v___x_1456_ = lean_box(0);
v___x_1457_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___lam__1(v_a_1431_, v_traceState_1435_, v___x_1456_);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v___x_1457_, 0);
lean_dec(v_unused_1465_);
v___x_1459_ = v___x_1457_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_dec(v___x_1457_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 1);
lean_ctor_set(v___x_1459_, 0, v_a_1455_);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1455_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel___boxed(lean_object* v_post_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_Elab_PostprocessTraces_evalPostprocessorTopLevel(v_post_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
return v_res_1470_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PostprocessTraces_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PostprocessTraces_instInhabitedTraceTree = _init_l_Lean_PostprocessTraces_instInhabitedTraceTree();
lean_mark_persistent(l_Lean_PostprocessTraces_instInhabitedTraceTree);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PostprocessTraces_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PostprocessTraces_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PostprocessTraces_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

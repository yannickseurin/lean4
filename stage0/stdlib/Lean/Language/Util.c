// Lean compiler output
// Module: Lean.Language.Util
// Imports: public import Lean.Elab.InfoTree import Init.Data.Format.Macro
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
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* lean_io_get_num_heartbeats();
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageLog_toList(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__2 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "\n• "};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__5 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__5_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__6 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__6_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snapshotTree"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__7 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__7_value),LEAN_SCALAR_PTR_LITERAL(11, 136, 72, 78, 187, 126, 217, 153)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 108, 214, 181, 226, 69, 54, 12)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10_value;
static lean_once_cell_t l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "<range inherited> "};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__12 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__12_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__12_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__13 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__13_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__14 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__14_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__14_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__15 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__15_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__16 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__16_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__16_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__17 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__17_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__18 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__18_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__18_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__19 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__19_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__20 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__20_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__20_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__21 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__21_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__22 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__22_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__22_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__23 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__23_value;
static const lean_string_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "<no range> "};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__24 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__24_value;
static const lean_ctor_object l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__24_value)}};
static const lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__25 = (const lean_object*)&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__25_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_trace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_trace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_unsigned_to_nat(32u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_4_ = ((size_t)5ULL);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_unsigned_to_nat(32u);
v___x_7_ = lean_mk_empty_array_with_capacity(v___x_6_);
v___x_8_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__0);
v___x_9_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_5_);
lean_ctor_set(v___x_9_, 3, v___x_5_);
lean_ctor_set_usize(v___x_9_, 4, v___x_4_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg(lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v_traceState_13_; lean_object* v_traces_14_; lean_object* v___x_15_; lean_object* v_traceState_16_; lean_object* v_env_17_; lean_object* v_nextMacroScope_18_; lean_object* v_ngen_19_; lean_object* v_auxDeclNGen_20_; lean_object* v_cache_21_; lean_object* v_messages_22_; lean_object* v_infoState_23_; lean_object* v_snapshotTasks_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_43_; 
v___x_12_ = lean_st_ref_get(v___y_10_);
v_traceState_13_ = lean_ctor_get(v___x_12_, 4);
lean_inc_ref(v_traceState_13_);
lean_dec(v___x_12_);
v_traces_14_ = lean_ctor_get(v_traceState_13_, 0);
lean_inc_ref(v_traces_14_);
lean_dec_ref(v_traceState_13_);
v___x_15_ = lean_st_ref_take(v___y_10_);
v_traceState_16_ = lean_ctor_get(v___x_15_, 4);
v_env_17_ = lean_ctor_get(v___x_15_, 0);
v_nextMacroScope_18_ = lean_ctor_get(v___x_15_, 1);
v_ngen_19_ = lean_ctor_get(v___x_15_, 2);
v_auxDeclNGen_20_ = lean_ctor_get(v___x_15_, 3);
v_cache_21_ = lean_ctor_get(v___x_15_, 5);
v_messages_22_ = lean_ctor_get(v___x_15_, 6);
v_infoState_23_ = lean_ctor_get(v___x_15_, 7);
v_snapshotTasks_24_ = lean_ctor_get(v___x_15_, 8);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_43_ == 0)
{
v___x_26_ = v___x_15_;
v_isShared_27_ = v_isSharedCheck_43_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_snapshotTasks_24_);
lean_inc(v_infoState_23_);
lean_inc(v_messages_22_);
lean_inc(v_cache_21_);
lean_inc(v_traceState_16_);
lean_inc(v_auxDeclNGen_20_);
lean_inc(v_ngen_19_);
lean_inc(v_nextMacroScope_18_);
lean_inc(v_env_17_);
lean_dec(v___x_15_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_43_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
uint64_t v_tid_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_41_; 
v_tid_28_ = lean_ctor_get_uint64(v_traceState_16_, sizeof(void*)*1);
v_isSharedCheck_41_ = !lean_is_exclusive(v_traceState_16_);
if (v_isSharedCheck_41_ == 0)
{
lean_object* v_unused_42_; 
v_unused_42_ = lean_ctor_get(v_traceState_16_, 0);
lean_dec(v_unused_42_);
v___x_30_ = v_traceState_16_;
v_isShared_31_ = v_isSharedCheck_41_;
goto v_resetjp_29_;
}
else
{
lean_dec(v_traceState_16_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_41_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___closed__1);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v___x_32_);
lean_ctor_set_uint64(v_reuseFailAlloc_40_, sizeof(void*)*1, v_tid_28_);
v___x_34_ = v_reuseFailAlloc_40_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_36_; 
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 4, v___x_34_);
v___x_36_ = v___x_26_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_env_17_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_nextMacroScope_18_);
lean_ctor_set(v_reuseFailAlloc_39_, 2, v_ngen_19_);
lean_ctor_set(v_reuseFailAlloc_39_, 3, v_auxDeclNGen_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 4, v___x_34_);
lean_ctor_set(v_reuseFailAlloc_39_, 5, v_cache_21_);
lean_ctor_set(v_reuseFailAlloc_39_, 6, v_messages_22_);
lean_ctor_set(v_reuseFailAlloc_39_, 7, v_infoState_23_);
lean_ctor_set(v_reuseFailAlloc_39_, 8, v_snapshotTasks_24_);
v___x_36_ = v_reuseFailAlloc_39_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_st_ref_put(v___y_10_, v___x_36_);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v_traces_14_);
return v___x_38_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg___boxed(lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg(v___y_44_);
lean_dec(v___y_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4(lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg(v___y_48_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___boxed(lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4(v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_54_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(lean_object* v_opts_55_, lean_object* v_opt_56_){
_start:
{
lean_object* v_name_57_; lean_object* v_defValue_58_; lean_object* v_map_59_; lean_object* v___x_60_; 
v_name_57_ = lean_ctor_get(v_opt_56_, 0);
v_defValue_58_ = lean_ctor_get(v_opt_56_, 1);
v_map_59_ = lean_ctor_get(v_opts_55_, 0);
v___x_60_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_59_, v_name_57_);
if (lean_obj_tag(v___x_60_) == 0)
{
uint8_t v___x_61_; 
v___x_61_ = lean_unbox(v_defValue_58_);
return v___x_61_;
}
else
{
lean_object* v_val_62_; 
v_val_62_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_val_62_);
lean_dec_ref_known(v___x_60_, 1);
if (lean_obj_tag(v_val_62_) == 1)
{
uint8_t v_v_63_; 
v_v_63_ = lean_ctor_get_uint8(v_val_62_, 0);
lean_dec_ref_known(v_val_62_, 0);
return v_v_63_;
}
else
{
uint8_t v___x_64_; 
lean_dec(v_val_62_);
v___x_64_ = lean_unbox(v_defValue_58_);
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5___boxed(lean_object* v_opts_65_, lean_object* v_opt_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(v_opts_65_, v_opt_66_);
lean_dec_ref(v_opt_66_);
lean_dec_ref(v_opts_65_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0(lean_object* v___x_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = l_Lean_MessageData_ofFormat(v___x_69_);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0___boxed(lean_object* v___x_76_, lean_object* v_x_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0(v___x_76_, v_x_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec_ref(v_x_77_);
return v_res_81_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_82_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__0);
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
lean_ctor_set(v___x_87_, 2, v___x_86_);
lean_ctor_set(v___x_87_, 3, v___x_86_);
lean_ctor_set(v___x_87_, 4, v___x_85_);
lean_ctor_set(v___x_87_, 5, v___x_85_);
lean_ctor_set(v___x_87_, 6, v___x_85_);
lean_ctor_set(v___x_87_, 7, v___x_85_);
lean_ctor_set(v___x_87_, 8, v___x_85_);
lean_ctor_set(v___x_87_, 9, v___x_85_);
lean_ctor_set(v___x_87_, 10, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = lean_unsigned_to_nat(32u);
v___x_89_ = lean_mk_empty_array_with_capacity(v___x_88_);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4(void){
_start:
{
size_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_91_ = ((size_t)5ULL);
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = lean_unsigned_to_nat(32u);
v___x_94_ = lean_mk_empty_array_with_capacity(v___x_93_);
v___x_95_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__3);
v___x_96_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
lean_ctor_set(v___x_96_, 2, v___x_92_);
lean_ctor_set(v___x_96_, 3, v___x_92_);
lean_ctor_set_usize(v___x_96_, 4, v___x_91_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_box(1);
v___x_98_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__4);
v___x_99_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__1);
v___x_100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
lean_ctor_set(v___x_100_, 2, v___x_97_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2(lean_object* v_msgData_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v___x_105_; lean_object* v_toCold_106_; lean_object* v_env_107_; lean_object* v_options_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_105_ = lean_st_ref_get(v___y_103_);
v_toCold_106_ = lean_ctor_get(v___y_102_, 0);
v_env_107_ = lean_ctor_get(v___x_105_, 0);
lean_inc_ref(v_env_107_);
lean_dec(v___x_105_);
v_options_108_ = lean_ctor_get(v_toCold_106_, 2);
v___x_109_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__2);
v___x_110_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___closed__5);
lean_inc_ref(v_options_108_);
v___x_111_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_111_, 0, v_env_107_);
lean_ctor_set(v___x_111_, 1, v___x_109_);
lean_ctor_set(v___x_111_, 2, v___x_110_);
lean_ctor_set(v___x_111_, 3, v_options_108_);
v___x_112_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v_msgData_101_);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2___boxed(lean_object* v_msgData_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2(v_msgData_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_118_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0(void){
_start:
{
lean_object* v___x_119_; double v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_float_of_nat(v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(lean_object* v_cls_124_, lean_object* v_msg_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v_ref_129_; lean_object* v___x_130_; lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_175_; 
v_ref_129_ = lean_ctor_get(v___y_126_, 2);
v___x_130_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2(v_msg_125_, v___y_126_, v___y_127_);
v_a_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_175_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_175_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_175_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; lean_object* v_traceState_136_; lean_object* v_env_137_; lean_object* v_nextMacroScope_138_; lean_object* v_ngen_139_; lean_object* v_auxDeclNGen_140_; lean_object* v_cache_141_; lean_object* v_messages_142_; lean_object* v_infoState_143_; lean_object* v_snapshotTasks_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_174_; 
v___x_135_ = lean_st_ref_take(v___y_127_);
v_traceState_136_ = lean_ctor_get(v___x_135_, 4);
v_env_137_ = lean_ctor_get(v___x_135_, 0);
v_nextMacroScope_138_ = lean_ctor_get(v___x_135_, 1);
v_ngen_139_ = lean_ctor_get(v___x_135_, 2);
v_auxDeclNGen_140_ = lean_ctor_get(v___x_135_, 3);
v_cache_141_ = lean_ctor_get(v___x_135_, 5);
v_messages_142_ = lean_ctor_get(v___x_135_, 6);
v_infoState_143_ = lean_ctor_get(v___x_135_, 7);
v_snapshotTasks_144_ = lean_ctor_get(v___x_135_, 8);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_174_ == 0)
{
v___x_146_ = v___x_135_;
v_isShared_147_ = v_isSharedCheck_174_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_snapshotTasks_144_);
lean_inc(v_infoState_143_);
lean_inc(v_messages_142_);
lean_inc(v_cache_141_);
lean_inc(v_traceState_136_);
lean_inc(v_auxDeclNGen_140_);
lean_inc(v_ngen_139_);
lean_inc(v_nextMacroScope_138_);
lean_inc(v_env_137_);
lean_dec(v___x_135_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_174_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
uint64_t v_tid_148_; lean_object* v_traces_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_173_; 
v_tid_148_ = lean_ctor_get_uint64(v_traceState_136_, sizeof(void*)*1);
v_traces_149_ = lean_ctor_get(v_traceState_136_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v_traceState_136_);
if (v_isSharedCheck_173_ == 0)
{
v___x_151_ = v_traceState_136_;
v_isShared_152_ = v_isSharedCheck_173_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_traces_149_);
lean_dec(v_traceState_136_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_173_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; double v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_153_ = lean_box(0);
v___x_154_ = lean_box(0);
v___x_155_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0);
v___x_156_ = 0;
v___x_157_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__1));
v___x_158_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_158_, 0, v_cls_124_);
lean_ctor_set(v___x_158_, 1, v___x_154_);
lean_ctor_set(v___x_158_, 2, v___x_157_);
lean_ctor_set_float(v___x_158_, sizeof(void*)*3, v___x_155_);
lean_ctor_set_float(v___x_158_, sizeof(void*)*3 + 8, v___x_155_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*3 + 16, v___x_156_);
v___x_159_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__2));
v___x_160_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v_a_131_);
lean_ctor_set(v___x_160_, 2, v___x_159_);
lean_inc(v_ref_129_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v_ref_129_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = l_Lean_PersistentArray_push___redArg(v_traces_149_, v___x_161_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_162_);
v___x_164_ = v___x_151_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_162_);
lean_ctor_set_uint64(v_reuseFailAlloc_172_, sizeof(void*)*1, v_tid_148_);
v___x_164_ = v_reuseFailAlloc_172_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 4, v___x_164_);
v___x_166_ = v___x_146_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_env_137_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_nextMacroScope_138_);
lean_ctor_set(v_reuseFailAlloc_171_, 2, v_ngen_139_);
lean_ctor_set(v_reuseFailAlloc_171_, 3, v_auxDeclNGen_140_);
lean_ctor_set(v_reuseFailAlloc_171_, 4, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_171_, 5, v_cache_141_);
lean_ctor_set(v_reuseFailAlloc_171_, 6, v_messages_142_);
lean_ctor_set(v_reuseFailAlloc_171_, 7, v_infoState_143_);
lean_ctor_set(v_reuseFailAlloc_171_, 8, v_snapshotTasks_144_);
v___x_166_ = v_reuseFailAlloc_171_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_167_ = lean_st_ref_put(v___y_127_, v___x_166_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 0, v___x_153_);
v___x_169_ = v___x_133_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_153_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___boxed(lean_object* v_cls_176_, lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(v_cls_176_, v_msg_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3_spec__4(lean_object* v_pre_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_dec(v_pre_182_);
return v_x_183_;
}
else
{
lean_object* v_head_185_; lean_object* v_tail_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_196_; 
v_head_185_ = lean_ctor_get(v_x_184_, 0);
v_tail_186_ = lean_ctor_get(v_x_184_, 1);
v_isSharedCheck_196_ = !lean_is_exclusive(v_x_184_);
if (v_isSharedCheck_196_ == 0)
{
v___x_188_ = v_x_184_;
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_tail_186_);
lean_inc(v_head_185_);
lean_dec(v_x_184_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
lean_inc(v_pre_182_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 5);
lean_ctor_set(v___x_188_, 1, v_pre_182_);
lean_ctor_set(v___x_188_, 0, v_x_183_);
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_x_183_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_pre_182_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_192_, 0, v_head_185_);
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v_x_183_ = v___x_193_;
v_x_184_ = v_tail_186_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3(lean_object* v_pre_197_, lean_object* v_x_198_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v___x_199_; 
lean_dec(v_pre_197_);
v___x_199_ = lean_box(0);
return v___x_199_;
}
else
{
lean_object* v_head_200_; lean_object* v_tail_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_210_; 
v_head_200_ = lean_ctor_get(v_x_198_, 0);
v_tail_201_ = lean_ctor_get(v_x_198_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_210_ == 0)
{
v___x_203_ = v_x_198_;
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_tail_201_);
lean_inc(v_head_200_);
lean_dec(v_x_198_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_207_; 
v___x_205_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_205_, 0, v_head_200_);
lean_inc(v_pre_197_);
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 5);
lean_ctor_set(v___x_203_, 1, v___x_205_);
lean_ctor_set(v___x_203_, 0, v_pre_197_);
v___x_207_ = v___x_203_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_pre_197_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_205_);
v___x_207_ = v_reuseFailAlloc_209_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; 
v___x_208_ = l_List_foldl___at___00Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3_spec__4(v_pre_197_, v___x_207_, v_tail_201_);
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg(lean_object* v_x_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = l_List_reverse___redArg(v_x_212_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
else
{
lean_object* v_head_216_; lean_object* v_tail_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_227_; 
v_head_216_ = lean_ctor_get(v_x_211_, 0);
v_tail_217_ = lean_ctor_get(v_x_211_, 1);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_227_ == 0)
{
v___x_219_ = v_x_211_;
v_isShared_220_ = v_isSharedCheck_227_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_tail_217_);
lean_inc(v_head_216_);
lean_dec(v_x_211_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_227_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_221_ = 0;
v___x_222_ = l_Lean_Message_toString(v_head_216_, v___x_221_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_x_212_);
lean_ctor_set(v___x_219_, 0, v___x_222_);
v___x_224_ = v___x_219_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_x_212_);
v___x_224_ = v_reuseFailAlloc_226_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
v_x_211_ = v_tail_217_;
v_x_212_ = v___x_224_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg___boxed(lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg(v_x_228_, v_x_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(lean_object* v_x_232_){
_start:
{
if (lean_obj_tag(v_x_232_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
v_a_234_ = lean_ctor_get(v_x_232_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v_x_232_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v_x_232_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
lean_ctor_set_tag(v___x_236_, 1);
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
v_a_242_ = lean_ctor_get(v_x_232_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v_x_232_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v_x_232_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set_tag(v___x_244_, 0);
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg___boxed(lean_object* v_x_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(v_x_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11(lean_object* v_opts_253_, lean_object* v_opt_254_){
_start:
{
lean_object* v_name_255_; lean_object* v_defValue_256_; lean_object* v_map_257_; lean_object* v___x_258_; 
v_name_255_ = lean_ctor_get(v_opt_254_, 0);
v_defValue_256_ = lean_ctor_get(v_opt_254_, 1);
v_map_257_ = lean_ctor_get(v_opts_253_, 0);
v___x_258_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_257_, v_name_255_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_inc(v_defValue_256_);
return v_defValue_256_;
}
else
{
lean_object* v_val_259_; 
v_val_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v___x_258_, 1);
if (lean_obj_tag(v_val_259_) == 3)
{
lean_object* v_v_260_; 
v_v_260_ = lean_ctor_get(v_val_259_, 0);
lean_inc(v_v_260_);
lean_dec_ref_known(v_val_259_, 1);
return v_v_260_;
}
else
{
lean_dec(v_val_259_);
lean_inc(v_defValue_256_);
return v_defValue_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11___boxed(lean_object* v_opts_261_, lean_object* v_opt_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11(v_opts_261_, v_opt_262_);
lean_dec_ref(v_opt_262_);
lean_dec_ref(v_opts_261_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9(size_t v_sz_264_, size_t v_i_265_, lean_object* v_bs_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = lean_usize_dec_lt(v_i_265_, v_sz_264_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
v___x_268_ = l_unsafeCast___redArg(v_bs_266_);
lean_dec_ref(v_bs_266_);
return v___x_268_;
}
else
{
lean_object* v_v_269_; lean_object* v___x_270_; lean_object* v_msg_271_; lean_object* v___x_272_; lean_object* v_bs_x27_273_; size_t v___x_274_; size_t v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_v_269_ = lean_array_uget_borrowed(v_bs_266_, v_i_265_);
v___x_270_ = l_unsafeCast___redArg(v_v_269_);
v_msg_271_ = lean_ctor_get(v___x_270_, 1);
lean_inc_ref(v_msg_271_);
lean_dec(v___x_270_);
v___x_272_ = lean_unsigned_to_nat(0u);
v_bs_x27_273_ = lean_array_uset(v_bs_266_, v_i_265_, v___x_272_);
v___x_274_ = ((size_t)1ULL);
v___x_275_ = lean_usize_add(v_i_265_, v___x_274_);
v___x_276_ = l_unsafeCast___redArg(v_msg_271_);
lean_dec_ref(v_msg_271_);
v___x_277_ = lean_array_uset(v_bs_x27_273_, v_i_265_, v___x_276_);
v_i_265_ = v___x_275_;
v_bs_266_ = v___x_277_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9___boxed(lean_object* v_sz_279_, lean_object* v_i_280_, lean_object* v_bs_281_){
_start:
{
size_t v_sz_boxed_282_; size_t v_i_boxed_283_; lean_object* v_res_284_; 
v_sz_boxed_282_ = lean_unbox_usize(v_sz_279_);
lean_dec(v_sz_279_);
v_i_boxed_283_ = lean_unbox_usize(v_i_280_);
lean_dec(v_i_280_);
v_res_284_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9(v_sz_boxed_282_, v_i_boxed_283_, v_bs_281_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8(lean_object* v_oldTraces_285_, lean_object* v_data_286_, lean_object* v_ref_287_, lean_object* v_msg_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_toCold_292_; lean_object* v_currRecDepth_293_; lean_object* v_ref_294_; uint8_t v_diag_295_; uint8_t v_suppressElabErrors_296_; lean_object* v_ref_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_traceState_300_; lean_object* v_traces_301_; lean_object* v___x_302_; size_t v_sz_303_; size_t v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_msg_308_; lean_object* v___x_309_; lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_347_; 
v_toCold_292_ = lean_ctor_get(v___y_289_, 0);
v_currRecDepth_293_ = lean_ctor_get(v___y_289_, 1);
v_ref_294_ = lean_ctor_get(v___y_289_, 2);
v_diag_295_ = lean_ctor_get_uint8(v___y_289_, sizeof(void*)*3);
v_suppressElabErrors_296_ = lean_ctor_get_uint8(v___y_289_, sizeof(void*)*3 + 1);
v_ref_297_ = l_Lean_replaceRef(v_ref_287_, v_ref_294_);
lean_inc(v_currRecDepth_293_);
lean_inc_ref(v_toCold_292_);
v___x_298_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_298_, 0, v_toCold_292_);
lean_ctor_set(v___x_298_, 1, v_currRecDepth_293_);
lean_ctor_set(v___x_298_, 2, v_ref_297_);
lean_ctor_set_uint8(v___x_298_, sizeof(void*)*3, v_diag_295_);
lean_ctor_set_uint8(v___x_298_, sizeof(void*)*3 + 1, v_suppressElabErrors_296_);
v___x_299_ = lean_st_ref_get(v___y_290_);
v_traceState_300_ = lean_ctor_get(v___x_299_, 4);
lean_inc_ref(v_traceState_300_);
lean_dec(v___x_299_);
v_traces_301_ = lean_ctor_get(v_traceState_300_, 0);
lean_inc_ref(v_traces_301_);
lean_dec_ref(v_traceState_300_);
v___x_302_ = l_Lean_PersistentArray_toArray___redArg(v_traces_301_);
lean_dec_ref(v_traces_301_);
v_sz_303_ = lean_array_size(v___x_302_);
v___x_304_ = ((size_t)0ULL);
v___x_305_ = l_unsafeCast___redArg(v___x_302_);
lean_dec_ref(v___x_302_);
v___x_306_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8_spec__9(v_sz_303_, v___x_304_, v___x_305_);
v___x_307_ = l_unsafeCast___redArg(v___x_306_);
lean_dec_ref(v___x_306_);
v_msg_308_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_308_, 0, v_data_286_);
lean_ctor_set(v_msg_308_, 1, v_msg_288_);
lean_ctor_set(v_msg_308_, 2, v___x_307_);
v___x_309_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2_spec__2(v_msg_308_, v___x_298_, v___y_290_);
lean_dec_ref_known(v___x_298_, 3);
v_a_310_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_347_ == 0)
{
v___x_312_ = v___x_309_;
v_isShared_313_ = v_isSharedCheck_347_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_309_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_347_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v_traceState_315_; lean_object* v_env_316_; lean_object* v_nextMacroScope_317_; lean_object* v_ngen_318_; lean_object* v_auxDeclNGen_319_; lean_object* v_cache_320_; lean_object* v_messages_321_; lean_object* v_infoState_322_; lean_object* v_snapshotTasks_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_346_; 
v___x_314_ = lean_st_ref_take(v___y_290_);
v_traceState_315_ = lean_ctor_get(v___x_314_, 4);
v_env_316_ = lean_ctor_get(v___x_314_, 0);
v_nextMacroScope_317_ = lean_ctor_get(v___x_314_, 1);
v_ngen_318_ = lean_ctor_get(v___x_314_, 2);
v_auxDeclNGen_319_ = lean_ctor_get(v___x_314_, 3);
v_cache_320_ = lean_ctor_get(v___x_314_, 5);
v_messages_321_ = lean_ctor_get(v___x_314_, 6);
v_infoState_322_ = lean_ctor_get(v___x_314_, 7);
v_snapshotTasks_323_ = lean_ctor_get(v___x_314_, 8);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_346_ == 0)
{
v___x_325_ = v___x_314_;
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_snapshotTasks_323_);
lean_inc(v_infoState_322_);
lean_inc(v_messages_321_);
lean_inc(v_cache_320_);
lean_inc(v_traceState_315_);
lean_inc(v_auxDeclNGen_319_);
lean_inc(v_ngen_318_);
lean_inc(v_nextMacroScope_317_);
lean_inc(v_env_316_);
lean_dec(v___x_314_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
uint64_t v_tid_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_344_; 
v_tid_327_ = lean_ctor_get_uint64(v_traceState_315_, sizeof(void*)*1);
v_isSharedCheck_344_ = !lean_is_exclusive(v_traceState_315_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; 
v_unused_345_ = lean_ctor_get(v_traceState_315_, 0);
lean_dec(v_unused_345_);
v___x_329_ = v_traceState_315_;
v_isShared_330_ = v_isSharedCheck_344_;
goto v_resetjp_328_;
}
else
{
lean_dec(v_traceState_315_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_344_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_331_ = lean_box(0);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v_ref_287_);
lean_ctor_set(v___x_332_, 1, v_a_310_);
v___x_333_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_285_, v___x_332_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_333_);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_333_);
lean_ctor_set_uint64(v_reuseFailAlloc_343_, sizeof(void*)*1, v_tid_327_);
v___x_335_ = v_reuseFailAlloc_343_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_337_; 
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 4, v___x_335_);
v___x_337_ = v___x_325_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_env_316_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_nextMacroScope_317_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v_ngen_318_);
lean_ctor_set(v_reuseFailAlloc_342_, 3, v_auxDeclNGen_319_);
lean_ctor_set(v_reuseFailAlloc_342_, 4, v___x_335_);
lean_ctor_set(v_reuseFailAlloc_342_, 5, v_cache_320_);
lean_ctor_set(v_reuseFailAlloc_342_, 6, v_messages_321_);
lean_ctor_set(v_reuseFailAlloc_342_, 7, v_infoState_322_);
lean_ctor_set(v_reuseFailAlloc_342_, 8, v_snapshotTasks_323_);
v___x_337_ = v_reuseFailAlloc_342_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_st_ref_put(v___y_290_, v___x_337_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v___x_331_);
v___x_340_ = v___x_312_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_331_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8___boxed(lean_object* v_oldTraces_348_, lean_object* v_data_349_, lean_object* v_ref_350_, lean_object* v_msg_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8(v_oldTraces_348_, v_data_349_, v_ref_350_, v_msg_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
return v_res_355_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10(lean_object* v_e_356_){
_start:
{
if (lean_obj_tag(v_e_356_) == 0)
{
uint8_t v___x_357_; 
v___x_357_ = 2;
return v___x_357_;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = 0;
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10___boxed(lean_object* v_e_359_){
_start:
{
uint8_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10(v_e_359_);
lean_dec_ref(v_e_359_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__0));
v___x_364_ = l_Lean_stringToMessageData(v___x_363_);
return v___x_364_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2(void){
_start:
{
lean_object* v___x_365_; double v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(1000u);
v___x_366_ = lean_float_of_nat(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6(lean_object* v_cls_367_, uint8_t v_collapsed_368_, lean_object* v_tag_369_, lean_object* v_opts_370_, uint8_t v_clsEnabled_371_, lean_object* v_oldTraces_372_, lean_object* v_msg_373_, lean_object* v_resStartStop_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_fst_378_; lean_object* v_snd_379_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v_data_383_; lean_object* v_fst_386_; lean_object* v_snd_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___y_391_; lean_object* v_a_392_; uint8_t v___y_407_; double v___y_438_; 
v_fst_378_ = lean_ctor_get(v_resStartStop_374_, 0);
lean_inc(v_fst_378_);
v_snd_379_ = lean_ctor_get(v_resStartStop_374_, 1);
lean_inc(v_snd_379_);
lean_dec_ref(v_resStartStop_374_);
v_fst_386_ = lean_ctor_get(v_snd_379_, 0);
lean_inc(v_fst_386_);
v_snd_387_ = lean_ctor_get(v_snd_379_, 1);
lean_inc(v_snd_387_);
lean_dec(v_snd_379_);
v___x_388_ = l_Lean_trace_profiler;
v___x_389_ = l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(v_opts_370_, v___x_388_);
if (v___x_389_ == 0)
{
v___y_407_ = v___x_389_;
goto v___jp_406_;
}
else
{
lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_443_ = l_Lean_trace_profiler_useHeartbeats;
v___x_444_ = l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(v_opts_370_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; double v___x_447_; double v___x_448_; double v___x_449_; 
v___x_445_ = l_Lean_trace_profiler_threshold;
v___x_446_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11(v_opts_370_, v___x_445_);
v___x_447_ = lean_float_of_nat(v___x_446_);
v___x_448_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__2);
v___x_449_ = lean_float_div(v___x_447_, v___x_448_);
v___y_438_ = v___x_449_;
goto v___jp_437_;
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; double v___x_452_; 
v___x_450_ = l_Lean_trace_profiler_threshold;
v___x_451_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__11(v_opts_370_, v___x_450_);
v___x_452_ = lean_float_of_nat(v___x_451_);
v___y_438_ = v___x_452_;
goto v___jp_437_;
}
}
v___jp_380_:
{
lean_object* v___x_384_; 
lean_inc(v___y_381_);
v___x_384_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__8(v_oldTraces_372_, v_data_383_, v___y_381_, v___y_382_, v___y_375_, v___y_376_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v___x_385_; 
lean_dec_ref_known(v___x_384_, 1);
v___x_385_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(v_fst_378_);
return v___x_385_;
}
else
{
lean_dec(v_fst_378_);
return v___x_384_;
}
}
v___jp_390_:
{
uint8_t v_result_393_; lean_object* v___x_394_; lean_object* v___x_395_; double v___x_396_; lean_object* v_data_397_; 
v_result_393_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__10(v_fst_378_);
v___x_394_ = lean_box(v_result_393_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
v___x_396_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__0);
lean_inc_ref(v_tag_369_);
lean_inc_ref(v___x_395_);
lean_inc(v_cls_367_);
v_data_397_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_397_, 0, v_cls_367_);
lean_ctor_set(v_data_397_, 1, v___x_395_);
lean_ctor_set(v_data_397_, 2, v_tag_369_);
lean_ctor_set_float(v_data_397_, sizeof(void*)*3, v___x_396_);
lean_ctor_set_float(v_data_397_, sizeof(void*)*3 + 8, v___x_396_);
lean_ctor_set_uint8(v_data_397_, sizeof(void*)*3 + 16, v_collapsed_368_);
if (v___x_389_ == 0)
{
lean_dec_ref_known(v___x_395_, 1);
lean_dec(v_snd_387_);
lean_dec(v_fst_386_);
lean_dec_ref(v_tag_369_);
lean_dec(v_cls_367_);
v___y_381_ = v___y_391_;
v___y_382_ = v_a_392_;
v_data_383_ = v_data_397_;
goto v___jp_380_;
}
else
{
lean_object* v_data_398_; double v___x_399_; double v___x_400_; 
lean_dec_ref_known(v_data_397_, 3);
v_data_398_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_398_, 0, v_cls_367_);
lean_ctor_set(v_data_398_, 1, v___x_395_);
lean_ctor_set(v_data_398_, 2, v_tag_369_);
v___x_399_ = lean_unbox_float(v_fst_386_);
lean_dec(v_fst_386_);
lean_ctor_set_float(v_data_398_, sizeof(void*)*3, v___x_399_);
v___x_400_ = lean_unbox_float(v_snd_387_);
lean_dec(v_snd_387_);
lean_ctor_set_float(v_data_398_, sizeof(void*)*3 + 8, v___x_400_);
lean_ctor_set_uint8(v_data_398_, sizeof(void*)*3 + 16, v_collapsed_368_);
v___y_381_ = v___y_391_;
v___y_382_ = v_a_392_;
v_data_383_ = v_data_398_;
goto v___jp_380_;
}
}
v___jp_401_:
{
lean_object* v_ref_402_; lean_object* v___x_403_; 
v_ref_402_ = lean_ctor_get(v___y_375_, 2);
lean_inc(v___y_376_);
lean_inc_ref(v___y_375_);
lean_inc(v_fst_378_);
v___x_403_ = lean_apply_4(v_msg_373_, v_fst_378_, v___y_375_, v___y_376_, lean_box(0));
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v___y_391_ = v_ref_402_;
v_a_392_ = v_a_404_;
goto v___jp_390_;
}
else
{
lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_405_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___closed__1);
v___y_391_ = v_ref_402_;
v_a_392_ = v___x_405_;
goto v___jp_390_;
}
}
v___jp_406_:
{
if (v_clsEnabled_371_ == 0)
{
if (v___y_407_ == 0)
{
lean_object* v___x_408_; lean_object* v_traceState_409_; lean_object* v_env_410_; lean_object* v_nextMacroScope_411_; lean_object* v_ngen_412_; lean_object* v_auxDeclNGen_413_; lean_object* v_cache_414_; lean_object* v_messages_415_; lean_object* v_infoState_416_; lean_object* v_snapshotTasks_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_snd_387_);
lean_dec(v_fst_386_);
lean_dec_ref(v_msg_373_);
lean_dec_ref(v_tag_369_);
lean_dec(v_cls_367_);
v___x_408_ = lean_st_ref_take(v___y_376_);
v_traceState_409_ = lean_ctor_get(v___x_408_, 4);
v_env_410_ = lean_ctor_get(v___x_408_, 0);
v_nextMacroScope_411_ = lean_ctor_get(v___x_408_, 1);
v_ngen_412_ = lean_ctor_get(v___x_408_, 2);
v_auxDeclNGen_413_ = lean_ctor_get(v___x_408_, 3);
v_cache_414_ = lean_ctor_get(v___x_408_, 5);
v_messages_415_ = lean_ctor_get(v___x_408_, 6);
v_infoState_416_ = lean_ctor_get(v___x_408_, 7);
v_snapshotTasks_417_ = lean_ctor_get(v___x_408_, 8);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_436_ == 0)
{
v___x_419_ = v___x_408_;
v_isShared_420_ = v_isSharedCheck_436_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_snapshotTasks_417_);
lean_inc(v_infoState_416_);
lean_inc(v_messages_415_);
lean_inc(v_cache_414_);
lean_inc(v_traceState_409_);
lean_inc(v_auxDeclNGen_413_);
lean_inc(v_ngen_412_);
lean_inc(v_nextMacroScope_411_);
lean_inc(v_env_410_);
lean_dec(v___x_408_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_436_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
uint64_t v_tid_421_; lean_object* v_traces_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_435_; 
v_tid_421_ = lean_ctor_get_uint64(v_traceState_409_, sizeof(void*)*1);
v_traces_422_ = lean_ctor_get(v_traceState_409_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v_traceState_409_);
if (v_isSharedCheck_435_ == 0)
{
v___x_424_ = v_traceState_409_;
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_traces_422_);
lean_dec(v_traceState_409_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_435_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_426_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_372_, v_traces_422_);
lean_dec_ref(v_traces_422_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_426_);
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_426_);
lean_ctor_set_uint64(v_reuseFailAlloc_434_, sizeof(void*)*1, v_tid_421_);
v___x_428_ = v_reuseFailAlloc_434_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_430_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 4, v___x_428_);
v___x_430_ = v___x_419_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_env_410_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_nextMacroScope_411_);
lean_ctor_set(v_reuseFailAlloc_433_, 2, v_ngen_412_);
lean_ctor_set(v_reuseFailAlloc_433_, 3, v_auxDeclNGen_413_);
lean_ctor_set(v_reuseFailAlloc_433_, 4, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_433_, 5, v_cache_414_);
lean_ctor_set(v_reuseFailAlloc_433_, 6, v_messages_415_);
lean_ctor_set(v_reuseFailAlloc_433_, 7, v_infoState_416_);
lean_ctor_set(v_reuseFailAlloc_433_, 8, v_snapshotTasks_417_);
v___x_430_ = v_reuseFailAlloc_433_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_st_ref_put(v___y_376_, v___x_430_);
v___x_432_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(v_fst_378_);
return v___x_432_;
}
}
}
}
}
else
{
goto v___jp_401_;
}
}
else
{
goto v___jp_401_;
}
}
v___jp_437_:
{
double v___x_439_; double v___x_440_; double v___x_441_; uint8_t v___x_442_; 
v___x_439_ = lean_unbox_float(v_snd_387_);
v___x_440_ = lean_unbox_float(v_fst_386_);
v___x_441_ = lean_float_sub(v___x_439_, v___x_440_);
v___x_442_ = lean_float_decLt(v___y_438_, v___x_441_);
v___y_407_ = v___x_442_;
goto v___jp_406_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6___boxed(lean_object* v_cls_453_, lean_object* v_collapsed_454_, lean_object* v_tag_455_, lean_object* v_opts_456_, lean_object* v_clsEnabled_457_, lean_object* v_oldTraces_458_, lean_object* v_msg_459_, lean_object* v_resStartStop_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
uint8_t v_collapsed_boxed_464_; uint8_t v_clsEnabled_boxed_465_; lean_object* v_res_466_; 
v_collapsed_boxed_464_ = lean_unbox(v_collapsed_454_);
v_clsEnabled_boxed_465_ = lean_unbox(v_clsEnabled_457_);
v_res_466_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6(v_cls_453_, v_collapsed_boxed_464_, v_tag_455_, v_opts_456_, v_clsEnabled_boxed_465_, v_oldTraces_458_, v_msg_459_, v_resStartStop_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec_ref(v_opts_456_);
return v_res_466_;
}
}
static double _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0(void){
_start:
{
lean_object* v___x_467_; double v___x_468_; 
v___x_467_ = lean_unsigned_to_nat(1000000000u);
v___x_468_ = lean_float_of_nat(v___x_467_);
return v___x_468_;
}
}
static lean_object* _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8));
v___x_482_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3));
v___x_483_ = l_Lean_Name_append(v___x_482_, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11(void){
_start:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10));
v___x_488_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3));
v___x_489_ = l_Lean_Name_append(v___x_488_, v___x_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go(lean_object* v_range_x3f_511_, lean_object* v_s_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
lean_object* v___y_517_; uint8_t v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; uint8_t v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v_a_527_; lean_object* v___y_537_; uint8_t v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; uint8_t v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v_a_547_; lean_object* v___y_550_; uint8_t v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; uint8_t v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v_a_560_; lean_object* v___y_563_; uint8_t v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; uint8_t v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___y_577_; uint8_t v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; uint8_t v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v_a_587_; lean_object* v___y_600_; uint8_t v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; uint8_t v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v_a_610_; lean_object* v___y_613_; uint8_t v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; uint8_t v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v_a_623_; lean_object* v___y_626_; uint8_t v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; uint8_t v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_640_; lean_object* v___y_641_; uint8_t v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; uint8_t v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v_element_717_; lean_object* v_children_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_888_; 
v_element_717_ = lean_ctor_get(v_s_512_, 0);
v_children_718_ = lean_ctor_get(v_s_512_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_s_512_);
if (v_isSharedCheck_888_ == 0)
{
v___x_720_ = v_s_512_;
v_isShared_721_ = v_isSharedCheck_888_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_children_718_);
lean_inc(v_element_717_);
lean_dec(v_s_512_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_888_;
goto v_resetjp_719_;
}
v___jp_516_:
{
lean_object* v___x_528_; double v___x_529_; double v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_528_ = lean_io_get_num_heartbeats();
v___x_529_ = lean_float_of_nat(v___y_523_);
v___x_530_ = lean_float_of_nat(v___x_528_);
v___x_531_ = lean_box_float(v___x_529_);
v___x_532_ = lean_box_float(v___x_530_);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v_a_527_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
lean_inc_ref(v___y_525_);
lean_inc(v___y_522_);
v___x_535_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6(v___y_522_, v___y_518_, v___y_525_, v___y_526_, v___y_521_, v___y_517_, v___y_524_, v___x_534_, v___y_520_, v___y_519_);
return v___x_535_;
}
v___jp_536_:
{
lean_object* v___x_548_; 
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v_a_547_);
v___y_517_ = v___y_537_;
v___y_518_ = v___y_538_;
v___y_519_ = v___y_540_;
v___y_520_ = v___y_539_;
v___y_521_ = v___y_542_;
v___y_522_ = v___y_541_;
v___y_523_ = v___y_543_;
v___y_524_ = v___y_544_;
v___y_525_ = v___y_545_;
v___y_526_ = v___y_546_;
v_a_527_ = v___x_548_;
goto v___jp_516_;
}
v___jp_549_:
{
lean_object* v___x_561_; 
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v_a_560_);
v___y_517_ = v___y_550_;
v___y_518_ = v___y_551_;
v___y_519_ = v___y_553_;
v___y_520_ = v___y_552_;
v___y_521_ = v___y_555_;
v___y_522_ = v___y_554_;
v___y_523_ = v___y_556_;
v___y_524_ = v___y_557_;
v___y_525_ = v___y_558_;
v___y_526_ = v___y_559_;
v_a_527_ = v___x_561_;
goto v___jp_516_;
}
v___jp_562_:
{
if (lean_obj_tag(v___y_573_) == 0)
{
lean_object* v_a_574_; 
v_a_574_ = lean_ctor_get(v___y_573_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___y_573_, 1);
v___y_537_ = v___y_563_;
v___y_538_ = v___y_564_;
v___y_539_ = v___y_566_;
v___y_540_ = v___y_565_;
v___y_541_ = v___y_568_;
v___y_542_ = v___y_567_;
v___y_543_ = v___y_569_;
v___y_544_ = v___y_570_;
v___y_545_ = v___y_571_;
v___y_546_ = v___y_572_;
v_a_547_ = v_a_574_;
goto v___jp_536_;
}
else
{
lean_object* v_a_575_; 
v_a_575_ = lean_ctor_get(v___y_573_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___y_573_, 1);
v___y_550_ = v___y_563_;
v___y_551_ = v___y_564_;
v___y_552_ = v___y_566_;
v___y_553_ = v___y_565_;
v___y_554_ = v___y_568_;
v___y_555_ = v___y_567_;
v___y_556_ = v___y_569_;
v___y_557_ = v___y_570_;
v___y_558_ = v___y_571_;
v___y_559_ = v___y_572_;
v_a_560_ = v_a_575_;
goto v___jp_549_;
}
}
v___jp_576_:
{
lean_object* v___x_588_; double v___x_589_; double v___x_590_; double v___x_591_; double v___x_592_; double v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_588_ = lean_io_mono_nanos_now();
v___x_589_ = lean_float_of_nat(v___y_586_);
v___x_590_ = lean_float_once(&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0, &l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0_once, _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__0);
v___x_591_ = lean_float_div(v___x_589_, v___x_590_);
v___x_592_ = lean_float_of_nat(v___x_588_);
v___x_593_ = lean_float_div(v___x_592_, v___x_590_);
v___x_594_ = lean_box_float(v___x_591_);
v___x_595_ = lean_box_float(v___x_593_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_a_587_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
lean_inc_ref(v___y_584_);
lean_inc(v___y_582_);
v___x_598_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6(v___y_582_, v___y_578_, v___y_584_, v___y_585_, v___y_581_, v___y_577_, v___y_583_, v___x_597_, v___y_580_, v___y_579_);
return v___x_598_;
}
v___jp_599_:
{
lean_object* v___x_611_; 
v___x_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_611_, 0, v_a_610_);
v___y_577_ = v___y_600_;
v___y_578_ = v___y_601_;
v___y_579_ = v___y_603_;
v___y_580_ = v___y_602_;
v___y_581_ = v___y_605_;
v___y_582_ = v___y_604_;
v___y_583_ = v___y_606_;
v___y_584_ = v___y_607_;
v___y_585_ = v___y_609_;
v___y_586_ = v___y_608_;
v_a_587_ = v___x_611_;
goto v___jp_576_;
}
v___jp_612_:
{
lean_object* v___x_624_; 
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v_a_623_);
v___y_577_ = v___y_613_;
v___y_578_ = v___y_614_;
v___y_579_ = v___y_616_;
v___y_580_ = v___y_615_;
v___y_581_ = v___y_618_;
v___y_582_ = v___y_617_;
v___y_583_ = v___y_619_;
v___y_584_ = v___y_620_;
v___y_585_ = v___y_622_;
v___y_586_ = v___y_621_;
v_a_587_ = v___x_624_;
goto v___jp_576_;
}
v___jp_625_:
{
if (lean_obj_tag(v___y_636_) == 0)
{
lean_object* v_a_637_; 
v_a_637_ = lean_ctor_get(v___y_636_, 0);
lean_inc(v_a_637_);
lean_dec_ref_known(v___y_636_, 1);
v___y_600_ = v___y_626_;
v___y_601_ = v___y_627_;
v___y_602_ = v___y_629_;
v___y_603_ = v___y_628_;
v___y_604_ = v___y_631_;
v___y_605_ = v___y_630_;
v___y_606_ = v___y_632_;
v___y_607_ = v___y_633_;
v___y_608_ = v___y_635_;
v___y_609_ = v___y_634_;
v_a_610_ = v_a_637_;
goto v___jp_599_;
}
else
{
lean_object* v_a_638_; 
v_a_638_ = lean_ctor_get(v___y_636_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___y_636_, 1);
v___y_613_ = v___y_626_;
v___y_614_ = v___y_627_;
v___y_615_ = v___y_629_;
v___y_616_ = v___y_628_;
v___y_617_ = v___y_631_;
v___y_618_ = v___y_630_;
v___y_619_ = v___y_632_;
v___y_620_ = v___y_633_;
v___y_621_ = v___y_635_;
v___y_622_ = v___y_634_;
v_a_623_ = v_a_638_;
goto v___jp_612_;
}
}
v___jp_639_:
{
lean_object* v___x_653_; 
v___x_653_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__4___redArg(v___y_649_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v___x_655_ = l_Lean_trace_profiler_useHeartbeats;
v___x_656_ = l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(v___y_651_, v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_io_mono_nanos_now();
v___x_658_ = l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(v___y_652_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_dec_ref_known(v___x_658_, 1);
if (lean_obj_tag(v___y_641_) == 1)
{
lean_object* v_val_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v_val_659_ = lean_ctor_get(v___y_641_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v___y_641_, 1);
v___x_660_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1));
lean_inc_ref(v___y_646_);
v___x_661_ = l_Lean_Name_mkStr2(v___y_646_, v___x_660_);
v___x_662_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3));
lean_inc(v___x_661_);
v___x_663_ = l_Lean_Name_append(v___x_662_, v___x_661_);
v___x_664_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_640_, v___y_651_, v___x_663_);
lean_dec(v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; 
lean_dec(v___x_661_);
lean_dec(v_val_659_);
v___x_665_ = lean_box(0);
v___y_600_ = v_a_654_;
v___y_601_ = v___y_642_;
v___y_602_ = v___y_648_;
v___y_603_ = v___y_649_;
v___y_604_ = v___y_643_;
v___y_605_ = v___y_650_;
v___y_606_ = v___y_644_;
v___y_607_ = v___y_645_;
v___y_608_ = v___x_657_;
v___y_609_ = v___y_651_;
v_a_610_ = v___x_665_;
goto v___jp_599_;
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_box(0);
v___x_667_ = l_Lean_Elab_InfoTree_format(v_val_659_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v___x_669_ = l_Lean_MessageData_ofFormat(v_a_668_);
v___x_670_ = l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(v___x_661_, v___x_669_, v___y_648_, v___y_649_);
v___y_626_ = v_a_654_;
v___y_627_ = v___y_642_;
v___y_628_ = v___y_649_;
v___y_629_ = v___y_648_;
v___y_630_ = v___y_650_;
v___y_631_ = v___y_643_;
v___y_632_ = v___y_644_;
v___y_633_ = v___y_645_;
v___y_634_ = v___y_651_;
v___y_635_ = v___x_657_;
v___y_636_ = v___x_670_;
goto v___jp_625_;
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_681_; 
lean_dec(v___x_661_);
v_a_671_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_681_ == 0)
{
v___x_673_ = v___x_667_;
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_667_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_io_error_to_string(v_a_671_);
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 3);
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_680_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = l_Lean_MessageData_ofFormat(v___x_677_);
lean_inc(v___y_647_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___y_647_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___y_613_ = v_a_654_;
v___y_614_ = v___y_642_;
v___y_615_ = v___y_648_;
v___y_616_ = v___y_649_;
v___y_617_ = v___y_643_;
v___y_618_ = v___y_650_;
v___y_619_ = v___y_644_;
v___y_620_ = v___y_645_;
v___y_621_ = v___x_657_;
v___y_622_ = v___y_651_;
v_a_623_ = v___x_679_;
goto v___jp_612_;
}
}
}
}
}
else
{
lean_object* v___x_682_; 
lean_dec(v___y_641_);
v___x_682_ = lean_box(0);
v___y_600_ = v_a_654_;
v___y_601_ = v___y_642_;
v___y_602_ = v___y_648_;
v___y_603_ = v___y_649_;
v___y_604_ = v___y_643_;
v___y_605_ = v___y_650_;
v___y_606_ = v___y_644_;
v___y_607_ = v___y_645_;
v___y_608_ = v___x_657_;
v___y_609_ = v___y_651_;
v_a_610_ = v___x_682_;
goto v___jp_599_;
}
}
else
{
lean_dec(v___y_641_);
v___y_626_ = v_a_654_;
v___y_627_ = v___y_642_;
v___y_628_ = v___y_649_;
v___y_629_ = v___y_648_;
v___y_630_ = v___y_650_;
v___y_631_ = v___y_643_;
v___y_632_ = v___y_644_;
v___y_633_ = v___y_645_;
v___y_634_ = v___y_651_;
v___y_635_ = v___x_657_;
v___y_636_ = v___x_658_;
goto v___jp_625_;
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_io_get_num_heartbeats();
v___x_684_ = l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(v___y_652_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_dec_ref_known(v___x_684_, 1);
if (lean_obj_tag(v___y_641_) == 1)
{
lean_object* v_val_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_val_685_ = lean_ctor_get(v___y_641_, 0);
lean_inc(v_val_685_);
lean_dec_ref_known(v___y_641_, 1);
v___x_686_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__1));
lean_inc_ref(v___y_646_);
v___x_687_ = l_Lean_Name_mkStr2(v___y_646_, v___x_686_);
v___x_688_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__3));
lean_inc(v___x_687_);
v___x_689_ = l_Lean_Name_append(v___x_688_, v___x_687_);
v___x_690_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___y_640_, v___y_651_, v___x_689_);
lean_dec(v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; 
lean_dec(v___x_687_);
lean_dec(v_val_685_);
v___x_691_ = lean_box(0);
v___y_537_ = v_a_654_;
v___y_538_ = v___y_642_;
v___y_539_ = v___y_648_;
v___y_540_ = v___y_649_;
v___y_541_ = v___y_643_;
v___y_542_ = v___y_650_;
v___y_543_ = v___x_683_;
v___y_544_ = v___y_644_;
v___y_545_ = v___y_645_;
v___y_546_ = v___y_651_;
v_a_547_ = v___x_691_;
goto v___jp_536_;
}
else
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_box(0);
v___x_693_ = l_Lean_Elab_InfoTree_format(v_val_685_, v___x_692_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_693_, 1);
v___x_695_ = l_Lean_MessageData_ofFormat(v_a_694_);
v___x_696_ = l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(v___x_687_, v___x_695_, v___y_648_, v___y_649_);
v___y_563_ = v_a_654_;
v___y_564_ = v___y_642_;
v___y_565_ = v___y_649_;
v___y_566_ = v___y_648_;
v___y_567_ = v___y_650_;
v___y_568_ = v___y_643_;
v___y_569_ = v___x_683_;
v___y_570_ = v___y_644_;
v___y_571_ = v___y_645_;
v___y_572_ = v___y_651_;
v___y_573_ = v___x_696_;
goto v___jp_562_;
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_707_; 
lean_dec(v___x_687_);
v_a_697_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_707_ == 0)
{
v___x_699_ = v___x_693_;
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_693_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = lean_io_error_to_string(v_a_697_);
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 3);
lean_ctor_set(v___x_699_, 0, v___x_701_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_701_);
v___x_703_ = v_reuseFailAlloc_706_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = l_Lean_MessageData_ofFormat(v___x_703_);
lean_inc(v___y_647_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v___y_647_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___y_550_ = v_a_654_;
v___y_551_ = v___y_642_;
v___y_552_ = v___y_648_;
v___y_553_ = v___y_649_;
v___y_554_ = v___y_643_;
v___y_555_ = v___y_650_;
v___y_556_ = v___x_683_;
v___y_557_ = v___y_644_;
v___y_558_ = v___y_645_;
v___y_559_ = v___y_651_;
v_a_560_ = v___x_705_;
goto v___jp_549_;
}
}
}
}
}
else
{
lean_object* v___x_708_; 
lean_dec(v___y_641_);
v___x_708_ = lean_box(0);
v___y_537_ = v_a_654_;
v___y_538_ = v___y_642_;
v___y_539_ = v___y_648_;
v___y_540_ = v___y_649_;
v___y_541_ = v___y_643_;
v___y_542_ = v___y_650_;
v___y_543_ = v___x_683_;
v___y_544_ = v___y_644_;
v___y_545_ = v___y_645_;
v___y_546_ = v___y_651_;
v_a_547_ = v___x_708_;
goto v___jp_536_;
}
}
else
{
lean_dec(v___y_641_);
v___y_563_ = v_a_654_;
v___y_564_ = v___y_642_;
v___y_565_ = v___y_649_;
v___y_566_ = v___y_648_;
v___y_567_ = v___y_650_;
v___y_568_ = v___y_643_;
v___y_569_ = v___x_683_;
v___y_570_ = v___y_644_;
v___y_571_ = v___y_645_;
v___y_572_ = v___y_651_;
v___y_573_ = v___x_684_;
goto v___jp_562_;
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec(v___y_652_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_641_);
v_a_709_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_653_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_653_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
v_resetjp_719_:
{
lean_object* v_desc_722_; lean_object* v_diagnostics_723_; lean_object* v_infoTree_x3f_724_; lean_object* v_desc_726_; lean_object* v___y_727_; lean_object* v___y_728_; lean_object* v___x_823_; 
v_desc_722_ = lean_ctor_get(v_element_717_, 0);
lean_inc_ref(v_desc_722_);
v_diagnostics_723_ = lean_ctor_get(v_element_717_, 1);
lean_inc_ref(v_diagnostics_723_);
v_infoTree_x3f_724_ = lean_ctor_get(v_element_717_, 2);
lean_inc(v_infoTree_x3f_724_);
lean_dec_ref(v_element_717_);
v___x_823_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_823_, 0, v_desc_722_);
switch(lean_obj_tag(v_range_x3f_511_))
{
case 0:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__13));
v___x_825_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v_desc_726_ = v___x_825_;
v___y_727_ = v_a_513_;
v___y_728_ = v_a_514_;
goto v___jp_725_;
}
case 1:
{
lean_object* v_toCold_826_; lean_object* v_range_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_885_; 
v_toCold_826_ = lean_ctor_get(v_a_513_, 0);
v_range_827_ = lean_ctor_get(v_range_x3f_511_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v_range_x3f_511_);
if (v_isSharedCheck_885_ == 0)
{
v___x_829_ = v_range_x3f_511_;
v_isShared_830_ = v_isSharedCheck_885_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_range_827_);
lean_dec(v_range_x3f_511_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_885_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_fileMap_831_; lean_object* v_start_832_; lean_object* v_stop_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_884_; 
v_fileMap_831_ = lean_ctor_get(v_toCold_826_, 1);
v_start_832_ = lean_ctor_get(v_range_827_, 0);
v_stop_833_ = lean_ctor_get(v_range_827_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_range_827_);
if (v_isSharedCheck_884_ == 0)
{
v___x_835_ = v_range_827_;
v_isShared_836_ = v_isSharedCheck_884_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_stop_833_);
lean_inc(v_start_832_);
lean_dec(v_range_827_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_884_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v_line_838_; lean_object* v_column_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_883_; 
lean_inc_ref(v_fileMap_831_);
v___x_837_ = l_Lean_FileMap_toPosition(v_fileMap_831_, v_start_832_);
lean_dec(v_start_832_);
v_line_838_ = lean_ctor_get(v___x_837_, 0);
v_column_839_ = lean_ctor_get(v___x_837_, 1);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_883_ == 0)
{
v___x_841_ = v___x_837_;
v_isShared_842_ = v_isSharedCheck_883_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_column_839_);
lean_inc(v_line_838_);
lean_dec(v___x_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_883_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_843_; lean_object* v_line_844_; lean_object* v_column_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_882_; 
lean_inc_ref(v_fileMap_831_);
v___x_843_ = l_Lean_FileMap_toPosition(v_fileMap_831_, v_stop_833_);
lean_dec(v_stop_833_);
v_line_844_ = lean_ctor_get(v___x_843_, 0);
v_column_845_ = lean_ctor_get(v___x_843_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_882_ == 0)
{
v___x_847_ = v___x_843_;
v_isShared_848_ = v_isSharedCheck_882_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_column_845_);
lean_inc(v_line_844_);
lean_dec(v___x_843_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_882_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_849_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__15));
v___x_850_ = l_Nat_reprFast(v_line_838_);
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 3);
lean_ctor_set(v___x_829_, 0, v___x_850_);
v___x_852_ = v___x_829_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_850_);
v___x_852_ = v_reuseFailAlloc_881_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_854_; 
if (v_isShared_848_ == 0)
{
lean_ctor_set_tag(v___x_847_, 5);
lean_ctor_set(v___x_847_, 1, v___x_852_);
lean_ctor_set(v___x_847_, 0, v___x_849_);
v___x_854_ = v___x_847_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_852_);
v___x_854_ = v_reuseFailAlloc_880_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_855_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__17));
if (v_isShared_842_ == 0)
{
lean_ctor_set_tag(v___x_841_, 5);
lean_ctor_set(v___x_841_, 1, v___x_855_);
lean_ctor_set(v___x_841_, 0, v___x_854_);
v___x_857_ = v___x_841_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_879_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_858_ = l_Nat_reprFast(v_column_839_);
v___x_859_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
if (v_isShared_836_ == 0)
{
lean_ctor_set_tag(v___x_835_, 5);
lean_ctor_set(v___x_835_, 1, v___x_859_);
lean_ctor_set(v___x_835_, 0, v___x_857_);
v___x_861_ = v___x_835_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v___x_859_);
v___x_861_ = v_reuseFailAlloc_878_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_862_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__19));
v___x_863_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_861_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
v___x_864_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__21));
v___x_865_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = l_Nat_reprFast(v_line_844_);
v___x_867_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
v___x_868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_849_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
lean_ctor_set(v___x_869_, 1, v___x_855_);
v___x_870_ = l_Nat_reprFast(v_column_845_);
v___x_871_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
v___x_872_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_869_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v___x_862_);
v___x_874_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_865_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__23));
v___x_876_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_823_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v_desc_726_ = v___x_877_;
v___y_727_ = v_a_513_;
v___y_728_ = v_a_514_;
goto v___jp_725_;
}
}
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__25));
v___x_887_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_823_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v_desc_726_ = v___x_887_;
v___y_727_ = v_a_513_;
v___y_728_ = v_a_514_;
goto v___jp_725_;
}
}
v___jp_725_:
{
lean_object* v_msgLog_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_821_; 
v_msgLog_729_ = lean_ctor_get(v_diagnostics_723_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v_diagnostics_723_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_diagnostics_723_, 1);
lean_dec(v_unused_822_);
v___x_731_ = v_diagnostics_723_;
v_isShared_732_ = v_isSharedCheck_821_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_msgLog_729_);
lean_dec(v_diagnostics_723_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_821_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_733_ = l_Lean_MessageLog_toList(v_msgLog_729_);
lean_dec_ref(v_msgLog_729_);
v___x_734_ = lean_box(0);
v___x_735_ = l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg(v___x_733_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_toCold_736_; lean_object* v_options_737_; lean_object* v_a_738_; lean_object* v_ref_739_; lean_object* v_inheritedTraceOptions_740_; uint8_t v_hasTrace_741_; lean_object* v___x_742_; 
v_toCold_736_ = lean_ctor_get(v___y_727_, 0);
v_options_737_ = lean_ctor_get(v_toCold_736_, 2);
v_a_738_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_735_, 1);
v_ref_739_ = lean_ctor_get(v___y_727_, 2);
v_inheritedTraceOptions_740_ = lean_ctor_get(v_toCold_736_, 11);
v_hasTrace_741_ = lean_ctor_get_uint8(v_options_737_, sizeof(void*)*1);
v___x_742_ = lean_array_to_list(v_children_718_);
if (v_hasTrace_741_ == 0)
{
lean_object* v___x_743_; 
lean_dec(v_a_738_);
lean_del_object(v___x_731_);
lean_dec(v_desc_726_);
lean_del_object(v___x_720_);
v___x_743_ = l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(v___x_742_, v___y_727_, v___y_728_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_755_; 
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_755_ == 0)
{
lean_object* v_unused_756_; 
v_unused_756_ = lean_ctor_get(v___x_743_, 0);
lean_dec(v_unused_756_);
v___x_745_ = v___x_743_;
v_isShared_746_ = v_isSharedCheck_755_;
goto v_resetjp_744_;
}
else
{
lean_dec(v___x_743_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_755_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
if (lean_obj_tag(v_infoTree_x3f_724_) == 1)
{
lean_object* v___x_747_; lean_object* v___x_749_; 
lean_dec_ref_known(v_infoTree_x3f_724_, 1);
v___x_747_ = lean_box(0);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 0, v___x_747_);
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_753_; 
lean_dec(v_infoTree_x3f_724_);
v___x_751_ = lean_box(0);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 0, v___x_751_);
v___x_753_ = v___x_745_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_dec(v_infoTree_x3f_724_);
return v___x_743_;
}
}
else
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_757_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__4));
v___x_758_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__6));
v___x_759_ = l_Std_Format_prefixJoin___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__3(v___x_758_, v_a_738_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 5);
lean_ctor_set(v___x_731_, 1, v___x_759_);
lean_ctor_set(v___x_731_, 0, v_desc_726_);
v___x_761_ = v___x_731_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_desc_726_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_812_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___f_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v___f_762_ = lean_alloc_closure((void*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___lam__0___boxed), 5, 1);
lean_closure_set(v___f_762_, 0, v___x_761_);
v___x_763_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__8));
v___x_764_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2___closed__1));
v___x_765_ = lean_obj_once(&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9, &l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9_once, _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__9);
v___x_766_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_740_, v_options_737_, v___x_765_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_767_ = l_Lean_trace_profiler;
v___x_768_ = l_Lean_Option_get___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__5(v_options_737_, v___x_767_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; 
lean_dec_ref(v___f_762_);
v___x_769_ = l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(v___x_742_, v___y_727_, v___y_728_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_810_; 
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; 
v_unused_811_ = lean_ctor_get(v___x_769_, 0);
lean_dec(v_unused_811_);
v___x_771_ = v___x_769_;
v_isShared_772_ = v_isSharedCheck_810_;
goto v_resetjp_770_;
}
else
{
lean_dec(v___x_769_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_810_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
if (lean_obj_tag(v_infoTree_x3f_724_) == 1)
{
lean_object* v_val_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_805_; 
v_val_773_ = lean_ctor_get(v_infoTree_x3f_724_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v_infoTree_x3f_724_);
if (v_isSharedCheck_805_ == 0)
{
v___x_775_ = v_infoTree_x3f_724_;
v_isShared_776_ = v_isSharedCheck_805_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_val_773_);
lean_dec(v_infoTree_x3f_724_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_805_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
v___x_777_ = ((lean_object*)(l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__10));
v___x_778_ = lean_obj_once(&l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11, &l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11_once, _init_l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___closed__11);
v___x_779_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_740_, v_options_737_, v___x_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_782_; 
lean_del_object(v___x_775_);
lean_dec(v_val_773_);
lean_del_object(v___x_720_);
v___x_780_ = lean_box(0);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_780_);
v___x_782_ = v___x_771_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
else
{
lean_object* v___x_784_; lean_object* v___x_785_; 
lean_del_object(v___x_771_);
v___x_784_ = lean_box(0);
v___x_785_ = l_Lean_Elab_InfoTree_format(v_val_773_, v___x_784_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
lean_del_object(v___x_775_);
lean_del_object(v___x_720_);
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_785_, 1);
v___x_787_ = l_Lean_MessageData_ofFormat(v_a_786_);
v___x_788_ = l_Lean_addTrace___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__2(v___x_777_, v___x_787_, v___y_727_, v___y_728_);
return v___x_788_;
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_804_; 
v_a_789_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_804_ == 0)
{
v___x_791_ = v___x_785_;
v_isShared_792_ = v_isSharedCheck_804_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_785_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_804_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_793_ = lean_io_error_to_string(v_a_789_);
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 3);
lean_ctor_set(v___x_775_, 0, v___x_793_);
v___x_795_ = v___x_775_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_793_);
v___x_795_ = v_reuseFailAlloc_803_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = l_Lean_MessageData_ofFormat(v___x_795_);
lean_inc(v_ref_739_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_796_);
lean_ctor_set(v___x_720_, 0, v_ref_739_);
v___x_798_ = v___x_720_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_ref_739_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v___x_796_);
v___x_798_ = v_reuseFailAlloc_802_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_792_ == 0)
{
lean_ctor_set(v___x_791_, 0, v___x_798_);
v___x_800_ = v___x_791_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
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
lean_object* v___x_806_; lean_object* v___x_808_; 
lean_dec(v_infoTree_x3f_724_);
lean_del_object(v___x_720_);
v___x_806_ = lean_box(0);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_806_);
v___x_808_ = v___x_771_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_dec(v_infoTree_x3f_724_);
lean_del_object(v___x_720_);
return v___x_769_;
}
}
else
{
lean_del_object(v___x_720_);
v___y_640_ = v_inheritedTraceOptions_740_;
v___y_641_ = v_infoTree_x3f_724_;
v___y_642_ = v_hasTrace_741_;
v___y_643_ = v___x_763_;
v___y_644_ = v___f_762_;
v___y_645_ = v___x_764_;
v___y_646_ = v___x_757_;
v___y_647_ = v_ref_739_;
v___y_648_ = v___y_727_;
v___y_649_ = v___y_728_;
v___y_650_ = v___x_766_;
v___y_651_ = v_options_737_;
v___y_652_ = v___x_742_;
goto v___jp_639_;
}
}
else
{
lean_del_object(v___x_720_);
v___y_640_ = v_inheritedTraceOptions_740_;
v___y_641_ = v_infoTree_x3f_724_;
v___y_642_ = v_hasTrace_741_;
v___y_643_ = v___x_763_;
v___y_644_ = v___f_762_;
v___y_645_ = v___x_764_;
v___y_646_ = v___x_757_;
v___y_647_ = v_ref_739_;
v___y_648_ = v___y_727_;
v___y_649_ = v___y_728_;
v___y_650_ = v___x_766_;
v___y_651_ = v_options_737_;
v___y_652_ = v___x_742_;
goto v___jp_639_;
}
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_del_object(v___x_731_);
lean_dec(v_desc_726_);
lean_dec(v_infoTree_x3f_724_);
lean_del_object(v___x_720_);
lean_dec_ref(v_children_718_);
v_a_813_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_735_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_735_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(lean_object* v_as_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
if (lean_obj_tag(v_as_889_) == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_box(0);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
return v___x_894_;
}
else
{
lean_object* v_head_895_; lean_object* v_tail_896_; lean_object* v_reportingRange_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_head_895_ = lean_ctor_get(v_as_889_, 0);
lean_inc(v_head_895_);
v_tail_896_ = lean_ctor_get(v_as_889_, 1);
lean_inc(v_tail_896_);
lean_dec_ref_known(v_as_889_, 2);
v_reportingRange_897_ = lean_ctor_get(v_head_895_, 1);
lean_inc(v_reportingRange_897_);
v___x_898_ = l_Lean_Language_SnapshotTask_get___redArg(v_head_895_);
v___x_899_ = l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go(v_reportingRange_897_, v___x_898_, v___y_890_, v___y_891_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_dec_ref_known(v___x_899_, 1);
v_as_889_ = v_tail_896_;
goto _start;
}
else
{
lean_dec(v_tail_896_);
return v___x_899_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1___boxed(lean_object* v_as_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_List_forM___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__1(v_as_901_, v___y_902_, v___y_903_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go___boxed(lean_object* v_range_x3f_906_, lean_object* v_s_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go(v_range_x3f_906_, v_s_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0(lean_object* v_x_912_, lean_object* v_x_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___redArg(v_x_912_, v_x_913_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0___boxed(lean_object* v_x_918_, lean_object* v_x_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_List_mapM_loop___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__0(v_x_918_, v_x_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9(lean_object* v_00_u03b1_924_, lean_object* v_x_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___redArg(v_x_925_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9___boxed(lean_object* v_00_u03b1_930_, lean_object* v_x_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go_spec__6_spec__9(v_00_u03b1_930_, v_x_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_trace(lean_object* v_s_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_box(2);
v___x_941_ = l___private_Lean_Language_Util_0__Lean_Language_SnapshotTree_trace_go(v___x_940_, v_s_936_, v_a_937_, v_a_938_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_trace___boxed(lean_object* v_s_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_Language_SnapshotTree_trace(v_s_942_, v_a_943_, v_a_944_);
lean_dec(v_a_944_);
lean_dec_ref(v_a_943_);
return v_res_946_;
}
}
lean_object* runtime_initialize_Lean_Elab_InfoTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_InfoTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_InfoTree(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_InfoTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Util(builtin);
}
#ifdef __cplusplus
}
#endif

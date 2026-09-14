// Lean compiler output
// Module: Lean.Compiler.Main
// Imports: public import Lean.Compiler.LCNF import Lean.Compiler.Options
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
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
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Compiler_LCNF_main(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_compile_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_compile___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "compiling: "};
static const lean_object* l_Lean_Compiler_compile___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_compile___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_compile___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_compile___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_compile___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Compiler_compile___lam__1___closed__0;
static lean_once_cell_t l_Lean_Compiler_compile___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_compile___lam__1___closed__1;
static lean_once_cell_t l_Lean_Compiler_compile___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_compile___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_compile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "compiler new"};
static const lean_object* l_Lean_Compiler_compile___closed__0 = (const lean_object*)&l_Lean_Compiler_compile___closed__0_value;
static const lean_string_object l_Lean_Compiler_compile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_compile___closed__1 = (const lean_object*)&l_Lean_Compiler_compile___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_compile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_compile___closed__1_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_object* l_Lean_Compiler_compile___closed__2 = (const lean_object*)&l_Lean_Compiler_compile___closed__2_value;
static const lean_string_object l_Lean_Compiler_compile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Compiler_compile___closed__3 = (const lean_object*)&l_Lean_Compiler_compile___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_compile___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_compile___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_compile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__0_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__0_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__0_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__5_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__5_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__5_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__10_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__10_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__10_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__12_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__12_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__12_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__18_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__18_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__18_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__20_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__20_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__20_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__23_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stat"};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__23_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__23_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_compile___closed__1_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__23_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 239, 216, 162, 43, 249, 69, 56)}};
static const lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
else
{
lean_object* v_val_21_; 
v_val_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_21_);
lean_dec_ref_known(v___x_20_, 1);
if (lean_obj_tag(v_val_21_) == 3)
{
lean_object* v_v_22_; 
v_v_22_ = lean_ctor_get(v_val_21_, 0);
lean_inc(v_v_22_);
lean_dec_ref_known(v_val_21_, 1);
return v_v_22_;
}
else
{
lean_dec(v_val_21_);
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3___boxed(lean_object* v_opts_23_, lean_object* v_opt_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(v_opts_23_, v_opt_24_);
lean_dec_ref(v_opt_24_);
lean_dec_ref(v_opts_23_);
return v_res_25_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = lean_unsigned_to_nat(32u);
v___x_27_ = lean_mk_empty_array_with_capacity(v___x_26_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_29_ = ((size_t)5ULL);
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = lean_unsigned_to_nat(32u);
v___x_32_ = lean_mk_empty_array_with_capacity(v___x_31_);
v___x_33_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__0);
v___x_34_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
lean_ctor_set(v___x_34_, 2, v___x_30_);
lean_ctor_set(v___x_34_, 3, v___x_30_);
lean_ctor_set_usize(v___x_34_, 4, v___x_29_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg(lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; lean_object* v_traceState_38_; lean_object* v_traces_39_; lean_object* v___x_40_; lean_object* v_traceState_41_; lean_object* v_env_42_; lean_object* v_nextMacroScope_43_; lean_object* v_ngen_44_; lean_object* v_auxDeclNGen_45_; lean_object* v_cache_46_; lean_object* v_messages_47_; lean_object* v_infoState_48_; lean_object* v_snapshotTasks_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_68_; 
v___x_37_ = lean_st_ref_get(v___y_35_);
v_traceState_38_ = lean_ctor_get(v___x_37_, 4);
lean_inc_ref(v_traceState_38_);
lean_dec(v___x_37_);
v_traces_39_ = lean_ctor_get(v_traceState_38_, 0);
lean_inc_ref(v_traces_39_);
lean_dec_ref(v_traceState_38_);
v___x_40_ = lean_st_ref_take(v___y_35_);
v_traceState_41_ = lean_ctor_get(v___x_40_, 4);
v_env_42_ = lean_ctor_get(v___x_40_, 0);
v_nextMacroScope_43_ = lean_ctor_get(v___x_40_, 1);
v_ngen_44_ = lean_ctor_get(v___x_40_, 2);
v_auxDeclNGen_45_ = lean_ctor_get(v___x_40_, 3);
v_cache_46_ = lean_ctor_get(v___x_40_, 5);
v_messages_47_ = lean_ctor_get(v___x_40_, 6);
v_infoState_48_ = lean_ctor_get(v___x_40_, 7);
v_snapshotTasks_49_ = lean_ctor_get(v___x_40_, 8);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_68_ == 0)
{
v___x_51_ = v___x_40_;
v_isShared_52_ = v_isSharedCheck_68_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_snapshotTasks_49_);
lean_inc(v_infoState_48_);
lean_inc(v_messages_47_);
lean_inc(v_cache_46_);
lean_inc(v_traceState_41_);
lean_inc(v_auxDeclNGen_45_);
lean_inc(v_ngen_44_);
lean_inc(v_nextMacroScope_43_);
lean_inc(v_env_42_);
lean_dec(v___x_40_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_68_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
uint64_t v_tid_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_66_; 
v_tid_53_ = lean_ctor_get_uint64(v_traceState_41_, sizeof(void*)*1);
v_isSharedCheck_66_ = !lean_is_exclusive(v_traceState_41_);
if (v_isSharedCheck_66_ == 0)
{
lean_object* v_unused_67_; 
v_unused_67_ = lean_ctor_get(v_traceState_41_, 0);
lean_dec(v_unused_67_);
v___x_55_ = v_traceState_41_;
v_isShared_56_ = v_isSharedCheck_66_;
goto v_resetjp_54_;
}
else
{
lean_dec(v_traceState_41_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_66_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___closed__1);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_57_);
lean_ctor_set_uint64(v_reuseFailAlloc_65_, sizeof(void*)*1, v_tid_53_);
v___x_59_ = v_reuseFailAlloc_65_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_61_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 4, v___x_59_);
v___x_61_ = v___x_51_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_env_42_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_nextMacroScope_43_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_ngen_44_);
lean_ctor_set(v_reuseFailAlloc_64_, 3, v_auxDeclNGen_45_);
lean_ctor_set(v_reuseFailAlloc_64_, 4, v___x_59_);
lean_ctor_set(v_reuseFailAlloc_64_, 5, v_cache_46_);
lean_ctor_set(v_reuseFailAlloc_64_, 6, v_messages_47_);
lean_ctor_set(v_reuseFailAlloc_64_, 7, v_infoState_48_);
lean_ctor_set(v_reuseFailAlloc_64_, 8, v_snapshotTasks_49_);
v___x_61_ = v_reuseFailAlloc_64_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_st_ref_put(v___y_35_, v___x_61_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v_traces_39_);
return v___x_63_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg___boxed(lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg(v___y_69_);
lean_dec(v___y_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4(lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg(v___y_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___boxed(lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4(v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg(lean_object* v_category_80_, lean_object* v_opts_81_, lean_object* v_act_82_, lean_object* v_decl_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
lean_inc(v___y_85_);
lean_inc_ref(v___y_84_);
v___x_87_ = lean_apply_2(v_act_82_, v___y_84_, v___y_85_);
v___x_88_ = l_Lean_profileitIOUnsafe___redArg(v_category_80_, v_opts_81_, v___x_87_, v_decl_83_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg___boxed(lean_object* v_category_89_, lean_object* v_opts_90_, lean_object* v_act_91_, lean_object* v_decl_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg(v_category_89_, v_opts_90_, v_act_91_, v_decl_92_, v___y_93_, v___y_94_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec_ref(v_opts_90_);
lean_dec_ref(v_category_89_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6(lean_object* v_00_u03b1_97_, lean_object* v_category_98_, lean_object* v_opts_99_, lean_object* v_act_100_, lean_object* v_decl_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg(v_category_98_, v_opts_99_, v_act_100_, v_decl_101_, v___y_102_, v___y_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___boxed(lean_object* v_00_u03b1_106_, lean_object* v_category_107_, lean_object* v_opts_108_, lean_object* v_act_109_, lean_object* v_decl_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6(v_00_u03b1_106_, v_category_107_, v_opts_108_, v_act_109_, v_decl_110_, v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec_ref(v_opts_108_);
lean_dec_ref(v_category_107_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_compile_spec__0(lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
if (lean_obj_tag(v_a_115_) == 0)
{
lean_object* v___x_117_; 
v___x_117_ = l_List_reverse___redArg(v_a_116_);
return v___x_117_;
}
else
{
lean_object* v_head_118_; lean_object* v_tail_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_128_; 
v_head_118_ = lean_ctor_get(v_a_115_, 0);
v_tail_119_ = lean_ctor_get(v_a_115_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_a_115_);
if (v_isSharedCheck_128_ == 0)
{
v___x_121_ = v_a_115_;
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_tail_119_);
lean_inc(v_head_118_);
lean_dec(v_a_115_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = l_Lean_MessageData_ofName(v_head_118_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 1, v_a_116_);
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_a_116_);
v___x_125_ = v_reuseFailAlloc_127_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
v_a_115_ = v_tail_119_;
v_a_116_ = v___x_125_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_compile___lam__0___closed__1(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l_Lean_Compiler_compile___lam__0___closed__0));
v___x_131_ = l_Lean_stringToMessageData(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__0(lean_object* v_declNames_132_, lean_object* v_x_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_137_ = lean_obj_once(&l_Lean_Compiler_compile___lam__0___closed__1, &l_Lean_Compiler_compile___lam__0___closed__1_once, _init_l_Lean_Compiler_compile___lam__0___closed__1);
v___x_138_ = lean_array_to_list(v_declNames_132_);
v___x_139_ = lean_box(0);
v___x_140_ = l_List_mapTR_loop___at___00Lean_Compiler_compile_spec__0(v___x_138_, v___x_139_);
v___x_141_ = l_Lean_MessageData_ofList(v___x_140_);
v___x_142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_137_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__0___boxed(lean_object* v_declNames_144_, lean_object* v_x_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_Compiler_compile___lam__0(v_declNames_144_, v_x_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec_ref(v_x_145_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1(lean_object* v_o_153_, lean_object* v_k_154_, uint8_t v_v_155_){
_start:
{
lean_object* v_map_156_; uint8_t v_hasTrace_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_171_; 
v_map_156_ = lean_ctor_get(v_o_153_, 0);
v_hasTrace_157_ = lean_ctor_get_uint8(v_o_153_, sizeof(void*)*1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_o_153_);
if (v_isSharedCheck_171_ == 0)
{
v___x_159_ = v_o_153_;
v_isShared_160_ = v_isSharedCheck_171_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_map_156_);
lean_dec(v_o_153_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_171_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_161_, 0, v_v_155_);
lean_inc(v_k_154_);
v___x_162_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_154_, v___x_161_, v_map_156_);
if (v_hasTrace_157_ == 0)
{
lean_object* v___x_163_; uint8_t v___x_164_; lean_object* v___x_166_; 
v___x_163_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__1));
v___x_164_ = l_Lean_Name_isPrefixOf(v___x_163_, v_k_154_);
lean_dec(v_k_154_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_162_);
v___x_166_ = v___x_159_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_162_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*1, v___x_164_);
return v___x_166_;
}
}
else
{
lean_object* v___x_169_; 
lean_dec(v_k_154_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v___x_162_);
v___x_169_ = v___x_159_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_162_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*1, v_hasTrace_157_);
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
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___boxed(lean_object* v_o_172_, lean_object* v_k_173_, lean_object* v_v_174_){
_start:
{
uint8_t v_v_boxed_175_; lean_object* v_res_176_; 
v_v_boxed_175_ = lean_unbox(v_v_174_);
v_res_176_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1(v_o_172_, v_k_173_, v_v_boxed_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1(lean_object* v_opts_177_, lean_object* v_opt_178_, uint8_t v_val_179_){
_start:
{
lean_object* v_name_180_; lean_object* v___x_181_; 
v_name_180_ = lean_ctor_get(v_opt_178_, 0);
lean_inc(v_name_180_);
lean_dec_ref(v_opt_178_);
v___x_181_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1(v_opts_177_, v_name_180_, v_val_179_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1___boxed(lean_object* v_opts_182_, lean_object* v_opt_183_, lean_object* v_val_184_){
_start:
{
uint8_t v_val_boxed_185_; lean_object* v_res_186_; 
v_val_boxed_185_ = lean_unbox(v_val_184_);
v_res_186_ = l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1(v_opts_182_, v_opt_183_, v_val_boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8(size_t v_sz_187_, size_t v_i_188_, lean_object* v_bs_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = lean_usize_dec_lt(v_i_188_, v_sz_187_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = l_unsafeCast___redArg(v_bs_189_);
lean_dec_ref(v_bs_189_);
return v___x_191_;
}
else
{
lean_object* v_v_192_; lean_object* v___x_193_; lean_object* v_msg_194_; lean_object* v___x_195_; lean_object* v_bs_x27_196_; size_t v___x_197_; size_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_v_192_ = lean_array_uget_borrowed(v_bs_189_, v_i_188_);
v___x_193_ = l_unsafeCast___redArg(v_v_192_);
v_msg_194_ = lean_ctor_get(v___x_193_, 1);
lean_inc_ref(v_msg_194_);
lean_dec(v___x_193_);
v___x_195_ = lean_unsigned_to_nat(0u);
v_bs_x27_196_ = lean_array_uset(v_bs_189_, v_i_188_, v___x_195_);
v___x_197_ = ((size_t)1ULL);
v___x_198_ = lean_usize_add(v_i_188_, v___x_197_);
v___x_199_ = l_unsafeCast___redArg(v_msg_194_);
lean_dec_ref(v_msg_194_);
v___x_200_ = lean_array_uset(v_bs_x27_196_, v_i_188_, v___x_199_);
v_i_188_ = v___x_198_;
v_bs_189_ = v___x_200_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8___boxed(lean_object* v_sz_202_, lean_object* v_i_203_, lean_object* v_bs_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_202_);
lean_dec(v_sz_202_);
v_i_boxed_206_ = lean_unbox_usize(v_i_203_);
lean_dec(v_i_203_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8(v_sz_boxed_205_, v_i_boxed_206_, v_bs_204_);
return v_res_207_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_208_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1);
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
lean_ctor_set(v___x_213_, 2, v___x_212_);
lean_ctor_set(v___x_213_, 3, v___x_212_);
lean_ctor_set(v___x_213_, 4, v___x_211_);
lean_ctor_set(v___x_213_, 5, v___x_211_);
lean_ctor_set(v___x_213_, 6, v___x_211_);
lean_ctor_set(v___x_213_, 7, v___x_211_);
lean_ctor_set(v___x_213_, 8, v___x_211_);
lean_ctor_set(v___x_213_, 9, v___x_211_);
lean_ctor_set(v___x_213_, 10, v___x_211_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(32u);
v___x_215_ = lean_mk_empty_array_with_capacity(v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4(void){
_start:
{
size_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_217_ = ((size_t)5ULL);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_unsigned_to_nat(32u);
v___x_220_ = lean_mk_empty_array_with_capacity(v___x_219_);
v___x_221_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__3);
v___x_222_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_220_);
lean_ctor_set(v___x_222_, 2, v___x_218_);
lean_ctor_set(v___x_222_, 3, v___x_218_);
lean_ctor_set_usize(v___x_222_, 4, v___x_217_);
return v___x_222_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_223_ = lean_box(1);
v___x_224_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__4);
v___x_225_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__1);
v___x_226_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
lean_ctor_set(v___x_226_, 1, v___x_224_);
lean_ctor_set(v___x_226_, 2, v___x_223_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9(lean_object* v_msgData_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v___x_231_; lean_object* v_toCold_232_; lean_object* v_env_233_; lean_object* v_options_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_231_ = lean_st_ref_get(v___y_229_);
v_toCold_232_ = lean_ctor_get(v___y_228_, 0);
v_env_233_ = lean_ctor_get(v___x_231_, 0);
lean_inc_ref(v_env_233_);
lean_dec(v___x_231_);
v_options_234_ = lean_ctor_get(v_toCold_232_, 2);
v___x_235_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__2);
v___x_236_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__5);
lean_inc_ref(v_options_234_);
v___x_237_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_237_, 0, v_env_233_);
lean_ctor_set(v___x_237_, 1, v___x_235_);
lean_ctor_set(v___x_237_, 2, v___x_236_);
lean_ctor_set(v___x_237_, 3, v_options_234_);
v___x_238_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_msgData_227_);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___boxed(lean_object* v_msgData_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9(v_msgData_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6(lean_object* v_oldTraces_245_, lean_object* v_data_246_, lean_object* v_ref_247_, lean_object* v_msg_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_toCold_252_; lean_object* v_currRecDepth_253_; lean_object* v_ref_254_; uint8_t v_diag_255_; uint8_t v_suppressElabErrors_256_; lean_object* v_ref_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v_traceState_260_; lean_object* v_traces_261_; lean_object* v___x_262_; size_t v_sz_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_msg_268_; lean_object* v___x_269_; lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_307_; 
v_toCold_252_ = lean_ctor_get(v___y_249_, 0);
v_currRecDepth_253_ = lean_ctor_get(v___y_249_, 1);
v_ref_254_ = lean_ctor_get(v___y_249_, 2);
v_diag_255_ = lean_ctor_get_uint8(v___y_249_, sizeof(void*)*3);
v_suppressElabErrors_256_ = lean_ctor_get_uint8(v___y_249_, sizeof(void*)*3 + 1);
v_ref_257_ = l_Lean_replaceRef(v_ref_247_, v_ref_254_);
lean_inc(v_currRecDepth_253_);
lean_inc_ref(v_toCold_252_);
v___x_258_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_258_, 0, v_toCold_252_);
lean_ctor_set(v___x_258_, 1, v_currRecDepth_253_);
lean_ctor_set(v___x_258_, 2, v_ref_257_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*3, v_diag_255_);
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*3 + 1, v_suppressElabErrors_256_);
v___x_259_ = lean_st_ref_get(v___y_250_);
v_traceState_260_ = lean_ctor_get(v___x_259_, 4);
lean_inc_ref(v_traceState_260_);
lean_dec(v___x_259_);
v_traces_261_ = lean_ctor_get(v_traceState_260_, 0);
lean_inc_ref(v_traces_261_);
lean_dec_ref(v_traceState_260_);
v___x_262_ = l_Lean_PersistentArray_toArray___redArg(v_traces_261_);
lean_dec_ref(v_traces_261_);
v_sz_263_ = lean_array_size(v___x_262_);
v___x_264_ = ((size_t)0ULL);
v___x_265_ = l_unsafeCast___redArg(v___x_262_);
lean_dec_ref(v___x_262_);
v___x_266_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__8(v_sz_263_, v___x_264_, v___x_265_);
v___x_267_ = l_unsafeCast___redArg(v___x_266_);
lean_dec_ref(v___x_266_);
v_msg_268_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_268_, 0, v_data_246_);
lean_ctor_set(v_msg_268_, 1, v_msg_248_);
lean_ctor_set(v_msg_268_, 2, v___x_267_);
v___x_269_ = l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9(v_msg_268_, v___x_258_, v___y_250_);
lean_dec_ref_known(v___x_258_, 3);
v_a_270_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_307_ == 0)
{
v___x_272_ = v___x_269_;
v_isShared_273_ = v_isSharedCheck_307_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_307_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v_traceState_275_; lean_object* v_env_276_; lean_object* v_nextMacroScope_277_; lean_object* v_ngen_278_; lean_object* v_auxDeclNGen_279_; lean_object* v_cache_280_; lean_object* v_messages_281_; lean_object* v_infoState_282_; lean_object* v_snapshotTasks_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_306_; 
v___x_274_ = lean_st_ref_take(v___y_250_);
v_traceState_275_ = lean_ctor_get(v___x_274_, 4);
v_env_276_ = lean_ctor_get(v___x_274_, 0);
v_nextMacroScope_277_ = lean_ctor_get(v___x_274_, 1);
v_ngen_278_ = lean_ctor_get(v___x_274_, 2);
v_auxDeclNGen_279_ = lean_ctor_get(v___x_274_, 3);
v_cache_280_ = lean_ctor_get(v___x_274_, 5);
v_messages_281_ = lean_ctor_get(v___x_274_, 6);
v_infoState_282_ = lean_ctor_get(v___x_274_, 7);
v_snapshotTasks_283_ = lean_ctor_get(v___x_274_, 8);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_306_ == 0)
{
v___x_285_ = v___x_274_;
v_isShared_286_ = v_isSharedCheck_306_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_snapshotTasks_283_);
lean_inc(v_infoState_282_);
lean_inc(v_messages_281_);
lean_inc(v_cache_280_);
lean_inc(v_traceState_275_);
lean_inc(v_auxDeclNGen_279_);
lean_inc(v_ngen_278_);
lean_inc(v_nextMacroScope_277_);
lean_inc(v_env_276_);
lean_dec(v___x_274_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_306_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
uint64_t v_tid_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_304_; 
v_tid_287_ = lean_ctor_get_uint64(v_traceState_275_, sizeof(void*)*1);
v_isSharedCheck_304_ = !lean_is_exclusive(v_traceState_275_);
if (v_isSharedCheck_304_ == 0)
{
lean_object* v_unused_305_; 
v_unused_305_ = lean_ctor_get(v_traceState_275_, 0);
lean_dec(v_unused_305_);
v___x_289_ = v_traceState_275_;
v_isShared_290_ = v_isSharedCheck_304_;
goto v_resetjp_288_;
}
else
{
lean_dec(v_traceState_275_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_304_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_291_ = lean_box(0);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v_ref_247_);
lean_ctor_set(v___x_292_, 1, v_a_270_);
v___x_293_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_245_, v___x_292_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_293_);
v___x_295_ = v___x_289_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_293_);
lean_ctor_set_uint64(v_reuseFailAlloc_303_, sizeof(void*)*1, v_tid_287_);
v___x_295_ = v_reuseFailAlloc_303_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 4, v___x_295_);
v___x_297_ = v___x_285_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_env_276_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_nextMacroScope_277_);
lean_ctor_set(v_reuseFailAlloc_302_, 2, v_ngen_278_);
lean_ctor_set(v_reuseFailAlloc_302_, 3, v_auxDeclNGen_279_);
lean_ctor_set(v_reuseFailAlloc_302_, 4, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_302_, 5, v_cache_280_);
lean_ctor_set(v_reuseFailAlloc_302_, 6, v_messages_281_);
lean_ctor_set(v_reuseFailAlloc_302_, 7, v_infoState_282_);
lean_ctor_set(v_reuseFailAlloc_302_, 8, v_snapshotTasks_283_);
v___x_297_ = v_reuseFailAlloc_302_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_st_ref_put(v___y_250_, v___x_297_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_291_);
v___x_300_ = v___x_272_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_291_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6___boxed(lean_object* v_oldTraces_308_, lean_object* v_data_309_, lean_object* v_ref_310_, lean_object* v_msg_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6(v_oldTraces_308_, v_data_309_, v_ref_310_, v_msg_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_315_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8(lean_object* v_e_316_){
_start:
{
if (lean_obj_tag(v_e_316_) == 0)
{
uint8_t v___x_317_; 
v___x_317_ = 2;
return v___x_317_;
}
else
{
uint8_t v___x_318_; 
v___x_318_ = 0;
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8___boxed(lean_object* v_e_319_){
_start:
{
uint8_t v_res_320_; lean_object* v_r_321_; 
v_res_320_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8(v_e_319_);
lean_dec_ref(v_e_319_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(lean_object* v_x_322_){
_start:
{
if (lean_obj_tag(v_x_322_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v_x_322_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_322_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v_x_322_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v_x_322_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
lean_ctor_set_tag(v___x_326_, 1);
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
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
v_a_332_ = lean_ctor_get(v_x_322_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_x_322_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v_x_322_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v_x_322_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
lean_ctor_set_tag(v___x_334_, 0);
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg___boxed(lean_object* v_x_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(v_x_340_);
return v_res_342_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0(void){
_start:
{
lean_object* v___x_343_; double v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lean_float_of_nat(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__1));
v___x_347_ = l_Lean_stringToMessageData(v___x_346_);
return v___x_347_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3(void){
_start:
{
lean_object* v___x_348_; double v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1000u);
v___x_349_ = lean_float_of_nat(v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5(lean_object* v_cls_350_, uint8_t v_collapsed_351_, lean_object* v_tag_352_, lean_object* v_opts_353_, uint8_t v_clsEnabled_354_, lean_object* v_oldTraces_355_, lean_object* v_msg_356_, lean_object* v_resStartStop_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v_data_366_; lean_object* v_fst_369_; lean_object* v_snd_370_; lean_object* v___x_371_; uint8_t v___x_372_; lean_object* v___y_374_; lean_object* v_a_375_; uint8_t v___y_390_; double v___y_421_; 
v_fst_361_ = lean_ctor_get(v_resStartStop_357_, 0);
lean_inc(v_fst_361_);
v_snd_362_ = lean_ctor_get(v_resStartStop_357_, 1);
lean_inc(v_snd_362_);
lean_dec_ref(v_resStartStop_357_);
v_fst_369_ = lean_ctor_get(v_snd_362_, 0);
lean_inc(v_fst_369_);
v_snd_370_ = lean_ctor_get(v_snd_362_, 1);
lean_inc(v_snd_370_);
lean_dec(v_snd_362_);
v___x_371_ = l_Lean_trace_profiler;
v___x_372_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v_opts_353_, v___x_371_);
if (v___x_372_ == 0)
{
v___y_390_ = v___x_372_;
goto v___jp_389_;
}
else
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = l_Lean_trace_profiler_useHeartbeats;
v___x_427_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v_opts_353_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; double v___x_430_; double v___x_431_; double v___x_432_; 
v___x_428_ = l_Lean_trace_profiler_threshold;
v___x_429_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(v_opts_353_, v___x_428_);
v___x_430_ = lean_float_of_nat(v___x_429_);
v___x_431_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__3);
v___x_432_ = lean_float_div(v___x_430_, v___x_431_);
v___y_421_ = v___x_432_;
goto v___jp_420_;
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; double v___x_435_; 
v___x_433_ = l_Lean_trace_profiler_threshold;
v___x_434_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(v_opts_353_, v___x_433_);
v___x_435_ = lean_float_of_nat(v___x_434_);
v___y_421_ = v___x_435_;
goto v___jp_420_;
}
}
v___jp_363_:
{
lean_object* v___x_367_; 
lean_inc(v___y_365_);
v___x_367_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6(v_oldTraces_355_, v_data_366_, v___y_365_, v___y_364_, v___y_358_, v___y_359_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v___x_368_; 
lean_dec_ref_known(v___x_367_, 1);
v___x_368_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(v_fst_361_);
return v___x_368_;
}
else
{
lean_dec(v_fst_361_);
return v___x_367_;
}
}
v___jp_373_:
{
uint8_t v_result_376_; lean_object* v___x_377_; lean_object* v___x_378_; double v___x_379_; lean_object* v_data_380_; 
v_result_376_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__8(v_fst_361_);
v___x_377_ = lean_box(v_result_376_);
v___x_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
v___x_379_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__0);
lean_inc_ref(v_tag_352_);
lean_inc_ref(v___x_378_);
lean_inc(v_cls_350_);
v_data_380_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_380_, 0, v_cls_350_);
lean_ctor_set(v_data_380_, 1, v___x_378_);
lean_ctor_set(v_data_380_, 2, v_tag_352_);
lean_ctor_set_float(v_data_380_, sizeof(void*)*3, v___x_379_);
lean_ctor_set_float(v_data_380_, sizeof(void*)*3 + 8, v___x_379_);
lean_ctor_set_uint8(v_data_380_, sizeof(void*)*3 + 16, v_collapsed_351_);
if (v___x_372_ == 0)
{
lean_dec_ref_known(v___x_378_, 1);
lean_dec(v_snd_370_);
lean_dec(v_fst_369_);
lean_dec_ref(v_tag_352_);
lean_dec(v_cls_350_);
v___y_364_ = v_a_375_;
v___y_365_ = v___y_374_;
v_data_366_ = v_data_380_;
goto v___jp_363_;
}
else
{
lean_object* v_data_381_; double v___x_382_; double v___x_383_; 
lean_dec_ref_known(v_data_380_, 3);
v_data_381_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_381_, 0, v_cls_350_);
lean_ctor_set(v_data_381_, 1, v___x_378_);
lean_ctor_set(v_data_381_, 2, v_tag_352_);
v___x_382_ = lean_unbox_float(v_fst_369_);
lean_dec(v_fst_369_);
lean_ctor_set_float(v_data_381_, sizeof(void*)*3, v___x_382_);
v___x_383_ = lean_unbox_float(v_snd_370_);
lean_dec(v_snd_370_);
lean_ctor_set_float(v_data_381_, sizeof(void*)*3 + 8, v___x_383_);
lean_ctor_set_uint8(v_data_381_, sizeof(void*)*3 + 16, v_collapsed_351_);
v___y_364_ = v_a_375_;
v___y_365_ = v___y_374_;
v_data_366_ = v_data_381_;
goto v___jp_363_;
}
}
v___jp_384_:
{
lean_object* v_ref_385_; lean_object* v___x_386_; 
v_ref_385_ = lean_ctor_get(v___y_358_, 2);
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v_fst_361_);
v___x_386_ = lean_apply_4(v_msg_356_, v_fst_361_, v___y_358_, v___y_359_, lean_box(0));
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_386_, 1);
v___y_374_ = v_ref_385_;
v_a_375_ = v_a_387_;
goto v___jp_373_;
}
else
{
lean_object* v___x_388_; 
lean_dec_ref_known(v___x_386_, 1);
v___x_388_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___closed__2);
v___y_374_ = v_ref_385_;
v_a_375_ = v___x_388_;
goto v___jp_373_;
}
}
v___jp_389_:
{
if (v_clsEnabled_354_ == 0)
{
if (v___y_390_ == 0)
{
lean_object* v___x_391_; lean_object* v_traceState_392_; lean_object* v_env_393_; lean_object* v_nextMacroScope_394_; lean_object* v_ngen_395_; lean_object* v_auxDeclNGen_396_; lean_object* v_cache_397_; lean_object* v_messages_398_; lean_object* v_infoState_399_; lean_object* v_snapshotTasks_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_snd_370_);
lean_dec(v_fst_369_);
lean_dec_ref(v_msg_356_);
lean_dec_ref(v_tag_352_);
lean_dec(v_cls_350_);
v___x_391_ = lean_st_ref_take(v___y_359_);
v_traceState_392_ = lean_ctor_get(v___x_391_, 4);
v_env_393_ = lean_ctor_get(v___x_391_, 0);
v_nextMacroScope_394_ = lean_ctor_get(v___x_391_, 1);
v_ngen_395_ = lean_ctor_get(v___x_391_, 2);
v_auxDeclNGen_396_ = lean_ctor_get(v___x_391_, 3);
v_cache_397_ = lean_ctor_get(v___x_391_, 5);
v_messages_398_ = lean_ctor_get(v___x_391_, 6);
v_infoState_399_ = lean_ctor_get(v___x_391_, 7);
v_snapshotTasks_400_ = lean_ctor_get(v___x_391_, 8);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_419_ == 0)
{
v___x_402_ = v___x_391_;
v_isShared_403_ = v_isSharedCheck_419_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_snapshotTasks_400_);
lean_inc(v_infoState_399_);
lean_inc(v_messages_398_);
lean_inc(v_cache_397_);
lean_inc(v_traceState_392_);
lean_inc(v_auxDeclNGen_396_);
lean_inc(v_ngen_395_);
lean_inc(v_nextMacroScope_394_);
lean_inc(v_env_393_);
lean_dec(v___x_391_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_419_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
uint64_t v_tid_404_; lean_object* v_traces_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_418_; 
v_tid_404_ = lean_ctor_get_uint64(v_traceState_392_, sizeof(void*)*1);
v_traces_405_ = lean_ctor_get(v_traceState_392_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v_traceState_392_);
if (v_isSharedCheck_418_ == 0)
{
v___x_407_ = v_traceState_392_;
v_isShared_408_ = v_isSharedCheck_418_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_traces_405_);
lean_dec(v_traceState_392_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_418_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_355_, v_traces_405_);
lean_dec_ref(v_traces_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_409_);
lean_ctor_set_uint64(v_reuseFailAlloc_417_, sizeof(void*)*1, v_tid_404_);
v___x_411_ = v_reuseFailAlloc_417_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_413_; 
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 4, v___x_411_);
v___x_413_ = v___x_402_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_env_393_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_nextMacroScope_394_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_ngen_395_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v_auxDeclNGen_396_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_416_, 5, v_cache_397_);
lean_ctor_set(v_reuseFailAlloc_416_, 6, v_messages_398_);
lean_ctor_set(v_reuseFailAlloc_416_, 7, v_infoState_399_);
lean_ctor_set(v_reuseFailAlloc_416_, 8, v_snapshotTasks_400_);
v___x_413_ = v_reuseFailAlloc_416_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_st_ref_put(v___y_359_, v___x_413_);
v___x_415_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(v_fst_361_);
return v___x_415_;
}
}
}
}
}
else
{
goto v___jp_384_;
}
}
else
{
goto v___jp_384_;
}
}
v___jp_420_:
{
double v___x_422_; double v___x_423_; double v___x_424_; uint8_t v___x_425_; 
v___x_422_ = lean_unbox_float(v_snd_370_);
v___x_423_ = lean_unbox_float(v_fst_369_);
v___x_424_ = lean_float_sub(v___x_422_, v___x_423_);
v___x_425_ = lean_float_decLt(v___y_421_, v___x_424_);
v___y_390_ = v___x_425_;
goto v___jp_389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5___boxed(lean_object* v_cls_436_, lean_object* v_collapsed_437_, lean_object* v_tag_438_, lean_object* v_opts_439_, lean_object* v_clsEnabled_440_, lean_object* v_oldTraces_441_, lean_object* v_msg_442_, lean_object* v_resStartStop_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
uint8_t v_collapsed_boxed_447_; uint8_t v_clsEnabled_boxed_448_; lean_object* v_res_449_; 
v_collapsed_boxed_447_ = lean_unbox(v_collapsed_437_);
v_clsEnabled_boxed_448_ = lean_unbox(v_clsEnabled_440_);
v_res_449_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5(v_cls_436_, v_collapsed_boxed_447_, v_tag_438_, v_opts_439_, v_clsEnabled_boxed_448_, v_oldTraces_441_, v_msg_442_, v_resStartStop_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec_ref(v_opts_439_);
return v_res_449_;
}
}
static double _init_l_Lean_Compiler_compile___lam__1___closed__0(void){
_start:
{
lean_object* v___x_450_; double v___x_451_; 
v___x_450_ = lean_unsigned_to_nat(1000000000u);
v___x_451_ = lean_float_of_nat(v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_Compiler_compile___lam__1___closed__1(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0, &l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__6_spec__9___closed__0);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_Compiler_compile___lam__1___closed__2(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l_Lean_Compiler_compile___lam__1___closed__1, &l_Lean_Compiler_compile___lam__1___closed__1_once, _init_l_Lean_Compiler_compile___lam__1___closed__1);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__1(lean_object* v___x_456_, uint8_t v___x_457_, lean_object* v___x_458_, lean_object* v___f_459_, lean_object* v_declNames_460_, lean_object* v___x_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_toCold_465_; lean_object* v_currRecDepth_466_; lean_object* v_ref_467_; uint8_t v_suppressElabErrors_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_626_; 
v_toCold_465_ = lean_ctor_get(v___y_462_, 0);
v_currRecDepth_466_ = lean_ctor_get(v___y_462_, 1);
v_ref_467_ = lean_ctor_get(v___y_462_, 2);
v_suppressElabErrors_468_ = lean_ctor_get_uint8(v___y_462_, sizeof(void*)*3 + 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v___y_462_);
if (v_isSharedCheck_626_ == 0)
{
v___x_470_ = v___y_462_;
v_isShared_471_ = v_isSharedCheck_626_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_ref_467_);
lean_inc(v_currRecDepth_466_);
lean_inc(v_toCold_465_);
lean_dec(v___y_462_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_626_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v_fileName_472_; lean_object* v_fileMap_473_; lean_object* v_options_474_; lean_object* v_currNamespace_475_; lean_object* v_openDecls_476_; lean_object* v_initHeartbeats_477_; lean_object* v_maxHeartbeats_478_; lean_object* v_quotContext_479_; lean_object* v_currMacroScope_480_; lean_object* v_cancelTk_x3f_481_; lean_object* v_inheritedTraceOptions_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_624_; 
v_fileName_472_ = lean_ctor_get(v_toCold_465_, 0);
v_fileMap_473_ = lean_ctor_get(v_toCold_465_, 1);
v_options_474_ = lean_ctor_get(v_toCold_465_, 2);
v_currNamespace_475_ = lean_ctor_get(v_toCold_465_, 4);
v_openDecls_476_ = lean_ctor_get(v_toCold_465_, 5);
v_initHeartbeats_477_ = lean_ctor_get(v_toCold_465_, 6);
v_maxHeartbeats_478_ = lean_ctor_get(v_toCold_465_, 7);
v_quotContext_479_ = lean_ctor_get(v_toCold_465_, 8);
v_currMacroScope_480_ = lean_ctor_get(v_toCold_465_, 9);
v_cancelTk_x3f_481_ = lean_ctor_get(v_toCold_465_, 10);
v_inheritedTraceOptions_482_ = lean_ctor_get(v_toCold_465_, 11);
v_isSharedCheck_624_ = !lean_is_exclusive(v_toCold_465_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v_toCold_465_, 3);
lean_dec(v_unused_625_);
v___x_484_ = v_toCold_465_;
v_isShared_485_ = v_isSharedCheck_624_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_inheritedTraceOptions_482_);
lean_inc(v_cancelTk_x3f_481_);
lean_inc(v_currMacroScope_480_);
lean_inc(v_quotContext_479_);
lean_inc(v_maxHeartbeats_478_);
lean_inc(v_initHeartbeats_477_);
lean_inc(v_openDecls_476_);
lean_inc(v_currNamespace_475_);
lean_inc(v_options_474_);
lean_inc(v_fileMap_473_);
lean_inc(v_fileName_472_);
lean_dec(v_toCold_465_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_624_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; uint8_t v___x_487_; lean_object* v___x_488_; uint8_t v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v_a_495_; uint8_t v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v_a_513_; uint8_t v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___x_566_; uint8_t v___x_567_; lean_object* v_fileName_569_; lean_object* v_fileMap_570_; lean_object* v_currNamespace_571_; lean_object* v_openDecls_572_; lean_object* v_initHeartbeats_573_; lean_object* v_maxHeartbeats_574_; lean_object* v_quotContext_575_; lean_object* v_currMacroScope_576_; lean_object* v_cancelTk_x3f_577_; lean_object* v_inheritedTraceOptions_578_; lean_object* v_currRecDepth_579_; lean_object* v_ref_580_; uint8_t v_suppressElabErrors_581_; lean_object* v___y_582_; lean_object* v___x_599_; uint8_t v___y_601_; lean_object* v_env_622_; uint8_t v___x_623_; 
v___x_486_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_487_ = 0;
v___x_488_ = l_Lean_Option_set___at___00Lean_Compiler_compile_spec__1(v_options_474_, v___x_486_, v___x_487_);
v___x_566_ = l_Lean_diagnostics;
v___x_567_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v___x_488_, v___x_566_);
v___x_599_ = lean_st_ref_get(v___y_463_);
v_env_622_ = lean_ctor_get(v___x_599_, 0);
lean_inc_ref(v_env_622_);
lean_dec(v___x_599_);
v___x_623_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_622_);
lean_dec_ref(v_env_622_);
if (v___x_567_ == 0)
{
if (v___x_623_ == 0)
{
v_fileName_569_ = v_fileName_472_;
v_fileMap_570_ = v_fileMap_473_;
v_currNamespace_571_ = v_currNamespace_475_;
v_openDecls_572_ = v_openDecls_476_;
v_initHeartbeats_573_ = v_initHeartbeats_477_;
v_maxHeartbeats_574_ = v_maxHeartbeats_478_;
v_quotContext_575_ = v_quotContext_479_;
v_currMacroScope_576_ = v_currMacroScope_480_;
v_cancelTk_x3f_577_ = v_cancelTk_x3f_481_;
v_inheritedTraceOptions_578_ = v_inheritedTraceOptions_482_;
v_currRecDepth_579_ = v_currRecDepth_466_;
v_ref_580_ = v_ref_467_;
v_suppressElabErrors_581_ = v_suppressElabErrors_468_;
v___y_582_ = v___y_463_;
goto v___jp_568_;
}
else
{
v___y_601_ = v___x_567_;
goto v___jp_600_;
}
}
else
{
v___y_601_ = v___x_623_;
goto v___jp_600_;
}
v___jp_489_:
{
lean_object* v___x_496_; double v___x_497_; double v___x_498_; double v___x_499_; double v___x_500_; double v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_496_ = lean_io_mono_nanos_now();
v___x_497_ = lean_float_of_nat(v___y_491_);
v___x_498_ = lean_float_once(&l_Lean_Compiler_compile___lam__1___closed__0, &l_Lean_Compiler_compile___lam__1___closed__0_once, _init_l_Lean_Compiler_compile___lam__1___closed__0);
v___x_499_ = lean_float_div(v___x_497_, v___x_498_);
v___x_500_ = lean_float_of_nat(v___x_496_);
v___x_501_ = lean_float_div(v___x_500_, v___x_498_);
v___x_502_ = lean_box_float(v___x_499_);
v___x_503_ = lean_box_float(v___x_501_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v_a_495_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5(v___x_456_, v___x_457_, v___x_458_, v___x_488_, v___y_490_, v___y_493_, v___f_459_, v___x_505_, v___y_492_, v___y_494_);
lean_dec_ref(v___y_492_);
lean_dec_ref(v___x_488_);
return v___x_506_;
}
v___jp_507_:
{
lean_object* v___x_514_; double v___x_515_; double v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_514_ = lean_io_get_num_heartbeats();
v___x_515_ = lean_float_of_nat(v___y_509_);
v___x_516_ = lean_float_of_nat(v___x_514_);
v___x_517_ = lean_box_float(v___x_515_);
v___x_518_ = lean_box_float(v___x_516_);
v___x_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v_a_513_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5(v___x_456_, v___x_457_, v___x_458_, v___x_488_, v___y_508_, v___y_511_, v___f_459_, v___x_520_, v___y_510_, v___y_512_);
lean_dec_ref(v___y_510_);
lean_dec_ref(v___x_488_);
return v___x_521_;
}
v___jp_522_:
{
lean_object* v___x_526_; lean_object* v_a_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_526_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_compile_spec__4___redArg(v___y_525_);
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref(v___x_526_);
v___x_528_ = l_Lean_trace_profiler_useHeartbeats;
v___x_529_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v___x_488_, v___x_528_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_io_mono_nanos_now();
v___x_531_ = l_Lean_Compiler_LCNF_main(v_declNames_460_, v___x_461_, v___y_524_, v___y_525_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 1);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
v___y_490_ = v___y_523_;
v___y_491_ = v___x_530_;
v___y_492_ = v___y_524_;
v___y_493_ = v_a_527_;
v___y_494_ = v___y_525_;
v_a_495_ = v___x_537_;
goto v___jp_489_;
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_a_540_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_531_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_531_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set_tag(v___x_542_, 0);
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
v___y_490_ = v___y_523_;
v___y_491_ = v___x_530_;
v___y_492_ = v___y_524_;
v___y_493_ = v_a_527_;
v___y_494_ = v___y_525_;
v_a_495_ = v___x_545_;
goto v___jp_489_;
}
}
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_io_get_num_heartbeats();
v___x_549_ = l_Lean_Compiler_LCNF_main(v_declNames_460_, v___x_461_, v___y_524_, v___y_525_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 1);
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
v___y_508_ = v___y_523_;
v___y_509_ = v___x_548_;
v___y_510_ = v___y_524_;
v___y_511_ = v_a_527_;
v___y_512_ = v___y_525_;
v_a_513_ = v___x_555_;
goto v___jp_507_;
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_549_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_549_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 0);
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
v___y_508_ = v___y_523_;
v___y_509_ = v___x_548_;
v___y_510_ = v___y_524_;
v___y_511_ = v_a_527_;
v___y_512_ = v___y_525_;
v_a_513_ = v___x_563_;
goto v___jp_507_;
}
}
}
}
}
v___jp_568_:
{
uint8_t v_hasTrace_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v_hasTrace_583_ = lean_ctor_get_uint8(v___x_488_, sizeof(void*)*1);
v___x_584_ = l_Lean_maxRecDepth;
v___x_585_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__3(v___x_488_, v___x_584_);
lean_inc_ref(v_inheritedTraceOptions_578_);
lean_inc_ref(v___x_488_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 11, v_inheritedTraceOptions_578_);
lean_ctor_set(v___x_484_, 10, v_cancelTk_x3f_577_);
lean_ctor_set(v___x_484_, 9, v_currMacroScope_576_);
lean_ctor_set(v___x_484_, 8, v_quotContext_575_);
lean_ctor_set(v___x_484_, 7, v_maxHeartbeats_574_);
lean_ctor_set(v___x_484_, 6, v_initHeartbeats_573_);
lean_ctor_set(v___x_484_, 5, v_openDecls_572_);
lean_ctor_set(v___x_484_, 4, v_currNamespace_571_);
lean_ctor_set(v___x_484_, 3, v___x_585_);
lean_ctor_set(v___x_484_, 2, v___x_488_);
lean_ctor_set(v___x_484_, 1, v_fileMap_570_);
lean_ctor_set(v___x_484_, 0, v_fileName_569_);
v___x_587_ = v___x_484_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_fileName_569_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_fileMap_570_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_currNamespace_571_);
lean_ctor_set(v_reuseFailAlloc_598_, 5, v_openDecls_572_);
lean_ctor_set(v_reuseFailAlloc_598_, 6, v_initHeartbeats_573_);
lean_ctor_set(v_reuseFailAlloc_598_, 7, v_maxHeartbeats_574_);
lean_ctor_set(v_reuseFailAlloc_598_, 8, v_quotContext_575_);
lean_ctor_set(v_reuseFailAlloc_598_, 9, v_currMacroScope_576_);
lean_ctor_set(v_reuseFailAlloc_598_, 10, v_cancelTk_x3f_577_);
lean_ctor_set(v_reuseFailAlloc_598_, 11, v_inheritedTraceOptions_578_);
v___x_587_ = v_reuseFailAlloc_598_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_589_; 
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 2, v_ref_580_);
lean_ctor_set(v___x_470_, 1, v_currRecDepth_579_);
lean_ctor_set(v___x_470_, 0, v___x_587_);
v___x_589_ = v___x_470_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_587_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_currRecDepth_579_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_ref_580_);
v___x_589_ = v_reuseFailAlloc_597_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_ctor_set_uint8(v___x_589_, sizeof(void*)*3, v___x_567_);
lean_ctor_set_uint8(v___x_589_, sizeof(void*)*3 + 1, v_suppressElabErrors_581_);
if (v_hasTrace_583_ == 0)
{
lean_object* v___x_590_; 
lean_dec_ref(v_inheritedTraceOptions_578_);
lean_dec_ref(v___x_488_);
lean_dec_ref(v___f_459_);
lean_dec_ref(v___x_458_);
lean_dec(v___x_456_);
v___x_590_ = l_Lean_Compiler_LCNF_main(v_declNames_460_, v___x_461_, v___x_589_, v___y_582_);
lean_dec_ref(v___x_589_);
return v___x_590_;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_591_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Compiler_compile_spec__1_spec__1___closed__1));
lean_inc(v___x_456_);
v___x_592_ = l_Lean_Name_append(v___x_591_, v___x_456_);
v___x_593_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_578_, v___x_488_, v___x_592_);
lean_dec(v___x_592_);
lean_dec_ref(v_inheritedTraceOptions_578_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = l_Lean_trace_profiler;
v___x_595_ = l_Lean_Option_get___at___00Lean_Compiler_compile_spec__2(v___x_488_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
lean_dec_ref(v___x_488_);
lean_dec_ref(v___f_459_);
lean_dec_ref(v___x_458_);
lean_dec(v___x_456_);
v___x_596_ = l_Lean_Compiler_LCNF_main(v_declNames_460_, v___x_461_, v___x_589_, v___y_582_);
lean_dec_ref(v___x_589_);
return v___x_596_;
}
else
{
v___y_523_ = v___x_593_;
v___y_524_ = v___x_589_;
v___y_525_ = v___y_582_;
goto v___jp_522_;
}
}
else
{
v___y_523_ = v___x_593_;
v___y_524_ = v___x_589_;
v___y_525_ = v___y_582_;
goto v___jp_522_;
}
}
}
}
}
v___jp_600_:
{
if (v___y_601_ == 0)
{
lean_object* v___x_602_; lean_object* v_env_603_; lean_object* v_nextMacroScope_604_; lean_object* v_ngen_605_; lean_object* v_auxDeclNGen_606_; lean_object* v_traceState_607_; lean_object* v_messages_608_; lean_object* v_infoState_609_; lean_object* v_snapshotTasks_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_620_; 
v___x_602_ = lean_st_ref_take(v___y_463_);
v_env_603_ = lean_ctor_get(v___x_602_, 0);
v_nextMacroScope_604_ = lean_ctor_get(v___x_602_, 1);
v_ngen_605_ = lean_ctor_get(v___x_602_, 2);
v_auxDeclNGen_606_ = lean_ctor_get(v___x_602_, 3);
v_traceState_607_ = lean_ctor_get(v___x_602_, 4);
v_messages_608_ = lean_ctor_get(v___x_602_, 6);
v_infoState_609_ = lean_ctor_get(v___x_602_, 7);
v_snapshotTasks_610_ = lean_ctor_get(v___x_602_, 8);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; 
v_unused_621_ = lean_ctor_get(v___x_602_, 5);
lean_dec(v_unused_621_);
v___x_612_ = v___x_602_;
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_snapshotTasks_610_);
lean_inc(v_infoState_609_);
lean_inc(v_messages_608_);
lean_inc(v_traceState_607_);
lean_inc(v_auxDeclNGen_606_);
lean_inc(v_ngen_605_);
lean_inc(v_nextMacroScope_604_);
lean_inc(v_env_603_);
lean_dec(v___x_602_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_620_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_614_ = l_Lean_Kernel_enableDiag(v_env_603_, v___x_567_);
v___x_615_ = lean_obj_once(&l_Lean_Compiler_compile___lam__1___closed__2, &l_Lean_Compiler_compile___lam__1___closed__2_once, _init_l_Lean_Compiler_compile___lam__1___closed__2);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 5, v___x_615_);
lean_ctor_set(v___x_612_, 0, v___x_614_);
v___x_617_ = v___x_612_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_614_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_nextMacroScope_604_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_ngen_605_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_auxDeclNGen_606_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_traceState_607_);
lean_ctor_set(v_reuseFailAlloc_619_, 5, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_619_, 6, v_messages_608_);
lean_ctor_set(v_reuseFailAlloc_619_, 7, v_infoState_609_);
lean_ctor_set(v_reuseFailAlloc_619_, 8, v_snapshotTasks_610_);
v___x_617_ = v_reuseFailAlloc_619_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_object* v___x_618_; 
v___x_618_ = lean_st_ref_put(v___y_463_, v___x_617_);
v_fileName_569_ = v_fileName_472_;
v_fileMap_570_ = v_fileMap_473_;
v_currNamespace_571_ = v_currNamespace_475_;
v_openDecls_572_ = v_openDecls_476_;
v_initHeartbeats_573_ = v_initHeartbeats_477_;
v_maxHeartbeats_574_ = v_maxHeartbeats_478_;
v_quotContext_575_ = v_quotContext_479_;
v_currMacroScope_576_ = v_currMacroScope_480_;
v_cancelTk_x3f_577_ = v_cancelTk_x3f_481_;
v_inheritedTraceOptions_578_ = v_inheritedTraceOptions_482_;
v_currRecDepth_579_ = v_currRecDepth_466_;
v_ref_580_ = v_ref_467_;
v_suppressElabErrors_581_ = v_suppressElabErrors_468_;
v___y_582_ = v___y_463_;
goto v___jp_568_;
}
}
}
else
{
v_fileName_569_ = v_fileName_472_;
v_fileMap_570_ = v_fileMap_473_;
v_currNamespace_571_ = v_currNamespace_475_;
v_openDecls_572_ = v_openDecls_476_;
v_initHeartbeats_573_ = v_initHeartbeats_477_;
v_maxHeartbeats_574_ = v_maxHeartbeats_478_;
v_quotContext_575_ = v_quotContext_479_;
v_currMacroScope_576_ = v_currMacroScope_480_;
v_cancelTk_x3f_577_ = v_cancelTk_x3f_481_;
v_inheritedTraceOptions_578_ = v_inheritedTraceOptions_482_;
v_currRecDepth_579_ = v_currRecDepth_466_;
v_ref_580_ = v_ref_467_;
v_suppressElabErrors_581_ = v_suppressElabErrors_468_;
v___y_582_ = v___y_463_;
goto v___jp_568_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___lam__1___boxed(lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v___x_629_, lean_object* v___f_630_, lean_object* v_declNames_631_, lean_object* v___x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
uint8_t v___x_6987__boxed_636_; lean_object* v_res_637_; 
v___x_6987__boxed_636_ = lean_unbox(v___x_628_);
v_res_637_ = l_Lean_Compiler_compile___lam__1(v___x_627_, v___x_6987__boxed_636_, v___x_629_, v___f_630_, v_declNames_631_, v___x_632_, v___y_633_, v___y_634_);
lean_dec(v___y_634_);
return v_res_637_;
}
}
static lean_object* _init_l_Lean_Compiler_compile___closed__4(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = lean_box(0);
v___x_644_ = l_unsafeCast___redArg(v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile(lean_object* v_declNames_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
lean_object* v_toCold_649_; lean_object* v_options_650_; lean_object* v___f_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___f_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_toCold_649_ = lean_ctor_get(v_a_646_, 0);
v_options_650_ = lean_ctor_get(v_toCold_649_, 2);
lean_inc_ref(v_declNames_645_);
v___f_651_ = lean_alloc_closure((void*)(l_Lean_Compiler_compile___lam__0___boxed), 5, 1);
lean_closure_set(v___f_651_, 0, v_declNames_645_);
v___x_652_ = ((lean_object*)(l_Lean_Compiler_compile___closed__0));
v___x_653_ = ((lean_object*)(l_Lean_Compiler_compile___closed__2));
v___x_654_ = l_Lean_Options_empty;
v___x_655_ = 1;
v___x_656_ = ((lean_object*)(l_Lean_Compiler_compile___closed__3));
v___x_657_ = lean_box(v___x_655_);
v___f_658_ = lean_alloc_closure((void*)(l_Lean_Compiler_compile___lam__1___boxed), 9, 6);
lean_closure_set(v___f_658_, 0, v___x_653_);
lean_closure_set(v___f_658_, 1, v___x_657_);
lean_closure_set(v___f_658_, 2, v___x_656_);
lean_closure_set(v___f_658_, 3, v___f_651_);
lean_closure_set(v___f_658_, 4, v_declNames_645_);
lean_closure_set(v___f_658_, 5, v___x_654_);
v___x_659_ = lean_obj_once(&l_Lean_Compiler_compile___closed__4, &l_Lean_Compiler_compile___closed__4_once, _init_l_Lean_Compiler_compile___closed__4);
v___x_660_ = l_Lean_profileitM___at___00Lean_Compiler_compile_spec__6___redArg(v___x_652_, v_options_650_, v___f_658_, v___x_659_, v_a_646_, v_a_647_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_compile___boxed(lean_object* v_declNames_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Compiler_compile(v_declNames_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7(lean_object* v_00_u03b1_666_, lean_object* v_x_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___redArg(v_x_667_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7___boxed(lean_object* v_00_u03b1_672_, lean_object* v_x_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_compile_spec__5_spec__7(v_00_u03b1_672_, v_x_673_, v___y_674_, v___y_675_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_677_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__0_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_680_ = lean_obj_once(&l_Lean_Compiler_compile___closed__4, &l_Lean_Compiler_compile___closed__4_once, _init_l_Lean_Compiler_compile___closed__4);
v___x_681_ = l_Lean_Name_str___override(v___x_680_, v___x_679_);
return v___x_681_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_684_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__1_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_685_ = l_Lean_Name_str___override(v___x_684_, v___x_683_);
return v___x_685_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = ((lean_object*)(l_Lean_Compiler_compile___closed__1));
v___x_687_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__3_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_688_ = l_Lean_Name_str___override(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__5_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_691_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__4_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_692_ = l_Lean_Name_str___override(v___x_691_, v___x_690_);
return v___x_692_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = lean_unsigned_to_nat(0u);
v___x_694_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__6_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_695_ = l_Lean_Name_num___override(v___x_694_, v___x_693_);
return v___x_695_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_697_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__7_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_698_ = l_Lean_Name_str___override(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((lean_object*)(l_Lean_Compiler_compile___closed__1));
v___x_700_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__8_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_701_ = l_Lean_Name_str___override(v___x_700_, v___x_699_);
return v___x_701_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__10_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_704_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__9_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_705_ = l_Lean_Name_str___override(v___x_704_, v___x_703_);
return v___x_705_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__12_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_708_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__11_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_709_ = l_Lean_Name_str___override(v___x_708_, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__2_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_711_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__13_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_712_ = l_Lean_Name_str___override(v___x_711_, v___x_710_);
return v___x_712_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = ((lean_object*)(l_Lean_Compiler_compile___closed__1));
v___x_714_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__14_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_715_ = l_Lean_Name_str___override(v___x_714_, v___x_713_);
return v___x_715_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__5_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_717_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__15_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_718_ = l_Lean_Name_str___override(v___x_717_, v___x_716_);
return v___x_718_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_unsigned_to_nat(509999922u);
v___x_720_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__16_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_721_ = l_Lean_Name_num___override(v___x_720_, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__18_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_724_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__17_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_725_ = l_Lean_Name_str___override(v___x_724_, v___x_723_);
return v___x_725_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__20_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_728_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__19_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_729_ = l_Lean_Name_str___override(v___x_728_, v___x_727_);
return v___x_729_;
}
}
static lean_object* _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_730_ = lean_unsigned_to_nat(2u);
v___x_731_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__21_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_732_ = l_Lean_Name_num___override(v___x_731_, v___x_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_738_ = ((lean_object*)(l_Lean_Compiler_compile___closed__2));
v___x_739_ = 0;
v___x_740_ = lean_obj_once(&l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_, &l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__22_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_);
v___x_741_ = l_Lean_registerTraceClass(v___x_738_, v___x_739_, v___x_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; 
lean_dec_ref_known(v___x_741_, 1);
v___x_742_ = ((lean_object*)(l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn___closed__24_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_));
v___x_743_ = l_Lean_registerTraceClass(v___x_742_, v___x_739_, v___x_740_);
return v___x_743_;
}
else
{
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2____boxed(lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_();
return v_res_745_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_Main_0__Lean_Compiler_initFn_00___x40_Lean_Compiler_Main_509999922____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_Main(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.PostprocessTraces.Postprocessors
// Imports: public import Lean.PostprocessTraces.Basic import Lean.CoreM
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
lean_object* l_Lean_PostprocessTraces_TraceTree_cls_x3f(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_children(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_PostprocessTraces_TraceTree_withChildren(lean_object*, lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_modifyData(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_filterSubtrees(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_result_x3f(lean_object*);
uint8_t l_Lean_instBEqTraceResult_beq(uint8_t, uint8_t);
lean_object* l_Lean_PostprocessTraces_TraceTree_collectSubtrees(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_beq(double, double);
double l_Lean_PostprocessTraces_TraceTree_selfElapsed(lean_object*);
double lean_float_mul(double, double);
double round(double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_PostprocessTraces_TraceTree_headText(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_float_decLe(double, double);
double l_Lean_PostprocessTraces_TraceTree_elapsed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___closed__0 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PostprocessTraces_succeeded___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_succeeded___redArg___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_succeeded___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PostprocessTraces_failed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_failed___redArg___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_failed___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PostprocessTraces_errored___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_PostprocessTraces_errored___redArg___closed__0 = (const lean_object*)&l_Lean_PostprocessTraces_errored___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___redArg(double, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs(double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___redArg(double, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs(double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_filterSubtrees(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_filterSubtrees___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_hoist(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_hoist___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed__const__1 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_exposeSubtrees(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_exposeSubtrees___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__0 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__0_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " node"};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__2 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__2_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__4 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__4_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__6 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__6_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__7 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__1 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__1_value;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ms"};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__2 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs(double);
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0;
static const lean_string_object l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " (self: "};
static const lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__1 = (const lean_object*)&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__1_value;
static lean_once_cell_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg(lean_object* v_s_1_, lean_object* v___x_2_, lean_object* v___x_3_, lean_object* v_a_4_, lean_object* v_b_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_box(0);
switch(lean_obj_tag(v_a_4_))
{
case 0:
{
lean_object* v_pos_7_; lean_object* v___x_8_; 
v_pos_7_ = lean_ctor_get(v_a_4_, 0);
lean_inc(v_pos_7_);
lean_dec_ref_known(v_a_4_, 1);
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v_pos_7_);
return v___x_8_;
}
case 1:
{
lean_object* v_pos_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_18_; 
v_pos_9_ = lean_ctor_get(v_a_4_, 0);
v_isSharedCheck_18_ = !lean_is_exclusive(v_a_4_);
if (v_isSharedCheck_18_ == 0)
{
v___x_11_ = v_a_4_;
v_isShared_12_ = v_isSharedCheck_18_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_pos_9_);
lean_dec(v_a_4_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_18_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_13_; lean_object* v___x_15_; 
v___x_13_ = lean_string_utf8_next_fast(v_s_1_, v_pos_9_);
lean_dec(v_pos_9_);
if (v_isShared_12_ == 0)
{
lean_ctor_set_tag(v___x_11_, 0);
lean_ctor_set(v___x_11_, 0, v___x_13_);
v___x_15_ = v___x_11_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_13_);
v___x_15_ = v_reuseFailAlloc_17_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
v_a_4_ = v___x_15_;
v_b_5_ = v___x_6_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_19_; lean_object* v_table_20_; lean_object* v_stackPos_21_; lean_object* v_needlePos_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_75_; 
v_needle_19_ = lean_ctor_get(v_a_4_, 0);
v_table_20_ = lean_ctor_get(v_a_4_, 1);
v_stackPos_21_ = lean_ctor_get(v_a_4_, 2);
v_needlePos_22_ = lean_ctor_get(v_a_4_, 3);
v_isSharedCheck_75_ = !lean_is_exclusive(v_a_4_);
if (v_isSharedCheck_75_ == 0)
{
v___x_24_ = v_a_4_;
v_isShared_25_ = v_isSharedCheck_75_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_needlePos_22_);
lean_inc(v_stackPos_21_);
lean_inc(v_table_20_);
lean_inc(v_needle_19_);
lean_dec(v_a_4_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_75_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v_str_26_; lean_object* v_startInclusive_27_; lean_object* v_endExclusive_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v_str_26_ = lean_ctor_get(v_needle_19_, 0);
v_startInclusive_27_ = lean_ctor_get(v_needle_19_, 1);
v_endExclusive_28_ = lean_ctor_get(v_needle_19_, 2);
v___x_29_ = lean_nat_sub(v_stackPos_21_, v_needlePos_22_);
v___x_30_ = lean_nat_sub(v_endExclusive_28_, v_startInclusive_27_);
v___x_31_ = lean_nat_add(v___x_29_, v___x_30_);
v___x_32_ = lean_nat_dec_le(v___x_31_, v___x_3_);
lean_dec(v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
lean_dec(v___x_30_);
lean_del_object(v___x_24_);
lean_dec(v_needlePos_22_);
lean_dec(v_stackPos_21_);
lean_dec_ref(v_table_20_);
lean_dec_ref(v_needle_19_);
v___x_33_ = lean_unsigned_to_nat(1u);
v___x_34_ = lean_nat_add(v___x_29_, v___x_33_);
lean_dec(v___x_29_);
v___x_35_ = lean_nat_dec_le(v___x_34_, v___x_3_);
lean_dec(v___x_34_);
if (v___x_35_ == 0)
{
lean_inc(v_b_5_);
return v_b_5_;
}
else
{
lean_object* v___x_36_; 
v___x_36_ = lean_box(3);
v_a_4_ = v___x_36_;
v_b_5_ = v___x_6_;
goto _start;
}
}
else
{
uint8_t v_stackByte_38_; lean_object* v___x_39_; uint8_t v_patByte_40_; uint8_t v___x_41_; 
lean_dec(v___x_29_);
lean_inc(v_stackPos_21_);
v_stackByte_38_ = lean_string_get_byte_fast(v_s_1_, v_stackPos_21_);
v___x_39_ = lean_nat_add(v_startInclusive_27_, v_needlePos_22_);
v_patByte_40_ = lean_string_get_byte_fast(v_str_26_, v___x_39_);
v___x_41_ = lean_uint8_dec_eq(v_stackByte_38_, v_patByte_40_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; uint8_t v_decide_43_; 
lean_dec(v___x_30_);
v___x_42_ = lean_unsigned_to_nat(0u);
v_decide_43_ = lean_nat_dec_eq(v_needlePos_22_, v___x_42_);
if (v_decide_43_ == 0)
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v_newNeedlePos_46_; uint8_t v___x_47_; 
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_sub(v_needlePos_22_, v___x_44_);
lean_dec(v_needlePos_22_);
v_newNeedlePos_46_ = lean_array_fget_borrowed(v_table_20_, v___x_45_);
lean_dec(v___x_45_);
v___x_47_ = lean_nat_dec_eq(v_newNeedlePos_46_, v___x_42_);
if (v___x_47_ == 0)
{
lean_object* v___x_49_; 
lean_inc(v_newNeedlePos_46_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v_newNeedlePos_46_);
v___x_49_ = v___x_24_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_needle_19_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_table_20_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v_stackPos_21_);
lean_ctor_set(v_reuseFailAlloc_51_, 3, v_newNeedlePos_46_);
v___x_49_ = v_reuseFailAlloc_51_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
v_a_4_ = v___x_49_;
v_b_5_ = v___x_6_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_52_; lean_object* v___x_54_; 
v_nextStackPos_52_ = l_String_Slice_posGE___redArg(v___x_2_, v_stackPos_21_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v___x_42_);
lean_ctor_set(v___x_24_, 2, v_nextStackPos_52_);
v___x_54_ = v___x_24_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_needle_19_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_table_20_);
lean_ctor_set(v_reuseFailAlloc_56_, 2, v_nextStackPos_52_);
lean_ctor_set(v_reuseFailAlloc_56_, 3, v___x_42_);
v___x_54_ = v_reuseFailAlloc_56_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
v_a_4_ = v___x_54_;
v_b_5_ = v___x_6_;
goto _start;
}
}
}
else
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v_nextStackPos_59_; lean_object* v___x_61_; 
lean_dec(v_needlePos_22_);
v___x_57_ = lean_unsigned_to_nat(1u);
v___x_58_ = lean_nat_add(v_stackPos_21_, v___x_57_);
lean_dec(v_stackPos_21_);
v_nextStackPos_59_ = l_String_Slice_posGE___redArg(v___x_2_, v___x_58_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v___x_42_);
lean_ctor_set(v___x_24_, 2, v_nextStackPos_59_);
v___x_61_ = v___x_24_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_needle_19_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_table_20_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_nextStackPos_59_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v___x_42_);
v___x_61_ = v_reuseFailAlloc_63_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
v_a_4_ = v___x_61_;
v_b_5_ = v___x_6_;
goto _start;
}
}
}
else
{
lean_object* v___x_64_; lean_object* v_nextStackPos_65_; lean_object* v_nextNeedlePos_66_; uint8_t v_decide_67_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v_nextStackPos_65_ = lean_nat_add(v_stackPos_21_, v___x_64_);
lean_dec(v_stackPos_21_);
v_nextNeedlePos_66_ = lean_nat_add(v_needlePos_22_, v___x_64_);
lean_dec(v_needlePos_22_);
v_decide_67_ = lean_nat_dec_eq(v_nextNeedlePos_66_, v___x_30_);
lean_dec(v___x_30_);
if (v_decide_67_ == 0)
{
lean_object* v___x_69_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 3, v_nextNeedlePos_66_);
lean_ctor_set(v___x_24_, 2, v_nextStackPos_65_);
v___x_69_ = v___x_24_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_needle_19_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_table_20_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v_nextStackPos_65_);
lean_ctor_set(v_reuseFailAlloc_71_, 3, v_nextNeedlePos_66_);
v___x_69_ = v_reuseFailAlloc_71_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
v_a_4_ = v___x_69_;
goto _start;
}
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
lean_del_object(v___x_24_);
lean_dec_ref(v_table_20_);
lean_dec_ref(v_needle_19_);
v___x_72_ = lean_nat_sub(v_nextStackPos_65_, v_nextNeedlePos_66_);
lean_dec(v_nextNeedlePos_66_);
lean_dec(v_nextStackPos_65_);
v___x_73_ = l_String_Slice_pos_x21(v___x_2_, v___x_72_);
lean_dec(v___x_72_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
return v___x_74_;
}
}
}
}
}
default: 
{
lean_inc(v_b_5_);
return v_b_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg___boxed(lean_object* v_s_76_, lean_object* v___x_77_, lean_object* v___x_78_, lean_object* v_a_79_, lean_object* v_b_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg(v_s_76_, v___x_77_, v___x_78_, v_a_79_, v_b_80_);
lean_dec(v_b_80_);
lean_dec(v___x_78_);
lean_dec_ref(v___x_77_);
lean_dec_ref(v_s_76_);
return v_res_81_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr(lean_object* v_s_84_, lean_object* v_pat_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___y_90_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_string_utf8_byte_size(v_s_84_);
lean_inc_ref(v_s_84_);
v___x_88_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_88_, 0, v_s_84_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
lean_ctor_set(v___x_88_, 2, v___x_87_);
v___x_95_ = lean_string_utf8_byte_size(v_pat_85_);
v___x_96_ = lean_nat_dec_eq(v___x_95_, v___x_86_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_97_, 0, v_pat_85_);
lean_ctor_set(v___x_97_, 1, v___x_86_);
lean_ctor_set(v___x_97_, 2, v___x_95_);
v___x_98_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_97_);
v___x_99_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
lean_ctor_set(v___x_99_, 2, v___x_86_);
lean_ctor_set(v___x_99_, 3, v___x_86_);
v___y_90_ = v___x_99_;
goto v___jp_89_;
}
else
{
lean_object* v___x_100_; 
lean_dec_ref(v_pat_85_);
v___x_100_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___closed__0));
v___y_90_ = v___x_100_;
goto v___jp_89_;
}
v___jp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_box(0);
v___x_92_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg(v_s_84_, v___x_88_, v___x_87_, v___y_90_, v___x_91_);
lean_dec_ref_known(v___x_88_, 3);
lean_dec_ref(v_s_84_);
if (lean_obj_tag(v___x_92_) == 0)
{
uint8_t v___x_93_; 
v___x_93_ = 0;
return v___x_93_;
}
else
{
uint8_t v___x_94_; 
lean_dec_ref_known(v___x_92_, 1);
v___x_94_ = 1;
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr___boxed(lean_object* v_s_101_, lean_object* v_pat_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr(v_s_101_, v_pat_102_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0(lean_object* v_s_105_, lean_object* v___x_106_, lean_object* v___x_107_, lean_object* v_inst_108_, lean_object* v_R_109_, lean_object* v_a_110_, lean_object* v_b_111_, lean_object* v_c_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___redArg(v_s_105_, v___x_106_, v___x_107_, v_a_110_, v_b_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0___boxed(lean_object* v_s_114_, lean_object* v___x_115_, lean_object* v___x_116_, lean_object* v_inst_117_, lean_object* v_R_118_, lean_object* v_a_119_, lean_object* v_b_120_, lean_object* v_c_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr_spec__0(v_s_114_, v___x_115_, v___x_116_, v_inst_117_, v_R_118_, v_a_119_, v_b_120_, v_c_121_);
lean_dec(v_b_120_);
lean_dec(v___x_116_);
lean_dec_ref(v___x_115_);
lean_dec_ref(v_s_114_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
if (lean_obj_tag(v_x_123_) == 0)
{
if (lean_obj_tag(v_x_124_) == 0)
{
uint8_t v___x_125_; 
v___x_125_ = 1;
return v___x_125_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
else
{
if (lean_obj_tag(v_x_124_) == 0)
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
else
{
lean_object* v_val_128_; lean_object* v_val_129_; uint8_t v___x_130_; 
v_val_128_ = lean_ctor_get(v_x_123_, 0);
v_val_129_ = lean_ctor_get(v_x_124_, 0);
v___x_130_ = lean_name_eq(v_val_128_, v_val_129_);
return v___x_130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0___boxed(lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0(v_x_131_, v_x_132_);
lean_dec(v_x_132_);
lean_dec(v_x_131_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___redArg(lean_object* v_cls_135_, lean_object* v_t_136_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_138_ = l_Lean_PostprocessTraces_TraceTree_cls_x3f(v_t_136_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v_cls_135_);
v___x_140_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_ofClass_spec__0(v___x_138_, v___x_139_);
lean_dec_ref_known(v___x_139_, 1);
lean_dec(v___x_138_);
v___x_141_ = lean_box(v___x_140_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___redArg___boxed(lean_object* v_cls_143_, lean_object* v_t_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_PostprocessTraces_ofClass___redArg(v_cls_143_, v_t_144_);
lean_dec_ref(v_t_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass(lean_object* v_cls_147_, lean_object* v_t_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Lean_PostprocessTraces_ofClass___redArg(v_cls_147_, v_t_148_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_ofClass___boxed(lean_object* v_cls_153_, lean_object* v_t_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_PostprocessTraces_ofClass(v_cls_153_, v_t_154_, v_a_155_, v_a_156_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec_ref(v_t_154_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___redArg(lean_object* v_pat_159_, lean_object* v_t_160_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_PostprocessTraces_TraceTree_cls_x3f(v_t_160_);
if (lean_obj_tag(v___x_167_) == 0)
{
goto v___jp_162_;
}
else
{
lean_object* v_val_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_179_; 
v_val_168_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_179_ == 0)
{
v___x_170_ = v___x_167_;
v_isShared_171_ = v_isSharedCheck_179_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_val_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_179_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
uint8_t v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_172_ = 1;
v___x_173_ = l_Lean_Name_toString(v_val_168_, v___x_172_);
lean_inc_ref(v_pat_159_);
v___x_174_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr(v___x_173_, v_pat_159_);
if (v___x_174_ == 0)
{
lean_del_object(v___x_170_);
goto v___jp_162_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_177_; 
lean_dec_ref(v_t_160_);
lean_dec_ref(v_pat_159_);
v___x_175_ = lean_box(v___x_174_);
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 0);
lean_ctor_set(v___x_170_, 0, v___x_175_);
v___x_177_ = v___x_170_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
v___jp_162_:
{
lean_object* v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = l_Lean_PostprocessTraces_TraceTree_headText(v_t_160_);
v___x_164_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_containsSubstr(v___x_163_, v_pat_159_);
v___x_165_ = lean_box(v___x_164_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___redArg___boxed(lean_object* v_pat_180_, lean_object* v_t_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_PostprocessTraces_containsString___redArg(v_pat_180_, v_t_181_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString(lean_object* v_pat_184_, lean_object* v_t_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_PostprocessTraces_containsString___redArg(v_pat_184_, v_t_185_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_containsString___boxed(lean_object* v_pat_190_, lean_object* v_t_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_PostprocessTraces_containsString(v_pat_190_, v_t_191_, v_a_192_, v_a_193_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
return v_res_195_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
if (lean_obj_tag(v_x_197_) == 0)
{
uint8_t v___x_198_; 
v___x_198_ = 1;
return v___x_198_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = 0;
return v___x_199_;
}
}
else
{
if (lean_obj_tag(v_x_197_) == 0)
{
uint8_t v___x_200_; 
v___x_200_ = 0;
return v___x_200_;
}
else
{
lean_object* v_val_201_; lean_object* v_val_202_; uint8_t v___x_203_; uint8_t v___x_204_; uint8_t v___x_205_; 
v_val_201_ = lean_ctor_get(v_x_196_, 0);
v_val_202_ = lean_ctor_get(v_x_197_, 0);
v___x_203_ = lean_unbox(v_val_201_);
v___x_204_ = lean_unbox(v_val_202_);
v___x_205_ = l_Lean_instBEqTraceResult_beq(v___x_203_, v___x_204_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0___boxed(lean_object* v_x_206_, lean_object* v_x_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v_x_206_, v_x_207_);
lean_dec(v_x_207_);
lean_dec(v_x_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___redArg(lean_object* v_t_213_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; uint8_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_215_ = l_Lean_PostprocessTraces_TraceTree_result_x3f(v_t_213_);
v___x_216_ = ((lean_object*)(l_Lean_PostprocessTraces_succeeded___redArg___closed__0));
v___x_217_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v___x_215_, v___x_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___redArg___boxed(lean_object* v_t_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_PostprocessTraces_succeeded___redArg(v_t_220_);
lean_dec_ref(v_t_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded(lean_object* v_t_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_PostprocessTraces_succeeded___redArg(v_t_223_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_succeeded___boxed(lean_object* v_t_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_PostprocessTraces_succeeded(v_t_228_, v_a_229_, v_a_230_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec_ref(v_t_228_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___redArg(lean_object* v_t_236_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_238_ = l_Lean_PostprocessTraces_TraceTree_result_x3f(v_t_236_);
v___x_239_ = ((lean_object*)(l_Lean_PostprocessTraces_failed___redArg___closed__0));
v___x_240_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v___x_238_, v___x_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(v___x_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___redArg___boxed(lean_object* v_t_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_PostprocessTraces_failed___redArg(v_t_243_);
lean_dec_ref(v_t_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed(lean_object* v_t_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lean_PostprocessTraces_failed___redArg(v_t_246_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_failed___boxed(lean_object* v_t_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_PostprocessTraces_failed(v_t_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec_ref(v_t_251_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___redArg(lean_object* v_t_259_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_261_ = l_Lean_PostprocessTraces_TraceTree_result_x3f(v_t_259_);
v___x_262_ = ((lean_object*)(l_Lean_PostprocessTraces_errored___redArg___closed__0));
v___x_263_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v___x_261_, v___x_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_box(v___x_263_);
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___redArg___boxed(lean_object* v_t_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_PostprocessTraces_errored___redArg(v_t_266_);
lean_dec_ref(v_t_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored(lean_object* v_t_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l_Lean_PostprocessTraces_errored___redArg(v_t_269_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_errored___boxed(lean_object* v_t_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_PostprocessTraces_errored(v_t_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec_ref(v_t_274_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___redArg(lean_object* v_t_279_){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = l_Lean_PostprocessTraces_TraceTree_result_x3f(v_t_279_);
v___x_282_ = ((lean_object*)(l_Lean_PostprocessTraces_failed___redArg___closed__0));
v___x_283_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_284_ = ((lean_object*)(l_Lean_PostprocessTraces_errored___redArg___closed__0));
v___x_285_ = l_Option_instBEq_beq___at___00Lean_PostprocessTraces_succeeded_spec__0(v___x_281_, v___x_284_);
lean_dec(v___x_281_);
v___x_286_ = lean_box(v___x_285_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec(v___x_281_);
v___x_288_ = lean_box(v___x_283_);
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___redArg___boxed(lean_object* v_t_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_PostprocessTraces_unsuccessful___redArg(v_t_290_);
lean_dec_ref(v_t_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful(lean_object* v_t_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lean_PostprocessTraces_unsuccessful___redArg(v_t_293_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_unsuccessful___boxed(lean_object* v_t_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_PostprocessTraces_unsuccessful(v_t_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec_ref(v_t_298_);
return v_res_302_;
}
}
static double _init_l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0(void){
_start:
{
lean_object* v___x_303_; double v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(1000u);
v___x_304_ = lean_float_of_nat(v___x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___redArg(double v_ms_305_, lean_object* v_t_306_){
_start:
{
double v___x_308_; double v___x_309_; double v___x_310_; uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_308_ = l_Lean_PostprocessTraces_TraceTree_elapsed(v_t_306_);
v___x_309_ = lean_float_once(&l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0, &l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0_once, _init_l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0);
v___x_310_ = lean_float_mul(v___x_308_, v___x_309_);
v___x_311_ = lean_float_decLe(v_ms_305_, v___x_310_);
v___x_312_ = lean_box(v___x_311_);
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___redArg___boxed(lean_object* v_ms_314_, lean_object* v_t_315_, lean_object* v_a_316_){
_start:
{
double v_ms_boxed_317_; lean_object* v_res_318_; 
v_ms_boxed_317_ = lean_unbox_float(v_ms_314_);
lean_dec_ref(v_ms_314_);
v_res_318_ = l_Lean_PostprocessTraces_minTimeMs___redArg(v_ms_boxed_317_, v_t_315_);
lean_dec_ref(v_t_315_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs(double v_ms_319_, lean_object* v_t_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lean_PostprocessTraces_minTimeMs___redArg(v_ms_319_, v_t_320_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minTimeMs___boxed(lean_object* v_ms_325_, lean_object* v_t_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
double v_ms_boxed_330_; lean_object* v_res_331_; 
v_ms_boxed_330_ = lean_unbox_float(v_ms_325_);
lean_dec_ref(v_ms_325_);
v_res_331_ = l_Lean_PostprocessTraces_minTimeMs(v_ms_boxed_330_, v_t_326_, v_a_327_, v_a_328_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec_ref(v_t_326_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___redArg(double v_ms_332_, lean_object* v_t_333_){
_start:
{
double v___x_335_; double v___x_336_; double v___x_337_; uint8_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_335_ = l_Lean_PostprocessTraces_TraceTree_selfElapsed(v_t_333_);
v___x_336_ = lean_float_once(&l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0, &l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0_once, _init_l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0);
v___x_337_ = lean_float_mul(v___x_335_, v___x_336_);
v___x_338_ = lean_float_decLe(v_ms_332_, v___x_337_);
v___x_339_ = lean_box(v___x_338_);
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___redArg___boxed(lean_object* v_ms_341_, lean_object* v_t_342_, lean_object* v_a_343_){
_start:
{
double v_ms_boxed_344_; lean_object* v_res_345_; 
v_ms_boxed_344_ = lean_unbox_float(v_ms_341_);
lean_dec_ref(v_ms_341_);
v_res_345_ = l_Lean_PostprocessTraces_minSelfTimeMs___redArg(v_ms_boxed_344_, v_t_342_);
lean_dec_ref(v_t_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs(double v_ms_346_, lean_object* v_t_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_PostprocessTraces_minSelfTimeMs___redArg(v_ms_346_, v_t_347_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_minSelfTimeMs___boxed(lean_object* v_ms_352_, lean_object* v_t_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
double v_ms_boxed_357_; lean_object* v_res_358_; 
v_ms_boxed_357_ = lean_unbox_float(v_ms_352_);
lean_dec_ref(v_ms_352_);
v_res_358_ = l_Lean_PostprocessTraces_minSelfTimeMs(v_ms_boxed_357_, v_t_353_, v_a_354_, v_a_355_);
lean_dec(v_a_355_);
lean_dec_ref(v_a_354_);
lean_dec_ref(v_t_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0(lean_object* v_p_359_, lean_object* v_as_360_, size_t v_i_361_, size_t v_stop_362_, lean_object* v_b_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_a_368_; uint8_t v___x_372_; 
v___x_372_ = lean_usize_dec_eq(v_i_361_, v_stop_362_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_array_uget_borrowed(v_as_360_, v_i_361_);
lean_inc(v___x_373_);
lean_inc_ref(v_p_359_);
v___x_374_ = l_Lean_PostprocessTraces_TraceTree_filterSubtrees(v_p_359_, v___x_373_, v___y_364_, v___y_365_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
if (lean_obj_tag(v_a_375_) == 0)
{
v_a_368_ = v_b_363_;
goto v___jp_367_;
}
else
{
lean_object* v_val_376_; lean_object* v___x_377_; 
v_val_376_ = lean_ctor_get(v_a_375_, 0);
lean_inc(v_val_376_);
lean_dec_ref_known(v_a_375_, 1);
v___x_377_ = lean_array_push(v_b_363_, v_val_376_);
v_a_368_ = v___x_377_;
goto v___jp_367_;
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec_ref(v_b_363_);
lean_dec_ref(v_p_359_);
v_a_378_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_374_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
else
{
lean_object* v___x_386_; 
lean_dec_ref(v_p_359_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v_b_363_);
return v___x_386_;
}
v___jp_367_:
{
size_t v___x_369_; size_t v___x_370_; 
v___x_369_ = ((size_t)1ULL);
v___x_370_ = lean_usize_add(v_i_361_, v___x_369_);
v_i_361_ = v___x_370_;
v_b_363_ = v_a_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0___boxed(lean_object* v_p_387_, lean_object* v_as_388_, lean_object* v_i_389_, lean_object* v_stop_390_, lean_object* v_b_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
size_t v_i_boxed_395_; size_t v_stop_boxed_396_; lean_object* v_res_397_; 
v_i_boxed_395_ = lean_unbox_usize(v_i_389_);
lean_dec(v_i_389_);
v_stop_boxed_396_ = lean_unbox_usize(v_stop_390_);
lean_dec(v_stop_390_);
v_res_397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0(v_p_387_, v_as_388_, v_i_boxed_395_, v_stop_boxed_396_, v_b_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec_ref(v_as_388_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0(lean_object* v_p_400_, lean_object* v_as_401_, lean_object* v_start_402_, lean_object* v_stop_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___closed__0));
v___x_408_ = lean_nat_dec_lt(v_start_402_, v_stop_403_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec_ref(v_p_400_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
return v___x_409_;
}
else
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_array_get_size(v_as_401_);
v___x_411_ = lean_nat_dec_le(v_stop_403_, v___x_410_);
if (v___x_411_ == 0)
{
uint8_t v___x_412_; 
v___x_412_ = lean_nat_dec_lt(v_start_402_, v___x_410_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_dec_ref(v_p_400_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_407_);
return v___x_413_;
}
else
{
size_t v___x_414_; size_t v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_usize_of_nat(v_start_402_);
v___x_415_ = lean_usize_of_nat(v___x_410_);
v___x_416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0(v_p_400_, v_as_401_, v___x_414_, v___x_415_, v___x_407_, v___y_404_, v___y_405_);
return v___x_416_;
}
}
else
{
size_t v___x_417_; size_t v___x_418_; lean_object* v___x_419_; 
v___x_417_ = lean_usize_of_nat(v_start_402_);
v___x_418_ = lean_usize_of_nat(v_stop_403_);
v___x_419_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0_spec__0(v_p_400_, v_as_401_, v___x_417_, v___x_418_, v___x_407_, v___y_404_, v___y_405_);
return v___x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___boxed(lean_object* v_p_420_, lean_object* v_as_421_, lean_object* v_start_422_, lean_object* v_stop_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0(v_p_420_, v_as_421_, v_start_422_, v_stop_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v_stop_423_);
lean_dec(v_start_422_);
lean_dec_ref(v_as_421_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_filterSubtrees(lean_object* v_p_428_, lean_object* v_roots_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_unsigned_to_nat(0u);
v___x_434_ = lean_array_get_size(v_roots_429_);
v___x_435_ = l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0(v_p_428_, v_roots_429_, v___x_433_, v___x_434_, v_a_430_, v_a_431_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_filterSubtrees___boxed(lean_object* v_p_436_, lean_object* v_roots_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_PostprocessTraces_filterSubtrees(v_p_436_, v_roots_437_, v_a_438_, v_a_439_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec_ref(v_roots_437_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0(lean_object* v_p_442_, lean_object* v_as_443_, size_t v_i_444_, size_t v_stop_445_, lean_object* v_b_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
uint8_t v___x_450_; 
v___x_450_ = lean_usize_dec_eq(v_i_444_, v_stop_445_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_array_uget_borrowed(v_as_443_, v_i_444_);
lean_inc(v___x_451_);
lean_inc_ref(v_p_442_);
v___x_452_ = l_Lean_PostprocessTraces_TraceTree_collectSubtrees(v_p_442_, v___x_451_, v_b_446_, v___y_447_, v___y_448_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; size_t v___x_454_; size_t v___x_455_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_452_, 1);
v___x_454_ = ((size_t)1ULL);
v___x_455_ = lean_usize_add(v_i_444_, v___x_454_);
v_i_444_ = v___x_455_;
v_b_446_ = v_a_453_;
goto _start;
}
else
{
lean_dec_ref(v_p_442_);
return v___x_452_;
}
}
else
{
lean_object* v___x_457_; 
lean_dec_ref(v_p_442_);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v_b_446_);
return v___x_457_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0___boxed(lean_object* v_p_458_, lean_object* v_as_459_, lean_object* v_i_460_, lean_object* v_stop_461_, lean_object* v_b_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
size_t v_i_boxed_466_; size_t v_stop_boxed_467_; lean_object* v_res_468_; 
v_i_boxed_466_ = lean_unbox_usize(v_i_460_);
lean_dec(v_i_460_);
v_stop_boxed_467_ = lean_unbox_usize(v_stop_461_);
lean_dec(v_stop_461_);
v_res_468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0(v_p_458_, v_as_459_, v_i_boxed_466_, v_stop_boxed_467_, v_b_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec_ref(v_as_459_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_hoist(lean_object* v_p_469_, lean_object* v_roots_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_PostprocessTraces_filterSubtrees_spec__0___closed__0));
v___x_476_ = lean_array_get_size(v_roots_470_);
v___x_477_ = lean_nat_dec_lt(v___x_474_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_dec_ref(v_p_469_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_475_);
return v___x_478_;
}
else
{
uint8_t v___x_479_; 
v___x_479_ = lean_nat_dec_le(v___x_476_, v___x_476_);
if (v___x_479_ == 0)
{
if (v___x_477_ == 0)
{
lean_object* v___x_480_; 
lean_dec_ref(v_p_469_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_475_);
return v___x_480_;
}
else
{
size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((size_t)0ULL);
v___x_482_ = lean_usize_of_nat(v___x_476_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0(v_p_469_, v_roots_470_, v___x_481_, v___x_482_, v___x_475_, v_a_471_, v_a_472_);
return v___x_483_;
}
}
else
{
size_t v___x_484_; size_t v___x_485_; lean_object* v___x_486_; 
v___x_484_ = ((size_t)0ULL);
v___x_485_ = lean_usize_of_nat(v___x_476_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PostprocessTraces_hoist_spec__0(v_p_469_, v_roots_470_, v___x_484_, v___x_485_, v___x_475_, v_a_471_, v_a_472_);
return v___x_486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_hoist___boxed(lean_object* v_p_487_, lean_object* v_roots_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lean_PostprocessTraces_hoist(v_p_487_, v_roots_488_, v_a_489_, v_a_490_);
lean_dec(v_a_490_);
lean_dec_ref(v_a_489_);
lean_dec_ref(v_roots_488_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0(uint8_t v_a_493_, lean_object* v_x_494_){
_start:
{
lean_object* v_cls_495_; lean_object* v_result_x3f_496_; double v_startTime_497_; double v_stopTime_498_; lean_object* v_tag_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
v_cls_495_ = lean_ctor_get(v_x_494_, 0);
v_result_x3f_496_ = lean_ctor_get(v_x_494_, 1);
v_startTime_497_ = lean_ctor_get_float(v_x_494_, sizeof(void*)*3);
v_stopTime_498_ = lean_ctor_get_float(v_x_494_, sizeof(void*)*3 + 8);
v_tag_499_ = lean_ctor_get(v_x_494_, 2);
v_isSharedCheck_506_ = !lean_is_exclusive(v_x_494_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v_x_494_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_tag_499_);
lean_inc(v_result_x3f_496_);
lean_inc(v_cls_495_);
lean_dec(v_x_494_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_cls_495_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_result_x3f_496_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_tag_499_);
lean_ctor_set_float(v_reuseFailAlloc_505_, sizeof(void*)*3, v_startTime_497_);
lean_ctor_set_float(v_reuseFailAlloc_505_, sizeof(void*)*3 + 8, v_stopTime_498_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_ctor_set_uint8(v___x_504_, sizeof(void*)*3 + 16, v_a_493_);
return v___x_504_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0___boxed(lean_object* v_a_507_, lean_object* v_x_508_){
_start:
{
uint8_t v_a_941__boxed_509_; lean_object* v_res_510_; 
v_a_941__boxed_509_ = lean_unbox(v_a_507_);
v_res_510_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0(v_a_941__boxed_509_, v_x_508_);
return v_res_510_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2(lean_object* v_as_511_, size_t v_i_512_, size_t v_stop_513_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_usize_dec_eq(v_i_512_, v_stop_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v_snd_516_; uint8_t v___x_517_; 
v___x_515_ = lean_array_uget_borrowed(v_as_511_, v_i_512_);
v_snd_516_ = lean_ctor_get(v___x_515_, 1);
v___x_517_ = lean_unbox(v_snd_516_);
if (v___x_517_ == 0)
{
size_t v___x_518_; size_t v___x_519_; 
v___x_518_ = ((size_t)1ULL);
v___x_519_ = lean_usize_add(v_i_512_, v___x_518_);
v_i_512_ = v___x_519_;
goto _start;
}
else
{
uint8_t v___x_521_; 
v___x_521_ = 1;
return v___x_521_;
}
}
else
{
uint8_t v___x_522_; 
v___x_522_ = 0;
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2___boxed(lean_object* v_as_523_, lean_object* v_i_524_, lean_object* v_stop_525_){
_start:
{
size_t v_i_boxed_526_; size_t v_stop_boxed_527_; uint8_t v_res_528_; lean_object* v_r_529_; 
v_i_boxed_526_ = lean_unbox_usize(v_i_524_);
lean_dec(v_i_524_);
v_stop_boxed_527_ = lean_unbox_usize(v_stop_525_);
lean_dec(v_stop_525_);
v_res_528_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2(v_as_523_, v_i_boxed_526_, v_stop_boxed_527_);
lean_dec_ref(v_as_523_);
v_r_529_ = lean_box(v_res_528_);
return v_r_529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1(size_t v_sz_530_, size_t v_i_531_, lean_object* v_bs_532_){
_start:
{
uint8_t v___x_533_; 
v___x_533_ = lean_usize_dec_lt(v_i_531_, v_sz_530_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
v___x_534_ = l_unsafeCast___redArg(v_bs_532_);
lean_dec_ref(v_bs_532_);
return v___x_534_;
}
else
{
lean_object* v_v_535_; lean_object* v___x_536_; lean_object* v_fst_537_; lean_object* v___x_538_; lean_object* v_bs_x27_539_; size_t v___x_540_; size_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_v_535_ = lean_array_uget_borrowed(v_bs_532_, v_i_531_);
v___x_536_ = l_unsafeCast___redArg(v_v_535_);
v_fst_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_fst_537_);
lean_dec(v___x_536_);
v___x_538_ = lean_unsigned_to_nat(0u);
v_bs_x27_539_ = lean_array_uset(v_bs_532_, v_i_531_, v___x_538_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_531_, v___x_540_);
v___x_542_ = l_unsafeCast___redArg(v_fst_537_);
lean_dec(v_fst_537_);
v___x_543_ = lean_array_uset(v_bs_x27_539_, v_i_531_, v___x_542_);
v_i_531_ = v___x_541_;
v_bs_532_ = v___x_543_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1___boxed(lean_object* v_sz_545_, lean_object* v_i_546_, lean_object* v_bs_547_){
_start:
{
size_t v_sz_boxed_548_; size_t v_i_boxed_549_; lean_object* v_res_550_; 
v_sz_boxed_548_ = lean_unbox_usize(v_sz_545_);
lean_dec(v_sz_545_);
v_i_boxed_549_ = lean_unbox_usize(v_i_546_);
lean_dec(v_i_546_);
v_res_550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1(v_sz_boxed_548_, v_i_boxed_549_, v_bs_547_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0___boxed(lean_object* v_p_553_, lean_object* v_sz_554_, lean_object* v_i_555_, lean_object* v_bs_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
size_t v_sz_boxed_560_; size_t v_i_boxed_561_; lean_object* v_res_562_; 
v_sz_boxed_560_ = lean_unbox_usize(v_sz_554_);
lean_dec(v_sz_554_);
v_i_boxed_561_ = lean_unbox_usize(v_i_555_);
lean_dec(v_i_555_);
v_res_562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0(v_p_553_, v_sz_boxed_560_, v_i_boxed_561_, v_bs_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go(lean_object* v_p_563_, lean_object* v_t_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v___x_568_; 
lean_inc_ref(v_p_563_);
lean_inc(v_a_566_);
lean_inc_ref(v_a_565_);
lean_inc_ref(v_t_564_);
v___x_568_ = lean_apply_4(v_p_563_, v_t_564_, v_a_565_, v_a_566_, lean_box(0));
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_622_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_622_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_622_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_622_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; 
v___x_573_ = lean_unbox(v_a_569_);
if (v___x_573_ == 0)
{
lean_object* v___f_574_; lean_object* v___x_575_; size_t v_sz_576_; size_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_922__overap_582_; lean_object* v___x_583_; 
lean_del_object(v___x_571_);
v___f_574_ = lean_alloc_closure((void*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___lam__0___boxed), 2, 1);
lean_closure_set(v___f_574_, 0, v_a_569_);
v___x_575_ = l_Lean_PostprocessTraces_TraceTree_children(v_t_564_);
v_sz_576_ = lean_array_size(v___x_575_);
v___x_577_ = ((size_t)0ULL);
v___x_578_ = l_unsafeCast___redArg(v___x_575_);
lean_dec_ref(v___x_575_);
v___x_579_ = lean_box_usize(v_sz_576_);
v___x_580_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed__const__1));
v___x_581_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0___boxed), 7, 4);
lean_closure_set(v___x_581_, 0, v_p_563_);
lean_closure_set(v___x_581_, 1, v___x_579_);
lean_closure_set(v___x_581_, 2, v___x_580_);
lean_closure_set(v___x_581_, 3, v___x_578_);
v___x_922__overap_582_ = l_unsafeCast___redArg(v___x_581_);
lean_dec_ref(v___x_581_);
lean_inc(v_a_566_);
lean_inc_ref(v_a_565_);
v___x_583_ = lean_apply_3(v___x_922__overap_582_, v_a_565_, v_a_566_, lean_box(0));
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_609_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_609_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_609_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_609_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
uint8_t v___y_589_; lean_object* v___y_590_; uint8_t v___y_597_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_array_get_size(v_a_584_);
v___x_606_ = lean_nat_dec_lt(v___x_604_, v___x_605_);
if (v___x_606_ == 0)
{
v___y_597_ = v___x_606_;
goto v___jp_596_;
}
else
{
if (v___x_606_ == 0)
{
v___y_597_ = v___x_606_;
goto v___jp_596_;
}
else
{
size_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = lean_usize_of_nat(v___x_605_);
v___x_608_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__2(v_a_584_, v___x_577_, v___x_607_);
v___y_597_ = v___x_608_;
goto v___jp_596_;
}
}
v___jp_588_:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_591_ = lean_box(v___y_589_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___y_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_592_);
v___x_594_ = v___x_586_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
v___jp_596_:
{
size_t v_sz_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_sz_598_ = lean_array_size(v_a_584_);
v___x_599_ = l_unsafeCast___redArg(v_a_584_);
lean_dec(v_a_584_);
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__1(v_sz_598_, v___x_577_, v___x_599_);
v___x_601_ = l_unsafeCast___redArg(v___x_600_);
lean_dec_ref(v___x_600_);
v___x_602_ = l_Lean_PostprocessTraces_TraceTree_withChildren(v_t_564_, v___x_601_);
if (v___y_597_ == 0)
{
lean_dec_ref(v___f_574_);
v___y_589_ = v___y_597_;
v___y_590_ = v___x_602_;
goto v___jp_588_;
}
else
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_PostprocessTraces_TraceTree_modifyData(v___x_602_, v___f_574_);
v___y_589_ = v___y_597_;
v___y_590_ = v___x_603_;
goto v___jp_588_;
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v___f_574_);
lean_dec_ref(v_t_564_);
v_a_610_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_583_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_583_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v___x_618_; lean_object* v___x_620_; 
lean_dec_ref(v_p_563_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_t_564_);
lean_ctor_set(v___x_618_, 1, v_a_569_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_618_);
v___x_620_ = v___x_571_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_dec_ref(v_t_564_);
lean_dec_ref(v_p_563_);
v_a_623_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_568_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_568_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go_spec__0(lean_object* v_p_631_, size_t v_sz_632_, size_t v_i_633_, lean_object* v_bs_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
uint8_t v___x_638_; 
v___x_638_ = lean_usize_dec_lt(v_i_633_, v_sz_632_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; 
lean_dec_ref(v_p_631_);
v___x_639_ = l_unsafeCast___redArg(v_bs_634_);
lean_dec_ref(v_bs_634_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
else
{
lean_object* v_v_641_; lean_object* v___x_642_; lean_object* v_bs_x27_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v_v_641_ = lean_array_uget(v_bs_634_, v_i_633_);
v___x_642_ = lean_unsigned_to_nat(0u);
v_bs_x27_643_ = lean_array_uset(v_bs_634_, v_i_633_, v___x_642_);
v___x_644_ = l_unsafeCast___redArg(v_v_641_);
lean_dec(v_v_641_);
lean_inc_ref(v_p_631_);
v___x_645_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go(v_p_631_, v___x_644_, v___y_635_, v___y_636_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; size_t v___x_647_; size_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_645_, 1);
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_add(v_i_633_, v___x_647_);
v___x_649_ = l_unsafeCast___redArg(v_a_646_);
lean_dec(v_a_646_);
v___x_650_ = lean_array_uset(v_bs_x27_643_, v_i_633_, v___x_649_);
v_i_633_ = v___x_648_;
v_bs_634_ = v___x_650_;
goto _start;
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
lean_dec_ref(v_bs_x27_643_);
lean_dec_ref(v_p_631_);
v_a_652_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_645_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_645_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed(lean_object* v_p_660_, lean_object* v_t_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go(v_p_660_, v_t_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0(lean_object* v_p_666_, size_t v_sz_667_, size_t v_i_668_, lean_object* v_bs_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
uint8_t v___x_673_; 
v___x_673_ = lean_usize_dec_lt(v_i_668_, v_sz_667_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec_ref(v_p_666_);
v___x_674_ = l_unsafeCast___redArg(v_bs_669_);
lean_dec_ref(v_bs_669_);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
else
{
lean_object* v_v_676_; lean_object* v___x_677_; lean_object* v_bs_x27_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v_v_676_ = lean_array_uget(v_bs_669_, v_i_668_);
v___x_677_ = lean_unsigned_to_nat(0u);
v_bs_x27_678_ = lean_array_uset(v_bs_669_, v_i_668_, v___x_677_);
v___x_679_ = l_unsafeCast___redArg(v_v_676_);
lean_dec(v_v_676_);
lean_inc_ref(v_p_666_);
v___x_680_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go(v_p_666_, v___x_679_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v_fst_682_; size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v_fst_682_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_fst_682_);
lean_dec(v_a_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_668_, v___x_683_);
v___x_685_ = l_unsafeCast___redArg(v_fst_682_);
lean_dec(v_fst_682_);
v___x_686_ = lean_array_uset(v_bs_x27_678_, v_i_668_, v___x_685_);
v_i_668_ = v___x_684_;
v_bs_669_ = v___x_686_;
goto _start;
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref(v_bs_x27_678_);
lean_dec_ref(v_p_666_);
v_a_688_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_680_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_680_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0___boxed(lean_object* v_p_696_, lean_object* v_sz_697_, lean_object* v_i_698_, lean_object* v_bs_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
size_t v_sz_boxed_703_; size_t v_i_boxed_704_; lean_object* v_res_705_; 
v_sz_boxed_703_ = lean_unbox_usize(v_sz_697_);
lean_dec(v_sz_697_);
v_i_boxed_704_ = lean_unbox_usize(v_i_698_);
lean_dec(v_i_698_);
v_res_705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0(v_p_696_, v_sz_boxed_703_, v_i_boxed_704_, v_bs_699_, v___y_700_, v___y_701_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_exposeSubtrees(lean_object* v_p_706_, lean_object* v_roots_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
size_t v_sz_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_361__overap_716_; lean_object* v___x_717_; 
v_sz_711_ = lean_array_size(v_roots_707_);
v___x_712_ = l_unsafeCast___redArg(v_roots_707_);
v___x_713_ = lean_box_usize(v_sz_711_);
v___x_714_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_exposeSubtrees_go___boxed__const__1));
v___x_715_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_exposeSubtrees_spec__0___boxed), 7, 4);
lean_closure_set(v___x_715_, 0, v_p_706_);
lean_closure_set(v___x_715_, 1, v___x_713_);
lean_closure_set(v___x_715_, 2, v___x_714_);
lean_closure_set(v___x_715_, 3, v___x_712_);
v___x_361__overap_716_ = l_unsafeCast___redArg(v___x_715_);
lean_dec_ref(v___x_715_);
lean_inc(v_a_709_);
lean_inc_ref(v_a_708_);
v___x_717_ = lean_apply_3(v___x_361__overap_716_, v_a_708_, v_a_709_, lean_box(0));
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_exposeSubtrees___boxed(lean_object* v_p_718_, lean_object* v_roots_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_PostprocessTraces_exposeSubtrees(v_p_718_, v_roots_719_, v_a_720_, v_a_721_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec_ref(v_roots_719_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2(lean_object* v_as_724_, size_t v_i_725_, size_t v_stop_726_, lean_object* v_b_727_){
_start:
{
uint8_t v___x_728_; 
v___x_728_ = lean_usize_dec_eq(v_i_725_, v_stop_726_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v_snd_730_; lean_object* v___x_731_; size_t v___x_732_; size_t v___x_733_; 
v___x_729_ = lean_array_uget_borrowed(v_as_724_, v_i_725_);
v_snd_730_ = lean_ctor_get(v___x_729_, 1);
v___x_731_ = lean_nat_add(v_b_727_, v_snd_730_);
lean_dec(v_b_727_);
v___x_732_ = ((size_t)1ULL);
v___x_733_ = lean_usize_add(v_i_725_, v___x_732_);
v_i_725_ = v___x_733_;
v_b_727_ = v___x_731_;
goto _start;
}
else
{
return v_b_727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2___boxed(lean_object* v_as_735_, lean_object* v_i_736_, lean_object* v_stop_737_, lean_object* v_b_738_){
_start:
{
size_t v_i_boxed_739_; size_t v_stop_boxed_740_; lean_object* v_res_741_; 
v_i_boxed_739_ = lean_unbox_usize(v_i_736_);
lean_dec(v_i_736_);
v_stop_boxed_740_ = lean_unbox_usize(v_stop_737_);
lean_dec(v_stop_737_);
v_res_741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2(v_as_735_, v_i_boxed_739_, v_stop_boxed_740_, v_b_738_);
lean_dec_ref(v_as_735_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1(size_t v_sz_742_, size_t v_i_743_, lean_object* v_bs_744_){
_start:
{
uint8_t v___x_745_; 
v___x_745_ = lean_usize_dec_lt(v_i_743_, v_sz_742_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = l_unsafeCast___redArg(v_bs_744_);
lean_dec_ref(v_bs_744_);
return v___x_746_;
}
else
{
lean_object* v_v_747_; lean_object* v___x_748_; lean_object* v_fst_749_; lean_object* v___x_750_; lean_object* v_bs_x27_751_; size_t v___x_752_; size_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_v_747_ = lean_array_uget_borrowed(v_bs_744_, v_i_743_);
v___x_748_ = l_unsafeCast___redArg(v_v_747_);
v_fst_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_fst_749_);
lean_dec(v___x_748_);
v___x_750_ = lean_unsigned_to_nat(0u);
v_bs_x27_751_ = lean_array_uset(v_bs_744_, v_i_743_, v___x_750_);
v___x_752_ = ((size_t)1ULL);
v___x_753_ = lean_usize_add(v_i_743_, v___x_752_);
v___x_754_ = l_unsafeCast___redArg(v_fst_749_);
lean_dec(v_fst_749_);
v___x_755_ = lean_array_uset(v_bs_x27_751_, v_i_743_, v___x_754_);
v_i_743_ = v___x_753_;
v_bs_744_ = v___x_755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1___boxed(lean_object* v_sz_757_, lean_object* v_i_758_, lean_object* v_bs_759_){
_start:
{
size_t v_sz_boxed_760_; size_t v_i_boxed_761_; lean_object* v_res_762_; 
v_sz_boxed_760_ = lean_unbox_usize(v_sz_757_);
lean_dec(v_sz_757_);
v_i_boxed_761_ = lean_unbox_usize(v_i_758_);
lean_dec(v_i_758_);
v_res_762_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1(v_sz_boxed_760_, v_i_boxed_761_, v_bs_759_);
return v_res_762_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__0));
v___x_765_ = l_Lean_stringToMessageData(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3(void){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__2));
v___x_768_ = l_Lean_stringToMessageData(v___x_767_);
return v___x_768_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__4));
v___x_771_ = l_Lean_stringToMessageData(v___x_770_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go(lean_object* v_a_774_){
_start:
{
if (lean_obj_tag(v_a_774_) == 0)
{
lean_object* v_data_775_; lean_object* v_msg_776_; lean_object* v_children_777_; lean_object* v_wrap_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_824_; 
v_data_775_ = lean_ctor_get(v_a_774_, 0);
v_msg_776_ = lean_ctor_get(v_a_774_, 1);
v_children_777_ = lean_ctor_get(v_a_774_, 2);
v_wrap_778_ = lean_ctor_get(v_a_774_, 3);
v_isSharedCheck_824_ = !lean_is_exclusive(v_a_774_);
if (v_isSharedCheck_824_ == 0)
{
v___x_780_ = v_a_774_;
v_isShared_781_ = v_isSharedCheck_824_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_wrap_778_);
lean_inc(v_children_777_);
lean_inc(v_msg_776_);
lean_inc(v_data_775_);
lean_dec(v_a_774_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_824_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
size_t v_sz_782_; size_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v_results_786_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___x_810_; lean_object* v___y_812_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v_sz_782_ = lean_array_size(v_children_777_);
v___x_783_ = ((size_t)0ULL);
v___x_784_ = l_unsafeCast___redArg(v_children_777_);
lean_dec_ref(v_children_777_);
v___x_785_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0(v_sz_782_, v___x_783_, v___x_784_);
v_results_786_ = l_unsafeCast___redArg(v___x_785_);
lean_dec_ref(v___x_785_);
v___x_810_ = lean_unsigned_to_nat(1u);
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_817_ = lean_array_get_size(v_results_786_);
v___x_818_ = lean_nat_dec_lt(v___x_816_, v___x_817_);
if (v___x_818_ == 0)
{
v___y_812_ = v___x_810_;
goto v___jp_811_;
}
else
{
uint8_t v___x_819_; 
v___x_819_ = lean_nat_dec_le(v___x_817_, v___x_817_);
if (v___x_819_ == 0)
{
if (v___x_818_ == 0)
{
v___y_812_ = v___x_810_;
goto v___jp_811_;
}
else
{
size_t v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_usize_of_nat(v___x_817_);
v___x_821_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2(v_results_786_, v___x_783_, v___x_820_, v___x_810_);
v___y_812_ = v___x_821_;
goto v___jp_811_;
}
}
else
{
size_t v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_usize_of_nat(v___x_817_);
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__2(v_results_786_, v___x_783_, v___x_822_, v___x_810_);
v___y_812_ = v___x_823_;
goto v___jp_811_;
}
}
v___jp_787_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; size_t v_sz_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_790_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__1);
v___x_791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_791_, 0, v_msg_776_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
lean_inc(v___y_788_);
v___x_792_ = l_Nat_reprFast(v___y_788_);
v___x_793_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
v___x_794_ = l_Lean_MessageData_ofFormat(v___x_793_);
v___x_795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_791_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__3);
v___x_797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
lean_inc_ref(v___y_789_);
v___x_798_ = l_Lean_stringToMessageData(v___y_789_);
v___x_799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5);
v___x_801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v_sz_802_ = lean_array_size(v_results_786_);
v___x_803_ = l_unsafeCast___redArg(v_results_786_);
lean_dec(v_results_786_);
v___x_804_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__1(v_sz_802_, v___x_783_, v___x_803_);
v___x_805_ = l_unsafeCast___redArg(v___x_804_);
lean_dec_ref(v___x_804_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 2, v___x_805_);
lean_ctor_set(v___x_780_, 1, v___x_801_);
v___x_807_ = v___x_780_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_data_775_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_809_, 3, v_wrap_778_);
v___x_807_ = v_reuseFailAlloc_809_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___y_788_);
return v___x_808_;
}
}
v___jp_811_:
{
uint8_t v___x_813_; 
v___x_813_ = lean_nat_dec_eq(v___y_812_, v___x_810_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; 
v___x_814_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__6));
v___y_788_ = v___y_812_;
v___y_789_ = v___x_814_;
goto v___jp_787_;
}
else
{
lean_object* v___x_815_; 
v___x_815_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__7));
v___y_788_ = v___y_812_;
v___y_789_ = v___x_815_;
goto v___jp_787_;
}
}
}
}
else
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(1u);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_a_774_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0(size_t v_sz_827_, size_t v_i_828_, lean_object* v_bs_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = lean_usize_dec_lt(v_i_828_, v_sz_827_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; 
v___x_831_ = l_unsafeCast___redArg(v_bs_829_);
lean_dec_ref(v_bs_829_);
return v___x_831_;
}
else
{
lean_object* v_v_832_; lean_object* v___x_833_; lean_object* v_bs_x27_834_; lean_object* v___x_835_; lean_object* v___x_836_; size_t v___x_837_; size_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v_v_832_ = lean_array_uget(v_bs_829_, v_i_828_);
v___x_833_ = lean_unsigned_to_nat(0u);
v_bs_x27_834_ = lean_array_uset(v_bs_829_, v_i_828_, v___x_833_);
v___x_835_ = l_unsafeCast___redArg(v_v_832_);
lean_dec(v_v_832_);
v___x_836_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go(v___x_835_);
v___x_837_ = ((size_t)1ULL);
v___x_838_ = lean_usize_add(v_i_828_, v___x_837_);
v___x_839_ = l_unsafeCast___redArg(v___x_836_);
lean_dec_ref(v___x_836_);
v___x_840_ = lean_array_uset(v_bs_x27_834_, v_i_828_, v___x_839_);
v_i_828_ = v___x_838_;
v_bs_829_ = v___x_840_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0___boxed(lean_object* v_sz_842_, lean_object* v_i_843_, lean_object* v_bs_844_){
_start:
{
size_t v_sz_boxed_845_; size_t v_i_boxed_846_; lean_object* v_res_847_; 
v_sz_boxed_845_ = lean_unbox_usize(v_sz_842_);
lean_dec(v_sz_842_);
v_i_boxed_846_ = lean_unbox_usize(v_i_843_);
lean_dec(v_i_843_);
v_res_847_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go_spec__0(v_sz_boxed_845_, v_i_boxed_846_, v_bs_844_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0(size_t v_sz_848_, size_t v_i_849_, lean_object* v_bs_850_){
_start:
{
uint8_t v___x_851_; 
v___x_851_ = lean_usize_dec_lt(v_i_849_, v_sz_848_);
if (v___x_851_ == 0)
{
lean_object* v___x_852_; 
v___x_852_ = l_unsafeCast___redArg(v_bs_850_);
lean_dec_ref(v_bs_850_);
return v___x_852_;
}
else
{
lean_object* v_v_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v_fst_856_; lean_object* v___x_857_; lean_object* v_bs_x27_858_; size_t v___x_859_; size_t v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_v_853_ = lean_array_uget_borrowed(v_bs_850_, v_i_849_);
v___x_854_ = l_unsafeCast___redArg(v_v_853_);
v___x_855_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go(v___x_854_);
v_fst_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_fst_856_);
lean_dec_ref(v___x_855_);
v___x_857_ = lean_unsigned_to_nat(0u);
v_bs_x27_858_ = lean_array_uset(v_bs_850_, v_i_849_, v___x_857_);
v___x_859_ = ((size_t)1ULL);
v___x_860_ = lean_usize_add(v_i_849_, v___x_859_);
v___x_861_ = l_unsafeCast___redArg(v_fst_856_);
lean_dec(v_fst_856_);
v___x_862_ = lean_array_uset(v_bs_x27_858_, v_i_849_, v___x_861_);
v_i_849_ = v___x_860_;
v_bs_850_ = v___x_862_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0___boxed(lean_object* v_sz_864_, lean_object* v_i_865_, lean_object* v_bs_866_){
_start:
{
size_t v_sz_boxed_867_; size_t v_i_boxed_868_; lean_object* v_res_869_; 
v_sz_boxed_867_ = lean_unbox_usize(v_sz_864_);
lean_dec(v_sz_864_);
v_i_boxed_868_ = lean_unbox_usize(v_i_865_);
lean_dec(v_i_865_);
v_res_869_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0(v_sz_boxed_867_, v_i_boxed_868_, v_bs_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___redArg(lean_object* v_roots_870_){
_start:
{
size_t v_sz_872_; size_t v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_sz_872_ = lean_array_size(v_roots_870_);
v___x_873_ = ((size_t)0ULL);
v___x_874_ = l_unsafeCast___redArg(v_roots_870_);
v___x_875_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PostprocessTraces_countNodes_spec__0(v_sz_872_, v___x_873_, v___x_874_);
v___x_876_ = l_unsafeCast___redArg(v___x_875_);
lean_dec_ref(v___x_875_);
v___x_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_877_, 0, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___redArg___boxed(lean_object* v_roots_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lean_PostprocessTraces_countNodes___redArg(v_roots_878_);
lean_dec_ref(v_roots_878_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes(lean_object* v_roots_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_PostprocessTraces_countNodes___redArg(v_roots_881_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_countNodes___boxed(lean_object* v_roots_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_PostprocessTraces_countNodes(v_roots_886_, v_a_887_, v_a_888_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec_ref(v_roots_886_);
return v_res_890_;
}
}
static double _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0(void){
_start:
{
lean_object* v___x_891_; double v___x_892_; 
v___x_891_ = lean_unsigned_to_nat(10u);
v___x_892_ = lean_float_of_nat(v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs(double v_ms_895_){
_start:
{
lean_object* v___x_896_; double v___x_897_; double v___x_898_; double v___x_899_; uint64_t v___x_900_; lean_object* v_tenths_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_896_ = lean_unsigned_to_nat(10u);
v___x_897_ = lean_float_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__0);
v___x_898_ = lean_float_mul(v_ms_895_, v___x_897_);
v___x_899_ = round(v___x_898_);
v___x_900_ = lean_float_to_uint64(v___x_899_);
v_tenths_901_ = lean_uint64_to_nat(v___x_900_);
v___x_902_ = lean_nat_div(v_tenths_901_, v___x_896_);
v___x_903_ = l_Nat_reprFast(v___x_902_);
v___x_904_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__1));
v___x_905_ = lean_string_append(v___x_903_, v___x_904_);
v___x_906_ = lean_nat_mod(v_tenths_901_, v___x_896_);
lean_dec(v_tenths_901_);
v___x_907_ = l_Nat_reprFast(v___x_906_);
v___x_908_ = lean_string_append(v___x_905_, v___x_907_);
lean_dec_ref(v___x_907_);
v___x_909_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___closed__2));
v___x_910_ = lean_string_append(v___x_908_, v___x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs___boxed(lean_object* v_ms_911_){
_start:
{
double v_ms_boxed_912_; lean_object* v_res_913_; 
v_ms_boxed_912_ = lean_unbox_float(v_ms_911_);
lean_dec_ref(v_ms_911_);
v_res_913_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs(v_ms_boxed_912_);
return v_res_913_;
}
}
static double _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0(void){
_start:
{
lean_object* v___x_914_; double v___x_915_; 
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_float_of_nat(v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = ((lean_object*)(l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__1));
v___x_918_ = l_Lean_stringToMessageData(v___x_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go(lean_object* v_a_919_){
_start:
{
if (lean_obj_tag(v_a_919_) == 0)
{
lean_object* v_data_920_; lean_object* v_msg_921_; lean_object* v_children_922_; lean_object* v_wrap_923_; lean_object* v___y_925_; double v_startTime_932_; double v___x_933_; uint8_t v___x_934_; 
v_data_920_ = lean_ctor_get(v_a_919_, 0);
lean_inc_ref(v_data_920_);
v_msg_921_ = lean_ctor_get(v_a_919_, 1);
v_children_922_ = lean_ctor_get(v_a_919_, 2);
lean_inc_ref(v_children_922_);
v_wrap_923_ = lean_ctor_get(v_a_919_, 3);
lean_inc_ref(v_wrap_923_);
v_startTime_932_ = lean_ctor_get_float(v_data_920_, sizeof(void*)*3);
v___x_933_ = lean_float_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__0);
v___x_934_ = lean_float_beq(v_startTime_932_, v___x_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___x_936_; double v___x_937_; double v___x_938_; double v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_935_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go___closed__2);
lean_inc_ref(v_msg_921_);
v___x_936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_936_, 0, v_msg_921_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = l_Lean_PostprocessTraces_TraceTree_selfElapsed(v_a_919_);
lean_dec_ref_known(v_a_919_, 4);
v___x_938_ = lean_float_once(&l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0, &l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0_once, _init_l_Lean_PostprocessTraces_minTimeMs___redArg___closed__0);
v___x_939_ = lean_float_mul(v___x_937_, v___x_938_);
v___x_940_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_formatMs(v___x_939_);
v___x_941_ = l_Lean_stringToMessageData(v___x_940_);
v___x_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_936_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_obj_once(&l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5, &l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5_once, _init_l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_countNodes_go___closed__5);
v___x_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___y_925_ = v___x_944_;
goto v___jp_924_;
}
else
{
lean_inc_ref(v_msg_921_);
lean_dec_ref_known(v_a_919_, 4);
v___y_925_ = v_msg_921_;
goto v___jp_924_;
}
v___jp_924_:
{
size_t v_sz_926_; size_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_sz_926_ = lean_array_size(v_children_922_);
v___x_927_ = ((size_t)0ULL);
v___x_928_ = l_unsafeCast___redArg(v_children_922_);
lean_dec_ref(v_children_922_);
v___x_929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0(v_sz_926_, v___x_927_, v___x_928_);
v___x_930_ = l_unsafeCast___redArg(v___x_929_);
lean_dec_ref(v___x_929_);
v___x_931_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_931_, 0, v_data_920_);
lean_ctor_set(v___x_931_, 1, v___y_925_);
lean_ctor_set(v___x_931_, 2, v___x_930_);
lean_ctor_set(v___x_931_, 3, v_wrap_923_);
return v___x_931_;
}
}
else
{
return v_a_919_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0(size_t v_sz_945_, size_t v_i_946_, lean_object* v_bs_947_){
_start:
{
uint8_t v___x_948_; 
v___x_948_ = lean_usize_dec_lt(v_i_946_, v_sz_945_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
v___x_949_ = l_unsafeCast___redArg(v_bs_947_);
lean_dec_ref(v_bs_947_);
return v___x_949_;
}
else
{
lean_object* v_v_950_; lean_object* v___x_951_; lean_object* v_bs_x27_952_; lean_object* v___x_953_; lean_object* v___x_954_; size_t v___x_955_; size_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_v_950_ = lean_array_uget(v_bs_947_, v_i_946_);
v___x_951_ = lean_unsigned_to_nat(0u);
v_bs_x27_952_ = lean_array_uset(v_bs_947_, v_i_946_, v___x_951_);
v___x_953_ = l_unsafeCast___redArg(v_v_950_);
lean_dec(v_v_950_);
v___x_954_ = l___private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go(v___x_953_);
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_add(v_i_946_, v___x_955_);
v___x_957_ = l_unsafeCast___redArg(v___x_954_);
lean_dec_ref(v___x_954_);
v___x_958_ = lean_array_uset(v_bs_x27_952_, v_i_946_, v___x_957_);
v_i_946_ = v___x_956_;
v_bs_947_ = v___x_958_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0___boxed(lean_object* v_sz_960_, lean_object* v_i_961_, lean_object* v_bs_962_){
_start:
{
size_t v_sz_boxed_963_; size_t v_i_boxed_964_; lean_object* v_res_965_; 
v_sz_boxed_963_ = lean_unbox_usize(v_sz_960_);
lean_dec(v_sz_960_);
v_i_boxed_964_ = lean_unbox_usize(v_i_961_);
lean_dec(v_i_961_);
v_res_965_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0(v_sz_boxed_963_, v_i_boxed_964_, v_bs_962_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___redArg(lean_object* v_roots_966_){
_start:
{
size_t v_sz_968_; size_t v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v_sz_968_ = lean_array_size(v_roots_966_);
v___x_969_ = ((size_t)0ULL);
v___x_970_ = l_unsafeCast___redArg(v_roots_966_);
v___x_971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PostprocessTraces_Postprocessors_0__Lean_PostprocessTraces_selfTime_go_spec__0(v_sz_968_, v___x_969_, v___x_970_);
v___x_972_ = l_unsafeCast___redArg(v___x_971_);
lean_dec_ref(v___x_971_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___redArg___boxed(lean_object* v_roots_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_PostprocessTraces_selfTime___redArg(v_roots_974_);
lean_dec_ref(v_roots_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime(lean_object* v_roots_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Lean_PostprocessTraces_selfTime___redArg(v_roots_977_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PostprocessTraces_selfTime___boxed(lean_object* v_roots_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_PostprocessTraces_selfTime(v_roots_982_, v_a_983_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec_ref(v_roots_982_);
return v_res_986_;
}
}
lean_object* runtime_initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PostprocessTraces_Postprocessors(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PostprocessTraces_Postprocessors(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PostprocessTraces_Basic(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PostprocessTraces_Postprocessors(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PostprocessTraces_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PostprocessTraces_Postprocessors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PostprocessTraces_Postprocessors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PostprocessTraces_Postprocessors(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Server.Completion.CompletionInfoSelection
// Imports: public import Lean.Server.Completion.SyntheticCompletion
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
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_size_x3f(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_tailPos_x3f(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Info_occursInOrOnBoundary(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Elab_Info_pos_x3f(lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_findSyntheticCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0;
static lean_once_cell_t l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_name_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
switch(lean_obj_tag(v_a_13_))
{
case 0:
{
if (lean_obj_tag(v_a_14_) == 0)
{
lean_object* v_termInfo_15_; lean_object* v_toElabInfo_16_; lean_object* v_termInfo_17_; lean_object* v_toElabInfo_18_; lean_object* v_expr_19_; lean_object* v_stx_20_; lean_object* v_expr_21_; lean_object* v_stx_22_; uint8_t v___x_23_; 
v_termInfo_15_ = lean_ctor_get(v_a_13_, 0);
lean_inc_ref(v_termInfo_15_);
lean_dec_ref_known(v_a_13_, 2);
v_toElabInfo_16_ = lean_ctor_get(v_termInfo_15_, 0);
lean_inc_ref(v_toElabInfo_16_);
v_termInfo_17_ = lean_ctor_get(v_a_14_, 0);
lean_inc_ref(v_termInfo_17_);
lean_dec_ref_known(v_a_14_, 2);
v_toElabInfo_18_ = lean_ctor_get(v_termInfo_17_, 0);
lean_inc_ref(v_toElabInfo_18_);
v_expr_19_ = lean_ctor_get(v_termInfo_15_, 3);
lean_inc_ref(v_expr_19_);
lean_dec_ref(v_termInfo_15_);
v_stx_20_ = lean_ctor_get(v_toElabInfo_16_, 1);
lean_inc(v_stx_20_);
lean_dec_ref(v_toElabInfo_16_);
v_expr_21_ = lean_ctor_get(v_termInfo_17_, 3);
lean_inc_ref(v_expr_21_);
lean_dec_ref(v_termInfo_17_);
v_stx_22_ = lean_ctor_get(v_toElabInfo_18_, 1);
lean_inc(v_stx_22_);
lean_dec_ref(v_toElabInfo_18_);
v___x_23_ = l_Lean_Syntax_eqWithInfo(v_stx_20_, v_stx_22_);
if (v___x_23_ == 0)
{
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = lean_expr_eqv(v_expr_19_, v_expr_21_);
lean_dec_ref(v_expr_21_);
lean_dec_ref(v_expr_19_);
return v___x_24_;
}
}
else
{
uint8_t v___x_25_; 
lean_dec_ref_known(v_a_13_, 2);
lean_dec_ref(v_a_14_);
v___x_25_ = 0;
return v___x_25_;
}
}
case 3:
{
if (lean_obj_tag(v_a_14_) == 3)
{
lean_object* v_stx_26_; lean_object* v_id_27_; lean_object* v_structName_28_; lean_object* v_stx_29_; lean_object* v_id_30_; lean_object* v_structName_31_; uint8_t v___y_33_; uint8_t v___x_35_; 
v_stx_26_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_26_);
v_id_27_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_27_);
v_structName_28_ = lean_ctor_get(v_a_13_, 3);
lean_inc(v_structName_28_);
lean_dec_ref_known(v_a_13_, 4);
v_stx_29_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_29_);
v_id_30_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_30_);
v_structName_31_ = lean_ctor_get(v_a_14_, 3);
lean_inc(v_structName_31_);
lean_dec_ref_known(v_a_14_, 4);
v___x_35_ = l_Lean_Syntax_eqWithInfo(v_stx_26_, v_stx_29_);
if (v___x_35_ == 0)
{
lean_dec(v_id_30_);
lean_dec(v_id_27_);
v___y_33_ = v___x_35_;
goto v___jp_32_;
}
else
{
uint8_t v___x_36_; 
v___x_36_ = l_Option_instBEq_beq___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq_spec__0(v_id_27_, v_id_30_);
lean_dec(v_id_30_);
lean_dec(v_id_27_);
v___y_33_ = v___x_36_;
goto v___jp_32_;
}
v___jp_32_:
{
if (v___y_33_ == 0)
{
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___y_33_;
}
else
{
uint8_t v___x_34_; 
v___x_34_ = lean_name_eq(v_structName_28_, v_structName_31_);
lean_dec(v_structName_31_);
lean_dec(v_structName_28_);
return v___x_34_;
}
}
}
else
{
uint8_t v___x_37_; 
lean_dec_ref_known(v_a_13_, 4);
lean_dec_ref(v_a_14_);
v___x_37_ = 0;
return v___x_37_;
}
}
case 4:
{
if (lean_obj_tag(v_a_14_) == 4)
{
lean_object* v_stx_38_; lean_object* v_stx_39_; uint8_t v___x_40_; 
v_stx_38_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_38_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_39_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_39_);
lean_dec_ref_known(v_a_14_, 1);
v___x_40_ = l_Lean_Syntax_eqWithInfo(v_stx_38_, v_stx_39_);
return v___x_40_;
}
else
{
uint8_t v___x_41_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_41_ = 0;
return v___x_41_;
}
}
case 5:
{
if (lean_obj_tag(v_a_14_) == 5)
{
lean_object* v_stx_42_; lean_object* v_stx_43_; uint8_t v___x_44_; 
v_stx_42_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_42_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_43_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_43_);
lean_dec_ref_known(v_a_14_, 1);
v___x_44_ = l_Lean_Syntax_eqWithInfo(v_stx_42_, v_stx_43_);
return v___x_44_;
}
else
{
uint8_t v___x_45_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_45_ = 0;
return v___x_45_;
}
}
case 6:
{
if (lean_obj_tag(v_a_14_) == 6)
{
lean_object* v_stx_46_; lean_object* v_stx_47_; uint8_t v___x_48_; 
v_stx_46_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_46_);
lean_dec_ref_known(v_a_13_, 2);
v_stx_47_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_47_);
lean_dec_ref_known(v_a_14_, 2);
v___x_48_ = l_Lean_Syntax_eqWithInfo(v_stx_46_, v_stx_47_);
return v___x_48_;
}
else
{
uint8_t v___x_49_; 
lean_dec_ref_known(v_a_13_, 2);
lean_dec_ref(v_a_14_);
v___x_49_ = 0;
return v___x_49_;
}
}
case 7:
{
if (lean_obj_tag(v_a_14_) == 7)
{
lean_object* v_stx_50_; lean_object* v_stx_51_; uint8_t v___x_52_; 
v_stx_50_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_50_);
lean_dec_ref_known(v_a_13_, 3);
v_stx_51_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_51_);
lean_dec_ref_known(v_a_14_, 3);
v___x_52_ = l_Lean_Syntax_eqWithInfo(v_stx_50_, v_stx_51_);
return v___x_52_;
}
else
{
uint8_t v___x_53_; 
lean_dec_ref_known(v_a_13_, 3);
lean_dec_ref(v_a_14_);
v___x_53_ = 0;
return v___x_53_;
}
}
case 8:
{
if (lean_obj_tag(v_a_14_) == 8)
{
lean_object* v_stx_54_; lean_object* v_stx_55_; uint8_t v___x_56_; 
v_stx_54_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_54_);
lean_dec_ref_known(v_a_13_, 1);
v_stx_55_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_55_);
lean_dec_ref_known(v_a_14_, 1);
v___x_56_ = l_Lean_Syntax_eqWithInfo(v_stx_54_, v_stx_55_);
return v___x_56_;
}
else
{
uint8_t v___x_57_; 
lean_dec_ref_known(v_a_13_, 1);
lean_dec_ref(v_a_14_);
v___x_57_ = 0;
return v___x_57_;
}
}
default: 
{
if (lean_obj_tag(v_a_14_) == 1)
{
lean_object* v_stx_58_; lean_object* v_id_59_; lean_object* v_stx_60_; lean_object* v_id_61_; uint8_t v___x_62_; 
v_stx_58_ = lean_ctor_get(v_a_13_, 0);
lean_inc(v_stx_58_);
v_id_59_ = lean_ctor_get(v_a_13_, 1);
lean_inc(v_id_59_);
lean_dec_ref(v_a_13_);
v_stx_60_ = lean_ctor_get(v_a_14_, 0);
lean_inc(v_stx_60_);
v_id_61_ = lean_ctor_get(v_a_14_, 1);
lean_inc(v_id_61_);
lean_dec_ref_known(v_a_14_, 4);
v___x_62_ = l_Lean_Syntax_eqWithInfo(v_stx_58_, v_stx_60_);
if (v___x_62_ == 0)
{
lean_dec(v_id_61_);
lean_dec(v_id_59_);
return v___x_62_;
}
else
{
uint8_t v___x_63_; 
v___x_63_ = lean_name_eq(v_id_59_, v_id_61_);
lean_dec(v_id_61_);
lean_dec(v_id_59_);
return v___x_63_;
}
}
else
{
uint8_t v___x_64_; 
lean_dec_ref(v_a_14_);
lean_dec_ref(v_a_13_);
v___x_64_ = 0;
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq___boxed(lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
uint8_t v_res_67_; lean_object* v_r_68_; 
v_res_67_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_a_65_, v_a_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(lean_object* v_a_69_, lean_object* v_as_70_, size_t v_i_71_, size_t v_stop_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = lean_usize_dec_eq(v_i_71_, v_stop_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v_info_75_; lean_object* v_info_76_; uint8_t v___x_77_; 
v___x_74_ = lean_array_uget_borrowed(v_as_70_, v_i_71_);
v_info_75_ = lean_ctor_get(v___x_74_, 2);
v_info_76_ = lean_ctor_get(v_a_69_, 2);
lean_inc_ref(v_info_76_);
lean_inc_ref(v_info_75_);
v___x_77_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_eq(v_info_75_, v_info_76_);
if (v___x_77_ == 0)
{
size_t v___x_78_; size_t v___x_79_; 
v___x_78_ = ((size_t)1ULL);
v___x_79_ = lean_usize_add(v_i_71_, v___x_78_);
v_i_71_ = v___x_79_;
goto _start;
}
else
{
lean_dec_ref(v_a_69_);
return v___x_77_;
}
}
else
{
uint8_t v___x_81_; 
lean_dec_ref(v_a_69_);
v___x_81_ = 0;
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0___boxed(lean_object* v_a_82_, lean_object* v_as_83_, lean_object* v_i_84_, lean_object* v_stop_85_){
_start:
{
size_t v_i_boxed_86_; size_t v_stop_boxed_87_; uint8_t v_res_88_; lean_object* v_r_89_; 
v_i_boxed_86_ = lean_unbox_usize(v_i_84_);
lean_dec(v_i_84_);
v_stop_boxed_87_ = lean_unbox_usize(v_stop_85_);
lean_dec(v_stop_85_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_82_, v_as_83_, v_i_boxed_86_, v_stop_boxed_87_);
lean_dec_ref(v_as_83_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(lean_object* v_as_90_, size_t v_sz_91_, size_t v_i_92_, lean_object* v_b_93_){
_start:
{
lean_object* v_a_95_; uint8_t v___x_99_; 
v___x_99_ = lean_usize_dec_lt(v_i_92_, v_sz_91_);
if (v___x_99_ == 0)
{
return v_b_93_;
}
else
{
lean_object* v_a_100_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_a_100_ = lean_array_uget_borrowed(v_as_90_, v_i_92_);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = lean_array_get_size(v_b_93_);
v___x_105_ = lean_nat_dec_lt(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
goto v___jp_101_;
}
else
{
if (v___x_105_ == 0)
{
goto v___jp_101_;
}
else
{
size_t v___x_106_; size_t v___x_107_; uint8_t v___x_108_; 
v___x_106_ = ((size_t)0ULL);
v___x_107_ = lean_usize_of_nat(v___x_104_);
lean_inc(v_a_100_);
v___x_108_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__0(v_a_100_, v_b_93_, v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
goto v___jp_101_;
}
else
{
v_a_95_ = v_b_93_;
goto v___jp_94_;
}
}
}
v___jp_101_:
{
lean_object* v___x_102_; 
lean_inc(v_a_100_);
v___x_102_ = lean_array_push(v_b_93_, v_a_100_);
v_a_95_ = v___x_102_;
goto v___jp_94_;
}
}
v___jp_94_:
{
size_t v___x_96_; size_t v___x_97_; 
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_92_, v___x_96_);
v_i_92_ = v___x_97_;
v_b_93_ = v_a_95_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1___boxed(lean_object* v_as_109_, lean_object* v_sz_110_, lean_object* v_i_111_, lean_object* v_b_112_){
_start:
{
size_t v_sz_boxed_113_; size_t v_i_boxed_114_; lean_object* v_res_115_; 
v_sz_boxed_113_ = lean_unbox_usize(v_sz_110_);
lean_dec(v_sz_110_);
v_i_boxed_114_ = lean_unbox_usize(v_i_111_);
lean_dec(v_i_111_);
v_res_115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_as_109_, v_sz_boxed_113_, v_i_boxed_114_, v_b_112_);
lean_dec_ref(v_as_109_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(lean_object* v_infos_118_){
_start:
{
lean_object* v_deduplicatedInfos_119_; size_t v_sz_120_; size_t v___x_121_; lean_object* v___x_122_; 
v_deduplicatedInfos_119_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0));
v_sz_120_ = lean_array_size(v_infos_118_);
v___x_121_ = ((size_t)0ULL);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos_spec__1(v_infos_118_, v_sz_120_, v___x_121_, v_deduplicatedInfos_119_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___boxed(lean_object* v_infos_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_infos_123_);
lean_dec_ref(v_infos_123_);
return v_res_124_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(lean_object* v_hoverPos_125_, lean_object* v_i_126_){
_start:
{
if (lean_obj_tag(v_i_126_) == 5)
{
lean_object* v_stx_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_stx_139_ = lean_ctor_get(v_i_126_, 0);
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = l_Lean_Syntax_getArg(v_stx_139_, v___x_140_);
v___x_142_ = l_Lean_Syntax_isMissing(v___x_141_);
lean_dec(v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_130_;
}
else
{
lean_object* v___x_143_; 
lean_inc(v_stx_139_);
lean_dec_ref_known(v_i_126_, 1);
v___x_143_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_139_, v___x_142_);
lean_dec(v_stx_139_);
if (lean_obj_tag(v___x_143_) == 1)
{
lean_object* v_val_144_; uint8_t v___x_145_; uint8_t v___x_146_; 
v_val_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_val_144_);
lean_dec_ref_known(v___x_143_, 1);
v___x_145_ = 0;
v___x_146_ = l_Lean_Syntax_Range_contains(v_val_144_, v_hoverPos_125_, v___x_145_);
lean_dec(v_val_144_);
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
lean_dec(v___x_143_);
v___x_147_ = 0;
return v___x_147_;
}
}
}
else
{
goto v___jp_130_;
}
v___jp_127_:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_128_, 0, v_i_126_);
v___x_129_ = l_Lean_Elab_Info_occursInOrOnBoundary(v___x_128_, v_hoverPos_125_);
lean_dec_ref_known(v___x_128_, 1);
return v___x_129_;
}
v___jp_130_:
{
if (lean_obj_tag(v_i_126_) == 7)
{
lean_object* v_id_x3f_131_; 
v_id_x3f_131_ = lean_ctor_get(v_i_126_, 1);
if (lean_obj_tag(v_id_x3f_131_) == 0)
{
lean_object* v_stx_132_; uint8_t v___x_133_; lean_object* v___x_134_; 
v_stx_132_ = lean_ctor_get(v_i_126_, 0);
lean_inc(v_stx_132_);
lean_dec_ref_known(v_i_126_, 3);
v___x_133_ = 1;
v___x_134_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_132_, v___x_133_);
lean_dec(v_stx_132_);
if (lean_obj_tag(v___x_134_) == 1)
{
lean_object* v_val_135_; uint8_t v___x_136_; uint8_t v___x_137_; 
v_val_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_135_);
lean_dec_ref_known(v___x_134_, 1);
v___x_136_ = 0;
v___x_137_ = l_Lean_Syntax_Range_contains(v_val_135_, v_hoverPos_125_, v___x_136_);
lean_dec(v_val_135_);
return v___x_137_;
}
else
{
uint8_t v___x_138_; 
lean_dec(v___x_134_);
v___x_138_ = 0;
return v___x_138_;
}
}
else
{
goto v___jp_127_;
}
}
else
{
goto v___jp_127_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos___boxed(lean_object* v_hoverPos_148_, lean_object* v_i_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_148_, v_i_149_);
lean_dec(v_hoverPos_148_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(lean_object* v_msg_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_panic_fn_borrowed(v___x_153_, v_msg_152_);
return v___x_154_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__2));
v___x_159_ = lean_unsigned_to_nat(14u);
v___x_160_ = lean_unsigned_to_nat(22u);
v___x_161_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__1));
v___x_162_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__0));
v___x_163_ = l_mkPanicMessageWithDecl(v___x_162_, v___x_161_, v___x_160_, v___x_159_, v___x_158_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(lean_object* v_fileMap_164_, lean_object* v_hoverPos_165_, lean_object* v_hoverLine_166_, lean_object* v_ctx_167_, lean_object* v_info_168_, lean_object* v_best_169_){
_start:
{
if (lean_obj_tag(v_info_168_) == 8)
{
lean_object* v_i_170_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_184_; lean_object* v___y_185_; lean_object* v___y_193_; uint8_t v___x_198_; 
v_i_170_ = lean_ctor_get(v_info_168_, 0);
lean_inc_ref_n(v_i_170_, 2);
v___x_198_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_containsHoverPos(v_hoverPos_165_, v_i_170_);
if (v___x_198_ == 0)
{
lean_dec_ref_known(v_info_168_, 1);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
lean_dec_ref(v_fileMap_164_);
return v_best_169_;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_Elab_Info_pos_x3f(v_info_168_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_201_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_200_);
v___y_193_ = v___x_201_;
goto v___jp_192_;
}
else
{
lean_object* v_val_202_; 
v_val_202_ = lean_ctor_get(v___x_199_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v___x_199_, 1);
v___y_193_ = v_val_202_;
goto v___jp_192_;
}
}
v___jp_171_:
{
lean_object* v___x_175_; lean_object* v_line_176_; lean_object* v___x_177_; lean_object* v_line_178_; uint8_t v___x_179_; 
lean_inc_ref(v_fileMap_164_);
v___x_175_ = l_Lean_FileMap_toPosition(v_fileMap_164_, v___y_173_);
lean_dec(v___y_173_);
v_line_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_line_176_);
lean_dec_ref(v___x_175_);
v___x_177_ = l_Lean_FileMap_toPosition(v_fileMap_164_, v___y_172_);
lean_dec(v___y_172_);
v_line_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_line_178_);
lean_dec_ref(v___x_177_);
v___x_179_ = lean_nat_dec_eq(v_line_176_, v_hoverLine_166_);
if (v___x_179_ == 0)
{
lean_dec(v_line_178_);
lean_dec(v_line_176_);
lean_dec(v___y_174_);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
return v_best_169_;
}
else
{
uint8_t v___x_180_; 
v___x_180_ = lean_nat_dec_eq(v_line_176_, v_line_178_);
lean_dec(v_line_178_);
lean_dec(v_line_176_);
if (v___x_180_ == 0)
{
lean_dec(v___y_174_);
lean_dec_ref(v_i_170_);
lean_dec_ref(v_ctx_167_);
return v_best_169_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_181_, 0, v___y_174_);
lean_ctor_set(v___x_181_, 1, v_ctx_167_);
lean_ctor_set(v___x_181_, 2, v_i_170_);
v___x_182_ = lean_array_push(v_best_169_, v___x_181_);
return v___x_182_;
}
}
}
v___jp_183_:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_add(v_hoverPos_165_, v___x_186_);
v___x_188_ = lean_nat_dec_le(v___x_187_, v___y_185_);
lean_dec(v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(0);
v___y_172_ = v___y_185_;
v___y_173_ = v___y_184_;
v___y_174_ = v___x_189_;
goto v___jp_171_;
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_nat_sub(v_hoverPos_165_, v___y_184_);
v___x_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
v___y_172_ = v___y_185_;
v___y_173_ = v___y_184_;
v___y_174_ = v___x_191_;
goto v___jp_171_;
}
}
v___jp_192_:
{
lean_object* v___x_194_; 
v___x_194_ = l_Lean_Elab_Info_tailPos_x3f(v_info_168_);
lean_dec_ref_known(v_info_168_, 1);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3, &l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___closed__3);
v___x_196_ = l_panic___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go_spec__0(v___x_195_);
v___y_184_ = v___y_193_;
v___y_185_ = v___x_196_;
goto v___jp_183_;
}
else
{
lean_object* v_val_197_; 
v_val_197_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v___x_194_, 1);
v___y_184_ = v___y_193_;
v___y_185_ = v_val_197_;
goto v___jp_183_;
}
}
}
else
{
lean_dec_ref(v_info_168_);
lean_dec_ref(v_ctx_167_);
lean_dec_ref(v_fileMap_164_);
return v_best_169_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed(lean_object* v_fileMap_203_, lean_object* v_hoverPos_204_, lean_object* v_hoverLine_205_, lean_object* v_ctx_206_, lean_object* v_info_207_, lean_object* v_best_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go(v_fileMap_203_, v_hoverPos_204_, v_hoverLine_205_, v_ctx_206_, v_info_207_, v_best_208_);
lean_dec(v_hoverLine_205_);
lean_dec(v_hoverPos_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findCompletionInfosAt(lean_object* v_fileMap_210_, lean_object* v_hoverPos_211_, lean_object* v_cmdStx_212_, lean_object* v_infoTree_213_){
_start:
{
uint8_t v_isComplete_215_; lean_object* v_completionInfoCandidates_216_; lean_object* v___x_220_; lean_object* v_line_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v_completionInfoCandidates_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
lean_inc_ref_n(v_fileMap_210_, 2);
v___x_220_ = l_Lean_FileMap_toPosition(v_fileMap_210_, v_hoverPos_211_);
v_line_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_line_221_);
lean_dec_ref(v___x_220_);
lean_inc(v_hoverPos_211_);
v___x_222_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_findCompletionInfosAt_go___boxed), 6, 3);
lean_closure_set(v___x_222_, 0, v_fileMap_210_);
lean_closure_set(v___x_222_, 1, v_hoverPos_211_);
lean_closure_set(v___x_222_, 2, v_line_221_);
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos___closed__0));
lean_inc_ref(v_infoTree_213_);
v_completionInfoCandidates_225_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___x_222_, v___x_224_, v_infoTree_213_);
v___x_226_ = lean_array_get_size(v_completionInfoCandidates_225_);
v___x_227_ = lean_nat_dec_eq(v___x_226_, v___x_223_);
if (v___x_227_ == 0)
{
uint8_t v_isComplete_228_; 
lean_dec_ref(v_infoTree_213_);
lean_dec(v_cmdStx_212_);
lean_dec(v_hoverPos_211_);
lean_dec_ref(v_fileMap_210_);
v_isComplete_228_ = 1;
v_isComplete_215_ = v_isComplete_228_;
v_completionInfoCandidates_216_ = v_completionInfoCandidates_225_;
goto v___jp_214_;
}
else
{
lean_object* v_completionInfoCandidates_229_; uint8_t v_isComplete_230_; 
lean_dec(v_completionInfoCandidates_225_);
v_completionInfoCandidates_229_ = l_Lean_Server_Completion_findSyntheticCompletions(v_fileMap_210_, v_hoverPos_211_, v_cmdStx_212_, v_infoTree_213_);
v_isComplete_230_ = 0;
v_isComplete_215_ = v_isComplete_230_;
v_completionInfoCandidates_216_ = v_completionInfoCandidates_229_;
goto v___jp_214_;
}
v___jp_214_:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_filterDuplicateCompletionInfos(v_completionInfoCandidates_216_);
lean_dec_ref(v_completionInfoCandidates_216_);
v___x_218_ = lean_box(v_isComplete_215_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___lam__0(lean_object* v_x_231_){
_start:
{
lean_object* v_fst_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_247_; 
v_fst_232_ = lean_ctor_get(v_x_231_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_231_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_x_231_, 1);
lean_dec(v_unused_248_);
v___x_234_ = v_x_231_;
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_fst_232_);
lean_dec(v_x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_247_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_info_236_; uint8_t v___y_238_; 
v_info_236_ = lean_ctor_get(v_fst_232_, 2);
lean_inc_ref(v_info_236_);
lean_dec(v_fst_232_);
if (lean_obj_tag(v_info_236_) == 1)
{
uint8_t v___x_245_; 
v___x_245_ = 1;
v___y_238_ = v___x_245_;
goto v___jp_237_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 0;
v___y_238_ = v___x_246_;
goto v___jp_237_;
}
v___jp_237_:
{
lean_object* v___x_239_; lean_object* v_size_x3f_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_239_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_239_, 0, v_info_236_);
v_size_x3f_240_ = l_Lean_Elab_Info_size_x3f(v___x_239_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = lean_box(v___y_238_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v_size_x3f_240_);
lean_ctor_set(v___x_234_, 0, v___x_241_);
v___x_243_ = v___x_234_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_size_x3f_240_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
return v_x_249_;
}
else
{
lean_object* v_key_251_; lean_object* v_value_252_; lean_object* v_tail_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_key_251_ = lean_ctor_get(v_x_250_, 0);
v_value_252_ = lean_ctor_get(v_x_250_, 1);
v_tail_253_ = lean_ctor_get(v_x_250_, 2);
lean_inc(v_value_252_);
lean_inc(v_key_251_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v_key_251_);
lean_ctor_set(v___x_254_, 1, v_value_252_);
v___x_255_ = lean_array_push(v_x_249_, v___x_254_);
v_x_249_ = v___x_255_;
v_x_250_ = v_tail_253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3___boxed(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_x_257_, v_x_258_);
lean_dec(v_x_258_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(lean_object* v_as_260_, size_t v_i_261_, size_t v_stop_262_, lean_object* v_b_263_){
_start:
{
uint8_t v___x_264_; 
v___x_264_ = lean_usize_dec_eq(v_i_261_, v_stop_262_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___x_266_; size_t v___x_267_; size_t v___x_268_; 
v___x_265_ = lean_array_uget_borrowed(v_as_260_, v_i_261_);
v___x_266_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__3(v_b_263_, v___x_265_);
v___x_267_ = ((size_t)1ULL);
v___x_268_ = lean_usize_add(v_i_261_, v___x_267_);
v_i_261_ = v___x_268_;
v_b_263_ = v___x_266_;
goto _start;
}
else
{
return v_b_263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4___boxed(lean_object* v_as_270_, lean_object* v_i_271_, lean_object* v_stop_272_, lean_object* v_b_273_){
_start:
{
size_t v_i_boxed_274_; size_t v_stop_boxed_275_; lean_object* v_res_276_; 
v_i_boxed_274_ = lean_unbox_usize(v_i_271_);
lean_dec(v_i_271_);
v_stop_boxed_275_ = lean_unbox_usize(v_stop_272_);
lean_dec(v_stop_272_);
v_res_276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_as_270_, v_i_boxed_274_, v_stop_boxed_275_, v_b_273_);
lean_dec_ref(v_as_270_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(size_t v_sz_277_, size_t v_i_278_, lean_object* v_bs_279_){
_start:
{
uint8_t v___x_280_; 
v___x_280_ = lean_usize_dec_lt(v_i_278_, v_sz_277_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
v___x_281_ = l_unsafeCast___redArg(v_bs_279_);
lean_dec_ref(v_bs_279_);
return v___x_281_;
}
else
{
lean_object* v_v_282_; lean_object* v___x_283_; lean_object* v_snd_284_; lean_object* v___x_285_; lean_object* v_bs_x27_286_; size_t v___x_287_; size_t v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_v_282_ = lean_array_uget_borrowed(v_bs_279_, v_i_278_);
v___x_283_ = l_unsafeCast___redArg(v_v_282_);
v_snd_284_ = lean_ctor_get(v___x_283_, 1);
lean_inc(v_snd_284_);
lean_dec(v___x_283_);
v___x_285_ = lean_unsigned_to_nat(0u);
v_bs_x27_286_ = lean_array_uset(v_bs_279_, v_i_278_, v___x_285_);
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_add(v_i_278_, v___x_287_);
v___x_289_ = l_unsafeCast___redArg(v_snd_284_);
lean_dec(v_snd_284_);
v___x_290_ = lean_array_uset(v_bs_x27_286_, v_i_278_, v___x_289_);
v_i_278_ = v___x_288_;
v_bs_279_ = v___x_290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0___boxed(lean_object* v_sz_292_, lean_object* v_i_293_, lean_object* v_bs_294_){
_start:
{
size_t v_sz_boxed_295_; size_t v_i_boxed_296_; lean_object* v_res_297_; 
v_sz_boxed_295_ = lean_unbox_usize(v_sz_292_);
lean_dec(v_sz_292_);
v_i_boxed_296_ = lean_unbox_usize(v_i_293_);
lean_dec(v_i_293_);
v_res_297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_boxed_295_, v_i_boxed_296_, v_bs_294_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(lean_object* v_hi_298_, lean_object* v_pivot_299_, lean_object* v_as_300_, lean_object* v_i_301_, lean_object* v_k_302_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_lt(v_k_302_, v_hi_298_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec(v_k_302_);
v___x_314_ = lean_array_fswap(v_as_300_, v_i_301_, v_hi_298_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_i_301_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
return v___x_315_;
}
else
{
lean_object* v___x_316_; lean_object* v_fst_317_; lean_object* v_fst_318_; lean_object* v_fst_319_; lean_object* v_snd_320_; lean_object* v_fst_321_; lean_object* v_snd_322_; 
v___x_316_ = lean_array_fget_borrowed(v_as_300_, v_k_302_);
v_fst_317_ = lean_ctor_get(v___x_316_, 0);
v_fst_318_ = lean_ctor_get(v_pivot_299_, 0);
v_fst_319_ = lean_ctor_get(v_fst_317_, 0);
v_snd_320_ = lean_ctor_get(v_fst_317_, 1);
v_fst_321_ = lean_ctor_get(v_fst_318_, 0);
v_snd_322_ = lean_ctor_get(v_fst_318_, 1);
if (lean_obj_tag(v_snd_320_) == 0)
{
if (lean_obj_tag(v_snd_322_) == 1)
{
goto v___jp_303_;
}
else
{
goto v___jp_329_;
}
}
else
{
if (lean_obj_tag(v_snd_322_) == 0)
{
goto v___jp_307_;
}
else
{
goto v___jp_329_;
}
}
v___jp_323_:
{
if (lean_obj_tag(v_snd_320_) == 1)
{
if (lean_obj_tag(v_snd_322_) == 1)
{
lean_object* v_val_324_; lean_object* v_val_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v_val_324_ = lean_ctor_get(v_snd_320_, 0);
v_val_325_ = lean_ctor_get(v_snd_322_, 0);
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_add(v_val_324_, v___x_326_);
v___x_328_ = lean_nat_dec_le(v___x_327_, v_val_325_);
lean_dec(v___x_327_);
if (v___x_328_ == 0)
{
goto v___jp_303_;
}
else
{
goto v___jp_307_;
}
}
else
{
goto v___jp_303_;
}
}
else
{
goto v___jp_303_;
}
}
v___jp_329_:
{
uint8_t v___x_330_; 
v___x_330_ = lean_unbox(v_fst_319_);
if (v___x_330_ == 0)
{
uint8_t v___x_331_; 
v___x_331_ = lean_unbox(v_fst_321_);
if (v___x_331_ == 1)
{
goto v___jp_307_;
}
else
{
goto v___jp_323_;
}
}
else
{
uint8_t v___x_332_; 
v___x_332_ = lean_unbox(v_fst_321_);
if (v___x_332_ == 0)
{
goto v___jp_303_;
}
else
{
goto v___jp_323_;
}
}
}
}
v___jp_303_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_nat_add(v_k_302_, v___x_304_);
lean_dec(v_k_302_);
v_k_302_ = v___x_305_;
goto _start;
}
v___jp_307_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_308_ = lean_array_fswap(v_as_300_, v_i_301_, v_k_302_);
v___x_309_ = lean_unsigned_to_nat(1u);
v___x_310_ = lean_nat_add(v_i_301_, v___x_309_);
lean_dec(v_i_301_);
v___x_311_ = lean_nat_add(v_k_302_, v___x_309_);
lean_dec(v_k_302_);
v_as_300_ = v___x_308_;
v_i_301_ = v___x_310_;
v_k_302_ = v___x_311_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg___boxed(lean_object* v_hi_333_, lean_object* v_pivot_334_, lean_object* v_as_335_, lean_object* v_i_336_, lean_object* v_k_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_333_, v_pivot_334_, v_as_335_, v_i_336_, v_k_337_);
lean_dec_ref(v_pivot_334_);
lean_dec(v_hi_333_);
return v_res_338_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(uint8_t v___x_339_, lean_object* v_x_340_, lean_object* v_x_341_){
_start:
{
lean_object* v_fst_342_; lean_object* v_fst_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; lean_object* v_fst_346_; lean_object* v_snd_347_; 
v_fst_342_ = lean_ctor_get(v_x_340_, 0);
v_fst_343_ = lean_ctor_get(v_x_341_, 0);
v_fst_344_ = lean_ctor_get(v_fst_342_, 0);
v_snd_345_ = lean_ctor_get(v_fst_342_, 1);
v_fst_346_ = lean_ctor_get(v_fst_343_, 0);
v_snd_347_ = lean_ctor_get(v_fst_343_, 1);
if (lean_obj_tag(v_snd_345_) == 0)
{
if (lean_obj_tag(v_snd_347_) == 1)
{
uint8_t v___x_362_; 
v___x_362_ = 0;
return v___x_362_;
}
else
{
goto v___jp_356_;
}
}
else
{
if (lean_obj_tag(v_snd_347_) == 0)
{
return v___x_339_;
}
else
{
goto v___jp_356_;
}
}
v___jp_348_:
{
if (lean_obj_tag(v_snd_345_) == 1)
{
if (lean_obj_tag(v_snd_347_) == 1)
{
lean_object* v_val_349_; lean_object* v_val_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_val_349_ = lean_ctor_get(v_snd_345_, 0);
v_val_350_ = lean_ctor_get(v_snd_347_, 0);
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_add(v_val_349_, v___x_351_);
v___x_353_ = lean_nat_dec_le(v___x_352_, v_val_350_);
lean_dec(v___x_352_);
return v___x_353_;
}
else
{
uint8_t v___x_354_; 
v___x_354_ = 0;
return v___x_354_;
}
}
else
{
uint8_t v___x_355_; 
v___x_355_ = 0;
return v___x_355_;
}
}
v___jp_356_:
{
uint8_t v___x_357_; 
v___x_357_ = lean_unbox(v_fst_344_);
if (v___x_357_ == 0)
{
uint8_t v___x_358_; 
v___x_358_ = lean_unbox(v_fst_346_);
if (v___x_358_ == 1)
{
uint8_t v___x_359_; 
v___x_359_ = lean_unbox(v_fst_346_);
return v___x_359_;
}
else
{
goto v___jp_348_;
}
}
else
{
uint8_t v___x_360_; 
v___x_360_ = lean_unbox(v_fst_346_);
if (v___x_360_ == 0)
{
uint8_t v___x_361_; 
v___x_361_ = lean_unbox(v_fst_346_);
return v___x_361_;
}
else
{
goto v___jp_348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0___boxed(lean_object* v___x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
uint8_t v___x_2401__boxed_366_; uint8_t v_res_367_; lean_object* v_r_368_; 
v___x_2401__boxed_366_ = lean_unbox(v___x_363_);
v_res_367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_2401__boxed_366_, v_x_364_, v_x_365_);
lean_dec_ref(v_x_365_);
lean_dec_ref(v_x_364_);
v_r_368_ = lean_box(v_res_367_);
return v_r_368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(lean_object* v_n_369_, lean_object* v_as_370_, lean_object* v_lo_371_, lean_object* v_hi_372_){
_start:
{
lean_object* v___y_374_; uint8_t v___x_384_; 
v___x_384_ = lean_nat_dec_lt(v_lo_371_, v_hi_372_);
if (v___x_384_ == 0)
{
lean_dec(v_lo_371_);
return v_as_370_;
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_mid_387_; lean_object* v___y_389_; lean_object* v___y_395_; lean_object* v___x_400_; lean_object* v___x_401_; uint8_t v___x_402_; 
v___x_385_ = lean_nat_add(v_lo_371_, v_hi_372_);
v___x_386_ = lean_unsigned_to_nat(1u);
v_mid_387_ = lean_nat_shiftr(v___x_385_, v___x_386_);
lean_dec(v___x_385_);
v___x_400_ = lean_array_fget_borrowed(v_as_370_, v_mid_387_);
v___x_401_ = lean_array_fget_borrowed(v_as_370_, v_lo_371_);
v___x_402_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_384_, v___x_400_, v___x_401_);
if (v___x_402_ == 0)
{
v___y_395_ = v_as_370_;
goto v___jp_394_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_array_fswap(v_as_370_, v_lo_371_, v_mid_387_);
v___y_395_ = v___x_403_;
goto v___jp_394_;
}
v___jp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_390_ = lean_array_fget_borrowed(v___y_389_, v_mid_387_);
v___x_391_ = lean_array_fget_borrowed(v___y_389_, v_hi_372_);
v___x_392_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_384_, v___x_390_, v___x_391_);
if (v___x_392_ == 0)
{
lean_dec(v_mid_387_);
v___y_374_ = v___y_389_;
goto v___jp_373_;
}
else
{
lean_object* v___x_393_; 
v___x_393_ = lean_array_fswap(v___y_389_, v_mid_387_, v_hi_372_);
lean_dec(v_mid_387_);
v___y_374_ = v___x_393_;
goto v___jp_373_;
}
}
v___jp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_396_ = lean_array_fget_borrowed(v___y_395_, v_hi_372_);
v___x_397_ = lean_array_fget_borrowed(v___y_395_, v_lo_371_);
v___x_398_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___lam__0(v___x_384_, v___x_396_, v___x_397_);
if (v___x_398_ == 0)
{
v___y_389_ = v___y_395_;
goto v___jp_388_;
}
else
{
lean_object* v___x_399_; 
v___x_399_ = lean_array_fswap(v___y_395_, v_lo_371_, v_hi_372_);
v___y_389_ = v___x_399_;
goto v___jp_388_;
}
}
}
v___jp_373_:
{
lean_object* v_pivot_375_; lean_object* v___x_376_; lean_object* v_fst_377_; lean_object* v_snd_378_; uint8_t v___x_379_; 
v_pivot_375_ = lean_array_fget(v___y_374_, v_hi_372_);
lean_inc_n(v_lo_371_, 2);
v___x_376_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_372_, v_pivot_375_, v___y_374_, v_lo_371_, v_lo_371_);
lean_dec(v_pivot_375_);
v_fst_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_fst_377_);
v_snd_378_ = lean_ctor_get(v___x_376_, 1);
lean_inc(v_snd_378_);
lean_dec_ref(v___x_376_);
v___x_379_ = lean_nat_dec_le(v_hi_372_, v_fst_377_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_369_, v_snd_378_, v_lo_371_, v_fst_377_);
v___x_381_ = lean_unsigned_to_nat(1u);
v___x_382_ = lean_nat_add(v_fst_377_, v___x_381_);
lean_dec(v_fst_377_);
v_as_370_ = v___x_380_;
v_lo_371_ = v___x_382_;
goto _start;
}
else
{
lean_dec(v_fst_377_);
lean_dec(v_lo_371_);
return v_snd_378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg___boxed(lean_object* v_n_404_, lean_object* v_as_405_, lean_object* v_lo_406_, lean_object* v_hi_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_404_, v_as_405_, v_lo_406_, v_hi_407_);
lean_dec(v_hi_407_);
lean_dec(v_n_404_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(lean_object* v_x_409_, lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
return v_x_409_;
}
else
{
lean_object* v_key_411_; lean_object* v_value_412_; lean_object* v_tail_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_451_; 
v_key_411_ = lean_ctor_get(v_x_410_, 0);
v_value_412_ = lean_ctor_get(v_x_410_, 1);
v_tail_413_ = lean_ctor_get(v_x_410_, 2);
v_isSharedCheck_451_ = !lean_is_exclusive(v_x_410_);
if (v_isSharedCheck_451_ == 0)
{
v___x_415_ = v_x_410_;
v_isShared_416_ = v_isSharedCheck_451_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_tail_413_);
lean_inc(v_value_412_);
lean_inc(v_key_411_);
lean_dec(v_x_410_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_451_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v_fst_417_; lean_object* v_snd_418_; lean_object* v___x_419_; uint64_t v___y_421_; uint64_t v___y_422_; uint64_t v___y_442_; uint8_t v___x_448_; 
v_fst_417_ = lean_ctor_get(v_key_411_, 0);
v_snd_418_ = lean_ctor_get(v_key_411_, 1);
v___x_419_ = lean_array_get_size(v_x_409_);
v___x_448_ = lean_unbox(v_fst_417_);
if (v___x_448_ == 0)
{
uint64_t v___x_449_; 
v___x_449_ = 13ULL;
v___y_442_ = v___x_449_;
goto v___jp_441_;
}
else
{
uint64_t v___x_450_; 
v___x_450_ = 11ULL;
v___y_442_ = v___x_450_;
goto v___jp_441_;
}
v___jp_420_:
{
uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; uint64_t v_fold_426_; uint64_t v___x_427_; uint64_t v___x_428_; uint64_t v___x_429_; size_t v___x_430_; size_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
v___x_423_ = lean_uint64_mix_hash(v___y_421_, v___y_422_);
v___x_424_ = 32ULL;
v___x_425_ = lean_uint64_shift_right(v___x_423_, v___x_424_);
v_fold_426_ = lean_uint64_xor(v___x_423_, v___x_425_);
v___x_427_ = 16ULL;
v___x_428_ = lean_uint64_shift_right(v_fold_426_, v___x_427_);
v___x_429_ = lean_uint64_xor(v_fold_426_, v___x_428_);
v___x_430_ = lean_uint64_to_usize(v___x_429_);
v___x_431_ = lean_usize_of_nat(v___x_419_);
v___x_432_ = ((size_t)1ULL);
v___x_433_ = lean_usize_sub(v___x_431_, v___x_432_);
v___x_434_ = lean_usize_land(v___x_430_, v___x_433_);
v___x_435_ = lean_array_uget_borrowed(v_x_409_, v___x_434_);
lean_inc(v___x_435_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 2, v___x_435_);
v___x_437_ = v___x_415_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_key_411_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_value_412_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v___x_435_);
v___x_437_ = v_reuseFailAlloc_440_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; 
v___x_438_ = lean_array_uset(v_x_409_, v___x_434_, v___x_437_);
v_x_409_ = v___x_438_;
v_x_410_ = v_tail_413_;
goto _start;
}
}
v___jp_441_:
{
if (lean_obj_tag(v_snd_418_) == 0)
{
uint64_t v___x_443_; 
v___x_443_ = 11ULL;
v___y_421_ = v___y_442_;
v___y_422_ = v___x_443_;
goto v___jp_420_;
}
else
{
lean_object* v_val_444_; uint64_t v___x_445_; uint64_t v___x_446_; uint64_t v___x_447_; 
v_val_444_ = lean_ctor_get(v_snd_418_, 0);
v___x_445_ = l_String_instHashableRaw_hash(v_val_444_);
v___x_446_ = 13ULL;
v___x_447_ = lean_uint64_mix_hash(v___x_445_, v___x_446_);
v___y_421_ = v___y_442_;
v___y_422_ = v___x_447_;
goto v___jp_420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_i_452_, lean_object* v_source_453_, lean_object* v_target_454_){
_start:
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_array_get_size(v_source_453_);
v___x_456_ = lean_nat_dec_lt(v_i_452_, v___x_455_);
if (v___x_456_ == 0)
{
lean_dec_ref(v_source_453_);
lean_dec(v_i_452_);
return v_target_454_;
}
else
{
lean_object* v_es_457_; lean_object* v___x_458_; lean_object* v_source_459_; lean_object* v_target_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v_es_457_ = lean_array_fget(v_source_453_, v_i_452_);
v___x_458_ = lean_box(0);
v_source_459_ = lean_array_fset(v_source_453_, v_i_452_, v___x_458_);
v_target_460_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_target_454_, v_es_457_);
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_nat_add(v_i_452_, v___x_461_);
lean_dec(v_i_452_);
v_i_452_ = v___x_462_;
v_source_453_ = v_source_459_;
v_target_454_ = v_target_460_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(lean_object* v_data_464_){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_nbuckets_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_465_ = lean_array_get_size(v_data_464_);
v___x_466_ = lean_unsigned_to_nat(2u);
v_nbuckets_467_ = lean_nat_mul(v___x_465_, v___x_466_);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_box(0);
v___x_470_ = lean_mk_array(v_nbuckets_467_, v___x_469_);
v___x_471_ = lean_array_propagate_mark(v_data_464_, v___x_470_);
v___x_472_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v___x_468_, v_data_464_, v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_473_, lean_object* v_x_474_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
if (lean_obj_tag(v_x_474_) == 0)
{
uint8_t v___x_475_; 
v___x_475_ = 1;
return v___x_475_;
}
else
{
uint8_t v___x_476_; 
v___x_476_ = 0;
return v___x_476_;
}
}
else
{
if (lean_obj_tag(v_x_474_) == 0)
{
uint8_t v___x_477_; 
v___x_477_ = 0;
return v___x_477_;
}
else
{
lean_object* v_val_478_; lean_object* v_val_479_; uint8_t v_decide_480_; 
v_val_478_ = lean_ctor_get(v_x_473_, 0);
v_val_479_ = lean_ctor_get(v_x_474_, 0);
v_decide_480_ = lean_nat_dec_eq(v_val_478_, v_val_479_);
return v_decide_480_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_x_481_, lean_object* v_x_482_){
_start:
{
uint8_t v_res_483_; lean_object* v_r_484_; 
v_res_483_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_x_481_, v_x_482_);
lean_dec(v_x_482_);
lean_dec(v_x_481_);
v_r_484_ = lean_box(v_res_483_);
return v_r_484_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(lean_object* v_a_485_, lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
uint8_t v___x_487_; 
v___x_487_ = 0;
return v___x_487_;
}
else
{
lean_object* v_key_488_; lean_object* v_tail_489_; lean_object* v_fst_490_; lean_object* v_snd_491_; lean_object* v_fst_492_; lean_object* v_snd_493_; uint8_t v___x_497_; 
v_key_488_ = lean_ctor_get(v_x_486_, 0);
v_tail_489_ = lean_ctor_get(v_x_486_, 2);
v_fst_490_ = lean_ctor_get(v_key_488_, 0);
v_snd_491_ = lean_ctor_get(v_key_488_, 1);
v_fst_492_ = lean_ctor_get(v_a_485_, 0);
v_snd_493_ = lean_ctor_get(v_a_485_, 1);
v___x_497_ = lean_unbox(v_fst_492_);
if (v___x_497_ == 0)
{
uint8_t v___x_498_; 
v___x_498_ = lean_unbox(v_fst_490_);
if (v___x_498_ == 0)
{
goto v___jp_494_;
}
else
{
v_x_486_ = v_tail_489_;
goto _start;
}
}
else
{
uint8_t v___x_500_; 
v___x_500_ = lean_unbox(v_fst_490_);
if (v___x_500_ == 0)
{
v_x_486_ = v_tail_489_;
goto _start;
}
else
{
goto v___jp_494_;
}
}
v___jp_494_:
{
uint8_t v___x_495_; 
v___x_495_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_491_, v_snd_493_);
if (v___x_495_ == 0)
{
v_x_486_ = v_tail_489_;
goto _start;
}
else
{
return v___x_495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_a_502_, lean_object* v_x_503_){
_start:
{
uint8_t v_res_504_; lean_object* v_r_505_; 
v_res_504_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_502_, v_x_503_);
lean_dec(v_x_503_);
lean_dec_ref(v_a_502_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(lean_object* v_a_508_, lean_object* v_x_509_){
_start:
{
lean_object* v___y_511_; 
if (lean_obj_tag(v_x_509_) == 0)
{
lean_object* v___x_514_; 
v___x_514_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0));
v___y_511_ = v___x_514_;
goto v___jp_510_;
}
else
{
lean_object* v_val_515_; 
v_val_515_ = lean_ctor_get(v_x_509_, 0);
lean_inc(v_val_515_);
lean_dec_ref_known(v_x_509_, 1);
v___y_511_ = v_val_515_;
goto v___jp_510_;
}
v___jp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_array_push(v___y_511_, v_a_508_);
v___x_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v_val_521_; lean_object* v___x_522_; 
v___x_519_ = lean_box(0);
v___x_520_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_516_, v___x_519_);
v_val_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_val_521_);
lean_dec(v___x_520_);
v___x_522_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_522_, 0, v_a_517_);
lean_ctor_set(v___x_522_, 1, v_val_521_);
lean_ctor_set(v___x_522_, 2, v_x_518_);
return v___x_522_;
}
else
{
lean_object* v_key_523_; lean_object* v_value_524_; lean_object* v_tail_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_547_; 
v_key_523_ = lean_ctor_get(v_x_518_, 0);
v_value_524_ = lean_ctor_get(v_x_518_, 1);
v_tail_525_ = lean_ctor_get(v_x_518_, 2);
v_isSharedCheck_547_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_547_ == 0)
{
v___x_527_ = v_x_518_;
v_isShared_528_ = v_isSharedCheck_547_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_tail_525_);
lean_inc(v_value_524_);
lean_inc(v_key_523_);
lean_dec(v_x_518_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_547_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_fst_534_; lean_object* v_snd_535_; lean_object* v_fst_536_; lean_object* v_snd_537_; uint8_t v___x_544_; 
v_fst_534_ = lean_ctor_get(v_key_523_, 0);
v_snd_535_ = lean_ctor_get(v_key_523_, 1);
v_fst_536_ = lean_ctor_get(v_a_517_, 0);
v_snd_537_ = lean_ctor_get(v_a_517_, 1);
v___x_544_ = lean_unbox(v_fst_536_);
if (v___x_544_ == 0)
{
uint8_t v___x_545_; 
v___x_545_ = lean_unbox(v_fst_534_);
if (v___x_545_ == 0)
{
goto v___jp_538_;
}
else
{
goto v___jp_529_;
}
}
else
{
uint8_t v___x_546_; 
v___x_546_ = lean_unbox(v_fst_534_);
if (v___x_546_ == 0)
{
goto v___jp_529_;
}
else
{
goto v___jp_538_;
}
}
v___jp_529_:
{
lean_object* v_tail_530_; lean_object* v___x_532_; 
v_tail_530_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_516_, v_a_517_, v_tail_525_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 2, v_tail_530_);
v___x_532_ = v___x_527_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_key_523_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_value_524_);
lean_ctor_set(v_reuseFailAlloc_533_, 2, v_tail_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
v___jp_538_:
{
uint8_t v___x_539_; 
v___x_539_ = l_Option_instBEq_beq___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4_spec__7(v_snd_535_, v_snd_537_);
if (v___x_539_ == 0)
{
goto v___jp_529_;
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v_val_542_; lean_object* v___x_543_; 
lean_del_object(v___x_527_);
lean_dec(v_key_523_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v_value_524_);
v___x_541_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0(v_a_516_, v___x_540_);
v_val_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_val_542_);
lean_dec(v___x_541_);
v___x_543_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_543_, 0, v_a_517_);
lean_ctor_set(v___x_543_, 1, v_val_542_);
lean_ctor_set(v___x_543_, 2, v_tail_525_);
return v___x_543_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(lean_object* v_a_548_, lean_object* v_m_549_, lean_object* v_a_550_){
_start:
{
lean_object* v___y_552_; lean_object* v___y_553_; size_t v___y_554_; lean_object* v___y_555_; lean_object* v_size_558_; lean_object* v_buckets_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_618_; 
v_size_558_ = lean_ctor_get(v_m_549_, 0);
v_buckets_559_ = lean_ctor_get(v_m_549_, 1);
v_isSharedCheck_618_ = !lean_is_exclusive(v_m_549_);
if (v_isSharedCheck_618_ == 0)
{
v___x_561_ = v_m_549_;
v_isShared_562_ = v_isSharedCheck_618_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_buckets_559_);
lean_inc(v_size_558_);
lean_dec(v_m_549_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_618_;
goto v_resetjp_560_;
}
v___jp_551_:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = lean_array_uset(v___y_552_, v___y_554_, v___y_553_);
v___x_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_557_, 0, v___y_555_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
return v___x_557_;
}
v_resetjp_560_:
{
lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_565_; uint64_t v___y_567_; uint64_t v___y_568_; uint64_t v___y_609_; uint8_t v___x_615_; 
v_fst_563_ = lean_ctor_get(v_a_550_, 0);
v_snd_564_ = lean_ctor_get(v_a_550_, 1);
v___x_565_ = lean_array_get_size(v_buckets_559_);
v___x_615_ = lean_unbox(v_fst_563_);
if (v___x_615_ == 0)
{
uint64_t v___x_616_; 
v___x_616_ = 13ULL;
v___y_609_ = v___x_616_;
goto v___jp_608_;
}
else
{
uint64_t v___x_617_; 
v___x_617_ = 11ULL;
v___y_609_ = v___x_617_;
goto v___jp_608_;
}
v___jp_566_:
{
uint64_t v___x_569_; uint64_t v___x_570_; uint64_t v___x_571_; uint64_t v_fold_572_; uint64_t v___x_573_; uint64_t v___x_574_; uint64_t v___x_575_; size_t v___x_576_; size_t v___x_577_; size_t v___x_578_; size_t v___x_579_; size_t v___x_580_; lean_object* v_bkt_581_; uint8_t v___x_582_; 
v___x_569_ = lean_uint64_mix_hash(v___y_567_, v___y_568_);
v___x_570_ = 32ULL;
v___x_571_ = lean_uint64_shift_right(v___x_569_, v___x_570_);
v_fold_572_ = lean_uint64_xor(v___x_569_, v___x_571_);
v___x_573_ = 16ULL;
v___x_574_ = lean_uint64_shift_right(v_fold_572_, v___x_573_);
v___x_575_ = lean_uint64_xor(v_fold_572_, v___x_574_);
v___x_576_ = lean_uint64_to_usize(v___x_575_);
v___x_577_ = lean_usize_of_nat(v___x_565_);
v___x_578_ = ((size_t)1ULL);
v___x_579_ = lean_usize_sub(v___x_577_, v___x_578_);
v___x_580_ = lean_usize_land(v___x_576_, v___x_579_);
v_bkt_581_ = lean_array_uget_borrowed(v_buckets_559_, v___x_580_);
v___x_582_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_550_, v_bkt_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v_size_x27_586_; lean_object* v___x_587_; lean_object* v_buckets_x27_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_583_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg___lam__0___closed__0));
v___x_584_ = lean_array_push(v___x_583_, v_a_548_);
v___x_585_ = lean_unsigned_to_nat(1u);
v_size_x27_586_ = lean_nat_add(v_size_558_, v___x_585_);
lean_dec(v_size_558_);
lean_inc(v_bkt_581_);
v___x_587_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_587_, 0, v_a_550_);
lean_ctor_set(v___x_587_, 1, v___x_584_);
lean_ctor_set(v___x_587_, 2, v_bkt_581_);
v_buckets_x27_588_ = lean_array_uset(v_buckets_559_, v___x_580_, v___x_587_);
v___x_589_ = lean_unsigned_to_nat(4u);
v___x_590_ = lean_nat_mul(v_size_x27_586_, v___x_589_);
v___x_591_ = lean_unsigned_to_nat(3u);
v___x_592_ = lean_nat_div(v___x_590_, v___x_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_array_get_size(v_buckets_x27_588_);
v___x_594_ = lean_nat_dec_le(v___x_592_, v___x_593_);
lean_dec(v___x_592_);
if (v___x_594_ == 0)
{
lean_object* v_val_595_; lean_object* v___x_597_; 
v_val_595_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_buckets_x27_588_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 1, v_val_595_);
lean_ctor_set(v___x_561_, 0, v_size_x27_586_);
v___x_597_ = v___x_561_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_size_x27_586_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_val_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
lean_object* v___x_600_; 
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 1, v_buckets_x27_588_);
lean_ctor_set(v___x_561_, 0, v_size_x27_586_);
v___x_600_ = v___x_561_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_size_x27_586_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_buckets_x27_588_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
else
{
lean_object* v___x_602_; lean_object* v_buckets_x27_603_; lean_object* v_bkt_x27_604_; uint8_t v___x_605_; 
lean_inc(v_bkt_581_);
lean_del_object(v___x_561_);
v___x_602_ = lean_box(0);
v_buckets_x27_603_ = lean_array_uset(v_buckets_559_, v___x_580_, v___x_602_);
lean_inc_ref(v_a_550_);
v_bkt_x27_604_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_548_, v_a_550_, v_bkt_581_);
v___x_605_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_550_, v_bkt_x27_604_);
lean_dec_ref(v_a_550_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_nat_sub(v_size_558_, v___x_606_);
lean_dec(v_size_558_);
v___y_552_ = v_buckets_x27_603_;
v___y_553_ = v_bkt_x27_604_;
v___y_554_ = v___x_580_;
v___y_555_ = v___x_607_;
goto v___jp_551_;
}
else
{
v___y_552_ = v_buckets_x27_603_;
v___y_553_ = v_bkt_x27_604_;
v___y_554_ = v___x_580_;
v___y_555_ = v_size_558_;
goto v___jp_551_;
}
}
}
v___jp_608_:
{
if (lean_obj_tag(v_snd_564_) == 0)
{
uint64_t v___x_610_; 
v___x_610_ = 11ULL;
v___y_567_ = v___y_609_;
v___y_568_ = v___x_610_;
goto v___jp_566_;
}
else
{
lean_object* v_val_611_; uint64_t v___x_612_; uint64_t v___x_613_; uint64_t v___x_614_; 
v_val_611_ = lean_ctor_get(v_snd_564_, 0);
v___x_612_ = l_String_instHashableRaw_hash(v_val_611_);
v___x_613_ = 13ULL;
v___x_614_ = lean_uint64_mix_hash(v___x_612_, v___x_613_);
v___y_567_ = v___y_609_;
v___y_568_ = v___x_614_;
goto v___jp_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(lean_object* v_key_619_, lean_object* v_as_620_, size_t v_sz_621_, size_t v_i_622_, lean_object* v_b_623_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = lean_usize_dec_lt(v_i_622_, v_sz_621_);
if (v___x_624_ == 0)
{
lean_dec_ref(v_key_619_);
return v_b_623_;
}
else
{
lean_object* v_a_625_; lean_object* v___x_626_; lean_object* v___x_627_; size_t v___x_628_; size_t v___x_629_; 
v_a_625_ = lean_array_uget_borrowed(v_as_620_, v_i_622_);
lean_inc_ref(v_key_619_);
lean_inc_n(v_a_625_, 2);
v___x_626_ = lean_apply_1(v_key_619_, v_a_625_);
v___x_627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_625_, v_b_623_, v___x_626_);
v___x_628_ = ((size_t)1ULL);
v___x_629_ = lean_usize_add(v_i_622_, v___x_628_);
v_i_622_ = v___x_629_;
v_b_623_ = v___x_627_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg___boxed(lean_object* v_key_631_, lean_object* v_as_632_, lean_object* v_sz_633_, lean_object* v_i_634_, lean_object* v_b_635_){
_start:
{
size_t v_sz_boxed_636_; size_t v_i_boxed_637_; lean_object* v_res_638_; 
v_sz_boxed_636_ = lean_unbox_usize(v_sz_633_);
lean_dec(v_sz_633_);
v_i_boxed_637_ = lean_unbox_usize(v_i_634_);
lean_dec(v_i_634_);
v_res_638_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_631_, v_as_632_, v_sz_boxed_636_, v_i_boxed_637_, v_b_635_);
lean_dec_ref(v_as_632_);
return v_res_638_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = lean_box(0);
v___x_640_ = lean_unsigned_to_nat(16u);
v___x_641_ = lean_mk_array(v___x_640_, v___x_639_);
return v___x_641_;
}
}
static lean_object* _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v_groups_644_; 
v___x_642_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__0);
v___x_643_ = lean_unsigned_to_nat(0u);
v_groups_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_groups_644_, 0, v___x_643_);
lean_ctor_set(v_groups_644_, 1, v___x_642_);
return v_groups_644_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(lean_object* v_key_645_, lean_object* v_xs_646_){
_start:
{
lean_object* v_groups_647_; size_t v_sz_648_; size_t v___x_649_; lean_object* v___x_650_; 
v_groups_647_ = lean_obj_once(&l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1, &l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1_once, _init_l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___closed__1);
v_sz_648_ = lean_array_size(v_xs_646_);
v___x_649_ = ((size_t)0ULL);
v___x_650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_645_, v_xs_646_, v_sz_648_, v___x_649_, v_groups_647_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg___boxed(lean_object* v_key_651_, lean_object* v_xs_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_651_, v_xs_652_);
lean_dec_ref(v_xs_652_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(lean_object* v_items_655_){
_start:
{
lean_object* v___y_657_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_676_; lean_object* v___f_683_; lean_object* v_partitions_684_; lean_object* v_size_685_; lean_object* v_buckets_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___f_683_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___closed__0));
v_partitions_684_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v___f_683_, v_items_655_);
v_size_685_ = lean_ctor_get(v_partitions_684_, 0);
lean_inc(v_size_685_);
v_buckets_686_ = lean_ctor_get(v_partitions_684_, 1);
lean_inc_ref(v_buckets_686_);
lean_dec_ref(v_partitions_684_);
v___x_687_ = lean_mk_empty_array_with_capacity(v_size_685_);
lean_dec(v_size_685_);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_array_get_size(v_buckets_686_);
v___x_690_ = lean_nat_dec_lt(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_dec_ref(v_buckets_686_);
v___y_676_ = v___x_687_;
goto v___jp_675_;
}
else
{
size_t v___x_691_; size_t v___x_692_; lean_object* v___x_693_; 
v___x_691_ = ((size_t)0ULL);
v___x_692_ = lean_usize_of_nat(v___x_689_);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__4(v_buckets_686_, v___x_691_, v___x_692_, v___x_687_);
lean_dec_ref(v_buckets_686_);
v___y_676_ = v___x_693_;
goto v___jp_675_;
}
v___jp_656_:
{
size_t v_sz_658_; size_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_sz_658_ = lean_array_size(v___y_657_);
v___x_659_ = ((size_t)0ULL);
v___x_660_ = l_unsafeCast___redArg(v___y_657_);
lean_dec_ref(v___y_657_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__0(v_sz_658_, v___x_659_, v___x_660_);
v___x_662_ = l_unsafeCast___redArg(v___x_661_);
lean_dec_ref(v___x_661_);
return v___x_662_;
}
v___jp_663_:
{
lean_object* v___x_668_; 
v___x_668_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v___y_665_, v___y_664_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec(v___y_665_);
v___y_657_ = v___x_668_;
goto v___jp_656_;
}
v___jp_669_:
{
uint8_t v___x_674_; 
v___x_674_ = lean_nat_dec_le(v___y_673_, v___y_670_);
if (v___x_674_ == 0)
{
lean_dec(v___y_670_);
lean_inc(v___y_673_);
v___y_664_ = v___y_671_;
v___y_665_ = v___y_672_;
v___y_666_ = v___y_673_;
v___y_667_ = v___y_673_;
goto v___jp_663_;
}
else
{
v___y_664_ = v___y_671_;
v___y_665_ = v___y_672_;
v___y_666_ = v___y_673_;
v___y_667_ = v___y_670_;
goto v___jp_663_;
}
}
v___jp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_677_ = lean_array_get_size(v___y_676_);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_nat_dec_eq(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_680_ = lean_unsigned_to_nat(1u);
v___x_681_ = lean_nat_sub(v___x_677_, v___x_680_);
v___x_682_ = lean_nat_dec_le(v___x_678_, v___x_681_);
if (v___x_682_ == 0)
{
lean_inc(v___x_681_);
v___y_670_ = v___x_681_;
v___y_671_ = v___y_676_;
v___y_672_ = v___x_677_;
v___y_673_ = v___x_681_;
goto v___jp_669_;
}
else
{
v___y_670_ = v___x_681_;
v___y_671_ = v___y_676_;
v___y_672_ = v___x_677_;
v___y_673_ = v___x_678_;
goto v___jp_669_;
}
}
else
{
v___y_657_ = v___y_676_;
goto v___jp_656_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions___boxed(lean_object* v_items_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v_items_694_);
lean_dec_ref(v_items_694_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(lean_object* v_n_696_, lean_object* v_as_697_, lean_object* v_lo_698_, lean_object* v_hi_699_, lean_object* v_w_700_, lean_object* v_hlo_701_, lean_object* v_hhi_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___redArg(v_n_696_, v_as_697_, v_lo_698_, v_hi_699_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1___boxed(lean_object* v_n_704_, lean_object* v_as_705_, lean_object* v_lo_706_, lean_object* v_hi_707_, lean_object* v_w_708_, lean_object* v_hlo_709_, lean_object* v_hhi_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1(v_n_704_, v_as_705_, v_lo_706_, v_hi_707_, v_w_708_, v_hlo_709_, v_hhi_710_);
lean_dec(v_hi_707_);
lean_dec(v_n_704_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(lean_object* v_00_u03b2_712_, lean_object* v_key_713_, lean_object* v_xs_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___redArg(v_key_713_, v_xs_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2___boxed(lean_object* v_00_u03b2_716_, lean_object* v_key_717_, lean_object* v_xs_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2(v_00_u03b2_716_, v_key_717_, v_xs_718_);
lean_dec_ref(v_xs_718_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(lean_object* v_n_720_, lean_object* v_lo_721_, lean_object* v_hi_722_, lean_object* v_hhi_723_, lean_object* v_pivot_724_, lean_object* v_as_725_, lean_object* v_i_726_, lean_object* v_k_727_, lean_object* v_ilo_728_, lean_object* v_ik_729_, lean_object* v_w_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___redArg(v_hi_722_, v_pivot_724_, v_as_725_, v_i_726_, v_k_727_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1___boxed(lean_object* v_n_732_, lean_object* v_lo_733_, lean_object* v_hi_734_, lean_object* v_hhi_735_, lean_object* v_pivot_736_, lean_object* v_as_737_, lean_object* v_i_738_, lean_object* v_k_739_, lean_object* v_ilo_740_, lean_object* v_ik_741_, lean_object* v_w_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__1_spec__1(v_n_732_, v_lo_733_, v_hi_734_, v_hhi_735_, v_pivot_736_, v_as_737_, v_i_738_, v_k_739_, v_ilo_740_, v_ik_741_, v_w_742_);
lean_dec_ref(v_pivot_736_);
lean_dec(v_hi_734_);
lean_dec(v_lo_733_);
lean_dec(v_n_732_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3(lean_object* v_00_u03b2_744_, lean_object* v_a_745_, lean_object* v_m_746_, lean_object* v_a_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3___redArg(v_a_745_, v_m_746_, v_a_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(lean_object* v_00_u03b2_749_, lean_object* v_key_750_, lean_object* v_as_751_, size_t v_sz_752_, size_t v_i_753_, lean_object* v_b_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___redArg(v_key_750_, v_as_751_, v_sz_752_, v_i_753_, v_b_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4___boxed(lean_object* v_00_u03b2_756_, lean_object* v_key_757_, lean_object* v_as_758_, lean_object* v_sz_759_, lean_object* v_i_760_, lean_object* v_b_761_){
_start:
{
size_t v_sz_boxed_762_; size_t v_i_boxed_763_; lean_object* v_res_764_; 
v_sz_boxed_762_ = lean_unbox_usize(v_sz_759_);
lean_dec(v_sz_759_);
v_i_boxed_763_ = lean_unbox_usize(v_i_760_);
lean_dec(v_i_760_);
v_res_764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__4(v_00_u03b2_756_, v_key_757_, v_as_758_, v_sz_boxed_762_, v_i_boxed_763_, v_b_761_);
lean_dec_ref(v_as_758_);
return v_res_764_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_765_, lean_object* v_a_766_, lean_object* v_x_767_){
_start:
{
uint8_t v___x_768_; 
v___x_768_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___redArg(v_a_766_, v_x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_769_, lean_object* v_a_770_, lean_object* v_x_771_){
_start:
{
uint8_t v_res_772_; lean_object* v_r_773_; 
v_res_772_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__4(v_00_u03b2_769_, v_a_770_, v_x_771_);
lean_dec(v_x_771_);
lean_dec_ref(v_a_770_);
v_r_773_ = lean_box(v_res_772_);
return v_r_773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_774_, lean_object* v_data_775_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5___redArg(v_data_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_x_780_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__6___redArg(v_a_778_, v_a_779_, v_x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_782_, lean_object* v_i_783_, lean_object* v_source_784_, lean_object* v_target_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9___redArg(v_i_783_, v_source_784_, v_target_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11(lean_object* v_00_u03b2_787_, lean_object* v_x_788_, lean_object* v_x_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Array_groupByKey___at___00__private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions_spec__2_spec__3_spec__5_spec__9_spec__11___redArg(v_x_788_, v_x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_findPrioritizedCompletionPartitionsAt(lean_object* v_fileMap_791_, lean_object* v_hoverPos_792_, lean_object* v_cmdStx_793_, lean_object* v_infoTree_794_){
_start:
{
lean_object* v___x_795_; lean_object* v_fst_796_; lean_object* v_snd_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_807_; 
v___x_795_ = l_Lean_Server_Completion_findCompletionInfosAt(v_fileMap_791_, v_hoverPos_792_, v_cmdStx_793_, v_infoTree_794_);
v_fst_796_ = lean_ctor_get(v___x_795_, 0);
v_snd_797_ = lean_ctor_get(v___x_795_, 1);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_807_ == 0)
{
v___x_799_ = v___x_795_;
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_snd_797_);
lean_inc(v_fst_796_);
lean_dec(v___x_795_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_807_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v_partitions_803_; lean_object* v___x_805_; 
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = l_Array_zipIdx___redArg(v_fst_796_, v___x_801_);
lean_dec(v_fst_796_);
v_partitions_803_ = l___private_Lean_Server_Completion_CompletionInfoSelection_0__Lean_Server_Completion_computePrioritizedCompletionPartitions(v___x_802_);
lean_dec(v___x_802_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v_partitions_803_);
v___x_805_ = v___x_799_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_partitions_803_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v_snd_797_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
lean_object* runtime_initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Completion_SyntheticCompletion(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionInfoSelection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Completion_SyntheticCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionInfoSelection(builtin);
}
#ifdef __cplusplus
}
#endif

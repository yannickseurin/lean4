// Lean compiler output
// Module: Lean.Util.NumApps
// Imports: public import Lean.Expr public import Lean.Util.PtrSet
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
lean_object* lean_array_get_size(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_NumApps_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_visit___closed__0;
static lean_once_cell_t l_Lean_Expr_NumApps_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_visit___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_NumApps_main___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_main___closed__0;
static lean_once_cell_t l_Lean_Expr_NumApps_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_NumApps_main___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_main(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_NumApps_0__Lean_Expr_numApps_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_numApps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_numApps___closed__0 = (const lean_object*)&l_Lean_Expr_numApps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_numApps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_numApps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
return v_x_1_;
}
else
{
lean_object* v_key_3_; lean_object* v_value_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_31_; 
v_key_3_ = lean_ctor_get(v_x_2_, 0);
v_value_4_ = lean_ctor_get(v_x_2_, 1);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_isSharedCheck_31_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_31_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_31_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_value_4_);
lean_inc(v_key_3_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_31_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; size_t v___x_10_; uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v___x_13_; uint64_t v___x_14_; uint64_t v___x_15_; uint64_t v_fold_16_; uint64_t v___x_17_; uint64_t v___x_18_; uint64_t v___x_19_; size_t v___x_20_; size_t v___x_21_; size_t v___x_22_; size_t v___x_23_; size_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_27_; 
v___x_9_ = lean_array_get_size(v_x_1_);
v___x_10_ = lean_ptr_addr(v_key_3_);
v___x_11_ = lean_usize_to_uint64(v___x_10_);
v___x_12_ = 11ULL;
v___x_13_ = lean_uint64_mix_hash(v___x_11_, v___x_12_);
v___x_14_ = 32ULL;
v___x_15_ = lean_uint64_shift_right(v___x_13_, v___x_14_);
v_fold_16_ = lean_uint64_xor(v___x_13_, v___x_15_);
v___x_17_ = 16ULL;
v___x_18_ = lean_uint64_shift_right(v_fold_16_, v___x_17_);
v___x_19_ = lean_uint64_xor(v_fold_16_, v___x_18_);
v___x_20_ = lean_uint64_to_usize(v___x_19_);
v___x_21_ = lean_usize_of_nat(v___x_9_);
v___x_22_ = ((size_t)1ULL);
v___x_23_ = lean_usize_sub(v___x_21_, v___x_22_);
v___x_24_ = lean_usize_land(v___x_20_, v___x_23_);
v___x_25_ = lean_array_uget_borrowed(v_x_1_, v___x_24_);
lean_inc(v___x_25_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 2, v___x_25_);
v___x_27_ = v___x_7_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_30_; 
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_30_, 0, v_key_3_);
lean_ctor_set(v_reuseFailAlloc_30_, 1, v_value_4_);
lean_ctor_set(v_reuseFailAlloc_30_, 2, v___x_25_);
v___x_27_ = v_reuseFailAlloc_30_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; 
v___x_28_ = lean_array_uset(v_x_1_, v___x_24_, v___x_27_);
v_x_1_ = v___x_28_;
v_x_2_ = v_tail_5_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(lean_object* v_i_32_, lean_object* v_source_33_, lean_object* v_target_34_){
_start:
{
lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_35_ = lean_array_get_size(v_source_33_);
v___x_36_ = lean_nat_dec_lt(v_i_32_, v___x_35_);
if (v___x_36_ == 0)
{
lean_dec_ref(v_source_33_);
lean_dec(v_i_32_);
return v_target_34_;
}
else
{
lean_object* v_es_37_; lean_object* v___x_38_; lean_object* v_source_39_; lean_object* v_target_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v_es_37_ = lean_array_fget(v_source_33_, v_i_32_);
v___x_38_ = lean_box(0);
v_source_39_ = lean_array_fset(v_source_33_, v_i_32_, v___x_38_);
v_target_40_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_target_34_, v_es_37_);
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_add(v_i_32_, v___x_41_);
lean_dec(v_i_32_);
v_i_32_ = v___x_42_;
v_source_33_ = v_source_39_;
v_target_34_ = v_target_40_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(lean_object* v_data_44_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v_nbuckets_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_45_ = lean_array_get_size(v_data_44_);
v___x_46_ = lean_unsigned_to_nat(2u);
v_nbuckets_47_ = lean_nat_mul(v___x_45_, v___x_46_);
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = lean_box(0);
v___x_50_ = lean_mk_array(v_nbuckets_47_, v___x_49_);
v___x_51_ = lean_array_propagate_mark(v_data_44_, v___x_50_);
v___x_52_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(v___x_48_, v_data_44_, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(lean_object* v_a_53_, lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 0)
{
uint8_t v___x_55_; 
v___x_55_ = 0;
return v___x_55_;
}
else
{
lean_object* v_key_56_; lean_object* v_tail_57_; size_t v___x_58_; size_t v___x_59_; uint8_t v___x_60_; 
v_key_56_ = lean_ctor_get(v_x_54_, 0);
v_tail_57_ = lean_ctor_get(v_x_54_, 2);
v___x_58_ = lean_ptr_addr(v_key_56_);
v___x_59_ = lean_ptr_addr(v_a_53_);
v___x_60_ = lean_usize_dec_eq(v___x_58_, v___x_59_);
if (v___x_60_ == 0)
{
v_x_54_ = v_tail_57_;
goto _start;
}
else
{
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg___boxed(lean_object* v_a_62_, lean_object* v_x_63_){
_start:
{
uint8_t v_res_64_; lean_object* v_r_65_; 
v_res_64_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_62_, v_x_63_);
lean_dec(v_x_63_);
lean_dec_ref(v_a_62_);
v_r_65_ = lean_box(v_res_64_);
return v_r_65_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(lean_object* v_m_66_, lean_object* v_a_67_, lean_object* v_b_68_){
_start:
{
lean_object* v_size_69_; lean_object* v_buckets_70_; lean_object* v___x_71_; size_t v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; uint64_t v___x_75_; uint64_t v___x_76_; uint64_t v___x_77_; uint64_t v_fold_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v_bkt_87_; uint8_t v___x_88_; 
v_size_69_ = lean_ctor_get(v_m_66_, 0);
v_buckets_70_ = lean_ctor_get(v_m_66_, 1);
v___x_71_ = lean_array_get_size(v_buckets_70_);
v___x_72_ = lean_ptr_addr(v_a_67_);
v___x_73_ = lean_usize_to_uint64(v___x_72_);
v___x_74_ = 11ULL;
v___x_75_ = lean_uint64_mix_hash(v___x_73_, v___x_74_);
v___x_76_ = 32ULL;
v___x_77_ = lean_uint64_shift_right(v___x_75_, v___x_76_);
v_fold_78_ = lean_uint64_xor(v___x_75_, v___x_77_);
v___x_79_ = 16ULL;
v___x_80_ = lean_uint64_shift_right(v_fold_78_, v___x_79_);
v___x_81_ = lean_uint64_xor(v_fold_78_, v___x_80_);
v___x_82_ = lean_uint64_to_usize(v___x_81_);
v___x_83_ = lean_usize_of_nat(v___x_71_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_sub(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_land(v___x_82_, v___x_85_);
v_bkt_87_ = lean_array_uget_borrowed(v_buckets_70_, v___x_86_);
v___x_88_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_67_, v_bkt_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_109_; 
lean_inc_ref(v_buckets_70_);
lean_inc(v_size_69_);
v_isSharedCheck_109_ = !lean_is_exclusive(v_m_66_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; lean_object* v_unused_111_; 
v_unused_110_ = lean_ctor_get(v_m_66_, 1);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_m_66_, 0);
lean_dec(v_unused_111_);
v___x_90_ = v_m_66_;
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
else
{
lean_dec(v_m_66_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v_size_x27_93_; lean_object* v___x_94_; lean_object* v_buckets_x27_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v_size_x27_93_ = lean_nat_add(v_size_69_, v___x_92_);
lean_dec(v_size_69_);
lean_inc(v_bkt_87_);
v___x_94_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_94_, 0, v_a_67_);
lean_ctor_set(v___x_94_, 1, v_b_68_);
lean_ctor_set(v___x_94_, 2, v_bkt_87_);
v_buckets_x27_95_ = lean_array_uset(v_buckets_70_, v___x_86_, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(4u);
v___x_97_ = lean_nat_mul(v_size_x27_93_, v___x_96_);
v___x_98_ = lean_unsigned_to_nat(3u);
v___x_99_ = lean_nat_div(v___x_97_, v___x_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_array_get_size(v_buckets_x27_95_);
v___x_101_ = lean_nat_dec_le(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
if (v___x_101_ == 0)
{
lean_object* v_val_102_; lean_object* v___x_104_; 
v_val_102_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(v_buckets_x27_95_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_val_102_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_104_ = v___x_90_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_val_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
else
{
lean_object* v___x_107_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_buckets_x27_95_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_107_ = v___x_90_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_buckets_x27_95_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
else
{
lean_dec(v_b_68_);
lean_dec_ref(v_a_67_);
return v_m_66_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(lean_object* v_m_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_buckets_114_; lean_object* v___x_115_; size_t v___x_116_; uint64_t v___x_117_; uint64_t v___x_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; uint64_t v_fold_122_; uint64_t v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; size_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v_buckets_114_ = lean_ctor_get(v_m_112_, 1);
v___x_115_ = lean_array_get_size(v_buckets_114_);
v___x_116_ = lean_ptr_addr(v_a_113_);
v___x_117_ = lean_usize_to_uint64(v___x_116_);
v___x_118_ = 11ULL;
v___x_119_ = lean_uint64_mix_hash(v___x_117_, v___x_118_);
v___x_120_ = 32ULL;
v___x_121_ = lean_uint64_shift_right(v___x_119_, v___x_120_);
v_fold_122_ = lean_uint64_xor(v___x_119_, v___x_121_);
v___x_123_ = 16ULL;
v___x_124_ = lean_uint64_shift_right(v_fold_122_, v___x_123_);
v___x_125_ = lean_uint64_xor(v_fold_122_, v___x_124_);
v___x_126_ = lean_uint64_to_usize(v___x_125_);
v___x_127_ = lean_usize_of_nat(v___x_115_);
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_sub(v___x_127_, v___x_128_);
v___x_130_ = lean_usize_land(v___x_126_, v___x_129_);
v___x_131_ = lean_array_uget_borrowed(v_buckets_114_, v___x_130_);
v___x_132_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_113_, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg___boxed(lean_object* v_m_133_, lean_object* v_a_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_m_133_, v_a_134_);
lean_dec_ref(v_a_134_);
lean_dec_ref(v_m_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_visit___closed__0(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_box(0);
v___x_138_ = l_unsafeCast___redArg(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_visit___closed__1(void){
_start:
{
lean_object* v___x_139_; lean_object* v_dummy_140_; 
v___x_139_ = lean_obj_once(&l_Lean_Expr_NumApps_visit___closed__0, &l_Lean_Expr_NumApps_visit___closed__0_once, _init_l_Lean_Expr_NumApps_visit___closed__0);
v_dummy_140_ = l_Lean_Expr_sort___override(v___x_139_);
return v_dummy_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(lean_object* v_x_141_, lean_object* v_x_142_, lean_object* v_x_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___y_146_; 
if (lean_obj_tag(v_x_141_) == 5)
{
lean_object* v_fn_171_; lean_object* v_arg_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_fn_171_ = lean_ctor_get(v_x_141_, 0);
lean_inc_ref(v_fn_171_);
v_arg_172_ = lean_ctor_get(v_x_141_, 1);
lean_inc_ref(v_arg_172_);
lean_dec_ref_known(v_x_141_, 2);
v___x_173_ = lean_array_set(v_x_142_, v_x_143_, v_arg_172_);
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_sub(v_x_143_, v___x_174_);
lean_dec(v_x_143_);
v_x_141_ = v_fn_171_;
v_x_142_ = v___x_173_;
v_x_143_ = v___x_175_;
goto _start;
}
else
{
lean_dec(v_x_143_);
if (lean_obj_tag(v_x_141_) == 4)
{
lean_object* v_declName_177_; lean_object* v_visited_178_; lean_object* v_counters_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_194_; 
v_declName_177_ = lean_ctor_get(v_x_141_, 0);
v_visited_178_ = lean_ctor_get(v___y_144_, 0);
v_counters_179_ = lean_ctor_get(v___y_144_, 1);
v_isSharedCheck_194_ = !lean_is_exclusive(v___y_144_);
if (v_isSharedCheck_194_ == 0)
{
v___x_181_ = v___y_144_;
v_isShared_182_ = v_isSharedCheck_194_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_counters_179_);
lean_inc(v_visited_178_);
lean_dec(v___y_144_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_194_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___y_184_; lean_object* v___x_191_; 
v___x_191_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_counters_179_, v_declName_177_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_unsigned_to_nat(0u);
v___y_184_ = v___x_192_;
goto v___jp_183_;
}
else
{
lean_object* v_val_193_; 
v_val_193_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_191_, 1);
v___y_184_ = v_val_193_;
goto v___jp_183_;
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = lean_nat_add(v___y_184_, v___x_185_);
lean_dec(v___y_184_);
lean_inc(v_declName_177_);
v___x_187_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_177_, v___x_186_, v_counters_179_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v___x_187_);
v___x_189_ = v___x_181_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_visited_178_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
v___y_146_ = v___x_189_;
goto v___jp_145_;
}
}
}
}
else
{
v___y_146_ = v___y_144_;
goto v___jp_145_;
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v_snd_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_169_; 
v___x_147_ = l_Lean_Expr_NumApps_visit(v_x_141_, v___y_146_);
v_snd_148_ = lean_ctor_get(v___x_147_, 1);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; 
v_unused_170_ = lean_ctor_get(v___x_147_, 0);
lean_dec(v_unused_170_);
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_169_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_snd_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_169_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_152_ = lean_unsigned_to_nat(0u);
v___x_153_ = lean_array_get_size(v_x_142_);
v___x_154_ = lean_box(0);
v___x_155_ = lean_nat_dec_lt(v___x_152_, v___x_153_);
if (v___x_155_ == 0)
{
lean_object* v___x_157_; 
lean_dec_ref(v_x_142_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_154_);
v___x_157_ = v___x_150_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_snd_148_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
else
{
uint8_t v___x_159_; 
v___x_159_ = lean_nat_dec_le(v___x_153_, v___x_153_);
if (v___x_159_ == 0)
{
if (v___x_155_ == 0)
{
lean_object* v___x_161_; 
lean_dec_ref(v_x_142_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_154_);
v___x_161_ = v___x_150_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_snd_148_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
size_t v___x_163_; size_t v___x_164_; lean_object* v___x_165_; 
lean_del_object(v___x_150_);
v___x_163_ = ((size_t)0ULL);
v___x_164_ = lean_usize_of_nat(v___x_153_);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_x_142_, v___x_163_, v___x_164_, v___x_154_, v_snd_148_);
lean_dec_ref(v_x_142_);
return v___x_165_;
}
}
else
{
size_t v___x_166_; size_t v___x_167_; lean_object* v___x_168_; 
lean_del_object(v___x_150_);
v___x_166_ = ((size_t)0ULL);
v___x_167_ = lean_usize_of_nat(v___x_153_);
v___x_168_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_x_142_, v___x_166_, v___x_167_, v___x_154_, v_snd_148_);
lean_dec_ref(v_x_142_);
return v___x_168_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_visit(lean_object* v_e_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_d_198_; lean_object* v_b_199_; lean_object* v___y_200_; lean_object* v_visited_204_; lean_object* v_counters_205_; uint8_t v___x_206_; 
v_visited_204_ = lean_ctor_get(v_a_196_, 0);
v_counters_205_ = lean_ctor_get(v_a_196_, 1);
v___x_206_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_visited_204_, v_e_195_);
if (v___x_206_ == 0)
{
lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_238_; 
lean_inc(v_counters_205_);
lean_inc_ref(v_visited_204_);
v_isSharedCheck_238_ = !lean_is_exclusive(v_a_196_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; lean_object* v_unused_240_; 
v_unused_239_ = lean_ctor_get(v_a_196_, 1);
lean_dec(v_unused_239_);
v_unused_240_ = lean_ctor_get(v_a_196_, 0);
lean_dec(v_unused_240_);
v___x_208_ = v_a_196_;
v_isShared_209_ = v_isSharedCheck_238_;
goto v_resetjp_207_;
}
else
{
lean_dec(v_a_196_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_238_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = lean_box(0);
lean_inc_ref(v_e_195_);
v___x_211_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(v_visited_204_, v_e_195_, v___x_210_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_counters_205_);
v___x_213_ = v_reuseFailAlloc_237_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
switch(lean_obj_tag(v_e_195_))
{
case 7:
{
lean_object* v_binderType_214_; lean_object* v_body_215_; 
v_binderType_214_ = lean_ctor_get(v_e_195_, 1);
lean_inc_ref(v_binderType_214_);
v_body_215_ = lean_ctor_get(v_e_195_, 2);
lean_inc_ref(v_body_215_);
lean_dec_ref_known(v_e_195_, 3);
v_d_198_ = v_binderType_214_;
v_b_199_ = v_body_215_;
v___y_200_ = v___x_213_;
goto v___jp_197_;
}
case 6:
{
lean_object* v_binderType_216_; lean_object* v_body_217_; 
v_binderType_216_ = lean_ctor_get(v_e_195_, 1);
lean_inc_ref(v_binderType_216_);
v_body_217_ = lean_ctor_get(v_e_195_, 2);
lean_inc_ref(v_body_217_);
lean_dec_ref_known(v_e_195_, 3);
v_d_198_ = v_binderType_216_;
v_b_199_ = v_body_217_;
v___y_200_ = v___x_213_;
goto v___jp_197_;
}
case 10:
{
lean_object* v_expr_218_; 
v_expr_218_ = lean_ctor_get(v_e_195_, 1);
lean_inc_ref(v_expr_218_);
lean_dec_ref_known(v_e_195_, 2);
v_e_195_ = v_expr_218_;
v_a_196_ = v___x_213_;
goto _start;
}
case 8:
{
lean_object* v_type_220_; lean_object* v_value_221_; lean_object* v_body_222_; lean_object* v___x_223_; lean_object* v_snd_224_; lean_object* v___x_225_; lean_object* v_snd_226_; 
v_type_220_ = lean_ctor_get(v_e_195_, 1);
lean_inc_ref(v_type_220_);
v_value_221_ = lean_ctor_get(v_e_195_, 2);
lean_inc_ref(v_value_221_);
v_body_222_ = lean_ctor_get(v_e_195_, 3);
lean_inc_ref(v_body_222_);
lean_dec_ref_known(v_e_195_, 4);
v___x_223_ = l_Lean_Expr_NumApps_visit(v_type_220_, v___x_213_);
v_snd_224_ = lean_ctor_get(v___x_223_, 1);
lean_inc(v_snd_224_);
lean_dec_ref(v___x_223_);
v___x_225_ = l_Lean_Expr_NumApps_visit(v_value_221_, v_snd_224_);
v_snd_226_ = lean_ctor_get(v___x_225_, 1);
lean_inc(v_snd_226_);
lean_dec_ref(v___x_225_);
v_e_195_ = v_body_222_;
v_a_196_ = v_snd_226_;
goto _start;
}
case 5:
{
lean_object* v_dummy_228_; lean_object* v_nargs_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_dummy_228_ = lean_obj_once(&l_Lean_Expr_NumApps_visit___closed__1, &l_Lean_Expr_NumApps_visit___closed__1_once, _init_l_Lean_Expr_NumApps_visit___closed__1);
v_nargs_229_ = l_Lean_Expr_getAppNumArgs(v_e_195_);
lean_inc(v_nargs_229_);
v___x_230_ = lean_mk_array(v_nargs_229_, v_dummy_228_);
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_sub(v_nargs_229_, v___x_231_);
lean_dec(v_nargs_229_);
v___x_233_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_NumApps_visit_spec__3(v_e_195_, v___x_230_, v___x_232_, v___x_213_);
return v___x_233_;
}
case 11:
{
lean_object* v_struct_234_; 
v_struct_234_ = lean_ctor_get(v_e_195_, 2);
lean_inc_ref(v_struct_234_);
lean_dec_ref_known(v_e_195_, 3);
v_e_195_ = v_struct_234_;
v_a_196_ = v___x_213_;
goto _start;
}
default: 
{
lean_object* v___x_236_; 
lean_dec_ref(v_e_195_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_210_);
lean_ctor_set(v___x_236_, 1, v___x_213_);
return v___x_236_;
}
}
}
}
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref(v_e_195_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v_a_196_);
return v___x_242_;
}
v___jp_197_:
{
lean_object* v___x_201_; lean_object* v_snd_202_; 
v___x_201_ = l_Lean_Expr_NumApps_visit(v_d_198_, v___y_200_);
v_snd_202_ = lean_ctor_get(v___x_201_, 1);
lean_inc(v_snd_202_);
lean_dec_ref(v___x_201_);
v_e_195_ = v_b_199_;
v_a_196_ = v_snd_202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(lean_object* v_as_243_, size_t v_i_244_, size_t v_stop_245_, lean_object* v_b_246_, lean_object* v___y_247_){
_start:
{
uint8_t v___x_248_; 
v___x_248_ = lean_usize_dec_eq(v_i_244_, v_stop_245_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v_fst_251_; lean_object* v_snd_252_; size_t v___x_253_; size_t v___x_254_; 
v___x_249_ = lean_array_uget_borrowed(v_as_243_, v_i_244_);
lean_inc(v___x_249_);
v___x_250_ = l_Lean_Expr_NumApps_visit(v___x_249_, v___y_247_);
v_fst_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_fst_251_);
v_snd_252_ = lean_ctor_get(v___x_250_, 1);
lean_inc(v_snd_252_);
lean_dec_ref(v___x_250_);
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_add(v_i_244_, v___x_253_);
v_i_244_ = v___x_254_;
v_b_246_ = v_fst_251_;
v___y_247_ = v_snd_252_;
goto _start;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v_b_246_);
lean_ctor_set(v___x_256_, 1, v___y_247_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0___boxed(lean_object* v_as_257_, lean_object* v_i_258_, lean_object* v_stop_259_, lean_object* v_b_260_, lean_object* v___y_261_){
_start:
{
size_t v_i_boxed_262_; size_t v_stop_boxed_263_; lean_object* v_res_264_; 
v_i_boxed_262_ = lean_unbox_usize(v_i_258_);
lean_dec(v_i_258_);
v_stop_boxed_263_ = lean_unbox_usize(v_stop_259_);
lean_dec(v_stop_259_);
v_res_264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Expr_NumApps_visit_spec__0(v_as_257_, v_i_boxed_262_, v_stop_boxed_263_, v_b_260_, v___y_261_);
lean_dec_ref(v_as_257_);
return v_res_264_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(lean_object* v_00_u03b2_265_, lean_object* v_m_266_, lean_object* v_a_267_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___redArg(v_m_266_, v_a_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1___boxed(lean_object* v_00_u03b2_269_, lean_object* v_m_270_, lean_object* v_a_271_){
_start:
{
uint8_t v_res_272_; lean_object* v_r_273_; 
v_res_272_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1(v_00_u03b2_269_, v_m_270_, v_a_271_);
lean_dec_ref(v_a_271_);
lean_dec_ref(v_m_270_);
v_r_273_ = lean_box(v_res_272_);
return v_r_273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2(lean_object* v_00_u03b2_274_, lean_object* v_m_275_, lean_object* v_a_276_, lean_object* v_b_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2___redArg(v_m_275_, v_a_276_, v_b_277_);
return v___x_278_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(lean_object* v_00_u03b2_279_, lean_object* v_a_280_, lean_object* v_x_281_){
_start:
{
uint8_t v___x_282_; 
v___x_282_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___redArg(v_a_280_, v_x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1___boxed(lean_object* v_00_u03b2_283_, lean_object* v_a_284_, lean_object* v_x_285_){
_start:
{
uint8_t v_res_286_; lean_object* v_r_287_; 
v_res_286_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Expr_NumApps_visit_spec__1_spec__1(v_00_u03b2_283_, v_a_284_, v_x_285_);
lean_dec(v_x_285_);
lean_dec_ref(v_a_284_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3(lean_object* v_00_u03b2_288_, lean_object* v_data_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3___redArg(v_data_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_291_, lean_object* v_i_292_, lean_object* v_source_293_, lean_object* v_target_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4___redArg(v_i_292_, v_source_293_, v_target_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_296_, lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Expr_NumApps_visit_spec__2_spec__3_spec__4_spec__6___redArg(v_x_297_, v_x_298_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_main___closed__0(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(64u);
v___x_301_ = l_Lean_mkPtrSet___redArg(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_Expr_NumApps_main___closed__1(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_box(1);
v___x_303_ = lean_obj_once(&l_Lean_Expr_NumApps_main___closed__0, &l_Lean_Expr_NumApps_main___closed__0_once, _init_l_Lean_Expr_NumApps_main___closed__0);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_NumApps_main(lean_object* v_e_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_snd_308_; lean_object* v_counters_309_; 
v___x_306_ = lean_obj_once(&l_Lean_Expr_NumApps_main___closed__1, &l_Lean_Expr_NumApps_main___closed__1_once, _init_l_Lean_Expr_NumApps_main___closed__1);
v___x_307_ = l_Lean_Expr_NumApps_visit(v_e_305_, v___x_306_);
v_snd_308_ = lean_ctor_get(v___x_307_, 1);
lean_inc(v_snd_308_);
lean_dec_ref(v___x_307_);
v_counters_309_ = lean_ctor_get(v_snd_308_, 1);
lean_inc(v_counters_309_);
lean_dec(v_snd_308_);
return v_counters_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_NumApps_0__Lean_Expr_numApps_unsafe__1(lean_object* v_e_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_Expr_NumApps_main(v_e_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(lean_object* v_threshold_312_, lean_object* v_init_313_, lean_object* v_x_314_){
_start:
{
lean_object* v_d_317_; 
if (lean_obj_tag(v_x_314_) == 0)
{
lean_object* v_k_320_; lean_object* v_v_321_; lean_object* v_l_322_; lean_object* v_r_323_; lean_object* v___x_324_; lean_object* v_a_325_; 
v_k_320_ = lean_ctor_get(v_x_314_, 1);
v_v_321_ = lean_ctor_get(v_x_314_, 2);
v_l_322_ = lean_ctor_get(v_x_314_, 3);
v_r_323_ = lean_ctor_get(v_x_314_, 4);
v___x_324_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_312_, v_init_313_, v_l_322_);
v_a_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_325_);
if (lean_obj_tag(v_a_325_) == 0)
{
lean_object* v_a_326_; 
lean_dec_ref(v___x_324_);
v_a_326_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v_a_325_, 1);
v_d_317_ = v_a_326_;
goto v___jp_316_;
}
else
{
lean_object* v_a_327_; uint8_t v___x_328_; 
v_a_327_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v_a_325_, 1);
v___x_328_ = lean_nat_dec_lt(v_threshold_312_, v_v_321_);
if (v___x_328_ == 0)
{
lean_object* v_a_329_; 
lean_dec(v_a_327_);
v_a_329_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_329_);
lean_dec_ref(v___x_324_);
if (lean_obj_tag(v_a_329_) == 0)
{
lean_object* v_a_330_; 
v_a_330_ = lean_ctor_get(v_a_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v_a_329_, 1);
v_d_317_ = v_a_330_;
goto v___jp_316_;
}
else
{
lean_object* v_a_331_; 
v_a_331_ = lean_ctor_get(v_a_329_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v_a_329_, 1);
v_init_313_ = v_a_331_;
v_x_314_ = v_r_323_;
goto _start;
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec_ref(v___x_324_);
lean_inc(v_v_321_);
lean_inc(v_k_320_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v_k_320_);
lean_ctor_set(v___x_333_, 1, v_v_321_);
v___x_334_ = lean_array_push(v_a_327_, v___x_333_);
v_init_313_ = v___x_334_;
v_x_314_ = v_r_323_;
goto _start;
}
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v_init_313_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
v___jp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v_d_317_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1___boxed(lean_object* v_threshold_338_, lean_object* v_init_339_, lean_object* v_x_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_338_, v_init_339_, v_x_340_);
lean_dec(v_x_340_);
lean_dec(v_threshold_338_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(lean_object* v_hi_343_, lean_object* v_pivot_344_, lean_object* v_as_345_, lean_object* v_i_346_, lean_object* v_k_347_){
_start:
{
uint8_t v___x_348_; 
v___x_348_ = lean_nat_dec_lt(v_k_347_, v_hi_343_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_dec(v_k_347_);
v___x_349_ = lean_array_fswap(v_as_345_, v_i_346_, v_hi_343_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v_i_346_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
return v___x_350_;
}
else
{
lean_object* v_snd_351_; lean_object* v___x_352_; lean_object* v_snd_353_; uint8_t v___x_354_; 
v_snd_351_ = lean_ctor_get(v_pivot_344_, 1);
v___x_352_ = lean_array_fget_borrowed(v_as_345_, v_k_347_);
v_snd_353_ = lean_ctor_get(v___x_352_, 1);
v___x_354_ = lean_nat_dec_lt(v_snd_351_, v_snd_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_unsigned_to_nat(1u);
v___x_356_ = lean_nat_add(v_k_347_, v___x_355_);
lean_dec(v_k_347_);
v_k_347_ = v___x_356_;
goto _start;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_358_ = lean_array_fswap(v_as_345_, v_i_346_, v_k_347_);
v___x_359_ = lean_unsigned_to_nat(1u);
v___x_360_ = lean_nat_add(v_i_346_, v___x_359_);
lean_dec(v_i_346_);
v___x_361_ = lean_nat_add(v_k_347_, v___x_359_);
lean_dec(v_k_347_);
v_as_345_ = v___x_358_;
v_i_346_ = v___x_360_;
v_k_347_ = v___x_361_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_363_, lean_object* v_pivot_364_, lean_object* v_as_365_, lean_object* v_i_366_, lean_object* v_k_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_363_, v_pivot_364_, v_as_365_, v_i_366_, v_k_367_);
lean_dec_ref(v_pivot_364_);
lean_dec(v_hi_363_);
return v_res_368_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(lean_object* v_a_369_, lean_object* v_b_370_){
_start:
{
lean_object* v_snd_371_; lean_object* v_snd_372_; uint8_t v___x_373_; 
v_snd_371_ = lean_ctor_get(v_b_370_, 1);
v_snd_372_ = lean_ctor_get(v_a_369_, 1);
v___x_373_ = lean_nat_dec_lt(v_snd_371_, v_snd_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0___boxed(lean_object* v_a_374_, lean_object* v_b_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v_a_374_, v_b_375_);
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(lean_object* v_n_378_, lean_object* v_as_379_, lean_object* v_lo_380_, lean_object* v_hi_381_){
_start:
{
lean_object* v___y_383_; uint8_t v___x_393_; 
v___x_393_ = lean_nat_dec_lt(v_lo_380_, v_hi_381_);
if (v___x_393_ == 0)
{
lean_dec(v_lo_380_);
return v_as_379_;
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_mid_396_; lean_object* v___y_398_; lean_object* v___y_404_; lean_object* v___x_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_394_ = lean_nat_add(v_lo_380_, v_hi_381_);
v___x_395_ = lean_unsigned_to_nat(1u);
v_mid_396_ = lean_nat_shiftr(v___x_394_, v___x_395_);
lean_dec(v___x_394_);
v___x_409_ = lean_array_fget_borrowed(v_as_379_, v_mid_396_);
v___x_410_ = lean_array_fget_borrowed(v_as_379_, v_lo_380_);
v___x_411_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_409_, v___x_410_);
if (v___x_411_ == 0)
{
v___y_404_ = v_as_379_;
goto v___jp_403_;
}
else
{
lean_object* v___x_412_; 
v___x_412_ = lean_array_fswap(v_as_379_, v_lo_380_, v_mid_396_);
v___y_404_ = v___x_412_;
goto v___jp_403_;
}
v___jp_397_:
{
lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_399_ = lean_array_fget_borrowed(v___y_398_, v_mid_396_);
v___x_400_ = lean_array_fget_borrowed(v___y_398_, v_hi_381_);
v___x_401_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_dec(v_mid_396_);
v___y_383_ = v___y_398_;
goto v___jp_382_;
}
else
{
lean_object* v___x_402_; 
v___x_402_ = lean_array_fswap(v___y_398_, v_mid_396_, v_hi_381_);
lean_dec(v_mid_396_);
v___y_383_ = v___x_402_;
goto v___jp_382_;
}
}
v___jp_403_:
{
lean_object* v___x_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_405_ = lean_array_fget_borrowed(v___y_404_, v_hi_381_);
v___x_406_ = lean_array_fget_borrowed(v___y_404_, v_lo_380_);
v___x_407_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___lam__0(v___x_405_, v___x_406_);
if (v___x_407_ == 0)
{
v___y_398_ = v___y_404_;
goto v___jp_397_;
}
else
{
lean_object* v___x_408_; 
v___x_408_ = lean_array_fswap(v___y_404_, v_lo_380_, v_hi_381_);
v___y_398_ = v___x_408_;
goto v___jp_397_;
}
}
}
v___jp_382_:
{
lean_object* v_pivot_384_; lean_object* v___x_385_; lean_object* v_fst_386_; lean_object* v_snd_387_; uint8_t v___x_388_; 
v_pivot_384_ = lean_array_fget(v___y_383_, v_hi_381_);
lean_inc_n(v_lo_380_, 2);
v___x_385_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_381_, v_pivot_384_, v___y_383_, v_lo_380_, v_lo_380_);
lean_dec(v_pivot_384_);
v_fst_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_fst_386_);
v_snd_387_ = lean_ctor_get(v___x_385_, 1);
lean_inc(v_snd_387_);
lean_dec_ref(v___x_385_);
v___x_388_ = lean_nat_dec_le(v_hi_381_, v_fst_386_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_378_, v_snd_387_, v_lo_380_, v_fst_386_);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_add(v_fst_386_, v___x_390_);
lean_dec(v_fst_386_);
v_as_379_ = v___x_389_;
v_lo_380_ = v___x_391_;
goto _start;
}
else
{
lean_dec(v_fst_386_);
lean_dec(v_lo_380_);
return v_snd_387_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg___boxed(lean_object* v_n_413_, lean_object* v_as_414_, lean_object* v_lo_415_, lean_object* v_hi_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_413_, v_as_414_, v_lo_415_, v_hi_416_);
lean_dec(v_hi_416_);
lean_dec(v_n_413_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_numApps(lean_object* v_e_420_, lean_object* v_threshold_421_){
_start:
{
lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_427_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_437_; lean_object* v_a_438_; lean_object* v_counters_445_; lean_object* v_result_446_; lean_object* v___x_447_; lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_456_; 
v_counters_445_ = l_Lean_Expr_NumApps_main(v_e_420_);
v_result_446_ = ((lean_object*)(l_Lean_Expr_numApps___closed__0));
v___x_447_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Expr_numApps_spec__1(v_threshold_421_, v_result_446_, v_counters_445_);
lean_dec(v_counters_445_);
v_a_448_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_456_ == 0)
{
v___x_450_ = v___x_447_;
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
v___jp_423_:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v___y_424_, v___y_426_, v___y_425_, v___y_427_);
lean_dec(v___y_427_);
lean_dec(v___y_424_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
v___jp_430_:
{
uint8_t v___x_435_; 
v___x_435_ = lean_nat_dec_le(v___y_434_, v___y_432_);
if (v___x_435_ == 0)
{
lean_dec(v___y_432_);
lean_inc(v___y_434_);
v___y_424_ = v___y_431_;
v___y_425_ = v___y_434_;
v___y_426_ = v___y_433_;
v___y_427_ = v___y_434_;
goto v___jp_423_;
}
else
{
v___y_424_ = v___y_431_;
v___y_425_ = v___y_434_;
v___y_426_ = v___y_433_;
v___y_427_ = v___y_432_;
goto v___jp_423_;
}
}
v___jp_436_:
{
lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_439_ = lean_array_get_size(v_a_438_);
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_nat_dec_eq(v___x_439_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
lean_dec_ref(v___y_437_);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_nat_sub(v___x_439_, v___x_442_);
v___x_444_ = lean_nat_dec_le(v___x_440_, v___x_443_);
if (v___x_444_ == 0)
{
lean_inc(v___x_443_);
v___y_431_ = v___x_439_;
v___y_432_ = v___x_443_;
v___y_433_ = v_a_438_;
v___y_434_ = v___x_443_;
goto v___jp_430_;
}
else
{
v___y_431_ = v___x_439_;
v___y_432_ = v___x_443_;
v___y_433_ = v_a_438_;
v___y_434_ = v___x_440_;
goto v___jp_430_;
}
}
else
{
lean_dec_ref(v_a_438_);
return v___y_437_;
}
}
v_resetjp_449_:
{
lean_object* v_a_452_; lean_object* v___x_454_; 
v_a_452_ = lean_ctor_get(v_a_448_, 0);
lean_inc_n(v_a_452_, 2);
lean_dec(v_a_448_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v_a_452_);
v___x_454_ = v___x_450_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
v___y_437_ = v___x_454_;
v_a_438_ = v_a_452_;
goto v___jp_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_numApps___boxed(lean_object* v_e_457_, lean_object* v_threshold_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_Expr_numApps(v_e_457_, v_threshold_458_);
lean_dec(v_threshold_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(lean_object* v_n_461_, lean_object* v_as_462_, lean_object* v_lo_463_, lean_object* v_hi_464_, lean_object* v_w_465_, lean_object* v_hlo_466_, lean_object* v_hhi_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___redArg(v_n_461_, v_as_462_, v_lo_463_, v_hi_464_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0___boxed(lean_object* v_n_469_, lean_object* v_as_470_, lean_object* v_lo_471_, lean_object* v_hi_472_, lean_object* v_w_473_, lean_object* v_hlo_474_, lean_object* v_hhi_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0(v_n_469_, v_as_470_, v_lo_471_, v_hi_472_, v_w_473_, v_hlo_474_, v_hhi_475_);
lean_dec(v_hi_472_);
lean_dec(v_n_469_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(lean_object* v_n_477_, lean_object* v_lo_478_, lean_object* v_hi_479_, lean_object* v_hhi_480_, lean_object* v_pivot_481_, lean_object* v_as_482_, lean_object* v_i_483_, lean_object* v_k_484_, lean_object* v_ilo_485_, lean_object* v_ik_486_, lean_object* v_w_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___redArg(v_hi_479_, v_pivot_481_, v_as_482_, v_i_483_, v_k_484_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0___boxed(lean_object* v_n_489_, lean_object* v_lo_490_, lean_object* v_hi_491_, lean_object* v_hhi_492_, lean_object* v_pivot_493_, lean_object* v_as_494_, lean_object* v_i_495_, lean_object* v_k_496_, lean_object* v_ilo_497_, lean_object* v_ik_498_, lean_object* v_w_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Expr_numApps_spec__0_spec__0(v_n_489_, v_lo_490_, v_hi_491_, v_hhi_492_, v_pivot_493_, v_as_494_, v_i_495_, v_k_496_, v_ilo_497_, v_ik_498_, v_w_499_);
lean_dec_ref(v_pivot_493_);
lean_dec(v_hi_491_);
lean_dec(v_lo_490_);
lean_dec(v_n_489_);
return v_res_500_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_PtrSet(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Lean_Util_PtrSet(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_NumApps(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PtrSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_NumApps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_NumApps(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_NumApps(builtin);
}
#ifdef __cplusplus
}
#endif

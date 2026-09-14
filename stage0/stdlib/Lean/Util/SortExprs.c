// Lean compiler output
// Module: Lean.Util.SortExprs
// Imports: public import Lean.Expr
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
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_sortExprs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__0;
static lean_once_cell_t l_Lean_sortExprs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__1;
static lean_once_cell_t l_Lean_sortExprs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_sortExprs___closed__2;
LEAN_EXPORT lean_object* l_Lean_sortExprs(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_sortExprs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = l_unsafeCast___redArg(v_bs_3_);
lean_dec_ref(v_bs_3_);
return v___x_5_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_fst_8_; lean_object* v___x_9_; lean_object* v_bs_x27_10_; size_t v___x_11_; size_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_v_6_ = lean_array_uget_borrowed(v_bs_3_, v_i_2_);
v___x_7_ = l_unsafeCast___redArg(v_v_6_);
v_fst_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_fst_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_unsigned_to_nat(0u);
v_bs_x27_10_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_9_);
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_2_, v___x_11_);
v___x_13_ = l_unsafeCast___redArg(v_fst_8_);
lean_dec(v_fst_8_);
v___x_14_ = lean_array_uset(v_bs_x27_10_, v_i_2_, v___x_13_);
v_i_2_ = v___x_12_;
v_bs_3_ = v___x_14_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1___boxed(lean_object* v_sz_16_, lean_object* v_i_17_, lean_object* v_bs_18_){
_start:
{
size_t v_sz_boxed_19_; size_t v_i_boxed_20_; lean_object* v_res_21_; 
v_sz_boxed_19_ = lean_unbox_usize(v_sz_16_);
lean_dec(v_sz_16_);
v_i_boxed_20_ = lean_unbox_usize(v_i_17_);
lean_dec(v_i_17_);
v_res_21_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(v_sz_boxed_19_, v_i_boxed_20_, v_bs_18_);
return v_res_21_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v_fst_24_; lean_object* v_fst_25_; uint8_t v___x_26_; 
v_fst_24_ = lean_ctor_get(v_x_22_, 0);
v_fst_25_ = lean_ctor_get(v_x_23_, 0);
v___x_26_ = lean_expr_lt(v_fst_25_, v_fst_24_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0___boxed(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v_x_27_, v_x_28_);
lean_dec_ref(v_x_28_);
lean_dec_ref(v_x_27_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(lean_object* v_hi_31_, lean_object* v_pivot_32_, lean_object* v_as_33_, lean_object* v_i_34_, lean_object* v_k_35_){
_start:
{
uint8_t v___x_36_; 
v___x_36_ = lean_nat_dec_lt(v_k_35_, v_hi_31_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; lean_object* v___x_38_; 
lean_dec(v_k_35_);
v___x_37_ = lean_array_fswap(v_as_33_, v_i_34_, v_hi_31_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_i_34_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; lean_object* v_fst_40_; lean_object* v_fst_41_; uint8_t v___x_42_; 
v___x_39_ = lean_array_fget_borrowed(v_as_33_, v_k_35_);
v_fst_40_ = lean_ctor_get(v___x_39_, 0);
v_fst_41_ = lean_ctor_get(v_pivot_32_, 0);
v___x_42_ = lean_expr_lt(v_fst_41_, v_fst_40_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(1u);
v___x_44_ = lean_nat_add(v_k_35_, v___x_43_);
lean_dec(v_k_35_);
v_k_35_ = v___x_44_;
goto _start;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_46_ = lean_array_fswap(v_as_33_, v_i_34_, v_k_35_);
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_i_34_, v___x_47_);
lean_dec(v_i_34_);
v___x_49_ = lean_nat_add(v_k_35_, v___x_47_);
lean_dec(v_k_35_);
v_as_33_ = v___x_46_;
v_i_34_ = v___x_48_;
v_k_35_ = v___x_49_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg___boxed(lean_object* v_hi_51_, lean_object* v_pivot_52_, lean_object* v_as_53_, lean_object* v_i_54_, lean_object* v_k_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_51_, v_pivot_52_, v_as_53_, v_i_54_, v_k_55_);
lean_dec_ref(v_pivot_52_);
lean_dec(v_hi_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(lean_object* v_n_57_, lean_object* v_as_58_, lean_object* v_lo_59_, lean_object* v_hi_60_){
_start:
{
lean_object* v___y_62_; uint8_t v___x_72_; 
v___x_72_ = lean_nat_dec_lt(v_lo_59_, v_hi_60_);
if (v___x_72_ == 0)
{
lean_dec(v_lo_59_);
return v_as_58_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_mid_75_; lean_object* v___y_77_; lean_object* v___y_83_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_73_ = lean_nat_add(v_lo_59_, v_hi_60_);
v___x_74_ = lean_unsigned_to_nat(1u);
v_mid_75_ = lean_nat_shiftr(v___x_73_, v___x_74_);
lean_dec(v___x_73_);
v___x_88_ = lean_array_fget_borrowed(v_as_58_, v_mid_75_);
v___x_89_ = lean_array_fget_borrowed(v_as_58_, v_lo_59_);
v___x_90_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_88_, v___x_89_);
if (v___x_90_ == 0)
{
v___y_83_ = v_as_58_;
goto v___jp_82_;
}
else
{
lean_object* v___x_91_; 
v___x_91_ = lean_array_fswap(v_as_58_, v_lo_59_, v_mid_75_);
v___y_83_ = v___x_91_;
goto v___jp_82_;
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_78_ = lean_array_fget_borrowed(v___y_77_, v_mid_75_);
v___x_79_ = lean_array_fget_borrowed(v___y_77_, v_hi_60_);
v___x_80_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_78_, v___x_79_);
if (v___x_80_ == 0)
{
lean_dec(v_mid_75_);
v___y_62_ = v___y_77_;
goto v___jp_61_;
}
else
{
lean_object* v___x_81_; 
v___x_81_ = lean_array_fswap(v___y_77_, v_mid_75_, v_hi_60_);
lean_dec(v_mid_75_);
v___y_62_ = v___x_81_;
goto v___jp_61_;
}
}
v___jp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = lean_array_fget_borrowed(v___y_83_, v_hi_60_);
v___x_85_ = lean_array_fget_borrowed(v___y_83_, v_lo_59_);
v___x_86_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___lam__0(v___x_84_, v___x_85_);
if (v___x_86_ == 0)
{
v___y_77_ = v___y_83_;
goto v___jp_76_;
}
else
{
lean_object* v___x_87_; 
v___x_87_ = lean_array_fswap(v___y_83_, v_lo_59_, v_hi_60_);
v___y_77_ = v___x_87_;
goto v___jp_76_;
}
}
}
v___jp_61_:
{
lean_object* v_pivot_63_; lean_object* v___x_64_; lean_object* v_fst_65_; lean_object* v_snd_66_; uint8_t v___x_67_; 
v_pivot_63_ = lean_array_fget(v___y_62_, v_hi_60_);
lean_inc_n(v_lo_59_, 2);
v___x_64_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_60_, v_pivot_63_, v___y_62_, v_lo_59_, v_lo_59_);
lean_dec(v_pivot_63_);
v_fst_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_fst_65_);
v_snd_66_ = lean_ctor_get(v___x_64_, 1);
lean_inc(v_snd_66_);
lean_dec_ref(v___x_64_);
v___x_67_ = lean_nat_dec_le(v_hi_60_, v_fst_65_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_57_, v_snd_66_, v_lo_59_, v_fst_65_);
v___x_69_ = lean_unsigned_to_nat(1u);
v___x_70_ = lean_nat_add(v_fst_65_, v___x_69_);
lean_dec(v_fst_65_);
v_as_58_ = v___x_68_;
v_lo_59_ = v___x_70_;
goto _start;
}
else
{
lean_dec(v_fst_65_);
lean_dec(v_lo_59_);
return v_snd_66_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg___boxed(lean_object* v_n_92_, lean_object* v_as_93_, lean_object* v_lo_94_, lean_object* v_hi_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_92_, v_as_93_, v_lo_94_, v_hi_95_);
lean_dec(v_hi_95_);
lean_dec(v_n_92_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(lean_object* v_a_97_, lean_object* v_b_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_99_) == 0)
{
lean_dec(v_b_98_);
lean_dec(v_a_97_);
return v_x_99_;
}
else
{
lean_object* v_key_100_; lean_object* v_value_101_; lean_object* v_tail_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_114_; 
v_key_100_ = lean_ctor_get(v_x_99_, 0);
v_value_101_ = lean_ctor_get(v_x_99_, 1);
v_tail_102_ = lean_ctor_get(v_x_99_, 2);
v_isSharedCheck_114_ = !lean_is_exclusive(v_x_99_);
if (v_isSharedCheck_114_ == 0)
{
v___x_104_ = v_x_99_;
v_isShared_105_ = v_isSharedCheck_114_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_tail_102_);
lean_inc(v_value_101_);
lean_inc(v_key_100_);
lean_dec(v_x_99_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_114_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
uint8_t v___x_106_; 
v___x_106_ = lean_nat_dec_eq(v_key_100_, v_a_97_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_97_, v_b_98_, v_tail_102_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 2, v___x_107_);
v___x_109_ = v___x_104_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_key_100_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_value_101_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v_value_101_);
lean_dec(v_key_100_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 1, v_b_98_);
lean_ctor_set(v___x_104_, 0, v_a_97_);
v___x_112_ = v___x_104_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_97_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_b_98_);
lean_ctor_set(v_reuseFailAlloc_113_, 2, v_tail_102_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
return v_x_115_;
}
else
{
lean_object* v_key_117_; lean_object* v_value_118_; lean_object* v_tail_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_142_; 
v_key_117_ = lean_ctor_get(v_x_116_, 0);
v_value_118_ = lean_ctor_get(v_x_116_, 1);
v_tail_119_ = lean_ctor_get(v_x_116_, 2);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_116_);
if (v_isSharedCheck_142_ == 0)
{
v___x_121_ = v_x_116_;
v_isShared_122_ = v_isSharedCheck_142_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_tail_119_);
lean_inc(v_value_118_);
lean_inc(v_key_117_);
lean_dec(v_x_116_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_142_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v_fold_127_; uint64_t v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; size_t v___x_131_; size_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_123_ = lean_array_get_size(v_x_115_);
v___x_124_ = lean_uint64_of_nat(v_key_117_);
v___x_125_ = 32ULL;
v___x_126_ = lean_uint64_shift_right(v___x_124_, v___x_125_);
v_fold_127_ = lean_uint64_xor(v___x_124_, v___x_126_);
v___x_128_ = 16ULL;
v___x_129_ = lean_uint64_shift_right(v_fold_127_, v___x_128_);
v___x_130_ = lean_uint64_xor(v_fold_127_, v___x_129_);
v___x_131_ = lean_uint64_to_usize(v___x_130_);
v___x_132_ = lean_usize_of_nat(v___x_123_);
v___x_133_ = ((size_t)1ULL);
v___x_134_ = lean_usize_sub(v___x_132_, v___x_133_);
v___x_135_ = lean_usize_land(v___x_131_, v___x_134_);
v___x_136_ = lean_array_uget_borrowed(v_x_115_, v___x_135_);
lean_inc(v___x_136_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 2, v___x_136_);
v___x_138_ = v___x_121_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_key_117_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_value_118_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v___x_136_);
v___x_138_ = v_reuseFailAlloc_141_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; 
v___x_139_ = lean_array_uset(v_x_115_, v___x_135_, v___x_138_);
v_x_115_ = v___x_139_;
v_x_116_ = v_tail_119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(lean_object* v_i_143_, lean_object* v_source_144_, lean_object* v_target_145_){
_start:
{
lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_146_ = lean_array_get_size(v_source_144_);
v___x_147_ = lean_nat_dec_lt(v_i_143_, v___x_146_);
if (v___x_147_ == 0)
{
lean_dec_ref(v_source_144_);
lean_dec(v_i_143_);
return v_target_145_;
}
else
{
lean_object* v_es_148_; lean_object* v___x_149_; lean_object* v_source_150_; lean_object* v_target_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_es_148_ = lean_array_fget(v_source_144_, v_i_143_);
v___x_149_ = lean_box(0);
v_source_150_ = lean_array_fset(v_source_144_, v_i_143_, v___x_149_);
v_target_151_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(v_target_145_, v_es_148_);
v___x_152_ = lean_unsigned_to_nat(1u);
v___x_153_ = lean_nat_add(v_i_143_, v___x_152_);
lean_dec(v_i_143_);
v_i_143_ = v___x_153_;
v_source_144_ = v_source_150_;
v_target_145_ = v_target_151_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(lean_object* v_data_155_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_nbuckets_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_156_ = lean_array_get_size(v_data_155_);
v___x_157_ = lean_unsigned_to_nat(2u);
v_nbuckets_158_ = lean_nat_mul(v___x_156_, v___x_157_);
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_box(0);
v___x_161_ = lean_mk_array(v_nbuckets_158_, v___x_160_);
v___x_162_ = lean_array_propagate_mark(v_data_155_, v___x_161_);
v___x_163_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(v___x_159_, v_data_155_, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(lean_object* v_a_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
uint8_t v___x_166_; 
v___x_166_ = 0;
return v___x_166_;
}
else
{
lean_object* v_key_167_; lean_object* v_tail_168_; uint8_t v___x_169_; 
v_key_167_ = lean_ctor_get(v_x_165_, 0);
v_tail_168_ = lean_ctor_get(v_x_165_, 2);
v___x_169_ = lean_nat_dec_eq(v_key_167_, v_a_164_);
if (v___x_169_ == 0)
{
v_x_165_ = v_tail_168_;
goto _start;
}
else
{
return v___x_169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg___boxed(lean_object* v_a_171_, lean_object* v_x_172_){
_start:
{
uint8_t v_res_173_; lean_object* v_r_174_; 
v_res_173_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_171_, v_x_172_);
lean_dec(v_x_172_);
lean_dec(v_a_171_);
v_r_174_ = lean_box(v_res_173_);
return v_r_174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(lean_object* v_m_175_, lean_object* v_a_176_, lean_object* v_b_177_){
_start:
{
lean_object* v_size_178_; lean_object* v_buckets_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_222_; 
v_size_178_ = lean_ctor_get(v_m_175_, 0);
v_buckets_179_ = lean_ctor_get(v_m_175_, 1);
v_isSharedCheck_222_ = !lean_is_exclusive(v_m_175_);
if (v_isSharedCheck_222_ == 0)
{
v___x_181_ = v_m_175_;
v_isShared_182_ = v_isSharedCheck_222_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_buckets_179_);
lean_inc(v_size_178_);
lean_dec(v_m_175_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_222_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; uint64_t v___x_184_; uint64_t v___x_185_; uint64_t v___x_186_; uint64_t v_fold_187_; uint64_t v___x_188_; uint64_t v___x_189_; uint64_t v___x_190_; size_t v___x_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; size_t v___x_195_; lean_object* v_bkt_196_; uint8_t v___x_197_; 
v___x_183_ = lean_array_get_size(v_buckets_179_);
v___x_184_ = lean_uint64_of_nat(v_a_176_);
v___x_185_ = 32ULL;
v___x_186_ = lean_uint64_shift_right(v___x_184_, v___x_185_);
v_fold_187_ = lean_uint64_xor(v___x_184_, v___x_186_);
v___x_188_ = 16ULL;
v___x_189_ = lean_uint64_shift_right(v_fold_187_, v___x_188_);
v___x_190_ = lean_uint64_xor(v_fold_187_, v___x_189_);
v___x_191_ = lean_uint64_to_usize(v___x_190_);
v___x_192_ = lean_usize_of_nat(v___x_183_);
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_sub(v___x_192_, v___x_193_);
v___x_195_ = lean_usize_land(v___x_191_, v___x_194_);
v_bkt_196_ = lean_array_uget_borrowed(v_buckets_179_, v___x_195_);
v___x_197_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_176_, v_bkt_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v_size_x27_199_; lean_object* v___x_200_; lean_object* v_buckets_x27_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_198_ = lean_unsigned_to_nat(1u);
v_size_x27_199_ = lean_nat_add(v_size_178_, v___x_198_);
lean_dec(v_size_178_);
lean_inc(v_bkt_196_);
v___x_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_200_, 0, v_a_176_);
lean_ctor_set(v___x_200_, 1, v_b_177_);
lean_ctor_set(v___x_200_, 2, v_bkt_196_);
v_buckets_x27_201_ = lean_array_uset(v_buckets_179_, v___x_195_, v___x_200_);
v___x_202_ = lean_unsigned_to_nat(4u);
v___x_203_ = lean_nat_mul(v_size_x27_199_, v___x_202_);
v___x_204_ = lean_unsigned_to_nat(3u);
v___x_205_ = lean_nat_div(v___x_203_, v___x_204_);
lean_dec(v___x_203_);
v___x_206_ = lean_array_get_size(v_buckets_x27_201_);
v___x_207_ = lean_nat_dec_le(v___x_205_, v___x_206_);
lean_dec(v___x_205_);
if (v___x_207_ == 0)
{
lean_object* v_val_208_; lean_object* v___x_210_; 
v_val_208_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(v_buckets_x27_201_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v_val_208_);
lean_ctor_set(v___x_181_, 0, v_size_x27_199_);
v___x_210_ = v___x_181_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_size_x27_199_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_val_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
else
{
lean_object* v___x_213_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v_buckets_x27_201_);
lean_ctor_set(v___x_181_, 0, v_size_x27_199_);
v___x_213_ = v___x_181_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_size_x27_199_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_buckets_x27_201_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
else
{
lean_object* v___x_215_; lean_object* v_buckets_x27_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
lean_inc(v_bkt_196_);
v___x_215_ = lean_box(0);
v_buckets_x27_216_ = lean_array_uset(v_buckets_179_, v___x_195_, v___x_215_);
v___x_217_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_176_, v_b_177_, v_bkt_196_);
v___x_218_ = lean_array_uset(v_buckets_x27_216_, v___x_195_, v___x_217_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 1, v___x_218_);
v___x_220_ = v___x_181_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_size_178_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(lean_object* v_as_223_, size_t v_i_224_, size_t v_stop_225_, lean_object* v_b_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_usize_dec_eq(v_i_224_, v_stop_225_);
if (v___x_227_ == 0)
{
lean_object* v_fst_228_; lean_object* v_snd_229_; lean_object* v___x_230_; lean_object* v_snd_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_244_; 
v_fst_228_ = lean_ctor_get(v_b_226_, 0);
lean_inc(v_fst_228_);
v_snd_229_ = lean_ctor_get(v_b_226_, 1);
lean_inc(v_snd_229_);
lean_dec_ref(v_b_226_);
v___x_230_ = lean_array_uget(v_as_223_, v_i_224_);
v_snd_231_ = lean_ctor_get(v___x_230_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_244_ == 0)
{
lean_object* v_unused_245_; 
v_unused_245_ = lean_ctor_get(v___x_230_, 0);
lean_dec(v_unused_245_);
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_244_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_snd_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_244_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_fst_228_, v___x_235_);
v___x_237_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_snd_229_, v_snd_231_, v_fst_228_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v___x_237_);
lean_ctor_set(v___x_233_, 0, v___x_236_);
v___x_239_ = v___x_233_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_243_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
size_t v___x_240_; size_t v___x_241_; 
v___x_240_ = ((size_t)1ULL);
v___x_241_ = lean_usize_add(v_i_224_, v___x_240_);
v_i_224_ = v___x_241_;
v_b_226_ = v___x_239_;
goto _start;
}
}
}
else
{
return v_b_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2___boxed(lean_object* v_as_246_, lean_object* v_i_247_, lean_object* v_stop_248_, lean_object* v_b_249_){
_start:
{
size_t v_i_boxed_250_; size_t v_stop_boxed_251_; lean_object* v_res_252_; 
v_i_boxed_250_ = lean_unbox_usize(v_i_247_);
lean_dec(v_i_247_);
v_stop_boxed_251_ = lean_unbox_usize(v_stop_248_);
lean_dec(v_stop_248_);
v_res_252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v_as_246_, v_i_boxed_250_, v_stop_boxed_251_, v_b_249_);
lean_dec_ref(v_as_246_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg(size_t v_sz_253_, size_t v_i_254_, lean_object* v_bs_255_){
_start:
{
uint8_t v___x_256_; 
v___x_256_ = lean_usize_dec_lt(v_i_254_, v_sz_253_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
v___x_257_ = l_unsafeCast___redArg(v_bs_255_);
lean_dec_ref(v_bs_255_);
return v___x_257_;
}
else
{
lean_object* v_v_258_; lean_object* v___x_259_; lean_object* v_bs_x27_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; size_t v___x_264_; size_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_v_258_ = lean_array_uget(v_bs_255_, v_i_254_);
v___x_259_ = lean_unsigned_to_nat(0u);
v_bs_x27_260_ = lean_array_uset(v_bs_255_, v_i_254_, v___x_259_);
v___x_261_ = lean_usize_to_nat(v_i_254_);
v___x_262_ = l_unsafeCast___redArg(v_v_258_);
lean_dec(v_v_258_);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_261_);
v___x_264_ = ((size_t)1ULL);
v___x_265_ = lean_usize_add(v_i_254_, v___x_264_);
v___x_266_ = l_unsafeCast___redArg(v___x_263_);
lean_dec_ref_known(v___x_263_, 2);
v___x_267_ = lean_array_uset(v_bs_x27_260_, v_i_254_, v___x_266_);
v_i_254_ = v___x_265_;
v_bs_255_ = v___x_267_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg___boxed(lean_object* v_sz_269_, lean_object* v_i_270_, lean_object* v_bs_271_){
_start:
{
size_t v_sz_boxed_272_; size_t v_i_boxed_273_; lean_object* v_res_274_; 
v_sz_boxed_272_ = lean_unbox_usize(v_sz_269_);
lean_dec(v_sz_269_);
v_i_boxed_273_ = lean_unbox_usize(v_i_270_);
lean_dec(v_i_270_);
v_res_274_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg(v_sz_boxed_272_, v_i_boxed_273_, v_bs_271_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(lean_object* v_hi_275_, lean_object* v_pivot_276_, lean_object* v_as_277_, lean_object* v_i_278_, lean_object* v_k_279_){
_start:
{
uint8_t v___x_280_; 
v___x_280_ = lean_nat_dec_lt(v_k_279_, v_hi_275_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; lean_object* v___x_282_; 
lean_dec(v_k_279_);
v___x_281_ = lean_array_fswap(v_as_277_, v_i_278_, v_hi_275_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v_i_278_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
return v___x_282_;
}
else
{
lean_object* v___x_283_; lean_object* v_fst_284_; lean_object* v_fst_285_; uint8_t v___x_286_; 
v___x_283_ = lean_array_fget_borrowed(v_as_277_, v_k_279_);
v_fst_284_ = lean_ctor_get(v___x_283_, 0);
v_fst_285_ = lean_ctor_get(v_pivot_276_, 0);
v___x_286_ = lean_expr_lt(v_fst_284_, v_fst_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_nat_add(v_k_279_, v___x_287_);
lean_dec(v_k_279_);
v_k_279_ = v___x_288_;
goto _start;
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_290_ = lean_array_fswap(v_as_277_, v_i_278_, v_k_279_);
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_nat_add(v_i_278_, v___x_291_);
lean_dec(v_i_278_);
v___x_293_ = lean_nat_add(v_k_279_, v___x_291_);
lean_dec(v_k_279_);
v_as_277_ = v___x_290_;
v_i_278_ = v___x_292_;
v_k_279_ = v___x_293_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg___boxed(lean_object* v_hi_295_, lean_object* v_pivot_296_, lean_object* v_as_297_, lean_object* v_i_298_, lean_object* v_k_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_295_, v_pivot_296_, v_as_297_, v_i_298_, v_k_299_);
lean_dec_ref(v_pivot_296_);
lean_dec(v_hi_295_);
return v_res_300_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v_fst_303_; lean_object* v_fst_304_; uint8_t v___x_305_; 
v_fst_303_ = lean_ctor_get(v_x_301_, 0);
v_fst_304_ = lean_ctor_get(v_x_302_, 0);
v___x_305_ = lean_expr_lt(v_fst_303_, v_fst_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0___boxed(lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v_x_306_, v_x_307_);
lean_dec_ref(v_x_307_);
lean_dec_ref(v_x_306_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(lean_object* v_n_310_, lean_object* v_as_311_, lean_object* v_lo_312_, lean_object* v_hi_313_){
_start:
{
lean_object* v___y_315_; uint8_t v___x_325_; 
v___x_325_ = lean_nat_dec_lt(v_lo_312_, v_hi_313_);
if (v___x_325_ == 0)
{
lean_dec(v_lo_312_);
return v_as_311_;
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_mid_328_; lean_object* v___y_330_; lean_object* v___y_336_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_326_ = lean_nat_add(v_lo_312_, v_hi_313_);
v___x_327_ = lean_unsigned_to_nat(1u);
v_mid_328_ = lean_nat_shiftr(v___x_326_, v___x_327_);
lean_dec(v___x_326_);
v___x_341_ = lean_array_fget_borrowed(v_as_311_, v_mid_328_);
v___x_342_ = lean_array_fget_borrowed(v_as_311_, v_lo_312_);
v___x_343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
v___y_336_ = v_as_311_;
goto v___jp_335_;
}
else
{
lean_object* v___x_344_; 
v___x_344_ = lean_array_fswap(v_as_311_, v_lo_312_, v_mid_328_);
v___y_336_ = v___x_344_;
goto v___jp_335_;
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_331_ = lean_array_fget_borrowed(v___y_330_, v_mid_328_);
v___x_332_ = lean_array_fget_borrowed(v___y_330_, v_hi_313_);
v___x_333_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_dec(v_mid_328_);
v___y_315_ = v___y_330_;
goto v___jp_314_;
}
else
{
lean_object* v___x_334_; 
v___x_334_ = lean_array_fswap(v___y_330_, v_mid_328_, v_hi_313_);
lean_dec(v_mid_328_);
v___y_315_ = v___x_334_;
goto v___jp_314_;
}
}
v___jp_335_:
{
lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_337_ = lean_array_fget_borrowed(v___y_336_, v_hi_313_);
v___x_338_ = lean_array_fget_borrowed(v___y_336_, v_lo_312_);
v___x_339_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___lam__0(v___x_337_, v___x_338_);
if (v___x_339_ == 0)
{
v___y_330_ = v___y_336_;
goto v___jp_329_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_array_fswap(v___y_336_, v_lo_312_, v_hi_313_);
v___y_330_ = v___x_340_;
goto v___jp_329_;
}
}
}
v___jp_314_:
{
lean_object* v_pivot_316_; lean_object* v___x_317_; lean_object* v_fst_318_; lean_object* v_snd_319_; uint8_t v___x_320_; 
v_pivot_316_ = lean_array_fget(v___y_315_, v_hi_313_);
lean_inc_n(v_lo_312_, 2);
v___x_317_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_313_, v_pivot_316_, v___y_315_, v_lo_312_, v_lo_312_);
lean_dec(v_pivot_316_);
v_fst_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_fst_318_);
v_snd_319_ = lean_ctor_get(v___x_317_, 1);
lean_inc(v_snd_319_);
lean_dec_ref(v___x_317_);
v___x_320_ = lean_nat_dec_le(v_hi_313_, v_fst_318_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_310_, v_snd_319_, v_lo_312_, v_fst_318_);
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_add(v_fst_318_, v___x_322_);
lean_dec(v_fst_318_);
v_as_311_ = v___x_321_;
v_lo_312_ = v___x_323_;
goto _start;
}
else
{
lean_dec(v_fst_318_);
lean_dec(v_lo_312_);
return v_snd_319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg___boxed(lean_object* v_n_345_, lean_object* v_as_346_, lean_object* v_lo_347_, lean_object* v_hi_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_345_, v_as_346_, v_lo_347_, v_hi_348_);
lean_dec(v_hi_348_);
lean_dec(v_n_345_);
return v_res_349_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__0(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = lean_box(0);
v___x_351_ = lean_unsigned_to_nat(16u);
v___x_352_ = lean_mk_array(v___x_351_, v___x_350_);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__1(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = lean_obj_once(&l_Lean_sortExprs___closed__0, &l_Lean_sortExprs___closed__0_once, _init_l_Lean_sortExprs___closed__0);
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l_Lean_sortExprs___closed__2(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_obj_once(&l_Lean_sortExprs___closed__1, &l_Lean_sortExprs___closed__1_once, _init_l_Lean_sortExprs___closed__1);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___x_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_sortExprs(lean_object* v_es_359_, uint8_t v_lt_360_){
_start:
{
lean_object* v___y_362_; lean_object* v_snd_363_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_375_; size_t v_sz_388_; size_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v_es_392_; 
v_sz_388_ = lean_array_size(v_es_359_);
v___x_389_ = ((size_t)0ULL);
v___x_390_ = l_unsafeCast___redArg(v_es_359_);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg(v_sz_388_, v___x_389_, v___x_390_);
v_es_392_ = l_unsafeCast___redArg(v___x_391_);
lean_dec_ref(v___x_391_);
if (v_lt_360_ == 0)
{
lean_object* v___x_393_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_393_ = lean_array_get_size(v_es_392_);
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_nat_dec_eq(v___x_393_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___y_403_; uint8_t v___x_405_; 
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_sub(v___x_393_, v___x_400_);
v___x_405_ = lean_nat_dec_le(v___x_398_, v___x_401_);
if (v___x_405_ == 0)
{
lean_inc(v___x_401_);
v___y_403_ = v___x_401_;
goto v___jp_402_;
}
else
{
v___y_403_ = v___x_398_;
goto v___jp_402_;
}
v___jp_402_:
{
uint8_t v___x_404_; 
v___x_404_ = lean_nat_dec_le(v___y_403_, v___x_401_);
if (v___x_404_ == 0)
{
lean_dec(v___x_401_);
lean_inc(v___y_403_);
v___y_395_ = v___y_403_;
v___y_396_ = v___y_403_;
goto v___jp_394_;
}
else
{
v___y_395_ = v___y_403_;
v___y_396_ = v___x_401_;
goto v___jp_394_;
}
}
}
else
{
v___y_375_ = v_es_392_;
goto v___jp_374_;
}
v___jp_394_:
{
lean_object* v___x_397_; 
v___x_397_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v___x_393_, v_es_392_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
v___y_375_ = v___x_397_;
goto v___jp_374_;
}
}
else
{
lean_object* v___x_406_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_406_ = lean_array_get_size(v_es_392_);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_nat_dec_eq(v___x_406_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___y_416_; uint8_t v___x_418_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_nat_sub(v___x_406_, v___x_413_);
v___x_418_ = lean_nat_dec_le(v___x_411_, v___x_414_);
if (v___x_418_ == 0)
{
lean_inc(v___x_414_);
v___y_416_ = v___x_414_;
goto v___jp_415_;
}
else
{
v___y_416_ = v___x_411_;
goto v___jp_415_;
}
v___jp_415_:
{
uint8_t v___x_417_; 
v___x_417_ = lean_nat_dec_le(v___y_416_, v___x_414_);
if (v___x_417_ == 0)
{
lean_dec(v___x_414_);
lean_inc(v___y_416_);
v___y_408_ = v___y_416_;
v___y_409_ = v___y_416_;
goto v___jp_407_;
}
else
{
v___y_408_ = v___y_416_;
v___y_409_ = v___x_414_;
goto v___jp_407_;
}
}
}
else
{
v___y_375_ = v_es_392_;
goto v___jp_374_;
}
v___jp_407_:
{
lean_object* v___x_410_; 
v___x_410_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v___x_406_, v_es_392_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
v___y_375_ = v___x_410_;
goto v___jp_374_;
}
}
v___jp_361_:
{
size_t v_sz_364_; size_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v_es_368_; lean_object* v___x_369_; 
v_sz_364_ = lean_array_size(v___y_362_);
v___x_365_ = ((size_t)0ULL);
v___x_366_ = l_unsafeCast___redArg(v___y_362_);
lean_dec_ref(v___y_362_);
v___x_367_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_sortExprs_spec__1(v_sz_364_, v___x_365_, v___x_366_);
v_es_368_ = l_unsafeCast___redArg(v___x_367_);
lean_dec_ref(v___x_367_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_es_368_);
lean_ctor_set(v___x_369_, 1, v_snd_363_);
return v___x_369_;
}
v___jp_370_:
{
lean_object* v_snd_373_; 
v_snd_373_ = lean_ctor_get(v___y_372_, 1);
lean_inc(v_snd_373_);
lean_dec_ref(v___y_372_);
v___y_362_ = v___y_371_;
v_snd_363_ = v_snd_373_;
goto v___jp_361_;
}
v___jp_374_:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_obj_once(&l_Lean_sortExprs___closed__1, &l_Lean_sortExprs___closed__1_once, _init_l_Lean_sortExprs___closed__1);
v___x_378_ = lean_array_get_size(v___y_375_);
v___x_379_ = lean_nat_dec_lt(v___x_376_, v___x_378_);
if (v___x_379_ == 0)
{
v___y_362_ = v___y_375_;
v_snd_363_ = v___x_377_;
goto v___jp_361_;
}
else
{
lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_sortExprs___closed__2, &l_Lean_sortExprs___closed__2_once, _init_l_Lean_sortExprs___closed__2);
v___x_381_ = lean_nat_dec_le(v___x_378_, v___x_378_);
if (v___x_381_ == 0)
{
if (v___x_379_ == 0)
{
v___y_362_ = v___y_375_;
v_snd_363_ = v___x_377_;
goto v___jp_361_;
}
else
{
size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; 
v___x_382_ = ((size_t)0ULL);
v___x_383_ = lean_usize_of_nat(v___x_378_);
v___x_384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v___y_375_, v___x_382_, v___x_383_, v___x_380_);
v___y_371_ = v___y_375_;
v___y_372_ = v___x_384_;
goto v___jp_370_;
}
}
else
{
size_t v___x_385_; size_t v___x_386_; lean_object* v___x_387_; 
v___x_385_ = ((size_t)0ULL);
v___x_386_ = lean_usize_of_nat(v___x_378_);
v___x_387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_sortExprs_spec__2(v___y_375_, v___x_385_, v___x_386_, v___x_380_);
v___y_371_ = v___y_375_;
v___y_372_ = v___x_387_;
goto v___jp_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_sortExprs___boxed(lean_object* v_es_419_, lean_object* v_lt_420_){
_start:
{
uint8_t v_lt_boxed_421_; lean_object* v_res_422_; 
v_lt_boxed_421_ = lean_unbox(v_lt_420_);
v_res_422_ = l_Lean_sortExprs(v_es_419_, v_lt_boxed_421_);
lean_dec_ref(v_es_419_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0(lean_object* v_00_u03b2_423_, lean_object* v_m_424_, lean_object* v_a_425_, lean_object* v_b_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0___redArg(v_m_424_, v_a_425_, v_b_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3(lean_object* v_as_428_, size_t v_sz_429_, size_t v_i_430_, lean_object* v_bs_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___redArg(v_sz_429_, v_i_430_, v_bs_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3___boxed(lean_object* v_as_433_, lean_object* v_sz_434_, lean_object* v_i_435_, lean_object* v_bs_436_){
_start:
{
size_t v_sz_boxed_437_; size_t v_i_boxed_438_; lean_object* v_res_439_; 
v_sz_boxed_437_ = lean_unbox_usize(v_sz_434_);
lean_dec(v_sz_434_);
v_i_boxed_438_ = lean_unbox_usize(v_i_435_);
lean_dec(v_i_435_);
v_res_439_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_sortExprs_spec__3(v_as_433_, v_sz_boxed_437_, v_i_boxed_438_, v_bs_436_);
lean_dec_ref(v_as_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(lean_object* v_n_440_, lean_object* v_as_441_, lean_object* v_lo_442_, lean_object* v_hi_443_, lean_object* v_w_444_, lean_object* v_hlo_445_, lean_object* v_hhi_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___redArg(v_n_440_, v_as_441_, v_lo_442_, v_hi_443_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4___boxed(lean_object* v_n_448_, lean_object* v_as_449_, lean_object* v_lo_450_, lean_object* v_hi_451_, lean_object* v_w_452_, lean_object* v_hlo_453_, lean_object* v_hhi_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4(v_n_448_, v_as_449_, v_lo_450_, v_hi_451_, v_w_452_, v_hlo_453_, v_hhi_454_);
lean_dec(v_hi_451_);
lean_dec(v_n_448_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(lean_object* v_n_456_, lean_object* v_as_457_, lean_object* v_lo_458_, lean_object* v_hi_459_, lean_object* v_w_460_, lean_object* v_hlo_461_, lean_object* v_hhi_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___redArg(v_n_456_, v_as_457_, v_lo_458_, v_hi_459_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5___boxed(lean_object* v_n_464_, lean_object* v_as_465_, lean_object* v_lo_466_, lean_object* v_hi_467_, lean_object* v_w_468_, lean_object* v_hlo_469_, lean_object* v_hhi_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5(v_n_464_, v_as_465_, v_lo_466_, v_hi_467_, v_w_468_, v_hlo_469_, v_hhi_470_);
lean_dec(v_hi_467_);
lean_dec(v_n_464_);
return v_res_471_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(lean_object* v_00_u03b2_472_, lean_object* v_a_473_, lean_object* v_x_474_){
_start:
{
uint8_t v___x_475_; 
v___x_475_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___redArg(v_a_473_, v_x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_476_, lean_object* v_a_477_, lean_object* v_x_478_){
_start:
{
uint8_t v_res_479_; lean_object* v_r_480_; 
v_res_479_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__0(v_00_u03b2_476_, v_a_477_, v_x_478_);
lean_dec(v_x_478_);
lean_dec(v_a_477_);
v_r_480_ = lean_box(v_res_479_);
return v_r_480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1(lean_object* v_00_u03b2_481_, lean_object* v_data_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1___redArg(v_data_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2(lean_object* v_00_u03b2_484_, lean_object* v_a_485_, lean_object* v_b_486_, lean_object* v_x_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__2___redArg(v_a_485_, v_b_486_, v_x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(lean_object* v_n_489_, lean_object* v_lo_490_, lean_object* v_hi_491_, lean_object* v_hhi_492_, lean_object* v_pivot_493_, lean_object* v_as_494_, lean_object* v_i_495_, lean_object* v_k_496_, lean_object* v_ilo_497_, lean_object* v_ik_498_, lean_object* v_w_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___redArg(v_hi_491_, v_pivot_493_, v_as_494_, v_i_495_, v_k_496_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7___boxed(lean_object* v_n_501_, lean_object* v_lo_502_, lean_object* v_hi_503_, lean_object* v_hhi_504_, lean_object* v_pivot_505_, lean_object* v_as_506_, lean_object* v_i_507_, lean_object* v_k_508_, lean_object* v_ilo_509_, lean_object* v_ik_510_, lean_object* v_w_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__4_spec__7(v_n_501_, v_lo_502_, v_hi_503_, v_hhi_504_, v_pivot_505_, v_as_506_, v_i_507_, v_k_508_, v_ilo_509_, v_ik_510_, v_w_511_);
lean_dec_ref(v_pivot_505_);
lean_dec(v_hi_503_);
lean_dec(v_lo_502_);
lean_dec(v_n_501_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(lean_object* v_n_513_, lean_object* v_lo_514_, lean_object* v_hi_515_, lean_object* v_hhi_516_, lean_object* v_pivot_517_, lean_object* v_as_518_, lean_object* v_i_519_, lean_object* v_k_520_, lean_object* v_ilo_521_, lean_object* v_ik_522_, lean_object* v_w_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___redArg(v_hi_515_, v_pivot_517_, v_as_518_, v_i_519_, v_k_520_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9___boxed(lean_object* v_n_525_, lean_object* v_lo_526_, lean_object* v_hi_527_, lean_object* v_hhi_528_, lean_object* v_pivot_529_, lean_object* v_as_530_, lean_object* v_i_531_, lean_object* v_k_532_, lean_object* v_ilo_533_, lean_object* v_ik_534_, lean_object* v_w_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_sortExprs_spec__5_spec__9(v_n_525_, v_lo_526_, v_hi_527_, v_hhi_528_, v_pivot_529_, v_as_530_, v_i_531_, v_k_532_, v_ilo_533_, v_ik_534_, v_w_535_);
lean_dec_ref(v_pivot_529_);
lean_dec(v_hi_527_);
lean_dec(v_lo_526_);
lean_dec(v_n_525_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_537_, lean_object* v_i_538_, lean_object* v_source_539_, lean_object* v_target_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2___redArg(v_i_538_, v_source_539_, v_target_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8(lean_object* v_00_u03b2_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_sortExprs_spec__0_spec__1_spec__2_spec__8___redArg(v_x_543_, v_x_544_);
return v___x_545_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_SortExprs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_SortExprs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_SortExprs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_SortExprs(builtin);
}
#ifdef __cplusplus
}
#endif

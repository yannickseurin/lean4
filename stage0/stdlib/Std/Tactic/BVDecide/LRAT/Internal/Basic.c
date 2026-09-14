// Lean compiler output
// Module: Std.Tactic.BVDecide.LRAT.Internal.Basic
// Imports: public import Std.Sat.CNF.Basic public import Std.Sat.CNF.Entails import Init.Omega
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
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_toCNF(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_toCNF___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_LRAT_Internal_State_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
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
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; size_t v___x_11_; size_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v_v_6_ = lean_array_uget(v_bs_3_, v_i_2_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_7_);
v___x_9_ = l_unsafeCast___redArg(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_2_, v___x_11_);
v___x_13_ = l_unsafeCast___redArg(v___x_10_);
lean_dec_ref_known(v___x_10_, 1);
v___x_14_ = lean_array_uset(v_bs_x27_8_, v_i_2_, v___x_13_);
v_i_2_ = v___x_12_;
v_bs_3_ = v___x_14_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0___boxed(lean_object* v_sz_16_, lean_object* v_i_17_, lean_object* v_bs_18_){
_start:
{
size_t v_sz_boxed_19_; size_t v_i_boxed_20_; lean_object* v_res_21_; 
v_sz_boxed_19_ = lean_unbox_usize(v_sz_16_);
lean_dec(v_sz_16_);
v_i_boxed_20_ = lean_unbox_usize(v_i_17_);
lean_dec(v_i_17_);
v_res_21_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0(v_sz_boxed_19_, v_i_boxed_20_, v_bs_18_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF(lean_object* v_cnf_22_){
_start:
{
size_t v_sz_23_; size_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_sz_23_ = lean_array_size(v_cnf_22_);
v___x_24_ = ((size_t)0ULL);
v___x_25_ = l_unsafeCast___redArg(v_cnf_22_);
v___x_26_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF_spec__0(v_sz_23_, v___x_24_, v___x_25_);
v___x_27_ = l_unsafeCast___redArg(v___x_26_);
lean_dec_ref(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF___boxed(lean_object* v_cnf_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_ofCNF(v_cnf_28_);
lean_dec_ref(v_cnf_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0(lean_object* v_as_30_, size_t v_i_31_, size_t v_stop_32_, lean_object* v_b_33_){
_start:
{
lean_object* v___y_35_; uint8_t v___x_39_; 
v___x_39_ = lean_usize_dec_eq(v_i_31_, v_stop_32_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; 
v___x_40_ = lean_array_uget_borrowed(v_as_30_, v_i_31_);
if (lean_obj_tag(v___x_40_) == 0)
{
v___y_35_ = v_b_33_;
goto v___jp_34_;
}
else
{
lean_object* v_val_41_; lean_object* v___x_42_; 
v_val_41_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_val_41_);
v___x_42_ = lean_array_push(v_b_33_, v_val_41_);
v___y_35_ = v___x_42_;
goto v___jp_34_;
}
}
else
{
return v_b_33_;
}
v___jp_34_:
{
size_t v___x_36_; size_t v___x_37_; 
v___x_36_ = ((size_t)1ULL);
v___x_37_ = lean_usize_add(v_i_31_, v___x_36_);
v_i_31_ = v___x_37_;
v_b_33_ = v___y_35_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0___boxed(lean_object* v_as_43_, lean_object* v_i_44_, lean_object* v_stop_45_, lean_object* v_b_46_){
_start:
{
size_t v_i_boxed_47_; size_t v_stop_boxed_48_; lean_object* v_res_49_; 
v_i_boxed_47_ = lean_unbox_usize(v_i_44_);
lean_dec(v_i_44_);
v_stop_boxed_48_ = lean_unbox_usize(v_stop_45_);
lean_dec(v_stop_45_);
v_res_49_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0(v_as_43_, v_i_boxed_47_, v_stop_boxed_48_, v_b_46_);
lean_dec_ref(v_as_43_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0(lean_object* v_as_52_, lean_object* v_start_53_, lean_object* v_stop_54_){
_start:
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___closed__0));
v___x_56_ = lean_nat_dec_lt(v_start_53_, v_stop_54_);
if (v___x_56_ == 0)
{
return v___x_55_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_get_size(v_as_52_);
v___x_58_ = lean_nat_dec_le(v_stop_54_, v___x_57_);
if (v___x_58_ == 0)
{
uint8_t v___x_59_; 
v___x_59_ = lean_nat_dec_lt(v_start_53_, v___x_57_);
if (v___x_59_ == 0)
{
return v___x_55_;
}
else
{
size_t v___x_60_; size_t v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_usize_of_nat(v_start_53_);
v___x_61_ = lean_usize_of_nat(v___x_57_);
v___x_62_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0(v_as_52_, v___x_60_, v___x_61_, v___x_55_);
return v___x_62_;
}
}
else
{
size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_usize_of_nat(v_start_53_);
v___x_64_ = lean_usize_of_nat(v_stop_54_);
v___x_65_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0_spec__0(v_as_52_, v___x_63_, v___x_64_, v___x_55_);
return v___x_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0___boxed(lean_object* v_as_66_, lean_object* v_start_67_, lean_object* v_stop_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0(v_as_66_, v_start_67_, v_stop_68_);
lean_dec(v_stop_68_);
lean_dec(v_start_67_);
lean_dec_ref(v_as_66_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_toCNF(lean_object* v_s_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_unsigned_to_nat(0u);
v___x_72_ = lean_array_get_size(v_s_70_);
v___x_73_ = l_Array_filterMapM___at___00Std_Tactic_BVDecide_LRAT_Internal_State_toCNF_spec__0(v_s_70_, v___x_71_, v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_toCNF___boxed(lean_object* v_s_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_toCNF(v_s_74_);
lean_dec_ref(v_s_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_get_x3f(lean_object* v_s_76_, lean_object* v_idx_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = lean_nat_sub(v_idx_77_, v___x_78_);
v___x_80_ = lean_array_get_size(v_s_76_);
v___x_81_ = lean_nat_dec_lt(v___x_79_, v___x_80_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
lean_dec(v___x_79_);
v___x_82_ = lean_box(0);
return v___x_82_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = lean_array_fget_borrowed(v_s_76_, v___x_79_);
lean_dec(v___x_79_);
lean_inc(v___x_83_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_get_x3f___boxed(lean_object* v_s_84_, lean_object* v_idx_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_get_x3f(v_s_84_, v_idx_85_);
lean_dec(v_idx_85_);
lean_dec_ref(v_s_84_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go(lean_object* v_s_87_, lean_object* v_p_88_, lean_object* v_i_89_){
_start:
{
lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = lean_array_get_size(v_s_87_);
v___x_91_ = lean_nat_dec_lt(v_i_89_, v___x_90_);
if (v___x_91_ == 0)
{
uint8_t v___x_92_; 
lean_dec(v_i_89_);
lean_dec_ref(v_p_88_);
v___x_92_ = 1;
return v___x_92_;
}
else
{
lean_object* v___x_93_; 
v___x_93_ = lean_array_fget_borrowed(v_s_87_, v_i_89_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = lean_nat_add(v_i_89_, v___x_94_);
lean_dec(v_i_89_);
v_i_89_ = v___x_95_;
goto _start;
}
else
{
lean_object* v_val_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_val_97_ = lean_ctor_get(v___x_93_, 0);
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_nat_add(v_i_89_, v___x_98_);
lean_dec(v_i_89_);
lean_inc_ref(v_p_88_);
lean_inc(v_val_97_);
lean_inc(v___x_99_);
v___x_100_ = lean_apply_2(v_p_88_, v___x_99_, v_val_97_);
v___x_101_ = lean_unbox(v___x_100_);
if (v___x_101_ == 0)
{
uint8_t v___x_102_; 
lean_dec(v___x_99_);
lean_dec_ref(v_p_88_);
v___x_102_ = lean_unbox(v___x_100_);
return v___x_102_;
}
else
{
v_i_89_ = v___x_99_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go___boxed(lean_object* v_s_104_, lean_object* v_p_105_, lean_object* v_i_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go(v_s_104_, v_p_105_, v_i_106_);
lean_dec_ref(v_s_104_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go_match__1_splitter___redArg(lean_object* v_x_109_, lean_object* v_h__1_110_, lean_object* v_h__2_111_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec(v_h__1_110_);
v___x_112_ = lean_box(0);
v___x_113_ = lean_apply_1(v_h__2_111_, v___x_112_);
return v___x_113_;
}
else
{
lean_object* v_val_114_; lean_object* v___x_115_; 
lean_dec(v_h__2_111_);
v_val_114_ = lean_ctor_get(v_x_109_, 0);
lean_inc(v_val_114_);
lean_dec_ref_known(v_x_109_, 1);
v___x_115_ = lean_apply_1(v_h__1_110_, v_val_114_);
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go_match__1_splitter(lean_object* v_motive_116_, lean_object* v_x_117_, lean_object* v_h__1_118_, lean_object* v_h__2_119_){
_start:
{
if (lean_obj_tag(v_x_117_) == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_h__1_118_);
v___x_120_ = lean_box(0);
v___x_121_ = lean_apply_1(v_h__2_119_, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v_val_122_; lean_object* v___x_123_; 
lean_dec(v_h__2_119_);
v_val_122_ = lean_ctor_get(v_x_117_, 0);
lean_inc(v_val_122_);
lean_dec_ref_known(v_x_117_, 1);
v___x_123_ = lean_apply_1(v_h__1_118_, v_val_122_);
return v___x_123_;
}
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_LRAT_Internal_State_all(lean_object* v_s_124_, lean_object* v_p_125_){
_start:
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = l___private_Std_Tactic_BVDecide_LRAT_Internal_Basic_0__Std_Tactic_BVDecide_LRAT_Internal_State_all_go(v_s_124_, v_p_125_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Internal_State_all___boxed(lean_object* v_s_128_, lean_object* v_p_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Std_Tactic_BVDecide_LRAT_Internal_State_all(v_s_128_, v_p_129_);
lean_dec_ref(v_s_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
lean_object* runtime_initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Sat_CNF_Entails(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sat_CNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sat_CNF_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* initialize_Std_Sat_CNF_Entails(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sat_CNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sat_CNF_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_BVDecide_LRAT_Internal_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

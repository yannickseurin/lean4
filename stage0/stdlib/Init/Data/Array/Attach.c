// Lean compiler output
// Module: Init.Data.Array.Attach
// Imports: import all Init.Data.List.Attach public import Init.Data.Array.Lemmas import Init.Data.Array.Bootstrap import Init.Data.Array.Count
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Array_pmap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Array_pmap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_attach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_attach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_attach___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Array_pmapImpl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__0 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__0_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__1 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__1_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__2 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__2_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__3 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__3_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__4 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__4_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__5 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__5_value;
static const lean_closure_object l_Array_pmapImpl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_pmapImpl___redArg___closed__6 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__6_value;
static const lean_ctor_object l_Array_pmapImpl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_pmapImpl___redArg___closed__0_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__1_value)}};
static const lean_object* l_Array_pmapImpl___redArg___closed__7 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__7_value;
static const lean_ctor_object l_Array_pmapImpl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_pmapImpl___redArg___closed__7_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__2_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__3_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__4_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__5_value)}};
static const lean_object* l_Array_pmapImpl___redArg___closed__8 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__8_value;
static const lean_ctor_object l_Array_pmapImpl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_pmapImpl___redArg___closed__8_value),((lean_object*)&l_Array_pmapImpl___redArg___closed__6_value)}};
static const lean_object* l_Array_pmapImpl___redArg___closed__9 = (const lean_object*)&l_Array_pmapImpl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmapImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_pmapImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unattach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_unattach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_unattach(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unattach___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Array_pmap_spec__0___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v_a_3_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
lean_object* v___x_4_; 
lean_dec(v_f_1_);
v___x_4_ = l_List_reverse___redArg(v_a_3_);
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_15_; 
v_head_5_ = lean_ctor_get(v_a_2_, 0);
v_tail_6_ = lean_ctor_get(v_a_2_, 1);
v_isSharedCheck_15_ = !lean_is_exclusive(v_a_2_);
if (v_isSharedCheck_15_ == 0)
{
v___x_8_ = v_a_2_;
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_tail_6_);
lean_inc(v_head_5_);
lean_dec(v_a_2_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_15_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
lean_object* v___x_10_; lean_object* v___x_12_; 
lean_inc(v_f_1_);
v___x_10_ = lean_apply_2(v_f_1_, v_head_5_, lean_box(0));
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 1, v_a_3_);
lean_ctor_set(v___x_8_, 0, v___x_10_);
v___x_12_ = v___x_8_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_14_; 
v_reuseFailAlloc_14_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_14_, 0, v___x_10_);
lean_ctor_set(v_reuseFailAlloc_14_, 1, v_a_3_);
v___x_12_ = v_reuseFailAlloc_14_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
v_a_2_ = v_tail_6_;
v_a_3_ = v___x_12_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_pmap___redArg(lean_object* v_f_16_, lean_object* v_xs_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_18_ = lean_array_to_list(v_xs_17_);
v___x_19_ = l_unsafeCast___redArg(v___x_18_);
lean_dec(v___x_18_);
v___x_20_ = lean_box(0);
v___x_21_ = l_List_mapTR_loop___at___00Array_pmap_spec__0___redArg(v_f_16_, v___x_19_, v___x_20_);
v___x_22_ = lean_array_mk(v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Array_pmap(lean_object* v_00_u03b1_23_, lean_object* v_00_u03b2_24_, lean_object* v_P_25_, lean_object* v_f_26_, lean_object* v_xs_27_, lean_object* v_H_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Array_pmap___redArg(v_f_26_, v_xs_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Array_pmap_spec__0(lean_object* v_00_u03b1_30_, lean_object* v_00_u03b2_31_, lean_object* v_f_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_List_mapTR_loop___at___00Array_pmap_spec__0___redArg(v_f_32_, v_a_33_, v_a_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___redArg(lean_object* v_xs_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_unsafeCast___redArg(v_xs_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___redArg___boxed(lean_object* v_xs_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___redArg(v_xs_38_);
lean_dec_ref(v_xs_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl(lean_object* v_00_u03b1_40_, lean_object* v_xs_41_, lean_object* v_P_42_, lean_object* v_x_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_unsafeCast___redArg(v_xs_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Attach_0__Array_attachWithImpl___boxed(lean_object* v_00_u03b1_45_, lean_object* v_xs_46_, lean_object* v_P_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Init_Data_Array_Attach_0__Array_attachWithImpl(v_00_u03b1_45_, v_xs_46_, v_P_47_, v_x_48_);
lean_dec_ref(v_xs_46_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Array_attach___redArg(lean_object* v_xs_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_unsafeCast___redArg(v_xs_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Array_attach___redArg___boxed(lean_object* v_xs_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Array_attach___redArg(v_xs_52_);
lean_dec_ref(v_xs_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Array_attach(lean_object* v_00_u03b1_54_, lean_object* v_xs_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_unsafeCast___redArg(v_xs_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Array_attach___boxed(lean_object* v_00_u03b1_57_, lean_object* v_xs_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Array_attach(v_00_u03b1_57_, v_xs_58_);
lean_dec_ref(v_xs_58_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg___lam__0(lean_object* v_f_60_, lean_object* v_x_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_apply_2(v_f_60_, v_x_61_, lean_box(0));
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg(lean_object* v_f_82_, lean_object* v_xs_83_){
_start:
{
lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; size_t v_sz_87_; size_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___f_84_ = lean_alloc_closure((void*)(l_Array_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_84_, 0, v_f_82_);
v___x_85_ = l_unsafeCast___redArg(v_xs_83_);
v___x_86_ = ((lean_object*)(l_Array_pmapImpl___redArg___closed__9));
v_sz_87_ = lean_array_size(v___x_85_);
v___x_88_ = ((size_t)0ULL);
v___x_89_ = l_unsafeCast___redArg(v___x_85_);
lean_dec(v___x_85_);
v___x_90_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_86_, v___f_84_, v_sz_87_, v___x_88_, v___x_89_);
v___x_91_ = l_unsafeCast___redArg(v___x_90_);
lean_dec(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Array_pmapImpl___redArg___boxed(lean_object* v_f_92_, lean_object* v_xs_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Array_pmapImpl___redArg(v_f_92_, v_xs_93_);
lean_dec_ref(v_xs_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Array_pmapImpl(lean_object* v_00_u03b1_95_, lean_object* v_00_u03b2_96_, lean_object* v_P_97_, lean_object* v_f_98_, lean_object* v_xs_99_, lean_object* v_H_100_){
_start:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; size_t v_sz_104_; size_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___f_101_ = lean_alloc_closure((void*)(l_Array_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_101_, 0, v_f_98_);
v___x_102_ = l_unsafeCast___redArg(v_xs_99_);
v___x_103_ = ((lean_object*)(l_Array_pmapImpl___redArg___closed__9));
v_sz_104_ = lean_array_size(v___x_102_);
v___x_105_ = ((size_t)0ULL);
v___x_106_ = l_unsafeCast___redArg(v___x_102_);
lean_dec(v___x_102_);
v___x_107_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_103_, v___f_101_, v_sz_104_, v___x_105_, v___x_106_);
v___x_108_ = l_unsafeCast___redArg(v___x_107_);
lean_dec(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Array_pmapImpl___boxed(lean_object* v_00_u03b1_109_, lean_object* v_00_u03b2_110_, lean_object* v_P_111_, lean_object* v_f_112_, lean_object* v_xs_113_, lean_object* v_H_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Array_pmapImpl(v_00_u03b1_109_, v_00_u03b2_110_, v_P_111_, v_f_112_, v_xs_113_, v_H_114_);
lean_dec_ref(v_xs_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(size_t v_sz_116_, size_t v_i_117_, lean_object* v_bs_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_usize_dec_lt(v_i_117_, v_sz_116_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
v___x_120_ = l_unsafeCast___redArg(v_bs_118_);
lean_dec_ref(v_bs_118_);
return v___x_120_;
}
else
{
lean_object* v_v_121_; lean_object* v___x_122_; lean_object* v_bs_x27_123_; lean_object* v___x_124_; size_t v___x_125_; size_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_v_121_ = lean_array_uget(v_bs_118_, v_i_117_);
v___x_122_ = lean_unsigned_to_nat(0u);
v_bs_x27_123_ = lean_array_uset(v_bs_118_, v_i_117_, v___x_122_);
v___x_124_ = l_unsafeCast___redArg(v_v_121_);
lean_dec(v_v_121_);
v___x_125_ = ((size_t)1ULL);
v___x_126_ = lean_usize_add(v_i_117_, v___x_125_);
v___x_127_ = l_unsafeCast___redArg(v___x_124_);
lean_dec(v___x_124_);
v___x_128_ = lean_array_uset(v_bs_x27_123_, v_i_117_, v___x_127_);
v_i_117_ = v___x_126_;
v_bs_118_ = v___x_128_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg___boxed(lean_object* v_sz_130_, lean_object* v_i_131_, lean_object* v_bs_132_){
_start:
{
size_t v_sz_boxed_133_; size_t v_i_boxed_134_; lean_object* v_res_135_; 
v_sz_boxed_133_ = lean_unbox_usize(v_sz_130_);
lean_dec(v_sz_130_);
v_i_boxed_134_ = lean_unbox_usize(v_i_131_);
lean_dec(v_i_131_);
v_res_135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(v_sz_boxed_133_, v_i_boxed_134_, v_bs_132_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Array_unattach___redArg(lean_object* v_xs_136_){
_start:
{
size_t v_sz_137_; size_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_sz_137_ = lean_array_size(v_xs_136_);
v___x_138_ = ((size_t)0ULL);
v___x_139_ = l_unsafeCast___redArg(v_xs_136_);
v___x_140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(v_sz_137_, v___x_138_, v___x_139_);
v___x_141_ = l_unsafeCast___redArg(v___x_140_);
lean_dec_ref(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Array_unattach___redArg___boxed(lean_object* v_xs_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Array_unattach___redArg(v_xs_142_);
lean_dec_ref(v_xs_142_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Array_unattach(lean_object* v_00_u03b1_144_, lean_object* v_p_145_, lean_object* v_xs_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Array_unattach___redArg(v_xs_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Array_unattach___boxed(lean_object* v_00_u03b1_148_, lean_object* v_p_149_, lean_object* v_xs_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Array_unattach(v_00_u03b1_148_, v_p_149_, v_xs_150_);
lean_dec_ref(v_xs_150_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0(lean_object* v_00_u03b1_152_, size_t v_sz_153_, size_t v_i_154_, lean_object* v_bs_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(v_sz_153_, v_i_154_, v_bs_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___boxed(lean_object* v_00_u03b1_157_, lean_object* v_sz_158_, lean_object* v_i_159_, lean_object* v_bs_160_){
_start:
{
size_t v_sz_boxed_161_; size_t v_i_boxed_162_; lean_object* v_res_163_; 
v_sz_boxed_161_ = lean_unbox_usize(v_sz_158_);
lean_dec(v_sz_158_);
v_i_boxed_162_ = lean_unbox_usize(v_i_159_);
lean_dec(v_i_159_);
v_res_163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0(v_00_u03b1_157_, v_sz_boxed_161_, v_i_boxed_162_, v_bs_160_);
return v_res_163_;
}
}
lean_object* runtime_initialize_Init_Data_List_Attach(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Count(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_List_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Attach(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_List_Attach(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Count(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Attach(builtin);
}
#ifdef __cplusplus
}
#endif

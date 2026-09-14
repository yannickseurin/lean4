// Lean compiler output
// Module: Init.Data.Vector.Attach
// Imports: public import Init.Data.Vector.Lemmas import all Init.Data.Array.Attach
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmap___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_attach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_attach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_attach(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_attach___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__0 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__0_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__1 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__1_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__2 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__2_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__3 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__3_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__4 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__4_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__5 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__5_value;
static const lean_closure_object l_Vector_pmapImpl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_pmapImpl___redArg___closed__6 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__6_value;
static const lean_ctor_object l_Vector_pmapImpl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_pmapImpl___redArg___closed__0_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__1_value)}};
static const lean_object* l_Vector_pmapImpl___redArg___closed__7 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__7_value;
static const lean_ctor_object l_Vector_pmapImpl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_pmapImpl___redArg___closed__7_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__2_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__3_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__4_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__5_value)}};
static const lean_object* l_Vector_pmapImpl___redArg___closed__8 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__8_value;
static const lean_ctor_object l_Vector_pmapImpl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_pmapImpl___redArg___closed__8_value),((lean_object*)&l_Vector_pmapImpl___redArg___closed__6_value)}};
static const lean_object* l_Vector_pmapImpl___redArg___closed__9 = (const lean_object*)&l_Vector_pmapImpl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmapImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_pmapImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unattach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_unattach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Vector_unattach(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_unattach___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg(lean_object* v_f_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_f_1_);
v___x_6_ = l_unsafeCast___redArg(v_bs_4_);
lean_dec_ref(v_bs_4_);
return v___x_6_;
}
else
{
lean_object* v_v_7_; lean_object* v___x_8_; lean_object* v_bs_x27_9_; lean_object* v_val_10_; lean_object* v___x_11_; size_t v___x_12_; size_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_v_7_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_8_ = lean_unsigned_to_nat(0u);
v_bs_x27_9_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_8_);
v_val_10_ = l_unsafeCast___redArg(v_v_7_);
lean_dec(v_v_7_);
lean_inc(v_f_1_);
v___x_11_ = lean_apply_2(v_f_1_, v_val_10_, lean_box(0));
v___x_12_ = ((size_t)1ULL);
v___x_13_ = lean_usize_add(v_i_3_, v___x_12_);
v___x_14_ = l_unsafeCast___redArg(v___x_11_);
lean_dec(v___x_11_);
v___x_15_ = lean_array_uset(v_bs_x27_9_, v_i_3_, v___x_14_);
v_i_3_ = v___x_13_;
v_bs_4_ = v___x_15_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg___boxed(lean_object* v_f_17_, lean_object* v_sz_18_, lean_object* v_i_19_, lean_object* v_bs_20_){
_start:
{
size_t v_sz_boxed_21_; size_t v_i_boxed_22_; lean_object* v_res_23_; 
v_sz_boxed_21_ = lean_unbox_usize(v_sz_18_);
lean_dec(v_sz_18_);
v_i_boxed_22_ = lean_unbox_usize(v_i_19_);
lean_dec(v_i_19_);
v_res_23_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg(v_f_17_, v_sz_boxed_21_, v_i_boxed_22_, v_bs_20_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmap___redArg(lean_object* v_f_24_, lean_object* v_xs_25_){
_start:
{
lean_object* v___x_26_; size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_26_ = l_unsafeCast___redArg(v_xs_25_);
v_sz_27_ = lean_array_size(v___x_26_);
v___x_28_ = ((size_t)0ULL);
v___x_29_ = l_unsafeCast___redArg(v___x_26_);
lean_dec(v___x_26_);
v___x_30_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg(v_f_24_, v_sz_27_, v___x_28_, v___x_29_);
v___x_31_ = l_unsafeCast___redArg(v___x_30_);
lean_dec_ref(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmap___redArg___boxed(lean_object* v_f_32_, lean_object* v_xs_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Vector_pmap___redArg(v_f_32_, v_xs_33_);
lean_dec_ref(v_xs_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmap(lean_object* v_00_u03b1_35_, lean_object* v_00_u03b2_36_, lean_object* v_n_37_, lean_object* v_P_38_, lean_object* v_f_39_, lean_object* v_xs_40_, lean_object* v_H_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Vector_pmap___redArg(v_f_39_, v_xs_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmap___boxed(lean_object* v_00_u03b1_43_, lean_object* v_00_u03b2_44_, lean_object* v_n_45_, lean_object* v_P_46_, lean_object* v_f_47_, lean_object* v_xs_48_, lean_object* v_H_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Vector_pmap(v_00_u03b1_43_, v_00_u03b2_44_, v_n_45_, v_P_46_, v_f_47_, v_xs_48_, v_H_49_);
lean_dec_ref(v_xs_48_);
lean_dec(v_n_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0(lean_object* v_00_u03b1_51_, lean_object* v_00_u03b2_52_, lean_object* v_f_53_, size_t v_sz_54_, size_t v_i_55_, lean_object* v_bs_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___redArg(v_f_53_, v_sz_54_, v_i_55_, v_bs_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0___boxed(lean_object* v_00_u03b1_58_, lean_object* v_00_u03b2_59_, lean_object* v_f_60_, lean_object* v_sz_61_, lean_object* v_i_62_, lean_object* v_bs_63_){
_start:
{
size_t v_sz_boxed_64_; size_t v_i_boxed_65_; lean_object* v_res_66_; 
v_sz_boxed_64_ = lean_unbox_usize(v_sz_61_);
lean_dec(v_sz_61_);
v_i_boxed_65_ = lean_unbox_usize(v_i_62_);
lean_dec(v_i_62_);
v_res_66_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vector_pmap_spec__0(v_00_u03b1_58_, v_00_u03b2_59_, v_f_60_, v_sz_boxed_64_, v_i_boxed_65_, v_bs_63_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___redArg(lean_object* v_xs_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_unsafeCast___redArg(v_xs_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___redArg___boxed(lean_object* v_xs_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___redArg(v_xs_69_);
lean_dec_ref(v_xs_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl(lean_object* v_00_u03b1_71_, lean_object* v_n_72_, lean_object* v_xs_73_, lean_object* v_P_74_, lean_object* v_x_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_unsafeCast___redArg(v_xs_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl___boxed(lean_object* v_00_u03b1_77_, lean_object* v_n_78_, lean_object* v_xs_79_, lean_object* v_P_80_, lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Init_Data_Vector_Attach_0__Vector_attachWithImpl(v_00_u03b1_77_, v_n_78_, v_xs_79_, v_P_80_, v_x_81_);
lean_dec_ref(v_xs_79_);
lean_dec(v_n_78_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Vector_attach___redArg(lean_object* v_xs_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_unsafeCast___redArg(v_xs_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Vector_attach___redArg___boxed(lean_object* v_xs_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Vector_attach___redArg(v_xs_85_);
lean_dec_ref(v_xs_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Vector_attach(lean_object* v_00_u03b1_87_, lean_object* v_n_88_, lean_object* v_xs_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_unsafeCast___redArg(v_xs_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Vector_attach___boxed(lean_object* v_00_u03b1_91_, lean_object* v_n_92_, lean_object* v_xs_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Vector_attach(v_00_u03b1_91_, v_n_92_, v_xs_93_);
lean_dec_ref(v_xs_93_);
lean_dec(v_n_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg___lam__0(lean_object* v_f_95_, lean_object* v_x_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_apply_2(v_f_95_, v_x_96_, lean_box(0));
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg(lean_object* v_f_117_, lean_object* v_xs_118_){
_start:
{
lean_object* v___f_119_; lean_object* v___x_120_; lean_object* v___x_121_; size_t v_sz_122_; size_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___f_119_ = lean_alloc_closure((void*)(l_Vector_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_119_, 0, v_f_117_);
v___x_120_ = l_unsafeCast___redArg(v_xs_118_);
v___x_121_ = ((lean_object*)(l_Vector_pmapImpl___redArg___closed__9));
v_sz_122_ = lean_array_size(v___x_120_);
v___x_123_ = ((size_t)0ULL);
v___x_124_ = l_unsafeCast___redArg(v___x_120_);
lean_dec(v___x_120_);
v___x_125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v___f_119_, v_sz_122_, v___x_123_, v___x_124_);
v___x_126_ = l_unsafeCast___redArg(v___x_125_);
lean_dec(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmapImpl___redArg___boxed(lean_object* v_f_127_, lean_object* v_xs_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Vector_pmapImpl___redArg(v_f_127_, v_xs_128_);
lean_dec_ref(v_xs_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmapImpl(lean_object* v_00_u03b1_130_, lean_object* v_00_u03b2_131_, lean_object* v_n_132_, lean_object* v_P_133_, lean_object* v_f_134_, lean_object* v_xs_135_, lean_object* v_H_136_){
_start:
{
lean_object* v___f_137_; lean_object* v___x_138_; lean_object* v___x_139_; size_t v_sz_140_; size_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___f_137_ = lean_alloc_closure((void*)(l_Vector_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_137_, 0, v_f_134_);
v___x_138_ = l_unsafeCast___redArg(v_xs_135_);
v___x_139_ = ((lean_object*)(l_Vector_pmapImpl___redArg___closed__9));
v_sz_140_ = lean_array_size(v___x_138_);
v___x_141_ = ((size_t)0ULL);
v___x_142_ = l_unsafeCast___redArg(v___x_138_);
lean_dec(v___x_138_);
v___x_143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_139_, v___f_137_, v_sz_140_, v___x_141_, v___x_142_);
v___x_144_ = l_unsafeCast___redArg(v___x_143_);
lean_dec(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Vector_pmapImpl___boxed(lean_object* v_00_u03b1_145_, lean_object* v_00_u03b2_146_, lean_object* v_n_147_, lean_object* v_P_148_, lean_object* v_f_149_, lean_object* v_xs_150_, lean_object* v_H_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Vector_pmapImpl(v_00_u03b1_145_, v_00_u03b2_146_, v_n_147_, v_P_148_, v_f_149_, v_xs_150_, v_H_151_);
lean_dec_ref(v_xs_150_);
lean_dec(v_n_147_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Vector_unattach___redArg(lean_object* v_xs_153_){
_start:
{
size_t v_sz_154_; size_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_sz_154_ = lean_array_size(v_xs_153_);
v___x_155_ = ((size_t)0ULL);
v___x_156_ = l_unsafeCast___redArg(v_xs_153_);
v___x_157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_unattach_spec__0___redArg(v_sz_154_, v___x_155_, v___x_156_);
v___x_158_ = l_unsafeCast___redArg(v___x_157_);
lean_dec_ref(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Vector_unattach___redArg___boxed(lean_object* v_xs_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Vector_unattach___redArg(v_xs_159_);
lean_dec_ref(v_xs_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Vector_unattach(lean_object* v_n_161_, lean_object* v_00_u03b1_162_, lean_object* v_p_163_, lean_object* v_xs_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l_Vector_unattach___redArg(v_xs_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Vector_unattach___boxed(lean_object* v_n_166_, lean_object* v_00_u03b1_167_, lean_object* v_p_168_, lean_object* v_xs_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Vector_unattach(v_n_166_, v_00_u03b1_167_, v_p_168_, v_xs_169_);
lean_dec_ref(v_xs_169_);
lean_dec(v_n_166_);
return v_res_170_;
}
}
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Attach(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Attach(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Attach(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Attach(builtin);
}
#ifdef __cplusplus
}
#endif

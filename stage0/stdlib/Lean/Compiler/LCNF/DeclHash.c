// Lean compiler output
// Module: Lean.Compiler.LCNF.DeclHash
// Imports: public import Lean.Compiler.LCNF.Basic
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
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint64_t l_Lean_Compiler_LCNF_instHashableLetValue_hash(uint8_t, lean_object*);
uint64_t l_Lean_Compiler_LCNF_instHashableArg_hash___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint64_t l_Lean_Compiler_LCNF_instHashableCtorInfo_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t l_Lean_instHashableExternAttrData_hash(lean_object*);
uint64_t l_Lean_Compiler_instHashableInlineAttributeKind_hash(uint8_t);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instHashableParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instHashableParam___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashParams___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashParams___redArg___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashParams(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashAlts(uint8_t, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashCode(uint8_t, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashAlt(uint8_t, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3(uint8_t, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashAlts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashAlt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1(uint8_t, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableCode___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableDeclValue_hash(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue_hash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue___boxed(lean_object*);
LEAN_EXPORT uint64_t l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableSignature_hash(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature_hash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableDecl_hash(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl_hash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0(lean_object* v_p_1_){
_start:
{
lean_object* v_fvarId_2_; lean_object* v_type_3_; uint64_t v___x_4_; uint64_t v___x_5_; uint64_t v___x_6_; 
v_fvarId_2_ = lean_ctor_get(v_p_1_, 0);
v_type_3_ = lean_ctor_get(v_p_1_, 2);
v___x_4_ = l_Lean_instHashableFVarId_hash(v_fvarId_2_);
v___x_5_ = l_Lean_Expr_hash(v_type_3_);
v___x_6_ = lean_uint64_mix_hash(v___x_4_, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0___boxed(lean_object* v_p_7_){
_start:
{
uint64_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Lean_Compiler_LCNF_instHashableParam___redArg___lam__0(v_p_7_);
lean_dec_ref(v_p_7_);
v_r_9_ = lean_box_uint64(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg(){
_start:
{
lean_object* v___f_12_; 
v___f_12_ = ((lean_object*)(l_Lean_Compiler_LCNF_instHashableParam___redArg___closed__0));
return v___f_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___redArg___boxed(lean_object* v___dummy_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_Compiler_LCNF_instHashableParam___redArg();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam(uint8_t v_pu_15_){
_start:
{
lean_object* v___f_16_; 
v___f_16_ = ((lean_object*)(l_Lean_Compiler_LCNF_instHashableParam___redArg___closed__0));
return v___f_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableParam___boxed(lean_object* v_pu_17_){
_start:
{
uint8_t v_pu_boxed_18_; lean_object* v_res_19_; 
v_pu_boxed_18_ = lean_unbox(v_pu_17_);
v_res_19_ = l_Lean_Compiler_LCNF_instHashableParam(v_pu_boxed_18_);
return v_res_19_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(lean_object* v_as_20_, size_t v_i_21_, size_t v_stop_22_, uint64_t v_b_23_){
_start:
{
uint8_t v___x_24_; 
v___x_24_ = lean_usize_dec_eq(v_i_21_, v_stop_22_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v_fvarId_26_; lean_object* v_type_27_; uint64_t v___x_28_; uint64_t v___x_29_; uint64_t v___x_30_; uint64_t v___x_31_; size_t v___x_32_; size_t v___x_33_; 
v___x_25_ = lean_array_uget_borrowed(v_as_20_, v_i_21_);
v_fvarId_26_ = lean_ctor_get(v___x_25_, 0);
v_type_27_ = lean_ctor_get(v___x_25_, 2);
v___x_28_ = l_Lean_instHashableFVarId_hash(v_fvarId_26_);
v___x_29_ = l_Lean_Expr_hash(v_type_27_);
v___x_30_ = lean_uint64_mix_hash(v___x_28_, v___x_29_);
v___x_31_ = lean_uint64_mix_hash(v_b_23_, v___x_30_);
v___x_32_ = ((size_t)1ULL);
v___x_33_ = lean_usize_add(v_i_21_, v___x_32_);
v_i_21_ = v___x_33_;
v_b_23_ = v___x_31_;
goto _start;
}
else
{
return v_b_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0___boxed(lean_object* v_as_35_, lean_object* v_i_36_, lean_object* v_stop_37_, lean_object* v_b_38_){
_start:
{
size_t v_i_boxed_39_; size_t v_stop_boxed_40_; uint64_t v_b_boxed_41_; uint64_t v_res_42_; lean_object* v_r_43_; 
v_i_boxed_39_ = lean_unbox_usize(v_i_36_);
lean_dec(v_i_36_);
v_stop_boxed_40_ = lean_unbox_usize(v_stop_37_);
lean_dec(v_stop_37_);
v_b_boxed_41_ = lean_unbox_uint64(v_b_38_);
lean_dec_ref(v_b_38_);
v_res_42_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(v_as_35_, v_i_boxed_39_, v_stop_boxed_40_, v_b_boxed_41_);
lean_dec_ref(v_as_35_);
v_r_43_ = lean_box_uint64(v_res_42_);
return v_r_43_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashParams___redArg(lean_object* v_ps_44_){
_start:
{
uint64_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v___x_45_ = 7ULL;
v___x_46_ = lean_unsigned_to_nat(0u);
v___x_47_ = lean_array_get_size(v_ps_44_);
v___x_48_ = lean_nat_dec_lt(v___x_46_, v___x_47_);
if (v___x_48_ == 0)
{
return v___x_45_;
}
else
{
size_t v___x_49_; size_t v___x_50_; uint64_t v___x_51_; 
v___x_49_ = ((size_t)0ULL);
v___x_50_ = lean_usize_of_nat(v___x_47_);
v___x_51_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(v_ps_44_, v___x_49_, v___x_50_, v___x_45_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashParams___redArg___boxed(lean_object* v_ps_52_){
_start:
{
uint64_t v_res_53_; lean_object* v_r_54_; 
v_res_53_ = l_Lean_Compiler_LCNF_hashParams___redArg(v_ps_52_);
lean_dec_ref(v_ps_52_);
v_r_54_ = lean_box_uint64(v_res_53_);
return v_r_54_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashParams(uint8_t v_pu_55_, lean_object* v_ps_56_){
_start:
{
uint64_t v___x_57_; 
v___x_57_ = l_Lean_Compiler_LCNF_hashParams___redArg(v_ps_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashParams___boxed(lean_object* v_pu_58_, lean_object* v_ps_59_){
_start:
{
uint8_t v_pu_boxed_60_; uint64_t v_res_61_; lean_object* v_r_62_; 
v_pu_boxed_60_ = lean_unbox(v_pu_58_);
v_res_61_ = l_Lean_Compiler_LCNF_hashParams(v_pu_boxed_60_, v_ps_59_);
lean_dec_ref(v_ps_59_);
v_r_62_ = lean_box_uint64(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg(lean_object* v_as_63_, size_t v_i_64_, size_t v_stop_65_, uint64_t v_b_66_){
_start:
{
uint8_t v___x_67_; 
v___x_67_ = lean_usize_dec_eq(v_i_64_, v_stop_65_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint64_t v___x_69_; uint64_t v___x_70_; size_t v___x_71_; size_t v___x_72_; 
v___x_68_ = lean_array_uget_borrowed(v_as_63_, v_i_64_);
v___x_69_ = l_Lean_Compiler_LCNF_instHashableArg_hash___redArg(v___x_68_);
v___x_70_ = lean_uint64_mix_hash(v_b_66_, v___x_69_);
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_add(v_i_64_, v___x_71_);
v_i_64_ = v___x_72_;
v_b_66_ = v___x_70_;
goto _start;
}
else
{
return v_b_66_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg___boxed(lean_object* v_as_74_, lean_object* v_i_75_, lean_object* v_stop_76_, lean_object* v_b_77_){
_start:
{
size_t v_i_boxed_78_; size_t v_stop_boxed_79_; uint64_t v_b_boxed_80_; uint64_t v_res_81_; lean_object* v_r_82_; 
v_i_boxed_78_ = lean_unbox_usize(v_i_75_);
lean_dec(v_i_75_);
v_stop_boxed_79_ = lean_unbox_usize(v_stop_76_);
lean_dec(v_stop_76_);
v_b_boxed_80_ = lean_unbox_uint64(v_b_77_);
lean_dec_ref(v_b_77_);
v_res_81_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg(v_as_74_, v_i_boxed_78_, v_stop_boxed_79_, v_b_boxed_80_);
lean_dec_ref(v_as_74_);
v_r_82_ = lean_box_uint64(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashAlts(uint8_t v_pu_83_, lean_object* v_alts_84_){
_start:
{
uint64_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_85_ = 7ULL;
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_array_get_size(v_alts_84_);
v___x_88_ = lean_nat_dec_lt(v___x_86_, v___x_87_);
if (v___x_88_ == 0)
{
return v___x_85_;
}
else
{
uint8_t v___x_89_; 
v___x_89_ = lean_nat_dec_le(v___x_87_, v___x_87_);
if (v___x_89_ == 0)
{
if (v___x_88_ == 0)
{
return v___x_85_;
}
else
{
size_t v___x_90_; size_t v___x_91_; uint64_t v___x_92_; 
v___x_90_ = ((size_t)0ULL);
v___x_91_ = lean_usize_of_nat(v___x_87_);
v___x_92_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3(v_pu_83_, v_alts_84_, v___x_90_, v___x_91_, v___x_85_);
return v___x_92_;
}
}
else
{
size_t v___x_93_; size_t v___x_94_; uint64_t v___x_95_; 
v___x_93_ = ((size_t)0ULL);
v___x_94_ = lean_usize_of_nat(v___x_87_);
v___x_95_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3(v_pu_83_, v_alts_84_, v___x_93_, v___x_94_, v___x_85_);
return v___x_95_;
}
}
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashCode(uint8_t v_pu_96_, lean_object* v_code_97_){
_start:
{
switch(lean_obj_tag(v_code_97_))
{
case 0:
{
lean_object* v_decl_98_; lean_object* v_k_99_; lean_object* v_fvarId_100_; lean_object* v_type_101_; lean_object* v_value_102_; uint64_t v___x_103_; uint64_t v___x_104_; uint64_t v___x_105_; uint64_t v___x_106_; uint64_t v___x_107_; uint64_t v___x_108_; uint64_t v___x_109_; 
v_decl_98_ = lean_ctor_get(v_code_97_, 0);
v_k_99_ = lean_ctor_get(v_code_97_, 1);
v_fvarId_100_ = lean_ctor_get(v_decl_98_, 0);
v_type_101_ = lean_ctor_get(v_decl_98_, 2);
v_value_102_ = lean_ctor_get(v_decl_98_, 3);
v___x_103_ = l_Lean_instHashableFVarId_hash(v_fvarId_100_);
v___x_104_ = l_Lean_Expr_hash(v_type_101_);
v___x_105_ = lean_uint64_mix_hash(v___x_103_, v___x_104_);
v___x_106_ = l_Lean_Compiler_LCNF_instHashableLetValue_hash(v_pu_96_, v_value_102_);
v___x_107_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_99_);
v___x_108_ = lean_uint64_mix_hash(v___x_106_, v___x_107_);
v___x_109_ = lean_uint64_mix_hash(v___x_105_, v___x_108_);
return v___x_109_;
}
case 3:
{
lean_object* v_fvarId_110_; lean_object* v_args_111_; uint64_t v___x_112_; uint64_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v_fvarId_110_ = lean_ctor_get(v_code_97_, 0);
v_args_111_ = lean_ctor_get(v_code_97_, 1);
v___x_112_ = l_Lean_instHashableFVarId_hash(v_fvarId_110_);
v___x_113_ = 7ULL;
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_array_get_size(v_args_111_);
v___x_116_ = lean_nat_dec_lt(v___x_114_, v___x_115_);
if (v___x_116_ == 0)
{
uint64_t v___x_117_; 
v___x_117_ = lean_uint64_mix_hash(v___x_112_, v___x_113_);
return v___x_117_;
}
else
{
size_t v___x_118_; size_t v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; 
v___x_118_ = ((size_t)0ULL);
v___x_119_ = lean_usize_of_nat(v___x_115_);
v___x_120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg(v_args_111_, v___x_118_, v___x_119_, v___x_113_);
v___x_121_ = lean_uint64_mix_hash(v___x_112_, v___x_120_);
return v___x_121_;
}
}
case 4:
{
lean_object* v_cases_122_; lean_object* v_resultType_123_; lean_object* v_discr_124_; lean_object* v_alts_125_; uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v___x_128_; uint64_t v___x_129_; uint64_t v___x_130_; 
v_cases_122_ = lean_ctor_get(v_code_97_, 0);
v_resultType_123_ = lean_ctor_get(v_cases_122_, 1);
v_discr_124_ = lean_ctor_get(v_cases_122_, 2);
v_alts_125_ = lean_ctor_get(v_cases_122_, 3);
v___x_126_ = l_Lean_instHashableFVarId_hash(v_discr_124_);
v___x_127_ = l_Lean_Expr_hash(v_resultType_123_);
v___x_128_ = lean_uint64_mix_hash(v___x_126_, v___x_127_);
v___x_129_ = l_Lean_Compiler_LCNF_hashAlts(v_pu_96_, v_alts_125_);
v___x_130_ = lean_uint64_mix_hash(v___x_128_, v___x_129_);
return v___x_130_;
}
case 5:
{
lean_object* v_fvarId_131_; uint64_t v___x_132_; 
v_fvarId_131_ = lean_ctor_get(v_code_97_, 0);
v___x_132_ = l_Lean_instHashableFVarId_hash(v_fvarId_131_);
return v___x_132_;
}
case 6:
{
lean_object* v_type_133_; uint64_t v___x_134_; 
v_type_133_ = lean_ctor_get(v_code_97_, 0);
v___x_134_ = l_Lean_Expr_hash(v_type_133_);
return v___x_134_;
}
case 7:
{
lean_object* v_fvarId_135_; lean_object* v_i_136_; lean_object* v_y_137_; lean_object* v_k_138_; uint64_t v___x_139_; uint64_t v___x_140_; uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; 
v_fvarId_135_ = lean_ctor_get(v_code_97_, 0);
v_i_136_ = lean_ctor_get(v_code_97_, 1);
v_y_137_ = lean_ctor_get(v_code_97_, 2);
v_k_138_ = lean_ctor_get(v_code_97_, 3);
v___x_139_ = l_Lean_instHashableFVarId_hash(v_fvarId_135_);
v___x_140_ = lean_uint64_of_nat(v_i_136_);
v___x_141_ = lean_uint64_mix_hash(v___x_139_, v___x_140_);
v___x_142_ = l_Lean_Compiler_LCNF_instHashableArg_hash___redArg(v_y_137_);
v___x_143_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_138_);
v___x_144_ = lean_uint64_mix_hash(v___x_142_, v___x_143_);
v___x_145_ = lean_uint64_mix_hash(v___x_141_, v___x_144_);
return v___x_145_;
}
case 8:
{
lean_object* v_fvarId_146_; lean_object* v_i_147_; lean_object* v_y_148_; lean_object* v_k_149_; uint64_t v___x_150_; uint64_t v___x_151_; uint64_t v___x_152_; uint64_t v___x_153_; uint64_t v___x_154_; uint64_t v___x_155_; uint64_t v___x_156_; 
v_fvarId_146_ = lean_ctor_get(v_code_97_, 0);
v_i_147_ = lean_ctor_get(v_code_97_, 1);
v_y_148_ = lean_ctor_get(v_code_97_, 2);
v_k_149_ = lean_ctor_get(v_code_97_, 3);
v___x_150_ = l_Lean_instHashableFVarId_hash(v_fvarId_146_);
v___x_151_ = lean_uint64_of_nat(v_i_147_);
v___x_152_ = lean_uint64_mix_hash(v___x_150_, v___x_151_);
v___x_153_ = l_Lean_instHashableFVarId_hash(v_y_148_);
v___x_154_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_149_);
v___x_155_ = lean_uint64_mix_hash(v___x_153_, v___x_154_);
v___x_156_ = lean_uint64_mix_hash(v___x_152_, v___x_155_);
return v___x_156_;
}
case 9:
{
lean_object* v_fvarId_157_; lean_object* v_i_158_; lean_object* v_offset_159_; lean_object* v_y_160_; lean_object* v_ty_161_; lean_object* v_k_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v___x_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; uint64_t v___x_171_; uint64_t v___x_172_; uint64_t v___x_173_; 
v_fvarId_157_ = lean_ctor_get(v_code_97_, 0);
v_i_158_ = lean_ctor_get(v_code_97_, 1);
v_offset_159_ = lean_ctor_get(v_code_97_, 2);
v_y_160_ = lean_ctor_get(v_code_97_, 3);
v_ty_161_ = lean_ctor_get(v_code_97_, 4);
v_k_162_ = lean_ctor_get(v_code_97_, 5);
v___x_163_ = l_Lean_instHashableFVarId_hash(v_fvarId_157_);
v___x_164_ = lean_uint64_of_nat(v_i_158_);
v___x_165_ = lean_uint64_mix_hash(v___x_163_, v___x_164_);
v___x_166_ = lean_uint64_of_nat(v_offset_159_);
v___x_167_ = l_Lean_instHashableFVarId_hash(v_y_160_);
v___x_168_ = lean_uint64_mix_hash(v___x_166_, v___x_167_);
v___x_169_ = l_Lean_Expr_hash(v_ty_161_);
v___x_170_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_162_);
v___x_171_ = lean_uint64_mix_hash(v___x_169_, v___x_170_);
v___x_172_ = lean_uint64_mix_hash(v___x_168_, v___x_171_);
v___x_173_ = lean_uint64_mix_hash(v___x_165_, v___x_172_);
return v___x_173_;
}
case 10:
{
lean_object* v_fvarId_174_; lean_object* v_cidx_175_; lean_object* v_k_176_; uint64_t v___x_177_; uint64_t v___x_178_; uint64_t v___x_179_; uint64_t v___x_180_; uint64_t v___x_181_; 
v_fvarId_174_ = lean_ctor_get(v_code_97_, 0);
v_cidx_175_ = lean_ctor_get(v_code_97_, 1);
v_k_176_ = lean_ctor_get(v_code_97_, 2);
v___x_177_ = l_Lean_instHashableFVarId_hash(v_fvarId_174_);
v___x_178_ = lean_uint64_of_nat(v_cidx_175_);
v___x_179_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_176_);
v___x_180_ = lean_uint64_mix_hash(v___x_178_, v___x_179_);
v___x_181_ = lean_uint64_mix_hash(v___x_177_, v___x_180_);
return v___x_181_;
}
case 11:
{
lean_object* v_fvarId_182_; lean_object* v_n_183_; uint8_t v_check_184_; uint8_t v_persistent_185_; lean_object* v_k_186_; uint64_t v___x_187_; uint64_t v___x_188_; uint64_t v___x_189_; uint64_t v___y_191_; uint64_t v___y_192_; uint64_t v___y_198_; 
v_fvarId_182_ = lean_ctor_get(v_code_97_, 0);
v_n_183_ = lean_ctor_get(v_code_97_, 1);
v_check_184_ = lean_ctor_get_uint8(v_code_97_, sizeof(void*)*3);
v_persistent_185_ = lean_ctor_get_uint8(v_code_97_, sizeof(void*)*3 + 1);
v_k_186_ = lean_ctor_get(v_code_97_, 2);
v___x_187_ = l_Lean_instHashableFVarId_hash(v_fvarId_182_);
v___x_188_ = lean_uint64_of_nat(v_n_183_);
v___x_189_ = lean_uint64_mix_hash(v___x_187_, v___x_188_);
if (v_persistent_185_ == 0)
{
uint64_t v___x_201_; 
v___x_201_ = 13ULL;
v___y_198_ = v___x_201_;
goto v___jp_197_;
}
else
{
uint64_t v___x_202_; 
v___x_202_ = 11ULL;
v___y_198_ = v___x_202_;
goto v___jp_197_;
}
v___jp_190_:
{
uint64_t v___x_193_; uint64_t v___x_194_; uint64_t v___x_195_; uint64_t v___x_196_; 
v___x_193_ = lean_uint64_mix_hash(v___y_191_, v___y_192_);
v___x_194_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_186_);
v___x_195_ = lean_uint64_mix_hash(v___x_193_, v___x_194_);
v___x_196_ = lean_uint64_mix_hash(v___x_189_, v___x_195_);
return v___x_196_;
}
v___jp_197_:
{
if (v_check_184_ == 0)
{
uint64_t v___x_199_; 
v___x_199_ = 13ULL;
v___y_191_ = v___y_198_;
v___y_192_ = v___x_199_;
goto v___jp_190_;
}
else
{
uint64_t v___x_200_; 
v___x_200_ = 11ULL;
v___y_191_ = v___y_198_;
v___y_192_ = v___x_200_;
goto v___jp_190_;
}
}
}
case 12:
{
lean_object* v_fvarId_203_; lean_object* v_n_204_; uint8_t v_check_205_; uint8_t v_persistent_206_; lean_object* v_objs_x3f_207_; lean_object* v_k_208_; uint64_t v___x_209_; uint64_t v___x_210_; uint64_t v___x_211_; uint64_t v___y_213_; uint64_t v___y_214_; uint64_t v___y_220_; uint64_t v___y_221_; uint64_t v___y_229_; 
v_fvarId_203_ = lean_ctor_get(v_code_97_, 0);
v_n_204_ = lean_ctor_get(v_code_97_, 1);
v_check_205_ = lean_ctor_get_uint8(v_code_97_, sizeof(void*)*4);
v_persistent_206_ = lean_ctor_get_uint8(v_code_97_, sizeof(void*)*4 + 1);
v_objs_x3f_207_ = lean_ctor_get(v_code_97_, 2);
v_k_208_ = lean_ctor_get(v_code_97_, 3);
v___x_209_ = l_Lean_instHashableFVarId_hash(v_fvarId_203_);
v___x_210_ = lean_uint64_of_nat(v_n_204_);
v___x_211_ = lean_uint64_mix_hash(v___x_209_, v___x_210_);
if (v_persistent_206_ == 0)
{
uint64_t v___x_232_; 
v___x_232_ = 13ULL;
v___y_229_ = v___x_232_;
goto v___jp_228_;
}
else
{
uint64_t v___x_233_; 
v___x_233_ = 11ULL;
v___y_229_ = v___x_233_;
goto v___jp_228_;
}
v___jp_212_:
{
uint64_t v___x_215_; uint64_t v___x_216_; uint64_t v___x_217_; uint64_t v___x_218_; 
v___x_215_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_208_);
v___x_216_ = lean_uint64_mix_hash(v___y_214_, v___x_215_);
v___x_217_ = lean_uint64_mix_hash(v___y_213_, v___x_216_);
v___x_218_ = lean_uint64_mix_hash(v___x_211_, v___x_217_);
return v___x_218_;
}
v___jp_219_:
{
uint64_t v___x_222_; 
v___x_222_ = lean_uint64_mix_hash(v___y_220_, v___y_221_);
if (lean_obj_tag(v_objs_x3f_207_) == 0)
{
uint64_t v___x_223_; 
v___x_223_ = 11ULL;
v___y_213_ = v___x_222_;
v___y_214_ = v___x_223_;
goto v___jp_212_;
}
else
{
lean_object* v_val_224_; uint64_t v___x_225_; uint64_t v___x_226_; uint64_t v___x_227_; 
v_val_224_ = lean_ctor_get(v_objs_x3f_207_, 0);
v___x_225_ = lean_uint64_of_nat(v_val_224_);
v___x_226_ = 13ULL;
v___x_227_ = lean_uint64_mix_hash(v___x_225_, v___x_226_);
v___y_213_ = v___x_222_;
v___y_214_ = v___x_227_;
goto v___jp_212_;
}
}
v___jp_228_:
{
if (v_check_205_ == 0)
{
uint64_t v___x_230_; 
v___x_230_ = 13ULL;
v___y_220_ = v___y_229_;
v___y_221_ = v___x_230_;
goto v___jp_219_;
}
else
{
uint64_t v___x_231_; 
v___x_231_ = 11ULL;
v___y_220_ = v___y_229_;
v___y_221_ = v___x_231_;
goto v___jp_219_;
}
}
}
case 13:
{
lean_object* v_fvarId_234_; lean_object* v_k_235_; uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; 
v_fvarId_234_ = lean_ctor_get(v_code_97_, 0);
v_k_235_ = lean_ctor_get(v_code_97_, 1);
v___x_236_ = l_Lean_instHashableFVarId_hash(v_fvarId_234_);
v___x_237_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_235_);
v___x_238_ = lean_uint64_mix_hash(v___x_236_, v___x_237_);
return v___x_238_;
}
default: 
{
lean_object* v_decl_239_; lean_object* v_k_240_; lean_object* v_fvarId_241_; lean_object* v_params_242_; lean_object* v_type_243_; lean_object* v_value_244_; uint64_t v___x_245_; uint64_t v___x_246_; uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v___x_251_; uint64_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v_decl_239_ = lean_ctor_get(v_code_97_, 0);
v_k_240_ = lean_ctor_get(v_code_97_, 1);
v_fvarId_241_ = lean_ctor_get(v_decl_239_, 0);
v_params_242_ = lean_ctor_get(v_decl_239_, 2);
v_type_243_ = lean_ctor_get(v_decl_239_, 3);
v_value_244_ = lean_ctor_get(v_decl_239_, 4);
v___x_245_ = l_Lean_instHashableFVarId_hash(v_fvarId_241_);
v___x_246_ = l_Lean_Expr_hash(v_type_243_);
v___x_247_ = lean_uint64_mix_hash(v___x_245_, v___x_246_);
v___x_248_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_value_244_);
v___x_249_ = l_Lean_Compiler_LCNF_hashCode(v_pu_96_, v_k_240_);
v___x_250_ = lean_uint64_mix_hash(v___x_248_, v___x_249_);
v___x_251_ = lean_uint64_mix_hash(v___x_247_, v___x_250_);
v___x_252_ = 7ULL;
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_array_get_size(v_params_242_);
v___x_255_ = lean_nat_dec_lt(v___x_253_, v___x_254_);
if (v___x_255_ == 0)
{
uint64_t v___x_256_; 
v___x_256_ = lean_uint64_mix_hash(v___x_251_, v___x_252_);
return v___x_256_;
}
else
{
size_t v___x_257_; size_t v___x_258_; uint64_t v___x_259_; uint64_t v___x_260_; 
v___x_257_ = ((size_t)0ULL);
v___x_258_ = lean_usize_of_nat(v___x_254_);
v___x_259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(v_params_242_, v___x_257_, v___x_258_, v___x_252_);
v___x_260_ = lean_uint64_mix_hash(v___x_251_, v___x_259_);
return v___x_260_;
}
}
}
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_hashAlt(uint8_t v_pu_261_, lean_object* v_alt_262_){
_start:
{
switch(lean_obj_tag(v_alt_262_))
{
case 0:
{
lean_object* v_ctorName_263_; lean_object* v_params_264_; lean_object* v_code_265_; uint64_t v___y_267_; uint64_t v___y_268_; uint64_t v___y_273_; lean_object* v___x_281_; 
v_ctorName_263_ = lean_ctor_get(v_alt_262_, 0);
v_params_264_ = lean_ctor_get(v_alt_262_, 1);
v_code_265_ = lean_ctor_get(v_alt_262_, 2);
v___x_281_ = l_unsafeCast___redArg(v_ctorName_263_);
if (lean_obj_tag(v___x_281_) == 0)
{
uint64_t v___x_282_; 
v___x_282_ = 1723ULL;
v___y_273_ = v___x_282_;
goto v___jp_272_;
}
else
{
uint64_t v_hash_283_; 
v_hash_283_ = lean_ctor_get_uint64(v___x_281_, sizeof(void*)*2);
lean_dec(v___x_281_);
v___y_273_ = v_hash_283_;
goto v___jp_272_;
}
v___jp_266_:
{
uint64_t v___x_269_; uint64_t v___x_270_; uint64_t v___x_271_; 
v___x_269_ = lean_uint64_mix_hash(v___y_267_, v___y_268_);
v___x_270_ = l_Lean_Compiler_LCNF_hashCode(v_pu_261_, v_code_265_);
v___x_271_ = lean_uint64_mix_hash(v___x_269_, v___x_270_);
return v___x_271_;
}
v___jp_272_:
{
uint64_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_274_ = 7ULL;
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_array_get_size(v_params_264_);
v___x_277_ = lean_nat_dec_lt(v___x_275_, v___x_276_);
if (v___x_277_ == 0)
{
v___y_267_ = v___y_273_;
v___y_268_ = v___x_274_;
goto v___jp_266_;
}
else
{
size_t v___x_278_; size_t v___x_279_; uint64_t v___x_280_; 
v___x_278_ = ((size_t)0ULL);
v___x_279_ = lean_usize_of_nat(v___x_276_);
v___x_280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(v_params_264_, v___x_278_, v___x_279_, v___x_274_);
v___y_267_ = v___y_273_;
v___y_268_ = v___x_280_;
goto v___jp_266_;
}
}
}
case 1:
{
lean_object* v_info_284_; lean_object* v_code_285_; uint64_t v___x_286_; uint64_t v___x_287_; uint64_t v___x_288_; 
v_info_284_ = lean_ctor_get(v_alt_262_, 0);
v_code_285_ = lean_ctor_get(v_alt_262_, 1);
v___x_286_ = l_Lean_Compiler_LCNF_instHashableCtorInfo_hash(v_info_284_);
v___x_287_ = l_Lean_Compiler_LCNF_hashCode(v_pu_261_, v_code_285_);
v___x_288_ = lean_uint64_mix_hash(v___x_286_, v___x_287_);
return v___x_288_;
}
default: 
{
lean_object* v_code_289_; uint64_t v___x_290_; 
v_code_289_ = lean_ctor_get(v_alt_262_, 0);
v___x_290_ = l_Lean_Compiler_LCNF_hashCode(v_pu_261_, v_code_289_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3(uint8_t v_pu_291_, lean_object* v_as_292_, size_t v_i_293_, size_t v_stop_294_, uint64_t v_b_295_){
_start:
{
uint8_t v___x_296_; 
v___x_296_ = lean_usize_dec_eq(v_i_293_, v_stop_294_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint64_t v___x_298_; uint64_t v___x_299_; size_t v___x_300_; size_t v___x_301_; 
v___x_297_ = lean_array_uget_borrowed(v_as_292_, v_i_293_);
v___x_298_ = l_Lean_Compiler_LCNF_hashAlt(v_pu_291_, v___x_297_);
v___x_299_ = lean_uint64_mix_hash(v_b_295_, v___x_298_);
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_add(v_i_293_, v___x_300_);
v_i_293_ = v___x_301_;
v_b_295_ = v___x_299_;
goto _start;
}
else
{
return v_b_295_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3___boxed(lean_object* v_pu_303_, lean_object* v_as_304_, lean_object* v_i_305_, lean_object* v_stop_306_, lean_object* v_b_307_){
_start:
{
uint8_t v_pu_boxed_308_; size_t v_i_boxed_309_; size_t v_stop_boxed_310_; uint64_t v_b_boxed_311_; uint64_t v_res_312_; lean_object* v_r_313_; 
v_pu_boxed_308_ = lean_unbox(v_pu_303_);
v_i_boxed_309_ = lean_unbox_usize(v_i_305_);
lean_dec(v_i_305_);
v_stop_boxed_310_ = lean_unbox_usize(v_stop_306_);
lean_dec(v_stop_306_);
v_b_boxed_311_ = lean_unbox_uint64(v_b_307_);
lean_dec_ref(v_b_307_);
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashAlts_spec__3(v_pu_boxed_308_, v_as_304_, v_i_boxed_309_, v_stop_boxed_310_, v_b_boxed_311_);
lean_dec_ref(v_as_304_);
v_r_313_ = lean_box_uint64(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashAlts___boxed(lean_object* v_pu_314_, lean_object* v_alts_315_){
_start:
{
uint8_t v_pu_boxed_316_; uint64_t v_res_317_; lean_object* v_r_318_; 
v_pu_boxed_316_ = lean_unbox(v_pu_314_);
v_res_317_ = l_Lean_Compiler_LCNF_hashAlts(v_pu_boxed_316_, v_alts_315_);
lean_dec_ref(v_alts_315_);
v_r_318_ = lean_box_uint64(v_res_317_);
return v_r_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashAlt___boxed(lean_object* v_pu_319_, lean_object* v_alt_320_){
_start:
{
uint8_t v_pu_boxed_321_; uint64_t v_res_322_; lean_object* v_r_323_; 
v_pu_boxed_321_ = lean_unbox(v_pu_319_);
v_res_322_ = l_Lean_Compiler_LCNF_hashAlt(v_pu_boxed_321_, v_alt_320_);
lean_dec_ref(v_alt_320_);
v_r_323_ = lean_box_uint64(v_res_322_);
return v_r_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_hashCode___boxed(lean_object* v_pu_324_, lean_object* v_code_325_){
_start:
{
uint8_t v_pu_boxed_326_; uint64_t v_res_327_; lean_object* v_r_328_; 
v_pu_boxed_326_ = lean_unbox(v_pu_324_);
v_res_327_ = l_Lean_Compiler_LCNF_hashCode(v_pu_boxed_326_, v_code_325_);
lean_dec_ref(v_code_325_);
v_r_328_ = lean_box_uint64(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1(uint8_t v_pu_329_, lean_object* v_as_330_, size_t v_i_331_, size_t v_stop_332_, uint64_t v_b_333_){
_start:
{
uint64_t v___x_334_; 
v___x_334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___redArg(v_as_330_, v_i_331_, v_stop_332_, v_b_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1___boxed(lean_object* v_pu_335_, lean_object* v_as_336_, lean_object* v_i_337_, lean_object* v_stop_338_, lean_object* v_b_339_){
_start:
{
uint8_t v_pu_boxed_340_; size_t v_i_boxed_341_; size_t v_stop_boxed_342_; uint64_t v_b_boxed_343_; uint64_t v_res_344_; lean_object* v_r_345_; 
v_pu_boxed_340_ = lean_unbox(v_pu_335_);
v_i_boxed_341_ = lean_unbox_usize(v_i_337_);
lean_dec(v_i_337_);
v_stop_boxed_342_ = lean_unbox_usize(v_stop_338_);
lean_dec(v_stop_338_);
v_b_boxed_343_ = lean_unbox_uint64(v_b_339_);
lean_dec_ref(v_b_339_);
v_res_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashCode_spec__1(v_pu_boxed_340_, v_as_336_, v_i_boxed_341_, v_stop_boxed_342_, v_b_boxed_343_);
lean_dec_ref(v_as_336_);
v_r_345_ = lean_box_uint64(v_res_344_);
return v_r_345_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableCode___lam__0(uint8_t v_pu_346_, lean_object* v_c_347_){
_start:
{
uint64_t v___x_348_; 
v___x_348_ = l_Lean_Compiler_LCNF_hashCode(v_pu_346_, v_c_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode___lam__0___boxed(lean_object* v_pu_349_, lean_object* v_c_350_){
_start:
{
uint8_t v_pu_boxed_351_; uint64_t v_res_352_; lean_object* v_r_353_; 
v_pu_boxed_351_ = lean_unbox(v_pu_349_);
v_res_352_ = l_Lean_Compiler_LCNF_instHashableCode___lam__0(v_pu_boxed_351_, v_c_350_);
lean_dec_ref(v_c_350_);
v_r_353_ = lean_box_uint64(v_res_352_);
return v_r_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode(uint8_t v_pu_354_){
_start:
{
lean_object* v___x_355_; lean_object* v___f_356_; 
v___x_355_ = lean_box(v_pu_354_);
v___f_356_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instHashableCode___lam__0___boxed), 2, 1);
lean_closure_set(v___f_356_, 0, v___x_355_);
return v___f_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableCode___boxed(lean_object* v_pu_357_){
_start:
{
uint8_t v_pu_boxed_358_; lean_object* v_res_359_; 
v_pu_boxed_358_ = lean_unbox(v_pu_357_);
v_res_359_ = l_Lean_Compiler_LCNF_instHashableCode(v_pu_boxed_358_);
return v_res_359_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableDeclValue_hash(uint8_t v_pu_360_, lean_object* v_x_361_){
_start:
{
if (lean_obj_tag(v_x_361_) == 0)
{
lean_object* v_code_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint64_t v___x_365_; 
v_code_362_ = lean_ctor_get(v_x_361_, 0);
v___x_363_ = 0ULL;
v___x_364_ = l_Lean_Compiler_LCNF_hashCode(v_pu_360_, v_code_362_);
v___x_365_ = lean_uint64_mix_hash(v___x_363_, v___x_364_);
return v___x_365_;
}
else
{
lean_object* v_externAttrData_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v___x_369_; 
v_externAttrData_366_ = lean_ctor_get(v_x_361_, 0);
v___x_367_ = 1ULL;
v___x_368_ = l_Lean_instHashableExternAttrData_hash(v_externAttrData_366_);
v___x_369_ = lean_uint64_mix_hash(v___x_367_, v___x_368_);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue_hash___boxed(lean_object* v_pu_370_, lean_object* v_x_371_){
_start:
{
uint8_t v_pu_47__boxed_372_; uint64_t v_res_373_; lean_object* v_r_374_; 
v_pu_47__boxed_372_ = lean_unbox(v_pu_370_);
v_res_373_ = l_Lean_Compiler_LCNF_instHashableDeclValue_hash(v_pu_47__boxed_372_, v_x_371_);
lean_dec_ref(v_x_371_);
v_r_374_ = lean_box_uint64(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue(uint8_t v_pu_375_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_box(v_pu_375_);
v___x_377_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instHashableDeclValue_hash___boxed), 2, 1);
lean_closure_set(v___x_377_, 0, v___x_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDeclValue___boxed(lean_object* v_pu_378_){
_start:
{
uint8_t v_pu_5__boxed_379_; lean_object* v_res_380_; 
v_pu_5__boxed_379_ = lean_unbox(v_pu_378_);
v_res_380_ = l_Lean_Compiler_LCNF_instHashableDeclValue(v_pu_5__boxed_379_);
return v_res_380_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0(uint64_t v_x_381_, lean_object* v_x_382_){
_start:
{
if (lean_obj_tag(v_x_382_) == 0)
{
return v_x_381_;
}
else
{
lean_object* v_head_383_; lean_object* v_tail_384_; uint64_t v___y_386_; lean_object* v___x_389_; 
v_head_383_ = lean_ctor_get(v_x_382_, 0);
v_tail_384_ = lean_ctor_get(v_x_382_, 1);
v___x_389_ = l_unsafeCast___redArg(v_head_383_);
if (lean_obj_tag(v___x_389_) == 0)
{
uint64_t v___x_390_; 
v___x_390_ = 1723ULL;
v___y_386_ = v___x_390_;
goto v___jp_385_;
}
else
{
uint64_t v_hash_391_; 
v_hash_391_ = lean_ctor_get_uint64(v___x_389_, sizeof(void*)*2);
lean_dec(v___x_389_);
v___y_386_ = v_hash_391_;
goto v___jp_385_;
}
v___jp_385_:
{
uint64_t v___x_387_; 
v___x_387_ = lean_uint64_mix_hash(v_x_381_, v___y_386_);
v_x_381_ = v___x_387_;
v_x_382_ = v_tail_384_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0___boxed(lean_object* v_x_392_, lean_object* v_x_393_){
_start:
{
uint64_t v_x_186__boxed_394_; uint64_t v_res_395_; lean_object* v_r_396_; 
v_x_186__boxed_394_ = lean_unbox_uint64(v_x_392_);
lean_dec_ref(v_x_392_);
v_res_395_ = l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0(v_x_186__boxed_394_, v_x_393_);
lean_dec(v_x_393_);
v_r_396_ = lean_box_uint64(v_res_395_);
return v_r_396_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg(lean_object* v_x_397_){
_start:
{
lean_object* v_name_398_; lean_object* v_levelParams_399_; lean_object* v_type_400_; lean_object* v_params_401_; uint8_t v_safe_402_; uint64_t v___y_404_; uint64_t v___y_405_; uint64_t v___x_411_; uint64_t v___y_413_; lean_object* v___x_426_; 
v_name_398_ = lean_ctor_get(v_x_397_, 0);
v_levelParams_399_ = lean_ctor_get(v_x_397_, 1);
v_type_400_ = lean_ctor_get(v_x_397_, 2);
v_params_401_ = lean_ctor_get(v_x_397_, 3);
v_safe_402_ = lean_ctor_get_uint8(v_x_397_, sizeof(void*)*4);
v___x_411_ = 0ULL;
v___x_426_ = l_unsafeCast___redArg(v_name_398_);
if (lean_obj_tag(v___x_426_) == 0)
{
uint64_t v___x_427_; 
v___x_427_ = 1723ULL;
v___y_413_ = v___x_427_;
goto v___jp_412_;
}
else
{
uint64_t v_hash_428_; 
v_hash_428_ = lean_ctor_get_uint64(v___x_426_, sizeof(void*)*2);
lean_dec(v___x_426_);
v___y_413_ = v_hash_428_;
goto v___jp_412_;
}
v___jp_403_:
{
uint64_t v___x_406_; 
v___x_406_ = lean_uint64_mix_hash(v___y_404_, v___y_405_);
if (v_safe_402_ == 0)
{
uint64_t v___x_407_; uint64_t v___x_408_; 
v___x_407_ = 13ULL;
v___x_408_ = lean_uint64_mix_hash(v___x_406_, v___x_407_);
return v___x_408_;
}
else
{
uint64_t v___x_409_; uint64_t v___x_410_; 
v___x_409_ = 11ULL;
v___x_410_ = lean_uint64_mix_hash(v___x_406_, v___x_409_);
return v___x_410_;
}
}
v___jp_412_:
{
uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; uint64_t v___x_418_; uint64_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v___x_414_ = lean_uint64_mix_hash(v___x_411_, v___y_413_);
v___x_415_ = 7ULL;
v___x_416_ = l_List_foldl___at___00Lean_Compiler_LCNF_instHashableSignature_hash_spec__0(v___x_415_, v_levelParams_399_);
v___x_417_ = lean_uint64_mix_hash(v___x_414_, v___x_416_);
v___x_418_ = l_Lean_Expr_hash(v_type_400_);
v___x_419_ = lean_uint64_mix_hash(v___x_417_, v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_array_get_size(v_params_401_);
v___x_422_ = lean_nat_dec_lt(v___x_420_, v___x_421_);
if (v___x_422_ == 0)
{
v___y_404_ = v___x_419_;
v___y_405_ = v___x_415_;
goto v___jp_403_;
}
else
{
size_t v___x_423_; size_t v___x_424_; uint64_t v___x_425_; 
v___x_423_ = ((size_t)0ULL);
v___x_424_ = lean_usize_of_nat(v___x_421_);
v___x_425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_hashParams_spec__0(v_params_401_, v___x_423_, v___x_424_, v___x_415_);
v___y_404_ = v___x_419_;
v___y_405_ = v___x_425_;
goto v___jp_403_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg___boxed(lean_object* v_x_429_){
_start:
{
uint64_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg(v_x_429_);
lean_dec_ref(v_x_429_);
v_r_431_ = lean_box_uint64(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableSignature_hash(uint8_t v_pu_432_, lean_object* v_x_433_){
_start:
{
uint64_t v___x_434_; 
v___x_434_ = l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg(v_x_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature_hash___boxed(lean_object* v_pu_435_, lean_object* v_x_436_){
_start:
{
uint8_t v_pu_271__boxed_437_; uint64_t v_res_438_; lean_object* v_r_439_; 
v_pu_271__boxed_437_ = lean_unbox(v_pu_435_);
v_res_438_ = l_Lean_Compiler_LCNF_instHashableSignature_hash(v_pu_271__boxed_437_, v_x_436_);
lean_dec_ref(v_x_436_);
v_r_439_ = lean_box_uint64(v_res_438_);
return v_r_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature(uint8_t v_pu_440_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_box(v_pu_440_);
v___x_442_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instHashableSignature_hash___boxed), 2, 1);
lean_closure_set(v___x_442_, 0, v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableSignature___boxed(lean_object* v_pu_443_){
_start:
{
uint8_t v_pu_5__boxed_444_; lean_object* v_res_445_; 
v_pu_5__boxed_444_ = lean_unbox(v_pu_443_);
v_res_445_ = l_Lean_Compiler_LCNF_instHashableSignature(v_pu_5__boxed_444_);
return v_res_445_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_instHashableDecl_hash(uint8_t v_pu_446_, lean_object* v_x_447_){
_start:
{
lean_object* v_toSignature_448_; lean_object* v_value_449_; uint8_t v_recursive_450_; lean_object* v_inlineAttr_x3f_451_; uint64_t v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; uint64_t v___x_455_; uint64_t v___x_456_; uint64_t v___y_458_; 
v_toSignature_448_ = lean_ctor_get(v_x_447_, 0);
v_value_449_ = lean_ctor_get(v_x_447_, 1);
v_recursive_450_ = lean_ctor_get_uint8(v_x_447_, sizeof(void*)*3);
v_inlineAttr_x3f_451_ = lean_ctor_get(v_x_447_, 2);
v___x_452_ = 0ULL;
v___x_453_ = l_Lean_Compiler_LCNF_instHashableSignature_hash___redArg(v_toSignature_448_);
v___x_454_ = lean_uint64_mix_hash(v___x_452_, v___x_453_);
v___x_455_ = l_Lean_Compiler_LCNF_instHashableDeclValue_hash(v_pu_446_, v_value_449_);
v___x_456_ = lean_uint64_mix_hash(v___x_454_, v___x_455_);
if (v_recursive_450_ == 0)
{
uint64_t v___x_468_; 
v___x_468_ = 13ULL;
v___y_458_ = v___x_468_;
goto v___jp_457_;
}
else
{
uint64_t v___x_469_; 
v___x_469_ = 11ULL;
v___y_458_ = v___x_469_;
goto v___jp_457_;
}
v___jp_457_:
{
uint64_t v___x_459_; 
v___x_459_ = lean_uint64_mix_hash(v___x_456_, v___y_458_);
if (lean_obj_tag(v_inlineAttr_x3f_451_) == 0)
{
uint64_t v___x_460_; uint64_t v___x_461_; 
v___x_460_ = 11ULL;
v___x_461_ = lean_uint64_mix_hash(v___x_459_, v___x_460_);
return v___x_461_;
}
else
{
lean_object* v_val_462_; uint8_t v___x_463_; uint64_t v___x_464_; uint64_t v___x_465_; uint64_t v___x_466_; uint64_t v___x_467_; 
v_val_462_ = lean_ctor_get(v_inlineAttr_x3f_451_, 0);
v___x_463_ = lean_unbox(v_val_462_);
v___x_464_ = l_Lean_Compiler_instHashableInlineAttributeKind_hash(v___x_463_);
v___x_465_ = 13ULL;
v___x_466_ = lean_uint64_mix_hash(v___x_464_, v___x_465_);
v___x_467_ = lean_uint64_mix_hash(v___x_459_, v___x_466_);
return v___x_467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl_hash___boxed(lean_object* v_pu_470_, lean_object* v_x_471_){
_start:
{
uint8_t v_pu_92__boxed_472_; uint64_t v_res_473_; lean_object* v_r_474_; 
v_pu_92__boxed_472_ = lean_unbox(v_pu_470_);
v_res_473_ = l_Lean_Compiler_LCNF_instHashableDecl_hash(v_pu_92__boxed_472_, v_x_471_);
lean_dec_ref(v_x_471_);
v_r_474_ = lean_box_uint64(v_res_473_);
return v_r_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl(uint8_t v_pu_475_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_box(v_pu_475_);
v___x_477_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instHashableDecl_hash___boxed), 2, 1);
lean_closure_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instHashableDecl___boxed(lean_object* v_pu_478_){
_start:
{
uint8_t v_pu_5__boxed_479_; lean_object* v_res_480_; 
v_pu_5__boxed_479_ = lean_unbox(v_pu_478_);
v_res_480_ = l_Lean_Compiler_LCNF_instHashableDecl(v_pu_5__boxed_479_);
return v_res_480_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_DeclHash(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_DeclHash(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_DeclHash(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DeclHash(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_DeclHash(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_DeclHash(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Init.Data.List.Attach
// Imports: import all Init.Data.List.Lemmas public import Init.Data.List.Lemmas import Init.Data.List.Count import Init.Data.Subtype.Basic
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
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_pmap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_attach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_attach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_attach___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmapImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmapImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_pmap_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_pmap_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filterMap_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filterMap_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_unattach_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_unattach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_unattach(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_unattach_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_findSome_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_findSome_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_pmap___redArg(lean_object* v_f_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; 
lean_dec(v_f_1_);
v___x_3_ = lean_box(0);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_14_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v_isSharedCheck_14_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_14_ == 0)
{
v___x_7_ = v_x_2_;
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_tail_5_);
lean_inc(v_head_4_);
lean_dec(v_x_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_14_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_12_; 
lean_inc(v_f_1_);
v___x_9_ = lean_apply_2(v_f_1_, v_head_4_, lean_box(0));
v___x_10_ = l_List_pmap___redArg(v_f_1_, v_tail_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_10_);
lean_ctor_set(v___x_7_, 0, v___x_9_);
v___x_12_ = v___x_7_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v___x_9_);
lean_ctor_set(v_reuseFailAlloc_13_, 1, v___x_10_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_pmap(lean_object* v_00_u03b1_15_, lean_object* v_00_u03b2_16_, lean_object* v_P_17_, lean_object* v_f_18_, lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_List_pmap___redArg(v_f_18_, v_x_19_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___redArg(lean_object* v_l_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_unsafeCast___redArg(v_l_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___redArg___boxed(lean_object* v_l_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Init_Data_List_Attach_0__List_attachWithImpl___redArg(v_l_24_);
lean_dec(v_l_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl(lean_object* v_00_u03b1_26_, lean_object* v_l_27_, lean_object* v_P_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_unsafeCast___redArg(v_l_27_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_attachWithImpl___boxed(lean_object* v_00_u03b1_31_, lean_object* v_l_32_, lean_object* v_P_33_, lean_object* v_x_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Init_Data_List_Attach_0__List_attachWithImpl(v_00_u03b1_31_, v_l_32_, v_P_33_, v_x_34_);
lean_dec(v_l_32_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_List_attach___redArg(lean_object* v_l_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_unsafeCast___redArg(v_l_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_List_attach___redArg___boxed(lean_object* v_l_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_List_attach___redArg(v_l_38_);
lean_dec(v_l_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_List_attach(lean_object* v_00_u03b1_40_, lean_object* v_l_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_unsafeCast___redArg(v_l_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_List_attach___boxed(lean_object* v_00_u03b1_43_, lean_object* v_l_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_List_attach(v_00_u03b1_43_, v_l_44_);
lean_dec(v_l_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg___lam__0(lean_object* v_f_46_, lean_object* v_x_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_apply_2(v_f_46_, v_x_47_, lean_box(0));
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg(lean_object* v_f_49_, lean_object* v_l_50_){
_start:
{
lean_object* v___f_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___f_51_ = lean_alloc_closure((void*)(l_List_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_51_, 0, v_f_49_);
v___x_52_ = l_unsafeCast___redArg(v_l_50_);
v___x_53_ = lean_box(0);
v___x_54_ = l_List_mapTR_loop___redArg(v___f_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_List_pmapImpl___redArg___boxed(lean_object* v_f_55_, lean_object* v_l_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_List_pmapImpl___redArg(v_f_55_, v_l_56_);
lean_dec(v_l_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_List_pmapImpl(lean_object* v_00_u03b1_58_, lean_object* v_00_u03b2_59_, lean_object* v_P_60_, lean_object* v_f_61_, lean_object* v_l_62_, lean_object* v_H_63_){
_start:
{
lean_object* v___f_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___f_64_ = lean_alloc_closure((void*)(l_List_pmapImpl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_64_, 0, v_f_61_);
v___x_65_ = l_unsafeCast___redArg(v_l_62_);
v___x_66_ = lean_box(0);
v___x_67_ = l_List_mapTR_loop___redArg(v___f_64_, v___x_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_List_pmapImpl___boxed(lean_object* v_00_u03b1_68_, lean_object* v_00_u03b2_69_, lean_object* v_P_70_, lean_object* v_f_71_, lean_object* v_l_72_, lean_object* v_H_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_List_pmapImpl(v_00_u03b1_68_, v_00_u03b2_69_, v_P_70_, v_f_71_, v_l_72_, v_H_73_);
lean_dec(v_l_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_pmap_match__1_splitter___redArg(lean_object* v_x_75_, lean_object* v_h__1_76_, lean_object* v_h__2_77_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
lean_object* v___x_78_; 
lean_dec(v_h__2_77_);
v___x_78_ = lean_apply_1(v_h__1_76_, lean_box(0));
return v___x_78_;
}
else
{
lean_object* v_head_79_; lean_object* v_tail_80_; lean_object* v___x_81_; 
lean_dec(v_h__1_76_);
v_head_79_ = lean_ctor_get(v_x_75_, 0);
lean_inc(v_head_79_);
v_tail_80_ = lean_ctor_get(v_x_75_, 1);
lean_inc(v_tail_80_);
lean_dec_ref_known(v_x_75_, 2);
v___x_81_ = lean_apply_3(v_h__2_77_, v_head_79_, v_tail_80_, lean_box(0));
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_pmap_match__1_splitter(lean_object* v_00_u03b1_82_, lean_object* v_P_83_, lean_object* v_motive_84_, lean_object* v_x_85_, lean_object* v_x_86_, lean_object* v_h__1_87_, lean_object* v_h__2_88_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v___x_89_; 
lean_dec(v_h__2_88_);
v___x_89_ = lean_apply_1(v_h__1_87_, lean_box(0));
return v___x_89_;
}
else
{
lean_object* v_head_90_; lean_object* v_tail_91_; lean_object* v___x_92_; 
lean_dec(v_h__1_87_);
v_head_90_ = lean_ctor_get(v_x_85_, 0);
lean_inc(v_head_90_);
v_tail_91_ = lean_ctor_get(v_x_85_, 1);
lean_inc(v_tail_91_);
lean_dec_ref_known(v_x_85_, 2);
v___x_92_ = lean_apply_3(v_h__2_88_, v_head_90_, v_tail_91_, lean_box(0));
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filterMap_match__1_splitter___redArg(lean_object* v_x_93_, lean_object* v_h__1_94_, lean_object* v_h__2_95_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
lean_dec(v_h__2_95_);
v___x_96_ = lean_box(0);
v___x_97_ = lean_apply_1(v_h__1_94_, v___x_96_);
return v___x_97_;
}
else
{
lean_object* v_val_98_; lean_object* v___x_99_; 
lean_dec(v_h__1_94_);
v_val_98_ = lean_ctor_get(v_x_93_, 0);
lean_inc(v_val_98_);
lean_dec_ref_known(v_x_93_, 1);
v___x_99_ = lean_apply_1(v_h__2_95_, v_val_98_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filterMap_match__1_splitter(lean_object* v_00_u03b2_100_, lean_object* v_motive_101_, lean_object* v_x_102_, lean_object* v_h__1_103_, lean_object* v_h__2_104_){
_start:
{
if (lean_obj_tag(v_x_102_) == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v_h__2_104_);
v___x_105_ = lean_box(0);
v___x_106_ = lean_apply_1(v_h__1_103_, v___x_105_);
return v___x_106_;
}
else
{
lean_object* v_val_107_; lean_object* v___x_108_; 
lean_dec(v_h__1_103_);
v_val_107_ = lean_ctor_get(v_x_102_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v_x_102_, 1);
v___x_108_ = lean_apply_1(v_h__2_104_, v_val_107_);
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_unattach_spec__0___redArg(lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
if (lean_obj_tag(v_a_109_) == 0)
{
lean_object* v___x_111_; 
v___x_111_ = l_List_reverse___redArg(v_a_110_);
return v___x_111_;
}
else
{
lean_object* v_head_112_; lean_object* v_tail_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_121_; 
v_head_112_ = lean_ctor_get(v_a_109_, 0);
v_tail_113_ = lean_ctor_get(v_a_109_, 1);
v_isSharedCheck_121_ = !lean_is_exclusive(v_a_109_);
if (v_isSharedCheck_121_ == 0)
{
v___x_115_ = v_a_109_;
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_tail_113_);
lean_inc(v_head_112_);
lean_dec(v_a_109_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_121_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v_a_110_);
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_head_112_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_a_110_);
v___x_118_ = v_reuseFailAlloc_120_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
v_a_109_ = v_tail_113_;
v_a_110_ = v___x_118_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_unattach___redArg(lean_object* v_l_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_box(0);
v___x_124_ = l_List_mapTR_loop___at___00List_unattach_spec__0___redArg(v_l_122_, v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_List_unattach(lean_object* v_00_u03b1_125_, lean_object* v_p_126_, lean_object* v_l_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_List_unattach___redArg(v_l_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_unattach_spec__0(lean_object* v_00_u03b1_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_List_mapTR_loop___at___00List_unattach_spec__0___redArg(v_a_130_, v_a_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_findSome_x3f_match__1_splitter___redArg(lean_object* v_x_133_, lean_object* v_h__1_134_, lean_object* v_h__2_135_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec(v_h__1_134_);
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_1(v_h__2_135_, v___x_136_);
return v___x_137_;
}
else
{
lean_object* v_val_138_; lean_object* v___x_139_; 
lean_dec(v_h__2_135_);
v_val_138_ = lean_ctor_get(v_x_133_, 0);
lean_inc(v_val_138_);
lean_dec_ref_known(v_x_133_, 1);
v___x_139_ = lean_apply_1(v_h__1_134_, v_val_138_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_findSome_x3f_match__1_splitter(lean_object* v_00_u03b2_140_, lean_object* v_motive_141_, lean_object* v_x_142_, lean_object* v_h__1_143_, lean_object* v_h__2_144_){
_start:
{
if (lean_obj_tag(v_x_142_) == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec(v_h__1_143_);
v___x_145_ = lean_box(0);
v___x_146_ = lean_apply_1(v_h__2_144_, v___x_145_);
return v___x_146_;
}
else
{
lean_object* v_val_147_; lean_object* v___x_148_; 
lean_dec(v_h__2_144_);
v_val_147_ = lean_ctor_get(v_x_142_, 0);
lean_inc(v_val_147_);
lean_dec_ref_known(v_x_142_, 1);
v___x_148_ = lean_apply_1(v_h__1_143_, v_val_147_);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___redArg(uint8_t v_x_149_, lean_object* v_h__1_150_, lean_object* v_h__2_151_){
_start:
{
if (v_x_149_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_h__1_150_);
v___x_152_ = lean_box(0);
v___x_153_ = lean_apply_1(v_h__2_151_, v___x_152_);
return v___x_153_;
}
else
{
lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec(v_h__2_151_);
v___x_154_ = lean_box(0);
v___x_155_ = lean_apply_1(v_h__1_150_, v___x_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___redArg___boxed(lean_object* v_x_156_, lean_object* v_h__1_157_, lean_object* v_h__2_158_){
_start:
{
uint8_t v_x_24__boxed_159_; lean_object* v_res_160_; 
v_x_24__boxed_159_ = lean_unbox(v_x_156_);
v_res_160_ = l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___redArg(v_x_24__boxed_159_, v_h__1_157_, v_h__2_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter(lean_object* v_motive_161_, uint8_t v_x_162_, lean_object* v_h__1_163_, lean_object* v_h__2_164_){
_start:
{
if (v_x_162_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec(v_h__1_163_);
v___x_165_ = lean_box(0);
v___x_166_ = lean_apply_1(v_h__2_164_, v___x_165_);
return v___x_166_;
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec(v_h__2_164_);
v___x_167_ = lean_box(0);
v___x_168_ = lean_apply_1(v_h__1_163_, v___x_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter___boxed(lean_object* v_motive_169_, lean_object* v_x_170_, lean_object* v_h__1_171_, lean_object* v_h__2_172_){
_start:
{
uint8_t v_x_35__boxed_173_; lean_object* v_res_174_; 
v_x_35__boxed_173_ = lean_unbox(v_x_170_);
v_res_174_ = l___private_Init_Data_List_Attach_0__List_filter_match__1_splitter(v_motive_169_, v_x_35__boxed_173_, v_h__1_171_, v_h__2_172_);
return v_res_174_;
}
}
lean_object* runtime_initialize_Init_Data_List_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Count(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Subtype_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_List_Attach(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_List_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Subtype_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_List_Attach(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_List_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_List_Count(uint8_t builtin);
lean_object* initialize_Init_Data_Subtype_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_List_Attach(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Count(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Subtype_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_List_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_List_Attach(builtin);
}
#ifdef __cplusplus
}
#endif

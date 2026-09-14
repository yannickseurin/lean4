// Lean compiler output
// Module: Std.Http.Data.Extensions
// Imports: public import Init.Dynamic public import Init.Data.String.Basic public import Std.Data.TreeMap
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
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Extensions_compareName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedExtensions_default;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedExtensions;
LEAN_EXPORT lean_object* l_Std_Http_Extensions_empty;
static const lean_closure_object l_Std_Http_Extensions_get___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Extensions_compareName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Extensions_get___redArg___closed__0 = (const lean_object*)&l_Std_Http_Extensions_get___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Extensions_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Extensions_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Extensions_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Extensions_compareName(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
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
case 1:
{
switch(lean_obj_tag(v_x_2_))
{
case 0:
{
uint8_t v___x_5_; 
v___x_5_ = 2;
return v___x_5_;
}
case 1:
{
lean_object* v_pre_6_; lean_object* v_str_7_; lean_object* v_pre_8_; lean_object* v_str_9_; uint8_t v___x_10_; 
v_pre_6_ = lean_ctor_get(v_x_1_, 0);
v_str_7_ = lean_ctor_get(v_x_1_, 1);
v_pre_8_ = lean_ctor_get(v_x_2_, 0);
v_str_9_ = lean_ctor_get(v_x_2_, 1);
v___x_10_ = l_Std_Http_Extensions_compareName(v_pre_6_, v_pre_8_);
if (v___x_10_ == 1)
{
uint8_t v___x_11_; 
v___x_11_ = lean_string_dec_lt(v_str_7_, v_str_9_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; 
v___x_12_ = lean_string_dec_eq(v_str_7_, v_str_9_);
if (v___x_12_ == 0)
{
uint8_t v___x_13_; 
v___x_13_ = 2;
return v___x_13_;
}
else
{
return v___x_10_;
}
}
else
{
uint8_t v___x_14_; 
v___x_14_ = 0;
return v___x_14_;
}
}
else
{
return v___x_10_;
}
}
default: 
{
uint8_t v___x_15_; 
v___x_15_ = 0;
return v___x_15_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_2_) == 2)
{
lean_object* v_pre_16_; lean_object* v_i_17_; lean_object* v_pre_18_; lean_object* v_i_19_; uint8_t v___x_20_; 
v_pre_16_ = lean_ctor_get(v_x_1_, 0);
v_i_17_ = lean_ctor_get(v_x_1_, 1);
v_pre_18_ = lean_ctor_get(v_x_2_, 0);
v_i_19_ = lean_ctor_get(v_x_2_, 1);
v___x_20_ = l_Std_Http_Extensions_compareName(v_pre_16_, v_pre_18_);
if (v___x_20_ == 1)
{
uint8_t v___x_21_; 
v___x_21_ = lean_nat_dec_lt(v_i_17_, v_i_19_);
if (v___x_21_ == 0)
{
uint8_t v___x_22_; 
v___x_22_ = lean_nat_dec_eq(v_i_17_, v_i_19_);
if (v___x_22_ == 0)
{
uint8_t v___x_23_; 
v___x_23_ = 2;
return v___x_23_;
}
else
{
return v___x_20_;
}
}
else
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
}
else
{
return v___x_20_;
}
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 2;
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object* v_x_26_, lean_object* v_x_27_){
_start:
{
uint8_t v_res_28_; lean_object* v_r_29_; 
v_res_28_ = l_Std_Http_Extensions_compareName(v_x_26_, v_x_27_);
lean_dec(v_x_27_);
lean_dec(v_x_26_);
v_r_29_ = lean_box(v_res_28_);
return v_r_29_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedExtensions_default(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_box(1);
return v___x_30_;
}
}
static lean_object* _init_l_Std_Http_instInhabitedExtensions(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_box(1);
return v___x_31_;
}
}
static lean_object* _init_l_Std_Http_Extensions_empty(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_box(1);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___redArg(lean_object* v_x_34_, lean_object* v_inst_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_37_ = l_unsafeCast___redArg(v_inst_35_);
v___x_38_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_36_, v_x_34_, v___x_37_);
if (lean_obj_tag(v___x_38_) == 0)
{
lean_object* v___x_39_; 
v___x_39_ = lean_box(0);
return v___x_39_;
}
else
{
lean_object* v_val_40_; lean_object* v___x_41_; 
v_val_40_ = lean_ctor_get(v___x_38_, 0);
lean_inc(v_val_40_);
lean_dec_ref_known(v___x_38_, 1);
v___x_41_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_40_, v_inst_35_);
lean_dec(v_val_40_);
return v___x_41_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___redArg___boxed(lean_object* v_x_42_, lean_object* v_inst_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Std_Http_Extensions_get___redArg(v_x_42_, v_inst_43_);
lean_dec(v_inst_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get(lean_object* v_x_45_, lean_object* v_00_u03b1_46_, lean_object* v_inst_47_){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_49_ = l_unsafeCast___redArg(v_inst_47_);
v___x_50_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___x_48_, v_x_45_, v___x_49_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v___x_51_; 
v___x_51_ = lean_box(0);
return v___x_51_;
}
else
{
lean_object* v_val_52_; lean_object* v___x_53_; 
v_val_52_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_val_52_);
lean_dec_ref_known(v___x_50_, 1);
v___x_53_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_52_, v_inst_47_);
lean_dec(v_val_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_get___boxed(lean_object* v_x_54_, lean_object* v_00_u03b1_55_, lean_object* v_inst_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Std_Http_Extensions_get(v_x_54_, v_00_u03b1_55_, v_inst_56_);
lean_dec(v_inst_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___redArg(lean_object* v_x_58_, lean_object* v_inst_59_, lean_object* v_data_60_){
_start:
{
lean_object* v_dyn_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_dyn_61_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_59_, v_data_60_);
v___x_62_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_63_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_61_);
v___x_64_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_62_, v___x_63_, v_dyn_61_, v_x_58_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___redArg___boxed(lean_object* v_x_65_, lean_object* v_inst_66_, lean_object* v_data_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Std_Http_Extensions_insert___redArg(v_x_65_, v_inst_66_, v_data_67_);
lean_dec(v_data_67_);
lean_dec(v_inst_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert(lean_object* v_00_u03b1_69_, lean_object* v_x_70_, lean_object* v_inst_71_, lean_object* v_data_72_){
_start:
{
lean_object* v_dyn_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v_dyn_73_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_71_, v_data_72_);
v___x_74_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_75_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_73_);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_74_, v___x_75_, v_dyn_73_, v_x_70_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_insert___boxed(lean_object* v_00_u03b1_77_, lean_object* v_x_78_, lean_object* v_inst_79_, lean_object* v_data_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Std_Http_Extensions_insert(v_00_u03b1_77_, v_x_78_, v_inst_79_, v_data_80_);
lean_dec(v_data_80_);
lean_dec(v_inst_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___redArg(lean_object* v_x_82_, lean_object* v_inst_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_85_ = l_unsafeCast___redArg(v_inst_83_);
v___x_86_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___x_84_, v___x_85_, v_x_82_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___redArg___boxed(lean_object* v_x_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Std_Http_Extensions_remove___redArg(v_x_87_, v_inst_88_);
lean_dec(v_inst_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove(lean_object* v_x_90_, lean_object* v_00_u03b1_91_, lean_object* v_inst_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_94_ = l_unsafeCast___redArg(v_inst_92_);
v___x_95_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___x_93_, v___x_94_, v_x_90_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_remove___boxed(lean_object* v_x_96_, lean_object* v_00_u03b1_97_, lean_object* v_inst_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Std_Http_Extensions_remove(v_x_96_, v_00_u03b1_97_, v_inst_98_);
lean_dec(v_inst_98_);
return v_res_99_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Extensions_contains___redArg(lean_object* v_x_100_, lean_object* v_inst_101_){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_103_ = l_unsafeCast___redArg(v_inst_101_);
v___x_104_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v___x_102_, v___x_103_, v_x_100_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_contains___redArg___boxed(lean_object* v_x_105_, lean_object* v_inst_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l_Std_Http_Extensions_contains___redArg(v_x_105_, v_inst_106_);
lean_dec(v_inst_106_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Extensions_contains(lean_object* v_x_109_, lean_object* v_00_u03b1_110_, lean_object* v_inst_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_112_ = ((lean_object*)(l_Std_Http_Extensions_get___redArg___closed__0));
v___x_113_ = l_unsafeCast___redArg(v_inst_111_);
v___x_114_ = l_Std_DTreeMap_Internal_Impl_contains___redArg(v___x_112_, v___x_113_, v_x_109_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Extensions_contains___boxed(lean_object* v_x_115_, lean_object* v_00_u03b1_116_, lean_object* v_inst_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_Std_Http_Extensions_contains(v_x_115_, v_00_u03b1_116_, v_inst_117_);
lean_dec(v_inst_117_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
lean_object* runtime_initialize_Init_Dynamic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_TreeMap(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Extensions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_TreeMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_instInhabitedExtensions_default = _init_l_Std_Http_instInhabitedExtensions_default();
lean_mark_persistent(l_Std_Http_instInhabitedExtensions_default);
l_Std_Http_instInhabitedExtensions = _init_l_Std_Http_instInhabitedExtensions();
lean_mark_persistent(l_Std_Http_instInhabitedExtensions);
l_Std_Http_Extensions_empty = _init_l_Std_Http_Extensions_empty();
lean_mark_persistent(l_Std_Http_Extensions_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Extensions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Dynamic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_TreeMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Extensions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Dynamic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_TreeMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Extensions(builtin);
}
#ifdef __cplusplus
}
#endif

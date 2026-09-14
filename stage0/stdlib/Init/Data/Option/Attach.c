// Lean compiler output
// Module: Init.Data.Option.Attach
// Imports: public import Init.Data.Array.Attach public import Init.Data.Option.Lemmas import Init.Data.Bool import Init.Data.Option.Array import Init.Data.Option.List import Init.Data.Subtype.Basic
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
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_attach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Option_attach___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Option_attach(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_attach___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_instDecidableEq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_instDecidableEq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_unattach___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Option_unattach(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instMonadAttach___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instMonadAttach___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Option_instMonadAttach___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_instMonadAttach___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Option_instMonadAttach___closed__0 = (const lean_object*)&l_Option_instMonadAttach___closed__0_value;
LEAN_EXPORT const lean_object* l_Option_instMonadAttach = (const lean_object*)&l_Option_instMonadAttach___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_bind_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_bind_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___redArg(lean_object* v_o_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_unsafeCast___redArg(v_o_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___redArg___boxed(lean_object* v_o_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___redArg(v_o_3_);
lean_dec(v_o_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl(lean_object* v_00_u03b1_5_, lean_object* v_o_6_, lean_object* v_P_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_unsafeCast___redArg(v_o_6_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_attachWithImpl___boxed(lean_object* v_00_u03b1_10_, lean_object* v_o_11_, lean_object* v_P_12_, lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Init_Data_Option_Attach_0__Option_attachWithImpl(v_00_u03b1_10_, v_o_11_, v_P_12_, v_x_13_);
lean_dec(v_o_11_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Option_attach___redArg(lean_object* v_xs_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_unsafeCast___redArg(v_xs_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Option_attach___redArg___boxed(lean_object* v_xs_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Option_attach___redArg(v_xs_17_);
lean_dec(v_xs_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Option_attach(lean_object* v_00_u03b1_19_, lean_object* v_xs_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_unsafeCast___redArg(v_xs_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Option_attach___boxed(lean_object* v_00_u03b1_22_, lean_object* v_xs_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Option_attach(v_00_u03b1_22_, v_xs_23_);
lean_dec(v_xs_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_instDecidableEq_match__1_splitter___redArg(lean_object* v_b_25_, lean_object* v_h__1_26_, lean_object* v_h__2_27_){
_start:
{
if (lean_obj_tag(v_b_25_) == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec(v_h__2_27_);
v___x_28_ = lean_box(0);
v___x_29_ = lean_apply_1(v_h__1_26_, v___x_28_);
return v___x_29_;
}
else
{
lean_object* v_val_30_; lean_object* v___x_31_; 
lean_dec(v_h__1_26_);
v_val_30_ = lean_ctor_get(v_b_25_, 0);
lean_inc(v_val_30_);
lean_dec_ref_known(v_b_25_, 1);
v___x_31_ = lean_apply_1(v_h__2_27_, v_val_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__Option_instDecidableEq_match__1_splitter(lean_object* v_00_u03b1_32_, lean_object* v_motive_33_, lean_object* v_b_34_, lean_object* v_h__1_35_, lean_object* v_h__2_36_){
_start:
{
if (lean_obj_tag(v_b_34_) == 0)
{
lean_object* v___x_37_; lean_object* v___x_38_; 
lean_dec(v_h__2_36_);
v___x_37_ = lean_box(0);
v___x_38_ = lean_apply_1(v_h__1_35_, v___x_37_);
return v___x_38_;
}
else
{
lean_object* v_val_39_; lean_object* v___x_40_; 
lean_dec(v_h__1_35_);
v_val_39_ = lean_ctor_get(v_b_34_, 0);
lean_inc(v_val_39_);
lean_dec_ref_known(v_b_34_, 1);
v___x_40_ = lean_apply_1(v_h__2_36_, v_val_39_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l_Option_unattach___redArg(lean_object* v_o_41_){
_start:
{
if (lean_obj_tag(v_o_41_) == 0)
{
lean_object* v___x_42_; 
v___x_42_ = lean_box(0);
return v___x_42_;
}
else
{
lean_object* v_val_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_50_; 
v_val_43_ = lean_ctor_get(v_o_41_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v_o_41_);
if (v_isSharedCheck_50_ == 0)
{
v___x_45_ = v_o_41_;
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_val_43_);
lean_dec(v_o_41_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_48_; 
if (v_isShared_46_ == 0)
{
v___x_48_ = v___x_45_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_val_43_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_unattach(lean_object* v_00_u03b1_51_, lean_object* v_p_52_, lean_object* v_o_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Option_unattach___redArg(v_o_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Option_instMonadAttach___lam__0(lean_object* v_00_u03b1_55_, lean_object* v_x_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_unsafeCast___redArg(v_x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Option_instMonadAttach___lam__0___boxed(lean_object* v_00_u03b1_58_, lean_object* v_x_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Option_instMonadAttach___lam__0(v_00_u03b1_58_, v_x_59_);
lean_dec(v_x_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter___redArg(lean_object* v_x_63_, lean_object* v_h__1_64_, lean_object* v_h__2_65_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v___x_66_; 
lean_dec(v_h__1_64_);
v___x_66_ = lean_apply_1(v_h__2_65_, lean_box(0));
return v___x_66_;
}
else
{
lean_object* v_val_67_; lean_object* v___x_68_; 
lean_dec(v_h__2_65_);
v_val_67_ = lean_ctor_get(v_x_63_, 0);
lean_inc(v_val_67_);
lean_dec_ref_known(v_x_63_, 1);
v___x_68_ = lean_apply_2(v_h__1_64_, v_val_67_, lean_box(0));
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter(lean_object* v_m_69_, lean_object* v_inst_70_, lean_object* v_00_u03b1_71_, lean_object* v_x_72_, lean_object* v_motive_73_, lean_object* v_x_74_, lean_object* v_h__1_75_, lean_object* v_h__2_76_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v___x_77_; 
lean_dec(v_h__1_75_);
v___x_77_ = lean_apply_1(v_h__2_76_, lean_box(0));
return v___x_77_;
}
else
{
lean_object* v_val_78_; lean_object* v___x_79_; 
lean_dec(v_h__2_76_);
v_val_78_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v_x_74_, 1);
v___x_79_ = lean_apply_2(v_h__1_75_, v_val_78_, lean_box(0));
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter___boxed(lean_object* v_m_80_, lean_object* v_inst_81_, lean_object* v_00_u03b1_82_, lean_object* v_x_83_, lean_object* v_motive_84_, lean_object* v_x_85_, lean_object* v_h__1_86_, lean_object* v_h__2_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l___private_Init_Data_Option_Attach_0__OptionT_instMonadAttach_match__1_splitter(v_m_80_, v_inst_81_, v_00_u03b1_82_, v_x_83_, v_motive_84_, v_x_85_, v_h__1_86_, v_h__2_87_);
lean_dec(v_x_83_);
lean_dec(v_inst_81_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_bind_match__1_splitter___redArg(lean_object* v_____do__lift_89_, lean_object* v_h__1_90_, lean_object* v_h__2_91_){
_start:
{
if (lean_obj_tag(v_____do__lift_89_) == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_h__1_90_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_apply_1(v_h__2_91_, v___x_92_);
return v___x_93_;
}
else
{
lean_object* v_val_94_; lean_object* v___x_95_; 
lean_dec(v_h__2_91_);
v_val_94_ = lean_ctor_get(v_____do__lift_89_, 0);
lean_inc(v_val_94_);
lean_dec_ref_known(v_____do__lift_89_, 1);
v___x_95_ = lean_apply_1(v_h__1_90_, v_val_94_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Option_Attach_0__OptionT_bind_match__1_splitter(lean_object* v_00_u03b1_96_, lean_object* v_motive_97_, lean_object* v_____do__lift_98_, lean_object* v_h__1_99_, lean_object* v_h__2_100_){
_start:
{
if (lean_obj_tag(v_____do__lift_98_) == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; 
lean_dec(v_h__1_99_);
v___x_101_ = lean_box(0);
v___x_102_ = lean_apply_1(v_h__2_100_, v___x_101_);
return v___x_102_;
}
else
{
lean_object* v_val_103_; lean_object* v___x_104_; 
lean_dec(v_h__2_100_);
v_val_103_ = lean_ctor_get(v_____do__lift_98_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v_____do__lift_98_, 1);
v___x_104_ = lean_apply_1(v_h__1_99_, v_val_103_);
return v___x_104_;
}
}
}
lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Array(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_List(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Subtype_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Option_Attach(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Subtype_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Option_Attach(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Array(uint8_t builtin);
lean_object* initialize_Init_Data_Option_List(uint8_t builtin);
lean_object* initialize_Init_Data_Subtype_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Option_Attach(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Subtype_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Option_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Option_Attach(builtin);
}
#ifdef __cplusplus
}
#endif

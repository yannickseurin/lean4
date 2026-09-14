// Lean compiler output
// Module: Init.Data.Vector.Algebra
// Imports: public import Init.Grind public import Init.Data.Vector.Basic import Init.Data.Vector.Lemmas
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Grind_IntModule_toNatModule___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Vector_zero___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instZero___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instZero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_add___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Vector_add___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__0 = (const lean_object*)&l_Vector_add___redArg___closed__0_value;
static const lean_closure_object l_Vector_add___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__1 = (const lean_object*)&l_Vector_add___redArg___closed__1_value;
static const lean_closure_object l_Vector_add___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__2 = (const lean_object*)&l_Vector_add___redArg___closed__2_value;
static const lean_closure_object l_Vector_add___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__3 = (const lean_object*)&l_Vector_add___redArg___closed__3_value;
static const lean_closure_object l_Vector_add___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__4 = (const lean_object*)&l_Vector_add___redArg___closed__4_value;
static const lean_closure_object l_Vector_add___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__5 = (const lean_object*)&l_Vector_add___redArg___closed__5_value;
static const lean_closure_object l_Vector_add___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Vector_add___redArg___closed__6 = (const lean_object*)&l_Vector_add___redArg___closed__6_value;
static const lean_ctor_object l_Vector_add___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_add___redArg___closed__0_value),((lean_object*)&l_Vector_add___redArg___closed__1_value)}};
static const lean_object* l_Vector_add___redArg___closed__7 = (const lean_object*)&l_Vector_add___redArg___closed__7_value;
static const lean_ctor_object l_Vector_add___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_add___redArg___closed__7_value),((lean_object*)&l_Vector_add___redArg___closed__2_value),((lean_object*)&l_Vector_add___redArg___closed__3_value),((lean_object*)&l_Vector_add___redArg___closed__4_value),((lean_object*)&l_Vector_add___redArg___closed__5_value)}};
static const lean_object* l_Vector_add___redArg___closed__8 = (const lean_object*)&l_Vector_add___redArg___closed__8_value;
static const lean_ctor_object l_Vector_add___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Vector_add___redArg___closed__8_value),((lean_object*)&l_Vector_add___redArg___closed__6_value)}};
static const lean_object* l_Vector_add___redArg___closed__9 = (const lean_object*)&l_Vector_add___redArg___closed__9_value;
static const lean_array_object l_Vector_add___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Vector_add___redArg___closed__10 = (const lean_object*)&l_Vector_add___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Vector_add___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAdd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_neg___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_neg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_neg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_neg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_neg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instNeg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instNeg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sub___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_sub___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instSub___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instSub(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_mul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instMul___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instMul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_hmul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_hmul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_hmul___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_hmul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_hmul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instHMul___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instHMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_smul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_smul___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_smul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_smul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instSMul___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instSMul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAddCommMonoid___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAddCommMonoid(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAddCommGroup___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instAddCommGroup(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instNatModule___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instNatModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instIntModule___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_instIntModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Vector_zero___redArg(lean_object* v_n_1_, lean_object* v_inst_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_array(v_n_1_, v_inst_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Vector_zero(lean_object* v_00_u03b1_4_, lean_object* v_n_5_, lean_object* v_inst_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_mk_array(v_n_5_, v_inst_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Vector_instZero___redArg(lean_object* v_n_8_, lean_object* v_inst_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_mk_array(v_n_8_, v_inst_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Vector_instZero(lean_object* v_00_u03b1_11_, lean_object* v_n_12_, lean_object* v_inst_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_mk_array(v_n_12_, v_inst_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Vector_add___redArg___lam__0(lean_object* v_inst_15_, lean_object* v_x1_16_, lean_object* v_x2_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_apply_2(v_inst_15_, v_x1_16_, v_x2_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Vector_add___redArg(lean_object* v_inst_40_, lean_object* v_xs_41_, lean_object* v_ys_42_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_43_ = lean_alloc_closure((void*)(l_Vector_add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_43_, 0, v_inst_40_);
v___x_44_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = ((lean_object*)(l_Vector_add___redArg___closed__10));
v___x_47_ = l_Array_zipWithMAux___redArg(v___x_44_, v_xs_41_, v_ys_42_, v___f_43_, v___x_45_, v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Vector_add(lean_object* v_00_u03b1_48_, lean_object* v_n_49_, lean_object* v_inst_50_, lean_object* v_xs_51_, lean_object* v_ys_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Vector_add___redArg(v_inst_50_, v_xs_51_, v_ys_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Vector_add___boxed(lean_object* v_00_u03b1_54_, lean_object* v_n_55_, lean_object* v_inst_56_, lean_object* v_xs_57_, lean_object* v_ys_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Vector_add(v_00_u03b1_54_, v_n_55_, v_inst_56_, v_xs_57_, v_ys_58_);
lean_dec(v_n_55_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Vector_instAdd___redArg(lean_object* v_n_60_, lean_object* v_inst_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_closure((void*)(l_Vector_add___boxed), 5, 3);
lean_closure_set(v___x_62_, 0, lean_box(0));
lean_closure_set(v___x_62_, 1, v_n_60_);
lean_closure_set(v___x_62_, 2, v_inst_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Vector_instAdd(lean_object* v_00_u03b1_63_, lean_object* v_n_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_closure((void*)(l_Vector_add___boxed), 5, 3);
lean_closure_set(v___x_66_, 0, lean_box(0));
lean_closure_set(v___x_66_, 1, v_n_64_);
lean_closure_set(v___x_66_, 2, v_inst_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Vector_neg___redArg___lam__0(lean_object* v_inst_67_, lean_object* v_x_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_apply_1(v_inst_67_, v_x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Vector_neg___redArg(lean_object* v_inst_70_, lean_object* v_xs_71_){
_start:
{
lean_object* v___f_72_; lean_object* v___x_73_; size_t v_sz_74_; size_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___f_72_ = lean_alloc_closure((void*)(l_Vector_neg___redArg___lam__0), 2, 1);
lean_closure_set(v___f_72_, 0, v_inst_70_);
v___x_73_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v_sz_74_ = lean_array_size(v_xs_71_);
v___x_75_ = ((size_t)0ULL);
v___x_76_ = l_unsafeCast___redArg(v_xs_71_);
v___x_77_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_73_, v___f_72_, v_sz_74_, v___x_75_, v___x_76_);
v___x_78_ = l_unsafeCast___redArg(v___x_77_);
lean_dec(v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Vector_neg___redArg___boxed(lean_object* v_inst_79_, lean_object* v_xs_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Vector_neg___redArg(v_inst_79_, v_xs_80_);
lean_dec_ref(v_xs_80_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Vector_neg(lean_object* v_00_u03b1_82_, lean_object* v_n_83_, lean_object* v_inst_84_, lean_object* v_xs_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Vector_neg___redArg(v_inst_84_, v_xs_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Vector_neg___boxed(lean_object* v_00_u03b1_87_, lean_object* v_n_88_, lean_object* v_inst_89_, lean_object* v_xs_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Vector_neg(v_00_u03b1_87_, v_n_88_, v_inst_89_, v_xs_90_);
lean_dec_ref(v_xs_90_);
lean_dec(v_n_88_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Vector_instNeg___redArg(lean_object* v_n_92_, lean_object* v_inst_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_alloc_closure((void*)(l_Vector_neg___boxed), 4, 3);
lean_closure_set(v___x_94_, 0, lean_box(0));
lean_closure_set(v___x_94_, 1, v_n_92_);
lean_closure_set(v___x_94_, 2, v_inst_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Vector_instNeg(lean_object* v_00_u03b1_95_, lean_object* v_n_96_, lean_object* v_inst_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_alloc_closure((void*)(l_Vector_neg___boxed), 4, 3);
lean_closure_set(v___x_98_, 0, lean_box(0));
lean_closure_set(v___x_98_, 1, v_n_96_);
lean_closure_set(v___x_98_, 2, v_inst_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Vector_sub___redArg(lean_object* v_inst_99_, lean_object* v_xs_100_, lean_object* v_ys_101_){
_start:
{
lean_object* v___f_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___f_102_ = lean_alloc_closure((void*)(l_Vector_add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_102_, 0, v_inst_99_);
v___x_103_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = ((lean_object*)(l_Vector_add___redArg___closed__10));
v___x_106_ = l_Array_zipWithMAux___redArg(v___x_103_, v_xs_100_, v_ys_101_, v___f_102_, v___x_104_, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Vector_sub(lean_object* v_00_u03b1_107_, lean_object* v_n_108_, lean_object* v_inst_109_, lean_object* v_xs_110_, lean_object* v_ys_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Vector_sub___redArg(v_inst_109_, v_xs_110_, v_ys_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Vector_sub___boxed(lean_object* v_00_u03b1_113_, lean_object* v_n_114_, lean_object* v_inst_115_, lean_object* v_xs_116_, lean_object* v_ys_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Vector_sub(v_00_u03b1_113_, v_n_114_, v_inst_115_, v_xs_116_, v_ys_117_);
lean_dec(v_n_114_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Vector_instSub___redArg(lean_object* v_n_119_, lean_object* v_inst_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_alloc_closure((void*)(l_Vector_sub___boxed), 5, 3);
lean_closure_set(v___x_121_, 0, lean_box(0));
lean_closure_set(v___x_121_, 1, v_n_119_);
lean_closure_set(v___x_121_, 2, v_inst_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Vector_instSub(lean_object* v_00_u03b1_122_, lean_object* v_n_123_, lean_object* v_inst_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_alloc_closure((void*)(l_Vector_sub___boxed), 5, 3);
lean_closure_set(v___x_125_, 0, lean_box(0));
lean_closure_set(v___x_125_, 1, v_n_123_);
lean_closure_set(v___x_125_, 2, v_inst_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Vector_mul___redArg(lean_object* v_inst_126_, lean_object* v_xs_127_, lean_object* v_ys_128_){
_start:
{
lean_object* v___f_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___f_129_ = lean_alloc_closure((void*)(l_Vector_add___redArg___lam__0), 3, 1);
lean_closure_set(v___f_129_, 0, v_inst_126_);
v___x_130_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = ((lean_object*)(l_Vector_add___redArg___closed__10));
v___x_133_ = l_Array_zipWithMAux___redArg(v___x_130_, v_xs_127_, v_ys_128_, v___f_129_, v___x_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Vector_mul(lean_object* v_00_u03b1_134_, lean_object* v_n_135_, lean_object* v_inst_136_, lean_object* v_xs_137_, lean_object* v_ys_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Vector_mul___redArg(v_inst_136_, v_xs_137_, v_ys_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Vector_mul___boxed(lean_object* v_00_u03b1_140_, lean_object* v_n_141_, lean_object* v_inst_142_, lean_object* v_xs_143_, lean_object* v_ys_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Vector_mul(v_00_u03b1_140_, v_n_141_, v_inst_142_, v_xs_143_, v_ys_144_);
lean_dec(v_n_141_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMul___redArg(lean_object* v_n_146_, lean_object* v_inst_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_alloc_closure((void*)(l_Vector_mul___boxed), 5, 3);
lean_closure_set(v___x_148_, 0, lean_box(0));
lean_closure_set(v___x_148_, 1, v_n_146_);
lean_closure_set(v___x_148_, 2, v_inst_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Vector_instMul(lean_object* v_00_u03b1_149_, lean_object* v_n_150_, lean_object* v_inst_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_alloc_closure((void*)(l_Vector_mul___boxed), 5, 3);
lean_closure_set(v___x_152_, 0, lean_box(0));
lean_closure_set(v___x_152_, 1, v_n_150_);
lean_closure_set(v___x_152_, 2, v_inst_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Vector_hmul___redArg___lam__0(lean_object* v_inst_153_, lean_object* v_c_154_, lean_object* v_x_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_apply_2(v_inst_153_, v_c_154_, v_x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Vector_hmul___redArg(lean_object* v_inst_157_, lean_object* v_c_158_, lean_object* v_xs_159_){
_start:
{
lean_object* v___f_160_; lean_object* v___x_161_; size_t v_sz_162_; size_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___f_160_ = lean_alloc_closure((void*)(l_Vector_hmul___redArg___lam__0), 3, 2);
lean_closure_set(v___f_160_, 0, v_inst_157_);
lean_closure_set(v___f_160_, 1, v_c_158_);
v___x_161_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v_sz_162_ = lean_array_size(v_xs_159_);
v___x_163_ = ((size_t)0ULL);
v___x_164_ = l_unsafeCast___redArg(v_xs_159_);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_161_, v___f_160_, v_sz_162_, v___x_163_, v___x_164_);
v___x_166_ = l_unsafeCast___redArg(v___x_165_);
lean_dec(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Vector_hmul___redArg___boxed(lean_object* v_inst_167_, lean_object* v_c_168_, lean_object* v_xs_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Vector_hmul___redArg(v_inst_167_, v_c_168_, v_xs_169_);
lean_dec_ref(v_xs_169_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Vector_hmul(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_00_u03b3_173_, lean_object* v_n_174_, lean_object* v_inst_175_, lean_object* v_c_176_, lean_object* v_xs_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Vector_hmul___redArg(v_inst_175_, v_c_176_, v_xs_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Vector_hmul___boxed(lean_object* v_00_u03b1_179_, lean_object* v_00_u03b2_180_, lean_object* v_00_u03b3_181_, lean_object* v_n_182_, lean_object* v_inst_183_, lean_object* v_c_184_, lean_object* v_xs_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Vector_hmul(v_00_u03b1_179_, v_00_u03b2_180_, v_00_u03b3_181_, v_n_182_, v_inst_183_, v_c_184_, v_xs_185_);
lean_dec_ref(v_xs_185_);
lean_dec(v_n_182_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Vector_instHMul___redArg(lean_object* v_n_187_, lean_object* v_inst_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_closure((void*)(l_Vector_hmul___boxed), 7, 5);
lean_closure_set(v___x_189_, 0, lean_box(0));
lean_closure_set(v___x_189_, 1, lean_box(0));
lean_closure_set(v___x_189_, 2, lean_box(0));
lean_closure_set(v___x_189_, 3, v_n_187_);
lean_closure_set(v___x_189_, 4, v_inst_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Vector_instHMul(lean_object* v_00_u03b1_190_, lean_object* v_00_u03b2_191_, lean_object* v_00_u03b3_192_, lean_object* v_n_193_, lean_object* v_inst_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_closure((void*)(l_Vector_hmul___boxed), 7, 5);
lean_closure_set(v___x_195_, 0, lean_box(0));
lean_closure_set(v___x_195_, 1, lean_box(0));
lean_closure_set(v___x_195_, 2, lean_box(0));
lean_closure_set(v___x_195_, 3, v_n_193_);
lean_closure_set(v___x_195_, 4, v_inst_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Vector_smul___redArg(lean_object* v_inst_196_, lean_object* v_c_197_, lean_object* v_xs_198_){
_start:
{
lean_object* v___f_199_; lean_object* v___x_200_; size_t v_sz_201_; size_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___f_199_ = lean_alloc_closure((void*)(l_Vector_hmul___redArg___lam__0), 3, 2);
lean_closure_set(v___f_199_, 0, v_inst_196_);
lean_closure_set(v___f_199_, 1, v_c_197_);
v___x_200_ = ((lean_object*)(l_Vector_add___redArg___closed__9));
v_sz_201_ = lean_array_size(v_xs_198_);
v___x_202_ = ((size_t)0ULL);
v___x_203_ = l_unsafeCast___redArg(v_xs_198_);
v___x_204_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_200_, v___f_199_, v_sz_201_, v___x_202_, v___x_203_);
v___x_205_ = l_unsafeCast___redArg(v___x_204_);
lean_dec(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Vector_smul___redArg___boxed(lean_object* v_inst_206_, lean_object* v_c_207_, lean_object* v_xs_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Vector_smul___redArg(v_inst_206_, v_c_207_, v_xs_208_);
lean_dec_ref(v_xs_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Vector_smul(lean_object* v_00_u03b1_210_, lean_object* v_00_u03b2_211_, lean_object* v_n_212_, lean_object* v_inst_213_, lean_object* v_c_214_, lean_object* v_xs_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Vector_smul___redArg(v_inst_213_, v_c_214_, v_xs_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Vector_smul___boxed(lean_object* v_00_u03b1_217_, lean_object* v_00_u03b2_218_, lean_object* v_n_219_, lean_object* v_inst_220_, lean_object* v_c_221_, lean_object* v_xs_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Vector_smul(v_00_u03b1_217_, v_00_u03b2_218_, v_n_219_, v_inst_220_, v_c_221_, v_xs_222_);
lean_dec_ref(v_xs_222_);
lean_dec(v_n_219_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Vector_instSMul___redArg(lean_object* v_n_224_, lean_object* v_inst_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_alloc_closure((void*)(l_Vector_smul___boxed), 6, 4);
lean_closure_set(v___x_226_, 0, lean_box(0));
lean_closure_set(v___x_226_, 1, lean_box(0));
lean_closure_set(v___x_226_, 2, v_n_224_);
lean_closure_set(v___x_226_, 3, v_inst_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Vector_instSMul(lean_object* v_00_u03b1_227_, lean_object* v_00_u03b2_228_, lean_object* v_n_229_, lean_object* v_inst_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = lean_alloc_closure((void*)(l_Vector_smul___boxed), 6, 4);
lean_closure_set(v___x_231_, 0, lean_box(0));
lean_closure_set(v___x_231_, 1, lean_box(0));
lean_closure_set(v___x_231_, 2, v_n_229_);
lean_closure_set(v___x_231_, 3, v_inst_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Vector_instAddCommMonoid___redArg(lean_object* v_n_232_, lean_object* v_inst_233_){
_start:
{
lean_object* v_toZero_234_; lean_object* v_toAdd_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_244_; 
v_toZero_234_ = lean_ctor_get(v_inst_233_, 0);
v_toAdd_235_ = lean_ctor_get(v_inst_233_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_inst_233_);
if (v_isSharedCheck_244_ == 0)
{
v___x_237_ = v_inst_233_;
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_toAdd_235_);
lean_inc(v_toZero_234_);
lean_dec(v_inst_233_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
lean_inc(v_n_232_);
v___x_239_ = lean_mk_array(v_n_232_, v_toZero_234_);
v___x_240_ = lean_alloc_closure((void*)(l_Vector_add___boxed), 5, 3);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, v_n_232_);
lean_closure_set(v___x_240_, 2, v_toAdd_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 1, v___x_240_);
lean_ctor_set(v___x_237_, 0, v___x_239_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_239_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_instAddCommMonoid(lean_object* v_00_u03b1_245_, lean_object* v_n_246_, lean_object* v_inst_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Vector_instAddCommMonoid___redArg(v_n_246_, v_inst_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Vector_instAddCommGroup___redArg(lean_object* v_n_249_, lean_object* v_inst_250_){
_start:
{
lean_object* v_toAddCommMonoid_251_; lean_object* v_toNeg_252_; lean_object* v_toSub_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_263_; 
v_toAddCommMonoid_251_ = lean_ctor_get(v_inst_250_, 0);
v_toNeg_252_ = lean_ctor_get(v_inst_250_, 1);
v_toSub_253_ = lean_ctor_get(v_inst_250_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_inst_250_);
if (v_isSharedCheck_263_ == 0)
{
v___x_255_ = v_inst_250_;
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_toSub_253_);
lean_inc(v_toNeg_252_);
lean_inc(v_toAddCommMonoid_251_);
lean_dec(v_inst_250_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_inc_n(v_n_249_, 2);
v___x_257_ = l_Vector_instAddCommMonoid___redArg(v_n_249_, v_toAddCommMonoid_251_);
v___x_258_ = lean_alloc_closure((void*)(l_Vector_neg___boxed), 4, 3);
lean_closure_set(v___x_258_, 0, lean_box(0));
lean_closure_set(v___x_258_, 1, v_n_249_);
lean_closure_set(v___x_258_, 2, v_toNeg_252_);
v___x_259_ = lean_alloc_closure((void*)(l_Vector_sub___boxed), 5, 3);
lean_closure_set(v___x_259_, 0, lean_box(0));
lean_closure_set(v___x_259_, 1, v_n_249_);
lean_closure_set(v___x_259_, 2, v_toSub_253_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 2, v___x_259_);
lean_ctor_set(v___x_255_, 1, v___x_258_);
lean_ctor_set(v___x_255_, 0, v___x_257_);
v___x_261_ = v___x_255_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_instAddCommGroup(lean_object* v_00_u03b1_264_, lean_object* v_n_265_, lean_object* v_inst_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Vector_instAddCommGroup___redArg(v_n_265_, v_inst_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Vector_instNatModule___redArg(lean_object* v_n_268_, lean_object* v_inst_269_){
_start:
{
lean_object* v_toAddCommMonoid_270_; lean_object* v_nsmul_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_280_; 
v_toAddCommMonoid_270_ = lean_ctor_get(v_inst_269_, 0);
v_nsmul_271_ = lean_ctor_get(v_inst_269_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_inst_269_);
if (v_isSharedCheck_280_ == 0)
{
v___x_273_ = v_inst_269_;
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_nsmul_271_);
lean_inc(v_toAddCommMonoid_270_);
lean_dec(v_inst_269_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
lean_inc(v_n_268_);
v___x_275_ = l_Vector_instAddCommMonoid___redArg(v_n_268_, v_toAddCommMonoid_270_);
v___x_276_ = lean_alloc_closure((void*)(l_Vector_smul___boxed), 6, 4);
lean_closure_set(v___x_276_, 0, lean_box(0));
lean_closure_set(v___x_276_, 1, lean_box(0));
lean_closure_set(v___x_276_, 2, v_n_268_);
lean_closure_set(v___x_276_, 3, v_nsmul_271_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_276_);
lean_ctor_set(v___x_273_, 0, v___x_275_);
v___x_278_ = v___x_273_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_instNatModule(lean_object* v_00_u03b1_281_, lean_object* v_n_282_, lean_object* v_inst_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Vector_instNatModule___redArg(v_n_282_, v_inst_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Vector_instIntModule___redArg(lean_object* v_n_285_, lean_object* v_inst_286_){
_start:
{
lean_object* v_toAddCommGroup_287_; lean_object* v_zsmul_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_300_; 
v_toAddCommGroup_287_ = lean_ctor_get(v_inst_286_, 0);
v_zsmul_288_ = lean_ctor_get(v_inst_286_, 2);
lean_inc(v_zsmul_288_);
lean_inc_ref(v_toAddCommGroup_287_);
lean_inc(v_n_285_);
v___x_289_ = l_Vector_instAddCommGroup___redArg(v_n_285_, v_toAddCommGroup_287_);
v___x_290_ = l_Lean_Grind_IntModule_toNatModule___redArg(v_inst_286_);
v_isSharedCheck_300_ = !lean_is_exclusive(v_inst_286_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; 
v_unused_301_ = lean_ctor_get(v_inst_286_, 2);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_inst_286_, 1);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_inst_286_, 0);
lean_dec(v_unused_303_);
v___x_292_ = v_inst_286_;
v_isShared_293_ = v_isSharedCheck_300_;
goto v_resetjp_291_;
}
else
{
lean_dec(v_inst_286_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_300_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v_nsmul_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v_nsmul_294_ = lean_ctor_get(v___x_290_, 1);
lean_inc(v_nsmul_294_);
lean_dec_ref(v___x_290_);
lean_inc(v_n_285_);
v___x_295_ = lean_alloc_closure((void*)(l_Vector_smul___boxed), 6, 4);
lean_closure_set(v___x_295_, 0, lean_box(0));
lean_closure_set(v___x_295_, 1, lean_box(0));
lean_closure_set(v___x_295_, 2, v_n_285_);
lean_closure_set(v___x_295_, 3, v_nsmul_294_);
v___x_296_ = lean_alloc_closure((void*)(l_Vector_smul___boxed), 6, 4);
lean_closure_set(v___x_296_, 0, lean_box(0));
lean_closure_set(v___x_296_, 1, lean_box(0));
lean_closure_set(v___x_296_, 2, v_n_285_);
lean_closure_set(v___x_296_, 3, v_zsmul_288_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 2, v___x_296_);
lean_ctor_set(v___x_292_, 1, v___x_295_);
lean_ctor_set(v___x_292_, 0, v___x_289_);
v___x_298_ = v___x_292_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Vector_instIntModule(lean_object* v_00_u03b1_304_, lean_object* v_n_305_, lean_object* v_inst_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Vector_instIntModule___redArg(v_n_305_, v_inst_306_);
return v___x_307_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Vector_Algebra(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Vector_Algebra(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Vector_Algebra(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Algebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Vector_Algebra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Vector_Algebra(builtin);
}
#ifdef __cplusplus
}
#endif

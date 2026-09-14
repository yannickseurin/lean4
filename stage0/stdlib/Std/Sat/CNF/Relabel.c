// Lean compiler output
// Module: Std.Sat.CNF.Relabel
// Imports: public import Std.Sat.CNF.Basic public import Std.Sat.CNF.Sat import Init.Data.List.Nat.Range
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
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_relabel___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_relabel(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sat_CNF_Relabel_0__instDecidableEqProd_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sat_CNF_Relabel_0__instDecidableEqProd_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg(lean_object* v_r_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_r_1_);
v___x_6_ = l_unsafeCast___redArg(v_bs_4_);
lean_dec_ref(v_bs_4_);
return v___x_6_;
}
else
{
lean_object* v_v_7_; lean_object* v___x_8_; lean_object* v_bs_x27_9_; lean_object* v___x_10_; lean_object* v___x_11_; size_t v___x_12_; size_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_v_7_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_8_ = lean_unsigned_to_nat(0u);
v_bs_x27_9_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_8_);
v___x_10_ = l_unsafeCast___redArg(v_v_7_);
lean_dec(v_v_7_);
lean_inc(v_r_1_);
v___x_11_ = lean_apply_1(v_r_1_, v___x_10_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg___boxed(lean_object* v_r_17_, lean_object* v_sz_18_, lean_object* v_i_19_, lean_object* v_bs_20_){
_start:
{
size_t v_sz_boxed_21_; size_t v_i_boxed_22_; lean_object* v_res_23_; 
v_sz_boxed_21_ = lean_unbox_usize(v_sz_18_);
lean_dec(v_sz_18_);
v_i_boxed_22_ = lean_unbox_usize(v_i_19_);
lean_dec(v_i_19_);
v_res_23_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg(v_r_17_, v_sz_boxed_21_, v_i_boxed_22_, v_bs_20_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_relabel___redArg(lean_object* v_r_24_, lean_object* v_c_25_){
_start:
{
lean_object* v_atoms_26_; lean_object* v_polarities_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_39_; 
v_atoms_26_ = lean_ctor_get(v_c_25_, 0);
v_polarities_27_ = lean_ctor_get(v_c_25_, 1);
v_isSharedCheck_39_ = !lean_is_exclusive(v_c_25_);
if (v_isSharedCheck_39_ == 0)
{
v___x_29_ = v_c_25_;
v_isShared_30_ = v_isSharedCheck_39_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_polarities_27_);
lean_inc(v_atoms_26_);
lean_dec(v_c_25_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_39_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
size_t v_sz_31_; size_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_37_; 
v_sz_31_ = lean_array_size(v_atoms_26_);
v___x_32_ = ((size_t)0ULL);
v___x_33_ = l_unsafeCast___redArg(v_atoms_26_);
lean_dec_ref(v_atoms_26_);
v___x_34_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg(v_r_24_, v_sz_31_, v___x_32_, v___x_33_);
v___x_35_ = l_unsafeCast___redArg(v___x_34_);
lean_dec_ref(v___x_34_);
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 0, v___x_35_);
v___x_37_ = v___x_29_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_38_, 1, v_polarities_27_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_relabel(lean_object* v_00_u03b1_40_, lean_object* v_00_u03b2_41_, lean_object* v_r_42_, lean_object* v_c_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Std_Sat_CNF_Clause_relabel___redArg(v_r_42_, v_c_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0(lean_object* v_00_u03b1_45_, lean_object* v_00_u03b2_46_, lean_object* v_r_47_, size_t v_sz_48_, size_t v_i_49_, lean_object* v_bs_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___redArg(v_r_47_, v_sz_48_, v_i_49_, v_bs_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0___boxed(lean_object* v_00_u03b1_52_, lean_object* v_00_u03b2_53_, lean_object* v_r_54_, lean_object* v_sz_55_, lean_object* v_i_56_, lean_object* v_bs_57_){
_start:
{
size_t v_sz_boxed_58_; size_t v_i_boxed_59_; lean_object* v_res_60_; 
v_sz_boxed_58_ = lean_unbox_usize(v_sz_55_);
lean_dec(v_sz_55_);
v_i_boxed_59_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_res_60_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_Clause_relabel_spec__0(v_00_u03b1_52_, v_00_u03b2_53_, v_r_54_, v_sz_boxed_58_, v_i_boxed_59_, v_bs_57_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sat_CNF_Relabel_0__instDecidableEqProd_match__3_splitter___redArg(lean_object* v_x_61_, lean_object* v_h__1_62_){
_start:
{
lean_object* v_fst_63_; lean_object* v_snd_64_; lean_object* v___x_65_; 
v_fst_63_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_fst_63_);
v_snd_64_ = lean_ctor_get(v_x_61_, 1);
lean_inc(v_snd_64_);
lean_dec_ref(v_x_61_);
v___x_65_ = lean_apply_2(v_h__1_62_, v_fst_63_, v_snd_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sat_CNF_Relabel_0__instDecidableEqProd_match__3_splitter(lean_object* v_00_u03b1_66_, lean_object* v_00_u03b2_67_, lean_object* v_motive_68_, lean_object* v_x_69_, lean_object* v_h__1_70_){
_start:
{
lean_object* v_fst_71_; lean_object* v_snd_72_; lean_object* v___x_73_; 
v_fst_71_ = lean_ctor_get(v_x_69_, 0);
lean_inc(v_fst_71_);
v_snd_72_ = lean_ctor_get(v_x_69_, 1);
lean_inc(v_snd_72_);
lean_dec_ref(v_x_69_);
v___x_73_ = lean_apply_2(v_h__1_70_, v_fst_71_, v_snd_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg(lean_object* v_r_74_, size_t v_sz_75_, size_t v_i_76_, lean_object* v_bs_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = lean_usize_dec_lt(v_i_76_, v_sz_75_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_dec(v_r_74_);
v___x_79_ = l_unsafeCast___redArg(v_bs_77_);
lean_dec_ref(v_bs_77_);
return v___x_79_;
}
else
{
lean_object* v_v_80_; lean_object* v___x_81_; lean_object* v_bs_x27_82_; lean_object* v___x_83_; lean_object* v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_v_80_ = lean_array_uget(v_bs_77_, v_i_76_);
v___x_81_ = lean_unsigned_to_nat(0u);
v_bs_x27_82_ = lean_array_uset(v_bs_77_, v_i_76_, v___x_81_);
v___x_83_ = l_unsafeCast___redArg(v_v_80_);
lean_dec(v_v_80_);
lean_inc(v_r_74_);
v___x_84_ = l_Std_Sat_CNF_Clause_relabel___redArg(v_r_74_, v___x_83_);
v___x_85_ = ((size_t)1ULL);
v___x_86_ = lean_usize_add(v_i_76_, v___x_85_);
v___x_87_ = l_unsafeCast___redArg(v___x_84_);
lean_dec_ref(v___x_84_);
v___x_88_ = lean_array_uset(v_bs_x27_82_, v_i_76_, v___x_87_);
v_i_76_ = v___x_86_;
v_bs_77_ = v___x_88_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg___boxed(lean_object* v_r_90_, lean_object* v_sz_91_, lean_object* v_i_92_, lean_object* v_bs_93_){
_start:
{
size_t v_sz_boxed_94_; size_t v_i_boxed_95_; lean_object* v_res_96_; 
v_sz_boxed_94_ = lean_unbox_usize(v_sz_91_);
lean_dec(v_sz_91_);
v_i_boxed_95_ = lean_unbox_usize(v_i_92_);
lean_dec(v_i_92_);
v_res_96_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg(v_r_90_, v_sz_boxed_94_, v_i_boxed_95_, v_bs_93_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___redArg(lean_object* v_r_97_, lean_object* v_f_98_){
_start:
{
size_t v_sz_99_; size_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_sz_99_ = lean_array_size(v_f_98_);
v___x_100_ = ((size_t)0ULL);
v___x_101_ = l_unsafeCast___redArg(v_f_98_);
v___x_102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg(v_r_97_, v_sz_99_, v___x_100_, v___x_101_);
v___x_103_ = l_unsafeCast___redArg(v___x_102_);
lean_dec_ref(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___redArg___boxed(lean_object* v_r_104_, lean_object* v_f_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Std_Sat_CNF_relabel___redArg(v_r_104_, v_f_105_);
lean_dec_ref(v_f_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel(lean_object* v_00_u03b1_107_, lean_object* v_00_u03b2_108_, lean_object* v_r_109_, lean_object* v_f_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Std_Sat_CNF_relabel___redArg(v_r_109_, v_f_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_relabel___boxed(lean_object* v_00_u03b1_112_, lean_object* v_00_u03b2_113_, lean_object* v_r_114_, lean_object* v_f_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Std_Sat_CNF_relabel(v_00_u03b1_112_, v_00_u03b2_113_, v_r_114_, v_f_115_);
lean_dec_ref(v_f_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0(lean_object* v_00_u03b1_117_, lean_object* v_00_u03b2_118_, lean_object* v_r_119_, size_t v_sz_120_, size_t v_i_121_, lean_object* v_bs_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___redArg(v_r_119_, v_sz_120_, v_i_121_, v_bs_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0___boxed(lean_object* v_00_u03b1_124_, lean_object* v_00_u03b2_125_, lean_object* v_r_126_, lean_object* v_sz_127_, lean_object* v_i_128_, lean_object* v_bs_129_){
_start:
{
size_t v_sz_boxed_130_; size_t v_i_boxed_131_; lean_object* v_res_132_; 
v_sz_boxed_130_ = lean_unbox_usize(v_sz_127_);
lean_dec(v_sz_127_);
v_i_boxed_131_ = lean_unbox_usize(v_i_128_);
lean_dec(v_i_128_);
v_res_132_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_CNF_relabel_spec__0(v_00_u03b1_124_, v_00_u03b2_125_, v_r_126_, v_sz_boxed_130_, v_i_boxed_131_, v_bs_129_);
return v_res_132_;
}
}
lean_object* runtime_initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Sat_CNF_Sat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Nat_Range(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sat_CNF_Relabel(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sat_CNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sat_CNF_Sat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sat_CNF_Relabel(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* initialize_Std_Sat_CNF_Sat(uint8_t builtin);
lean_object* initialize_Init_Data_List_Nat_Range(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sat_CNF_Relabel(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sat_CNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sat_CNF_Sat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Nat_Range(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sat_CNF_Relabel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sat_CNF_Relabel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sat_CNF_Relabel(builtin);
}
#ifdef __cplusplus
}
#endif

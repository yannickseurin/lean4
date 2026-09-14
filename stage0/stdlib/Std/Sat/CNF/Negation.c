// Lean compiler output
// Module: Std.Sat.CNF.Negation
// Imports: public import Std.Sat.CNF.Basic public import Std.Sat.CNF.Sat public import Std.Sat.CNF.Entails public import Std.Sat.CNF.Unit import Init.Data.Array.MapIdx
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
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Std_Sat_CNF_Clause_polarity___redArg(lean_object*, lean_object*);
lean_object* l_Std_Sat_CNF_Clause_unit___redArg(lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg(lean_object* v_c_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = l_unsafeCast___redArg(v_bs_4_);
lean_dec_ref(v_bs_4_);
return v___x_6_;
}
else
{
lean_object* v_v_7_; lean_object* v___x_8_; lean_object* v_bs_x27_9_; lean_object* v___y_11_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v_v_7_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_8_ = lean_unsigned_to_nat(0u);
v_bs_x27_9_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_8_);
v___x_17_ = lean_usize_to_nat(v_i_3_);
v___x_18_ = l_unsafeCast___redArg(v_v_7_);
lean_dec(v_v_7_);
v___x_19_ = l_Std_Sat_CNF_Clause_polarity___redArg(v_c_1_, v___x_17_);
lean_dec(v___x_17_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
v___x_20_ = l_Std_Sat_CNF_Clause_unit___redArg(v___x_18_, v___x_5_);
v___y_11_ = v___x_20_;
goto v___jp_10_;
}
else
{
uint8_t v___x_21_; lean_object* v___x_22_; 
v___x_21_ = 0;
v___x_22_ = l_Std_Sat_CNF_Clause_unit___redArg(v___x_18_, v___x_21_);
v___y_11_ = v___x_22_;
goto v___jp_10_;
}
v___jp_10_:
{
size_t v___x_12_; size_t v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = ((size_t)1ULL);
v___x_13_ = lean_usize_add(v_i_3_, v___x_12_);
v___x_14_ = l_unsafeCast___redArg(v___y_11_);
lean_dec_ref(v___y_11_);
v___x_15_ = lean_array_uset(v_bs_x27_9_, v_i_3_, v___x_14_);
v_i_3_ = v___x_13_;
v_bs_4_ = v___x_15_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg___boxed(lean_object* v_c_23_, lean_object* v_sz_24_, lean_object* v_i_25_, lean_object* v_bs_26_){
_start:
{
size_t v_sz_boxed_27_; size_t v_i_boxed_28_; lean_object* v_res_29_; 
v_sz_boxed_27_ = lean_unbox_usize(v_sz_24_);
lean_dec(v_sz_24_);
v_i_boxed_28_ = lean_unbox_usize(v_i_25_);
lean_dec(v_i_25_);
v_res_29_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg(v_c_23_, v_sz_boxed_27_, v_i_boxed_28_, v_bs_26_);
lean_dec_ref(v_c_23_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___redArg(lean_object* v_c_30_){
_start:
{
lean_object* v_atoms_31_; size_t v_sz_32_; size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_atoms_31_ = lean_ctor_get(v_c_30_, 0);
v_sz_32_ = lean_array_size(v_atoms_31_);
v___x_33_ = ((size_t)0ULL);
v___x_34_ = l_unsafeCast___redArg(v_atoms_31_);
v___x_35_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg(v_c_30_, v_sz_32_, v___x_33_, v___x_34_);
v___x_36_ = l_unsafeCast___redArg(v___x_35_);
lean_dec_ref(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___redArg___boxed(lean_object* v_c_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Std_Sat_CNF_Clause_negate___redArg(v_c_37_);
lean_dec_ref(v_c_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate(lean_object* v_00_u03b1_39_, lean_object* v_c_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Std_Sat_CNF_Clause_negate___redArg(v_c_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_CNF_Clause_negate___boxed(lean_object* v_00_u03b1_42_, lean_object* v_c_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Std_Sat_CNF_Clause_negate(v_00_u03b1_42_, v_c_43_);
lean_dec_ref(v_c_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0(lean_object* v_00_u03b1_45_, lean_object* v_c_46_, lean_object* v_as_47_, size_t v_sz_48_, size_t v_i_49_, lean_object* v_bs_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___redArg(v_c_46_, v_sz_48_, v_i_49_, v_bs_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0___boxed(lean_object* v_00_u03b1_52_, lean_object* v_c_53_, lean_object* v_as_54_, lean_object* v_sz_55_, lean_object* v_i_56_, lean_object* v_bs_57_){
_start:
{
size_t v_sz_boxed_58_; size_t v_i_boxed_59_; lean_object* v_res_60_; 
v_sz_boxed_58_ = lean_unbox_usize(v_sz_55_);
lean_dec(v_sz_55_);
v_i_boxed_59_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_res_60_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Std_Sat_CNF_Clause_negate_spec__0(v_00_u03b1_52_, v_c_53_, v_as_54_, v_sz_boxed_58_, v_i_boxed_59_, v_bs_57_);
lean_dec_ref(v_as_54_);
lean_dec_ref(v_c_53_);
return v_res_60_;
}
}
lean_object* runtime_initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Sat_CNF_Sat(uint8_t builtin);
lean_object* runtime_initialize_Std_Sat_CNF_Entails(uint8_t builtin);
lean_object* runtime_initialize_Std_Sat_CNF_Unit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_MapIdx(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Sat_CNF_Negation(uint8_t builtin) {
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
res = runtime_initialize_Std_Sat_CNF_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sat_CNF_Unit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Sat_CNF_Negation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sat_CNF_Basic(uint8_t builtin);
lean_object* initialize_Std_Sat_CNF_Sat(uint8_t builtin);
lean_object* initialize_Std_Sat_CNF_Entails(uint8_t builtin);
lean_object* initialize_Std_Sat_CNF_Unit(uint8_t builtin);
lean_object* initialize_Init_Data_Array_MapIdx(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Sat_CNF_Negation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sat_CNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sat_CNF_Sat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sat_CNF_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sat_CNF_Unit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sat_CNF_Negation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Sat_CNF_Negation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Sat_CNF_Negation(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Init.Data.Array.BinSearch
// Imports: public import Init.Data.Array.Basic import Init.Data.Bool import Init.Omega import Init.WFTactics
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Option_isSome___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_binSearch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_binSearch___redArg___closed__0 = (const lean_object*)&l_Array_binSearch___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_binSearch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_binSearchContains___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_isSome___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_binSearchContains___redArg___closed__0 = (const lean_object*)&l_Array_binSearchContains___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Array_binSearchContains___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchContains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchContains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchContains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Array_binInsert___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__0 = (const lean_object*)&l_Array_binInsert___redArg___closed__0_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__1 = (const lean_object*)&l_Array_binInsert___redArg___closed__1_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__2 = (const lean_object*)&l_Array_binInsert___redArg___closed__2_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__3 = (const lean_object*)&l_Array_binInsert___redArg___closed__3_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__4 = (const lean_object*)&l_Array_binInsert___redArg___closed__4_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__5 = (const lean_object*)&l_Array_binInsert___redArg___closed__5_value;
static const lean_closure_object l_Array_binInsert___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_binInsert___redArg___closed__6 = (const lean_object*)&l_Array_binInsert___redArg___closed__6_value;
static const lean_ctor_object l_Array_binInsert___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_binInsert___redArg___closed__0_value),((lean_object*)&l_Array_binInsert___redArg___closed__1_value)}};
static const lean_object* l_Array_binInsert___redArg___closed__7 = (const lean_object*)&l_Array_binInsert___redArg___closed__7_value;
static const lean_ctor_object l_Array_binInsert___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_binInsert___redArg___closed__7_value),((lean_object*)&l_Array_binInsert___redArg___closed__2_value),((lean_object*)&l_Array_binInsert___redArg___closed__3_value),((lean_object*)&l_Array_binInsert___redArg___closed__4_value),((lean_object*)&l_Array_binInsert___redArg___closed__5_value)}};
static const lean_object* l_Array_binInsert___redArg___closed__8 = (const lean_object*)&l_Array_binInsert___redArg___closed__8_value;
static const lean_ctor_object l_Array_binInsert___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_binInsert___redArg___closed__8_value),((lean_object*)&l_Array_binInsert___redArg___closed__6_value)}};
static const lean_object* l_Array_binInsert___redArg___closed__9 = (const lean_object*)&l_Array_binInsert___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Array_binInsert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___redArg(lean_object* v_lt_1_, lean_object* v_found_2_, lean_object* v_as_3_, lean_object* v_k_4_, lean_object* v_x_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_m_9_; lean_object* v_a_10_; lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_7_ = lean_nat_add(v_x_5_, v_x_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v_m_9_ = lean_nat_shiftr(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
v_a_10_ = lean_array_fget_borrowed(v_as_3_, v_m_9_);
lean_inc_ref(v_lt_1_);
lean_inc(v_k_4_);
lean_inc(v_a_10_);
v___x_11_ = lean_apply_2(v_lt_1_, v_a_10_, v_k_4_);
v___x_12_ = lean_unbox(v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; uint8_t v___x_14_; 
lean_dec(v_x_6_);
lean_inc_ref(v_lt_1_);
lean_inc(v_a_10_);
lean_inc(v_k_4_);
v___x_13_ = lean_apply_2(v_lt_1_, v_k_4_, v_a_10_);
v___x_14_ = lean_unbox(v___x_13_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
lean_dec(v_m_9_);
lean_dec(v_x_5_);
lean_dec(v_k_4_);
lean_dec_ref(v_lt_1_);
lean_inc(v_a_10_);
v___x_15_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_15_, 0, v_a_10_);
v___x_16_ = lean_apply_1(v_found_2_, v___x_15_);
return v___x_16_;
}
else
{
lean_object* v___x_17_; uint8_t v___x_18_; lean_object* v___x_19_; uint8_t v___y_21_; 
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_nat_dec_eq(v_m_9_, v___x_17_);
v___x_19_ = lean_nat_sub(v_m_9_, v___x_8_);
lean_dec(v_m_9_);
if (v___x_18_ == 0)
{
uint8_t v___x_25_; 
v___x_25_ = lean_nat_dec_lt(v___x_19_, v_x_5_);
v___y_21_ = v___x_25_;
goto v___jp_20_;
}
else
{
v___y_21_ = v___x_18_;
goto v___jp_20_;
}
v___jp_20_:
{
if (v___y_21_ == 0)
{
v_x_6_ = v___x_19_;
goto _start;
}
else
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v___x_19_);
lean_dec(v_x_5_);
lean_dec(v_k_4_);
lean_dec_ref(v_lt_1_);
v___x_23_ = lean_box(0);
v___x_24_ = lean_apply_1(v_found_2_, v___x_23_);
return v___x_24_;
}
}
}
}
else
{
lean_object* v___x_26_; uint8_t v___x_27_; 
lean_dec(v_x_5_);
v___x_26_ = lean_nat_add(v_m_9_, v___x_8_);
lean_dec(v_m_9_);
v___x_27_ = lean_nat_dec_le(v___x_26_, v_x_6_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec(v___x_26_);
lean_dec(v_x_6_);
lean_dec(v_k_4_);
lean_dec_ref(v_lt_1_);
v___x_28_ = lean_box(0);
v___x_29_ = lean_apply_1(v_found_2_, v___x_28_);
return v___x_29_;
}
else
{
v_x_5_ = v___x_26_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___redArg___boxed(lean_object* v_lt_31_, lean_object* v_found_32_, lean_object* v_as_33_, lean_object* v_k_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Array_binSearchAux___redArg(v_lt_31_, v_found_32_, v_as_33_, v_k_34_, v_x_35_, v_x_36_);
lean_dec_ref(v_as_33_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux(lean_object* v_00_u03b1_38_, lean_object* v_00_u03b2_39_, lean_object* v_lt_40_, lean_object* v_found_41_, lean_object* v_as_42_, lean_object* v_k_43_, lean_object* v_x_44_, lean_object* v_x_45_, lean_object* v_x_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Array_binSearchAux___redArg(v_lt_40_, v_found_41_, v_as_42_, v_k_43_, v_x_44_, v_x_45_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___boxed(lean_object* v_00_u03b1_48_, lean_object* v_00_u03b2_49_, lean_object* v_lt_50_, lean_object* v_found_51_, lean_object* v_as_52_, lean_object* v_k_53_, lean_object* v_x_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Array_binSearchAux(v_00_u03b1_48_, v_00_u03b2_49_, v_lt_50_, v_found_51_, v_as_52_, v_k_53_, v_x_54_, v_x_55_, v_x_56_);
lean_dec_ref(v_as_52_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter___redArg(lean_object* v_x_58_, lean_object* v_x_59_, lean_object* v_h__1_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_apply_3(v_h__1_60_, v_x_58_, v_x_59_, lean_box(0));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter(lean_object* v_00_u03b1_62_, lean_object* v_as_63_, lean_object* v_motive_64_, lean_object* v_x_65_, lean_object* v_x_66_, lean_object* v_x_67_, lean_object* v_h__1_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_apply_3(v_h__1_68_, v_x_65_, v_x_66_, lean_box(0));
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter___boxed(lean_object* v_00_u03b1_70_, lean_object* v_as_71_, lean_object* v_motive_72_, lean_object* v_x_73_, lean_object* v_x_74_, lean_object* v_x_75_, lean_object* v_h__1_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Init_Data_Array_BinSearch_0__Array_binSearchAux_match__1_splitter(v_00_u03b1_70_, v_as_71_, v_motive_72_, v_x_73_, v_x_74_, v_x_75_, v_h__1_76_);
lean_dec_ref(v_as_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearch___redArg(lean_object* v_as_79_, lean_object* v_k_80_, lean_object* v_lt_81_, lean_object* v_lo_82_, lean_object* v_hi_83_){
_start:
{
lean_object* v___y_85_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = lean_array_get_size(v_as_79_);
v___x_91_ = lean_nat_dec_lt(v_lo_82_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; 
lean_dec(v_hi_83_);
lean_dec(v_lo_82_);
lean_dec_ref(v_lt_81_);
lean_dec(v_k_80_);
v___x_92_ = lean_box(0);
return v___x_92_;
}
else
{
uint8_t v___x_93_; 
v___x_93_ = lean_nat_dec_lt(v_hi_83_, v___x_90_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec(v_hi_83_);
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = lean_nat_sub(v___x_90_, v___x_94_);
v___y_85_ = v___x_95_;
goto v___jp_84_;
}
else
{
v___y_85_ = v_hi_83_;
goto v___jp_84_;
}
}
v___jp_84_:
{
uint8_t v___x_86_; 
v___x_86_ = lean_nat_dec_le(v_lo_82_, v___y_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
lean_dec(v___y_85_);
lean_dec(v_lo_82_);
lean_dec_ref(v_lt_81_);
lean_dec(v_k_80_);
v___x_87_ = lean_box(0);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(l_Array_binSearch___redArg___closed__0));
v___x_89_ = l_Array_binSearchAux___redArg(v_lt_81_, v___x_88_, v_as_79_, v_k_80_, v_lo_82_, v___y_85_);
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearch___redArg___boxed(lean_object* v_as_96_, lean_object* v_k_97_, lean_object* v_lt_98_, lean_object* v_lo_99_, lean_object* v_hi_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Array_binSearch___redArg(v_as_96_, v_k_97_, v_lt_98_, v_lo_99_, v_hi_100_);
lean_dec_ref(v_as_96_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearch(lean_object* v_00_u03b1_102_, lean_object* v_as_103_, lean_object* v_k_104_, lean_object* v_lt_105_, lean_object* v_lo_106_, lean_object* v_hi_107_){
_start:
{
lean_object* v___y_109_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_array_get_size(v_as_103_);
v___x_115_ = lean_nat_dec_lt(v_lo_106_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; 
lean_dec(v_hi_107_);
lean_dec(v_lo_106_);
lean_dec_ref(v_lt_105_);
lean_dec(v_k_104_);
v___x_116_ = lean_box(0);
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = lean_nat_dec_lt(v_hi_107_, v___x_114_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec(v_hi_107_);
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = lean_nat_sub(v___x_114_, v___x_118_);
v___y_109_ = v___x_119_;
goto v___jp_108_;
}
else
{
v___y_109_ = v_hi_107_;
goto v___jp_108_;
}
}
v___jp_108_:
{
uint8_t v___x_110_; 
v___x_110_ = lean_nat_dec_le(v_lo_106_, v___y_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
lean_dec(v___y_109_);
lean_dec(v_lo_106_);
lean_dec_ref(v_lt_105_);
lean_dec(v_k_104_);
v___x_111_ = lean_box(0);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = ((lean_object*)(l_Array_binSearch___redArg___closed__0));
v___x_113_ = l_Array_binSearchAux___redArg(v_lt_105_, v___x_112_, v_as_103_, v_k_104_, v_lo_106_, v___y_109_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearch___boxed(lean_object* v_00_u03b1_120_, lean_object* v_as_121_, lean_object* v_k_122_, lean_object* v_lt_123_, lean_object* v_lo_124_, lean_object* v_hi_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Array_binSearch(v_00_u03b1_120_, v_as_121_, v_k_122_, v_lt_123_, v_lo_124_, v_hi_125_);
lean_dec_ref(v_as_121_);
return v_res_126_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchContains___redArg(lean_object* v_as_128_, lean_object* v_k_129_, lean_object* v_lt_130_, lean_object* v_lo_131_, lean_object* v_hi_132_){
_start:
{
lean_object* v___y_134_; lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_139_ = lean_array_get_size(v_as_128_);
v___x_140_ = lean_nat_dec_lt(v_lo_131_, v___x_139_);
if (v___x_140_ == 0)
{
lean_dec(v_hi_132_);
lean_dec(v_lo_131_);
lean_dec_ref(v_lt_130_);
lean_dec(v_k_129_);
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = lean_nat_dec_lt(v_hi_132_, v___x_139_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v___x_143_; 
lean_dec(v_hi_132_);
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_sub(v___x_139_, v___x_142_);
v___y_134_ = v___x_143_;
goto v___jp_133_;
}
else
{
v___y_134_ = v_hi_132_;
goto v___jp_133_;
}
}
v___jp_133_:
{
uint8_t v___x_135_; 
v___x_135_ = lean_nat_dec_le(v_lo_131_, v___y_134_);
if (v___x_135_ == 0)
{
lean_dec(v___y_134_);
lean_dec(v_lo_131_);
lean_dec_ref(v_lt_130_);
lean_dec(v_k_129_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_136_ = ((lean_object*)(l_Array_binSearchContains___redArg___closed__0));
v___x_137_ = l_Array_binSearchAux___redArg(v_lt_130_, v___x_136_, v_as_128_, v_k_129_, v_lo_131_, v___y_134_);
v___x_138_ = lean_unbox(v___x_137_);
lean_dec(v___x_137_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchContains___redArg___boxed(lean_object* v_as_144_, lean_object* v_k_145_, lean_object* v_lt_146_, lean_object* v_lo_147_, lean_object* v_hi_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Array_binSearchContains___redArg(v_as_144_, v_k_145_, v_lt_146_, v_lo_147_, v_hi_148_);
lean_dec_ref(v_as_144_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchContains(lean_object* v_00_u03b1_151_, lean_object* v_as_152_, lean_object* v_k_153_, lean_object* v_lt_154_, lean_object* v_lo_155_, lean_object* v_hi_156_){
_start:
{
lean_object* v___y_158_; lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_array_get_size(v_as_152_);
v___x_164_ = lean_nat_dec_lt(v_lo_155_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec(v_hi_156_);
lean_dec(v_lo_155_);
lean_dec_ref(v_lt_154_);
lean_dec(v_k_153_);
return v___x_164_;
}
else
{
uint8_t v___x_165_; 
v___x_165_ = lean_nat_dec_lt(v_hi_156_, v___x_163_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v_hi_156_);
v___x_166_ = lean_unsigned_to_nat(1u);
v___x_167_ = lean_nat_sub(v___x_163_, v___x_166_);
v___y_158_ = v___x_167_;
goto v___jp_157_;
}
else
{
v___y_158_ = v_hi_156_;
goto v___jp_157_;
}
}
v___jp_157_:
{
uint8_t v___x_159_; 
v___x_159_ = lean_nat_dec_le(v_lo_155_, v___y_158_);
if (v___x_159_ == 0)
{
lean_dec(v___y_158_);
lean_dec(v_lo_155_);
lean_dec_ref(v_lt_154_);
lean_dec(v_k_153_);
return v___x_159_;
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_160_ = ((lean_object*)(l_Array_binSearchContains___redArg___closed__0));
v___x_161_ = l_Array_binSearchAux___redArg(v_lt_154_, v___x_160_, v_as_152_, v_k_153_, v_lo_155_, v___y_158_);
v___x_162_ = lean_unbox(v___x_161_);
lean_dec(v___x_161_);
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchContains___boxed(lean_object* v_00_u03b1_168_, lean_object* v_as_169_, lean_object* v_k_170_, lean_object* v_lt_171_, lean_object* v_lo_172_, lean_object* v_hi_173_){
_start:
{
uint8_t v_res_174_; lean_object* v_r_175_; 
v_res_174_ = l_Array_binSearchContains(v_00_u03b1_168_, v_as_169_, v_k_170_, v_lt_171_, v_lo_172_, v_hi_173_);
lean_dec_ref(v_as_169_);
v_r_175_ = lean_box(v_res_174_);
return v_r_175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0(lean_object* v_xs_x27_176_, lean_object* v_mid_177_, lean_object* v_toPure_178_, lean_object* v_v_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_array_fset(v_xs_x27_176_, v_mid_177_, v_v_179_);
v___x_181_ = lean_apply_2(v_toPure_178_, lean_box(0), v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0___boxed(lean_object* v_xs_x27_182_, lean_object* v_mid_183_, lean_object* v_toPure_184_, lean_object* v_v_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0(v_xs_x27_182_, v_mid_183_, v_toPure_184_, v_v_185_);
lean_dec(v_mid_183_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1(lean_object* v_x_187_, lean_object* v_as_188_, lean_object* v_toPure_189_, lean_object* v_v_190_){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_j_193_; lean_object* v_as_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_nat_add(v_x_187_, v___x_191_);
v_j_193_ = lean_array_get_size(v_as_188_);
v_as_194_ = lean_array_push(v_as_188_, v_v_190_);
v___x_195_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_192_, v_as_194_, v_j_193_);
lean_dec(v___x_192_);
v___x_196_ = lean_apply_2(v_toPure_189_, lean_box(0), v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1___boxed(lean_object* v_x_197_, lean_object* v_as_198_, lean_object* v_toPure_199_, lean_object* v_v_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1(v_x_197_, v_as_198_, v_toPure_199_, v_v_200_);
lean_dec(v_x_197_);
return v_res_201_;
}
}
static lean_object* _init_l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(0);
v___x_203_ = l_unsafeCast___redArg(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg(lean_object* v_inst_204_, lean_object* v_lt_205_, lean_object* v_merge_206_, lean_object* v_add_207_, lean_object* v_as_208_, lean_object* v_k_209_, lean_object* v_x_210_, lean_object* v_x_211_){
_start:
{
lean_object* v_toApplicative_212_; lean_object* v_toBind_213_; lean_object* v_toPure_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_mid_217_; lean_object* v_midVal_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
v_toApplicative_212_ = lean_ctor_get(v_inst_204_, 0);
v_toBind_213_ = lean_ctor_get(v_inst_204_, 1);
v_toPure_214_ = lean_ctor_get(v_toApplicative_212_, 1);
v___x_215_ = lean_nat_add(v_x_210_, v_x_211_);
v___x_216_ = lean_unsigned_to_nat(1u);
v_mid_217_ = lean_nat_shiftr(v___x_215_, v___x_216_);
lean_dec(v___x_215_);
v_midVal_218_ = lean_array_fget_borrowed(v_as_208_, v_mid_217_);
lean_inc_ref(v_lt_205_);
lean_inc(v_k_209_);
lean_inc(v_midVal_218_);
v___x_219_ = lean_apply_2(v_lt_205_, v_midVal_218_, v_k_209_);
v___x_220_ = lean_unbox(v___x_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; uint8_t v___x_222_; 
lean_dec(v_x_211_);
lean_inc_ref(v_lt_205_);
lean_inc(v_midVal_218_);
lean_inc(v_k_209_);
v___x_221_ = lean_apply_2(v_lt_205_, v_k_209_, v_midVal_218_);
v___x_222_ = lean_unbox(v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; uint8_t v___x_224_; 
lean_inc(v_toPure_214_);
lean_inc(v_toBind_213_);
lean_dec(v_x_210_);
lean_dec(v_k_209_);
lean_dec(v_add_207_);
lean_dec_ref(v_lt_205_);
lean_dec_ref(v_inst_204_);
v___x_223_ = lean_array_get_size(v_as_208_);
v___x_224_ = lean_nat_dec_lt(v_mid_217_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; 
lean_dec(v_mid_217_);
lean_dec(v_toBind_213_);
lean_dec(v_merge_206_);
v___x_225_ = lean_apply_2(v_toPure_214_, lean_box(0), v_as_208_);
return v___x_225_;
}
else
{
lean_object* v___x_226_; lean_object* v_xs_x27_227_; lean_object* v___f_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_inc(v_midVal_218_);
v___x_226_ = lean_obj_once(&l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0, &l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0_once, _init_l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0);
v_xs_x27_227_ = lean_array_fset(v_as_208_, v_mid_217_, v___x_226_);
v___f_228_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_228_, 0, v_xs_x27_227_);
lean_closure_set(v___f_228_, 1, v_mid_217_);
lean_closure_set(v___f_228_, 2, v_toPure_214_);
v___x_229_ = lean_apply_1(v_merge_206_, v_midVal_218_);
v___x_230_ = lean_apply_4(v_toBind_213_, lean_box(0), lean_box(0), v___x_229_, v___f_228_);
return v___x_230_;
}
}
else
{
v_x_211_ = v_mid_217_;
goto _start;
}
}
else
{
uint8_t v___x_232_; 
v___x_232_ = lean_nat_dec_eq(v_mid_217_, v_x_210_);
if (v___x_232_ == 0)
{
lean_dec(v_x_210_);
v_x_210_ = v_mid_217_;
goto _start;
}
else
{
lean_object* v___f_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
lean_inc(v_toPure_214_);
lean_inc(v_toBind_213_);
lean_dec(v_mid_217_);
lean_dec(v_x_211_);
lean_dec(v_k_209_);
lean_dec(v_merge_206_);
lean_dec_ref(v_lt_205_);
lean_dec_ref(v_inst_204_);
v___f_234_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_234_, 0, v_x_210_);
lean_closure_set(v___f_234_, 1, v_as_208_);
lean_closure_set(v___f_234_, 2, v_toPure_214_);
v___x_235_ = lean_box(0);
v___x_236_ = lean_apply_1(v_add_207_, v___x_235_);
v___x_237_ = lean_apply_4(v_toBind_213_, lean_box(0), lean_box(0), v___x_236_, v___f_234_);
return v___x_237_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux(lean_object* v_00_u03b1_238_, lean_object* v_m_239_, lean_object* v_inst_240_, lean_object* v_lt_241_, lean_object* v_merge_242_, lean_object* v_add_243_, lean_object* v_as_244_, lean_object* v_k_245_, lean_object* v_x_246_, lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg(v_inst_240_, v_lt_241_, v_merge_242_, v_add_243_, v_as_244_, v_k_245_, v_x_246_, v_x_247_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter___redArg(lean_object* v_x_251_, lean_object* v_x_252_, lean_object* v_h__1_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_apply_4(v_h__1_253_, v_x_251_, v_x_252_, lean_box(0), lean_box(0));
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter(lean_object* v_00_u03b1_255_, lean_object* v_lt_256_, lean_object* v_as_257_, lean_object* v_k_258_, lean_object* v_motive_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_h__1_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_apply_4(v_h__1_264_, v_x_260_, v_x_261_, lean_box(0), lean_box(0));
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter___boxed(lean_object* v_00_u03b1_266_, lean_object* v_lt_267_, lean_object* v_as_268_, lean_object* v_k_269_, lean_object* v_motive_270_, lean_object* v_x_271_, lean_object* v_x_272_, lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v_h__1_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux_match__1_splitter(v_00_u03b1_266_, v_lt_267_, v_as_268_, v_k_269_, v_motive_270_, v_x_271_, v_x_272_, v_x_273_, v_x_274_, v_h__1_275_);
lean_dec(v_k_269_);
lean_dec_ref(v_as_268_);
lean_dec_ref(v_lt_267_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__0(lean_object* v_xs_x27_277_, lean_object* v___x_278_, lean_object* v_toPure_279_, lean_object* v_v_280_){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_array_fset(v_xs_x27_277_, v___x_278_, v_v_280_);
v___x_282_ = lean_apply_2(v_toPure_279_, lean_box(0), v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__0___boxed(lean_object* v_xs_x27_283_, lean_object* v___x_284_, lean_object* v_toPure_285_, lean_object* v_v_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Array_binInsertM___redArg___lam__0(v_xs_x27_283_, v___x_284_, v_toPure_285_, v_v_286_);
lean_dec(v___x_284_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__2(lean_object* v_as_288_, lean_object* v_toPure_289_, lean_object* v_v_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_array_push(v_as_288_, v_v_290_);
v___x_292_ = lean_apply_2(v_toPure_289_, lean_box(0), v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__1(lean_object* v_as_293_, lean_object* v___x_294_, lean_object* v___x_295_, lean_object* v_toPure_296_, lean_object* v_v_297_){
_start:
{
lean_object* v_as_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_as_298_ = lean_array_push(v_as_293_, v_v_297_);
v___x_299_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_294_, v_as_298_, v___x_295_);
v___x_300_ = lean_apply_2(v_toPure_296_, lean_box(0), v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg___lam__1___boxed(lean_object* v_as_301_, lean_object* v___x_302_, lean_object* v___x_303_, lean_object* v_toPure_304_, lean_object* v_v_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Array_binInsertM___redArg___lam__1(v_as_301_, v___x_302_, v___x_303_, v_toPure_304_, v_v_305_);
lean_dec(v___x_302_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___redArg(lean_object* v_inst_307_, lean_object* v_lt_308_, lean_object* v_merge_309_, lean_object* v_add_310_, lean_object* v_as_311_, lean_object* v_k_312_){
_start:
{
lean_object* v_toApplicative_313_; lean_object* v_toBind_314_; lean_object* v_toPure_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v_toApplicative_313_ = lean_ctor_get(v_inst_307_, 0);
v_toBind_314_ = lean_ctor_get(v_inst_307_, 1);
v_toPure_315_ = lean_ctor_get(v_toApplicative_313_, 1);
v___x_316_ = lean_array_get_size(v_as_311_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v___x_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_319_ = lean_array_fget_borrowed(v_as_311_, v___x_317_);
lean_inc_ref(v_lt_308_);
lean_inc(v___x_319_);
lean_inc(v_k_312_);
v___x_320_ = lean_apply_2(v_lt_308_, v_k_312_, v___x_319_);
v___x_321_ = lean_unbox(v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
lean_inc_ref(v_lt_308_);
lean_inc(v_k_312_);
lean_inc(v___x_319_);
v___x_322_ = lean_apply_2(v_lt_308_, v___x_319_, v_k_312_);
v___x_323_ = lean_unbox(v___x_322_);
if (v___x_323_ == 0)
{
uint8_t v___x_324_; 
lean_inc(v_toPure_315_);
lean_inc(v_toBind_314_);
lean_dec(v_k_312_);
lean_dec(v_add_310_);
lean_dec_ref(v_lt_308_);
lean_dec_ref(v_inst_307_);
v___x_324_ = lean_nat_dec_lt(v___x_317_, v___x_316_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
lean_dec(v_toBind_314_);
lean_dec(v_merge_309_);
v___x_325_ = lean_apply_2(v_toPure_315_, lean_box(0), v_as_311_);
return v___x_325_;
}
else
{
lean_object* v___x_326_; lean_object* v_xs_x27_327_; lean_object* v___f_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
lean_inc(v___x_319_);
v___x_326_ = lean_obj_once(&l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0, &l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0_once, _init_l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0);
v_xs_x27_327_ = lean_array_fset(v_as_311_, v___x_317_, v___x_326_);
v___f_328_ = lean_alloc_closure((void*)(l_Array_binInsertM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_328_, 0, v_xs_x27_327_);
lean_closure_set(v___f_328_, 1, v___x_317_);
lean_closure_set(v___f_328_, 2, v_toPure_315_);
v___x_329_ = lean_apply_1(v_merge_309_, v___x_319_);
v___x_330_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_329_, v___f_328_);
return v___x_330_;
}
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_nat_sub(v___x_316_, v___x_331_);
v___x_333_ = lean_array_fget_borrowed(v_as_311_, v___x_332_);
lean_inc_ref(v_lt_308_);
lean_inc(v_k_312_);
lean_inc(v___x_333_);
v___x_334_ = lean_apply_2(v_lt_308_, v___x_333_, v_k_312_);
v___x_335_ = lean_unbox(v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; uint8_t v___x_337_; 
lean_inc_ref(v_lt_308_);
lean_inc(v___x_333_);
lean_inc(v_k_312_);
v___x_336_ = lean_apply_2(v_lt_308_, v_k_312_, v___x_333_);
v___x_337_ = lean_unbox(v___x_336_);
if (v___x_337_ == 0)
{
uint8_t v___x_338_; 
lean_inc(v_toPure_315_);
lean_inc(v_toBind_314_);
lean_dec(v_k_312_);
lean_dec(v_add_310_);
lean_dec_ref(v_lt_308_);
lean_dec_ref(v_inst_307_);
v___x_338_ = lean_nat_dec_lt(v___x_332_, v___x_316_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
lean_dec(v___x_332_);
lean_dec(v_toBind_314_);
lean_dec(v_merge_309_);
v___x_339_ = lean_apply_2(v_toPure_315_, lean_box(0), v_as_311_);
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v_xs_x27_341_; lean_object* v___f_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
lean_inc(v___x_333_);
v___x_340_ = lean_obj_once(&l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0, &l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0_once, _init_l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg___closed__0);
v_xs_x27_341_ = lean_array_fset(v_as_311_, v___x_332_, v___x_340_);
v___f_342_ = lean_alloc_closure((void*)(l_Array_binInsertM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_342_, 0, v_xs_x27_341_);
lean_closure_set(v___f_342_, 1, v___x_332_);
lean_closure_set(v___f_342_, 2, v_toPure_315_);
v___x_343_ = lean_apply_1(v_merge_309_, v___x_333_);
v___x_344_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_343_, v___f_342_);
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; 
v___x_345_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___redArg(v_inst_307_, v_lt_308_, v_merge_309_, v_add_310_, v_as_311_, v_k_312_, v___x_317_, v___x_332_);
return v___x_345_;
}
}
else
{
lean_object* v___f_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
lean_inc(v_toPure_315_);
lean_inc(v_toBind_314_);
lean_dec(v___x_332_);
lean_dec(v_k_312_);
lean_dec(v_merge_309_);
lean_dec_ref(v_lt_308_);
lean_dec_ref(v_inst_307_);
v___f_346_ = lean_alloc_closure((void*)(l_Array_binInsertM___redArg___lam__2), 3, 2);
lean_closure_set(v___f_346_, 0, v_as_311_);
lean_closure_set(v___f_346_, 1, v_toPure_315_);
v___x_347_ = lean_box(0);
v___x_348_ = lean_apply_1(v_add_310_, v___x_347_);
v___x_349_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_348_, v___f_346_);
return v___x_349_;
}
}
}
else
{
lean_object* v___f_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
lean_inc(v_toPure_315_);
lean_inc(v_toBind_314_);
lean_dec(v_k_312_);
lean_dec(v_merge_309_);
lean_dec_ref(v_lt_308_);
lean_dec_ref(v_inst_307_);
v___f_350_ = lean_alloc_closure((void*)(l_Array_binInsertM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_350_, 0, v_as_311_);
lean_closure_set(v___f_350_, 1, v___x_317_);
lean_closure_set(v___f_350_, 2, v___x_316_);
lean_closure_set(v___f_350_, 3, v_toPure_315_);
v___x_351_ = lean_box(0);
v___x_352_ = lean_apply_1(v_add_310_, v___x_351_);
v___x_353_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_352_, v___f_350_);
return v___x_353_;
}
}
else
{
lean_object* v___f_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
lean_inc(v_toPure_315_);
lean_inc(v_toBind_314_);
lean_dec(v_k_312_);
lean_dec(v_merge_309_);
lean_dec_ref(v_lt_308_);
lean_dec_ref(v_inst_307_);
v___f_354_ = lean_alloc_closure((void*)(l_Array_binInsertM___redArg___lam__2), 3, 2);
lean_closure_set(v___f_354_, 0, v_as_311_);
lean_closure_set(v___f_354_, 1, v_toPure_315_);
v___x_355_ = lean_box(0);
v___x_356_ = lean_apply_1(v_add_310_, v___x_355_);
v___x_357_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_356_, v___f_354_);
return v___x_357_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM(lean_object* v_00_u03b1_358_, lean_object* v_m_359_, lean_object* v_inst_360_, lean_object* v_lt_361_, lean_object* v_merge_362_, lean_object* v_add_363_, lean_object* v_as_364_, lean_object* v_k_365_){
_start:
{
lean_object* v___x_366_; 
v___x_366_ = l_Array_binInsertM___redArg(v_inst_360_, v_lt_361_, v_merge_362_, v_add_363_, v_as_364_, v_k_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__0(lean_object* v_k_367_, lean_object* v_x_368_){
_start:
{
lean_inc(v_k_367_);
return v_k_367_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__0___boxed(lean_object* v_k_369_, lean_object* v_x_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Array_binInsert___redArg___lam__0(v_k_369_, v_x_370_);
lean_dec(v_x_370_);
lean_dec(v_k_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__1(lean_object* v_k_372_, lean_object* v_x_373_){
_start:
{
lean_inc(v_k_372_);
return v_k_372_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert___redArg___lam__1___boxed(lean_object* v_k_374_, lean_object* v_x_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Array_binInsert___redArg___lam__1(v_k_374_, v_x_375_);
lean_dec(v_k_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert___redArg(lean_object* v_lt_396_, lean_object* v_as_397_, lean_object* v_k_398_){
_start:
{
lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
lean_inc_n(v_k_398_, 2);
v___f_399_ = lean_alloc_closure((void*)(l_Array_binInsert___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_399_, 0, v_k_398_);
v___f_400_ = lean_alloc_closure((void*)(l_Array_binInsert___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_400_, 0, v_k_398_);
v___x_401_ = ((lean_object*)(l_Array_binInsert___redArg___closed__9));
v___x_402_ = l_Array_binInsertM___redArg(v___x_401_, v_lt_396_, v___f_399_, v___f_400_, v_as_397_, v_k_398_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsert(lean_object* v_00_u03b1_403_, lean_object* v_lt_404_, lean_object* v_as_405_, lean_object* v_k_406_){
_start:
{
lean_object* v___f_407_; lean_object* v___f_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
lean_inc_n(v_k_406_, 2);
v___f_407_ = lean_alloc_closure((void*)(l_Array_binInsert___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_407_, 0, v_k_406_);
v___f_408_ = lean_alloc_closure((void*)(l_Array_binInsert___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_408_, 0, v_k_406_);
v___x_409_ = ((lean_object*)(l_Array_binInsert___redArg___closed__9));
v___x_410_ = l_Array_binInsertM___redArg(v___x_409_, v_lt_404_, v___f_407_, v___f_408_, v_as_405_, v_k_406_);
return v___x_410_;
}
}
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_BinSearch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_BinSearch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_BinSearch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_BinSearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_BinSearch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_BinSearch(builtin);
}
#ifdef __cplusplus
}
#endif

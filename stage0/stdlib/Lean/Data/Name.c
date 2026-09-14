// Lean compiler output
// Module: Lean.Data.Name
// Imports: public import Init.Data.Ord.Basic import Init.Data.String.TakeDrop import Init.Data.Ord.String import Init.Data.Ord.UInt import Init.Data.String.Search import Init.Data.String.Length
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Ordering_ctorIdx(uint8_t);
LEAN_EXPORT uint64_t lean_name_hash_exported(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_hashEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getPrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getPrefix___boxed(lean_object*);
static const lean_string_object l_panic___at___00Lean_Name_getString_x21_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00Lean_Name_getString_x21_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Name_getString_x21_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Name_getString_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Name_getString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Data.Name"};
static const lean_object* l_Lean_Name_getString_x21___closed__0 = (const lean_object*)&l_Lean_Name_getString_x21___closed__0_value;
static const lean_string_object l_Lean_Name_getString_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Name.getString!"};
static const lean_object* l_Lean_Name_getString_x21___closed__1 = (const lean_object*)&l_Lean_Name_getString_x21___closed__1_value;
static const lean_string_object l_Lean_Name_getString_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Name_getString_x21___closed__2 = (const lean_object*)&l_Lean_Name_getString_x21___closed__2_value;
static lean_once_cell_t l_Lean_Name_getString_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_getString_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Name_getString_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getString_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getNumParts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getNumParts___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Name_componentsRev___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_componentsRev___closed__0;
LEAN_EXPORT lean_object* l_Lean_Name_componentsRev(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_components(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_eqStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eqStr___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isSuffixOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_cmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_cmp___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Name_lt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_lt___closed__0;
LEAN_EXPORT uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_quickCmpAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_quickCmpAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_quickLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isInternal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInternal___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isInternalOrNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInternalOrNum___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Name_isInternalDetail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eq_"};
static const lean_object* l_Lean_Name_isInternalDetail___closed__0 = (const lean_object*)&l_Lean_Name_isInternalDetail___closed__0_value;
static const lean_string_object l_Lean_Name_isInternalDetail___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "match_"};
static const lean_object* l_Lean_Name_isInternalDetail___closed__1 = (const lean_object*)&l_Lean_Name_isInternalDetail___closed__1_value;
static const lean_string_object l_Lean_Name_isInternalDetail___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proof_"};
static const lean_object* l_Lean_Name_isInternalDetail___closed__2 = (const lean_object*)&l_Lean_Name_isInternalDetail___closed__2_value;
static const lean_string_object l_Lean_Name_isInternalDetail___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "omega_"};
static const lean_object* l_Lean_Name_isInternalDetail___closed__3 = (const lean_object*)&l_Lean_Name_isInternalDetail___closed__3_value;
static const lean_string_object l_Lean_Name_isInternalDetail___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Name_isInternalDetail___closed__4 = (const lean_object*)&l_Lean_Name_isInternalDetail___closed__4_value;
static lean_once_cell_t l_Lean_Name_isInternalDetail___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_isInternalDetail___closed__5;
LEAN_EXPORT uint8_t l_Lean_Name_isInternalDetail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInternalDetail___boxed(lean_object*);
static const lean_string_object l_Lean_Name_isImplementationDetail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "__"};
static const lean_object* l_Lean_Name_isImplementationDetail___closed__0 = (const lean_object*)&l_Lean_Name_isImplementationDetail___closed__0_value;
static lean_once_cell_t l_Lean_Name_isImplementationDetail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Name_isImplementationDetail___closed__1;
LEAN_EXPORT uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isImplementationDetail___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isAtomic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isAtomic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isAnonymous(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isAnonymous___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isStr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isStr___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_isNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isNum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_anyS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_anyS___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__0 = (const lean_object*)&l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__0_value;
static const lean_string_object l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__1 = (const lean_object*)&l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__1_value;
static const lean_string_object l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Simproc"};
static const lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__2 = (const lean_object*)&l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__2_value;
static const lean_string_object l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__3 = (const lean_object*)&l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__3_value;
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Name_isMetaprogramming_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Name_isMetaprogramming___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Name_isMetaprogramming___closed__0 = (const lean_object*)&l_Lean_Name_isMetaprogramming___closed__0_value;
static const lean_ctor_object l_Lean_Name_isMetaprogramming___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Name_isMetaprogramming___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lean_Name_isMetaprogramming___closed__1 = (const lean_object*)&l_Lean_Name_isMetaprogramming___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Name_isMetaprogramming(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isMetaprogramming___boxed(lean_object*);
LEAN_EXPORT uint64_t lean_name_hash_exported(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_unsafeCast___redArg(v_a_1_);
lean_dec(v_a_1_);
if (lean_obj_tag(v___x_2_) == 0)
{
uint64_t v___x_3_; 
v___x_3_ = 1723ULL;
return v___x_3_;
}
else
{
uint64_t v_hash_4_; 
v_hash_4_ = lean_ctor_get_uint64(v___x_2_, sizeof(void*)*2);
lean_dec(v___x_2_);
return v_hash_4_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_hashEx___boxed(lean_object* v_a_5_){
_start:
{
uint64_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = lean_name_hash_exported(v_a_5_);
v_r_7_ = lean_box_uint64(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getPrefix(lean_object* v_x_8_){
_start:
{
if (lean_obj_tag(v_x_8_) == 0)
{
return v_x_8_;
}
else
{
lean_object* v_pre_9_; 
v_pre_9_ = lean_ctor_get(v_x_8_, 0);
lean_inc(v_pre_9_);
return v_pre_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getPrefix___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Name_getPrefix(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Name_getString_x21_spec__0(lean_object* v_msg_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = ((lean_object*)(l_panic___at___00Lean_Name_getString_x21_spec__0___closed__0));
v___x_15_ = lean_panic_fn_borrowed(v___x_14_, v_msg_13_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Name_getString_x21___closed__3(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_19_ = ((lean_object*)(l_Lean_Name_getString_x21___closed__2));
v___x_20_ = lean_unsigned_to_nat(15u);
v___x_21_ = lean_unsigned_to_nat(31u);
v___x_22_ = ((lean_object*)(l_Lean_Name_getString_x21___closed__1));
v___x_23_ = ((lean_object*)(l_Lean_Name_getString_x21___closed__0));
v___x_24_ = l_mkPanicMessageWithDecl(v___x_23_, v___x_22_, v___x_21_, v___x_20_, v___x_19_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getString_x21(lean_object* v_x_25_){
_start:
{
if (lean_obj_tag(v_x_25_) == 1)
{
lean_object* v_str_26_; 
v_str_26_ = lean_ctor_get(v_x_25_, 1);
lean_inc_ref(v_str_26_);
return v_str_26_;
}
else
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&l_Lean_Name_getString_x21___closed__3, &l_Lean_Name_getString_x21___closed__3_once, _init_l_Lean_Name_getString_x21___closed__3);
v___x_28_ = l_panic___at___00Lean_Name_getString_x21_spec__0(v___x_27_);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getString_x21___boxed(lean_object* v_x_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Name_getString_x21(v_x_29_);
lean_dec(v_x_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getNumParts(lean_object* v_x_31_){
_start:
{
if (lean_obj_tag(v_x_31_) == 0)
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(0u);
return v___x_32_;
}
else
{
lean_object* v_pre_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_pre_33_ = lean_ctor_get(v_x_31_, 0);
v___x_34_ = l_Lean_Name_getNumParts(v_pre_33_);
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_nat_add(v___x_34_, v___x_35_);
lean_dec(v___x_34_);
return v___x_36_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getNumParts___boxed(lean_object* v_x_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Name_getNumParts(v_x_37_);
lean_dec(v_x_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_updatePrefix(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
switch(lean_obj_tag(v_x_39_))
{
case 0:
{
lean_dec(v_x_40_);
return v_x_39_;
}
case 1:
{
lean_object* v_str_41_; lean_object* v___x_42_; 
v_str_41_ = lean_ctor_get(v_x_39_, 1);
lean_inc_ref(v_str_41_);
lean_dec_ref_known(v_x_39_, 2);
v___x_42_ = l_Lean_Name_str___override(v_x_40_, v_str_41_);
return v___x_42_;
}
default: 
{
lean_object* v_i_43_; lean_object* v___x_44_; 
v_i_43_ = lean_ctor_get(v_x_39_, 1);
lean_inc(v_i_43_);
lean_dec_ref_known(v_x_39_, 2);
v___x_44_ = l_Lean_Name_num___override(v_x_40_, v_i_43_);
return v___x_44_;
}
}
}
}
static lean_object* _init_l_Lean_Name_componentsRev___closed__0(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_box(0);
v___x_46_ = l_unsafeCast___redArg(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_componentsRev(lean_object* v_x_47_){
_start:
{
switch(lean_obj_tag(v_x_47_))
{
case 0:
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(0);
return v___x_48_;
}
case 1:
{
lean_object* v_pre_49_; lean_object* v_str_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v_pre_49_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_pre_49_);
v_str_50_ = lean_ctor_get(v_x_47_, 1);
lean_inc_ref(v_str_50_);
lean_dec_ref_known(v_x_47_, 2);
v___x_51_ = lean_obj_once(&l_Lean_Name_componentsRev___closed__0, &l_Lean_Name_componentsRev___closed__0_once, _init_l_Lean_Name_componentsRev___closed__0);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v_str_50_);
v___x_53_ = l_Lean_Name_componentsRev(v_pre_49_);
v___x_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
return v___x_54_;
}
default: 
{
lean_object* v_pre_55_; lean_object* v_i_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v_pre_55_ = lean_ctor_get(v_x_47_, 0);
lean_inc(v_pre_55_);
v_i_56_ = lean_ctor_get(v_x_47_, 1);
lean_inc(v_i_56_);
lean_dec_ref_known(v_x_47_, 2);
v___x_57_ = lean_obj_once(&l_Lean_Name_componentsRev___closed__0, &l_Lean_Name_componentsRev___closed__0_once, _init_l_Lean_Name_componentsRev___closed__0);
v___x_58_ = l_Lean_Name_num___override(v___x_57_, v_i_56_);
v___x_59_ = l_Lean_Name_componentsRev(v_pre_55_);
v___x_60_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_components(lean_object* v_n_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = l_Lean_Name_componentsRev(v_n_61_);
v___x_63_ = l_List_reverse___redArg(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_eqStr(lean_object* v_x_64_, lean_object* v_x_65_){
_start:
{
if (lean_obj_tag(v_x_64_) == 1)
{
lean_object* v_pre_66_; 
v_pre_66_ = lean_ctor_get(v_x_64_, 0);
if (lean_obj_tag(v_pre_66_) == 0)
{
lean_object* v_str_67_; uint8_t v___x_68_; 
v_str_67_ = lean_ctor_get(v_x_64_, 1);
v___x_68_ = lean_string_dec_eq(v_str_67_, v_x_65_);
return v___x_68_;
}
else
{
uint8_t v___x_69_; 
v___x_69_ = 0;
return v___x_69_;
}
}
else
{
uint8_t v___x_70_; 
v___x_70_ = 0;
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eqStr___boxed(lean_object* v_x_71_, lean_object* v_x_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Name_eqStr(v_x_71_, v_x_72_);
lean_dec_ref(v_x_72_);
lean_dec(v_x_71_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isPrefixOf(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_name_eq(v_x_75_, v_x_76_);
return v___x_77_;
}
else
{
lean_object* v_pre_78_; uint8_t v___x_79_; 
v_pre_78_ = lean_ctor_get(v_x_76_, 0);
v___x_79_ = lean_name_eq(v_x_75_, v_x_76_);
if (v___x_79_ == 0)
{
v_x_76_ = v_pre_78_;
goto _start;
}
else
{
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isPrefixOf___boxed(lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Lean_Name_isPrefixOf(v_x_81_, v_x_82_);
lean_dec(v_x_82_);
lean_dec(v_x_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isSuffixOf(lean_object* v_x_85_, lean_object* v_x_86_){
_start:
{
switch(lean_obj_tag(v_x_85_))
{
case 0:
{
uint8_t v___x_87_; 
v___x_87_ = 1;
return v___x_87_;
}
case 1:
{
if (lean_obj_tag(v_x_86_) == 1)
{
lean_object* v_pre_88_; lean_object* v_str_89_; lean_object* v_pre_90_; lean_object* v_str_91_; uint8_t v___x_92_; 
v_pre_88_ = lean_ctor_get(v_x_85_, 0);
v_str_89_ = lean_ctor_get(v_x_85_, 1);
v_pre_90_ = lean_ctor_get(v_x_86_, 0);
v_str_91_ = lean_ctor_get(v_x_86_, 1);
v___x_92_ = lean_string_dec_eq(v_str_89_, v_str_91_);
if (v___x_92_ == 0)
{
return v___x_92_;
}
else
{
v_x_85_ = v_pre_88_;
v_x_86_ = v_pre_90_;
goto _start;
}
}
else
{
uint8_t v___x_94_; 
v___x_94_ = 0;
return v___x_94_;
}
}
default: 
{
if (lean_obj_tag(v_x_86_) == 2)
{
lean_object* v_pre_95_; lean_object* v_i_96_; lean_object* v_pre_97_; lean_object* v_i_98_; uint8_t v___x_99_; 
v_pre_95_ = lean_ctor_get(v_x_85_, 0);
v_i_96_ = lean_ctor_get(v_x_85_, 1);
v_pre_97_ = lean_ctor_get(v_x_86_, 0);
v_i_98_ = lean_ctor_get(v_x_86_, 1);
v___x_99_ = lean_nat_dec_eq(v_i_96_, v_i_98_);
if (v___x_99_ == 0)
{
return v___x_99_;
}
else
{
v_x_85_ = v_pre_95_;
v_x_86_ = v_pre_97_;
goto _start;
}
}
else
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isSuffixOf___boxed(lean_object* v_x_102_, lean_object* v_x_103_){
_start:
{
uint8_t v_res_104_; lean_object* v_r_105_; 
v_res_104_ = l_Lean_Name_isSuffixOf(v_x_102_, v_x_103_);
lean_dec(v_x_103_);
lean_dec(v_x_102_);
v_r_105_ = lean_box(v_res_104_);
return v_r_105_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_cmp(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
switch(lean_obj_tag(v_x_106_))
{
case 0:
{
if (lean_obj_tag(v_x_107_) == 0)
{
uint8_t v___x_108_; 
v___x_108_ = 1;
return v___x_108_;
}
else
{
uint8_t v___x_109_; 
v___x_109_ = 0;
return v___x_109_;
}
}
case 1:
{
if (lean_obj_tag(v_x_107_) == 1)
{
lean_object* v_pre_110_; lean_object* v_str_111_; lean_object* v_pre_112_; lean_object* v_str_113_; uint8_t v___x_114_; 
v_pre_110_ = lean_ctor_get(v_x_106_, 0);
v_str_111_ = lean_ctor_get(v_x_106_, 1);
v_pre_112_ = lean_ctor_get(v_x_107_, 0);
v_str_113_ = lean_ctor_get(v_x_107_, 1);
v___x_114_ = l_Lean_Name_cmp(v_pre_110_, v_pre_112_);
if (v___x_114_ == 1)
{
uint8_t v___x_115_; 
v___x_115_ = lean_string_compare(v_str_111_, v_str_113_);
return v___x_115_;
}
else
{
return v___x_114_;
}
}
else
{
uint8_t v___x_116_; 
v___x_116_ = 2;
return v___x_116_;
}
}
default: 
{
switch(lean_obj_tag(v_x_107_))
{
case 0:
{
uint8_t v___x_117_; 
v___x_117_ = 2;
return v___x_117_;
}
case 1:
{
uint8_t v___x_118_; 
v___x_118_ = 0;
return v___x_118_;
}
default: 
{
lean_object* v_pre_119_; lean_object* v_i_120_; lean_object* v_pre_121_; lean_object* v_i_122_; uint8_t v___x_123_; 
v_pre_119_ = lean_ctor_get(v_x_106_, 0);
v_i_120_ = lean_ctor_get(v_x_106_, 1);
v_pre_121_ = lean_ctor_get(v_x_107_, 0);
v_i_122_ = lean_ctor_get(v_x_107_, 1);
v___x_123_ = l_Lean_Name_cmp(v_pre_119_, v_pre_121_);
if (v___x_123_ == 1)
{
uint8_t v___x_124_; 
v___x_124_ = lean_nat_dec_lt(v_i_120_, v_i_122_);
if (v___x_124_ == 0)
{
uint8_t v___x_125_; 
v___x_125_ = lean_nat_dec_eq(v_i_120_, v_i_122_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 2;
return v___x_126_;
}
else
{
return v___x_123_;
}
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
else
{
return v___x_123_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_cmp___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lean_Name_cmp(v_x_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
static lean_object* _init_l_Lean_Name_lt___closed__0(void){
_start:
{
uint8_t v___x_132_; lean_object* v___x_133_; 
v___x_132_ = 0;
v___x_133_ = l_Ordering_ctorIdx(v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_lt(lean_object* v_x_134_, lean_object* v_y_135_){
_start:
{
uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_136_ = l_Lean_Name_cmp(v_x_134_, v_y_135_);
v___x_137_ = l_Ordering_ctorIdx(v___x_136_);
v___x_138_ = lean_obj_once(&l_Lean_Name_lt___closed__0, &l_Lean_Name_lt___closed__0_once, _init_l_Lean_Name_lt___closed__0);
v___x_139_ = lean_nat_dec_eq(v___x_137_, v___x_138_);
lean_dec(v___x_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_lt___boxed(lean_object* v_x_140_, lean_object* v_y_141_){
_start:
{
uint8_t v_res_142_; lean_object* v_r_143_; 
v_res_142_ = l_Lean_Name_lt(v_x_140_, v_y_141_);
lean_dec(v_y_141_);
lean_dec(v_x_140_);
v_r_143_ = lean_box(v_res_142_);
return v_r_143_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_quickCmpAux(lean_object* v_x_144_, lean_object* v_x_145_){
_start:
{
switch(lean_obj_tag(v_x_144_))
{
case 0:
{
if (lean_obj_tag(v_x_145_) == 0)
{
uint8_t v___x_146_; 
v___x_146_ = 1;
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
}
case 1:
{
if (lean_obj_tag(v_x_145_) == 1)
{
lean_object* v_pre_148_; lean_object* v_str_149_; lean_object* v_pre_150_; lean_object* v_str_151_; uint8_t v___x_152_; 
v_pre_148_ = lean_ctor_get(v_x_144_, 0);
v_str_149_ = lean_ctor_get(v_x_144_, 1);
v_pre_150_ = lean_ctor_get(v_x_145_, 0);
v_str_151_ = lean_ctor_get(v_x_145_, 1);
v___x_152_ = lean_string_compare(v_str_149_, v_str_151_);
if (v___x_152_ == 1)
{
v_x_144_ = v_pre_148_;
v_x_145_ = v_pre_150_;
goto _start;
}
else
{
return v___x_152_;
}
}
else
{
uint8_t v___x_154_; 
v___x_154_ = 2;
return v___x_154_;
}
}
default: 
{
switch(lean_obj_tag(v_x_145_))
{
case 0:
{
uint8_t v___x_155_; 
v___x_155_ = 2;
return v___x_155_;
}
case 1:
{
uint8_t v___x_156_; 
v___x_156_ = 0;
return v___x_156_;
}
default: 
{
lean_object* v_pre_157_; lean_object* v_i_158_; lean_object* v_pre_159_; lean_object* v_i_160_; uint8_t v___x_161_; 
v_pre_157_ = lean_ctor_get(v_x_144_, 0);
v_i_158_ = lean_ctor_get(v_x_144_, 1);
v_pre_159_ = lean_ctor_get(v_x_145_, 0);
v_i_160_ = lean_ctor_get(v_x_145_, 1);
v___x_161_ = lean_nat_dec_lt(v_i_158_, v_i_160_);
if (v___x_161_ == 0)
{
uint8_t v___x_162_; 
v___x_162_ = lean_nat_dec_eq(v_i_158_, v_i_160_);
if (v___x_162_ == 0)
{
uint8_t v___x_163_; 
v___x_163_ = 2;
return v___x_163_;
}
else
{
v_x_144_ = v_pre_157_;
v_x_145_ = v_pre_159_;
goto _start;
}
}
else
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_quickCmpAux___boxed(lean_object* v_x_166_, lean_object* v_x_167_){
_start:
{
uint8_t v_res_168_; lean_object* v_r_169_; 
v_res_168_ = l_Lean_Name_quickCmpAux(v_x_166_, v_x_167_);
lean_dec(v_x_167_);
lean_dec(v_x_166_);
v_r_169_ = lean_box(v_res_168_);
return v_r_169_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl_unsafe__1(lean_object* v_n_u2081_170_, lean_object* v_n_u2082_171_){
_start:
{
size_t v___x_172_; size_t v___x_173_; uint8_t v___x_174_; 
v___x_172_ = lean_ptr_addr(v_n_u2081_170_);
v___x_173_ = lean_ptr_addr(v_n_u2082_171_);
v___x_174_ = lean_usize_dec_eq(v___x_172_, v___x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl_unsafe__1___boxed(lean_object* v_n_u2081_175_, lean_object* v_n_u2082_176_){
_start:
{
uint8_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl_unsafe__1(v_n_u2081_175_, v_n_u2082_176_);
lean_dec(v_n_u2082_176_);
lean_dec(v_n_u2081_175_);
v_r_178_ = lean_box(v_res_177_);
return v_r_178_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object* v_n_u2081_179_, lean_object* v_n_u2082_180_){
_start:
{
uint64_t v___y_182_; uint64_t v___y_183_; uint64_t v___y_190_; size_t v___x_194_; size_t v___x_195_; uint8_t v___x_196_; 
v___x_194_ = lean_ptr_addr(v_n_u2081_179_);
v___x_195_ = lean_ptr_addr(v_n_u2082_180_);
v___x_196_ = lean_usize_dec_eq(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
v___x_197_ = l_unsafeCast___redArg(v_n_u2081_179_);
if (lean_obj_tag(v___x_197_) == 0)
{
uint64_t v___x_198_; 
v___x_198_ = 1723ULL;
v___y_190_ = v___x_198_;
goto v___jp_189_;
}
else
{
uint64_t v_hash_199_; 
v_hash_199_ = lean_ctor_get_uint64(v___x_197_, sizeof(void*)*2);
lean_dec(v___x_197_);
v___y_190_ = v_hash_199_;
goto v___jp_189_;
}
}
else
{
uint8_t v___x_200_; 
v___x_200_ = 1;
return v___x_200_;
}
v___jp_181_:
{
uint8_t v___x_184_; 
v___x_184_ = lean_uint64_dec_lt(v___y_182_, v___y_183_);
if (v___x_184_ == 0)
{
uint8_t v___x_185_; 
v___x_185_ = lean_uint64_dec_eq(v___y_182_, v___y_183_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; 
v___x_186_ = 2;
return v___x_186_;
}
else
{
uint8_t v___x_187_; 
v___x_187_ = l_Lean_Name_quickCmpAux(v_n_u2081_179_, v_n_u2082_180_);
return v___x_187_;
}
}
else
{
uint8_t v___x_188_; 
v___x_188_ = 0;
return v___x_188_;
}
}
v___jp_189_:
{
lean_object* v___x_191_; 
v___x_191_ = l_unsafeCast___redArg(v_n_u2082_180_);
if (lean_obj_tag(v___x_191_) == 0)
{
uint64_t v___x_192_; 
v___x_192_ = 1723ULL;
v___y_182_ = v___y_190_;
v___y_183_ = v___x_192_;
goto v___jp_181_;
}
else
{
uint64_t v_hash_193_; 
v_hash_193_ = lean_ctor_get_uint64(v___x_191_, sizeof(void*)*2);
lean_dec(v___x_191_);
v___y_182_ = v___y_190_;
v___y_183_ = v_hash_193_;
goto v___jp_181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object* v_n_u2081_201_, lean_object* v_n_u2082_202_){
_start:
{
uint8_t v_res_203_; lean_object* v_r_204_; 
v_res_203_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_n_u2081_201_, v_n_u2082_202_);
lean_dec(v_n_u2082_202_);
lean_dec(v_n_u2081_201_);
v_r_204_ = lean_box(v_res_203_);
return v_r_204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_quickLt(lean_object* v_n_u2081_205_, lean_object* v_n_u2082_206_){
_start:
{
uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_207_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_n_u2081_205_, v_n_u2082_206_);
v___x_208_ = l_Ordering_ctorIdx(v___x_207_);
v___x_209_ = lean_obj_once(&l_Lean_Name_lt___closed__0, &l_Lean_Name_lt___closed__0_once, _init_l_Lean_Name_lt___closed__0);
v___x_210_ = lean_nat_dec_eq(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_quickLt___boxed(lean_object* v_n_u2081_211_, lean_object* v_n_u2082_212_){
_start:
{
uint8_t v_res_213_; lean_object* v_r_214_; 
v_res_213_ = l_Lean_Name_quickLt(v_n_u2081_211_, v_n_u2082_212_);
lean_dec(v_n_u2082_212_);
lean_dec(v_n_u2081_211_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object* v_x_215_){
_start:
{
switch(lean_obj_tag(v_x_215_))
{
case 0:
{
uint8_t v___x_216_; 
v___x_216_ = 0;
return v___x_216_;
}
case 1:
{
lean_object* v_pre_217_; 
v_pre_217_ = lean_ctor_get(v_x_215_, 0);
v_x_215_ = v_pre_217_;
goto _start;
}
default: 
{
uint8_t v___x_219_; 
v___x_219_ = 1;
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object* v_x_220_){
_start:
{
uint8_t v_res_221_; lean_object* v_r_222_; 
v_res_221_ = l_Lean_Name_hasNum(v_x_220_);
lean_dec(v_x_220_);
v_r_222_ = lean_box(v_res_221_);
return v_r_222_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInternal(lean_object* v_x_223_){
_start:
{
switch(lean_obj_tag(v_x_223_))
{
case 1:
{
lean_object* v_pre_224_; lean_object* v_str_225_; uint32_t v___y_227_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_pre_224_ = lean_ctor_get(v_x_223_, 0);
v_str_225_ = lean_ctor_get(v_x_223_, 1);
v___x_231_ = lean_unsigned_to_nat(0u);
v___x_232_ = lean_string_utf8_byte_size(v_str_225_);
lean_inc_ref(v_str_225_);
v___x_233_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_233_, 0, v_str_225_);
lean_ctor_set(v___x_233_, 1, v___x_231_);
lean_ctor_set(v___x_233_, 2, v___x_232_);
v___x_234_ = l_String_Slice_Pos_get_x3f(v___x_233_, v___x_231_);
lean_dec_ref_known(v___x_233_, 3);
if (lean_obj_tag(v___x_234_) == 0)
{
uint32_t v___x_235_; 
v___x_235_ = 65;
v___y_227_ = v___x_235_;
goto v___jp_226_;
}
else
{
lean_object* v_val_236_; uint32_t v___x_237_; 
v_val_236_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_val_236_);
lean_dec_ref_known(v___x_234_, 1);
v___x_237_ = lean_unbox_uint32(v_val_236_);
lean_dec(v_val_236_);
v___y_227_ = v___x_237_;
goto v___jp_226_;
}
v___jp_226_:
{
uint32_t v___x_228_; uint8_t v___x_229_; 
v___x_228_ = 95;
v___x_229_ = lean_uint32_dec_eq(v___y_227_, v___x_228_);
if (v___x_229_ == 0)
{
v_x_223_ = v_pre_224_;
goto _start;
}
else
{
return v___x_229_;
}
}
}
case 2:
{
lean_object* v_pre_238_; 
v_pre_238_ = lean_ctor_get(v_x_223_, 0);
v_x_223_ = v_pre_238_;
goto _start;
}
default: 
{
uint8_t v___x_240_; 
v___x_240_ = 0;
return v___x_240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInternal___boxed(lean_object* v_x_241_){
_start:
{
uint8_t v_res_242_; lean_object* v_r_243_; 
v_res_242_ = l_Lean_Name_isInternal(v_x_241_);
lean_dec(v_x_241_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInternalOrNum(lean_object* v_x_244_){
_start:
{
switch(lean_obj_tag(v_x_244_))
{
case 1:
{
lean_object* v_pre_245_; lean_object* v_str_246_; uint32_t v___y_248_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_pre_245_ = lean_ctor_get(v_x_244_, 0);
v_str_246_ = lean_ctor_get(v_x_244_, 1);
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_string_utf8_byte_size(v_str_246_);
lean_inc_ref(v_str_246_);
v___x_254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_254_, 0, v_str_246_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
lean_ctor_set(v___x_254_, 2, v___x_253_);
v___x_255_ = l_String_Slice_Pos_get_x3f(v___x_254_, v___x_252_);
lean_dec_ref_known(v___x_254_, 3);
if (lean_obj_tag(v___x_255_) == 0)
{
uint32_t v___x_256_; 
v___x_256_ = 65;
v___y_248_ = v___x_256_;
goto v___jp_247_;
}
else
{
lean_object* v_val_257_; uint32_t v___x_258_; 
v_val_257_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_val_257_);
lean_dec_ref_known(v___x_255_, 1);
v___x_258_ = lean_unbox_uint32(v_val_257_);
lean_dec(v_val_257_);
v___y_248_ = v___x_258_;
goto v___jp_247_;
}
v___jp_247_:
{
uint32_t v___x_249_; uint8_t v___x_250_; 
v___x_249_ = 95;
v___x_250_ = lean_uint32_dec_eq(v___y_248_, v___x_249_);
if (v___x_250_ == 0)
{
v_x_244_ = v_pre_245_;
goto _start;
}
else
{
return v___x_250_;
}
}
}
case 2:
{
uint8_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
default: 
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInternalOrNum___boxed(lean_object* v_x_261_){
_start:
{
uint8_t v_res_262_; lean_object* v_r_263_; 
v_res_262_ = l_Lean_Name_isInternalOrNum(v_x_261_);
lean_dec(v_x_261_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg(lean_object* v_pre_264_, lean_object* v_s_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_266_ = lean_string_utf8_byte_size(v_s_265_);
v___x_267_ = lean_string_utf8_byte_size(v_pre_264_);
v___x_268_ = lean_nat_dec_le(v___x_267_, v___x_266_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_dec_ref(v_s_265_);
v___x_269_ = lean_box(0);
return v___x_269_;
}
else
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = lean_string_memcmp(v_s_265_, v_pre_264_, v___x_270_, v___x_270_, v___x_267_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
lean_dec_ref(v_s_265_);
v___x_272_ = lean_box(0);
return v___x_272_;
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
lean_inc_ref(v_s_265_);
v___x_273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_273_, 0, v_s_265_);
lean_ctor_set(v___x_273_, 1, v___x_270_);
lean_ctor_set(v___x_273_, 2, v___x_266_);
v___x_274_ = l_String_Slice_pos_x21(v___x_273_, v___x_267_);
lean_dec_ref_known(v___x_273_, 3);
v___x_275_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_275_, 0, v_s_265_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
lean_ctor_set(v___x_275_, 2, v___x_266_);
v___x_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg___boxed(lean_object* v_pre_277_, lean_object* v_s_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg(v_pre_277_, v_s_278_);
lean_dec_ref(v_pre_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0(lean_object* v_pre_280_, lean_object* v_s_281_, lean_object* v_pat_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg(v_pre_280_, v_s_281_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___boxed(lean_object* v_pre_284_, lean_object* v_s_285_, lean_object* v_pat_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0(v_pre_284_, v_s_285_, v_pat_286_);
lean_dec_ref(v_pat_286_);
lean_dec_ref(v_pre_284_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1(lean_object* v_s_288_, lean_object* v_pos_289_){
_start:
{
lean_object* v_str_290_; lean_object* v_startInclusive_291_; lean_object* v_endExclusive_292_; lean_object* v___x_293_; lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v_decide_304_; 
v_str_290_ = lean_ctor_get(v_s_288_, 0);
v_startInclusive_291_ = lean_ctor_get(v_s_288_, 1);
v_endExclusive_292_ = lean_ctor_get(v_s_288_, 2);
v___x_293_ = lean_nat_add(v_startInclusive_291_, v_pos_289_);
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = lean_nat_sub(v_endExclusive_292_, v___x_293_);
v_decide_304_ = lean_nat_dec_eq(v___x_302_, v___x_303_);
lean_dec(v___x_303_);
if (v_decide_304_ == 0)
{
uint32_t v___x_305_; uint32_t v___x_309_; uint8_t v___x_310_; 
v___x_305_ = lean_string_utf8_get_fast(v_str_290_, v___x_293_);
v___x_309_ = 48;
v___x_310_ = lean_uint32_dec_le(v___x_309_, v___x_305_);
if (v___x_310_ == 0)
{
goto v___jp_306_;
}
else
{
uint32_t v___x_311_; uint8_t v___x_312_; 
v___x_311_ = 57;
v___x_312_ = lean_uint32_dec_le(v___x_305_, v___x_311_);
if (v___x_312_ == 0)
{
goto v___jp_306_;
}
else
{
goto v___jp_294_;
}
}
v___jp_306_:
{
uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_307_ = 95;
v___x_308_ = lean_uint32_dec_eq(v___x_305_, v___x_307_);
if (v___x_308_ == 0)
{
lean_dec(v___x_293_);
return v_pos_289_;
}
else
{
goto v___jp_294_;
}
}
}
else
{
lean_dec(v___x_293_);
return v_pos_289_;
}
v___jp_294_:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_295_ = lean_string_utf8_next_fast(v_str_290_, v___x_293_);
v___x_296_ = lean_nat_sub(v___x_295_, v___x_293_);
lean_dec(v___x_293_);
v___x_297_ = lean_nat_add(v_pos_289_, v___x_296_);
lean_dec(v___x_296_);
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_add(v_pos_289_, v___x_298_);
v___x_300_ = lean_nat_dec_le(v___x_299_, v___x_297_);
lean_dec(v___x_299_);
if (v___x_300_ == 0)
{
lean_dec(v___x_297_);
return v_pos_289_;
}
else
{
lean_dec(v_pos_289_);
v_pos_289_ = v___x_297_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1___boxed(lean_object* v_s_313_, lean_object* v_pos_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1(v_s_313_, v_pos_314_);
lean_dec_ref(v_s_313_);
return v_res_315_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(lean_object* v_s_316_, lean_object* v_pre_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_String_dropPrefix_x3f___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__0___redArg(v_pre_317_, v_s_316_);
if (lean_obj_tag(v___x_318_) == 0)
{
uint8_t v___x_319_; 
v___x_319_ = 0;
return v___x_319_;
}
else
{
lean_object* v_val_320_; lean_object* v_startInclusive_321_; lean_object* v_endExclusive_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v_decide_326_; 
v_val_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___x_318_, 1);
v_startInclusive_321_ = lean_ctor_get(v_val_320_, 1);
lean_inc(v_startInclusive_321_);
v_endExclusive_322_ = lean_ctor_get(v_val_320_, 2);
lean_inc(v_endExclusive_322_);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix_spec__1(v_val_320_, v___x_323_);
lean_dec(v_val_320_);
v___x_325_ = lean_nat_sub(v_endExclusive_322_, v_startInclusive_321_);
lean_dec(v_startInclusive_321_);
lean_dec(v_endExclusive_322_);
v_decide_326_ = lean_nat_dec_eq(v___x_324_, v___x_325_);
lean_dec(v___x_325_);
lean_dec(v___x_324_);
return v_decide_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix___boxed(lean_object* v_s_327_, lean_object* v_pre_328_){
_start:
{
uint8_t v_res_329_; lean_object* v_r_330_; 
v_res_329_ = l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(v_s_327_, v_pre_328_);
lean_dec_ref(v_pre_328_);
v_r_330_ = lean_box(v_res_329_);
return v_r_330_;
}
}
static lean_object* _init_l_Lean_Name_isInternalDetail___closed__5(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__4));
v___x_337_ = lean_string_utf8_byte_size(v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInternalDetail(lean_object* v_x_338_){
_start:
{
switch(lean_obj_tag(v_x_338_))
{
case 1:
{
lean_object* v_pre_339_; lean_object* v_str_340_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v_pre_339_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_pre_339_);
v_str_340_ = lean_ctor_get(v_x_338_, 1);
lean_inc_ref(v_str_340_);
lean_dec_ref_known(v_x_338_, 2);
v___x_351_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__4));
v___x_352_ = lean_string_utf8_byte_size(v_str_340_);
v___x_353_ = lean_obj_once(&l_Lean_Name_isInternalDetail___closed__5, &l_Lean_Name_isInternalDetail___closed__5_once, _init_l_Lean_Name_isInternalDetail___closed__5);
v___x_354_ = lean_nat_dec_le(v___x_353_, v___x_352_);
if (v___x_354_ == 0)
{
goto v___jp_341_;
}
else
{
lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = lean_string_memcmp(v_str_340_, v___x_351_, v___x_355_, v___x_355_, v___x_353_);
if (v___x_356_ == 0)
{
goto v___jp_341_;
}
else
{
lean_dec_ref(v_str_340_);
lean_dec(v_pre_339_);
return v___x_356_;
}
}
v___jp_341_:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__0));
lean_inc_ref(v_str_340_);
v___x_343_ = l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(v_str_340_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__1));
lean_inc_ref(v_str_340_);
v___x_345_ = l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(v_str_340_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__2));
lean_inc_ref(v_str_340_);
v___x_347_ = l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(v_str_340_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lean_Name_isInternalDetail___closed__3));
v___x_349_ = l___private_Lean_Data_Name_0__Lean_Name_isInternalDetail_matchPrefix(v_str_340_, v___x_348_);
if (v___x_349_ == 0)
{
uint8_t v___x_350_; 
v___x_350_ = l_Lean_Name_isInternalOrNum(v_pre_339_);
lean_dec(v_pre_339_);
return v___x_350_;
}
else
{
lean_dec(v_pre_339_);
return v___x_349_;
}
}
else
{
lean_dec_ref(v_str_340_);
lean_dec(v_pre_339_);
return v___x_347_;
}
}
else
{
lean_dec_ref(v_str_340_);
lean_dec(v_pre_339_);
return v___x_345_;
}
}
else
{
lean_dec_ref(v_str_340_);
lean_dec(v_pre_339_);
return v___x_343_;
}
}
}
case 2:
{
uint8_t v___x_357_; 
lean_dec_ref_known(v_x_338_, 2);
v___x_357_ = 1;
return v___x_357_;
}
default: 
{
uint8_t v___x_358_; 
v___x_358_ = l_Lean_Name_isInternalOrNum(v_x_338_);
lean_dec(v_x_338_);
return v___x_358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInternalDetail___boxed(lean_object* v_x_359_){
_start:
{
uint8_t v_res_360_; lean_object* v_r_361_; 
v_res_360_ = l_Lean_Name_isInternalDetail(v_x_359_);
v_r_361_ = lean_box(v_res_360_);
return v_r_361_;
}
}
static lean_object* _init_l_Lean_Name_isImplementationDetail___closed__1(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lean_Name_isImplementationDetail___closed__0));
v___x_364_ = lean_string_utf8_byte_size(v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isImplementationDetail(lean_object* v_x_365_){
_start:
{
switch(lean_obj_tag(v_x_365_))
{
case 0:
{
uint8_t v___x_366_; 
v___x_366_ = 0;
return v___x_366_;
}
case 1:
{
lean_object* v_pre_367_; 
v_pre_367_ = lean_ctor_get(v_x_365_, 0);
if (lean_obj_tag(v_pre_367_) == 0)
{
lean_object* v_str_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v_str_368_ = lean_ctor_get(v_x_365_, 1);
v___x_369_ = ((lean_object*)(l_Lean_Name_isImplementationDetail___closed__0));
v___x_370_ = lean_string_utf8_byte_size(v_str_368_);
v___x_371_ = lean_obj_once(&l_Lean_Name_isImplementationDetail___closed__1, &l_Lean_Name_isImplementationDetail___closed__1_once, _init_l_Lean_Name_isImplementationDetail___closed__1);
v___x_372_ = lean_nat_dec_le(v___x_371_, v___x_370_);
if (v___x_372_ == 0)
{
return v___x_372_;
}
else
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_string_memcmp(v_str_368_, v___x_369_, v___x_373_, v___x_373_, v___x_371_);
return v___x_374_;
}
}
else
{
v_x_365_ = v_pre_367_;
goto _start;
}
}
default: 
{
lean_object* v_pre_376_; 
v_pre_376_ = lean_ctor_get(v_x_365_, 0);
v_x_365_ = v_pre_376_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isImplementationDetail___boxed(lean_object* v_x_378_){
_start:
{
uint8_t v_res_379_; lean_object* v_r_380_; 
v_res_379_ = l_Lean_Name_isImplementationDetail(v_x_378_);
lean_dec(v_x_378_);
v_r_380_ = lean_box(v_res_379_);
return v_r_380_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isAtomic(lean_object* v_x_381_){
_start:
{
if (lean_obj_tag(v_x_381_) == 0)
{
uint8_t v___x_382_; 
v___x_382_ = 1;
return v___x_382_;
}
else
{
lean_object* v_pre_383_; 
v_pre_383_ = lean_ctor_get(v_x_381_, 0);
if (lean_obj_tag(v_pre_383_) == 0)
{
uint8_t v___x_384_; 
v___x_384_ = 1;
return v___x_384_;
}
else
{
uint8_t v___x_385_; 
v___x_385_ = 0;
return v___x_385_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isAtomic___boxed(lean_object* v_x_386_){
_start:
{
uint8_t v_res_387_; lean_object* v_r_388_; 
v_res_387_ = l_Lean_Name_isAtomic(v_x_386_);
lean_dec(v_x_386_);
v_r_388_ = lean_box(v_res_387_);
return v_r_388_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isAnonymous(lean_object* v_x_389_){
_start:
{
if (lean_obj_tag(v_x_389_) == 0)
{
uint8_t v___x_390_; 
v___x_390_ = 1;
return v___x_390_;
}
else
{
uint8_t v___x_391_; 
v___x_391_ = 0;
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isAnonymous___boxed(lean_object* v_x_392_){
_start:
{
uint8_t v_res_393_; lean_object* v_r_394_; 
v_res_393_ = l_Lean_Name_isAnonymous(v_x_392_);
lean_dec(v_x_392_);
v_r_394_ = lean_box(v_res_393_);
return v_r_394_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isStr(lean_object* v_x_395_){
_start:
{
if (lean_obj_tag(v_x_395_) == 1)
{
uint8_t v___x_396_; 
v___x_396_ = 1;
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = 0;
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isStr___boxed(lean_object* v_x_398_){
_start:
{
uint8_t v_res_399_; lean_object* v_r_400_; 
v_res_399_ = l_Lean_Name_isStr(v_x_398_);
lean_dec(v_x_398_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isNum(lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 2)
{
uint8_t v___x_402_; 
v___x_402_ = 1;
return v___x_402_;
}
else
{
uint8_t v___x_403_; 
v___x_403_ = 0;
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isNum___boxed(lean_object* v_x_404_){
_start:
{
uint8_t v_res_405_; lean_object* v_r_406_; 
v_res_405_ = l_Lean_Name_isNum(v_x_404_);
lean_dec(v_x_404_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_anyS(lean_object* v_n_407_, lean_object* v_f_408_){
_start:
{
switch(lean_obj_tag(v_n_407_))
{
case 1:
{
lean_object* v_pre_409_; lean_object* v_str_410_; lean_object* v___x_411_; uint8_t v___x_412_; 
v_pre_409_ = lean_ctor_get(v_n_407_, 0);
lean_inc(v_pre_409_);
v_str_410_ = lean_ctor_get(v_n_407_, 1);
lean_inc_ref(v_str_410_);
lean_dec_ref_known(v_n_407_, 2);
lean_inc_ref(v_f_408_);
v___x_411_ = lean_apply_1(v_f_408_, v_str_410_);
v___x_412_ = lean_unbox(v___x_411_);
if (v___x_412_ == 0)
{
v_n_407_ = v_pre_409_;
goto _start;
}
else
{
uint8_t v___x_414_; 
lean_dec(v_pre_409_);
lean_dec_ref(v_f_408_);
v___x_414_ = lean_unbox(v___x_411_);
return v___x_414_;
}
}
case 2:
{
lean_object* v_pre_415_; 
v_pre_415_ = lean_ctor_get(v_n_407_, 0);
lean_inc(v_pre_415_);
lean_dec_ref_known(v_n_407_, 2);
v_n_407_ = v_pre_415_;
goto _start;
}
default: 
{
uint8_t v___x_417_; 
lean_dec_ref(v_f_408_);
lean_dec(v_n_407_);
v___x_417_ = 0;
return v___x_417_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_anyS___boxed(lean_object* v_n_418_, lean_object* v_f_419_){
_start:
{
uint8_t v_res_420_; lean_object* v_r_421_; 
v_res_420_ = l_Lean_Name_anyS(v_n_418_, v_f_419_);
v_r_421_ = lean_box(v_res_420_);
return v_r_421_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Name_isMetaprogramming_spec__0(lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_426_) == 0)
{
uint8_t v___x_427_; 
v___x_427_ = 0;
return v___x_427_;
}
else
{
lean_object* v_head_428_; 
v_head_428_ = lean_ctor_get(v_x_426_, 0);
if (lean_obj_tag(v_head_428_) == 1)
{
lean_object* v_pre_429_; 
v_pre_429_ = lean_ctor_get(v_head_428_, 0);
if (lean_obj_tag(v_pre_429_) == 0)
{
lean_object* v_tail_430_; lean_object* v_str_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_tail_430_ = lean_ctor_get(v_x_426_, 1);
v_str_431_ = lean_ctor_get(v_head_428_, 1);
v___x_432_ = ((lean_object*)(l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__0));
v___x_433_ = lean_string_dec_eq(v_str_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = ((lean_object*)(l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__1));
v___x_435_ = lean_string_dec_eq(v_str_431_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = ((lean_object*)(l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__2));
v___x_437_ = lean_string_dec_eq(v_str_431_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = ((lean_object*)(l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___closed__3));
v___x_439_ = lean_string_dec_eq(v_str_431_, v___x_438_);
if (v___x_439_ == 0)
{
v_x_426_ = v_tail_430_;
goto _start;
}
else
{
return v___x_439_;
}
}
else
{
return v___x_437_;
}
}
else
{
return v___x_435_;
}
}
else
{
return v___x_433_;
}
}
else
{
lean_object* v_tail_441_; 
v_tail_441_ = lean_ctor_get(v_x_426_, 1);
v_x_426_ = v_tail_441_;
goto _start;
}
}
else
{
lean_object* v_tail_443_; 
v_tail_443_ = lean_ctor_get(v_x_426_, 1);
v_x_426_ = v_tail_443_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Name_isMetaprogramming_spec__0___boxed(lean_object* v_x_445_){
_start:
{
uint8_t v_res_446_; lean_object* v_r_447_; 
v_res_446_ = l_List_any___at___00Lean_Name_isMetaprogramming_spec__0(v_x_445_);
lean_dec(v_x_445_);
v_r_447_ = lean_box(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isMetaprogramming(lean_object* v_n_451_){
_start:
{
lean_object* v_components_452_; lean_object* v___x_453_; 
v_components_452_ = l_Lean_Name_components(v_n_451_);
v___x_453_ = l_List_head_x3f___redArg(v_components_452_);
if (lean_obj_tag(v___x_453_) == 0)
{
uint8_t v___x_454_; 
v___x_454_ = l_List_any___at___00Lean_Name_isMetaprogramming_spec__0(v_components_452_);
lean_dec(v_components_452_);
return v___x_454_;
}
else
{
lean_object* v_val_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v_val_455_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_val_455_);
lean_dec_ref_known(v___x_453_, 1);
v___x_456_ = ((lean_object*)(l_Lean_Name_isMetaprogramming___closed__1));
v___x_457_ = lean_name_eq(v_val_455_, v___x_456_);
lean_dec(v_val_455_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = l_List_any___at___00Lean_Name_isMetaprogramming_spec__0(v_components_452_);
lean_dec(v_components_452_);
return v___x_458_;
}
else
{
lean_dec(v_components_452_);
return v___x_457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isMetaprogramming___boxed(lean_object* v_n_459_){
_start:
{
uint8_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = l_Lean_Name_isMetaprogramming(v_n_459_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
lean_object* runtime_initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Name(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_String(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Name(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Name(builtin);
}
#ifdef __cplusplus
}
#endif

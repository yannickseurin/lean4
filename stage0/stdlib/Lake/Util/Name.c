// Lean compiler output
// Module: Lake.Util.Name
// Imports: public import Lean.Data.Json public import Lake.Util.RBArray import Init.Data.Ord.UInt import all Init.Prelude import all Lean.Data.Name
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
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lake_RBArray_empty___redArg();
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_String_toName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_stringToLegalOrSimpleName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_stringToLegalOrSimpleName___closed__0;
LEAN_EXPORT lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_NameMap_empty(lean_object*);
static const lean_closure_object l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0 = (const lean_object*)&l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake(lean_object*);
static lean_once_cell_t l_Lake_OrdNameMap_empty___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdNameMap_empty___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg();
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Name_eraseHead(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Name_quoteFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake_Name_quoteFrom___closed__0 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__0_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake_Name_quoteFrom___closed__1 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__1_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake_Name_quoteFrom___closed__2 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__2_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lake_Name_quoteFrom___closed__3 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__3_value;
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Name_quoteFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_0),((lean_object*)&l_Lake_Name_quoteFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_1),((lean_object*)&l_Lake_Name_quoteFrom___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake_Name_quoteFrom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Name_quoteFrom___closed__4_value_aux_2),((lean_object*)&l_Lake_Name_quoteFrom___closed__3_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lake_Name_quoteFrom___closed__4 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__4_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake_Name_quoteFrom___closed__5 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__5_value;
static const lean_string_object l_Lake_Name_quoteFrom___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Name_quoteFrom___closed__6 = (const lean_object*)&l_Lake_Name_quoteFrom___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_stringToLegalOrSimpleName___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lake_stringToLegalOrSimpleName(lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
lean_inc_ref(v_s_3_);
v___x_4_ = l_String_toName(v_s_3_);
v___x_5_ = l_Lean_Name_isAnonymous(v___x_4_);
if (v___x_5_ == 0)
{
lean_dec_ref(v_s_3_);
return v___x_4_;
}
else
{
lean_object* v___x_6_; lean_object* v___x_7_; 
lean_dec(v___x_4_);
v___x_6_ = lean_obj_once(&l_Lake_stringToLegalOrSimpleName___closed__0, &l_Lake_stringToLegalOrSimpleName___closed__0_once, _init_l_Lake_stringToLegalOrSimpleName___closed__0);
v___x_7_ = l_Lean_Name_str___override(v___x_6_, v_s_3_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg(){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_box(1);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty___redArg___boxed(lean_object* v___dummy_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lake_NameMap_empty___redArg();
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_NameMap_empty(lean_object* v___y_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_box(1);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg(){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = ((lean_object*)(l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0));
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___boxed(lean_object* v___dummy_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg();
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake(lean_object* v_00_u03b1_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = ((lean_object*)(l___private_Lake_Util_Name_0__Lake_instCoeTreeMapNameQuickCmpNameMap__lake___redArg___closed__0));
return v___x_20_;
}
}
static lean_object* _init_l_Lake_OrdNameMap_empty___redArg___closed__0(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lake_RBArray_empty___redArg();
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg(){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty___redArg___boxed(lean_object* v___dummy_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_OrdNameMap_empty___redArg();
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdNameMap_empty(lean_object* v_00_u03b1_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg(){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap___redArg___boxed(lean_object* v___dummy_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lake_mkOrdNameMap___redArg();
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkOrdNameMap(lean_object* v_00_u03b1_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&l_Lake_OrdNameMap_empty___redArg___closed__0, &l_Lake_OrdNameMap_empty___redArg___closed__0_once, _init_l_Lake_OrdNameMap_empty___redArg___closed__0);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg(){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_box(1);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty___redArg___boxed(lean_object* v___dummy_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lake_DNameMap_empty___redArg();
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_DNameMap_empty(lean_object* v_00_u03b1_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_box(1);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lake_Name_eraseHead(lean_object* v_x_40_){
_start:
{
switch(lean_obj_tag(v_x_40_))
{
case 0:
{
return v_x_40_;
}
case 1:
{
lean_object* v_pre_41_; 
v_pre_41_ = lean_ctor_get(v_x_40_, 0);
lean_inc(v_pre_41_);
if (lean_obj_tag(v_pre_41_) == 0)
{
lean_dec_ref_known(v_x_40_, 2);
return v_pre_41_;
}
else
{
lean_object* v_str_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_str_42_ = lean_ctor_get(v_x_40_, 1);
lean_inc_ref(v_str_42_);
lean_dec_ref_known(v_x_40_, 2);
v___x_43_ = l_Lake_Name_eraseHead(v_pre_41_);
v___x_44_ = l_Lean_Name_str___override(v___x_43_, v_str_42_);
return v___x_44_;
}
}
default: 
{
lean_object* v_pre_45_; 
v_pre_45_ = lean_ctor_get(v_x_40_, 0);
lean_inc(v_pre_45_);
if (lean_obj_tag(v_pre_45_) == 0)
{
lean_dec_ref_known(v_x_40_, 2);
return v_pre_45_;
}
else
{
lean_object* v_i_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_i_46_ = lean_ctor_get(v_x_40_, 1);
lean_inc(v_i_46_);
lean_dec_ref_known(v_x_40_, 2);
v___x_47_ = l_Lake_Name_eraseHead(v_pre_45_);
v___x_48_ = l_Lean_Name_num___override(v___x_47_, v_i_46_);
return v___x_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter___redArg(lean_object* v_x_49_, lean_object* v_h__1_50_, lean_object* v_h__2_51_){
_start:
{
if (lean_obj_tag(v_x_49_) == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_h__2_51_);
v___x_52_ = lean_box(0);
v___x_53_ = lean_apply_1(v_h__1_50_, v___x_52_);
return v___x_53_;
}
else
{
lean_object* v___x_54_; 
lean_dec(v_h__1_50_);
v___x_54_ = lean_apply_2(v_h__2_51_, v_x_49_, lean_box(0));
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isAnonymous_match__1_splitter(lean_object* v_motive_55_, lean_object* v_x_56_, lean_object* v_h__1_57_, lean_object* v_h__2_58_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_h__2_58_);
v___x_59_ = lean_box(0);
v___x_60_ = lean_apply_1(v_h__1_57_, v___x_59_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; 
lean_dec(v_h__1_57_);
v___x_61_ = lean_apply_2(v_h__2_58_, v_x_56_, lean_box(0));
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter___redArg(lean_object* v_x_62_, lean_object* v_x_63_, lean_object* v_h__1_64_, lean_object* v_h__2_65_, lean_object* v_h__3_66_){
_start:
{
switch(lean_obj_tag(v_x_63_))
{
case 0:
{
lean_object* v___x_67_; 
lean_dec(v_h__3_66_);
lean_dec(v_h__2_65_);
v___x_67_ = lean_apply_1(v_h__1_64_, v_x_62_);
return v___x_67_;
}
case 1:
{
lean_object* v_pre_68_; lean_object* v_str_69_; lean_object* v___x_70_; 
lean_dec(v_h__2_65_);
lean_dec(v_h__1_64_);
v_pre_68_ = lean_ctor_get(v_x_63_, 0);
lean_inc(v_pre_68_);
v_str_69_ = lean_ctor_get(v_x_63_, 1);
lean_inc_ref(v_str_69_);
lean_dec_ref_known(v_x_63_, 2);
v___x_70_ = lean_apply_3(v_h__3_66_, v_x_62_, v_pre_68_, v_str_69_);
return v___x_70_;
}
default: 
{
lean_object* v_pre_71_; lean_object* v_i_72_; lean_object* v___x_73_; 
lean_dec(v_h__3_66_);
lean_dec(v_h__1_64_);
v_pre_71_ = lean_ctor_get(v_x_63_, 0);
lean_inc(v_pre_71_);
v_i_72_ = lean_ctor_get(v_x_63_, 1);
lean_inc(v_i_72_);
lean_dec_ref_known(v_x_63_, 2);
v___x_73_ = lean_apply_3(v_h__2_65_, v_x_62_, v_pre_71_, v_i_72_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_isPrefixOf_match__1_splitter(lean_object* v_motive_74_, lean_object* v_x_75_, lean_object* v_x_76_, lean_object* v_h__1_77_, lean_object* v_h__2_78_, lean_object* v_h__3_79_){
_start:
{
switch(lean_obj_tag(v_x_76_))
{
case 0:
{
lean_object* v___x_80_; 
lean_dec(v_h__3_79_);
lean_dec(v_h__2_78_);
v___x_80_ = lean_apply_1(v_h__1_77_, v_x_75_);
return v___x_80_;
}
case 1:
{
lean_object* v_pre_81_; lean_object* v_str_82_; lean_object* v___x_83_; 
lean_dec(v_h__2_78_);
lean_dec(v_h__1_77_);
v_pre_81_ = lean_ctor_get(v_x_76_, 0);
lean_inc(v_pre_81_);
v_str_82_ = lean_ctor_get(v_x_76_, 1);
lean_inc_ref(v_str_82_);
lean_dec_ref_known(v_x_76_, 2);
v___x_83_ = lean_apply_3(v_h__3_79_, v_x_75_, v_pre_81_, v_str_82_);
return v___x_83_;
}
default: 
{
lean_object* v_pre_84_; lean_object* v_i_85_; lean_object* v___x_86_; 
lean_dec(v_h__3_79_);
lean_dec(v_h__1_77_);
v_pre_84_ = lean_ctor_get(v_x_76_, 0);
lean_inc(v_pre_84_);
v_i_85_ = lean_ctor_get(v_x_76_, 1);
lean_inc(v_i_85_);
lean_dec_ref_known(v_x_76_, 2);
v___x_86_ = lean_apply_3(v_h__2_78_, v_x_75_, v_pre_84_, v_i_85_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter___redArg(lean_object* v_x_87_, lean_object* v_x_88_, lean_object* v_h__1_89_, lean_object* v_h__2_90_, lean_object* v_h__3_91_){
_start:
{
switch(lean_obj_tag(v_x_88_))
{
case 0:
{
lean_object* v___x_92_; 
lean_dec(v_h__3_91_);
lean_dec(v_h__2_90_);
v___x_92_ = lean_apply_1(v_h__1_89_, v_x_87_);
return v___x_92_;
}
case 1:
{
lean_object* v_pre_93_; lean_object* v_str_94_; lean_object* v___x_95_; 
lean_dec(v_h__3_91_);
lean_dec(v_h__1_89_);
v_pre_93_ = lean_ctor_get(v_x_88_, 0);
lean_inc(v_pre_93_);
v_str_94_ = lean_ctor_get(v_x_88_, 1);
lean_inc_ref(v_str_94_);
lean_dec_ref_known(v_x_88_, 2);
v___x_95_ = lean_apply_3(v_h__2_90_, v_x_87_, v_pre_93_, v_str_94_);
return v___x_95_;
}
default: 
{
lean_object* v_pre_96_; lean_object* v_i_97_; lean_object* v___x_98_; 
lean_dec(v_h__2_90_);
lean_dec(v_h__1_89_);
v_pre_96_ = lean_ctor_get(v_x_88_, 0);
lean_inc(v_pre_96_);
v_i_97_ = lean_ctor_get(v_x_88_, 1);
lean_inc(v_i_97_);
lean_dec_ref_known(v_x_88_, 2);
v___x_98_ = lean_apply_3(v_h__3_91_, v_x_87_, v_pre_96_, v_i_97_);
return v___x_98_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_appendCore_match__1_splitter(lean_object* v_motive_99_, lean_object* v_x_100_, lean_object* v_x_101_, lean_object* v_h__1_102_, lean_object* v_h__2_103_, lean_object* v_h__3_104_){
_start:
{
switch(lean_obj_tag(v_x_101_))
{
case 0:
{
lean_object* v___x_105_; 
lean_dec(v_h__3_104_);
lean_dec(v_h__2_103_);
v___x_105_ = lean_apply_1(v_h__1_102_, v_x_100_);
return v___x_105_;
}
case 1:
{
lean_object* v_pre_106_; lean_object* v_str_107_; lean_object* v___x_108_; 
lean_dec(v_h__3_104_);
lean_dec(v_h__1_102_);
v_pre_106_ = lean_ctor_get(v_x_101_, 0);
lean_inc(v_pre_106_);
v_str_107_ = lean_ctor_get(v_x_101_, 1);
lean_inc_ref(v_str_107_);
lean_dec_ref_known(v_x_101_, 2);
v___x_108_ = lean_apply_3(v_h__2_103_, v_x_100_, v_pre_106_, v_str_107_);
return v___x_108_;
}
default: 
{
lean_object* v_pre_109_; lean_object* v_i_110_; lean_object* v___x_111_; 
lean_dec(v_h__2_103_);
lean_dec(v_h__1_102_);
v_pre_109_ = lean_ctor_get(v_x_101_, 0);
lean_inc(v_pre_109_);
v_i_110_ = lean_ctor_get(v_x_101_, 1);
lean_inc(v_i_110_);
lean_dec_ref_known(v_x_101_, 2);
v___x_111_ = lean_apply_3(v_h__3_104_, v_x_100_, v_pre_109_, v_i_110_);
return v___x_111_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter___redArg(lean_object* v_x_112_, lean_object* v_x_113_, lean_object* v_h__1_114_, lean_object* v_h__2_115_, lean_object* v_h__3_116_, lean_object* v_h__4_117_, lean_object* v_h__5_118_, lean_object* v_h__6_119_, lean_object* v_h__7_120_){
_start:
{
switch(lean_obj_tag(v_x_112_))
{
case 0:
{
lean_dec(v_h__7_120_);
lean_dec(v_h__6_119_);
lean_dec(v_h__5_118_);
lean_dec(v_h__4_117_);
lean_dec(v_h__3_116_);
if (lean_obj_tag(v_x_113_) == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; 
lean_dec(v_h__2_115_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_apply_1(v_h__1_114_, v___x_121_);
return v___x_122_;
}
else
{
lean_object* v___x_123_; 
lean_dec(v_h__1_114_);
v___x_123_ = lean_apply_2(v_h__2_115_, v_x_113_, lean_box(0));
return v___x_123_;
}
}
case 1:
{
lean_dec(v_h__5_118_);
lean_dec(v_h__4_117_);
lean_dec(v_h__2_115_);
lean_dec(v_h__1_114_);
switch(lean_obj_tag(v_x_113_))
{
case 0:
{
lean_object* v___x_124_; 
lean_dec(v_h__7_120_);
lean_dec(v_h__6_119_);
v___x_124_ = lean_apply_2(v_h__3_116_, v_x_112_, lean_box(0));
return v___x_124_;
}
case 1:
{
lean_object* v_pre_125_; lean_object* v_str_126_; lean_object* v_pre_127_; lean_object* v_str_128_; lean_object* v___x_129_; 
lean_dec(v_h__6_119_);
lean_dec(v_h__3_116_);
v_pre_125_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_pre_125_);
v_str_126_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_str_126_);
lean_dec_ref_known(v_x_112_, 2);
v_pre_127_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_127_);
v_str_128_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_str_128_);
lean_dec_ref_known(v_x_113_, 2);
v___x_129_ = lean_apply_4(v_h__7_120_, v_pre_125_, v_str_126_, v_pre_127_, v_str_128_);
return v___x_129_;
}
default: 
{
lean_object* v_pre_130_; lean_object* v_str_131_; lean_object* v_pre_132_; lean_object* v_i_133_; lean_object* v___x_134_; 
lean_dec(v_h__7_120_);
lean_dec(v_h__3_116_);
v_pre_130_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_pre_130_);
v_str_131_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_str_131_);
lean_dec_ref_known(v_x_112_, 2);
v_pre_132_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_132_);
v_i_133_ = lean_ctor_get(v_x_113_, 1);
lean_inc(v_i_133_);
lean_dec_ref_known(v_x_113_, 2);
v___x_134_ = lean_apply_4(v_h__6_119_, v_pre_130_, v_str_131_, v_pre_132_, v_i_133_);
return v___x_134_;
}
}
}
default: 
{
lean_dec(v_h__7_120_);
lean_dec(v_h__6_119_);
lean_dec(v_h__2_115_);
lean_dec(v_h__1_114_);
switch(lean_obj_tag(v_x_113_))
{
case 0:
{
lean_object* v___x_135_; 
lean_dec(v_h__5_118_);
lean_dec(v_h__4_117_);
v___x_135_ = lean_apply_2(v_h__3_116_, v_x_112_, lean_box(0));
return v___x_135_;
}
case 1:
{
lean_object* v_pre_136_; lean_object* v_i_137_; lean_object* v_pre_138_; lean_object* v_str_139_; lean_object* v___x_140_; 
lean_dec(v_h__4_117_);
lean_dec(v_h__3_116_);
v_pre_136_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_pre_136_);
v_i_137_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_i_137_);
lean_dec_ref_known(v_x_112_, 2);
v_pre_138_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_138_);
v_str_139_ = lean_ctor_get(v_x_113_, 1);
lean_inc_ref(v_str_139_);
lean_dec_ref_known(v_x_113_, 2);
v___x_140_ = lean_apply_4(v_h__5_118_, v_pre_136_, v_i_137_, v_pre_138_, v_str_139_);
return v___x_140_;
}
default: 
{
lean_object* v_pre_141_; lean_object* v_i_142_; lean_object* v_pre_143_; lean_object* v_i_144_; lean_object* v___x_145_; 
lean_dec(v_h__5_118_);
lean_dec(v_h__3_116_);
v_pre_141_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_pre_141_);
v_i_142_ = lean_ctor_get(v_x_112_, 1);
lean_inc(v_i_142_);
lean_dec_ref_known(v_x_112_, 2);
v_pre_143_ = lean_ctor_get(v_x_113_, 0);
lean_inc(v_pre_143_);
v_i_144_ = lean_ctor_get(v_x_113_, 1);
lean_inc(v_i_144_);
lean_dec_ref_known(v_x_113_, 2);
v___x_145_ = lean_apply_4(v_h__4_117_, v_pre_141_, v_i_142_, v_pre_143_, v_i_144_);
return v___x_145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__4_splitter(lean_object* v_motive_146_, lean_object* v_x_147_, lean_object* v_x_148_, lean_object* v_h__1_149_, lean_object* v_h__2_150_, lean_object* v_h__3_151_, lean_object* v_h__4_152_, lean_object* v_h__5_153_, lean_object* v_h__6_154_, lean_object* v_h__7_155_){
_start:
{
switch(lean_obj_tag(v_x_147_))
{
case 0:
{
lean_dec(v_h__7_155_);
lean_dec(v_h__6_154_);
lean_dec(v_h__5_153_);
lean_dec(v_h__4_152_);
lean_dec(v_h__3_151_);
if (lean_obj_tag(v_x_148_) == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
lean_dec(v_h__2_150_);
v___x_156_ = lean_box(0);
v___x_157_ = lean_apply_1(v_h__1_149_, v___x_156_);
return v___x_157_;
}
else
{
lean_object* v___x_158_; 
lean_dec(v_h__1_149_);
v___x_158_ = lean_apply_2(v_h__2_150_, v_x_148_, lean_box(0));
return v___x_158_;
}
}
case 1:
{
lean_dec(v_h__5_153_);
lean_dec(v_h__4_152_);
lean_dec(v_h__2_150_);
lean_dec(v_h__1_149_);
switch(lean_obj_tag(v_x_148_))
{
case 0:
{
lean_object* v___x_159_; 
lean_dec(v_h__7_155_);
lean_dec(v_h__6_154_);
v___x_159_ = lean_apply_2(v_h__3_151_, v_x_147_, lean_box(0));
return v___x_159_;
}
case 1:
{
lean_object* v_pre_160_; lean_object* v_str_161_; lean_object* v_pre_162_; lean_object* v_str_163_; lean_object* v___x_164_; 
lean_dec(v_h__6_154_);
lean_dec(v_h__3_151_);
v_pre_160_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_pre_160_);
v_str_161_ = lean_ctor_get(v_x_147_, 1);
lean_inc_ref(v_str_161_);
lean_dec_ref_known(v_x_147_, 2);
v_pre_162_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_162_);
v_str_163_ = lean_ctor_get(v_x_148_, 1);
lean_inc_ref(v_str_163_);
lean_dec_ref_known(v_x_148_, 2);
v___x_164_ = lean_apply_4(v_h__7_155_, v_pre_160_, v_str_161_, v_pre_162_, v_str_163_);
return v___x_164_;
}
default: 
{
lean_object* v_pre_165_; lean_object* v_str_166_; lean_object* v_pre_167_; lean_object* v_i_168_; lean_object* v___x_169_; 
lean_dec(v_h__7_155_);
lean_dec(v_h__3_151_);
v_pre_165_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_pre_165_);
v_str_166_ = lean_ctor_get(v_x_147_, 1);
lean_inc_ref(v_str_166_);
lean_dec_ref_known(v_x_147_, 2);
v_pre_167_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_167_);
v_i_168_ = lean_ctor_get(v_x_148_, 1);
lean_inc(v_i_168_);
lean_dec_ref_known(v_x_148_, 2);
v___x_169_ = lean_apply_4(v_h__6_154_, v_pre_165_, v_str_166_, v_pre_167_, v_i_168_);
return v___x_169_;
}
}
}
default: 
{
lean_dec(v_h__7_155_);
lean_dec(v_h__6_154_);
lean_dec(v_h__2_150_);
lean_dec(v_h__1_149_);
switch(lean_obj_tag(v_x_148_))
{
case 0:
{
lean_object* v___x_170_; 
lean_dec(v_h__5_153_);
lean_dec(v_h__4_152_);
v___x_170_ = lean_apply_2(v_h__3_151_, v_x_147_, lean_box(0));
return v___x_170_;
}
case 1:
{
lean_object* v_pre_171_; lean_object* v_i_172_; lean_object* v_pre_173_; lean_object* v_str_174_; lean_object* v___x_175_; 
lean_dec(v_h__4_152_);
lean_dec(v_h__3_151_);
v_pre_171_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_pre_171_);
v_i_172_ = lean_ctor_get(v_x_147_, 1);
lean_inc(v_i_172_);
lean_dec_ref_known(v_x_147_, 2);
v_pre_173_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_173_);
v_str_174_ = lean_ctor_get(v_x_148_, 1);
lean_inc_ref(v_str_174_);
lean_dec_ref_known(v_x_148_, 2);
v___x_175_ = lean_apply_4(v_h__5_153_, v_pre_171_, v_i_172_, v_pre_173_, v_str_174_);
return v___x_175_;
}
default: 
{
lean_object* v_pre_176_; lean_object* v_i_177_; lean_object* v_pre_178_; lean_object* v_i_179_; lean_object* v___x_180_; 
lean_dec(v_h__5_153_);
lean_dec(v_h__3_151_);
v_pre_176_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_pre_176_);
v_i_177_ = lean_ctor_get(v_x_147_, 1);
lean_inc(v_i_177_);
lean_dec_ref_known(v_x_147_, 2);
v_pre_178_ = lean_ctor_get(v_x_148_, 0);
lean_inc(v_pre_178_);
v_i_179_ = lean_ctor_get(v_x_148_, 1);
lean_inc(v_i_179_);
lean_dec_ref_known(v_x_148_, 2);
v___x_180_ = lean_apply_4(v_h__4_152_, v_pre_176_, v_i_177_, v_pre_178_, v_i_179_);
return v___x_180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(uint8_t v_x_181_, lean_object* v_h__1_182_, lean_object* v_h__2_183_){
_start:
{
if (v_x_181_ == 1)
{
lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec(v_h__2_183_);
v___x_184_ = lean_box(0);
v___x_185_ = lean_apply_1(v_h__1_182_, v___x_184_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec(v_h__1_182_);
v___x_186_ = lean_box(v_x_181_);
v___x_187_ = lean_apply_2(v_h__2_183_, v___x_186_, lean_box(0));
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg___boxed(lean_object* v_x_188_, lean_object* v_h__1_189_, lean_object* v_h__2_190_){
_start:
{
uint8_t v_x_13__boxed_191_; lean_object* v_res_192_; 
v_x_13__boxed_191_ = lean_unbox(v_x_188_);
v_res_192_ = l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___redArg(v_x_13__boxed_191_, v_h__1_189_, v_h__2_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(lean_object* v_motive_193_, uint8_t v_x_194_, lean_object* v_h__1_195_, lean_object* v_h__2_196_){
_start:
{
if (v_x_194_ == 1)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
lean_dec(v_h__2_196_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_apply_1(v_h__1_195_, v___x_197_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; 
lean_dec(v_h__1_195_);
v___x_199_ = lean_box(v_x_194_);
v___x_200_ = lean_apply_2(v_h__2_196_, v___x_199_, lean_box(0));
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter___boxed(lean_object* v_motive_201_, lean_object* v_x_202_, lean_object* v_h__1_203_, lean_object* v_h__2_204_){
_start:
{
uint8_t v_x_24__boxed_205_; lean_object* v_res_206_; 
v_x_24__boxed_205_ = lean_unbox(v_x_202_);
v_res_206_ = l___private_Lake_Util_Name_0__Lean_Name_cmp_match__1_splitter(v_motive_201_, v_x_24__boxed_205_, v_h__1_203_, v_h__2_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom(lean_object* v_ref_218_, lean_object* v_n_219_, uint8_t v_canonical_220_){
_start:
{
lean_object* v___x_221_; lean_object* v_ref_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_221_ = l_Lean_SourceInfo_fromRef(v_ref_218_, v_canonical_220_);
v_ref_222_ = l_Lean_Syntax_setHeadInfo(v_ref_218_, v___x_221_);
v___x_223_ = lean_box(0);
lean_inc(v_n_219_);
v___x_224_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_223_, v_n_219_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v___x_225_; lean_object* v_stx_226_; 
v___x_225_ = l_Lean_quoteNameMk(v_n_219_);
v_stx_226_ = l_Lean_Syntax_copyHeadTailInfoFrom(v___x_225_, v_ref_222_);
lean_dec(v_ref_222_);
return v_stx_226_;
}
else
{
lean_object* v_val_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v_stx_239_; 
lean_dec(v_n_219_);
v_val_227_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_224_, 1);
v___x_228_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__4));
v___x_229_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__5));
v___x_230_ = ((lean_object*)(l_Lake_Name_quoteFrom___closed__6));
v___x_231_ = lean_string_intercalate(v___x_230_, v_val_227_);
v___x_232_ = lean_string_append(v___x_229_, v___x_231_);
lean_dec_ref(v___x_231_);
v___x_233_ = lean_box(2);
v___x_234_ = l_Lean_Syntax_mkNameLit(v___x_232_, v___x_233_);
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_mk_empty_array_with_capacity(v___x_235_);
v___x_237_ = lean_array_push(v___x_236_, v___x_234_);
v___x_238_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_238_, 0, v___x_233_);
lean_ctor_set(v___x_238_, 1, v___x_228_);
lean_ctor_set(v___x_238_, 2, v___x_237_);
v_stx_239_ = l_Lean_Syntax_copyHeadTailInfoFrom(v___x_238_, v_ref_222_);
lean_dec(v_ref_222_);
return v_stx_239_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Name_quoteFrom___boxed(lean_object* v_ref_240_, lean_object* v_n_241_, lean_object* v_canonical_242_){
_start:
{
uint8_t v_canonical_boxed_243_; lean_object* v_res_244_; 
v_canonical_boxed_243_ = lean_unbox(v_canonical_242_);
v_res_244_ = l_Lake_Name_quoteFrom(v_ref_240_, v_n_241_, v_canonical_boxed_243_);
return v_res_244_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_RBArray(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Name(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_RBArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Name(builtin);
}
#ifdef __cplusplus
}
#endif

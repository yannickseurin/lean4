// Lean compiler output
// Module: Init.Grind.PP
// Imports: public meta import Init.Data.String.Defs public import Init.Grind.Tactics
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___redArg();
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__0 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__0_value;
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__1 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__1_value;
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__2 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__2_value;
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__3 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__4 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__4_value;
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__5 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__6 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__6_value;
static const lean_string_object l_Lean_Grind_nodeDefUnexpander___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__7 = (const lean_object*)&l_Lean_Grind_nodeDefUnexpander___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Grind_nodeDefUnexpander___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_nodeDefUnexpander___redArg___closed__8;
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_NodeDefUnexpander___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NodeDef"};
static const lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__0 = (const lean_object*)&l_Lean_Grind_NodeDefUnexpander___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Grind_NodeDefUnexpander___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__1;
static lean_once_cell_t l_Lean_Grind_NodeDefUnexpander___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_NodeDefUnexpander___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___redArg(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___redArg___boxed(lean_object* v___dummy_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Grind_node__def___redArg();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_node__def(lean_object* v_x_5_, lean_object* v_00_u03b1_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_box(0);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_node__def___boxed(lean_object* v_x_9_, lean_object* v_00_u03b1_10_, lean_object* v_a_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_Grind_node__def(v_x_9_, v_00_u03b1_10_, v_a_11_);
lean_dec(v_a_11_);
lean_dec(v_x_9_);
return v_res_12_;
}
}
static lean_object* _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__8(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_box(0);
v___x_27_ = l_unsafeCast___redArg(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___redArg(lean_object* v_stx_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l_Lean_Grind_nodeDefUnexpander___redArg___closed__4));
lean_inc(v_stx_28_);
v___x_31_ = l_Lean_Syntax_isOfKind(v_stx_28_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_dec(v_stx_28_);
v___x_32_ = lean_box(0);
v___x_33_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v_a_29_);
return v___x_33_;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_34_ = lean_unsigned_to_nat(1u);
v___x_35_ = l_Lean_Syntax_getArg(v_stx_28_, v___x_34_);
lean_dec(v_stx_28_);
lean_inc(v___x_35_);
v___x_36_ = l_Lean_Syntax_matchesNull(v___x_35_, v___x_34_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; lean_object* v___x_38_; 
lean_dec(v___x_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v_a_29_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; lean_object* v_id_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_39_ = lean_unsigned_to_nat(0u);
v_id_40_ = l_Lean_Syntax_getArg(v___x_35_, v___x_39_);
lean_dec(v___x_35_);
v___x_41_ = ((lean_object*)(l_Lean_Grind_nodeDefUnexpander___redArg___closed__6));
lean_inc(v_id_40_);
v___x_42_ = l_Lean_Syntax_isOfKind(v_id_40_, v___x_41_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_id_40_);
v___x_43_ = lean_box(0);
v___x_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v_a_29_);
return v___x_44_;
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_45_ = ((lean_object*)(l_Lean_Grind_nodeDefUnexpander___redArg___closed__7));
v___x_46_ = l_Lean_TSyntax_getNat(v_id_40_);
lean_dec(v_id_40_);
v___x_47_ = l_Nat_reprFast(v___x_46_);
v___x_48_ = lean_string_append(v___x_45_, v___x_47_);
lean_dec_ref(v___x_47_);
v___x_49_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__8, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__8_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__8);
v___x_50_ = l_Lean_Name_str___override(v___x_49_, v___x_48_);
v___x_51_ = l_Lean_mkIdent(v___x_50_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v_a_29_);
return v___x_52_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander(lean_object* v_stx_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Grind_nodeDefUnexpander___redArg(v_stx_53_, v_a_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nodeDefUnexpander___boxed(lean_object* v_stx_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_Grind_nodeDefUnexpander(v_stx_57_, v_a_58_, v_a_59_);
lean_dec(v_a_58_);
return v_res_60_;
}
}
static lean_object* _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__1(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = ((lean_object*)(l_Lean_Grind_NodeDefUnexpander___redArg___closed__0));
v___x_63_ = lean_obj_once(&l_Lean_Grind_nodeDefUnexpander___redArg___closed__8, &l_Lean_Grind_nodeDefUnexpander___redArg___closed__8_once, _init_l_Lean_Grind_nodeDefUnexpander___redArg___closed__8);
v___x_64_ = l_Lean_Name_str___override(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__2(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l_Lean_Grind_NodeDefUnexpander___redArg___closed__1, &l_Lean_Grind_NodeDefUnexpander___redArg___closed__1_once, _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__1);
v___x_66_ = l_Lean_mkIdent(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___redArg(lean_object* v_a_67_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Lean_Grind_NodeDefUnexpander___redArg___closed__2, &l_Lean_Grind_NodeDefUnexpander___redArg___closed__2_once, _init_l_Lean_Grind_NodeDefUnexpander___redArg___closed__2);
v___x_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v_a_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander(lean_object* v_x_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_Grind_NodeDefUnexpander___redArg(v_a_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_NodeDefUnexpander___boxed(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lean_Grind_NodeDefUnexpander(v_x_74_, v_a_75_, v_a_76_);
lean_dec(v_a_75_);
lean_dec(v_x_74_);
return v_res_77_;
}
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_PP(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_PP(builtin);
}
#ifdef __cplusplus
}
#endif

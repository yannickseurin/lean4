// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Proj
// Imports: public import Lean.Meta.Tactic.Grind.Types
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateProjEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_propagateProjEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_propagateProjEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateProjEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateProjEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_propagateProjEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(76, 196, 184, 102, 66, 127, 118, 164)}};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_propagateProjEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_propagateProjEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_propagateProjEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__8;
static const lean_array_object l_Lean_Meta_Grind_propagateProjEq___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_propagateProjEq___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_propagateProjEq___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(lean_object* v_declName_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_env_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_env_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_env_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_5_, v_declName_1_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg___boxed(lean_object* v_declName_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_8_, v___y_9_);
lean_dec(v___y_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(lean_object* v_declName_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_12_, v___y_22_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___boxed(lean_object* v_declName_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0(v_declName_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
lean_dec_ref(v___y_30_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
lean_dec(v___y_26_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(lean_object* v_a_38_, lean_object* v_b_39_){
_start:
{
lean_object* v_array_40_; lean_object* v_start_41_; lean_object* v_stop_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_55_; 
v_array_40_ = lean_ctor_get(v_a_38_, 0);
v_start_41_ = lean_ctor_get(v_a_38_, 1);
v_stop_42_ = lean_ctor_get(v_a_38_, 2);
v_isSharedCheck_55_ = !lean_is_exclusive(v_a_38_);
if (v_isSharedCheck_55_ == 0)
{
v___x_44_ = v_a_38_;
v_isShared_45_ = v_isSharedCheck_55_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_stop_42_);
lean_inc(v_start_41_);
lean_inc(v_array_40_);
lean_dec(v_a_38_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_55_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
uint8_t v___x_46_; 
v___x_46_ = lean_nat_dec_lt(v_start_41_, v_stop_42_);
if (v___x_46_ == 0)
{
lean_del_object(v___x_44_);
lean_dec(v_stop_42_);
lean_dec(v_start_41_);
lean_dec_ref(v_array_40_);
return v_b_39_;
}
else
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_start_41_, v___x_47_);
lean_inc_ref(v_array_40_);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 1, v___x_48_);
v___x_50_ = v___x_44_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_array_40_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_54_, 2, v_stop_42_);
v___x_50_ = v_reuseFailAlloc_54_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_array_fget(v_array_40_, v_start_41_);
lean_dec(v_start_41_);
lean_dec_ref(v_array_40_);
v___x_52_ = lean_array_push(v_b_39_, v___x_51_);
v_a_38_ = v___x_50_;
v_b_39_ = v___x_52_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(lean_object* v_msgData_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; lean_object* v_env_63_; lean_object* v___x_64_; lean_object* v_toCold_65_; lean_object* v_mctx_66_; lean_object* v_lctx_67_; lean_object* v_options_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_62_ = lean_st_ref_get(v___y_60_);
v_env_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc_ref(v_env_63_);
lean_dec(v___x_62_);
v___x_64_ = lean_st_ref_get(v___y_58_);
v_toCold_65_ = lean_ctor_get(v___y_59_, 0);
v_mctx_66_ = lean_ctor_get(v___x_64_, 0);
lean_inc_ref(v_mctx_66_);
lean_dec(v___x_64_);
v_lctx_67_ = lean_ctor_get(v___y_57_, 2);
v_options_68_ = lean_ctor_get(v_toCold_65_, 2);
lean_inc_ref(v_options_68_);
lean_inc_ref(v_lctx_67_);
v___x_69_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_69_, 0, v_env_63_);
lean_ctor_set(v___x_69_, 1, v_mctx_66_);
lean_ctor_set(v___x_69_, 2, v_lctx_67_);
lean_ctor_set(v___x_69_, 3, v_options_68_);
v___x_70_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v_msgData_56_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1___boxed(lean_object* v_msgData_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(v_msgData_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
return v_res_78_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_79_; double v___x_80_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_float_of_nat(v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(lean_object* v_cls_84_, lean_object* v_msg_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_ref_91_; lean_object* v___x_92_; lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_137_; 
v_ref_91_ = lean_ctor_get(v___y_88_, 2);
v___x_92_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1_spec__1(v_msg_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
v_a_93_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_137_ == 0)
{
v___x_95_ = v___x_92_;
v_isShared_96_ = v_isSharedCheck_137_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_92_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_137_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; lean_object* v_traceState_98_; lean_object* v_env_99_; lean_object* v_nextMacroScope_100_; lean_object* v_ngen_101_; lean_object* v_auxDeclNGen_102_; lean_object* v_cache_103_; lean_object* v_messages_104_; lean_object* v_infoState_105_; lean_object* v_snapshotTasks_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_136_; 
v___x_97_ = lean_st_ref_take(v___y_89_);
v_traceState_98_ = lean_ctor_get(v___x_97_, 4);
v_env_99_ = lean_ctor_get(v___x_97_, 0);
v_nextMacroScope_100_ = lean_ctor_get(v___x_97_, 1);
v_ngen_101_ = lean_ctor_get(v___x_97_, 2);
v_auxDeclNGen_102_ = lean_ctor_get(v___x_97_, 3);
v_cache_103_ = lean_ctor_get(v___x_97_, 5);
v_messages_104_ = lean_ctor_get(v___x_97_, 6);
v_infoState_105_ = lean_ctor_get(v___x_97_, 7);
v_snapshotTasks_106_ = lean_ctor_get(v___x_97_, 8);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_136_ == 0)
{
v___x_108_ = v___x_97_;
v_isShared_109_ = v_isSharedCheck_136_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_snapshotTasks_106_);
lean_inc(v_infoState_105_);
lean_inc(v_messages_104_);
lean_inc(v_cache_103_);
lean_inc(v_traceState_98_);
lean_inc(v_auxDeclNGen_102_);
lean_inc(v_ngen_101_);
lean_inc(v_nextMacroScope_100_);
lean_inc(v_env_99_);
lean_dec(v___x_97_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_136_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
uint64_t v_tid_110_; lean_object* v_traces_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_135_; 
v_tid_110_ = lean_ctor_get_uint64(v_traceState_98_, sizeof(void*)*1);
v_traces_111_ = lean_ctor_get(v_traceState_98_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v_traceState_98_);
if (v_isSharedCheck_135_ == 0)
{
v___x_113_ = v_traceState_98_;
v_isShared_114_ = v_isSharedCheck_135_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_traces_111_);
lean_dec(v_traceState_98_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_135_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_116_; double v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_115_ = lean_box(0);
v___x_116_ = lean_box(0);
v___x_117_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__0);
v___x_118_ = 0;
v___x_119_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__1));
v___x_120_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_120_, 0, v_cls_84_);
lean_ctor_set(v___x_120_, 1, v___x_116_);
lean_ctor_set(v___x_120_, 2, v___x_119_);
lean_ctor_set_float(v___x_120_, sizeof(void*)*3, v___x_117_);
lean_ctor_set_float(v___x_120_, sizeof(void*)*3 + 8, v___x_117_);
lean_ctor_set_uint8(v___x_120_, sizeof(void*)*3 + 16, v___x_118_);
v___x_121_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___closed__2));
v___x_122_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set(v___x_122_, 1, v_a_93_);
lean_ctor_set(v___x_122_, 2, v___x_121_);
lean_inc(v_ref_91_);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v_ref_91_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = l_Lean_PersistentArray_push___redArg(v_traces_111_, v___x_123_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_124_);
v___x_126_ = v___x_113_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_124_);
lean_ctor_set_uint64(v_reuseFailAlloc_134_, sizeof(void*)*1, v_tid_110_);
v___x_126_ = v_reuseFailAlloc_134_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_128_; 
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___x_126_);
v___x_128_ = v___x_108_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_env_99_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_nextMacroScope_100_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_ngen_101_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_auxDeclNGen_102_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_133_, 5, v_cache_103_);
lean_ctor_set(v_reuseFailAlloc_133_, 6, v_messages_104_);
lean_ctor_set(v_reuseFailAlloc_133_, 7, v_infoState_105_);
lean_ctor_set(v_reuseFailAlloc_133_, 8, v_snapshotTasks_106_);
v___x_128_ = v_reuseFailAlloc_133_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = lean_st_ref_put(v___y_89_, v___x_128_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 0, v___x_115_);
v___x_131_ = v___x_95_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_115_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg___boxed(lean_object* v_cls_138_, lean_object* v_msg_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v_cls_138_, v_msg_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
return v_res_145_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__6(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = ((lean_object*)(l_Lean_Meta_Grind_propagateProjEq___closed__3));
v___x_157_ = ((lean_object*)(l_Lean_Meta_Grind_propagateProjEq___closed__5));
v___x_158_ = l_Lean_Name_append(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__7(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_box(0);
v___x_160_ = l_unsafeCast___redArg(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateProjEq___closed__8(void){
_start:
{
lean_object* v___x_161_; lean_object* v_dummy_162_; 
v___x_161_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__7, &l_Lean_Meta_Grind_propagateProjEq___closed__7_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__7);
v_dummy_162_ = l_Lean_Expr_sort___override(v___x_161_);
return v_dummy_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq(lean_object* v_parent_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_projFn_177_; 
v_projFn_177_ = l_Lean_Expr_getAppFn(v_parent_165_);
if (lean_obj_tag(v_projFn_177_) == 4)
{
lean_object* v_declName_178_; lean_object* v___x_179_; lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_364_; 
v_declName_178_ = lean_ctor_get(v_projFn_177_, 0);
lean_inc(v_declName_178_);
v___x_179_ = l_Lean_getProjectionFnInfo_x3f___at___00Lean_Meta_Grind_propagateProjEq_spec__0___redArg(v_declName_178_, v_a_175_);
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_364_ == 0)
{
v___x_182_ = v___x_179_;
v_isShared_183_ = v_isSharedCheck_364_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_364_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
if (lean_obj_tag(v_a_180_) == 1)
{
lean_object* v_val_184_; lean_object* v_ctorName_185_; lean_object* v_numParams_186_; lean_object* v_i_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_val_184_ = lean_ctor_get(v_a_180_, 0);
lean_inc(v_val_184_);
lean_dec_ref_known(v_a_180_, 1);
v_ctorName_185_ = lean_ctor_get(v_val_184_, 0);
lean_inc(v_ctorName_185_);
v_numParams_186_ = lean_ctor_get(v_val_184_, 1);
lean_inc(v_numParams_186_);
v_i_187_ = lean_ctor_get(v_val_184_, 2);
lean_inc(v_i_187_);
lean_dec(v_val_184_);
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_nat_add(v_numParams_186_, v___x_188_);
v___x_190_ = l_Lean_Expr_getAppNumArgs(v_parent_165_);
v___x_191_ = lean_nat_dec_eq(v___x_189_, v___x_190_);
lean_dec(v___x_190_);
lean_dec(v___x_189_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_194_; 
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec(v_ctorName_185_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v___x_192_ = lean_box(0);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_192_);
v___x_194_ = v___x_182_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
else
{
lean_object* v___x_196_; 
lean_del_object(v___x_182_);
lean_inc_ref(v_parent_165_);
v___x_196_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_parent_165_, v_a_166_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_351_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_351_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_351_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_351_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
uint8_t v___x_201_; 
v___x_201_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_204_; 
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec(v_ctorName_185_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v___x_202_ = lean_box(0);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_202_);
v___x_204_ = v___x_199_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = l_Lean_Expr_appArg_x21(v_parent_165_);
lean_inc_ref(v___x_206_);
v___x_207_ = l_Lean_Meta_Grind_getRootENode___redArg(v___x_206_, v_a_166_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_342_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_342_ == 0)
{
v___x_210_ = v___x_207_;
v_isShared_211_ = v_isSharedCheck_342_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_342_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v_self_212_; uint8_t v_heqProofs_213_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v_parentNew_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v_parentNew_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; lean_object* v___y_283_; lean_object* v___y_284_; lean_object* v___y_285_; lean_object* v___y_286_; lean_object* v___y_287_; lean_object* v___y_288_; uint8_t v___x_301_; 
v_self_212_ = lean_ctor_get(v_a_208_, 0);
lean_inc_ref(v_self_212_);
v_heqProofs_213_ = lean_ctor_get_uint8(v_a_208_, sizeof(void*)*12 + 4);
lean_dec(v_a_208_);
v___x_301_ = l_Lean_Expr_isAppOf(v_self_212_, v_ctorName_185_);
lean_dec(v_ctorName_185_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_304_; 
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec_ref(v___x_206_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v___x_302_ = lean_box(0);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_302_);
v___x_304_ = v___x_199_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
else
{
size_t v___x_306_; size_t v___x_307_; uint8_t v___x_308_; 
lean_del_object(v___x_199_);
v___x_306_ = lean_ptr_addr(v___x_206_);
lean_dec_ref(v___x_206_);
v___x_307_ = lean_ptr_addr(v_self_212_);
v___x_308_ = lean_usize_dec_eq(v___x_306_, v___x_307_);
if (v___x_308_ == 0)
{
if (v_heqProofs_213_ == 0)
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
lean_dec_ref_known(v_projFn_177_, 2);
v___x_309_ = l_Lean_Expr_appFn_x21(v_parent_165_);
lean_inc_ref(v_self_212_);
v___x_310_ = l_Lean_Expr_app___override(v___x_309_, v_self_212_);
v___x_311_ = l_Lean_Meta_Sym_shareCommon(v___x_310_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v_parentNew_278_ = v_a_312_;
v___y_279_ = v_a_166_;
v___y_280_ = v_a_167_;
v___y_281_ = v_a_168_;
v___y_282_ = v_a_169_;
v___y_283_ = v_a_170_;
v___y_284_ = v_a_171_;
v___y_285_ = v_a_172_;
v___y_286_ = v_a_173_;
v___y_287_ = v_a_174_;
v___y_288_ = v_a_175_;
goto v___jp_277_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec_ref(v_parent_165_);
v_a_313_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_311_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_311_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_object* v_dummy_321_; lean_object* v_nargs_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_dummy_321_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__8, &l_Lean_Meta_Grind_propagateProjEq___closed__8_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__8);
v_nargs_322_ = l_Lean_Expr_getAppNumArgs(v_self_212_);
lean_inc(v_nargs_322_);
v___x_323_ = lean_mk_array(v_nargs_322_, v_dummy_321_);
v___x_324_ = lean_nat_sub(v_nargs_322_, v___x_188_);
lean_dec(v_nargs_322_);
lean_inc_ref_n(v_self_212_, 2);
v___x_325_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_self_212_, v___x_323_, v___x_324_);
v___x_326_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_186_);
v___x_327_ = l_Array_toSubarray___redArg(v___x_325_, v___x_326_, v_numParams_186_);
v___x_328_ = ((lean_object*)(l_Lean_Meta_Grind_propagateProjEq___closed__9));
v___x_329_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(v___x_327_, v___x_328_);
v___x_330_ = l_Lean_mkAppN(v_projFn_177_, v___x_329_);
lean_dec_ref(v___x_329_);
v___x_331_ = l_Lean_Expr_app___override(v___x_330_, v_self_212_);
v___x_332_ = l_Lean_Meta_Sym_shareCommon(v___x_331_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v_parentNew_278_ = v_a_333_;
v___y_279_ = v_a_166_;
v___y_280_ = v_a_167_;
v___y_281_ = v_a_168_;
v___y_282_ = v_a_169_;
v___y_283_ = v_a_170_;
v___y_284_ = v_a_171_;
v___y_285_ = v_a_172_;
v___y_286_ = v_a_173_;
v___y_287_ = v_a_174_;
v___y_288_ = v_a_175_;
goto v___jp_277_;
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec_ref(v_parent_165_);
v_a_334_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_332_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_332_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_projFn_177_, 2);
v_parentNew_256_ = v_parent_165_;
v___y_257_ = v_a_166_;
v___y_258_ = v_a_167_;
v___y_259_ = v_a_168_;
v___y_260_ = v_a_169_;
v___y_261_ = v_a_170_;
v___y_262_ = v_a_171_;
v___y_263_ = v_a_172_;
v___y_264_ = v_a_173_;
v___y_265_ = v_a_174_;
v___y_266_ = v_a_175_;
goto v___jp_255_;
}
}
v___jp_214_:
{
lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_222_ = lean_nat_add(v_numParams_186_, v_i_187_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
v___x_223_ = l_Lean_Expr_getAppNumArgs(v_self_212_);
v___x_224_ = lean_nat_dec_lt(v___x_222_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_227_; 
lean_dec(v___x_223_);
lean_dec(v___x_222_);
lean_dec_ref(v___y_215_);
lean_dec_ref(v_self_212_);
v___x_225_ = lean_box(0);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_225_);
v___x_227_ = v___x_210_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
lean_del_object(v___x_210_);
v___x_229_ = lean_nat_sub(v___x_223_, v___x_222_);
lean_dec(v___x_222_);
lean_dec(v___x_223_);
v___x_230_ = lean_nat_sub(v___x_229_, v___x_188_);
lean_dec(v___x_229_);
v___x_231_ = l_Lean_Expr_getRevArg_x21(v_self_212_, v___x_230_);
lean_dec_ref(v_self_212_);
lean_inc_ref(v___x_231_);
v___x_232_ = l_Lean_Meta_mkEqRefl(v___x_231_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
lean_inc_ref(v___x_231_);
lean_inc_ref(v___y_215_);
v___x_234_ = l_Lean_Meta_mkEq(v___y_215_, v___x_231_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = l_Lean_Meta_mkExpectedPropHint(v_a_233_, v_a_235_);
v___x_237_ = 0;
v___x_238_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___y_215_, v___x_231_, v___x_236_, v___x_237_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
return v___x_238_;
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec(v_a_233_);
lean_dec_ref(v___x_231_);
lean_dec_ref(v___y_215_);
v_a_239_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_234_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_234_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v___x_231_);
lean_dec_ref(v___y_215_);
v_a_247_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_232_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_232_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
v___jp_255_:
{
lean_object* v_toCold_267_; lean_object* v_options_268_; uint8_t v_hasTrace_269_; 
v_toCold_267_ = lean_ctor_get(v___y_265_, 0);
v_options_268_ = lean_ctor_get(v_toCold_267_, 2);
v_hasTrace_269_ = lean_ctor_get_uint8(v_options_268_, sizeof(void*)*1);
if (v_hasTrace_269_ == 0)
{
v___y_215_ = v_parentNew_256_;
v___y_216_ = v___y_257_;
v___y_217_ = v___y_259_;
v___y_218_ = v___y_263_;
v___y_219_ = v___y_264_;
v___y_220_ = v___y_265_;
v___y_221_ = v___y_266_;
goto v___jp_214_;
}
else
{
lean_object* v_inheritedTraceOptions_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_inheritedTraceOptions_270_ = lean_ctor_get(v_toCold_267_, 11);
v___x_271_ = ((lean_object*)(l_Lean_Meta_Grind_propagateProjEq___closed__3));
v___x_272_ = lean_obj_once(&l_Lean_Meta_Grind_propagateProjEq___closed__6, &l_Lean_Meta_Grind_propagateProjEq___closed__6_once, _init_l_Lean_Meta_Grind_propagateProjEq___closed__6);
v___x_273_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_270_, v_options_268_, v___x_272_);
if (v___x_273_ == 0)
{
v___y_215_ = v_parentNew_256_;
v___y_216_ = v___y_257_;
v___y_217_ = v___y_259_;
v___y_218_ = v___y_263_;
v___y_219_ = v___y_264_;
v___y_220_ = v___y_265_;
v___y_221_ = v___y_266_;
goto v___jp_214_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_Grind_updateLastTag(v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref_known(v___x_274_, 1);
lean_inc_ref(v_parentNew_256_);
v___x_275_ = l_Lean_MessageData_ofExpr(v_parentNew_256_);
v___x_276_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v___x_271_, v___x_275_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_dec_ref_known(v___x_276_, 1);
v___y_215_ = v_parentNew_256_;
v___y_216_ = v___y_257_;
v___y_217_ = v___y_259_;
v___y_218_ = v___y_263_;
v___y_219_ = v___y_264_;
v___y_220_ = v___y_265_;
v___y_221_ = v___y_266_;
goto v___jp_214_;
}
else
{
lean_dec_ref(v_parentNew_256_);
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
return v___x_276_;
}
}
else
{
lean_dec_ref(v_parentNew_256_);
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
return v___x_274_;
}
}
}
}
v___jp_277_:
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_Meta_Grind_getGeneration___redArg(v_parent_165_, v___y_279_);
lean_dec_ref(v_parent_165_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_a_290_);
lean_dec_ref_known(v___x_289_, 1);
v___x_291_ = lean_box(0);
lean_inc(v___y_288_);
lean_inc_ref(v___y_287_);
lean_inc(v___y_286_);
lean_inc_ref(v___y_285_);
lean_inc(v___y_284_);
lean_inc_ref(v___y_283_);
lean_inc(v___y_282_);
lean_inc_ref(v___y_281_);
lean_inc(v___y_280_);
lean_inc(v___y_279_);
lean_inc_ref(v_parentNew_278_);
v___x_292_ = lean_grind_internalize(v_parentNew_278_, v_a_290_, v___x_291_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_dec_ref_known(v___x_292_, 1);
v_parentNew_256_ = v_parentNew_278_;
v___y_257_ = v___y_279_;
v___y_258_ = v___y_280_;
v___y_259_ = v___y_281_;
v___y_260_ = v___y_282_;
v___y_261_ = v___y_283_;
v___y_262_ = v___y_284_;
v___y_263_ = v___y_285_;
v___y_264_ = v___y_286_;
v___y_265_ = v___y_287_;
v___y_266_ = v___y_288_;
goto v___jp_255_;
}
else
{
lean_dec_ref(v_parentNew_278_);
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
return v___x_292_;
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref(v_parentNew_278_);
lean_dec_ref(v_self_212_);
lean_del_object(v___x_210_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
v_a_293_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_289_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_289_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
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
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v___x_206_);
lean_del_object(v___x_199_);
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec(v_ctorName_185_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v_a_343_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_207_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_207_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_i_187_);
lean_dec(v_numParams_186_);
lean_dec(v_ctorName_185_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v_a_352_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_196_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_196_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_362_; 
lean_dec(v_a_180_);
lean_dec_ref_known(v_projFn_177_, 2);
lean_dec_ref(v_parent_165_);
v___x_360_ = lean_box(0);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_360_);
v___x_362_ = v___x_182_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v_projFn_177_);
lean_dec_ref(v_parent_165_);
v___x_365_ = lean_box(0);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateProjEq___boxed(lean_object* v_parent_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_Meta_Grind_propagateProjEq(v_parent_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_);
lean_dec(v_a_377_);
lean_dec_ref(v_a_376_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec(v_a_368_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(lean_object* v_cls_380_, lean_object* v_msg_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___redArg(v_cls_380_, v_msg_381_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1___boxed(lean_object* v_cls_394_, lean_object* v_msg_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_addTrace___at___00Lean_Meta_Grind_propagateProjEq_spec__1(v_cls_394_, v_msg_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec(v___y_396_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2(lean_object* v_inst_408_, lean_object* v_R_409_, lean_object* v_a_410_, lean_object* v_b_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_Grind_propagateProjEq_spec__2___redArg(v_a_410_, v_b_411_);
return v___x_412_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Proj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Proj(builtin);
}
#ifdef __cplusplus
}
#endif
